#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800133B0(void);
extern void fn_80013404(void);
extern void fn_8008B964(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800A58D0(void);
extern void fn_800F52F8(void);
extern void fn_800F7258(void);
extern void fn_801156BC(void);
extern void fn_801156C4(void);
extern void fn_80116E6C(void);
extern void fn_80121F00(void);
extern void fn_80121F08(void);
extern void fn_80121FD4(void);
extern void fn_801220A0(void);
extern void fn_8012216C(void);
extern void fn_80122238(void);
extern void fn_80122280(void);
extern void fn_80122288(void);
extern void fn_801240B4(void);
extern void fn_801248DC(void);
extern void fn_80124BE4(void);
extern void fn_8017C974(void);
extern void fn_80370174(void);

/* External data declarations */
extern u8 jumptable_8077A228[];
extern u8 jumptable_8077A300[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_80881818;
extern u32 lbl_8088181C;
extern u32 lbl_80881820;
extern u32 lbl_80881824;
extern u32 lbl_80881828;
extern u32 lbl_8088182C;
extern u32 lbl_80881830;
extern u32 lbl_80881834;

/* Function declarations */
void fn_801222D4(void);
void fn_80122330(void);
void fn_80122550(void);
void fn_80122558(void);
void fn_80122560(void);
void fn_8012256C(void);
void fn_80122C70(void);
void fn_801231B0(void);
void fn_801231B8(void);
void fn_801231C8(void);
void fn_801231D0(void);
void fn_801237E0(void);
void fn_801237E8(void);
void fn_801237F0(void);

asm void fn_801222D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80881818
    li r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x0
    li r5, 0x36
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stfs f0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x4c(r3)
    addi r3, r3, 0x14
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80122330(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    beq lbl_fn_80122330_0000009C
    li r0, 0x0
    stw r0, 0x0(r3)
    bl fn_80124BE4
    mr r3, r31
    bl fn_8012256C
    b lbl_fn_80122330_0000025C
lbl_fn_80122330_0000009C:
    li r4, 0x11
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80122330_000000C8
    bl fn_80122288
    cmpwi r3, 0x0
    beq lbl_fn_80122330_000000C8
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_80122330_000000D0
lbl_fn_80122330_000000C8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80122330_000000D0:
    mr r3, r31
    li r4, 0x8
    bl fn_80122C70
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    bne lbl_fn_80122330_00000108
    mr r3, r31
    li r4, 0x8
    bl fn_80122C70
    li r4, 0x1
    bl fn_801220A0
    cmpwi r3, 0x0
    beq lbl_fn_80122330_00000118
lbl_fn_80122330_00000108:
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_80122330_00000120
lbl_fn_80122330_00000118:
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_80122330_00000120:
    mr r3, r31
    li r4, 0x3
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80122330_00000144
    lwz r3, 0x8(r31)
    addi r0, r3, 0x1
    stw r0, 0x8(r31)
    b lbl_fn_80122330_0000014C
lbl_fn_80122330_00000144:
    li r0, 0x0
    stw r0, 0x8(r31)
lbl_fn_80122330_0000014C:
    mr r3, r31
    li r4, 0x7
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_80122330_00000170
    lwz r3, 0x4c(r31)
    addi r0, r3, 0x1
    stw r0, 0x4c(r31)
    b lbl_fn_80122330_00000178
lbl_fn_80122330_00000170:
    li r0, 0x0
    stw r0, 0x4c(r31)
lbl_fn_80122330_00000178:
    lfs f31, lbl_80881818
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_80122330_000001C4
    bl fn_80121F00
    bl fn_80122550
    mr r30, r3
    bl fn_80122558
    lfs f2, 0xc(r3)
    mr r3, r30
    lfs f1, lbl_8088181C
    lfs f0, lbl_80881820
    fdivs f31, f2, f1
    fmuls f31, f31, f0
    bl fn_80122558
    lfs f1, 0x0(r3)
    lfs f0, lbl_80881824
    fdivs f0, f0, f1
    fmuls f31, f31, f0
lbl_fn_80122330_000001C4:
    mr r3, r31
    li r4, 0x0
    bl fn_801248DC
    lfs f0, lbl_80881828
    fcmpo cr0, f1, f0
    bge lbl_fn_80122330_00000204
    bl fn_8008B964
    bl fn_800F7258
    bl fn_80116E6C
    lfs f0, 0x4(r3)
    lwz r3, 0x10(r31)
    fadds f0, f31, f0
    subi r0, r3, 0x1
    stw r0, 0x10(r31)
    stfs f0, 0xc(r31)
    b lbl_fn_80122330_00000254
lbl_fn_80122330_00000204:
    bl fn_8008B964
    bl fn_800F7258
    bl fn_80116E6C
    lfs f0, 0x4(r3)
    lwz r0, 0x10(r31)
    fadds f31, f31, f0
    cmpwi r0, 0x0
    ble lbl_fn_80122330_00000244
    lfs f0, 0xc(r31)
    fsubs f1, f31, f0
    bl fn_800133B0
    bl fn_80122560
    lfs f0, lbl_8088182C
    fcmpo cr0, f1, f0
    ble lbl_fn_80122330_00000244
    b lbl_fn_80122330_00000254
lbl_fn_80122330_00000244:
    lwz r3, 0x10(r31)
    stfs f31, 0xc(r31)
    subi r0, r3, 0x1
    stw r0, 0x10(r31)
lbl_fn_80122330_00000254:
    mr r3, r31
    bl fn_8012256C
lbl_fn_80122330_0000025C:
    lwz r0, 0x24(r1)
    psq_l f31, 0x18(r1), 0, 0
    lfd f31, 0x10(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80122550(void)
{
    nofralloc
    addi r3, r3, 0x6c
    blr
}

asm void fn_80122558(void)
{
    nofralloc
    addi r3, r3, 0x51c
    blr
}

asm void fn_80122560(void)
{
    nofralloc
    fabs f0, f1
    frsp f1, f0
    blr
}

asm void fn_8012256C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r28, r3
    li r29, 0x0
    li r31, 0x0
    li r27, 0x1
lbl_fn_8012256C_000002B8:
    add r30, r28, r29
    lbz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_0000097C
    subi r0, r29, 0x27
    stb r31, 0x14(r30)
    cmplwi r0, 0x1
    ble lbl_fn_8012256C_000007F0
    cmpwi r29, 0x4
    beq lbl_fn_8012256C_00000304
    cmpwi r29, 0x7
    beq lbl_fn_8012256C_000003B4
    cmpwi r29, 0x24
    beq lbl_fn_8012256C_000003B4
    cmpwi r29, 0x12
    beq lbl_fn_8012256C_000005C4
    cmpwi r29, 0x23
    beq lbl_fn_8012256C_0000073C
    b lbl_fn_8012256C_000008BC
lbl_fn_8012256C_00000304:
    mr r3, r28
    mr r4, r29
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r26, r3
    beq lbl_fn_8012256C_0000038C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000380
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000380
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000380
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000380
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000360
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_00000364
lbl_fn_8012256C_00000360:
    li r3, 0x0
lbl_fn_8012256C_00000364:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000380
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_00000384
lbl_fn_8012256C_00000380:
    li r0, 0x0
lbl_fn_8012256C_00000384:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_00000394
lbl_fn_8012256C_0000038C:
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_00000394:
    lwz r3, lbl_8087EF70
    mr r5, r26
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000003B4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000514
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_0000042C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_0000042C
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_0000042C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_0000042C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_0000040C
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_00000410
lbl_fn_8012256C_0000040C:
    li r3, 0x0
lbl_fn_8012256C_00000410:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_0000042C
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_00000430
lbl_fn_8012256C_0000042C:
    li r0, 0x0
lbl_fn_8012256C_00000430:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_00000440
    li r3, 0x0
    b lbl_fn_8012256C_0000045C
lbl_fn_8012256C_00000440:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xb
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8012256C_0000045C:
    cmpwi r3, 0x0
    bne lbl_fn_8012256C_00000968
    mr r3, r28
    mr r4, r29
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r26, r3
    beq lbl_fn_8012256C_000004EC
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000004E0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000004E0
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000004E0
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000004E0
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000004C0
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_000004C4
lbl_fn_8012256C_000004C0:
    li r3, 0x0
lbl_fn_8012256C_000004C4:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000004E0
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_000004E4
lbl_fn_8012256C_000004E0:
    li r0, 0x0
lbl_fn_8012256C_000004E4:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_000004F4
lbl_fn_8012256C_000004EC:
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000004F4:
    lwz r3, lbl_8087EF70
    mr r5, r26
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_00000514:
    mr r3, r28
    mr r4, r29
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r26, r3
    beq lbl_fn_8012256C_0000059C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000590
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000590
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000590
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000590
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000570
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_00000574
lbl_fn_8012256C_00000570:
    li r3, 0x0
lbl_fn_8012256C_00000574:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000590
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_00000594
lbl_fn_8012256C_00000590:
    li r0, 0x0
lbl_fn_8012256C_00000594:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_000005A4
lbl_fn_8012256C_0000059C:
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000005A4:
    lwz r3, lbl_8087EF70
    mr r5, r26
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000005C4:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000688
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000638
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000638
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000638
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000638
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000618
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_0000061C
lbl_fn_8012256C_00000618:
    li r3, 0x0
lbl_fn_8012256C_0000061C:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000638
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_0000063C
lbl_fn_8012256C_00000638:
    li r0, 0x0
lbl_fn_8012256C_0000063C:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_0000064C
    li r0, 0x0
    b lbl_fn_8012256C_00000668
lbl_fn_8012256C_0000064C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8012256C_00000668:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_8012256C_00000968
    lwz r0, 0x0(r28)
    cmpwi r0, 0xa
    blt lbl_fn_8012256C_00000968
    li r3, 0x1
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_00000688:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000006EC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000006EC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000006EC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000006EC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000006CC
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_000006D0
lbl_fn_8012256C_000006CC:
    li r3, 0x0
lbl_fn_8012256C_000006D0:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000006EC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_000006F0
lbl_fn_8012256C_000006EC:
    li r0, 0x0
lbl_fn_8012256C_000006F0:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_00000700
    li r0, 0x0
    b lbl_fn_8012256C_0000071C
lbl_fn_8012256C_00000700:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8012256C_0000071C:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_8012256C_00000968
    lwz r0, 0x0(r28)
    cmpwi r0, 0xa
    blt lbl_fn_8012256C_00000968
    li r3, 0x1
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_0000073C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000007A0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000007A0
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000007A0
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_000007A0
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000780
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_00000784
lbl_fn_8012256C_00000780:
    li r3, 0x0
lbl_fn_8012256C_00000784:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_000007A0
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_000007A4
lbl_fn_8012256C_000007A0:
    li r0, 0x0
lbl_fn_8012256C_000007A4:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_000007B4
    li r0, 0x0
    b lbl_fn_8012256C_000007D0
lbl_fn_8012256C_000007B4:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_8012256C_000007D0:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_8012256C_00000968
    lwz r0, 0x8(r28)
    cmpwi r0, 0x8
    blt lbl_fn_8012256C_00000968
    li r3, 0x1
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000007F0:
    lwz r3, lbl_8087F9C0
    lwz r3, 0x80(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8012256C_0000080C
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_0000080C:
    mr r3, r28
    mr r4, r29
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r26, r3
    beq lbl_fn_8012256C_00000894
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000888
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000888
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000888
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000888
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000868
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_0000086C
lbl_fn_8012256C_00000868:
    li r3, 0x0
lbl_fn_8012256C_0000086C:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000888
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_0000088C
lbl_fn_8012256C_00000888:
    li r0, 0x0
lbl_fn_8012256C_0000088C:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_0000089C
lbl_fn_8012256C_00000894:
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_0000089C:
    lwz r3, lbl_8087EF70
    mr r5, r26
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_000008BC:
    mr r3, r28
    mr r4, r29
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r26, r3
    beq lbl_fn_8012256C_00000944
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000938
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000938
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000938
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012256C_00000938
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000918
    lwz r3, 0x48(r3)
    b lbl_fn_8012256C_0000091C
lbl_fn_8012256C_00000918:
    li r3, 0x0
lbl_fn_8012256C_0000091C:
    cmpwi r3, 0x0
    beq lbl_fn_8012256C_00000938
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012256C_0000093C
lbl_fn_8012256C_00000938:
    li r0, 0x0
lbl_fn_8012256C_0000093C:
    cmpwi r0, 0x0
    beq lbl_fn_8012256C_0000094C
lbl_fn_8012256C_00000944:
    li r3, 0x0
    b lbl_fn_8012256C_00000968
lbl_fn_8012256C_0000094C:
    lwz r3, lbl_8087EF70
    mr r5, r26
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8012256C_00000968:
    cmpwi r3, 0x0
    bne lbl_fn_8012256C_00000978
    stb r31, 0x14(r30)
    b lbl_fn_8012256C_0000097C
lbl_fn_8012256C_00000978:
    stb r27, 0x14(r30)
lbl_fn_8012256C_0000097C:
    addi r29, r29, 0x1
    cmpwi r29, 0x36
    blt lbl_fn_8012256C_000002B8
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80122C70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    add r5, r3, r4
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, 0x14(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_000009C4
    li r3, 0x21
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_000009C4:
    cmplwi r4, 0x35
    lwz r6, lbl_8087F0A8
    bgt lbl_fn_80122C70_00000EC4
    lis r5, jumptable_8077A228@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_8077A228@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    li r3, 0x5
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000A10
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000A10:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000A2C
    li r3, 0xf
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000A2C:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x4
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000EC8
    li r3, 0x21
    b lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0x5
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x20
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x9
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000EC8
    li r3, 0x6
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x20(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_00000AD4
    cmpwi r0, 0x1
    beq lbl_fn_80122C70_00000ADC
    cmpwi r0, 0x2
    beq lbl_fn_80122C70_00000AE4
    b lbl_fn_80122C70_00000EC4
lbl_fn_80122C70_00000AD4:
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000ADC:
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000AE4:
    li r3, 0x6
    b lbl_fn_80122C70_00000EC8
    lwz r0, 0x278(r6)
    li r3, 0xe
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x21
    b lbl_fn_80122C70_00000EC8
    li r3, 0xf
    b lbl_fn_80122C70_00000EC8
    li r3, 0xf
    b lbl_fn_80122C70_00000EC8
    li r3, 0x0
    b lbl_fn_80122C70_00000EC8
    li r3, 0x1
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    addi r3, r3, 0xf
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x6
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000EC8
    li r3, 0x9
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x6
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000EC8
    li r3, 0x9
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000B94
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000B94:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000BB0
    li r3, 0xf
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000BB0:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80122C70_00000EC8
    li r4, 0x2
    bl fn_80122C70
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000C18
    lwz r3, lbl_8087F430
    li r31, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000C04
    li r4, 0xd0
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000C04
    li r31, 0x0
lbl_fn_80122C70_00000C04:
    cmpwi r31, 0x0
    li r3, 0x21
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x9
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000C18:
    lwz r3, lbl_8087F430
    li r31, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000C3C
    li r4, 0xd0
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000C3C
    li r31, 0x0
lbl_fn_80122C70_00000C3C:
    cmpwi r31, 0x0
    li r3, 0x21
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x6
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087F9C0
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000C68
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000C68:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000C84
    li r3, 0xf
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000C84:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x30(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80122C70_00000EC8
    li r3, 0x0
    b lbl_fn_80122C70_00000EC8
    li r3, 0x1
    b lbl_fn_80122C70_00000EC8
    li r3, 0x1
    b lbl_fn_80122C70_00000EC8
    li r3, 0x2
    b lbl_fn_80122C70_00000EC8
    li r3, 0x3
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x3
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x1
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x2
    b lbl_fn_80122C70_00000EC8
    lwz r4, lbl_8087F9C0
    li r3, 0x6
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80122C70_00000EC8
    li r3, 0x9
    b lbl_fn_80122C70_00000EC8
    lwz r0, 0x27c(r6)
    li r3, 0x21
    cmpwi r0, 0x0
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    lwz r3, 0x27c(r6)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0x4
    b lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    li r4, 0x7
    bl fn_80122C70
    b lbl_fn_80122C70_00000EC8
    li r3, 0xc
    b lbl_fn_80122C70_00000EC8
    li r3, 0xd
    b lbl_fn_80122C70_00000EC8
    li r3, 0x4
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0xe
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    neg r0, r3
    or r0, r0, r3
    srawi r3, r0, 31
    addi r3, r3, 0xe
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0x0
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x7
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0xe
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    addi r3, r3, 0xe
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_80122C70_00000E2C
    li r3, 0x0
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000E2C:
    lwz r3, lbl_8087F9C0
    lwz r3, 0x30(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0xa
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x6
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0x1f
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x9
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0xf
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x7
    b lbl_fn_80122C70_00000EC8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    li r3, 0xe
    beq lbl_fn_80122C70_00000EC8
    li r3, 0x8
    b lbl_fn_80122C70_00000EC8
lbl_fn_80122C70_00000EC4:
    li r3, 0x21
lbl_fn_80122C70_00000EC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801231B0(void)
{
    nofralloc
    addi r3, r3, 0x244
    blr
}

asm void fn_801231B8(void)
{
    nofralloc
    lwz r0, 0x28(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_801231C8(void)
{
    nofralloc
    lwz r3, 0x20(r3)
    blr
}

asm void fn_801231D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800F52F8
    bl fn_801231B0
    subi r0, r30, 0x4
    cmplwi r0, 0x2b
    bgt lbl_fn_801231D0_000014CC
    lis r4, jumptable_8077A300@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8077A300@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
    bl fn_801156BC
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00000FB8
    li r31, 0x0
    li r3, 0xb
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00000FB0
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00000FD0
lbl_fn_801231D0_00000FB0:
    li r31, 0x1
    b lbl_fn_801231D0_00000FD0
lbl_fn_801231D0_00000FB8:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    mr r31, r3
lbl_fn_801231D0_00000FD0:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    bl fn_801156C4
    bl fn_80122280
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801231D0_00001018
    li r31, 0x0
    li r3, 0x9
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001040
    lwz r0, 0x0(r29)
    cmpwi r0, 0xa
    bne lbl_fn_801231D0_00001040
    li r31, 0x1
    b lbl_fn_801231D0_00001040
lbl_fn_801231D0_00001018:
    li r31, 0x0
    li r3, 0x6
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001040
    lwz r0, 0x0(r29)
    cmpwi r0, 0xa
    bne lbl_fn_801231D0_00001040
    li r31, 0x1
lbl_fn_801231D0_00001040:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    bl fn_801156C4
    bl fn_80122280
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801231D0_00001068
    cmpwi r0, 0x1
    beq lbl_fn_801231D0_000010D8
    b lbl_fn_801231D0_000014E4
lbl_fn_801231D0_00001068:
    bl fn_80122238
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_0000109C
    mr r3, r29
    li r4, 0x0
    bl fn_801248DC
    lfs f0, lbl_80881828
    fcmpo cr0, f1, f0
    ble lbl_fn_801231D0_0000109C
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_0000109C:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_000014E4
    mr r3, r29
    li r4, 0x0
    bl fn_801248DC
    lfs f0, lbl_80881828
    fcmpo cr0, f1, f0
    ble lbl_fn_801231D0_000014E4
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_000010D8:
    bl fn_80122238
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_0000110C
    mr r3, r29
    li r4, 0x0
    bl fn_801248DC
    lfs f0, lbl_80881828
    fcmpo cr0, f1, f0
    ble lbl_fn_801231D0_0000110C
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_0000110C:
    mr r3, r29
    li r4, 0x0
    bl fn_801248DC
    lfs f0, lbl_80881828
    fcmpo cr0, f1, f0
    ble lbl_fn_801231D0_000014E4
    mr r3, r29
    li r31, 0x0
    li r4, 0x7
    bl fn_801240B4
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001158
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00001188
lbl_fn_801231D0_00001158:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_0000118C
    mr r3, r29
    li r4, 0x7
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_0000118C
lbl_fn_801231D0_00001188:
    li r31, 0x1
lbl_fn_801231D0_0000118C:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x4
    li r6, 0x0
    bl fn_800A56A8
    bl fn_80013404
    lfs f0, lbl_80881830
    fcmpo cr0, f1, f0
    ble lbl_fn_801231D0_000011D0
    bl fn_801156C4
    bl fn_801237E0
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_000011D0
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_000011D0:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
    mr r3, r29
    li r4, 0x1
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_000014E4
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
    mr r3, r29
    li r4, 0x0
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_000014E4
    mr r3, r29
    li r4, 0x0
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121FD4
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_000014E4
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801231D0_000012A8
    bl fn_801156C4
    bl fn_801231B8
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00001290
    lbz r0, 0x2a(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801231D0_00001290
    bl fn_80122238
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001290
    li r3, 0x1
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_00001290:
    mr r3, r29
    li r4, 0x20
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_000012A8:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x6
    li r6, 0x0
    bl fn_800A56A8
    fneg f31, f1
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x5
    li r6, 0x0
    bl fn_800A56A8
    fadds f31, f31, f1
    lfs f0, lbl_80881834
    fcmpo cr0, f31, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    b lbl_fn_801231D0_000014E8
    lwz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801231D0_00001358
    bl fn_801156C4
    bl fn_801231B8
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001320
    li r3, 0x4
    li r4, 0x1
    bl fn_8012216C
    cntlzw r0, r3
    srwi r31, r0, 5
    b lbl_fn_801231D0_00001350
lbl_fn_801231D0_00001320:
    li r31, 0x0
    bl fn_80122238
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00001350
    li r3, 0x4
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00001350
    li r31, 0x1
lbl_fn_801231D0_00001350:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_00001358:
    bl fn_801156BC
    li r4, 0x0
    li r5, 0x6
    li r6, 0x0
    bl fn_800A56A8
    lfs f0, lbl_80881830
    fcmpo cr0, f1, f0
    mfcr r3
    extrwi r3, r3, 1, 1
    b lbl_fn_801231D0_000014E8
    li r31, 0x0
    li r3, 0x4
    li r4, 0x1
    bl fn_8012216C
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_000013A8
    lwz r0, 0x8(r29)
    cmpwi r0, 0x8
    bne lbl_fn_801231D0_000013A8
    li r31, 0x1
lbl_fn_801231D0_000013A8:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    bl fn_801156C4
    bl fn_801231C8
    cmpwi r3, 0x2
    bne lbl_fn_801231D0_000013F4
    mr r3, r29
    mr r4, r30
    li r31, 0x0
    bl fn_80122C70
    li r4, 0x1
    bl fn_801220A0
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_0000140C
    lwz r0, 0x4(r29)
    cmpwi r0, 0x7
    bge lbl_fn_801231D0_0000140C
    li r31, 0x1
    b lbl_fn_801231D0_0000140C
lbl_fn_801231D0_000013F4:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    mr r31, r3
lbl_fn_801231D0_0000140C:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    li r31, 0x0
    li r3, 0x6
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    bne lbl_fn_801231D0_00001440
    li r3, 0x9
    li r4, 0x1
    bl fn_80121F08
    cmpwi r3, 0x0
    beq lbl_fn_801231D0_00001444
lbl_fn_801231D0_00001440:
    li r31, 0x1
lbl_fn_801231D0_00001444:
    mr r3, r31
    b lbl_fn_801231D0_000014E8
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    mr r31, r3
    bl fn_801156BC
    mr r5, r31
    li r4, 0x0
    bl fn_800A555C
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801231D0_000014E8
    bl fn_801156C4
    bl fn_801237E8
    lwz r3, 0x8(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_801231D0_0000149C
    li r3, 0x0
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_0000149C:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x0
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_000014CC:
    mr r3, r29
    mr r4, r30
    bl fn_80122C70
    li r4, 0x1
    bl fn_80121F08
    b lbl_fn_801231D0_000014E8
lbl_fn_801231D0_000014E4:
    li r3, 0x0
lbl_fn_801231D0_000014E8:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801237E0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_801237E8(void)
{
    nofralloc
    addi r3, r3, 0x78
    blr
}

asm void fn_801237F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x27
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    ble lbl_fn_801237F0_0000182C
    cmpwi r4, 0x4
    beq lbl_fn_801237F0_00001558
    cmpwi r4, 0x12
    beq lbl_fn_801237F0_00001600
    cmpwi r4, 0x23
    beq lbl_fn_801237F0_00001778
    b lbl_fn_801237F0_000018F0
lbl_fn_801237F0_00001558:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801237F0_000015D8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000015CC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000015CC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000015CC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000015CC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000015AC
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_000015B0
lbl_fn_801237F0_000015AC:
    li r3, 0x0
lbl_fn_801237F0_000015B0:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000015CC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_000015D0
lbl_fn_801237F0_000015CC:
    li r0, 0x0
lbl_fn_801237F0_000015D0:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_000015E0
lbl_fn_801237F0_000015D8:
    li r3, 0x0
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_000015E0:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55AC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_00001600:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000016C4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001674
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001674
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001674
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001674
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001654
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_00001658
lbl_fn_801237F0_00001654:
    li r3, 0x0
lbl_fn_801237F0_00001658:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001674
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_00001678
lbl_fn_801237F0_00001674:
    li r0, 0x0
lbl_fn_801237F0_00001678:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_00001688
    li r0, 0x0
    b lbl_fn_801237F0_000016A4
lbl_fn_801237F0_00001688:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801237F0_000016A4:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801237F0_00001994
    lwz r0, 0x0(r31)
    cmpwi r0, 0xa
    bne lbl_fn_801237F0_00001994
    li r3, 0x1
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_000016C4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001728
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001728
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001728
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001728
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001708
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_0000170C
lbl_fn_801237F0_00001708:
    li r3, 0x0
lbl_fn_801237F0_0000170C:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001728
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_0000172C
lbl_fn_801237F0_00001728:
    li r0, 0x0
lbl_fn_801237F0_0000172C:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_0000173C
    li r0, 0x0
    b lbl_fn_801237F0_00001758
lbl_fn_801237F0_0000173C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801237F0_00001758:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801237F0_00001994
    lwz r0, 0x0(r31)
    cmpwi r0, 0xa
    bne lbl_fn_801237F0_00001994
    li r3, 0x1
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_00001778:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000017DC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000017DC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000017DC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000017DC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000017BC
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_000017C0
lbl_fn_801237F0_000017BC:
    li r3, 0x0
lbl_fn_801237F0_000017C0:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000017DC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_000017E0
lbl_fn_801237F0_000017DC:
    li r0, 0x0
lbl_fn_801237F0_000017E0:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_000017F0
    li r0, 0x0
    b lbl_fn_801237F0_0000180C
lbl_fn_801237F0_000017F0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801237F0_0000180C:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801237F0_00001994
    lwz r0, 0x8(r31)
    cmpwi r0, 0x8
    bne lbl_fn_801237F0_00001994
    li r3, 0x1
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_0000182C:
    lwz r5, lbl_8087F9C0
    lwz r5, 0x80(r5)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_801237F0_00001848
    li r3, 0x0
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_00001848:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801237F0_000018C8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000018BC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000018BC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000018BC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_000018BC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_0000189C
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_000018A0
lbl_fn_801237F0_0000189C:
    li r3, 0x0
lbl_fn_801237F0_000018A0:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_000018BC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_000018C0
lbl_fn_801237F0_000018BC:
    li r0, 0x0
lbl_fn_801237F0_000018C0:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_000018D0
lbl_fn_801237F0_000018C8:
    li r3, 0x0
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_000018D0:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55AC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_000018F0:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801237F0_00001970
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001964
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001964
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001964
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801237F0_00001964
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001944
    lwz r3, 0x48(r3)
    b lbl_fn_801237F0_00001948
lbl_fn_801237F0_00001944:
    li r3, 0x0
lbl_fn_801237F0_00001948:
    cmpwi r3, 0x0
    beq lbl_fn_801237F0_00001964
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801237F0_00001968
lbl_fn_801237F0_00001964:
    li r0, 0x0
lbl_fn_801237F0_00001968:
    cmpwi r0, 0x0
    beq lbl_fn_801237F0_00001978
lbl_fn_801237F0_00001970:
    li r3, 0x0
    b lbl_fn_801237F0_00001994
lbl_fn_801237F0_00001978:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55AC
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_801237F0_00001994:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
