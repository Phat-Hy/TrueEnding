#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void GXInit(void);
extern void OSDisableInterrupts(void);
extern void OSInitThreadQueue(void);
extern void OSPanic(const char* file, int line, const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void OSSleepThread(void);
extern void VIGetTvFormat(void);
extern void __files(void);
extern void _restgpr_19(void);
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80050A1C(void);
extern void fn_800629F0(void);
extern void fn_800697D8(void);
extern void fn_8006D680(void);
extern void fn_80072BDC(void);
extern void fn_80072D74(void);
extern void fn_80072E08(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800839EC(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_805F9640(void);
extern void fn_805F97D0(void);
extern void fn_805F9990(void);
extern void fn_806036E0(void);
extern void fn_80603730(void);
extern void fn_80603FF0(void);
extern void fn_80604580(void);
extern void fn_80604FB0(void);
extern void fn_806050D0(void);
extern void fn_80605140(void);
extern void fn_806052C0(void);
extern void fn_80607120(void);
extern void fn_80612A60(void);
extern void fn_80612AF0(void);
extern void fn_80612B10(void);
extern void fn_80612B60(void);
extern void fn_80612E70(void);
extern void fn_80613950(void);
extern void fn_80613C60(void);
extern void fn_80613FF0(void);
extern void fn_80614190(void);
extern void fn_80614B20(void);
extern void fn_80614C80(void);
extern void fn_80614CC0(void);
extern void fn_80614D00(void);
extern void fn_80614D30(void);
extern void fn_80614E90(void);
extern void fn_806150C0(void);
extern void fn_80615190(void);
extern void fn_80615210(void);
extern void fn_80615400(void);
extern void fn_80615420(void);
extern void fn_80615560(void);
extern void fn_80616400(void);
extern void fn_806167B0(void);
extern void fn_80617DA0(void);
extern void fn_80617E00(void);
extern void fn_80617E70(void);
extern void fn_80618290(void);
extern void fn_80618570(void);
extern void fn_806185C0(void);
extern void fn_80624830(void);
extern void fn_80624910(void);
extern void fn_806249F0(void);
extern void fn_80680770(void);
extern void fn_806846C4(void);
extern void fn_806846CC(void);
extern void fn_80686A48(void);
extern void fn_80686EA4(void);
extern void fn_80695D84(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80731530[];
extern u8 lbl_80731538[];
extern u8 lbl_807316A0[];
extern u8 lbl_807316A8[];
extern u8 lbl_807316B0[];
extern u8 lbl_807316C8[];
extern u8 lbl_807317C0[];
extern u8 lbl_80777BF8[];
extern u8 lbl_807B093C[];
extern u8 lbl_807B0978[];
extern u8 lbl_807B09F0[];
extern u8 lbl_807B0A2C[];
extern u8 lbl_807B0AA4[];
extern u8 lbl_807B0B1C[];
extern u8 lbl_807B0B58[];
extern u8 lbl_807C6F60[];
extern u8 lbl_807C6F68[];

/* Small data declarations */
extern u32 lbl_8087D734;
extern u32 lbl_8087D736;
extern u32 lbl_8087D738;
extern u32 lbl_8087D73C;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EED8;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_80880A38;
extern u32 lbl_80880A40;
extern u32 lbl_80880A48;
extern u32 lbl_80880A50;
extern u32 lbl_80880A58;
extern u32 lbl_80880A5C;
extern u32 lbl_80880A60;
extern u32 lbl_80880A64;
extern u32 lbl_80880A68;
extern u32 lbl_80880A70;
extern u32 lbl_80880A74;

/* Function declarations */
void fn_8006EF48(void);
void fn_8006F17C(void);
void fn_8006F2F0(void);
void fn_8006F420(void);
void fn_8006F548(void);
void fn_8006F5E8(void);
void fn_8006F684(void);
void fn_8006F72C(void);
void fn_8006FA4C(void);
void fn_8006FAB0(void);
void fn_8006FDD8(void);
void fn_8006FE08(void);
void fn_8006FEBC(void);
void fn_800704DC(void);
void fn_800709F4(void);
void fn_80070A70(void);
void fn_80070B60(void);
void fn_80070C98(void);
void fn_80070D04(void);
void fn_80070E14(void);
void fn_80071088(void);
void fn_80071220(void);
void fn_80071274(void);
void fn_800713D4(void);
void fn_8007192C(void);
void fn_80071AFC(void);
void fn_80071D60(void);
void fn_80071D68(void);
void fn_80071D74(void);
void fn_80071D80(void);

asm void fn_8006EF48(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x50
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    stfd f25, 0x60(r1)
    psq_st f25, 0x68(r1), 0, 0
    stfd f24, 0x50(r1)
    psq_st f24, 0x58(r1), 0, 0
    bl _savegpr_25
    fmr f29, f1
    mr r28, r4
    fmr f30, f2
    lfs f31, lbl_80880A38
    mr r27, r3
    mr r25, r5
    mr r29, r6
    mr r3, r28
    bl fn_80686A48
    cmpwi r25, 0x0
    mr r31, r3
    beq lbl_fn_8006EF48_000001A4
    lfs f0, lbl_80880A38
    lis r3, lbl_80731530@ha
    lfs f27, lbl_80880A50
    li r30, 0x0
    fmuls f28, f29, f0
    lfd f24, lbl_80731530@l(r3)
    lfs f25, lbl_80880A40
    lis r26, 0x4330
    lfs f26, lbl_80880A48
    b lbl_fn_8006EF48_00000198
lbl_fn_8006EF48_000000AC:
    lhz r25, 0x0(r28)
    fmr f1, f29
    mr r3, r27
    mr r5, r29
    mr r4, r25
    addi r6, r1, 0x8
    bl fn_8006D680
    cmpwi r3, 0x0
    beq lbl_fn_8006EF48_00000174
    lwz r0, 0x14(r1)
    lwz r4, 0x10(r1)
    mulli r5, r0, 0xe0
    lwz r3, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r26, 0x18(r1)
    mulli r6, r4, 0x70
    add r5, r27, r5
    stw r26, 0x20(r1)
    mulli r4, r3, 0x1c
    stw r26, 0x28(r1)
    add r3, r6, r5
    add r3, r4, r3
    mulli r0, r0, 0xe
    lwz r3, 0xa98(r3)
    add r4, r3, r0
    lha r3, 0x8(r4)
    lha r0, 0xa(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    xoris r3, r0, 0x8000
    lha r0, 0xc(r4)
    lfd f0, 0x18(r1)
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    fsubs f0, f0, f24
    lfd f1, 0x20(r1)
    stw r0, 0x2c(r1)
    fdivs f2, f0, f25
    lfd f0, 0x28(r1)
    fsubs f1, f1, f24
    fsubs f0, f0, f24
    fmuls f2, f26, f2
    fdivs f1, f1, f25
    fdivs f0, f0, f25
    fmadds f31, f29, f2, f31
    fmuls f1, f26, f1
    fmuls f0, f26, f0
    fmadds f31, f29, f1, f31
    fmadds f31, f29, f0, f31
    b lbl_fn_8006EF48_00000188
lbl_fn_8006EF48_00000174:
    cmplwi r25, 0xff
    bgt lbl_fn_8006EF48_00000184
    fmadds f31, f27, f29, f31
    b lbl_fn_8006EF48_00000188
lbl_fn_8006EF48_00000184:
    fadds f31, f31, f29
lbl_fn_8006EF48_00000188:
    fnmsubs f31, f26, f28, f31
    addi r28, r28, 0x2
    addi r30, r30, 0x1
    fadds f31, f31, f30
lbl_fn_8006EF48_00000198:
    cmplw r30, r31
    blt lbl_fn_8006EF48_000000AC
    b lbl_fn_8006EF48_000001D8
lbl_fn_8006EF48_000001A4:
    lfs f0, lbl_80880A50
    mtctr r3
    cmplwi r3, 0x0
    ble lbl_fn_8006EF48_000001D8
lbl_fn_8006EF48_000001B4:
    lhz r0, 0x0(r28)
    cmplwi r0, 0xff
    bgt lbl_fn_8006EF48_000001C8
    fmadds f31, f0, f29, f31
    b lbl_fn_8006EF48_000001CC
lbl_fn_8006EF48_000001C8:
    fadds f31, f31, f29
lbl_fn_8006EF48_000001CC:
    fadds f31, f31, f30
    addi r28, r28, 0x2
    bdnz lbl_fn_8006EF48_000001B4
lbl_fn_8006EF48_000001D8:
    fmr f1, f31
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    psq_l f25, 0x68(r1), 0, 0
    lfd f25, 0x60(r1)
    psq_l f24, 0x58(r1), 0, 0
    lfd f24, 0x50(r1)
    addi r11, r1, 0x50
    bl _restgpr_25
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8006F17C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x64(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    lfs f31, lbl_80880A38
    stfd f30, 0x40(r1)
    psq_st f30, 0x48(r1), 0, 0
    fmr f30, f1
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    beq lbl_fn_8006F17C_00000364
    mr r5, r6
    addi r6, r1, 0x8
    bl fn_8006D680
    cmpwi r3, 0x0
    beq lbl_fn_8006F17C_00000348
    lwz r4, 0x14(r1)
    lis r0, 0x4330
    lwz r6, 0x10(r1)
    lis r3, lbl_80731530@ha
    mulli r7, r4, 0xe0
    lwz r5, 0x8(r1)
    lfd f3, lbl_80731530@l(r3)
    lfs f0, lbl_80880A38
    mulli r6, r6, 0x70
    lwz r4, 0xc(r1)
    add r7, r30, r7
    stw r0, 0x18(r1)
    lfs f5, lbl_80880A40
    fmuls f0, f30, f0
    mulli r3, r5, 0x1c
    add r5, r7, r6
    stw r0, 0x20(r1)
    lfs f4, lbl_80880A48
    stw r0, 0x28(r1)
    add r3, r5, r3
    mulli r0, r4, 0xe
    lwz r3, 0xa98(r3)
    add r4, r3, r0
    lha r3, 0x8(r4)
    lha r0, 0xa(r4)
    xoris r3, r3, 0x8000
    stw r3, 0x1c(r1)
    xoris r3, r0, 0x8000
    lha r0, 0xc(r4)
    lfd f1, 0x18(r1)
    stw r3, 0x24(r1)
    xoris r0, r0, 0x8000
    fsubs f1, f1, f3
    lfd f2, 0x20(r1)
    stw r0, 0x2c(r1)
    fdivs f6, f1, f5
    lfd f1, 0x28(r1)
    fsubs f2, f2, f3
    fsubs f1, f1, f3
    fmuls f3, f4, f6
    fdivs f2, f2, f5
    fdivs f1, f1, f5
    fmadds f31, f30, f3, f31
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmadds f31, f30, f2, f31
    fmadds f31, f30, f1, f31
    fnmsubs f31, f4, f0, f31
    b lbl_fn_8006F17C_0000037C
lbl_fn_8006F17C_00000348:
    cmplwi r31, 0xff
    bgt lbl_fn_8006F17C_0000035C
    lfs f0, lbl_80880A50
    fmadds f31, f0, f30, f31
    b lbl_fn_8006F17C_0000037C
lbl_fn_8006F17C_0000035C:
    fadds f31, f31, f30
    b lbl_fn_8006F17C_0000037C
lbl_fn_8006F17C_00000364:
    cmplwi r4, 0xff
    bgt lbl_fn_8006F17C_00000378
    lfs f0, lbl_80880A50
    fmuls f31, f0, f1
    b lbl_fn_8006F17C_0000037C
lbl_fn_8006F17C_00000378:
    fmr f31, f30
lbl_fn_8006F17C_0000037C:
    fmr f1, f31
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    psq_l f30, 0x48(r1), 0, 0
    lfd f30, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8006F2F0(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x124(r1)
    stmw r26, 0x108(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    mr r26, r6
    beq lbl_fn_8006F2F0_000003D8
    cmpwi r5, 0x0
    bne lbl_fn_8006F2F0_000003E0
lbl_fn_8006F2F0_000003D8:
    li r3, 0x0
    b lbl_fn_8006F2F0_000004C4
lbl_fn_8006F2F0_000003E0:
    mr r3, r30
    li r31, 0x0
    li r27, 0x0
    bl strlen
    mr r4, r30
    subi r0, r26, 0x1
    li r7, 0x0
    b lbl_fn_8006F2F0_000004AC
lbl_fn_8006F2F0_00000400:
    lbz r5, 0x0(r4)
    add r8, r30, r7
    cmplwi r5, 0x80
    blt lbl_fn_8006F2F0_00000450
    lbz r5, 0x0(r8)
    addi r7, r7, 0x1
    lbz r6, 0x1(r8)
    addi r4, r4, 0x1
    rlwimi r6, r5, 8, 16, 23
    addi r31, r31, 0x1
    extrwi r5, r6, 8, 16
    subi r5, r5, 0x80
    clrlslwi r6, r6, 24, 1
    clrlslwi r5, r5, 16, 9
    add r5, r28, r5
    add r5, r6, r5
    lhz r5, 0x3260(r5)
    sthx r5, r29, r27
    addi r27, r27, 0x2
    b lbl_fn_8006F2F0_00000464
lbl_fn_8006F2F0_00000450:
    lbz r5, 0x0(r8)
    addi r31, r31, 0x1
    extsb r5, r5
    sthx r5, r29, r27
    addi r27, r27, 0x2
lbl_fn_8006F2F0_00000464:
    cmplw r31, r0
    blt lbl_fn_8006F2F0_000004A4
    subi r0, r3, 0x1
    cmplw r7, r0
    bge lbl_fn_8006F2F0_000004B4
    lis r4, lbl_80731538@ha
    mr r5, r30
    addi r4, r4, lbl_80731538@l
    addi r3, r1, 0x8
    addi r4, r4, 0xc3
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
    b lbl_fn_8006F2F0_000004B4
lbl_fn_8006F2F0_000004A4:
    addi r7, r7, 0x1
    addi r4, r4, 0x1
lbl_fn_8006F2F0_000004AC:
    cmplw r7, r3
    blt lbl_fn_8006F2F0_00000400
lbl_fn_8006F2F0_000004B4:
    slwi r0, r31, 1
    li r3, 0x0
    sthx r3, r29, r0
    addi r3, r31, 0x1
lbl_fn_8006F2F0_000004C4:
    lmw r26, 0x108(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8006F420(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x124(r1)
    stmw r27, 0x10c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    beq lbl_fn_8006F420_00000508
    cmpwi r4, 0x0
    bne lbl_fn_8006F420_00000510
lbl_fn_8006F420_00000508:
    li r3, 0x0
    b lbl_fn_8006F420_000005EC
lbl_fn_8006F420_00000510:
    mr r3, r29
    li r31, 0x0
    bl fn_80686A48
    mr r4, r28
    subi r0, r30, 0x1
    li r8, 0x0
    mtctr r3
    cmplwi r3, 0x0
    ble lbl_fn_8006F420_000005E0
lbl_fn_8006F420_00000534:
    lhz r6, 0x0(r29)
    cmplwi r6, 0x7f
    bgt lbl_fn_8006F420_00000550
    stb r6, 0x0(r4)
    addi r31, r31, 0x1
    addi r4, r4, 0x1
    b lbl_fn_8006F420_0000058C
lbl_fn_8006F420_00000550:
    subi r5, r30, 0x2
    cmplw r31, r5
    bge lbl_fn_8006F420_000005E0
    rlwinm r5, r6, 1, 15, 22
    clrlslwi r6, r6, 24, 1
    add r5, r27, r5
    addi r31, r31, 0x2
    addis r5, r5, 0x1
    addi r7, r5, 0x3260
    lhzx r5, r6, r7
    extrwi r5, r5, 8, 16
    stb r5, 0x0(r4)
    lhzx r5, r6, r7
    stb r5, 0x1(r4)
    addi r4, r4, 0x2
lbl_fn_8006F420_0000058C:
    cmplw r31, r0
    blt lbl_fn_8006F420_000005D4
    subi r0, r3, 0x1
    cmplw r8, r0
    bge lbl_fn_8006F420_000005E0
    lis r4, lbl_80731538@ha
    li r0, 0x0
    addi r4, r4, lbl_80731538@l
    stbx r0, r28, r31
    mr r5, r28
    addi r3, r1, 0x8
    addi r4, r4, 0xea
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
    b lbl_fn_8006F420_000005E0
lbl_fn_8006F420_000005D4:
    addi r29, r29, 0x2
    addi r8, r8, 0x1
    bdnz lbl_fn_8006F420_00000534
lbl_fn_8006F420_000005E0:
    li r0, 0x0
    stbx r0, r28, r31
    addi r3, r31, 0x1
lbl_fn_8006F420_000005EC:
    lmw r27, 0x10c(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8006F548(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    li r6, 0x100
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    stw r29, 0x214(r1)
    mr r29, r4
    addi r4, r1, 0x10
    bl fn_8006F2F0
    lwz r0, 0x0(r29)
    mr r30, r3
    srwi. r0, r0, 31
    bne lbl_fn_8006F548_00000644
    lbz r0, 0x0(r29)
    clrlwi r31, r0, 25
    b lbl_fn_8006F548_00000648
lbl_fn_8006F548_00000644:
    lwz r31, 0x4(r29)
lbl_fn_8006F548_00000648:
    lbz r0, 0xc(r1)
    addi r3, r1, 0x10
    stb r0, 0x8(r1)
    bl fn_80686A48
    mr r0, r3
    addi r6, r1, 0x10
    mr r7, r6
    mr r3, r29
    slwi r0, r0, 1
    mr r5, r31
    add r7, r7, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
    mr r3, r30
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r0, 0x224(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_8006F5E8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r6, 0x100
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r4
    addi r4, r1, 0x10
    bl fn_8006F420
    lwz r0, 0x0(r29)
    mr r30, r3
    srwi. r0, r0, 31
    bne lbl_fn_8006F5E8_000006E4
    lbz r0, 0x0(r29)
    clrlwi r31, r0, 25
    b lbl_fn_8006F5E8_000006E8
lbl_fn_8006F5E8_000006E4:
    lwz r31, 0x4(r29)
lbl_fn_8006F5E8_000006E8:
    lbz r0, 0xc(r1)
    addi r3, r1, 0x10
    stb r0, 0x8(r1)
    bl strlen
    addi r6, r1, 0x10
    mr r0, r3
    mr r7, r6
    mr r3, r29
    mr r5, r31
    addi r8, r1, 0x8
    add r7, r7, r0
    li r4, 0x0
    bl fn_80013F78
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8006F684(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8006F684_0000074C
    li r3, 0x0
    blr
lbl_fn_8006F684_0000074C:
    addi r0, r5, 0x3
    mr r6, r4
    srwi r0, r0, 2
    li r12, 0x0
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_8006F684_000007DC
lbl_fn_8006F684_00000768:
    lhz r9, 0x0(r6)
    cmplwi r9, 0xffff
    beq lbl_fn_8006F684_000007DC
    add r5, r12, r4
    extrwi r11, r9, 8, 16
    lhz r10, 0x2(r5)
    subi r0, r11, 0x80
    clrlslwi r0, r0, 16, 9
    clrlslwi r5, r9, 24, 1
    rlwinm r7, r10, 1, 15, 22
    clrlslwi r8, r10, 24, 1
    add r7, r3, r7
    add r0, r3, r0
    addis r7, r7, 0x1
    addi r7, r7, 0x3260
    add r5, r5, r0
    sthx r9, r8, r7
    b lbl_fn_8006F684_000007C4
    blt lbl_fn_8006F684_000007C4
    sth r10, 0x3260(r5)
    b lbl_fn_8006F684_000007C4
    sthx r9, r8, r7
    b lbl_fn_8006F684_000007D0
lbl_fn_8006F684_000007C4:
    cmpwi r11, 0x80
    blt lbl_fn_8006F684_000007D0
    sth r10, 0x3260(r5)
lbl_fn_8006F684_000007D0:
    addi r12, r12, 0x4
    addi r6, r6, 0x4
    bdnz lbl_fn_8006F684_00000768
lbl_fn_8006F684_000007DC:
    li r3, 0x1
    blr
}

asm void fn_8006F72C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r19, 0x2c(r1)
    mr r19, r3
    mr r20, r4
    mr r21, r6
    mr r22, r7
    stw r5, 0x8(r1)
    lwz r0, 0x0(r3)
    srwi. r31, r0, 31
    bne lbl_fn_8006F72C_00000828
    lbz r0, 0x0(r3)
    addi r29, r3, 0x2
    li r27, 0x5
    clrlwi r28, r0, 25
    b lbl_fn_8006F72C_00000834
lbl_fn_8006F72C_00000828:
    lwz r29, 0x8(r3)
    clrlwi r27, r0, 1
    lwz r28, 0x4(r3)
lbl_fn_8006F72C_00000834:
    cmplw r4, r28
    ble lbl_fn_8006F72C_00000860
    lis r4, lbl_80731538@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80731538@l
    addi r3, r3, __files@l
    addi r4, r4, 0x10d
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006F72C_00000860:
    lwz r0, 0x8(r1)
    subf r3, r20, r28
    stw r3, 0x14(r1)
    addi r5, r1, 0x8
    cmplw r3, r0
    bge lbl_fn_8006F72C_0000087C
    addi r5, r1, 0x14
lbl_fn_8006F72C_0000087C:
    subf r4, r21, r22
    lis r3, 0x8000
    srwi r0, r4, 31
    lwz r26, 0x0(r5)
    add r4, r0, r4
    subi r0, r3, 0x2
    srawi r25, r4, 1
    cmplw r25, r0
    bgt lbl_fn_8006F72C_000008B0
    subf r30, r26, r28
    subf r0, r25, r0
    cmplw r30, r0
    ble lbl_fn_8006F72C_000008D4
lbl_fn_8006F72C_000008B0:
    lis r4, lbl_80731538@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80731538@l
    addi r3, r3, __files@l
    addi r4, r4, 0x128
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006F72C_000008D4:
    add r24, r25, r30
    add r0, r20, r26
    cmplw r24, r27
    subf r23, r0, r28
    blt lbl_fn_8006F72C_000009E4
    addi r3, r27, 0x7
    addi r0, r24, 0x1
    clrrwi r27, r3, 3
    b lbl_fn_8006F72C_00000904
lbl_fn_8006F72C_000008F8:
    slwi r3, r27, 1
    addi r3, r3, 0x7
    clrrwi r27, r3, 3
lbl_fn_8006F72C_00000904:
    cmplw r27, r0
    blt lbl_fn_8006F72C_000008F8
    slwi r3, r27, 1
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8006F72C_00000940
    lis r3, __files@ha
    lis r4, lbl_80777BF8@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80777BF8@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8006F72C_00000940:
    cmpwi r20, 0x0
    beq lbl_fn_8006F72C_00000958
    mr r3, r30
    mr r4, r29
    mr r5, r20
    bl fn_806846C4
lbl_fn_8006F72C_00000958:
    subf r3, r21, r22
    slwi r22, r20, 1
    srwi r0, r3, 31
    mr r4, r21
    add r0, r0, r3
    add r20, r30, r22
    mr r3, r20
    clrrwi r5, r0, 1
    bl memmove
    cmpwi r23, 0x0
    beq lbl_fn_8006F72C_000009A0
    slwi r3, r25, 1
    slwi r4, r26, 1
    add r0, r29, r22
    mr r5, r23
    add r3, r20, r3
    add r4, r4, r0
    bl fn_806846C4
lbl_fn_8006F72C_000009A0:
    cmpwi r31, 0x0
    slwi r0, r24, 1
    lhz r3, lbl_8087D734
    sthx r3, r30, r0
    beq lbl_fn_8006F72C_000009C0
    mr r3, r29
    bl dtor_80084684
    b lbl_fn_8006F72C_000009CC
lbl_fn_8006F72C_000009C0:
    lwz r0, 0x0(r19)
    oris r0, r0, 0x8000
    stw r0, 0x0(r19)
lbl_fn_8006F72C_000009CC:
    lwz r0, 0x0(r19)
    rlwimi r0, r27, 0, 1, 31
    stw r30, 0x8(r19)
    stw r24, 0x4(r19)
    stw r0, 0x0(r19)
    b lbl_fn_8006F72C_00000AEC
lbl_fn_8006F72C_000009E4:
    cmpwi r23, 0x0
    li r4, 0x0
    stw r4, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r4, 0x20(r1)
    beq lbl_fn_8006F72C_00000A74
    slwi r0, r20, 1
    slwi r3, r25, 1
    add r0, r29, r0
    add r0, r3, r0
    cmplw r0, r22
    bge lbl_fn_8006F72C_00000A74
    slwi r0, r28, 1
    add r0, r29, r0
    cmplw r22, r0
    bgt lbl_fn_8006F72C_00000A74
    cmpwi r4, 0x0
    bne lbl_fn_8006F72C_00000A38
    lbz r0, 0x18(r1)
    clrlwi r5, r0, 25
    b lbl_fn_8006F72C_00000A3C
lbl_fn_8006F72C_00000A38:
    li r5, 0x0
lbl_fn_8006F72C_00000A3C:
    lbz r0, 0xc(r1)
    mr r6, r21
    stb r0, 0x10(r1)
    mr r7, r22
    addi r3, r1, 0x18
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006F72C_00000A70
    lwz r21, 0x20(r1)
    b lbl_fn_8006F72C_00000A74
lbl_fn_8006F72C_00000A70:
    addi r21, r1, 0x1a
lbl_fn_8006F72C_00000A74:
    cmpwi r23, 0x0
    beq lbl_fn_8006F72C_00000A9C
    slwi r0, r20, 1
    slwi r3, r25, 1
    add r4, r29, r0
    mr r5, r23
    slwi r0, r26, 1
    add r3, r4, r3
    add r4, r4, r0
    bl fn_806846CC
lbl_fn_8006F72C_00000A9C:
    slwi r0, r20, 1
    mr r4, r21
    mr r5, r25
    add r3, r29, r0
    bl fn_806846CC
    cmpwi r31, 0x0
    slwi r0, r24, 1
    lhz r3, lbl_8087D736
    sthx r3, r29, r0
    bne lbl_fn_8006F72C_00000AD4
    lbz r0, 0x0(r19)
    rlwimi r0, r24, 0, 25, 31
    stb r0, 0x0(r19)
    b lbl_fn_8006F72C_00000AD8
lbl_fn_8006F72C_00000AD4:
    stw r24, 0x4(r19)
lbl_fn_8006F72C_00000AD8:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8006F72C_00000AEC
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8006F72C_00000AEC:
    mr r3, r19
    lmw r19, 0x2c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8006FA4C(void)
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
    beq lbl_fn_8006FA4C_00000B4C
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8006FA4C_00000B3C
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8006FA4C_00000B3C:
    cmpwi r31, 0x0
    ble lbl_fn_8006FA4C_00000B4C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8006FA4C_00000B4C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8006FAB0(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r11, r1, 0x110
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stfd f27, 0x110(r1)
    psq_st f27, 0x118(r1), 0, 0
    bl _savegpr_19
    li r0, 0xc
    mr r27, r6
    mr r25, r4
    mr r26, r5
    addi r7, r1, 0x74
    li r6, 0x0
    mtctr r0
lbl_fn_8006FAB0_00000BC0:
    stw r6, 0x4(r7)
    stwu r6, 0x8(r7)
    bdnz lbl_fn_8006FAB0_00000BC0
    lfs f31, lbl_80880A5C
    lis r7, lbl_807316A0@ha
    lfs f9, lbl_80880A58
    lis r6, lbl_807316A8@ha
    lfs f7, lbl_80880A60
    addi r9, r1, 0x5c
    fmr f2, f31
    stfs f9, 0x5c(r1)
    lfs f4, 0x0(r3)
    addi r8, r1, 0x78
    stfs f31, 0x60(r1)
    addi r11, r1, 0x50
    psq_l f1, 0x0(r9), 0, 0
    fneg f8, f4
    lfs f3, 0x4(r3)
    addi r10, r1, 0x88
    lfs f6, 0xc(r3)
    addi r12, r1, 0x44
    fneg f5, f3
    lfs f0, 0x8(r3)
    addi r9, r1, 0x98
    lfs f4, 0x10(r3)
    addi r23, r1, 0x38
    fneg f3, f0
    lfs f0, 0x14(r3)
    addi r3, r1, 0xa8
    stfs f7, 0x50(r1)
    addi r21, r1, 0x2c
    addi r22, r1, 0xb8
    stfs f31, 0x54(r1)
    addi r19, r1, 0x20
    addi r20, r1, 0xc8
    addi r31, r1, 0x68
    psq_st f1, 0x0(r8), 0, 0
    addi r30, r1, 0x14
    psq_l f1, 0x0(r11), 0, 0
    li r29, 0x0
    stfs f31, 0x44(r1)
    li r28, 0x0
    lfd f29, lbl_807316A0@l(r7)
    li r24, 0x0
    stfs f9, 0x48(r1)
    lfd f30, lbl_807316A8@l(r6)
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f31, 0x38(r1)
    lfs f28, lbl_80880A64
    stfs f7, 0x3c(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    stfs f2, 0x80(r1)
    stfs f2, 0x90(r1)
    stfs f2, 0xa0(r1)
    stfs f2, 0xb0(r1)
    fmr f2, f9
    stfs f2, 0xc0(r1)
    fmr f2, f7
    stfs f31, 0x2c(r1)
    stfs f31, 0x30(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r21), 0, 0
    stfs f31, 0x20(r1)
    stfs f31, 0x24(r1)
    psq_st f1, 0x0(r22), 0, 0
    psq_l f1, 0x0(r19), 0, 0
    stfs f8, 0x84(r1)
    stfs f6, 0x94(r1)
    stfs f5, 0xa4(r1)
    stfs f4, 0xb4(r1)
    stfs f3, 0xc4(r1)
    psq_st f1, 0x0(r20), 0, 0
    stfs f2, 0xd0(r1)
    stfs f0, 0xd4(r1)
    stfs f31, 0x0(r4)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f31, 0x64(r1)
    stfs f31, 0x58(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x40(r1)
    stfs f9, 0x34(r1)
    stfs f7, 0x28(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_8006FAB0_00000E3C
lbl_fn_8006FAB0_00000D20:
    addi r19, r1, 0x78
    mr r4, r27
    add r19, r19, r24
    mr r3, r19
    bl fn_805F9990
    fmr f27, f1
    mr r3, r19
    mr r4, r26
    bl fn_805F9990
    lfs f0, 0xc(r19)
    fadds f3, f0, f1
    fabs f0, f3
    frsp f0, f0
    fcmpo cr0, f0, f28
    bge lbl_fn_8006FAB0_00000D64
    li r3, 0x1
    b lbl_fn_8006FAB0_00000E50
lbl_fn_8006FAB0_00000D64:
    fabs f0, f27
    frsp f0, f0
    fcmpo cr0, f0, f28
    blt lbl_fn_8006FAB0_00000E34
    fneg f0, f3
    fdivs f5, f0, f27
    stfs f5, 0x0(r25)
    fcmpo cr0, f5, f31
    blt lbl_fn_8006FAB0_00000E34
    lfs f4, 0x8(r27)
    addi r19, r1, 0x78
    lfs f0, 0x4(r27)
    li r29, 0x1
    fmuls f7, f4, f5
    lfs f3, 0x0(r27)
    fmuls f6, f0, f5
    lfs f0, 0x8(r26)
    fmuls f4, f3, f5
    lfs f3, 0x4(r26)
    fadds f2, f7, f0
    lfs f0, 0x0(r26)
    fadds f3, f6, f3
    stfs f4, 0x8(r1)
    fadds f0, f4, f0
    li r20, 0x0
    stfs f3, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r30), 0, 0
    stfs f6, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f2, 0x1c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x70(r1)
    b lbl_fn_8006FAB0_00000E24
lbl_fn_8006FAB0_00000DEC:
    cmpw r20, r28
    beq lbl_fn_8006FAB0_00000E1C
    mr r3, r19
    addi r4, r1, 0x68
    bl fn_805F9990
    lfs f0, 0xc(r19)
    fadds f0, f0, f1
    fadd f0, f29, f0
    fcmpo cr0, f0, f30
    cror eq, gt, eq
    mfcr r29
    extrwi r29, r29, 1, 2
lbl_fn_8006FAB0_00000E1C:
    addi r19, r19, 0x10
    addi r20, r20, 0x1
lbl_fn_8006FAB0_00000E24:
    cmpwi r20, 0x6
    bge lbl_fn_8006FAB0_00000E34
    cmpwi r29, 0x0
    bne lbl_fn_8006FAB0_00000DEC
lbl_fn_8006FAB0_00000E34:
    addi r28, r28, 0x1
    addi r24, r24, 0x10
lbl_fn_8006FAB0_00000E3C:
    cmpwi r28, 0x6
    bge lbl_fn_8006FAB0_00000E4C
    cmpwi r29, 0x0
    beq lbl_fn_8006FAB0_00000D20
lbl_fn_8006FAB0_00000E4C:
    mr r3, r29
lbl_fn_8006FAB0_00000E50:
    addi r11, r1, 0x110
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    psq_l f27, 0x118(r1), 0, 0
    lfd f27, 0x110(r1)
    bl _restgpr_19
    lwz r0, 0x164(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8006FDD8(void)
{
    nofralloc
    lfs f3, 0xc(r3)
    lfs f1, 0x0(r3)
    lfs f2, 0x10(r3)
    lfs f0, 0x4(r3)
    fsubs f3, f3, f1
    lfs f1, 0x14(r3)
    fsubs f2, f2, f0
    lfs f0, 0x8(r3)
    fsubs f1, f1, f0
    fmuls f0, f3, f2
    fmuls f1, f1, f0
    blr
}

asm void fn_8006FE08(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f1, 0x14(r3)
    mr r6, r4
    lfs f0, 0x8(r3)
    addi r4, r1, 0x2c
    lfs f4, 0x10(r3)
    addi r5, r1, 0x20
    lfs f3, 0x4(r3)
    fadds f5, f1, f0
    fsubs f7, f1, f0
    lfs f2, 0xc(r3)
    lfs f1, 0x0(r3)
    fadds f6, f4, f3
    fsubs f8, f4, f3
    lfs f0, lbl_80880A68
    fadds f3, f2, f1
    stw r0, 0x44(r1)
    fsubs f9, f2, f1
    lfs f1, lbl_80880A5C
    fmuls f2, f5, f0
    stfs f6, 0x18(r1)
    fmuls f4, f6, f0
    stfs f3, 0x14(r1)
    fmuls f6, f3, f0
    lwz r3, lbl_8087EEB0
    fmuls f3, f7, f0
    stfs f5, 0x1c(r1)
    fmuls f10, f8, f0
    stfs f6, 0x2c(r1)
    fmuls f0, f9, f0
    li r7, 0x0
    stfs f4, 0x30(r1)
    stfs f2, 0x34(r1)
    stfs f9, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f7, 0x10(r1)
    stfs f0, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_800629F0
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8006FEBC(void)
{
    nofralloc
    stwu r1, -0x280(r1)
    mflr r0
    stw r0, 0x284(r1)
    addi r11, r1, 0x200
    stfd f31, 0x270(r1)
    psq_st f31, 0x278(r1), 0, 0
    stfd f30, 0x260(r1)
    psq_st f30, 0x268(r1), 0, 0
    stfd f29, 0x250(r1)
    psq_st f29, 0x258(r1), 0, 0
    stfd f28, 0x240(r1)
    psq_st f28, 0x248(r1), 0, 0
    stfd f27, 0x230(r1)
    psq_st f27, 0x238(r1), 0, 0
    stfd f26, 0x220(r1)
    psq_st f26, 0x228(r1), 0, 0
    stfd f25, 0x210(r1)
    psq_st f25, 0x218(r1), 0, 0
    stfd f24, 0x200(r1)
    psq_st f24, 0x208(r1), 0, 0
    bl _savegpr_22
    lfs f11, lbl_80880A5C
    mr r22, r4
    lfs f10, lbl_80880A58
    mr r23, r3
    lwz r6, lbl_8087EFB4
    addi r4, r1, 0x120
    stfs f11, 0x12c(r1)
    addi r5, r1, 0xe0
    addi r3, r6, 0x18c
    stfs f11, 0x13c(r1)
    stfs f11, 0x14c(r1)
    stfs f11, 0x150(r1)
    stfs f11, 0x154(r1)
    stfs f11, 0x158(r1)
    stfs f10, 0x15c(r1)
    lfs f24, 0x164(r6)
    lfs f25, 0x160(r6)
    lfs f26, 0x15c(r6)
    stfs f26, 0x120(r1)
    stfs f25, 0x124(r1)
    stfs f24, 0x128(r1)
    lfs f31, 0x174(r6)
    lfs f30, 0x170(r6)
    lfs f29, 0x16c(r6)
    stfs f29, 0x130(r1)
    stfs f30, 0x134(r1)
    stfs f31, 0x138(r1)
    lfs f28, 0x184(r6)
    lfs f27, 0x180(r6)
    lfs f13, 0x17c(r6)
    stfs f13, 0x140(r1)
    stfs f27, 0x144(r1)
    stfs f28, 0x148(r1)
    lfs f12, 0x188(r6)
    lfs f11, 0x178(r6)
    lfs f10, 0x168(r6)
    stfs f26, 0x80(r1)
    stfs f25, 0x84(r1)
    stfs f24, 0x88(r1)
    stfs f29, 0x8c(r1)
    stfs f30, 0x90(r1)
    stfs f31, 0x94(r1)
    stfs f13, 0x98(r1)
    stfs f27, 0x9c(r1)
    stfs f28, 0xa0(r1)
    stfs f10, 0xa4(r1)
    stfs f11, 0xa8(r1)
    stfs f12, 0xac(r1)
    stfs f10, 0x12c(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x14c(r1)
    bl fn_805F9640
    lfs f24, 0x10(r22)
    addi r5, r1, 0x20
    lfs f13, 0xc(r22)
    addi r24, r1, 0x160
    lfs f12, 0x0(r22)
    addi r4, r1, 0x2c
    lfs f11, 0x4(r22)
    addi r25, r1, 0x16c
    stfs f13, 0x20(r1)
    addi r6, r1, 0x38
    lfs f25, 0x14(r22)
    addi r26, r1, 0x178
    stfs f24, 0x24(r1)
    addi r11, r1, 0x44
    lfs f10, 0x8(r22)
    fmr f2, f25
    psq_l f1, 0x0(r5), 0, 0
    addi r27, r1, 0x184
    stfs f12, 0x2c(r1)
    addi r10, r1, 0x50
    addi r28, r1, 0x190
    stfs f24, 0x30(r1)
    addi r9, r1, 0x5c
    addi r29, r1, 0x19c
    addi r8, r1, 0x68
    psq_st f1, 0x0(r24), 0, 0
    addi r30, r1, 0x1a8
    psq_l f1, 0x0(r4), 0, 0
    addi r7, r1, 0x74
    stfs f13, 0x38(r1)
    addi r31, r1, 0x1b4
    addi r3, r1, 0xe0
    mr r4, r24
    stfs f11, 0x3c(r1)
    mr r5, r24
    addi r22, r1, 0xc8
    psq_st f1, 0x0(r25), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    li r6, 0x8
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f13, 0x50(r1)
    stfs f24, 0x54(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f12, 0x5c(r1)
    stfs f24, 0x60(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f13, 0x68(r1)
    stfs f11, 0x6c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x168(r1)
    stfs f2, 0x174(r1)
    stfs f2, 0x180(r1)
    stfs f2, 0x18c(r1)
    fmr f2, f10
    stfs f25, 0x28(r1)
    stfs f25, 0x34(r1)
    stfs f25, 0x40(r1)
    stfs f25, 0x4c(r1)
    stfs f10, 0x58(r1)
    stfs f2, 0x198(r1)
    stfs f10, 0x64(r1)
    stfs f2, 0x1a4(r1)
    stfs f10, 0x70(r1)
    stfs f2, 0x1b0(r1)
    stfs f10, 0x7c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0x1bc(r1)
    bl fn_805F97D0
    addi r4, r1, 0x8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r24), 0, 0
    mr r5, r4
    lfs f2, 0x168(r1)
    mr r6, r3
    psq_st f1, 0x0(r4), 0, 0
    mr r7, r4
    psq_lu f0, 0x0(r25), 0, 0
    mr r8, r3
    stfs f2, 0x10(r1)
    psq_lu f4, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r25)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r5)
    psq_lu f2, 0x0(r6), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r6)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r27), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    stfs f9, 0x8(r7)
    mr r5, r4
    mr r6, r3
    psq_lu f0, 0x0(r29), 0, 0
    mr r7, r4
    psq_lu f2, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f4, 0x0(r5), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f3, 0x8(r6)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r5)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r31), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r31)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    lis r5, 0x4330
    psq_l f1, 0x0(r3), 0, 0
    lis r6, lbl_807316B0@ha
    stfs f9, 0x8(r7)
    lfs f2, 0x1c(r1)
    lwz r3, lbl_8087EEE0
    psq_st f1, 0x0(r22), 0, 0
    lwz r0, 0x3c(r3)
    stfs f2, 0xd0(r1)
    xoris r0, r0, 0x8000
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x10(r1)
    stw r0, 0x1c4(r1)
    lfd f29, lbl_807316B0@l(r6)
    stw r5, 0x1c0(r1)
    lfs f27, lbl_80880A68
    lfd f10, 0x1c0(r1)
    psq_st f1, 0xc(r22), 0, 0
    fsubs f10, f10, f29
    stfs f2, 0xdc(r1)
    fmuls f24, f27, f10
    lwz r0, 0x40(r3)
    frsp f11, f2
    lfs f12, 0xd8(r1)
    addi r3, r1, 0xb0
    xoris r0, r0, 0x8000
    stw r0, 0x1cc(r1)
    lfs f10, 0xcc(r1)
    stw r5, 0x1c8(r1)
    fneg f31, f12
    lfs f12, lbl_80880A58
    fneg f13, f10
    lfd f28, 0x1c8(r1)
    lfs f10, 0xd0(r1)
    fadds f11, f12, f11
    fsubs f28, f28, f29
    lfs f30, 0xc8(r1)
    fadds f10, f12, f10
    lfs f29, 0xd4(r1)
    fmadds f30, f30, f24, f24
    fmuls f25, f27, f28
    fmadds f29, f29, f24, f24
    stfs f30, 0xb0(r1)
    fmr f2, f10
    fmadds f31, f31, f25, f25
    stfs f29, 0xbc(r1)
    fmadds f12, f13, f25, f25
    stfs f31, 0xb4(r1)
    stfs f2, 0x8(r23)
    fmr f2, f11
    psq_l f1, 0x0(r3), 0, 0
    stfs f12, 0xc0(r1)
    psq_st f1, 0x0(r23), 0, 0
    psq_l f1, 0xc(r3), 0, 0
    psq_st f1, 0xc(r23), 0, 0
    stfs f2, 0x14(r23)
    psq_l f31, 0x278(r1), 0, 0
    lfd f31, 0x270(r1)
    psq_l f30, 0x268(r1), 0, 0
    lfd f30, 0x260(r1)
    psq_l f29, 0x258(r1), 0, 0
    lfd f29, 0x250(r1)
    psq_l f28, 0x248(r1), 0, 0
    lfd f28, 0x240(r1)
    psq_l f27, 0x238(r1), 0, 0
    lfd f27, 0x230(r1)
    psq_l f26, 0x228(r1), 0, 0
    lfd f26, 0x220(r1)
    psq_l f25, 0x218(r1), 0, 0
    lfd f25, 0x210(r1)
    psq_l f24, 0x208(r1), 0, 0
    lfd f24, 0x200(r1)
    addi r11, r1, 0x200
    stfs f11, 0xc4(r1)
    stfs f10, 0xb8(r1)
    bl _restgpr_22
    lwz r0, 0x284(r1)
    mtlr r0
    addi r1, r1, 0x280
    blr
}

asm void fn_800704DC(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    stw r0, 0x194(r1)
    addi r11, r1, 0x130
    stfd f31, 0x180(r1)
    psq_st f31, 0x188(r1), 0, 0
    stfd f30, 0x170(r1)
    psq_st f30, 0x178(r1), 0, 0
    stfd f29, 0x160(r1)
    psq_st f29, 0x168(r1), 0, 0
    stfd f28, 0x150(r1)
    psq_st f28, 0x158(r1), 0, 0
    stfd f27, 0x140(r1)
    psq_st f27, 0x148(r1), 0, 0
    stfd f26, 0x130(r1)
    psq_st f26, 0x138(r1), 0, 0
    bl _savegpr_22
    lfs f27, 0x10(r4)
    addi r6, r1, 0x20
    lfs f13, 0xc(r4)
    addi r24, r1, 0x98
    lfs f12, 0x0(r4)
    addi r5, r1, 0x2c
    lfs f11, 0x4(r4)
    addi r25, r1, 0xa4
    stfs f13, 0x20(r1)
    addi r12, r1, 0x38
    lfs f28, 0x14(r4)
    addi r26, r1, 0xb0
    stfs f27, 0x24(r1)
    addi r11, r1, 0x44
    lfs f10, 0x8(r4)
    fmr f2, f28
    psq_l f1, 0x0(r6), 0, 0
    addi r27, r1, 0xbc
    lwz r4, lbl_8087EFB4
    addi r10, r1, 0x50
    stfs f12, 0x2c(r1)
    addi r0, r4, 0x18c
    addi r28, r1, 0xc8
    mr r23, r3
    stfs f27, 0x30(r1)
    addi r9, r1, 0x5c
    addi r29, r1, 0xd4
    psq_st f1, 0x0(r24), 0, 0
    addi r8, r1, 0x68
    psq_l f1, 0x0(r5), 0, 0
    addi r30, r1, 0xe0
    stfs f13, 0x38(r1)
    addi r7, r1, 0x74
    addi r31, r1, 0xec
    mr r4, r24
    stfs f11, 0x3c(r1)
    mr r3, r0
    mr r5, r24
    addi r22, r1, 0x80
    psq_st f1, 0x0(r25), 0, 0
    li r6, 0x8
    psq_l f1, 0x0(r12), 0, 0
    stfs f12, 0x44(r1)
    stfs f11, 0x48(r1)
    psq_st f1, 0x0(r26), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f13, 0x50(r1)
    stfs f27, 0x54(r1)
    psq_st f1, 0x0(r27), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f12, 0x5c(r1)
    stfs f27, 0x60(r1)
    psq_st f1, 0x0(r28), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f13, 0x68(r1)
    stfs f11, 0x6c(r1)
    psq_st f1, 0x0(r29), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f12, 0x74(r1)
    stfs f11, 0x78(r1)
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0xa0(r1)
    stfs f2, 0xac(r1)
    stfs f2, 0xb8(r1)
    stfs f2, 0xc4(r1)
    fmr f2, f10
    stfs f28, 0x28(r1)
    stfs f28, 0x34(r1)
    stfs f28, 0x40(r1)
    stfs f28, 0x4c(r1)
    stfs f10, 0x58(r1)
    stfs f2, 0xd0(r1)
    stfs f10, 0x64(r1)
    stfs f2, 0xdc(r1)
    stfs f10, 0x70(r1)
    stfs f2, 0xe8(r1)
    stfs f10, 0x7c(r1)
    psq_st f1, 0x0(r31), 0, 0
    stfs f2, 0xf4(r1)
    bl fn_805F97D0
    addi r4, r1, 0x8
    addi r3, r1, 0x14
    psq_l f1, 0x0(r24), 0, 0
    mr r5, r4
    lfs f2, 0xa0(r1)
    mr r6, r3
    psq_st f1, 0x0(r4), 0, 0
    mr r7, r4
    psq_lu f0, 0x0(r25), 0, 0
    mr r8, r3
    stfs f2, 0x10(r1)
    psq_lu f4, 0x0(r5), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    ps_sub f8, f0, f4
    lfs f1, 0x8(r25)
    stfs f2, 0x1c(r1)
    lfs f5, 0x8(r5)
    psq_lu f2, 0x0(r6), 0, 0
    ps_sel f8, f8, f0, f4
    fsub f9, f1, f5
    ps_sub f6, f0, f2
    lfs f3, 0x8(r6)
    fsub f7, f1, f3
    ps_sel f6, f6, f2, f0
    fsel f9, f9, f1, f5
    fsel f7, f7, f3, f1
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r26), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r26)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r27), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r27)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r28), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r28)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    stfs f9, 0x8(r7)
    mr r5, r4
    mr r6, r3
    psq_lu f0, 0x0(r29), 0, 0
    mr r7, r4
    psq_lu f2, 0x0(r6), 0, 0
    mr r8, r3
    psq_lu f4, 0x0(r5), 0, 0
    ps_sub f6, f0, f2
    lfs f1, 0x8(r29)
    lfs f3, 0x8(r6)
    ps_sub f8, f0, f4
    lfs f5, 0x8(r5)
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r30), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r30)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    mr r5, r4
    mr r6, r3
    psq_lu f2, 0x0(r6), 0, 0
    stfs f9, 0x8(r7)
    mr r7, r4
    psq_lu f4, 0x0(r5), 0, 0
    mr r8, r3
    psq_lu f0, 0x0(r31), 0, 0
    lfs f3, 0x8(r6)
    ps_sub f6, f0, f2
    lfs f1, 0x8(r31)
    lfs f5, 0x8(r5)
    ps_sub f8, f0, f4
    fsub f7, f1, f3
    fsub f9, f1, f5
    ps_sel f6, f6, f2, f0
    fsel f7, f7, f3, f1
    ps_sel f8, f8, f0, f4
    fsel f9, f9, f1, f5
    psq_stu f6, 0x0(r8), 0, 0
    stfs f7, 0x8(r8)
    psq_stu f8, 0x0(r7), 0, 0
    lis r5, 0x4330
    psq_l f1, 0x0(r3), 0, 0
    lis r6, lbl_807316B0@ha
    stfs f9, 0x8(r7)
    lfs f2, 0x1c(r1)
    lwz r3, lbl_8087EEE0
    psq_st f1, 0x0(r22), 0, 0
    lwz r0, 0x3c(r3)
    stfs f2, 0x88(r1)
    xoris r0, r0, 0x8000
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x10(r1)
    stw r0, 0xfc(r1)
    lfd f28, lbl_807316B0@l(r6)
    stw r5, 0xf8(r1)
    lfs f27, lbl_80880A68
    lfd f10, 0xf8(r1)
    psq_st f1, 0xc(r22), 0, 0
    fsubs f10, f10, f28
    stfs f2, 0x94(r1)
    fmuls f26, f27, f10
    lwz r0, 0x40(r3)
    frsp f11, f2
    lfs f10, 0x84(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x104(r1)
    lfs f12, 0x90(r1)
    fneg f13, f10
    stw r5, 0x100(r1)
    fneg f31, f12
    lfs f12, 0x8c(r1)
    lfd f10, 0x100(r1)
    lfs f30, 0x80(r1)
    fmadds f29, f12, f26, f26
    fsubs f28, f10, f28
    fmadds f30, f30, f26, f26
    lfs f12, lbl_80880A58
    lfs f10, 0x88(r1)
    fmuls f26, f27, f28
    stfs f29, 0xc(r23)
    fadds f11, f12, f11
    fadds f10, f12, f10
    stfs f30, 0x0(r23)
    fmadds f31, f31, f26, f26
    fmadds f12, f13, f26, f26
    stfs f11, 0x14(r23)
    stfs f31, 0x4(r23)
    stfs f12, 0x10(r23)
    stfs f10, 0x8(r23)
    psq_l f31, 0x188(r1), 0, 0
    lfd f31, 0x180(r1)
    psq_l f30, 0x178(r1), 0, 0
    lfd f30, 0x170(r1)
    psq_l f29, 0x168(r1), 0, 0
    lfd f29, 0x160(r1)
    psq_l f28, 0x158(r1), 0, 0
    lfd f28, 0x150(r1)
    psq_l f27, 0x148(r1), 0, 0
    lfd f27, 0x140(r1)
    psq_l f26, 0x138(r1), 0, 0
    lfd f26, 0x130(r1)
    addi r11, r1, 0x130
    bl _restgpr_22
    lwz r0, 0x194(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_800709F4(void)
{
    nofralloc
    lfs f0, 0x0(r3)
    li r0, 0x0
    lfs f1, 0x0(r4)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_800709F4_00001B20
    lfs f0, 0xc(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_800709F4_00001B20
    lfs f0, 0x4(r3)
    lfs f1, 0x4(r4)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_800709F4_00001B20
    lfs f0, 0x10(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_800709F4_00001B20
    lfs f0, 0x8(r3)
    lfs f1, 0x8(r4)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_800709F4_00001B20
    lfs f0, 0x14(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_800709F4_00001B20
    li r0, 0x1
lbl_fn_800709F4_00001B20:
    mr r3, r0
    blr
}

asm void fn_80070A70(void)
{
    nofralloc
    li r0, 0x8
    stwu r1, -0x20(r1)
    li r5, 0x0
    mtctr r0
lbl_fn_80070A70_00001B38:
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_fn_80070A70_00001B48
    lfs f2, 0x8(r4)
    b lbl_fn_80070A70_00001B4C
lbl_fn_80070A70_00001B48:
    lfs f2, 0x14(r4)
lbl_fn_80070A70_00001B4C:
    rlwinm. r0, r5, 0, 30, 30
    beq lbl_fn_80070A70_00001B5C
    lfs f3, 0x4(r4)
    b lbl_fn_80070A70_00001B60
lbl_fn_80070A70_00001B5C:
    lfs f3, 0x10(r4)
lbl_fn_80070A70_00001B60:
    clrlwi. r0, r5, 31
    beq lbl_fn_80070A70_00001B70
    lfs f4, 0x0(r4)
    b lbl_fn_80070A70_00001B74
lbl_fn_80070A70_00001B70:
    lfs f4, 0xc(r4)
lbl_fn_80070A70_00001B74:
    frsp f1, f4
    lfs f0, 0x0(r3)
    stfs f4, 0x8(r1)
    li r0, 0x0
    fcmpo cr0, f0, f1
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    cror eq, lt, eq
    bne lbl_fn_80070A70_00001BF4
    lfs f0, 0xc(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80070A70_00001BF4
    frsp f1, f3
    lfs f0, 0x4(r3)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80070A70_00001BF4
    lfs f0, 0x10(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80070A70_00001BF4
    frsp f1, f2
    lfs f0, 0x8(r3)
    fcmpo cr0, f0, f1
    cror eq, lt, eq
    bne lbl_fn_80070A70_00001BF4
    lfs f0, 0x14(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_80070A70_00001BF4
    li r0, 0x1
lbl_fn_80070A70_00001BF4:
    cmpwi r0, 0x0
    beq lbl_fn_80070A70_00001C04
    li r3, 0x1
    b lbl_fn_80070A70_00001C10
lbl_fn_80070A70_00001C04:
    addi r5, r5, 0x1
    bdnz lbl_fn_80070A70_00001B38
    li r3, 0x0
lbl_fn_80070A70_00001C10:
    addi r1, r1, 0x20
    blr
}

asm void fn_80070B60(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    lfs f10, 0x8(r4)
    addi r5, r1, 0x2c
    lfs f3, 0x14(r4)
    fmr f5, f1
    lfs f8, 0x4(r4)
    addi r6, r1, 0x20
    fsubs f12, f3, f10
    lfs f9, 0x10(r4)
    lfs f4, lbl_80880A68
    fsubs f13, f9, f8
    lfs f7, 0xc(r4)
    fmuls f11, f12, f4
    lfs f6, 0x0(r4)
    stfs f12, 0x1c(r1)
    fmuls f31, f13, f4
    fadds f0, f11, f10
    fsubs f12, f7, f6
    stfs f11, 0x10(r1)
    stfs f13, 0x18(r1)
    fadds f13, f31, f8
    fmuls f11, f12, f4
    fsubs f3, f3, f0
    stfs f12, 0x14(r1)
    fsubs f9, f9, f13
    fadds f12, f11, f6
    stfs f11, 0x8(r1)
    fmr f2, f3
    stfs f9, 0x30(r1)
    fsubs f4, f10, f0
    fsubs f7, f7, f12
    fsubs f10, f8, f13
    stfs f2, 0x14(r3)
    fsubs f11, f6, f12
    stfs f7, 0x2c(r1)
    fmr f2, f4
    lfs f7, 0x14(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xc(r3), 0, 0
    frsp f6, f2
    fmuls f7, f7, f5
    lfs f9, 0xc(r3)
    lfs f8, 0x10(r3)
    fmuls f6, f6, f5
    stfs f11, 0x20(r1)
    fmuls f9, f9, f5
    fmuls f8, f8, f5
    stfs f10, 0x24(r1)
    fadds f6, f6, f0
    fadds f10, f9, f12
    fadds f9, f8, f13
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fadds f8, f7, f0
    lfs f11, 0x0(r3)
    lfs f7, 0x4(r3)
    fmuls f11, f11, f5
    stfs f10, 0xc(r3)
    fmuls f5, f7, f5
    stfs f9, 0x10(r3)
    fadds f7, f11, f12
    fadds f5, f5, f13
    stfs f8, 0x14(r3)
    stfs f7, 0x0(r3)
    stfs f5, 0x4(r3)
    stfs f6, 0x8(r3)
    stfs f31, 0xc(r1)
    psq_l f31, 0x58(r1), 0, 0
    stfs f12, 0x38(r1)
    lfd f31, 0x50(r1)
    stfs f13, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f3, 0x34(r1)
    stfs f4, 0x28(r1)
    addi r1, r1, 0x60
    blr
}

asm void fn_80070C98(void)
{
    nofralloc
    mr r6, r4
    mr r7, r5
    psq_lu f2, 0x0(r7), 0, 0
    psq_lu f0, 0x0(r6), 0, 0
    lfs f3, 0x8(r7)
    mr r7, r3
    ps_sub f4, f0, f2
    lfs f1, 0x8(r6)
    fsub f5, f1, f3
    ps_sel f6, f4, f2, f0
    fsel f7, f5, f3, f1
    psq_stu f6, 0x0(r7), 0, 0
    addi r5, r5, 0xc
    addi r4, r4, 0xc
    stfs f7, 0x8(r7)
    addi r3, r3, 0xc
    psq_lu f0, 0x0(r4), 0, 0
    psq_lu f2, 0x0(r5), 0, 0
    lfs f1, 0x8(r4)
    ps_sub f4, f0, f2
    lfs f3, 0x8(r5)
    fsub f5, f1, f3
    ps_sel f6, f4, f0, f2
    fsel f7, f5, f1, f3
    psq_stu f6, 0x0(r3), 0, 0
    stfs f7, 0x8(r3)
    blr
}

asm void fn_80070D04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f7, 0x4(r3)
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lfs f4, 0x4(r4)
    lfs f3, 0xc(r4)
    fadds f0, f4, f3
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_80070D04_00001EB0
    lfs f6, 0x10(r3)
    fsubs f3, f4, f3
    fadds f0, f7, f6
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_80070D04_00001EB0
    lfs f5, lbl_80880A5C
    addi r4, r1, 0x30
    lfs f4, lbl_80880A58
    addi r7, r1, 0x20
    fmuls f8, f5, f6
    lfs f3, 0x8(r3)
    fmuls f6, f4, f6
    lfs f0, 0x0(r3)
    lfs f2, 0x8(r3)
    addi r6, r1, 0x3c
    fadds f3, f3, f8
    psq_l f1, 0x0(r3), 0, 0
    fadds f7, f7, f6
    stfs f2, 0x38(r1)
    fadds f0, f0, f8
    mr r3, r31
    fmr f2, f3
    stfs f0, 0x20(r1)
    li r5, 0x0
    stfs f7, 0x24(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f5, 0x10(r1)
    stfs f8, 0x14(r1)
    stfs f6, 0x18(r1)
    stfs f8, 0x1c(r1)
    stfs f3, 0x28(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x44(r1)
    bl fn_80050A1C
    lfs f3, 0xc(r30)
    lfs f0, 0xc(r31)
    fadds f0, f3, f0
    fmuls f0, f0, f0
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    mfcr r3
    extrwi r3, r3, 1, 2
    b lbl_fn_80070D04_00001EB4
lbl_fn_80070D04_00001EB0:
    li r3, 0x0
lbl_fn_80070D04_00001EB4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80070E14(void)
{
    nofralloc
    li r0, 0x3
    mr r7, r5
    mr r8, r3
    li r6, 0x0
    mtctr r0
lbl_fn_80070E14_00001EE0:
    lwz r0, 0x0(r7)
    addi r6, r6, 0x8
    stw r0, 0x0(r8)
    lwz r0, 0x4(r7)
    stw r0, 0x4(r8)
    lwz r0, 0x8(r7)
    stw r0, 0x8(r8)
    lbz r0, 0xc(r7)
    stb r0, 0xc(r8)
    lwz r0, 0x10(r7)
    stw r0, 0x10(r8)
    lwz r0, 0x14(r7)
    stw r0, 0x14(r8)
    lwz r0, 0x18(r7)
    stw r0, 0x18(r8)
    lbz r0, 0x1c(r7)
    stb r0, 0x1c(r8)
    lwz r0, 0x20(r7)
    stw r0, 0x20(r8)
    lwz r0, 0x24(r7)
    stw r0, 0x24(r8)
    lwz r0, 0x28(r7)
    stw r0, 0x28(r8)
    lbz r0, 0x2c(r7)
    stb r0, 0x2c(r8)
    lwz r0, 0x30(r7)
    stw r0, 0x30(r8)
    lwz r0, 0x34(r7)
    stw r0, 0x34(r8)
    lwz r0, 0x38(r7)
    stw r0, 0x38(r8)
    lbz r0, 0x3c(r7)
    stb r0, 0x3c(r8)
    lwz r0, 0x40(r7)
    stw r0, 0x40(r8)
    lwz r0, 0x44(r7)
    stw r0, 0x44(r8)
    lwz r0, 0x48(r7)
    stw r0, 0x48(r8)
    lbz r0, 0x4c(r7)
    stb r0, 0x4c(r8)
    lwz r0, 0x50(r7)
    stw r0, 0x50(r8)
    lwz r0, 0x54(r7)
    stw r0, 0x54(r8)
    lwz r0, 0x58(r7)
    stw r0, 0x58(r8)
    lbz r0, 0x5c(r7)
    stb r0, 0x5c(r8)
    lwz r0, 0x60(r7)
    stw r0, 0x60(r8)
    lwz r0, 0x64(r7)
    stw r0, 0x64(r8)
    lwz r0, 0x68(r7)
    stw r0, 0x68(r8)
    lbz r0, 0x6c(r7)
    stb r0, 0x6c(r8)
    lwz r0, 0x70(r7)
    stw r0, 0x70(r8)
    lwz r0, 0x74(r7)
    stw r0, 0x74(r8)
    lwz r0, 0x78(r7)
    stw r0, 0x78(r8)
    lbz r0, 0x7c(r7)
    addi r7, r7, 0x80
    stb r0, 0x7c(r8)
    addi r8, r8, 0x80
    bdnz lbl_fn_80070E14_00001EE0
    slwi r7, r6, 4
    li r0, 0x3
    add r9, r5, r7
    lwzx r5, r5, r7
    stwx r5, r3, r7
    add r10, r3, r7
    lwz r8, 0x4(r9)
    mr r6, r4
    stw r8, 0x4(r10)
    mr r7, r3
    lwz r8, 0x8(r9)
    li r5, 0x0
    stw r8, 0x8(r10)
    lbz r8, 0xc(r9)
    stb r8, 0xc(r10)
    lwz r8, 0x10(r9)
    stw r8, 0x10(r10)
    lwz r8, 0x14(r9)
    stw r8, 0x14(r10)
    lwz r8, 0x18(r9)
    stw r8, 0x18(r10)
    lbz r8, 0x1c(r9)
    stb r8, 0x1c(r10)
    lwz r8, 0x20(r9)
    stw r8, 0x20(r10)
    lwz r8, 0x24(r9)
    stw r8, 0x24(r10)
    lwz r8, 0x28(r9)
    stw r8, 0x28(r10)
    lbz r8, 0x2c(r9)
    stb r8, 0x2c(r10)
    mtctr r0
lbl_fn_80070E14_00002070:
    lwz r0, 0x0(r6)
    addi r5, r5, 0x8
    stw r0, 0x1b0(r7)
    lwz r0, 0x4(r6)
    stw r0, 0x1b4(r7)
    lwz r0, 0x8(r6)
    stw r0, 0x1b8(r7)
    lwz r0, 0xc(r6)
    stw r0, 0x1bc(r7)
    lwz r0, 0x10(r6)
    stw r0, 0x1c0(r7)
    lwz r0, 0x14(r6)
    stw r0, 0x1c4(r7)
    lwz r0, 0x18(r6)
    stw r0, 0x1c8(r7)
    lwz r0, 0x1c(r6)
    stw r0, 0x1cc(r7)
    lwz r0, 0x20(r6)
    stw r0, 0x1d0(r7)
    lwz r0, 0x24(r6)
    stw r0, 0x1d4(r7)
    lwz r0, 0x28(r6)
    stw r0, 0x1d8(r7)
    lwz r0, 0x2c(r6)
    stw r0, 0x1dc(r7)
    lwz r0, 0x30(r6)
    stw r0, 0x1e0(r7)
    lwz r0, 0x34(r6)
    stw r0, 0x1e4(r7)
    lwz r0, 0x38(r6)
    stw r0, 0x1e8(r7)
    lwz r0, 0x3c(r6)
    addi r6, r6, 0x40
    stw r0, 0x1ec(r7)
    addi r7, r7, 0x40
    bdnz lbl_fn_80070E14_00002070
    slwi r0, r5, 3
    add r5, r4, r0
    add r4, r3, r0
    lwz r0, 0x0(r5)
    stw r0, 0x1b0(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x1b4(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x1b8(r4)
    lwz r0, 0xc(r5)
    stw r0, 0x1bc(r4)
    lwz r0, 0x10(r5)
    stw r0, 0x1c0(r4)
    lwz r0, 0x14(r5)
    stw r0, 0x1c4(r4)
    blr
}

asm void fn_80071088(void)
{
    nofralloc
    li r0, 0x9
    li r8, 0x0
    mr r6, r4
    mr r7, r3
    mtctr r0
lbl_fn_80071088_00002154:
    lwz r5, 0x0(r7)
    lwz r0, 0x0(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002194
    lwz r5, 0x4(r7)
    lwz r0, 0x4(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002194
    lwz r5, 0x8(r7)
    lwz r0, 0x8(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002194
    lbz r5, 0xc(r7)
    lbz r0, 0xc(r6)
    cmplw r5, r0
    beq lbl_fn_80071088_0000219C
lbl_fn_80071088_00002194:
    li r3, 0x0
    blr
lbl_fn_80071088_0000219C:
    lwz r5, 0x10(r7)
    lwz r0, 0x10(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_000021DC
    lwz r5, 0x14(r7)
    lwz r0, 0x14(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_000021DC
    lwz r5, 0x18(r7)
    lwz r0, 0x18(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_000021DC
    lbz r5, 0x1c(r7)
    lbz r0, 0x1c(r6)
    cmplw r5, r0
    beq lbl_fn_80071088_000021E4
lbl_fn_80071088_000021DC:
    li r3, 0x0
    blr
lbl_fn_80071088_000021E4:
    lwz r5, 0x20(r7)
    lwz r0, 0x20(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002224
    lwz r5, 0x24(r7)
    lwz r0, 0x24(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002224
    lwz r5, 0x28(r7)
    lwz r0, 0x28(r6)
    cmpw r5, r0
    bne lbl_fn_80071088_00002224
    lbz r5, 0x2c(r7)
    lbz r0, 0x2c(r6)
    cmplw r5, r0
    beq lbl_fn_80071088_0000222C
lbl_fn_80071088_00002224:
    li r3, 0x0
    blr
lbl_fn_80071088_0000222C:
    addi r6, r6, 0x30
    addi r7, r7, 0x30
    addi r8, r8, 0x2
    bdnz lbl_fn_80071088_00002154
    li r0, 0x9
    li r6, 0x0
    mtctr r0
lbl_fn_80071088_00002248:
    lwz r5, 0x1b0(r3)
    lwz r0, 0x1b0(r4)
    cmpw r5, r0
    bne lbl_fn_80071088_00002268
    lwz r5, 0x1b4(r3)
    lwz r0, 0x1b4(r4)
    cmpw r5, r0
    beq lbl_fn_80071088_00002270
lbl_fn_80071088_00002268:
    li r3, 0x0
    blr
lbl_fn_80071088_00002270:
    lwz r5, 0x1b8(r3)
    lwz r0, 0x1b8(r4)
    cmpw r5, r0
    bne lbl_fn_80071088_00002290
    lwz r5, 0x1bc(r3)
    lwz r0, 0x1bc(r4)
    cmpw r5, r0
    beq lbl_fn_80071088_00002298
lbl_fn_80071088_00002290:
    li r3, 0x0
    blr
lbl_fn_80071088_00002298:
    lwz r5, 0x1c0(r3)
    lwz r0, 0x1c0(r4)
    cmpw r5, r0
    bne lbl_fn_80071088_000022B8
    lwz r5, 0x1c4(r3)
    lwz r0, 0x1c4(r4)
    cmpw r5, r0
    beq lbl_fn_80071088_000022C0
lbl_fn_80071088_000022B8:
    li r3, 0x0
    blr
lbl_fn_80071088_000022C0:
    addi r4, r4, 0x18
    addi r3, r3, 0x18
    addi r6, r6, 0x2
    bdnz lbl_fn_80071088_00002248
    li r3, 0x1
    blr
}

asm void fn_80071220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087EEE0
    cmpwi r0, 0x0
    bne lbl_fn_80071220_0000231C
    lis r5, lbl_807317C0@ha
    li r3, 0x8e8
    addi r5, r5, lbl_807317C0@l
    li r4, 0x6
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80071220_00002318
    bl fn_80071274
lbl_fn_80071220_00002318:
    stw r3, lbl_8087EEE0
lbl_fn_80071220_0000231C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80071274(void)
{
    nofralloc
    lwz r0, 0xd8(r3)
    addi r8, r3, 0xe8
    lfs f0, lbl_80880A70
    addi r4, r3, 0x8e0
    li r7, 0x0
    lis r5, 0x100
    subi r5, r5, 0x1
    clrlwi r0, r0, 12
    lis r6, 0xff00
    cmplw r8, r4
    stw r7, 0x3c(r3)
    stw r7, 0x40(r3)
    stw r7, 0x44(r3)
    stw r6, 0x48(r3)
    stw r5, 0x4c(r3)
    stw r7, 0x50(r3)
    stw r7, 0x54(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stw r7, 0x60(r3)
    stw r7, 0x64(r3)
    stw r7, 0x68(r3)
    stw r7, 0x6c(r3)
    stw r7, 0x70(r3)
    stw r7, 0x74(r3)
    stw r7, 0x78(r3)
    stw r7, 0x7c(r3)
    stw r7, 0xc0(r3)
    stw r7, 0xc4(r3)
    stw r7, 0xc8(r3)
    stw r0, 0xd8(r3)
    stw r7, 0xdc(r3)
    stw r7, 0xe0(r3)
    stw r7, 0xe4(r3)
    bge lbl_fn_80071274_0000247C
    addi r0, r3, 0xe8
    addi r5, r3, 0x8a0
    cmplw r0, r4
    li r4, 0x0
    li r0, 0x0
    bgt lbl_fn_80071274_000023D4
    li r4, 0x1
lbl_fn_80071274_000023D4:
    cmpwi r4, 0x0
    beq lbl_fn_80071274_000023E0
    li r0, 0x1
lbl_fn_80071274_000023E0:
    cmpwi r0, 0x0
    beq lbl_fn_80071274_0000244C
    addi r0, r5, 0x3f
    li r4, 0x0
    subf r0, r8, r0
    srwi r0, r0, 6
    mtctr r0
    cmplw r8, r5
    bge lbl_fn_80071274_0000244C
lbl_fn_80071274_00002404:
    stw r4, 0x0(r8)
    stw r4, 0x4(r8)
    stw r4, 0x8(r8)
    stw r4, 0xc(r8)
    stw r4, 0x10(r8)
    stw r4, 0x14(r8)
    stw r4, 0x18(r8)
    stw r4, 0x1c(r8)
    stw r4, 0x20(r8)
    stw r4, 0x24(r8)
    stw r4, 0x28(r8)
    stw r4, 0x2c(r8)
    stw r4, 0x30(r8)
    stw r4, 0x34(r8)
    stw r4, 0x38(r8)
    stw r4, 0x3c(r8)
    addi r8, r8, 0x40
    bdnz lbl_fn_80071274_00002404
lbl_fn_80071274_0000244C:
    addi r4, r3, 0x8e0
    li r5, 0x0
    addi r0, r4, 0x7
    subf r0, r8, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r8, r4
    bge lbl_fn_80071274_0000247C
lbl_fn_80071274_0000246C:
    stw r5, 0x0(r8)
    stw r5, 0x4(r8)
    addi r8, r8, 0x8
    bdnz lbl_fn_80071274_0000246C
lbl_fn_80071274_0000247C:
    li r0, 0x0
    stw r0, 0x8e0(r3)
    stw r0, 0x8e4(r3)
    blr
}

asm void fn_800713D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    li r0, 0x0
    lis r6, 0x4330
    stw r6, 0x8(r1)
    mr r30, r3
    li r31, 0x0
    stw r6, 0x10(r1)
    stw r4, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    bl fn_806249F0
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_800713D4_00002558
    bl fn_806052C0
    cmplwi r3, 0x1
    bne lbl_fn_800713D4_00002558
    bl VIGetTvFormat
    cmpwi r3, 0x0
    beq lbl_fn_800713D4_00002514
    cmplwi r3, 0x1
    beq lbl_fn_800713D4_00002520
    cmplwi r3, 0x5
    beq lbl_fn_800713D4_00002520
    cmplwi r3, 0x2
    beq lbl_fn_800713D4_0000252C
    b lbl_fn_800713D4_00002538
lbl_fn_800713D4_00002514:
    lis r31, lbl_807B0978@ha
    addi r31, r31, lbl_807B0978@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_00002520:
    lis r31, lbl_807B0B58@ha
    addi r31, r31, lbl_807B0B58@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_0000252C:
    lis r31, lbl_807B0A2C@ha
    addi r31, r31, lbl_807B0A2C@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_00002538:
    lis r5, lbl_807317C0@ha
    li r4, 0xf3
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x19
    crclr 6
    bl OSPanic
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_00002558:
    bl VIGetTvFormat
    cmpwi r3, 0x0
    beq lbl_fn_800713D4_00002580
    cmplwi r3, 0x1
    beq lbl_fn_800713D4_0000258C
    cmplwi r3, 0x5
    beq lbl_fn_800713D4_000025B4
    cmplwi r3, 0x2
    beq lbl_fn_800713D4_000025C0
    b lbl_fn_800713D4_000025CC
lbl_fn_800713D4_00002580:
    lis r31, lbl_807B093C@ha
    addi r31, r31, lbl_807B093C@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_0000258C:
    bl fn_80624910
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    bne lbl_fn_800713D4_000025A8
    lis r31, lbl_807B0B1C@ha
    addi r31, r31, lbl_807B0B1C@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_000025A8:
    lis r31, lbl_807B0AA4@ha
    addi r31, r31, lbl_807B0AA4@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_000025B4:
    lis r31, lbl_807B0B1C@ha
    addi r31, r31, lbl_807B0B1C@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_000025C0:
    lis r31, lbl_807B09F0@ha
    addi r31, r31, lbl_807B09F0@l
    b lbl_fn_800713D4_000025E8
lbl_fn_800713D4_000025CC:
    lis r5, lbl_807317C0@ha
    li r4, 0x108
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x19
    crclr 6
    bl OSPanic
lbl_fn_800713D4_000025E8:
    bl fn_80624830
    clrlwi r0, r3, 24
    stw r0, 0x44(r30)
    mr r3, r31
    mr r4, r30
    lhz r27, 0x8(r31)
    li r5, 0x0
    li r6, 0x10
    bl fn_80614B20
    li r0, 0x0
    sth r27, 0x8(r30)
    sth r27, 0x10(r30)
    sth r0, 0xc(r30)
    bl VIGetTvFormat
    cmplwi r3, 0x1
    bne lbl_fn_800713D4_00002640
    li r3, 0x280
    li r0, 0x1c0
    sth r3, 0x4(r30)
    sth r0, 0x6(r30)
    lhz r0, 0xc(r31)
    sth r0, 0xc(r30)
lbl_fn_800713D4_00002640:
    lwz r0, 0x44(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800713D4_0000266C
    li r0, 0x2a8
    sth r0, 0xe(r30)
    subfic r3, r0, 0x2d0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    sth r0, 0xa(r30)
    b lbl_fn_800713D4_000026B4
lbl_fn_800713D4_0000266C:
    lwz r0, 0x0(r30)
    cmpwi r0, 0x1
    bne lbl_fn_800713D4_00002698
    li r0, 0x28e
    sth r0, 0xe(r30)
    subfic r3, r0, 0x2d0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    sth r0, 0xa(r30)
    b lbl_fn_800713D4_000026B4
lbl_fn_800713D4_00002698:
    li r0, 0x292
    sth r0, 0xe(r30)
    subfic r3, r0, 0x2d0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    sth r0, 0xa(r30)
lbl_fn_800713D4_000026B4:
    lhz r3, 0x4(r30)
    lhz r0, 0x6(r30)
    stw r3, 0x3c(r30)
    stw r0, 0x40(r30)
    lhz r3, 0x4(r31)
    lhz r0, 0x8(r31)
    addi r3, r3, 0xf
    rlwinm r3, r3, 0, 16, 27
    mullw r0, r3, r0
    slwi r28, r0, 1
    bl fn_800827E0
    lis r27, lbl_807317C0@ha
    lis r4, 0x8
    addi r7, r27, lbl_807317C0@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x1
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x54(r30)
    bl fn_800827E0
    addi r7, r27, lbl_807317C0@l
    mr r4, r28
    mr r8, r7
    li r5, 0x20
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x70(r30)
    bl fn_800827E0
    addi r7, r27, lbl_807317C0@l
    mr r4, r28
    mr r8, r7
    li r5, 0x20
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x74(r30)
    li r4, 0x0
    lwz r3, 0x54(r30)
    lis r5, 0x8
    bl memset
    lwz r3, 0x70(r30)
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r3, 0x74(r30)
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r3, 0x54(r30)
    lis r4, 0x8
    bl GXInit
    li r5, 0x0
    lwz r6, 0x3c(r30)
    xoris r0, r5, 0x8000
    stw r0, 0xc(r1)
    lwz r7, 0x40(r30)
    lis r27, lbl_807316C8@ha
    stw r0, 0x14(r1)
    xoris r4, r6, 0x8000
    lfd f0, 0x8(r1)
    xoris r0, r7, 0x8000
    lfd f2, 0x10(r1)
    lfd f6, lbl_807316C8@l(r27)
    stw r4, 0xc(r1)
    fsubs f5, f0, f6
    lfs f7, 0x58(r30)
    stw r0, 0x14(r1)
    fsubs f2, f2, f6
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f3, f1, f6
    lfs f4, 0x5c(r30)
    fsubs f0, f0, f6
    stw r3, 0x50(r30)
    fadds f1, f7, f5
    lfs f5, lbl_80880A70
    fadds f2, f4, f2
    stw r5, 0x60(r30)
    fadds f3, f3, f7
    lfs f6, lbl_80880A74
    fadds f4, f0, f4
    stw r5, 0x64(r30)
    stw r6, 0x68(r30)
    stw r7, 0x6c(r30)
    bl fn_80618570
    lwz r0, 0x6c(r30)
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f0, 0x5c(r30)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r30)
    mr r28, r3
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, 0x58(r30)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r30)
    mr r29, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfs f2, 0x5c(r30)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r30)
    mr r31, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, 0x58(r30)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r31
    mr r5, r29
    mr r6, r28
    bl fn_806185C0
    lhz r3, 0x6(r30)
    lhz r4, 0x8(r30)
    bl fn_80614E90
    bl fn_806150C0
    lhz r5, 0x4(r30)
    clrlwi r27, r3, 16
    lhz r6, 0x6(r30)
    li r3, 0x0
    li r4, 0x0
    bl fn_80614C80
    lhz r3, 0x4(r30)
    mr r4, r27
    bl fn_80614D00
    lbz r3, 0x19(r30)
    addi r4, r30, 0x1a
    addi r6, r30, 0x32
    li r5, 0x0
    bl fn_80615210
    li r3, 0x0
    bl fn_80615400
    lbz r0, 0x19(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800713D4_00002930
    li r3, 0x2
    li r4, 0x0
    bl fn_80617E70
    b lbl_fn_800713D4_0000293C
lbl_fn_800713D4_00002930:
    li r3, 0x0
    li r4, 0x0
    bl fn_80617E70
lbl_fn_800713D4_0000293C:
    lwz r3, 0x74(r30)
    li r4, 0x1
    bl fn_80615420
    mr r3, r30
    bl fn_80604580
    lwz r3, 0x70(r30)
    bl fn_806050D0
    lwz r3, 0x74(r30)
    lwz r0, 0x70(r30)
    stw r3, 0x7c(r30)
    stw r0, 0x78(r30)
    bl fn_80604FB0
    bl fn_80603FF0
    lwz r0, 0x0(r30)
    clrlwi. r0, r0, 31
    beq lbl_fn_800713D4_00002980
    bl fn_80603FF0
lbl_fn_800713D4_00002980:
    li r3, 0x0
    bl fn_80605140
    lis r4, lbl_807C6F68@ha
    lis r3, lbl_807C6F60@ha
    addi r4, r4, lbl_807C6F68@l
    li r0, 0x5
    sth r0, 0x50(r4)
    addi r3, r3, lbl_807C6F60@l
    bl OSInitThreadQueue
    lis r3, fn_80072D74@ha
    addi r3, r3, fn_80072D74@l
    bl fn_806036E0
    lis r3, fn_80072E08@ha
    addi r3, r3, fn_80072E08@l
    bl fn_80603730
    lis r3, fn_80072BDC@ha
    addi r3, r3, fn_80072BDC@l
    bl fn_80612B10
    addi r11, r1, 0x30
    li r3, 0x1
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8007192C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_27
    lwz r4, lbl_8087EFA8
    lis r5, 0x4330
    mr r31, r3
    lwz r0, lbl_8087D73C
    lwz r3, 0x34(r4)
    stw r5, 0x10(r1)
    cmpw r0, r3
    stw r5, 0x18(r1)
    beq lbl_fn_8007192C_00002A24
    stw r3, lbl_8087D73C
    bl fn_80607120
lbl_fn_8007192C_00002A24:
    lwz r3, lbl_8087EFA8
    lwz r3, 0x30(r3)
    bl fn_80615400
    lwz r0, 0x48(r31)
    addi r3, r1, 0xc
    stb r0, 0xa(r1)
    extrwi r5, r0, 8, 8
    extrwi r4, r0, 8, 16
    srwi r0, r0, 24
    stb r5, 0x8(r1)
    stb r4, 0x9(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r4, 0x4c(r31)
    bl fn_80615190
    li r4, 0x0
    lwz r6, 0x3c(r31)
    xoris r0, r4, 0x8000
    stw r0, 0x14(r1)
    lwz r5, 0x40(r31)
    lis r27, lbl_807316C8@ha
    stw r0, 0x1c(r1)
    xoris r3, r6, 0x8000
    lfd f0, 0x10(r1)
    xoris r0, r5, 0x8000
    lfd f2, 0x18(r1)
    lfd f6, lbl_807316C8@l(r27)
    stw r3, 0x14(r1)
    fsubs f5, f0, f6
    lfs f7, 0x58(r31)
    stw r0, 0x1c(r1)
    fsubs f2, f2, f6
    lfd f1, 0x10(r1)
    lfd f0, 0x18(r1)
    fsubs f3, f1, f6
    lfs f4, 0x5c(r31)
    fsubs f0, f0, f6
    stw r4, 0x60(r31)
    fadds f1, f7, f5
    lfs f5, lbl_80880A70
    fadds f2, f4, f2
    stw r4, 0x64(r31)
    fadds f3, f3, f7
    lfs f6, lbl_80880A74
    fadds f4, f0, f4
    stw r6, 0x68(r31)
    stw r5, 0x6c(r31)
    bl fn_80618570
    lwz r0, 0x6c(r31)
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f0, 0x5c(r31)
    lfd f1, 0x10(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x68(r31)
    mr r28, r3
    lfd f2, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f0, 0x58(r31)
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fadds f1, f1, f0
    bl fn_80695D84
    lwz r0, 0x64(r31)
    mr r29, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfs f2, 0x5c(r31)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    lwz r0, 0x60(r31)
    mr r30, r3
    lfd f1, lbl_807316C8@l(r27)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f2, 0x58(r31)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fadds f1, f2, f0
    bl fn_80695D84
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl fn_806185C0
    bl fn_80613950
    bl fn_806167B0
    addi r11, r1, 0x40
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80071AFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x3
    li r5, 0x1
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    li r3, 0x1
    bl fn_80617E00
    li r3, 0x1
    bl fn_80617DA0
    bl fn_80613C60
    lwz r3, 0x50(r27)
    bl fn_80612A60
    lwz r3, 0x50(r27)
    addi r4, r1, 0xc
    addi r5, r1, 0x8
    bl fn_80612AF0
    lwz r31, 0x8(r1)
    lhz r30, lbl_8087D738
    lwz r29, 0x78(r27)
    bl OSDisableInterrupts
    lis r6, lbl_807C6F68@ha
    mr r28, r3
    addi r6, r6, lbl_807C6F68@l
    lhz r4, 0x50(r6)
    cmplwi r4, 0x5
    bne lbl_fn_80071AFC_00002C34
    li r0, 0x0
    sth r0, 0x52(r6)
    sth r0, 0x50(r6)
    b lbl_fn_80071AFC_00002C88
lbl_fn_80071AFC_00002C34:
    lis r3, 0x6666
    addi r5, r4, 0x1
    addi r3, r3, 0x6667
    lhz r0, 0x52(r6)
    mulhw r3, r3, r5
    srawi r3, r3, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r5
    sth r3, 0x50(r6)
    clrlwi r3, r3, 16
    cmplw r3, r0
    bne lbl_fn_80071AFC_00002C88
    lis r5, lbl_807317C0@ha
    li r4, 0x3fb
    addi r5, r5, lbl_807317C0@l
    addi r3, r5, 0x1
    addi r5, r5, 0x2c
    crclr 6
    bl OSPanic
lbl_fn_80071AFC_00002C88:
    lis r5, lbl_807C6F68@ha
    li r0, 0x0
    addi r5, r5, lbl_807C6F68@l
    mr r3, r28
    lhz r4, 0x50(r5)
    slwi r4, r4, 4
    stwux r31, r4, r5
    stw r0, 0x4(r4)
    stw r29, 0x8(r4)
    sth r30, 0xc(r4)
    bl OSRestoreInterrupts
    lbz r0, lbl_8087EED8
    cmpwi r0, 0x0
    bne lbl_fn_80071AFC_00002CD0
    li r0, 0x1
    stb r0, lbl_8087EED8
    lwz r3, 0x8(r1)
    bl fn_80612B60
lbl_fn_80071AFC_00002CD0:
    lhz r3, lbl_8087D738
    bl fn_80613FF0
    lwz r8, lbl_8087EFA8
    addi r6, r1, 0x10
    li r3, 0x0
    li r4, 0x0
    lwz r0, 0x3b0(r8)
    stb r0, 0x10(r1)
    clrlwi r7, r0, 24
    lwz r0, 0x3b4(r8)
    stb r0, 0x11(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x3b8(r8)
    add r7, r7, r5
    stb r0, 0x12(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x3bc(r8)
    add r7, r7, r5
    stb r0, 0x13(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x3c0(r8)
    add r7, r7, r5
    stb r0, 0x14(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x3c4(r8)
    add r7, r7, r5
    stb r0, 0x15(r1)
    clrlwi r5, r0, 24
    lwz r0, 0x3c8(r8)
    add r7, r7, r5
    stb r0, 0x16(r1)
    clrlwi r0, r0, 24
    add r7, r7, r0
    stw r7, 0x3cc(r8)
    lwz r5, lbl_8087EFA8
    lwz r0, 0x3ac(r5)
    clrlwi r5, r0, 24
    bl fn_80615210
    lwz r3, 0x78(r27)
    li r4, 0x1
    bl fn_80615420
    bl fn_80613C60
    lhz r3, lbl_8087D738
    addi r0, r3, 0x1
    sth r0, lbl_8087D738
    lwz r3, 0x70(r27)
    lwz r0, 0x78(r27)
    cmplw r0, r3
    bne lbl_fn_80071AFC_00002D98
    lwz r3, 0x74(r27)
lbl_fn_80071AFC_00002D98:
    stw r3, 0x78(r27)
    bl fn_80612E70
    bl OSDisableInterrupts
    lis r27, lbl_807C6F68@ha
    lis r28, lbl_807C6F60@ha
    addi r27, r27, lbl_807C6F68@l
    b lbl_fn_80071AFC_00002DC4
lbl_fn_80071AFC_00002DB4:
    bl OSRestoreInterrupts
    addi r3, r28, lbl_807C6F60@l
    bl OSSleepThread
    bl OSDisableInterrupts
lbl_fn_80071AFC_00002DC4:
    lhz r5, 0x50(r27)
    cmplwi r5, 0x5
    bne lbl_fn_80071AFC_00002DD8
    li r0, 0x0
    b lbl_fn_80071AFC_00002DF8
lbl_fn_80071AFC_00002DD8:
    lhz r6, 0x52(r27)
    addi r0, r5, 0x5
    cmplw r5, r6
    subf r4, r6, r0
    addi r0, r4, 0x1
    blt lbl_fn_80071AFC_00002DF8
    subf r4, r6, r5
    addi r0, r4, 0x1
lbl_fn_80071AFC_00002DF8:
    cmplwi r0, 0x1
    bgt lbl_fn_80071AFC_00002DB4
    bl OSRestoreInterrupts
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80071D60(void)
{
    nofralloc
    stw r4, 0xcc(r3)
    blr
}

asm void fn_80071D68(void)
{
    nofralloc
    mr r3, r4
    li r4, 0x0
    b fn_80618290
}

asm void fn_80071D74(void)
{
    nofralloc
    mr r3, r4
    li r4, 0x1
    b fn_80618290
}

asm void fn_80071D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x3c(r3)
    li r3, 0x0
    lwz r0, 0x40(r30)
    clrlwi r5, r5, 16
    clrlwi r6, r0, 16
    bl fn_80614CC0
    mr r3, r31
    bl fn_80616400
    lwz r0, 0x40(r30)
    mr r5, r3
    lwz r3, 0x3c(r30)
    li r6, 0x0
    clrlwi r4, r0, 16
    clrlwi r3, r3, 16
    bl fn_80614D30
    lwz r3, 0x28(r31)
    li r4, 0x0
    bl fn_80615560
    bl fn_80614190
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
