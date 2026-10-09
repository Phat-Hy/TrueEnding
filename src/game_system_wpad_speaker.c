#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80061824(void);
extern void fn_8006A900(void);
extern void fn_8006EF48(void);
extern void fn_8006F2F0(void);
extern void fn_800827E0(void);
extern void fn_80084320(void);
extern void fn_80084F84(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_800E426C(void);
extern void fn_800E4278(void);
extern void fn_801231D0(void);
extern void fn_80149A30(void);
extern void fn_8014DEE4(void);
extern void fn_8016EB48(void);
extern void fn_801E9EA4(void);
extern void fn_801FECE0(void);
extern void fn_8035E7CC(void);
extern void fn_80360B00(void);
extern void fn_8036CFA4(void);
extern void fn_8036D2D0(void);
extern void fn_8036FC58(void);
extern void fn_80370320(void);
extern void fn_8037C69C(void);
extern void fn_8037EF30(void);
extern void fn_80389838(void);
extern void fn_8038F52C(void);
extern void fn_8039328C(void);
extern void fn_803C0F48(void);
extern void fn_803C1560(void);
extern void fn_803D2A6C(void);
extern void fn_803D83A8(void);
extern void fn_803DAB4C(void);
extern void fn_803E4478(void);
extern void fn_8046ECDC(void);
extern void fn_80541214(void);
extern void fn_8054A340(void);
extern void fn_8056BF90(void);
extern void fn_8056F2FC(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078A290[];
extern u8 lbl_8074DA10[];
extern u8 lbl_8074DBF8[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_8078A408[];

/* Small data declarations */
extern u32 lbl_8087DCD0;
extern u32 lbl_8087DCD4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF00;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F490;
extern u32 lbl_8087F518;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA20;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_80885744;
extern u32 lbl_80885750;
extern u32 lbl_80885770;
extern u32 lbl_80885774;
extern u32 lbl_80885778;
extern u32 lbl_8088577C;
extern u32 lbl_80885780;
extern u32 lbl_80885784;
extern u32 lbl_80885788;
extern u32 lbl_8088578C;
extern u32 lbl_80885790;
extern u32 lbl_80885794;

/* Function declarations */
void fn_8036B438(void);
void fn_8036B44C(void);
void fn_8036B748(void);
void fn_8036B7F4(void);
void fn_8036CA60(void);
void fn_8036CC90(void);

asm void fn_8036B438(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x528(r3), 0, 0
    stfs f2, 0x530(r3)
    blr
}

asm void fn_8036B44C(void)
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
lbl_fn_8036B44C_00000038:
    subf r0, r26, r27
    srawi r0, r0, 2
    addze r7, r0
    cmpwi r7, 0x1
    ble lbl_fn_8036B44C_000002FC
    cmpwi r7, 0x14
    bgt lbl_fn_8036B44C_000000C0
    cmplw r26, r27
    beq lbl_fn_8036B44C_000002FC
    subi r0, r27, 0x4
    b lbl_fn_8036B44C_000000B4
lbl_fn_8036B44C_00000064:
    cmplw r26, r27
    mr r5, r26
    beq lbl_fn_8036B44C_00000098
    addi r6, r26, 0x4
    b lbl_fn_8036B44C_00000090
lbl_fn_8036B44C_00000078:
    lwz r4, 0x0(r6)
    lwz r3, 0x0(r5)
    cmplw r4, r3
    bge lbl_fn_8036B44C_0000008C
    mr r5, r6
lbl_fn_8036B44C_0000008C:
    addi r6, r6, 0x4
lbl_fn_8036B44C_00000090:
    cmplw r6, r27
    bne lbl_fn_8036B44C_00000078
lbl_fn_8036B44C_00000098:
    cmplw r5, r26
    beq lbl_fn_8036B44C_000000B0
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r26)
    stw r3, 0x0(r5)
    stw r4, 0x0(r26)
lbl_fn_8036B44C_000000B0:
    addi r26, r26, 0x4
lbl_fn_8036B44C_000000B4:
    cmplw r26, r0
    bne lbl_fn_8036B44C_00000064
    b lbl_fn_8036B44C_000002FC
lbl_fn_8036B44C_000000C0:
    lwz r4, lbl_8087DCD0
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
    blt lbl_fn_8036B44C_00000100
    li r6, -0x4
lbl_fn_8036B44C_00000100:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087DCD0
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
    blt lbl_fn_8036B44C_0000014C
    li r6, -0x4
    stw r6, lbl_8087DCD0
lbl_fn_8036B44C_0000014C:
    subi r29, r27, 0x4
    mr r6, r28
    mr r5, r29
    bl fn_8036B748
    lwz r3, 0x0(r29)
    mr r30, r26
    mr r4, r29
    b lbl_fn_8036B44C_00000170
lbl_fn_8036B44C_0000016C:
    addi r30, r30, 0x4
lbl_fn_8036B44C_00000170:
    lwz r0, 0x0(r30)
    cmplw r0, r3
    blt lbl_fn_8036B44C_0000016C
lbl_fn_8036B44C_0000017C:
    subi r4, r4, 0x4
    cmplw r30, r4
    beq lbl_fn_8036B44C_00000194
    lwz r0, 0x0(r4)
    cmplw r0, r3
    bge lbl_fn_8036B44C_0000017C
lbl_fn_8036B44C_00000194:
    cmplw r30, r4
    bge lbl_fn_8036B44C_000001F4
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8036B44C_000001B8
lbl_fn_8036B44C_000001B4:
    addi r30, r30, 0x4
lbl_fn_8036B44C_000001B8:
    lwz r3, 0x0(r29)
    lwz r0, 0x0(r30)
    cmplw r0, r3
    blt lbl_fn_8036B44C_000001B4
lbl_fn_8036B44C_000001C8:
    lwzu r0, -0x4(r4)
    cmplw r0, r3
    bge lbl_fn_8036B44C_000001C8
    cmplw r30, r4
    bge lbl_fn_8036B44C_000001F4
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8036B44C_000001B8
lbl_fn_8036B44C_000001F4:
    cmplw r30, r26
    bne lbl_fn_8036B44C_000002AC
    lwz r3, 0x0(r30)
    subi r4, r27, 0x4
    lwz r0, 0x0(r29)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r29)
    lwz r3, 0x0(r26)
    lwz r0, -0x4(r27)
    cmplw r3, r0
    blt lbl_fn_8036B44C_00000258
    b lbl_fn_8036B44C_0000022C
lbl_fn_8036B44C_00000228:
    addi r30, r30, 0x4
lbl_fn_8036B44C_0000022C:
    cmplw r30, r27
    beq lbl_fn_8036B44C_00000240
    lwz r0, 0x0(r30)
    cmplw r3, r0
    bge lbl_fn_8036B44C_00000228
lbl_fn_8036B44C_00000240:
    cmplw r30, r4
    bge lbl_fn_8036B44C_00000258
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    stw r3, 0x0(r4)
lbl_fn_8036B44C_00000258:
    cmplw r30, r4
    bge lbl_fn_8036B44C_000002A4
    b lbl_fn_8036B44C_00000268
lbl_fn_8036B44C_00000264:
    addi r30, r30, 0x4
lbl_fn_8036B44C_00000268:
    lwz r3, 0x0(r26)
    lwz r0, 0x0(r30)
    cmplw r3, r0
    bge lbl_fn_8036B44C_00000264
lbl_fn_8036B44C_00000278:
    lwzu r0, -0x4(r4)
    cmplw r3, r0
    blt lbl_fn_8036B44C_00000278
    cmplw r30, r4
    bge lbl_fn_8036B44C_000002A4
    lwz r3, 0x0(r30)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    addi r30, r30, 0x4
    stw r3, 0x0(r4)
    b lbl_fn_8036B44C_00000268
lbl_fn_8036B44C_000002A4:
    mr r26, r30
    b lbl_fn_8036B44C_00000038
lbl_fn_8036B44C_000002AC:
    subf r3, r26, r30
    subf r0, r30, r27
    srawi r3, r3, 2
    addze r3, r3
    srawi r0, r0, 2
    addze r0, r0
    cmpw r3, r0
    bge lbl_fn_8036B44C_000002E4
    mr r3, r26
    mr r4, r30
    mr r5, r28
    bl fn_8036B44C
    mr r26, r30
    b lbl_fn_8036B44C_00000038
lbl_fn_8036B44C_000002E4:
    mr r3, r30
    mr r4, r27
    mr r5, r28
    bl fn_8036B44C
    mr r27, r30
    b lbl_fn_8036B44C_00000038
lbl_fn_8036B44C_000002FC:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036B748(void)
{
    nofralloc
    lwz r9, 0x0(r3)
    lwz r8, 0x0(r5)
    lwz r10, 0x0(r4)
    subf r0, r9, r8
    orc r7, r8, r9
    srwi r6, r0, 1
    subf r7, r6, r7
    subf r0, r8, r10
    orc r6, r10, r8
    srwi r0, r0, 1
    srwi. r7, r7, 31
    subf r0, r0, r6
    srwi r0, r0, 31
    beq lbl_fn_8036B748_00000350
    cmpwi r0, 0x0
    bnelr
lbl_fn_8036B748_00000350:
    cmpwi r7, 0x0
    bne lbl_fn_8036B748_00000374
    cmpwi r0, 0x0
    bne lbl_fn_8036B748_00000374
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r5, 0x0(r4)
    blr
lbl_fn_8036B748_00000374:
    cmplw r10, r9
    bge lbl_fn_8036B748_0000038C
    lwz r6, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    stw r6, 0x0(r4)
lbl_fn_8036B748_0000038C:
    cmpwi r7, 0x0
    beq lbl_fn_8036B748_000003A8
    lwz r3, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    stw r3, 0x0(r5)
    blr
lbl_fn_8036B748_000003A8:
    lwz r4, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    stw r4, 0x0(r5)
    blr
}

asm void fn_8036B7F4(void)
{
    nofralloc
    stwu r1, -0x610(r1)
    mflr r0
    stw r0, 0x614(r1)
    addi r11, r1, 0x5b0
    stfd f31, 0x600(r1)
    psq_st f31, 0x608(r1), 0, 0
    stfd f30, 0x5f0(r1)
    psq_st f30, 0x5f8(r1), 0, 0
    stfd f29, 0x5e0(r1)
    psq_st f29, 0x5e8(r1), 0, 0
    stfd f28, 0x5d0(r1)
    psq_st f28, 0x5d8(r1), 0, 0
    stfd f27, 0x5c0(r1)
    psq_st f27, 0x5c8(r1), 0, 0
    stfd f26, 0x5b0(r1)
    psq_st f26, 0x5b8(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x580(r1)
    mr r27, r3
    lwz r4, 0x184(r4)
    stw r0, 0x588(r1)
    cmpwi r4, 0x0
    beq lbl_fn_8036B7F4_00000AB0
    lwz r4, lbl_8087EEB0
    li r0, 0x13
    lfs f31, lbl_80885770
    stw r0, 0xa0(r4)
    lwz r4, 0x10d8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8036B7F4_00000444
    lwz r0, 0x64(r4)
    b lbl_fn_8036B7F4_00000448
lbl_fn_8036B7F4_00000444:
    li r0, 0x0
lbl_fn_8036B7F4_00000448:
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_00000808
    cmpwi r4, 0x0
    beq lbl_fn_8036B7F4_00000460
    lwz r3, 0x64(r4)
    b lbl_fn_8036B7F4_00000464
lbl_fn_8036B7F4_00000460:
    li r3, 0x0
lbl_fn_8036B7F4_00000464:
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_00000808
    cmpwi r4, 0x0
    beq lbl_fn_8036B7F4_00000480
    lwz r3, 0x64(r4)
    b lbl_fn_8036B7F4_00000484
lbl_fn_8036B7F4_00000480:
    li r3, 0x0
lbl_fn_8036B7F4_00000484:
    lwz r29, 0x54(r3)
    addi r4, r1, 0x180
    lwz r3, lbl_8087EEC8
    li r6, 0x100
    lwz r5, 0x0(r29)
    bl fn_8006F2F0
    lis r28, lbl_8078A408@ha
    addi r3, r1, 0x380
    addi r4, r28, lbl_8078A408@l
    addi r5, r1, 0x180
    addi r6, r29, 0x4
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885774
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885774
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_8088577C
    addi r28, r28, lbl_8078A408@l
    lwz r5, 0x10d0(r27)
    addi r3, r1, 0x380
    fadds f31, f31, f0
    addi r4, r28, 0xc
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885774
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885774
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r4, lbl_8087F8A0
    addi r5, r1, 0x40
    lfs f0, lbl_8088577C
    addi r3, r1, 0x380
    lwz r6, 0x48(r4)
    addi r4, r28, 0x24
    fadds f31, f31, f0
    psq_l f1, 0x528(r6), 0, 0
    lfs f2, 0x530(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x48(r1)
    lfs f1, 0x40(r1)
    lfs f2, 0x44(r1)
    lfs f3, 0x48(r1)
    crset 6
    bl fn_800DD3FC
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885774
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885774
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_8088577C
    lwz r0, 0x54e4(r27)
    fadds f31, f31, f0
    cmpwi r0, 0x8
    bne lbl_fn_8036B7F4_00000750
    lwz r3, lbl_8087F540
    lwz r28, 0x70(r3)
    cmpwi r28, 0x0
    beq lbl_fn_8036B7F4_00000750
    lwz r5, 0x4c(r28)
    cmpwi r5, 0x0
    beq lbl_fn_8036B7F4_00000678
    b lbl_fn_8036B7F4_0000067C
lbl_fn_8036B7F4_00000678:
    la r5, lbl_8087EF00
lbl_fn_8036B7F4_0000067C:
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x180
    li r6, 0x100
    bl fn_8006F2F0
    mr r3, r28
    bl fn_80541214
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_000006C8
    mr r3, r28
    bl fn_80541214
    lis r4, lbl_8078A408@ha
    lwz r6, 0xc(r3)
    addi r4, r4, lbl_8078A408@l
    addi r3, r1, 0x380
    addi r4, r4, 0x50
    addi r5, r1, 0x180
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8036B7F4_000006E4
lbl_fn_8036B7F4_000006C8:
    lis r4, lbl_8078A408@ha
    addi r3, r1, 0x380
    addi r4, r4, lbl_8078A408@l
    addi r5, r1, 0x180
    addi r4, r4, 0x74
    crclr 6
    bl fn_800DD3FC
lbl_fn_8036B7F4_000006E4:
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885774
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885774
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_8088577C
    fadds f31, f31, f0
lbl_fn_8036B7F4_00000750:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_00000808
    lis r3, 0x8889
    lwz r5, 0x5744(r27)
    subi r0, r3, 0x7777
    lis r4, lbl_8078A408@ha
    mulhwu r5, r0, r5
    addi r3, r1, 0x380
    addi r4, r4, lbl_8078A408@l
    addi r4, r4, 0x88
    srwi r6, r5, 4
    mulhwu r0, r0, r6
    srwi r5, r0, 5
    mulli r0, r5, 0x3c
    subf r6, r0, r6
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885774
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f3, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885774
    fmr f6, f3
    fmr f7, f3
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fmr f8, f3
    li r5, -0x1
    fsubs f1, f0, f1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_8088577C
    fadds f31, f31, f0
lbl_fn_8036B7F4_00000808:
    bl fn_800827E0
    lwz r12, 0x138(r3)
    mr r29, r3
    lwz r12, 0x14(r12)
    mtctr r12
    addi r3, r3, 0x138
    bctrl
    lwz r12, 0x138(r29)
    mr r28, r3
    addi r3, r29, 0x138
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    subf r3, r3, r28
    lis r30, lbl_8074DBF8@ha
    addi r0, r3, 0x4
    stw r0, 0x584(r1)
    lfd f4, lbl_8074DBF8@l(r30)
    lfd f3, 0x580(r1)
    lfs f0, lbl_80885780
    fsubs f3, f3, f4
    fdivs f30, f3, f0
    bl fn_800827E0
    lwz r12, 0x150(r3)
    mr r29, r3
    lwz r12, 0x14(r12)
    mtctr r12
    addi r3, r3, 0x150
    bctrl
    lwz r12, 0x150(r29)
    mr r28, r3
    addi r3, r29, 0x150
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    subf r3, r3, r28
    lfd f4, lbl_8074DBF8@l(r30)
    addi r0, r3, 0x4
    stw r0, 0x58c(r1)
    lfs f0, lbl_80885780
    lfd f3, 0x588(r1)
    fsubs f3, f3, f4
    fdivs f29, f3, f0
    bl fn_800827E0
    lwz r12, 0x168(r3)
    mr r29, r3
    lwz r12, 0x14(r12)
    mtctr r12
    addi r3, r3, 0x168
    bctrl
    lwz r12, 0x168(r29)
    mr r28, r3
    addi r3, r29, 0x168
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    subf r3, r3, r28
    lfd f4, lbl_8074DBF8@l(r30)
    addi r0, r3, 0x4
    stw r0, 0x584(r1)
    lfs f0, lbl_80885780
    lfd f3, 0x580(r1)
    fsubs f3, f3, f4
    fdivs f28, f3, f0
    bl fn_800827E0
    addi r3, r3, 0x138
    bl fn_80084F84
    stw r3, 0x58c(r1)
    lfd f4, lbl_8074DBF8@l(r30)
    lfd f3, 0x588(r1)
    lfs f0, lbl_80885780
    fsubs f3, f3, f4
    fdivs f27, f3, f0
    bl fn_800827E0
    addi r3, r3, 0x150
    bl fn_80084F84
    stw r3, 0x584(r1)
    lfd f4, lbl_8074DBF8@l(r30)
    lfd f3, 0x580(r1)
    lfs f0, lbl_80885780
    fsubs f3, f3, f4
    fdivs f26, f3, f0
    bl fn_800827E0
    addi r3, r3, 0x168
    bl fn_80084F84
    stw r3, 0x58c(r1)
    lis r28, lbl_8074DC1C@ha
    addi r28, r28, lbl_8074DC1C@l
    lfd f4, lbl_8074DBF8@l(r30)
    lfd f3, 0x588(r1)
    fadds f1, f27, f26
    lfs f0, lbl_80885780
    fadds f2, f30, f29
    fsubs f3, f3, f4
    addi r3, r1, 0x80
    addi r4, r28, 0x131
    fdivs f26, f3, f0
    crset 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    addi r5, r1, 0x80
    li r6, 0x100
    bl fn_8006F2F0
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885784
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f6, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885784
    fmr f7, f6
    fmr f8, f6
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fsubs f1, f0, f1
    lfs f3, lbl_80885788
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lfs f0, lbl_8088578C
    fmr f1, f26
    fmr f2, f28
    addi r3, r1, 0x80
    fadds f31, f31, f0
    addi r4, r28, 0x147
    crset 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    addi r5, r1, 0x80
    li r6, 0x100
    bl fn_8006F2F0
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x380
    lfs f1, lbl_80885784
    li r5, 0x1
    lfs f2, lbl_8088570C
    li r6, 0x1
    bl fn_8006EF48
    lfs f6, lbl_8088570C
    fmr f2, f31
    lfs f0, lbl_80885778
    addi r4, r1, 0x380
    lfs f4, lbl_80885784
    fmr f7, f6
    fmr f8, f6
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    fsubs f1, f0, f1
    lfs f3, lbl_80885788
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r3, lbl_8087EEB0
    li r0, 0x12
    stw r0, 0xa0(r3)
lbl_fn_8036B7F4_00000AB0:
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x5538(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_00000AF4
    lwz r0, 0x5538(r27)
    cmpwi r0, 0x1
    bne lbl_fn_8036B7F4_00000AE0
    lwz r3, 0x5624(r27)
    bl fn_8006A900
lbl_fn_8036B7F4_00000AE0:
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015E0
lbl_fn_8036B7F4_00000AF4:
    lwz r0, 0x563c(r27)
    cmpwi r0, 0x0
    blt lbl_fn_8036B7F4_00000B18
    lwz r3, 0x5624(r27)
    stw r0, 0x78(r3)
    lwz r3, 0x5624(r27)
    bl fn_8006A900
    li r0, -0x1
    stw r0, 0x563c(r27)
lbl_fn_8036B7F4_00000B18:
    lwz r3, lbl_8087F120
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000B30
    bl fn_801E9EA4
lbl_fn_8036B7F4_00000B30:
    lwz r3, lbl_8087F120
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x54e4(r27)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r3, 0x48(r3)
    bne lbl_fn_8036B7F4_00000BB4
    lwz r0, 0x868(r27)
    cmpwi r0, 0x6
    beq lbl_fn_8036B7F4_00000BB4
    cmpwi r0, 0x5
    beq lbl_fn_8036B7F4_00000BB4
    lwz r4, 0x648(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8036B7F4_00000B80
    lwz r0, 0x4(r4)
    cmpwi r0, 0x1
    beq lbl_fn_8036B7F4_00000BA4
lbl_fn_8036B7F4_00000B80:
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_8036B7F4_00000BB4
    lwz r3, 0x50(r3)
    subis r0, r3, 0xa
    cmplwi r0, 0xae76
    beq lbl_fn_8036B7F4_00000BA4
    cmplwi r0, 0xae77
    bne lbl_fn_8036B7F4_00000BB4
lbl_fn_8036B7F4_00000BA4:
    lwz r3, lbl_8087F120
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036B7F4_00000BB4:
    lwz r3, lbl_8087F490
    bl fn_803D2A6C
    lwz r3, lbl_8087F490
    bl fn_803D83A8
    lwz r0, 0x54e4(r27)
    li r29, 0x0
    lwz r3, lbl_8087F9C0
    li r28, 0x0
    cmplwi r0, 0xe
    lwz r30, 0x8(r3)
    bgt lbl_fn_8036B7F4_000015C8
    lis r3, jumptable_8078A290@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078A290@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
    lwz r3, 0x868(r27)
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_8036B7F4_00000C3C
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_800E426C
lbl_fn_8036B7F4_00000C3C:
    lwz r3, 0x56d4(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_00000C4C
    bl fn_80149A30
lbl_fn_8036B7F4_00000C4C:
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x868(r27)
    cmpwi r3, 0x6
    bne lbl_fn_8036B7F4_00000C7C
    lwz r0, 0x86c(r27)
    cmpw r3, r0
    bne lbl_fn_8036B7F4_00000C7C
    li r29, 0x1
    b lbl_fn_8036B7F4_00000CD4
lbl_fn_8036B7F4_00000C7C:
    cmpwi r3, 0x7
    bne lbl_fn_8036B7F4_00000C90
    li r29, 0x1
    li r28, 0x1
    b lbl_fn_8036B7F4_00000CD4
lbl_fn_8036B7F4_00000C90:
    cmpwi r3, 0x5
    bne lbl_fn_8036B7F4_00000CD4
    lwz r0, lbl_8087F610
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r3, 0x48(r3)
    beq lbl_fn_8036B7F4_00000CD4
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_00000CD4
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8036B7F4_00000CD4
    lwz r0, 0x560(r3)
    cmpwi r0, 0xd
    bne lbl_fn_8036B7F4_00000CD4
    li r29, 0x1
    li r28, 0x1
lbl_fn_8036B7F4_00000CD4:
    lwz r0, 0x5590(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r0, 0x5594(r27)
    lwz r31, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_00000CFC
    lwz r0, 0x55a4(r27)
    cmpwi r0, 0x0
    bgt lbl_fn_8036B7F4_00000D08
lbl_fn_8036B7F4_00000CFC:
    lwz r0, 0x55b8(r27)
    cmpwi r0, 0x0
    ble lbl_fn_8036B7F4_00000F1C
lbl_fn_8036B7F4_00000D08:
    cmpwi r30, 0x0
    bne lbl_fn_8036B7F4_00000D38
    lwz r3, 0xb08(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000D38
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_00000D68
lbl_fn_8036B7F4_00000D38:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000DC4
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000DC4
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000DC4
lbl_fn_8036B7F4_00000D68:
    lis r4, lbl_8074DA10@ha
    lfs f1, lbl_80885708
    addi r4, r4, lbl_8074DA10@l
    addi r3, r1, 0xc
    lwz r4, 0x14(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000DB0
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000DB0:
    lwz r3, 0xb08(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000DC4:
    cmpwi r30, 0x0
    bne lbl_fn_8036B7F4_00000DF4
    lwz r3, 0xb08(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_00000DF4
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_00000E24
lbl_fn_8036B7F4_00000DF4:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000EB4
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_00000EB4
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000EB4
lbl_fn_8036B7F4_00000E24:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000E70
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb10(r31)
    lfs f3, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_000015C8
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000E70:
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb08(r31)
    lfs f3, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_000015C8
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000EB4:
    cmpwi r30, 0x0
    bne lbl_fn_8036B7F4_00000ED0
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000EEC
lbl_fn_8036B7F4_00000ED0:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000EEC:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000F08
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000F08:
    lwz r3, 0xb08(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8036B7F4_000015C8
lbl_fn_8036B7F4_00000F1C:
    cmpwi r30, 0x0
    bne lbl_fn_8036B7F4_00000F4C
    lwz r3, 0xb08(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000F7C
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000F7C
lbl_fn_8036B7F4_00000F4C:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_00000FA8
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_00000F7C
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_00000FA8
lbl_fn_8036B7F4_00000F7C:
    lis r4, lbl_8074DA10@ha
    lfs f1, lbl_80885708
    addi r4, r4, lbl_8074DA10@l
    addi r3, r1, 0x8
    lwz r4, 0x18(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8036B7F4_00000FA8:
    lwz r3, 0xb08(r31)
    lfs f0, lbl_8088570C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb0c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb10(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb14(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb18(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb1c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb20(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xb08(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb0c(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb10(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0xb14(r31)
    stfs f0, 0x100(r3)
    b lbl_fn_8036B7F4_000015C8
    lwz r30, lbl_8087F490
    lwz r4, 0xb20(r30)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_000010A4
    lwz r3, 0xb1c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_000010A4
    lfs f3, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_000010A4
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r3, 0xb1c(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036B7F4_000010A4:
    lwz r3, 0xb18(r30)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_000010E0
    lfs f3, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_000010E0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036B7F4_000010E0:
    lwz r0, 0x5598(r27)
    lwz r3, 0x5590(r27)
    neg r4, r0
    bl fn_8056F2FC
    lwz r0, 0x10ac(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r0, 0x5598(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8036B7F4_000015C8
    lwz r4, 0xb1c(r30)
    lis r3, lbl_8074DC1C@ha
    addi r3, r3, lbl_8074DC1C@l
    addi r3, r3, 0x15d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088570C
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    li r29, 0x1
    b lbl_fn_8036B7F4_000015C8
    lwz r4, lbl_8087F490
    lwz r5, 0xb20(r4)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_0000119C
    lwz r3, 0xb1c(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8036B7F4_0000119C
    lfs f3, 0xa0(r5)
    lfs f0, 0x100(r5)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_0000119C
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
    lwz r3, 0xb1c(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8036B7F4_0000119C:
    lwz r3, 0xb18(r4)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036B7F4_000011D8
    lfs f3, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f3
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8036B7F4_000011D8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8036B7F4_000011D8:
    lwz r0, 0x10ac(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r4, 0xb1c(r4)
    lis r3, lbl_8074DC1C@ha
    addi r3, r3, lbl_8074DC1C@l
    addi r3, r3, 0x15d
    addi r29, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088570C
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r3, lbl_8087F9F8
    li r29, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8036B7F4_000015C8
    li r28, 0x1
    b lbl_fn_8036B7F4_000015C8
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x5590(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r3, lbl_8087F490
    lfs f0, lbl_8088570C
    lwz r4, 0xb08(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb0c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb10(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb14(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb18(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb1c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb20(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb08(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb0c(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb10(r3)
    stfs f0, 0x100(r4)
    lwz r3, 0xb14(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_8036B7F4_000015C8
    addi r3, r27, 0xd18
    bl fn_8037C69C
    lwz r0, 0x5590(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8036B7F4_000015C8
    lwz r3, lbl_8087F490
    lfs f0, lbl_8088570C
    lwz r4, 0xb08(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb0c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb10(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb14(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb18(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb1c(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb20(r3)
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lwz r4, 0xb08(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb0c(r3)
    stfs f0, 0x100(r4)
    lwz r4, 0xb10(r3)
    stfs f0, 0x100(r4)
    lwz r3, 0xb14(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_8036B7F4_000015C8
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
    lwz r3, 0x5620(r27)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x56e4(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8036B7F4_00001594
    lwz r8, 0x10d8(r27)
    li r6, 0x0
    lwz r3, lbl_8087F8A0
    li r7, 0x0
    lwz r0, 0x78(r8)
    lwz r3, 0x48(r3)
    lwz r5, 0x56e8(r27)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8036B7F4_00001410
lbl_fn_8036B7F4_000013E8:
    lwz r4, 0x7c(r8)
    lwzx r0, r4, r7
    cmpw r5, r0
    bne lbl_fn_8036B7F4_00001404
    mulli r0, r6, 0x28
    add r30, r4, r0
    b lbl_fn_8036B7F4_00001414
lbl_fn_8036B7F4_00001404:
    addi r7, r7, 0x28
    addi r6, r6, 0x1
    bdnz lbl_fn_8036B7F4_000013E8
lbl_fn_8036B7F4_00001410:
    li r30, 0x0
lbl_fn_8036B7F4_00001414:
    cmpwi r30, 0x0
    beq lbl_fn_8036B7F4_000015BC
    lfs f2, 0xc(r30)
    addi r7, r1, 0x1c
    psq_l f1, 0x4(r30), 0, 0
    li r4, 0x0
    psq_st f1, 0x528(r3), 0, 0
    li r5, 0x0
    lfs f0, lbl_8088570C
    li r6, 0x0
    stfs f2, 0x530(r3)
    fmr f2, f0
    lfs f3, 0x14(r30)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f0, 0x24(r1)
    stfs f2, 0x53c(r3)
    bl fn_8016EB48
    lfs f1, lbl_80885744
    addi r3, r27, 0x6c
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
    lis r3, 0x9
    lwz r4, 0x10d0(r27)
    addi r0, r3, 0x27c0
    cmpw r4, r0
    blt lbl_fn_8036B7F4_000015BC
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8054A340
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8036B7F4_000015BC
    lfs f3, lbl_80885750
    addi r3, r1, 0x50
    lfs f0, lbl_8088570C
    li r4, 0x79
    stfs f3, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    lfs f1, 0x14(r30)
    bl fn_805F8E70
    addi r4, r1, 0x34
    addi r3, r1, 0x50
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0xc(r30)
    addi r4, r1, 0x28
    lfs f0, 0x3c(r1)
    lis r5, 0x8000
    lfs f5, 0x8(r30)
    li r6, 0x0
    fadds f6, f3, f0
    lfs f4, 0x38(r1)
    lfs f3, 0x4(r30)
    li r7, 0x0
    lfs f0, 0x34(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x30(r1)
    lfs f1, lbl_80885744
    li r8, 0x1
    stfs f4, 0x2c(r1)
    stfs f0, 0x28(r1)
    lwz r3, 0x10d8(r27)
    bl fn_803C1560
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_000015BC
    subi r0, r3, 0x1
    lwz r3, 0x10d8(r27)
    mulli r0, r0, 0x30
    lfs f0, lbl_8088570C
    lwz r4, 0x9c(r3)
    addi r7, r1, 0x10
    stfs f0, 0x10(r1)
    mr r3, r31
    add r5, r4, r0
    stfs f0, 0x18(r1)
    lfs f2, 0xc(r5)
    li r4, 0x0
    psq_l f1, 0x4(r5), 0, 0
    li r5, 0x0
    psq_st f1, 0x528(r31), 0, 0
    li r6, 0x0
    stfs f2, 0x530(r31)
    fmr f2, f0
    lfs f0, 0x14(r30)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bl fn_8016EB48
    b lbl_fn_8036B7F4_000015BC
lbl_fn_8036B7F4_00001594:
    cmpwi r0, 0x5
    ble lbl_fn_8036B7F4_000015BC
    lwz r3, lbl_8087FA20
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_000015B4
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8036B7F4_000015BC
lbl_fn_8036B7F4_000015B4:
    mr r3, r27
    bl fn_8036FC58
lbl_fn_8036B7F4_000015BC:
    lwz r3, 0x56e4(r27)
    addi r0, r3, 0x1
    stw r0, 0x56e4(r27)
lbl_fn_8036B7F4_000015C8:
    lwz r3, lbl_8087F490
    mr r4, r29
    mr r5, r28
    bl fn_803DAB4C
    addi r3, r27, 0x6c
    bl fn_8039328C
lbl_fn_8036B7F4_000015E0:
    addi r11, r1, 0x5b0
    psq_l f31, 0x608(r1), 0, 0
    lfd f31, 0x600(r1)
    psq_l f30, 0x5f8(r1), 0, 0
    lfd f30, 0x5f0(r1)
    psq_l f29, 0x5e8(r1), 0, 0
    lfd f29, 0x5e0(r1)
    psq_l f28, 0x5d8(r1), 0, 0
    lfd f28, 0x5d0(r1)
    psq_l f27, 0x5c8(r1), 0, 0
    lfd f27, 0x5c0(r1)
    psq_l f26, 0x5b8(r1), 0, 0
    lfd f26, 0x5b0(r1)
    bl _restgpr_27
    lwz r0, 0x614(r1)
    mtlr r0
    addi r1, r1, 0x610
    blr
}

asm void fn_8036CA60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    lwz r3, 0x10d8(r3)
    bl fn_800D246C
    cmpwi r30, 0x0
    ble lbl_fn_8036CA60_00001670
    lwz r3, 0x10d8(r29)
    mr r4, r30
    bl fn_803C0F48
    b lbl_fn_8036CA60_0000167C
lbl_fn_8036CA60_00001670:
    lwz r3, 0x10d8(r29)
    lwz r4, 0x70(r3)
    bl fn_803C0F48
lbl_fn_8036CA60_0000167C:
    lwz r4, 0x870(r29)
    addi r3, r29, 0x6c
    bl fn_80389838
    lfs f1, lbl_80885744
    addi r3, r29, 0x6c
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
    lwz r3, 0x10d8(r29)
    lwz r31, 0x64(r3)
    lwz r3, 0x48(r31)
    subi r0, r3, 0x2
    cmplwi r0, 0x2
    bgt lbl_fn_8036CA60_00001788
    lwz r3, lbl_8087F408
    lwz r28, 0x48(r3)
    b lbl_fn_8036CA60_000016E8
lbl_fn_8036CA60_000016C0:
    lwz r0, 0x137c(r28)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8036CA60_000016E4
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8036CA60_000016E4:
    lwz r28, 0x14ac(r28)
lbl_fn_8036CA60_000016E8:
    cmpwi r28, 0x0
    bne lbl_fn_8036CA60_000016C0
    lwz r3, lbl_8087F8A0
    lwz r28, 0x48(r3)
    b lbl_fn_8036CA60_00001724
lbl_fn_8036CA60_000016FC:
    lwz r0, 0x137c(r28)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_8036CA60_00001720
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8036CA60_00001720:
    lwz r28, 0x14ac(r28)
lbl_fn_8036CA60_00001724:
    cmpwi r28, 0x0
    bne lbl_fn_8036CA60_000016FC
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8036CA60_00001788
    lwz r0, 0x5590(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8036CA60_00001788
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x9
    bne lbl_fn_8036CA60_00001788
    lis r5, lbl_8074DC1C@ha
    lis r3, 0x6
    addi r5, r5, lbl_8074DC1C@l
    li r4, 0x1
    mr r6, r5
    subi r3, r3, 0x4244
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8036CA60_0000177C
    bl fn_8056BF90
lbl_fn_8036CA60_0000177C:
    stw r3, 0x5590(r29)
    lwz r4, lbl_8087F3C0
    stw r3, 0xcc(r4)
lbl_fn_8036CA60_00001788:
    lwz r4, 0x10e0(r29)
    lwz r3, lbl_8087F8A0
    cmpwi r4, 0x0
    lwz r0, 0x48(r3)
    beq lbl_fn_8036CA60_000017A0
    stw r0, 0x50(r4)
lbl_fn_8036CA60_000017A0:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_8036CA60_0000180C
    lwz r0, 0x50(r3)
    cmpwi r0, 0x5
    beq lbl_fn_8036CA60_00001804
    lwz r4, 0x10d8(r29)
    lwz r4, 0x64(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8036CA60_000017FC
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8036CA60_000017FC
    lwz r0, 0x4c(r4)
    cmpwi r0, 0x29
    bne lbl_fn_8036CA60_000017FC
    lwz r0, 0x50(r4)
    cmpwi r0, 0xd
    bne lbl_fn_8036CA60_000017FC
    cmpwi r30, 0x64
    bne lbl_fn_8036CA60_000017FC
    li r0, 0x3
    stw r0, 0x74(r3)
lbl_fn_8036CA60_000017FC:
    lwz r3, lbl_8087F418
    bl fn_8035E7CC
lbl_fn_8036CA60_00001804:
    lwz r3, lbl_8087F418
    bl fn_80360B00
lbl_fn_8036CA60_0000180C:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x2
    bne lbl_fn_8036CA60_00001838
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x28
    bne lbl_fn_8036CA60_00001838
    lwz r0, 0x50(r31)
    cmpwi r0, 0x4
    bne lbl_fn_8036CA60_00001838
    li r0, 0x1
    stw r0, 0x1f48(r29)
lbl_fn_8036CA60_00001838:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8036CC90(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    addi r3, r3, 0x6c
    stw r30, 0x58(r1)
    lwz r4, lbl_8087F8A0
    lwz r30, 0x48(r4)
    mr r4, r30
    bl fn_8038F52C
    lwz r0, 0x868(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8036CC90_000018C4
    lwz r3, 0x38(r30)
    rlwinm r0, r3, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8036CC90_000018C4
    clrlwi r0, r3, 31
    cmplwi r0, 0x1
    beq lbl_fn_8036CC90_000018C4
    lwz r0, 0x56d4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8036CC90_000018C4
    mr r3, r30
    mr r4, r31
    bl fn_800E4278
lbl_fn_8036CC90_000018C4:
    mr r3, r31
    bl fn_8036CFA4
    lwz r3, 0x868(r31)
    lwz r8, lbl_8087EFA8
    subi r0, r3, 0x3
    lwz r7, 0xd4(r8)
    cmplwi r0, 0x1
    lwz r6, 0xd8(r8)
    lwz r5, 0xdc(r8)
    lwz r4, 0xe0(r8)
    lfs f7, 0xe4(r8)
    lfs f6, 0xe8(r8)
    lfs f5, 0xec(r8)
    lfs f0, 0xf0(r8)
    lwz r3, 0xf4(r8)
    lwz r0, 0xf8(r8)
    lfs f4, 0xfc(r8)
    lfs f3, 0x100(r8)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stfs f7, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f0, 0x44(r1)
    stw r3, 0x48(r1)
    stw r0, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f3, 0x54(r1)
    bgt lbl_fn_8036CC90_0000197C
    stw r7, 0xd4(r8)
    lfs f0, lbl_80885790
    stw r6, 0xd8(r8)
    stw r5, 0xdc(r8)
    stw r4, 0xe0(r8)
    stfs f7, 0xe4(r8)
    stfs f6, 0xe8(r8)
    stfs f5, 0xec(r8)
    stfs f0, 0xf0(r8)
    stw r3, 0xf4(r8)
    stw r0, 0xf8(r8)
    stfs f4, 0xfc(r8)
    stfs f0, 0x44(r1)
    stfs f3, 0x100(r8)
    b lbl_fn_8036CC90_00001A58
lbl_fn_8036CC90_0000197C:
    lwz r4, 0x10d8(r31)
    cmpwi r4, 0x0
    beq lbl_fn_8036CC90_00001990
    lwz r0, 0x64(r4)
    b lbl_fn_8036CC90_00001994
lbl_fn_8036CC90_00001990:
    li r0, 0x0
lbl_fn_8036CC90_00001994:
    cmpwi r0, 0x0
    beq lbl_fn_8036CC90_00001A58
    cmpwi r4, 0x0
    beq lbl_fn_8036CC90_000019AC
    lwz r3, 0x64(r4)
    b lbl_fn_8036CC90_000019B0
lbl_fn_8036CC90_000019AC:
    li r3, 0x0
lbl_fn_8036CC90_000019B0:
    lfs f4, 0xb8(r31)
    lfs f0, lbl_80885794
    lfs f3, 0xf0(r3)
    fcmpo cr0, f4, f0
    stfs f3, 0x44(r1)
    bge lbl_fn_8036CC90_000019F4
    fdivs f4, f4, f0
    cmpwi r4, 0x0
    beq lbl_fn_8036CC90_000019DC
    lwz r3, 0x64(r4)
    b lbl_fn_8036CC90_000019E0
lbl_fn_8036CC90_000019DC:
    li r3, 0x0
lbl_fn_8036CC90_000019E0:
    lfs f0, 0xf0(r3)
    lfs f3, lbl_8087DCD4
    fsubs f0, f0, f3
    fmadds f0, f4, f0, f3
    stfs f0, 0x44(r1)
lbl_fn_8036CC90_000019F4:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x28(r1)
    stw r0, 0xd4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0xd8(r3)
    lwz r0, 0x30(r1)
    stw r0, 0xdc(r3)
    lwz r0, 0x34(r1)
    stw r0, 0xe0(r3)
    lfs f0, 0x38(r1)
    stfs f0, 0xe4(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0xe8(r3)
    lfs f0, 0x40(r1)
    stfs f0, 0xec(r3)
    lfs f0, 0x44(r1)
    stfs f0, 0xf0(r3)
    lwz r0, 0x48(r1)
    stw r0, 0xf4(r3)
    lwz r0, 0x4c(r1)
    stw r0, 0xf8(r3)
    lfs f0, 0x50(r1)
    stfs f0, 0xfc(r3)
    lfs f0, 0x54(r1)
    stfs f0, 0x100(r3)
lbl_fn_8036CC90_00001A58:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8036CC90_00001A70
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0xd4(r3)
lbl_fn_8036CC90_00001A70:
    mr r3, r31
    bl fn_8036D2D0
    lwz r3, lbl_8087F0A8
    li r4, 0x8
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8036CC90_00001B2C
    lwz r3, lbl_8087F490
    lwz r0, 0xd8c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8036CC90_00001B2C
    bl fn_803E4478
    mr r3, r31
    li r4, 0xac
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r6, lbl_8087F8A0
    li r4, 0x0
    lfs f2, lbl_8088570C
    li r5, 0x5
    cmpwi r6, 0x0
    li r3, 0x96
    li r0, 0x3
    sth r5, 0x8(r1)
    sth r4, 0xa(r1)
    stw r3, 0x10(r1)
    stfs f2, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f2, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r0, 0xc(r1)
    beq lbl_fn_8036CC90_00001B2C
    lwz r7, 0x48(r6)
    cmpwi r7, 0x0
    beq lbl_fn_8036CC90_00001B2C
    sth r5, 0x1470(r7)
    addi r6, r1, 0x14
    addi r5, r7, 0x147c
    psq_l f1, 0x0(r6), 0, 0
    sth r4, 0x1472(r7)
    stw r0, 0x1474(r7)
    stw r3, 0x1478(r7)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x1484(r7)
    stw r4, 0x1488(r7)
lbl_fn_8036CC90_00001B2C:
    lwz r3, 0x55b8(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8036CC90_00001B40
    subi r0, r3, 0x1
    stw r0, 0x55b8(r31)
lbl_fn_8036CC90_00001B40:
    lwz r3, 0x55bc(r31)
    cmpwi r3, 0x0
    ble lbl_fn_8036CC90_00001B54
    subi r0, r3, 0x1
    stw r0, 0x55bc(r31)
lbl_fn_8036CC90_00001B54:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
