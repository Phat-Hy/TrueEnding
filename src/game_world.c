#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800697D8(void);
extern void fn_8007AA64(void);
extern void fn_8007B100(void);
extern void fn_8007C0D4(void);
extern void fn_8007C0D8(void);
extern void fn_8007E9EC(void);
extern void fn_8007FE5C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_800875F8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800C5F5C(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_8067E23C(void);
extern void fn_806823B0(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8077850C[];
extern u8 lbl_80731D40[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80777D80[];

/* Small data declarations */
extern u32 lbl_8087D77C;
extern u32 lbl_8087D780;
extern u32 lbl_8087D784;
extern u32 lbl_8087D788;
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF00;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFE0;
extern u32 lbl_80880B88;
extern u32 lbl_80880B8C;
extern u32 lbl_80880B90;
extern u32 lbl_80880B94;
extern u32 lbl_80880B98;
extern u32 lbl_80880B9C;
extern u32 lbl_80880BA4;
extern u32 lbl_80880BA8;
extern u32 lbl_80880BAC;
extern u32 lbl_80880BB8;
extern u32 lbl_80880BBC;
extern u32 lbl_80880BC0;

/* Function declarations */
void fn_80080048(void);
void fn_800804D0(void);
void fn_80080528(void);
void fn_80080584(void);
void fn_80080B34(void);
void fn_80080C20(void);
void fn_80081080(void);
void fn_80081514(void);
void fn_800816A8(void);
void fn_800816B4(void);
void fn_80081BCC(void);
void fn_80081BD0(void);
void fn_80081C34(void);
void fn_80081D00(void);

asm void fn_80080048(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0x20
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stfd f26, 0x60(r1)
    psq_st f26, 0x68(r1), 0, 0
    stfd f25, 0x50(r1)
    psq_st f25, 0x58(r1), 0, 0
    stfd f24, 0x40(r1)
    psq_st f24, 0x48(r1), 0, 0
    stfd f23, 0x30(r1)
    psq_st f23, 0x38(r1), 0, 0
    stfd f22, 0x20(r1)
    psq_st f22, 0x28(r1), 0, 0
    bl _savegpr_27
    fmr f30, f1
    lfs f31, lbl_80880BB8
    lfs f24, lbl_80880B9C
    mr r27, r3
    lfs f25, lbl_80880B88
    li r29, 0x0
    lfs f26, lbl_80880B8C
    li r31, 0x0
    lfs f27, lbl_80880B90
    lfs f28, lbl_80880B94
    lfs f29, lbl_80880B98
    b lbl_fn_80080048_00000414
lbl_fn_80080048_00000094:
    lwz r0, 0x10(r27)
    add r28, r0, r31
    lwz r30, 0x4(r28)
    cmpwi r30, 0x0
    beq lbl_fn_80080048_0000040C
    lwz r4, 0x8(r30)
    lwz r3, lbl_8087EFA8
    cmpwi r4, 0x0
    lfs f1, 0x3a4(r3)
    beq lbl_fn_80080048_000000C4
    lfs f2, 0xc(r4)
    b lbl_fn_80080048_000000C8
lbl_fn_80080048_000000C4:
    lfs f2, lbl_80880B94
lbl_fn_80080048_000000C8:
    lfs f0, 0x14(r28)
    cmpwi r4, 0x0
    fmadds f22, f0, f1, f2
    beq lbl_fn_80080048_000000E0
    lfs f23, 0x0(r4)
    b lbl_fn_80080048_000000E4
lbl_fn_80080048_000000E0:
    lfs f23, lbl_80880B88
lbl_fn_80080048_000000E4:
    lbz r0, 0x50(r28)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80080048_0000012C
    lfs f1, 0x34(r28)
    lfs f0, 0x48(r28)
    fdivs f2, f31, f1
    fadds f1, f0, f30
    bl fn_8068AEA8
    frsp f2, f1
    stfs f2, 0x48(r28)
    lfs f1, 0x34(r28)
    lfs f0, 0x38(r28)
    fmadds f1, f1, f2, f0
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, 0x30(r28)
    fmuls f0, f0, f1
    fadds f22, f22, f0
lbl_fn_80080048_0000012C:
    fcmpo cr0, f22, f24
    bge lbl_fn_80080048_00000138
    fadds f22, f22, f23
lbl_fn_80080048_00000138:
    fcmpo cr0, f22, f23
    ble lbl_fn_80080048_00000144
    fsubs f22, f22, f23
lbl_fn_80080048_00000144:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80080048_00000188
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080048_00000184
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_80080048_00000184:
    stw r3, 0x8(r30)
lbl_fn_80080048_00000188:
    lwz r3, 0x8(r30)
    stfs f22, 0xc(r3)
    lwz r4, 0x8(r30)
    lwz r3, lbl_8087EFA8
    cmpwi r4, 0x0
    lfs f1, 0x3a4(r3)
    beq lbl_fn_80080048_000001AC
    lfs f2, 0x10(r4)
    b lbl_fn_80080048_000001B0
lbl_fn_80080048_000001AC:
    lfs f2, lbl_80880B98
lbl_fn_80080048_000001B0:
    lfs f0, 0x18(r28)
    cmpwi r4, 0x0
    fmadds f22, f0, f1, f2
    beq lbl_fn_80080048_000001C8
    lfs f23, 0x4(r4)
    b lbl_fn_80080048_000001CC
lbl_fn_80080048_000001C8:
    lfs f23, lbl_80880B8C
lbl_fn_80080048_000001CC:
    lbz r0, 0x50(r28)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80080048_00000214
    lfs f1, 0x40(r28)
    lfs f0, 0x4c(r28)
    fdivs f2, f31, f1
    fadds f1, f0, f30
    bl fn_8068AEA8
    frsp f2, f1
    stfs f2, 0x4c(r28)
    lfs f1, 0x40(r28)
    lfs f0, 0x44(r28)
    fmadds f1, f1, f2, f0
    bl fn_8068AD58
    frsp f1, f1
    lfs f0, 0x3c(r28)
    fmuls f0, f0, f1
    fadds f22, f22, f0
lbl_fn_80080048_00000214:
    fcmpo cr0, f22, f24
    bge lbl_fn_80080048_00000220
    fadds f22, f22, f23
lbl_fn_80080048_00000220:
    fcmpo cr0, f22, f23
    ble lbl_fn_80080048_0000022C
    fsubs f22, f22, f23
lbl_fn_80080048_0000022C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80080048_00000270
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080048_0000026C
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_80080048_0000026C:
    stw r3, 0x8(r30)
lbl_fn_80080048_00000270:
    lwz r3, 0x8(r30)
    stfs f22, 0x10(r3)
    lbz r0, 0x50(r28)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_80080048_0000040C
    lwz r4, 0xc(r30)
    lwz r3, lbl_8087EFA8
    cmpwi r4, 0x0
    lfs f1, 0x3a4(r3)
    beq lbl_fn_80080048_000002A0
    lfs f2, 0xc(r4)
    b lbl_fn_80080048_000002A4
lbl_fn_80080048_000002A0:
    lfs f2, lbl_80880B94
lbl_fn_80080048_000002A4:
    lfs f0, 0x28(r28)
    fmadds f23, f0, f1, f2
    fcmpo cr0, f23, f24
    bge lbl_fn_80080048_000002CC
    cmpwi r4, 0x0
    beq lbl_fn_80080048_000002C4
    lfs f0, 0x0(r4)
    b lbl_fn_80080048_000002C8
lbl_fn_80080048_000002C4:
    lfs f0, lbl_80880B88
lbl_fn_80080048_000002C8:
    fadds f23, f23, f0
lbl_fn_80080048_000002CC:
    cmpwi r4, 0x0
    beq lbl_fn_80080048_000002DC
    lfs f0, 0x0(r4)
    b lbl_fn_80080048_000002E0
lbl_fn_80080048_000002DC:
    lfs f0, lbl_80880B88
lbl_fn_80080048_000002E0:
    fcmpo cr0, f23, f0
    ble lbl_fn_80080048_00000300
    cmpwi r4, 0x0
    beq lbl_fn_80080048_000002F8
    lfs f0, 0x0(r4)
    b lbl_fn_80080048_000002FC
lbl_fn_80080048_000002F8:
    lfs f0, lbl_80880B88
lbl_fn_80080048_000002FC:
    fsubs f23, f23, f0
lbl_fn_80080048_00000300:
    cmpwi r4, 0x0
    bne lbl_fn_80080048_00000340
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080048_0000033C
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_80080048_0000033C:
    stw r3, 0xc(r30)
lbl_fn_80080048_00000340:
    lwz r3, 0xc(r30)
    stfs f23, 0xc(r3)
    lwz r4, 0xc(r30)
    lwz r3, lbl_8087EFA8
    cmpwi r4, 0x0
    lfs f1, 0x3a4(r3)
    beq lbl_fn_80080048_00000364
    lfs f2, 0x10(r4)
    b lbl_fn_80080048_00000368
lbl_fn_80080048_00000364:
    lfs f2, lbl_80880B98
lbl_fn_80080048_00000368:
    lfs f0, 0x2c(r28)
    fmadds f23, f0, f1, f2
    fcmpo cr0, f23, f24
    bge lbl_fn_80080048_00000390
    cmpwi r4, 0x0
    beq lbl_fn_80080048_00000388
    lfs f0, 0x4(r4)
    b lbl_fn_80080048_0000038C
lbl_fn_80080048_00000388:
    lfs f0, lbl_80880B8C
lbl_fn_80080048_0000038C:
    fadds f23, f23, f0
lbl_fn_80080048_00000390:
    cmpwi r4, 0x0
    beq lbl_fn_80080048_000003A0
    lfs f0, 0x4(r4)
    b lbl_fn_80080048_000003A4
lbl_fn_80080048_000003A0:
    lfs f0, lbl_80880B8C
lbl_fn_80080048_000003A4:
    fcmpo cr0, f23, f0
    ble lbl_fn_80080048_000003C4
    cmpwi r4, 0x0
    beq lbl_fn_80080048_000003BC
    lfs f0, 0x4(r4)
    b lbl_fn_80080048_000003C0
lbl_fn_80080048_000003BC:
    lfs f0, lbl_80880B8C
lbl_fn_80080048_000003C0:
    fsubs f23, f23, f0
lbl_fn_80080048_000003C4:
    cmpwi r4, 0x0
    bne lbl_fn_80080048_00000404
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D788
    la r6, lbl_8087D784
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080048_00000400
    stfs f25, 0x0(r3)
    stfs f26, 0x4(r3)
    stfs f27, 0x8(r3)
    stfs f28, 0xc(r3)
    stfs f29, 0x10(r3)
lbl_fn_80080048_00000400:
    stw r3, 0xc(r30)
lbl_fn_80080048_00000404:
    lwz r3, 0xc(r30)
    stfs f23, 0x10(r3)
lbl_fn_80080048_0000040C:
    addi r31, r31, 0x54
    addi r29, r29, 0x1
lbl_fn_80080048_00000414:
    lbz r0, 0x4b(r27)
    cmpw r29, r0
    blt lbl_fn_80080048_00000094
    addi r11, r1, 0x20
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    psq_l f26, 0x68(r1), 0, 0
    lfd f26, 0x60(r1)
    psq_l f25, 0x58(r1), 0, 0
    lfd f25, 0x50(r1)
    psq_l f24, 0x48(r1), 0, 0
    lfd f24, 0x40(r1)
    psq_l f23, 0x38(r1), 0, 0
    lfd f23, 0x30(r1)
    psq_l f22, 0x28(r1), 0, 0
    lfd f22, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800804D0(void)
{
    nofralloc
    lbz r0, 0x4a(r3)
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_800804D0_000004D8
lbl_fn_800804D0_000004A0:
    lwz r0, 0xc(r3)
    add r5, r0, r6
    lbz r0, 0x10(r5)
    extsb r0, r0
    cmpw r0, r4
    bne lbl_fn_800804D0_000004C0
    mr r3, r7
    blr
lbl_fn_800804D0_000004C0:
    ble lbl_fn_800804D0_000004CC
    li r3, -0x1
    blr
lbl_fn_800804D0_000004CC:
    addi r6, r6, 0x18
    addi r7, r7, 0x1
    bdnz lbl_fn_800804D0_000004A0
lbl_fn_800804D0_000004D8:
    li r3, -0x1
    blr
}

asm void fn_80080528(void)
{
    nofralloc
    lbz r0, 0x4a(r3)
    li r8, 0x0
    li r7, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80080528_00000534
lbl_fn_80080528_000004F8:
    lwz r6, 0xc(r3)
    add r5, r6, r7
    lbz r0, 0x10(r5)
    extsb r0, r0
    cmpw r0, r4
    bne lbl_fn_80080528_0000051C
    mulli r0, r8, 0x18
    add r3, r6, r0
    blr
lbl_fn_80080528_0000051C:
    ble lbl_fn_80080528_00000528
    li r3, 0x0
    blr
lbl_fn_80080528_00000528:
    addi r7, r7, 0x18
    addi r8, r8, 0x1
    bdnz lbl_fn_80080528_000004F8
lbl_fn_80080528_00000534:
    li r3, 0x0
    blr
}

asm void fn_80080584(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_14
    lbz r31, 0x4a(r4)
    lis r28, lbl_80731D40@ha
    lbz r15, 0x26(r4)
    addi r5, r28, lbl_80731D40@l
    mulli r0, r31, 0x18
    stw r15, 0x3c(r1)
    lbz r15, 0x27(r4)
    mr r30, r4
    stw r0, 0x38(r1)
    mr r29, r3
    lbz r0, 0x24(r4)
    mr r6, r5
    stw r15, 0x8(r1)
    li r7, 0x0
    lbz r15, 0x28(r4)
    stw r15, 0xc(r1)
    lbz r15, 0x29(r4)
    stb r0, 0x24(r3)
    lwz r0, 0x3c(r1)
    stw r15, 0x10(r1)
    lbz r15, 0x2a(r4)
    stb r0, 0x26(r3)
    lwz r0, 0x8(r1)
    stw r15, 0x14(r1)
    lbz r15, 0x2b(r4)
    stb r0, 0x27(r3)
    lwz r0, 0xc(r1)
    stw r15, 0x18(r1)
    lbz r15, 0x2c(r4)
    stb r0, 0x28(r3)
    lwz r0, 0x10(r1)
    stw r15, 0x1c(r1)
    lbz r15, 0x2d(r4)
    stb r0, 0x29(r3)
    lwz r0, 0x14(r1)
    stw r15, 0x20(r1)
    lbz r15, 0x2e(r4)
    stb r0, 0x2a(r3)
    lwz r0, 0x18(r1)
    stw r15, 0x24(r1)
    lbz r15, 0x2f(r4)
    stb r0, 0x2b(r3)
    lwz r0, 0x1c(r1)
    stw r15, 0x28(r1)
    lbz r15, 0x4d(r4)
    stb r0, 0x2c(r3)
    lwz r0, 0x20(r1)
    lwz r16, 0x0(r4)
    lbz r17, 0x4e(r4)
    lbz r18, 0x4f(r4)
    lbz r19, 0x50(r4)
    lbz r20, 0x51(r4)
    lbz r21, 0x18(r4)
    lbz r22, 0x19(r4)
    lbz r23, 0x1a(r4)
    lbz r24, 0x1b(r4)
    lbz r25, 0x1c(r4)
    lbz r26, 0x1d(r4)
    lbz r27, 0x1e(r4)
    lbz r12, 0x1f(r4)
    lbz r11, 0x20(r4)
    lbz r10, 0x21(r4)
    lbz r9, 0x22(r4)
    lbz r8, 0x23(r4)
    lbz r14, 0x25(r4)
    lfs f0, 0x30(r4)
    stw r15, 0x2c(r1)
    lwz r15, 0x34(r4)
    lbz r4, 0x4c(r4)
    stb r0, 0x2d(r3)
    lwz r0, 0x24(r1)
    stw r4, 0x34(r1)
    li r4, 0x6
    stb r0, 0x2e(r3)
    lwz r0, 0x28(r1)
    stb r0, 0x2f(r3)
    lwz r0, 0x2c(r1)
    stb r0, 0x4d(r3)
    mr r0, r15
    stw r0, 0x34(r3)
    lwz r0, 0x34(r1)
    stw r16, 0x0(r3)
    stb r17, 0x4e(r3)
    stb r18, 0x4f(r3)
    stb r19, 0x50(r3)
    stb r20, 0x51(r3)
    stb r21, 0x18(r3)
    stb r22, 0x19(r3)
    stb r23, 0x1a(r3)
    stb r24, 0x1b(r3)
    stb r25, 0x1c(r3)
    stb r26, 0x1d(r3)
    stb r27, 0x1e(r3)
    stb r12, 0x1f(r3)
    stb r11, 0x20(r3)
    stb r10, 0x21(r3)
    stb r9, 0x22(r3)
    stb r8, 0x23(r3)
    stb r14, 0x25(r3)
    stfs f0, 0x30(r3)
    stb r0, 0x4c(r3)
    stb r31, 0x4a(r3)
    lwz r3, 0x38(r1)
    stw r15, 0x30(r1)
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8007E9EC@ha
    lis r5, fn_8007AA64@ha
    mr r7, r31
    li r6, 0x18
    addi r4, r4, fn_8007E9EC@l
    addi r5, r5, fn_8007AA64@l
    bl fn_80695720
    stw r3, 0xc(r29)
    li r16, 0x0
    li r15, 0x0
    li r17, 0x0
    b lbl_fn_80080584_000008EC
lbl_fn_80080584_00000728:
    lwz r3, 0xc(r30)
    lwz r0, 0xc(r29)
    lwzx r21, r3, r15
    add r14, r3, r15
    add r18, r0, r15
    cmpwi r21, 0x0
    beq lbl_fn_80080584_00000748
    b lbl_fn_80080584_0000074C
lbl_fn_80080584_00000748:
    la r21, lbl_8087EF00
lbl_fn_80080584_0000074C:
    cmpwi r21, 0x0
    beq lbl_fn_80080584_00000764
    mr r3, r21
    bl strlen
    mr r20, r3
    b lbl_fn_80080584_00000768
lbl_fn_80080584_00000764:
    li r20, 0x0
lbl_fn_80080584_00000768:
    cmpwi r21, 0x0
    beq lbl_fn_80080584_000007C0
    cmpwi r20, 0x0
    beq lbl_fn_80080584_000007C0
    addi r3, r20, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r19, r3
    mr r4, r21
    mr r5, r20
    bl memcpy
    stbx r17, r19, r20
    lwz r3, 0x0(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80080584_000007B8
    bl fn_80084C24
    stw r17, 0x0(r18)
lbl_fn_80080584_000007B8:
    stw r19, 0x0(r18)
    b lbl_fn_80080584_000007D4
lbl_fn_80080584_000007C0:
    lwz r3, 0x0(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80080584_000007D4
    bl fn_80084C24
    stw r17, 0x0(r18)
lbl_fn_80080584_000007D4:
    lbz r0, 0x10(r14)
    stb r0, 0x10(r18)
    lwz r3, 0x8(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80080584_000007F4
    beq lbl_fn_80080584_000007F0
    bl dtor_80084684
lbl_fn_80080584_000007F0:
    stw r17, 0x8(r18)
lbl_fn_80080584_000007F4:
    lwz r3, 0xc(r18)
    cmpwi r3, 0x0
    beq lbl_fn_80080584_0000080C
    beq lbl_fn_80080584_00000808
    bl dtor_80084684
lbl_fn_80080584_00000808:
    stw r17, 0xc(r18)
lbl_fn_80080584_0000080C:
    lwz r0, 0x8(r14)
    cmpwi r0, 0x0
    beq lbl_fn_80080584_00000868
    addi r5, r28, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080584_00000864
    lwz r4, 0x8(r14)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_80080584_00000864:
    stw r3, 0x8(r18)
lbl_fn_80080584_00000868:
    lwz r0, 0xc(r14)
    cmpwi r0, 0x0
    beq lbl_fn_80080584_000008C4
    addi r5, r28, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080584_000008C0
    lwz r4, 0xc(r14)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_80080584_000008C0:
    stw r3, 0xc(r18)
lbl_fn_80080584_000008C4:
    lbz r0, 0x12(r14)
    addi r15, r15, 0x18
    stb r0, 0x12(r18)
    addi r16, r16, 0x1
    lbz r0, 0x13(r14)
    stb r0, 0x13(r18)
    lbz r0, 0x14(r14)
    stb r0, 0x14(r18)
    lbz r0, 0x15(r14)
    stb r0, 0x15(r18)
lbl_fn_80080584_000008EC:
    lbz r0, 0x4a(r29)
    cmpw r16, r0
    blt lbl_fn_80080584_00000728
    lbz r14, 0x4b(r30)
    stb r14, 0x4b(r29)
    cmpwi r14, 0x0
    bne lbl_fn_80080584_00000910
    li r3, 0x0
    b lbl_fn_80080584_00000948
lbl_fn_80080584_00000910:
    mulli r3, r14, 0x54
    lis r5, lbl_80731D40@ha
    li r4, 0x6
    addi r5, r5, lbl_80731D40@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8007C0D8@ha
    mr r7, r14
    addi r4, r4, fn_8007C0D8@l
    li r5, 0x0
    li r6, 0x54
    bl fn_80695720
lbl_fn_80080584_00000948:
    stw r3, 0x10(r29)
    li r9, 0x0
    li r3, 0x0
    b lbl_fn_80080584_00000A64
lbl_fn_80080584_00000958:
    lwz r4, 0x10(r30)
    li r6, 0x0
    lwz r0, 0x10(r29)
    li r7, 0x0
    add r5, r4, r3
    add r4, r0, r3
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lfs f0, 0x8(r5)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r5)
    stfs f0, 0x10(r4)
    lfs f0, 0x14(r5)
    stfs f0, 0x14(r4)
    lfs f0, 0x18(r5)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r5)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r5)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r4)
    lfs f2, 0x38(r5)
    psq_l f1, 0x30(r5), 0, 0
    psq_st f1, 0x30(r4), 0, 0
    stfs f2, 0x38(r4)
    lfs f2, 0x44(r5)
    psq_l f1, 0x3c(r5), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x48(r5)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r5)
    stfs f0, 0x4c(r4)
    lbz r0, 0x50(r5)
    stb r0, 0x50(r4)
    lwz r0, 0x10(r29)
    lbz r4, 0x4a(r29)
    add r8, r0, r3
    lwzx r0, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_80080584_00000A54
lbl_fn_80080584_00000A24:
    lwz r5, 0xc(r29)
    add r4, r5, r7
    lbz r4, 0x10(r4)
    extsb r4, r4
    cmpw r0, r4
    bne lbl_fn_80080584_00000A48
    mulli r0, r6, 0x18
    add r0, r5, r0
    b lbl_fn_80080584_00000A58
lbl_fn_80080584_00000A48:
    addi r7, r7, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_80080584_00000A24
lbl_fn_80080584_00000A54:
    li r0, 0x0
lbl_fn_80080584_00000A58:
    stw r0, 0x4(r8)
    addi r9, r9, 0x1
    addi r3, r3, 0x54
lbl_fn_80080584_00000A64:
    lbz r0, 0x4b(r29)
    cmpw r9, r0
    blt lbl_fn_80080584_00000958
    lbz r0, 0x4d(r29)
    lwz r10, 0x3c(r30)
    extsb. r0, r0
    lbz r9, 0x38(r30)
    lbz r8, 0x39(r30)
    lbz r7, 0x3a(r30)
    lbz r6, 0x3b(r30)
    lwz r5, 0x14(r30)
    lbz r4, 0x48(r30)
    lbz r3, 0x49(r30)
    lwz r0, 0x44(r30)
    stw r10, 0x3c(r29)
    stb r9, 0x38(r29)
    stb r8, 0x39(r29)
    stb r7, 0x3a(r29)
    stb r6, 0x3b(r29)
    stw r5, 0x14(r29)
    stb r4, 0x48(r29)
    stb r3, 0x49(r29)
    stw r0, 0x44(r29)
    bne lbl_fn_80080584_00000AD4
    lwz r4, 0x8(r29)
    mr r3, r29
    lwz r4, 0x10(r4)
    bl fn_8007FE5C
lbl_fn_80080584_00000AD4:
    addi r11, r1, 0x90
    bl _restgpr_14
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80080B34(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r22, 0x8(r1)
    mr r22, r3
    mr r23, r4
    li r24, 0x0
    li r26, 0x0
    li r25, 0x0
    li r31, 0x0
    b lbl_fn_80080B34_00000BB8
lbl_fn_80080B34_00000B18:
    lwz r3, 0xa4c(r23)
    lwz r30, 0xc(r22)
    lwzx r29, r3, r26
    cmpwi r29, 0x0
    beq lbl_fn_80080B34_00000B3C
    mr r3, r29
    bl strlen
    mr r27, r3
    b lbl_fn_80080B34_00000B40
lbl_fn_80080B34_00000B3C:
    li r27, 0x0
lbl_fn_80080B34_00000B40:
    cmpwi r29, 0x0
    beq lbl_fn_80080B34_00000B98
    cmpwi r27, 0x0
    beq lbl_fn_80080B34_00000B98
    addi r3, r27, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r28, r3
    mr r4, r29
    mr r5, r27
    bl memcpy
    stbx r31, r28, r27
    lwzx r3, r30, r25
    cmpwi r3, 0x0
    beq lbl_fn_80080B34_00000B90
    bl fn_80084C24
    stwx r31, r30, r25
lbl_fn_80080B34_00000B90:
    stwx r28, r30, r25
    b lbl_fn_80080B34_00000BAC
lbl_fn_80080B34_00000B98:
    lwzx r3, r30, r25
    cmpwi r3, 0x0
    beq lbl_fn_80080B34_00000BAC
    bl fn_80084C24
    stwx r31, r30, r25
lbl_fn_80080B34_00000BAC:
    addi r26, r26, 0x4
    addi r25, r25, 0x18
    addi r24, r24, 0x1
lbl_fn_80080B34_00000BB8:
    lbz r0, 0x4a(r22)
    cmpw r24, r0
    blt lbl_fn_80080B34_00000B18
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80080C20(void)
{
    nofralloc
    stwu r1, -0x1a0(r1)
    mflr r0
    stw r0, 0x1a4(r1)
    stmw r14, 0x158(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r28, 0x0
    lbz r0, 0x4a(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80080C20_00001024
    lis r19, lbl_80775B60@ha
    lis r21, lbl_80775B98@ha
    lis r22, lbl_80775B30@ha
    lis r3, lbl_80731D40@ha
    lbz r18, 0x10(r1)
    addi r30, r1, 0x4d
    addi r29, r4, 0x1
    addi r19, r19, lbl_80775B60@l
    addi r21, r21, lbl_80775B98@l
    addi r22, r22, lbl_80775B30@l
    addi r17, r1, 0x40
    addi r16, r3, lbl_80731D40@l
    li r31, 0x0
    li r23, 0x0
    lis r14, lbl_80775BC8@ha
    li r20, 0x1
    b lbl_fn_80080C20_00001018
lbl_fn_80080C20_00000C48:
    lwz r3, 0xc(r25)
    lwzx r24, r3, r31
    cmpwi r24, 0x0
    beq lbl_fn_80080C20_00000C5C
    b lbl_fn_80080C20_00000C60
lbl_fn_80080C20_00000C5C:
    la r24, lbl_8087EF00
lbl_fn_80080C20_00000C60:
    stw r23, 0x4c(r1)
    mr r3, r24
    stw r23, 0x50(r1)
    stw r23, 0x54(r1)
    bl strlen
    mr r15, r3
    addi r3, r1, 0x4c
    mr r4, r15
    bl fn_80013DC4
    stb r18, 0xc(r1)
    mr r6, r24
    addi r3, r1, 0x4c
    add r7, r24, r15
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x0(r27)
    li r15, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80080C20_00000D7C
    bne lbl_fn_80080C20_00000D60
    stw r19, 0x40(r1)
    addi r3, r14, lbl_80775BC8@l
    stb r23, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x44(r1)
    mr r15, r3
    stw r3, 0x38(r1)
    li r3, 0x10
    stw r0, 0x3c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000D0C
    stw r20, 0x4(r3)
    stw r20, 0x8(r3)
    stw r21, 0x0(r3)
    stw r15, 0xc(r3)
lbl_fn_80080C20_00000D0C:
    cmpwi r23, 0x0
    stw r3, 0x48(r1)
    stw r23, 0x38(r1)
    beq lbl_fn_80080C20_00000D24
    li r3, 0x0
    bl fn_80084C24
lbl_fn_80080C20_00000D24:
    lwz r3, 0x44(r1)
    addi r4, r14, lbl_80775BC8@l
    bl strcpy
    stw r22, 0x40(r1)
    addi r3, r1, 0x40
    bl fn_800DCA6C
    cmpwi r17, 0x0
    beq lbl_fn_80080C20_00000D60
    addic. r3, r17, 0x4
    beq lbl_fn_80080C20_00000D60
    beq lbl_fn_80080C20_00000D60
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000D60
    bl fn_806952C4
lbl_fn_80080C20_00000D60:
    lwz r5, 0x0(r27)
    addi r3, r27, 0x4
    addi r4, r1, 0x4c
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
    mr r15, r3
lbl_fn_80080C20_00000D7C:
    cmpwi r15, 0x0
    beq lbl_fn_80080C20_00000DBC
    lwz r0, 0xc(r25)
    add r24, r0, r31
    lbz r0, 0x11(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80080C20_00000DB4
    lwz r3, 0x4(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000DB4
    li r4, 0x1
    bl fn_800D5808
    stb r23, 0x11(r24)
    stw r23, 0x4(r24)
lbl_fn_80080C20_00000DB4:
    stw r15, 0x4(r24)
    b lbl_fn_80080C20_00000FFC
lbl_fn_80080C20_00000DBC:
    mr r3, r16
    bl strlen
    lwz r0, 0x4c(r1)
    mr r15, r3
    stw r3, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000DE4
    lbz r0, 0x4c(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80080C20_00000DE8
lbl_fn_80080C20_00000DE4:
    lwz r4, 0x50(r1)
lbl_fn_80080C20_00000DE8:
    lwz r0, 0x4c(r1)
    stw r4, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000E08
    lbz r0, 0x4c(r1)
    mr r3, r30
    clrlwi r0, r0, 25
    b lbl_fn_80080C20_00000E10
lbl_fn_80080C20_00000E08:
    lwz r3, 0x54(r1)
    lwz r0, 0x50(r1)
lbl_fn_80080C20_00000E10:
    cmplw r4, r0
    stw r0, 0x28(r1)
    addi r4, r1, 0x28
    bge lbl_fn_80080C20_00000E24
    addi r4, r1, 0x30
lbl_fn_80080C20_00000E24:
    lwz r0, 0x0(r4)
    mr r4, r16
    stw r0, 0x24(r1)
    addi r5, r1, 0x24
    cmplw r15, r0
    bge lbl_fn_80080C20_00000E40
    addi r5, r1, 0x2c
lbl_fn_80080C20_00000E40:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80080C20_00000E74
    lwz r0, 0x24(r1)
    cmplw r0, r15
    bge lbl_fn_80080C20_00000E64
    li r3, -0x1
    b lbl_fn_80080C20_00000E74
lbl_fn_80080C20_00000E64:
    bne lbl_fn_80080C20_00000E70
    li r3, 0x0
    b lbl_fn_80080C20_00000E74
lbl_fn_80080C20_00000E70:
    li r3, 0x1
lbl_fn_80080C20_00000E74:
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000FFC
    addi r15, r16, 0x92
    mr r3, r15
    bl strlen
    lwz r0, 0x4c(r1)
    mr r24, r3
    stw r3, 0x1c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000EA8
    lbz r0, 0x4c(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80080C20_00000EAC
lbl_fn_80080C20_00000EA8:
    lwz r4, 0x50(r1)
lbl_fn_80080C20_00000EAC:
    lwz r0, 0x4c(r1)
    stw r4, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000ECC
    lbz r0, 0x4c(r1)
    mr r3, r30
    clrlwi r0, r0, 25
    b lbl_fn_80080C20_00000ED4
lbl_fn_80080C20_00000ECC:
    lwz r3, 0x54(r1)
    lwz r0, 0x50(r1)
lbl_fn_80080C20_00000ED4:
    cmplw r4, r0
    stw r0, 0x18(r1)
    addi r4, r1, 0x18
    bge lbl_fn_80080C20_00000EE8
    addi r4, r1, 0x20
lbl_fn_80080C20_00000EE8:
    lwz r0, 0x0(r4)
    mr r4, r15
    stw r0, 0x14(r1)
    addi r5, r1, 0x14
    cmplw r24, r0
    bge lbl_fn_80080C20_00000F04
    addi r5, r1, 0x1c
lbl_fn_80080C20_00000F04:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_80080C20_00000F38
    lwz r0, 0x14(r1)
    cmplw r0, r24
    bge lbl_fn_80080C20_00000F28
    li r3, -0x1
    b lbl_fn_80080C20_00000F38
lbl_fn_80080C20_00000F28:
    bne lbl_fn_80080C20_00000F34
    li r3, 0x0
    b lbl_fn_80080C20_00000F38
lbl_fn_80080C20_00000F34:
    li r3, 0x1
lbl_fn_80080C20_00000F38:
    cmpwi r3, 0x0
    bne lbl_fn_80080C20_00000F54
    addi r3, r1, 0x58
    addi r4, r16, 0x9b
    crclr 6
    bl sprintf
    b lbl_fn_80080C20_00000F94
lbl_fn_80080C20_00000F54:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000F68
    mr r6, r30
    b lbl_fn_80080C20_00000F6C
lbl_fn_80080C20_00000F68:
    lwz r6, 0x54(r1)
lbl_fn_80080C20_00000F6C:
    lwz r0, 0x0(r26)
    addi r3, r1, 0x58
    addi r4, r16, 0xb9
    srwi. r0, r0, 31
    bne lbl_fn_80080C20_00000F88
    mr r5, r29
    b lbl_fn_80080C20_00000F8C
lbl_fn_80080C20_00000F88:
    lwz r5, 0x8(r26)
lbl_fn_80080C20_00000F8C:
    crclr 6
    bl sprintf
lbl_fn_80080C20_00000F94:
    lwz r0, 0xc(r25)
    add r15, r0, r31
    lbz r0, 0x11(r15)
    cmpwi r0, 0x0
    beq lbl_fn_80080C20_00000FC4
    lwz r3, 0x4(r15)
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000FC4
    li r4, 0x1
    bl fn_800D5808
    stb r23, 0x11(r15)
    stw r23, 0x4(r15)
lbl_fn_80080C20_00000FC4:
    lis r3, lbl_80731D40@ha
    stb r20, 0x11(r15)
    addi r5, r3, lbl_80731D40@l
    li r4, 0x6
    mr r6, r5
    li r3, 0x30
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80080C20_00000FF0
    bl fn_800D5738
lbl_fn_80080C20_00000FF0:
    stw r3, 0x4(r15)
    addi r4, r1, 0x58
    bl fn_800D5908
lbl_fn_80080C20_00000FFC:
    lwz r0, 0x4c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80080C20_00001010
    lwz r3, 0x54(r1)
    bl dtor_80084684
lbl_fn_80080C20_00001010:
    addi r31, r31, 0x18
    addi r28, r28, 0x1
lbl_fn_80080C20_00001018:
    lbz r0, 0x4a(r25)
    cmpw r28, r0
    blt lbl_fn_80080C20_00000C48
lbl_fn_80080C20_00001024:
    lmw r14, 0x158(r1)
    lwz r0, 0x1a4(r1)
    mtlr r0
    addi r1, r1, 0x1a0
    blr
}

asm void fn_80081080(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    mr r31, r4
    stw r30, 0x108(r1)
    mr r30, r3
    lbz r0, 0x4a(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_00001098
lbl_fn_80081080_0000106C:
    lwz r7, 0xc(r3)
    add r4, r7, r6
    lbz r0, 0x10(r4)
    cmpwi r0, 0x5
    bne lbl_fn_80081080_0000108C
    mulli r0, r5, 0x18
    add r0, r7, r0
    b lbl_fn_80081080_0000109C
lbl_fn_80081080_0000108C:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_80081080_0000106C
lbl_fn_80081080_00001098:
    li r0, 0x0
lbl_fn_80081080_0000109C:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000010B8
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xd0
    bl fn_806823B0
lbl_fn_80081080_000010B8:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_000010FC
lbl_fn_80081080_000010D0:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80081080_000010F0
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_00001100
lbl_fn_80081080_000010F0:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_000010D0
lbl_fn_80081080_000010FC:
    li r0, 0x0
lbl_fn_80081080_00001100:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_0000111C
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xd6
    bl fn_806823B0
lbl_fn_80081080_0000111C:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_00001160
lbl_fn_80081080_00001134:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80081080_00001154
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_00001164
lbl_fn_80081080_00001154:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_00001134
lbl_fn_80081080_00001160:
    li r0, 0x0
lbl_fn_80081080_00001164:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_00001180
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xda
    bl fn_806823B0
lbl_fn_80081080_00001180:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_000011C4
lbl_fn_80081080_00001198:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x3
    bne lbl_fn_80081080_000011B8
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_000011C8
lbl_fn_80081080_000011B8:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_00001198
lbl_fn_80081080_000011C4:
    li r0, 0x0
lbl_fn_80081080_000011C8:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000011E4
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xdf
    bl fn_806823B0
lbl_fn_80081080_000011E4:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_00001228
lbl_fn_80081080_000011FC:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0xb
    bne lbl_fn_80081080_0000121C
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_0000122C
lbl_fn_80081080_0000121C:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_000011FC
lbl_fn_80081080_00001228:
    li r0, 0x0
lbl_fn_80081080_0000122C:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_00001248
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xe6
    bl fn_806823B0
lbl_fn_80081080_00001248:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_0000128C
lbl_fn_80081080_00001260:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0xc
    bne lbl_fn_80081080_00001280
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_00001290
lbl_fn_80081080_00001280:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_00001260
lbl_fn_80081080_0000128C:
    li r0, 0x0
lbl_fn_80081080_00001290:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000012AC
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xea
    bl fn_806823B0
lbl_fn_80081080_000012AC:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_000012F0
lbl_fn_80081080_000012C4:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0xd
    bne lbl_fn_80081080_000012E4
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_000012F4
lbl_fn_80081080_000012E4:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_000012C4
lbl_fn_80081080_000012F0:
    li r0, 0x0
lbl_fn_80081080_000012F4:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_00001310
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xee
    bl fn_806823B0
lbl_fn_80081080_00001310:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_00001354
lbl_fn_80081080_00001328:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x14
    bne lbl_fn_80081080_00001348
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_00001358
lbl_fn_80081080_00001348:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_00001328
lbl_fn_80081080_00001354:
    li r0, 0x0
lbl_fn_80081080_00001358:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_00001374
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xf2
    bl fn_806823B0
lbl_fn_80081080_00001374:
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_000013B8
lbl_fn_80081080_0000138C:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x15
    bne lbl_fn_80081080_000013AC
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_000013BC
lbl_fn_80081080_000013AC:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_0000138C
lbl_fn_80081080_000013B8:
    li r0, 0x0
lbl_fn_80081080_000013BC:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000013D8
    lis r4, lbl_80731D40@ha
    mr r3, r31
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0xf7
    bl fn_806823B0
lbl_fn_80081080_000013D8:
    lwz r3, lbl_8087EFE0
    mr r4, r31
    bl fn_800C5F5C
    cmpwi r3, 0x0
    bne lbl_fn_80081080_0000141C
    lis r4, lbl_80731D40@ha
    mr r5, r31
    addi r4, r4, lbl_80731D40@l
    addi r3, r1, 0x8
    addi r4, r4, 0xfb
    crclr 6
    bl sprintf
    li r0, 0x0
    stb r0, 0x107(r1)
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_80081080_0000141C:
    mr r3, r31
    bl fn_800DC6B4
    stw r3, 0x4(r30)
    lwz r3, lbl_8087EFA8
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000014B4
    lbz r0, 0x4a(r30)
    li r4, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_80081080_0000147C
lbl_fn_80081080_00001450:
    lwz r6, 0xc(r30)
    add r3, r6, r5
    lbz r0, 0x10(r3)
    extsb. r0, r0
    bne lbl_fn_80081080_00001470
    mulli r0, r4, 0x18
    add r0, r6, r0
    b lbl_fn_80081080_00001480
lbl_fn_80081080_00001470:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_80081080_00001450
lbl_fn_80081080_0000147C:
    li r0, 0x0
lbl_fn_80081080_00001480:
    cmpwi r0, 0x0
    beq lbl_fn_80081080_000014A0
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x11e
    bl fn_800DC6B4
    stw r3, 0x4(r30)
    b lbl_fn_80081080_000014B4
lbl_fn_80081080_000014A0:
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x126
    bl fn_800DC6B4
    stw r3, 0x4(r30)
lbl_fn_80081080_000014B4:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80081514(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    lfs f31, lbl_80880B98
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    lfs f30, lbl_80880B94
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    lfs f29, lbl_80880B90
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    lfs f28, lbl_80880B8C
    stfd f27, 0x40(r1)
    psq_st f27, 0x48(r1), 0, 0
    lfs f27, lbl_80880B88
    stfd f26, 0x30(r1)
    psq_st f26, 0x38(r1), 0, 0
    fmr f26, f2
    stfd f25, 0x20(r1)
    psq_st f25, 0x28(r1), 0, 0
    fmr f25, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    li r29, 0x0
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_80081514_000015FC
lbl_fn_80081514_0000154C:
    lwz r0, 0xc(r28)
    add r31, r0, r30
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80081514_00001598
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80081514_00001594
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_80081514_00001594:
    stw r3, 0x8(r31)
lbl_fn_80081514_00001598:
    lwz r3, 0x8(r31)
    stfs f25, 0xc(r3)
    lwz r0, 0xc(r28)
    add r31, r0, r30
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80081514_000015EC
    li r3, 0x14
    li r4, 0x6
    la r5, lbl_8087D780
    la r6, lbl_8087D77C
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80081514_000015E8
    stfs f27, 0x0(r3)
    stfs f28, 0x4(r3)
    stfs f29, 0x8(r3)
    stfs f30, 0xc(r3)
    stfs f31, 0x10(r3)
lbl_fn_80081514_000015E8:
    stw r3, 0x8(r31)
lbl_fn_80081514_000015EC:
    lwz r3, 0x8(r31)
    addi r29, r29, 0x1
    addi r30, r30, 0x18
    stfs f26, 0x10(r3)
lbl_fn_80081514_000015FC:
    lbz r0, 0x4a(r28)
    cmpw r29, r0
    blt lbl_fn_80081514_0000154C
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    psq_l f27, 0x48(r1), 0, 0
    lfd f27, 0x40(r1)
    psq_l f26, 0x38(r1), 0, 0
    lfd f26, 0x30(r1)
    psq_l f25, 0x28(r1), 0, 0
    lfd f25, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800816A8(void)
{
    nofralloc
    lwz r0, 0x14(r3)
    extrwi r3, r0, 1, 12
    blr
}

asm void fn_800816B4(void)
{
    nofralloc
    stwu r1, -0x330(r1)
    mflr r0
    stw r0, 0x334(r1)
    addi r11, r1, 0x330
    bl _savegpr_23
    cmpwi r5, 0x0
    mr r26, r3
    mr r23, r4
    beq lbl_fn_800816B4_000016AC
    lis r4, lbl_80731D40@ha
    addi r3, r1, 0x208
    addi r4, r4, lbl_80731D40@l
    addi r4, r4, 0x1
    crclr 6
    bl sprintf
    b lbl_fn_800816B4_000016D4
lbl_fn_800816B4_000016AC:
    lwz r3, 0x8(r26)
    lis r4, lbl_80731D40@ha
    addi r4, r4, lbl_80731D40@l
    lwz r6, 0x0(r26)
    lwz r5, 0x10(r3)
    addi r3, r1, 0x208
    addi r4, r4, 0x12c
    lwz r5, 0x10(r5)
    crclr 6
    bl sprintf
lbl_fn_800816B4_000016D4:
    li r0, 0x0
    stb r0, 0x227(r1)
    mr r3, r23
    addi r4, r1, 0x208
    bl fn_8008937C
    lis r4, lbl_80731D40@ha
    lis r24, fn_80081BCC@ha
    addi r31, r4, lbl_80731D40@l
    mr r28, r3
    mr r10, r26
    addi r5, r26, 0x18
    addi r4, r31, 0x134
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x13e
    addi r5, r26, 0x20
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x149
    addi r5, r26, 0x1c
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x153
    addi r5, r26, 0x24
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x15e
    addi r5, r26, 0x28
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x169
    addi r5, r26, 0x2c
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, -0x1
    li r8, 0x1
    bl fn_800875F8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x174
    addi r5, r26, 0x34
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    bl fn_800874C8
    mr r3, r28
    mr r10, r26
    addi r4, r31, 0x17f
    addi r5, r26, 0x3c
    addi r9, r24, fn_80081BCC@l
    li r6, 0x0
    li r7, 0xff
    li r8, 0x1
    bl fn_800874C8
    lis r24, lbl_80777D80@ha
    li r27, 0x0
    addi r24, r24, lbl_80777D80@l
    li r29, 0x0
    lis r25, fn_8007C0D4@ha
    b lbl_fn_800816B4_00001A38
lbl_fn_800816B4_0000182C:
    lwz r0, 0xc(r26)
    addi r3, r1, 0x8
    addi r4, r31, 0x1
    add r30, r0, r29
    lbz r0, 0x10(r30)
    extsb r0, r0
    slwi r0, r0, 2
    lwzx r5, r24, r0
    crclr 6
    bl sprintf
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_8008937C
    lwz r5, 0x8(r30)
    mr r23, r3
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x4
    lfs f3, lbl_80880BAC
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0x8(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0xb
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x4
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0x8(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x12
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x8
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0x8(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x16
    lfs f3, lbl_80880BAC
    addi r5, r5, 0xc
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0x8(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x1d
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x10
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0xc(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x24
    lfs f3, lbl_80880BAC
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0xc(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x2e
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x4
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0xc(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x38
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x8
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0xc(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x3f
    lfs f3, lbl_80880BAC
    addi r5, r5, 0xc
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    lwz r5, 0xc(r30)
    mr r3, r23
    lfs f1, lbl_80880BA4
    mr r7, r30
    lfs f2, lbl_80880BA8
    addi r4, r31, 0x49
    lfs f3, lbl_80880BAC
    addi r5, r5, 0x10
    addi r6, r25, fn_8007C0D4@l
    bl fn_8008771C
    mr r3, r23
    mr r10, r30
    addi r4, r31, 0x53
    addi r5, r30, 0x12
    addi r9, r25, fn_8007C0D4@l
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_800874C8
    mr r3, r23
    mr r10, r30
    addi r4, r31, 0x59
    addi r5, r30, 0x13
    addi r9, r25, fn_8007C0D4@l
    li r6, 0x0
    li r7, 0x2
    li r8, 0x1
    bl fn_800874C8
    addi r29, r29, 0x18
    addi r27, r27, 0x1
lbl_fn_800816B4_00001A38:
    lbz r0, 0x4a(r26)
    cmpw r27, r0
    blt lbl_fn_800816B4_0000182C
    lbz r0, 0x4b(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800816B4_00001B6C
    lis r4, lbl_80731D40@ha
    mr r3, r28
    addi r28, r4, lbl_80731D40@l
    addi r4, r28, 0x18c
    bl fn_8008937C
    lis r27, lbl_80777D80@ha
    mr r24, r3
    li r25, 0x0
    li r23, 0x0
    addi r27, r27, lbl_80777D80@l
    b lbl_fn_800816B4_00001B60
lbl_fn_800816B4_00001A7C:
    lwz r5, 0x10(r26)
    addi r3, r1, 0x108
    addi r4, r28, 0x1
    lwzx r0, r5, r23
    slwi r0, r0, 2
    lwzx r5, r27, r0
    crclr 6
    bl sprintf
    mr r3, r24
    addi r4, r1, 0x108
    bl fn_8008937C
    lwz r0, 0x10(r26)
    mr r29, r3
    lfs f1, lbl_80880BBC
    addi r4, r28, 0x197
    add r5, r0, r23
    lfs f2, lbl_80880BC0
    lfs f3, lbl_80880BAC
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x14
    bl fn_8008771C
    lwz r0, 0x10(r26)
    mr r3, r29
    lfs f1, lbl_80880BBC
    addi r4, r28, 0x1d
    add r5, r0, r23
    lfs f2, lbl_80880BC0
    lfs f3, lbl_80880BAC
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x18
    bl fn_8008771C
    lwz r0, 0x10(r26)
    mr r3, r29
    lfs f1, lbl_80880BBC
    addi r4, r28, 0x19e
    add r5, r0, r23
    lfs f2, lbl_80880BC0
    lfs f3, lbl_80880BAC
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x28
    bl fn_8008771C
    lwz r0, 0x10(r26)
    mr r3, r29
    lfs f1, lbl_80880BBC
    addi r4, r28, 0x49
    add r5, r0, r23
    lfs f2, lbl_80880BC0
    lfs f3, lbl_80880BAC
    li r6, 0x0
    li r7, 0x0
    addi r5, r5, 0x2c
    bl fn_8008771C
    addi r23, r23, 0x54
    addi r25, r25, 0x1
lbl_fn_800816B4_00001B60:
    lbz r0, 0x4b(r26)
    cmpw r25, r0
    blt lbl_fn_800816B4_00001A7C
lbl_fn_800816B4_00001B6C:
    addi r11, r1, 0x330
    bl _restgpr_23
    lwz r0, 0x334(r1)
    mtlr r0
    addi r1, r1, 0x330
    blr
}

asm void fn_80081BCC(void)
{
    nofralloc
    blr
}

asm void fn_80081BD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80081BD0_00001BC4
lbl_fn_80081BD0_00001BB0:
    lwz r0, 0xc(r29)
    add r3, r0, r31
    bl fn_8007B100
    addi r31, r31, 0x18
    addi r30, r30, 0x1
lbl_fn_80081BD0_00001BC4:
    lbz r0, 0x4a(r29)
    cmpw r30, r0
    blt lbl_fn_80081BD0_00001BB0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80081C34(void)
{
    nofralloc
    subi r0, r3, 0x6
    cmplwi r0, 0x10
    bgt lbl_fn_80081C34_00001CB0
    lis r3, jumptable_8077850C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8077850C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x1a8
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x1c6
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x1e3
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x1e3
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x202
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x225
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x249
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x268
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x289
    blr
    lis r3, lbl_80731D40@ha
    addi r3, r3, lbl_80731D40@l
    addi r3, r3, 0x1e3
    blr
lbl_fn_80081C34_00001CB0:
    li r3, 0x0
    blr
}

asm void fn_80081D00(void)
{
    nofralloc
    lwz r0, 0x14(r3)
    li r10, 0x0
    ori r5, r10, 0x1
    extrwi. r0, r0, 1, 12
    beq lbl_fn_80081D00_00001CD0
    ori r5, r10, 0x2
lbl_fn_80081D00_00001CD0:
    lbz r9, 0x4a(r3)
    mr r10, r5
    li r6, 0x0
    li r7, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80081D00_00001D18
lbl_fn_80081D00_00001CEC:
    lwz r8, 0xc(r3)
    add r4, r8, r7
    lbz r0, 0x10(r4)
    cmpwi r0, 0x15
    bne lbl_fn_80081D00_00001D0C
    mulli r0, r6, 0x18
    add r0, r8, r0
    b lbl_fn_80081D00_00001D1C
lbl_fn_80081D00_00001D0C:
    addi r7, r7, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_80081D00_00001CEC
lbl_fn_80081D00_00001D18:
    li r0, 0x0
lbl_fn_80081D00_00001D1C:
    cmpwi r0, 0x0
    beq lbl_fn_80081D00_00001D28
    ori r10, r5, 0x4
lbl_fn_80081D00_00001D28:
    li r5, 0x0
    li r6, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80081D00_00001D68
lbl_fn_80081D00_00001D3C:
    lwz r7, 0xc(r3)
    add r4, r7, r6
    lbz r0, 0x10(r4)
    cmpwi r0, 0x14
    bne lbl_fn_80081D00_00001D5C
    mulli r0, r5, 0x18
    add r0, r7, r0
    b lbl_fn_80081D00_00001D6C
lbl_fn_80081D00_00001D5C:
    addi r6, r6, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_80081D00_00001D3C
lbl_fn_80081D00_00001D68:
    li r0, 0x0
lbl_fn_80081D00_00001D6C:
    cmpwi r0, 0x0
    beq lbl_fn_80081D00_00001D78
    ori r10, r10, 0x8
lbl_fn_80081D00_00001D78:
    stb r10, 0x49(r3)
    blr
}
