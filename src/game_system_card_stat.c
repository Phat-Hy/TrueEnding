#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80041A28(void);
extern void fn_8004ED34(void);
extern void fn_80084320(void);
extern void fn_80097D7C(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800F8548(void);
extern void fn_800F8C6C(void);
extern void fn_800FB4B0(void);
extern void fn_8013322C(void);
extern void fn_80139560(void);
extern void fn_80144710(void);
extern void fn_80145334(void);
extern void fn_8014C540(void);
extern void fn_801513D0(void);
extern void fn_80155790(void);
extern void fn_80155A88(void);
extern void fn_801562A0(void);
extern void fn_8015783C(void);
extern void fn_80158BB4(void);
extern void fn_80158CA4(void);
extern void fn_80161880(void);
extern void fn_8016D74C(void);
extern void fn_8016E970(void);
extern void fn_80170A20(void);
extern void fn_80178208(void);
extern void fn_80179D44(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_8035BC84(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_805F99B0(void);
extern void fn_80680CF8(void);
extern void fn_80695AD0(void);

/* External data declarations */
extern u8 lbl_8074B408[];
extern u8 lbl_8074B448[];
extern u8 lbl_80766768[];
extern u8 lbl_80789B00[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8088560C;
extern u32 lbl_80885610;
extern u32 lbl_80885620;
extern u32 lbl_80885624;
extern u32 lbl_80885628;
extern u32 lbl_8088562C;
extern u32 lbl_80885630;
extern u32 lbl_80885634;
extern u32 lbl_80885638;
extern u32 lbl_8088563C;
extern u32 lbl_80885640;
extern u32 lbl_80885644;
extern u32 lbl_80885648;
extern u32 lbl_8088564C;
extern u32 lbl_80885650;
extern u32 lbl_80885654;
extern u32 lbl_80885658;
extern u32 lbl_8088565C;
extern u32 lbl_80885660;
extern u32 lbl_80885664;
extern u32 lbl_80885668;
extern u32 lbl_8088566C;

/* Function declarations */
void fn_8035C47C(void);
void fn_8035C8CC(void);
void fn_8035CE58(void);
void fn_8035CF78(void);
void fn_8035D294(void);
void fn_8035D4E0(void);
void fn_8035D6B8(void);
void fn_8035D7D4(void);
void fn_8035DA0C(void);
void fn_8035DA94(void);
void fn_8035DC58(void);

asm void fn_8035C47C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8035C47C_00000030
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8035C47C_00000030:
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035C47C_000003C0
    lwz r0, 0xd1c(r31)
    lwz r3, 0x14b8(r31)
    cmpwi r0, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14b8(r31)
    bne lbl_fn_8035C47C_00000060
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0xd1c(r31)
lbl_fn_8035C47C_00000060:
    lwz r0, 0x14d0(r31)
    cmpwi r0, 0x0
    blt lbl_fn_8035C47C_00000170
    mulli r0, r0, 0xc
    lwz r3, lbl_8087F430
    add r30, r31, r0
    lwz r4, 0x1544(r30)
    bl fn_80370A78
    cmpwi r3, 0x1
    beq lbl_fn_8035C47C_00000170
    lwz r3, lbl_8087F430
    lwz r4, 0x1548(r30)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8035C47C_000000C4
    lwz r0, 0x14d0(r31)
    stw r0, 0x14d4(r31)
    cmpwi r0, 0x1
    blt lbl_fn_8035C47C_00000168
    lwz r3, 0x15a4(r31)
    li r0, 0x1
    stw r0, 0x14c0(r31)
    subi r0, r3, 0xf
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_00000168
lbl_fn_8035C47C_000000C4:
    lwz r5, 0xd1c(r31)
    addi r3, r1, 0x28
    lfs f1, lbl_80885610
    li r4, 0x79
    lfs f0, lbl_8088560C
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x10
    addi r3, r1, 0x28
    mr r5, r4
    bl fn_805F93C0
    lwz r4, 0xd1c(r31)
    lwz r29, lbl_8087F048
    lfs f1, 0x530(r4)
    lfs f0, 0x18(r1)
    mr r3, r29
    lfs f3, 0x52c(r4)
    fadds f4, f1, f0
    lfs f2, 0x14(r1)
    lfs f1, 0x528(r4)
    lfs f0, 0x10(r1)
    fadds f2, f3, f2
    stfs f4, 0x24(r1)
    fadds f0, f1, f0
    stfs f2, 0x20(r1)
    stfs f0, 0x1c(r1)
    bl fn_800F8548
    li r0, 0x1
    stw r0, 0x8(r1)
    mr r6, r3
    mr r3, r29
    lwz r5, 0x14f4(r31)
    mr r4, r31
    addi r7, r1, 0x1c
    li r8, 0x0
    li r9, 0x1e
    li r10, -0x1
    bl fn_800FB4B0
lbl_fn_8035C47C_00000168:
    li r0, -0x1
    stw r0, 0x14d0(r31)
lbl_fn_8035C47C_00000170:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x8
    beq lbl_fn_8035C47C_000001A0
    lwz r0, 0x14d8(r31)
    lwz r3, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8035C47C_000001A0
    li r0, 0x0
    stw r0, 0x8a0(r3)
    stw r0, 0x4d8(r3)
    stb r0, 0x97c(r3)
    stw r0, 0x14d8(r31)
lbl_fn_8035C47C_000001A0:
    lwz r0, 0x14dc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035C47C_000001D4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_8035C47C_000001CC
    lwz r0, 0x560(r31)
    cmpwi r0, 0x14
    blt lbl_fn_8035C47C_000001CC
    cmpwi r0, 0x17
    ble lbl_fn_8035C47C_000001D4
lbl_fn_8035C47C_000001CC:
    li r0, 0x0
    stw r0, 0x14dc(r31)
lbl_fn_8035C47C_000001D4:
    lwz r0, 0x14e0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035C47C_00000224
    lwz r3, lbl_8087EFA8
    lfs f1, 0x14e4(r31)
    lfs f2, 0x3a4(r3)
    lfs f0, lbl_80885610
    fsubs f1, f1, f2
    stfs f1, 0x14e4(r31)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_8035C47C_00000214
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8035C47C_00000224
lbl_fn_8035C47C_00000214:
    lfs f1, lbl_80885610
    mr r3, r31
    li r4, 0x0
    bl fn_8035DC58
lbl_fn_8035C47C_00000224:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_8035C47C_00000254
    cmpwi r0, 0x8
    beq lbl_fn_8035C47C_00000260
    cmpwi r0, 0x9
    beq lbl_fn_8035C47C_0000026C
    cmpwi r0, 0xa
    beq lbl_fn_8035C47C_000002D0
    cmpwi r0, 0xb
    beq lbl_fn_8035C47C_0000031C
    b lbl_fn_8035C47C_000003B8
lbl_fn_8035C47C_00000254:
    mr r3, r31
    bl fn_8035CF78
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_00000260:
    mr r3, r31
    bl fn_8035D294
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_0000026C:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8035C47C_00000284
    cmpwi r0, 0x7
    beq lbl_fn_8035C47C_000003C0
    b lbl_fn_8035C47C_000002B0
lbl_fn_8035C47C_00000284:
    lwz r0, 0x560(r31)
    cmpwi r0, 0x2
    beq lbl_fn_8035C47C_000003C0
    lwz r3, 0x15a4(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_000002B0:
    lwz r3, 0x15a4(r31)
    li r0, 0x6
    stw r0, 0x58c(r31)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_000002D0:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_8035C47C_000002E8
    cmpwi r0, 0x7
    beq lbl_fn_8035C47C_000003C0
    b lbl_fn_8035C47C_00000308
lbl_fn_8035C47C_000002E8:
    lwz r0, 0x560(r31)
    cmpwi r0, 0x2e
    beq lbl_fn_8035C47C_000003C0
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_00000308:
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_0000031C:
    lwz r3, 0xd1c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8035C47C_000003C0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8035C47C_000003C0
    lwz r12, 0x0(r3)
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8035C47C_000003C0
    addi r29, r31, 0x1544
    li r30, 0x0
    b lbl_fn_8035C47C_0000038C
lbl_fn_8035C47C_00000358:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r29)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8035C47C_00000384
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x0(r29)
    bl fn_80370AE4
    stw r30, 0x14d0(r31)
    b lbl_fn_8035C47C_00000398
lbl_fn_8035C47C_00000384:
    addi r29, r29, 0xc
    addi r30, r30, 0x1
lbl_fn_8035C47C_0000038C:
    lwz r0, 0x1540(r31)
    cmplw r30, r0
    blt lbl_fn_8035C47C_00000358
lbl_fn_8035C47C_00000398:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C47C_000003C0
lbl_fn_8035C47C_000003B8:
    mr r3, r31
    bl fn_8035C8CC
lbl_fn_8035C47C_000003C0:
    mr r3, r31
    bl fn_80139560
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    mr r3, r31
    bl fn_8035DA94
    cmpwi r3, 0x0
    beq lbl_fn_8035C47C_00000434
    addi r29, r31, 0x1544
    li r30, 0x0
    b lbl_fn_8035C47C_00000428
lbl_fn_8035C47C_000003F4:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r29)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8035C47C_00000420
    lwz r3, lbl_8087F430
    li r5, 0x1
    lwz r4, 0x0(r29)
    bl fn_80370AE4
    stw r30, 0x14d0(r31)
    b lbl_fn_8035C47C_00000434
lbl_fn_8035C47C_00000420:
    addi r29, r29, 0xc
    addi r30, r30, 0x1
lbl_fn_8035C47C_00000428:
    lwz r0, 0x1540(r31)
    cmplw r30, r0
    blt lbl_fn_8035C47C_000003F4
lbl_fn_8035C47C_00000434:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8035C8CC(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x170
    bl _savegpr_27
    lwz r0, 0x55c(r3)
    mr r31, r3
    cmpwi r0, 0x6
    beq lbl_fn_8035C8CC_00000480
    cmpwi r0, 0x7
    beq lbl_fn_8035C8CC_000004F0
    b lbl_fn_8035C8CC_0000055C
lbl_fn_8035C8CC_00000480:
    lwz r0, 0x560(r3)
    cmpwi r0, 0xa
    bne lbl_fn_8035C8CC_000004DC
    li r0, 0x7
    li r30, 0x0
    stw r0, 0x58c(r3)
    stw r30, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x638(r31)
    li r4, 0x1
    lwz r5, 0x14ec(r31)
    stw r3, 0x590(r31)
    lwz r3, 0xf80(r31)
    stw r30, 0x598(r31)
    stb r30, 0x59d(r31)
    stb r30, 0x59c(r31)
    stw r0, 0x63c(r31)
    stw r5, 0x638(r31)
    stw r4, 0x594(r31)
    stb r4, 0x59f(r31)
    stw r4, 0x1c(r3)
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000004DC:
    cmpwi r0, 0x27
    bne lbl_fn_8035C8CC_000009C4
    li r0, 0x0
    stw r0, 0x14b8(r3)
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000004F0:
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x14bc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035C8CC_000009C4
    lfs f3, lbl_80885610
    addi r3, r1, 0x120
    lfs f0, lbl_8088560C
    li r4, 0x79
    stfs f3, 0x8c(r1)
    stfs f3, 0x90(r1)
    stfs f0, 0x94(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x8c
    addi r3, r1, 0x120
    mr r5, r4
    bl fn_805F93C0
    mr r3, r31
    addi r4, r1, 0x8c
    bl fn_80155790
    lwz r3, 0x14b8(r31)
    li r0, 0x0
    stw r0, 0x14bc(r31)
    addi r0, r3, 0x1f4
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_0000055C:
    lwz r5, 0xd1c(r3)
    lwz r0, 0x12a4(r3)
    cmpwi r5, 0x0
    stw r5, 0xfc0(r3)
    ori r0, r0, 0x20
    stw r0, 0x12a4(r3)
    beq lbl_fn_8035C8CC_000005B8
    lwz r0, 0x7e0(r5)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8035C8CC_000005B8
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    addi r5, r5, 0xb8
    li r4, 0x142
    li r6, 0x0
    stw r0, 0x14b8(r3)
    bl fn_80161880
    lwz r0, 0x12a4(r31)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r31)
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000005B8:
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035C8CC_000007E4
    lfs f3, lbl_80885610
    li r4, 0x79
    lfs f0, lbl_8088560C
    stfs f3, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    lfs f1, 0x538(r3)
    addi r3, r1, 0xf0
    bl fn_805F8E70
    addi r4, r1, 0x80
    addi r3, r1, 0xf0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x80
    addi r4, r1, 0x74
    addi r5, r1, 0xb0
    bl fn_805F99B0
    lfs f2, 0x530(r31)
    addi r30, r1, 0xa4
    psq_l f1, 0x528(r31), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r30), 0, 0
    lfs f0, lbl_80885620
    lfs f5, 0xa8(r1)
    lfs f3, 0xb8(r1)
    fadds f5, f5, f0
    lfs f4, lbl_80885624
    lfs f0, 0xb4(r1)
    fmuls f6, f3, f4
    lfs f3, 0xb0(r1)
    fmuls f7, f0, f4
    fmuls f3, f3, f4
    lfs f0, 0xa4(r1)
    fadds f4, f2, f6
    stfs f5, 0xa8(r1)
    fadds f5, f5, f7
    fadds f0, f0, f3
    stfs f2, 0xac(r1)
    lwz r28, lbl_8087EE98
    stfs f3, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f6, 0x70(r1)
    stfs f0, 0x98(r1)
    stfs f5, 0x9c(r1)
    stfs f4, 0xa0(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r28
    mr r5, r30
    addi r6, r1, 0x98
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8035C8CC_000006C0
    mr r3, r31
    addi r4, r1, 0xb0
    bl fn_80155790
    b lbl_fn_8035C8CC_000007CC
lbl_fn_8035C8CC_000006C0:
    lfs f4, lbl_80885610
    addi r3, r1, 0xc0
    lfs f3, lbl_80885628
    li r4, 0x79
    lfs f0, lbl_8088560C
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f4, 0x54(r1)
    stfs f0, 0x58(r1)
    lfs f1, 0x538(r31)
    bl fn_805F8E70
    addi r4, r1, 0x50
    addi r3, r1, 0xc0
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x50
    addi r4, r1, 0x44
    addi r5, r1, 0x5c
    bl fn_805F99B0
    addi r3, r1, 0x5c
    lfs f2, 0x64(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r29, r1, 0xb0
    psq_st f1, 0x0(r29), 0, 0
    addi r4, r1, 0x38
    lfs f5, lbl_80885624
    addi r28, r1, 0x98
    lfs f3, 0xb4(r1)
    mr r3, r31
    lfs f0, 0xb0(r1)
    fmuls f6, f2, f5
    fmuls f7, f3, f5
    lfs f4, 0xac(r1)
    fmuls f5, f0, f5
    lfs f3, 0xa8(r1)
    lfs f0, 0xa4(r1)
    fadds f4, f4, f6
    fadds f3, f3, f7
    stfs f2, 0xb8(r1)
    fadds f0, f0, f5
    lwz r27, lbl_8087EE98
    fmr f2, f4
    stfs f0, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x40(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0xa0(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r30
    mr r6, r28
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8035C8CC_000007CC
    mr r3, r31
    mr r4, r29
    bl fn_80155790
lbl_fn_8035C8CC_000007CC:
    lwz r3, 0x14b8(r31)
    li r0, 0x0
    stw r0, 0x14bc(r31)
    addi r0, r3, 0x64
    stw r0, 0x14b8(r31)
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000007E4:
    lwz r4, 0x14b8(r3)
    lwz r0, 0x15a4(r3)
    cmpw r4, r0
    ble lbl_fn_8035C8CC_000009C4
    cmpwi r5, 0x0
    beq lbl_fn_8035C8CC_000009B4
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035C8CC_00000878
    lis r4, lbl_8074B448@ha
    li r8, 0x0
    addi r4, r4, lbl_8074B448@l
    li r0, 0xa
    addi r5, r4, 0xbf
    stw r8, 0x14c0(r3)
    mr r6, r5
    li r4, 0x0
    stw r0, 0x58c(r3)
    li r7, 0x0
    stw r8, 0x14b8(r3)
    li r3, 0x10
    bl fn_80084320
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8035C8CC_0000085C
    lis r5, 0xe
    mr r4, r31
    subi r5, r5, 0x4460
    bl fn_8035BC84
    mr r4, r3
lbl_fn_8035C8CC_0000085C:
    mr r3, r31
    bl fn_80178208
    lwz r3, lbl_8087F430
    li r4, 0x67
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_00000878:
    lwz r4, 0xd1c(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8035C8CC_0000088C
    li r30, 0x0
    b lbl_fn_8035C8CC_00000954
lbl_fn_8035C8CC_0000088C:
    lfs f3, 0x530(r4)
    li r30, 0x0
    lfs f0, 0x530(r3)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x8
    lfs f3, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_8088562C
    fcmpo cr0, f1, f0
    ble lbl_fn_8035C8CC_00000954
    psq_l f1, 0x528(r31), 0, 0
    addi r29, r1, 0x14
    lfs f2, 0x530(r31)
    addi r28, r1, 0x20
    stfs f2, 0x1c(r1)
    mr r3, r31
    lfs f4, lbl_80885630
    psq_st f1, 0x0(r29), 0, 0
    lwz r27, lbl_8087EE98
    lwz r4, 0xd1c(r31)
    lfs f0, 0x18(r1)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    fadds f3, f0, f4
    psq_st f1, 0x0(r28), 0, 0
    lfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    fadds f0, f0, f4
    stfs f3, 0x18(r1)
    stfs f0, 0x24(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r27
    mr r5, r29
    mr r6, r28
    li r4, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8035C8CC_00000954
    li r30, 0x1
lbl_fn_8035C8CC_00000954:
    cmpwi r30, 0x0
    beq lbl_fn_8035C8CC_000009A8
    li r0, 0x8
    li r30, 0x0
    stw r0, 0x58c(r31)
    stw r30, 0x14b8(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r0, 0x12a4(r31)
    li r5, 0x1
    stw r3, 0x590(r31)
    mr r3, r31
    rlwinm r0, r0, 0, 27, 25
    lwz r4, 0x14f0(r31)
    stw r5, 0x594(r31)
    li r5, 0x0
    li r6, 0x0
    stw r30, 0x598(r31)
    stw r0, 0x12a4(r31)
    bl fn_8016D74C
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000009A8:
    mr r3, r31
    bl fn_8035CE58
    b lbl_fn_8035C8CC_000009C4
lbl_fn_8035C8CC_000009B4:
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14b8(r3)
lbl_fn_8035C8CC_000009C4:
    addi r11, r1, 0x170
    bl _restgpr_27
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_8035CE58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x7
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    stw r0, 0x58c(r3)
    stw r31, 0x14b8(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r30)
    li r0, 0x1
    lwz r4, 0xd1c(r30)
    addi r3, r1, 0x8
    stw r0, 0x594(r30)
    lfs f0, 0x530(r30)
    stw r31, 0x598(r30)
    lfs f2, 0x52c(r30)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f4, f0
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r30)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lfs f0, lbl_80885634
    fcmpo cr0, f1, f0
    bge lbl_fn_8035CE58_00000AD0
    lwz r0, 0x12a4(r30)
    mr r4, r30
    lwz r5, 0xd1c(r30)
    li r3, 0x0
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r30)
    bl fn_80041A28
    cmpwi r3, 0x2
    bne lbl_fn_8035CE58_00000AA4
    lwz r5, 0xd1c(r30)
    mr r3, r30
    lwz r4, 0x14e8(r30)
    lfs f1, lbl_80885638
    addi r5, r5, 0x528
    bl fn_8015783C
    b lbl_fn_8035CE58_00000AE4
lbl_fn_8035CE58_00000AA4:
    lwz r5, 0xd1c(r30)
    mr r3, r30
    lwz r4, 0x14e8(r30)
    li r6, 0x0
    lfs f1, lbl_80885638
    addi r5, r5, 0x528
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_8035CE58_00000AE4
lbl_fn_8035CE58_00000AD0:
    lwz r4, 0xd1c(r30)
    mr r3, r30
    lfs f1, lbl_8088563C
    li r5, 0x0
    bl fn_80170A20
lbl_fn_8035CE58_00000AE4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035CF78(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stw r31, 0x3c(r1)
    mr r31, r3
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    beq lbl_fn_8035CF78_00000B30
    cmpwi r0, 0x7
    beq lbl_fn_8035CF78_00000CEC
    b lbl_fn_8035CF78_00000DEC
lbl_fn_8035CF78_00000B30:
    bl fn_80158BB4
    cmpwi r3, 0x0
    bne lbl_fn_8035CF78_00000CB4
    lwz r0, 0x560(r31)
    cmpwi r0, 0x4
    beq lbl_fn_8035CF78_00000B50
    cmpwi r0, 0x9
    bne lbl_fn_8035CF78_00000B88
lbl_fn_8035CF78_00000B50:
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    lfs f0, lbl_80885640
    fsubs f0, f1, f0
    fcmpo cr0, f31, f0
    cror eq, gt, eq
    bne lbl_fn_8035CF78_00000B88
    lfs f1, lbl_80885644
    lfs f0, 0x15ac(r31)
    fadds f0, f1, f0
    fdivs f0, f1, f0
    stfs f0, 0x2e8(r31)
lbl_fn_8035CF78_00000B88:
    lwz r0, lbl_8087F048
    cmpwi r0, 0x0
    beq lbl_fn_8035CF78_00000DFC
    mr r3, r31
    bl fn_80158CA4
    cmpwi r3, 0x0
    beq lbl_fn_8035CF78_00000DFC
    lwz r0, 0xf80(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8035CF78_00000BD0
    lis r5, lbl_80766768@ha
    lwzu r4, lbl_80766768@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
    b lbl_fn_8035CF78_00000BEC
lbl_fn_8035CF78_00000BD0:
    lis r5, lbl_80789B00@ha
    lwzu r4, lbl_80789B00@l(r5)
    stw r4, 0x20(r1)
    lwz r3, 0x4(r5)
    lwz r0, 0x8(r5)
    stw r3, 0x24(r1)
    stw r0, 0x28(r1)
lbl_fn_8035CF78_00000BEC:
    lwz r5, 0x20(r1)
    addi r3, r1, 0x8
    lwz r4, 0x24(r1)
    lwz r0, 0x28(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_8035CF78_00000C60
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    lwz r0, 0x598(r31)
    cmpw r3, r0
    ble lbl_fn_8035CF78_00000C60
    lwz r3, 0xf80(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    li r0, 0x1
    stw r3, 0x598(r31)
    stw r0, 0x594(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
lbl_fn_8035CF78_00000C60:
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8035CF78_00000DFC
    mr r3, r31
    bl fn_80144710
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x638(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_80885610
    li r9, 0x1e
    lwz r10, 0x594(r31)
    bl fn_800F8C6C
    lwz r0, 0x594(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8035CF78_00000DFC
    subf r0, r3, r0
    stw r0, 0x594(r31)
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000CB4:
    lwz r3, 0x560(r31)
    cmpwi r3, 0x4
    beq lbl_fn_8035CF78_00000CCC
    subi r0, r3, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_8035CF78_00000CD8
lbl_fn_8035CF78_00000CCC:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_8035CF78_00000CD8:
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000CEC:
    lwz r0, 0x105c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035CF78_00000D20
    lwz r5, 0xd1c(r3)
    li r6, 0x0
    lwz r4, 0x14e8(r3)
    li r7, 0x0
    lfs f1, lbl_80885638
    addi r5, r5, 0x528
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000D20:
    lwz r4, 0xd1c(r3)
    lfs f0, 0x530(r3)
    lfs f1, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x14
    lfs f1, 0x528(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f4, 0x1c(r1)
    bl fn_805F9940
    lfs f0, lbl_80885634
    fcmpo cr0, f1, f0
    bge lbl_fn_8035CF78_00000DC8
    lwz r5, 0xd1c(r31)
    mr r4, r31
    li r3, 0x0
    bl fn_80041A28
    cmpwi r3, 0x2
    bne lbl_fn_8035CF78_00000D9C
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    lfs f1, lbl_80885638
    addi r5, r5, 0x528
    bl fn_8015783C
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000D9C:
    lwz r5, 0xd1c(r31)
    mr r3, r31
    lwz r4, 0x14e8(r31)
    li r6, 0x0
    lfs f1, lbl_80885638
    addi r5, r5, 0x528
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_801562A0
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000DC8:
    lwz r3, 0x14b8(r31)
    lwz r0, 0x15b0(r31)
    cmpw r3, r0
    ble lbl_fn_8035CF78_00000DFC
    li r3, 0x6
    li r0, 0x0
    stw r3, 0x58c(r31)
    stw r0, 0x14b8(r31)
    b lbl_fn_8035CF78_00000DFC
lbl_fn_8035CF78_00000DEC:
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14b8(r3)
lbl_fn_8035CF78_00000DFC:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8035D294(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    lwz r0, 0x55c(r3)
    lwz r6, lbl_8087F430
    cmpwi r0, 0x6
    beq lbl_fn_8035D294_00000E58
    cmpwi r0, 0x7
    beq lbl_fn_8035D294_0000103C
    b lbl_fn_8035D294_0000102C
lbl_fn_8035D294_00000E58:
    lwz r0, 0x560(r3)
    cmpwi r0, 0xd
    beq lbl_fn_8035D294_0000103C
    cmpwi r0, 0xe
    bne lbl_fn_8035D294_00000FF8
    addi r4, r1, 0x14
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lwz r0, 0x14d8(r3)
    lfs f0, 0x18(r1)
    lfs f28, lbl_80885648
    cmpwi r0, 0x0
    lfs f2, 0x530(r3)
    fadds f0, f0, f28
    stfs f2, 0x1c(r1)
    stfs f0, 0x18(r1)
    bne lbl_fn_8035D294_00000FDC
    lfs f29, 0x594(r6)
    addi r5, r6, 0x4d8
    lfs f30, 0x59c(r6)
    lfs f31, 0x5a0(r6)
    lfs f13, 0x5a4(r6)
    lfs f12, 0x5a8(r6)
    lfs f11, 0x5ac(r6)
    lfs f10, 0x5b0(r6)
    lfs f9, 0x5b4(r6)
    lfs f8, 0x5b8(r6)
    lfs f7, 0x5bc(r6)
    lwz r4, 0x5c0(r6)
    lfs f6, lbl_8088564C
    stw r3, 0x8a0(r6)
    lfs f5, lbl_80885650
    lwz r0, 0x4d8(r6)
    lfs f4, lbl_80885654
    cmpwi r0, 0x4
    stfs f29, 0x2c(r1)
    stfs f30, 0x34(r1)
    stfs f31, 0x38(r1)
    stfs f13, 0x3c(r1)
    stfs f12, 0x40(r1)
    stfs f11, 0x44(r1)
    stfs f10, 0x48(r1)
    stfs f9, 0x4c(r1)
    stfs f8, 0x50(r1)
    stfs f7, 0x54(r1)
    stw r4, 0x58(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x24(r1)
    stfs f28, 0x20(r1)
    stfs f4, 0x30(r1)
    beq lbl_fn_8035D294_00000F78
    li r0, 0x4
    stw r0, 0x0(r5)
    lfs f3, lbl_80885658
    stfs f28, 0xc(r5)
    lfs f0, lbl_8088560C
    stfs f5, 0x10(r5)
    stfs f6, 0x14(r5)
    stfs f29, 0x18(r5)
    stfs f4, 0x1c(r5)
    stfs f30, 0x20(r5)
    stfs f31, 0x24(r5)
    stfs f13, 0x28(r5)
    stfs f12, 0x2c(r5)
    stfs f11, 0x30(r5)
    stfs f10, 0x34(r5)
    stfs f9, 0x38(r5)
    stfs f8, 0x3c(r5)
    stfs f7, 0x40(r5)
    stw r4, 0x44(r5)
    stfs f3, 0x8(r5)
    stfs f0, 0x4(r5)
lbl_fn_8035D294_00000F78:
    addi r5, r1, 0x8
    psq_l f1, 0x528(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    li r0, 0x1
    lfs f2, 0x530(r3)
    lfs f3, 0xc(r1)
    lfs f0, lbl_80885634
    lbzu r4, 0x97c(r6)
    fadds f0, f3, f0
    stb r4, 0x1(r6)
    lfs f3, lbl_80885610
    stfs f0, 0xc(r1)
    stb r0, 0x0(r6)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
    stfs f2, 0x10(r1)
    stfs f3, 0x24(r6)
    b lbl_fn_8035D294_00000FC8
    b lbl_fn_8035D294_00000FCC
lbl_fn_8035D294_00000FC8:
    li r0, 0x0
lbl_fn_8035D294_00000FCC:
    stw r0, 0x4(r6)
    li r0, 0x1
    stw r0, 0x14d8(r3)
    b lbl_fn_8035D294_0000103C
lbl_fn_8035D294_00000FDC:
    stw r3, 0x8a0(r6)
    addi r3, r6, 0x988
    psq_l f1, 0x0(r4), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x990(r6)
    b lbl_fn_8035D294_0000103C
lbl_fn_8035D294_00000FF8:
    lwz r0, 0x14d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035D294_00001018
    li r0, 0x0
    stw r0, 0x8a0(r6)
    stw r0, 0x4d8(r6)
    stb r0, 0x97c(r6)
    stw r0, 0x14d8(r3)
lbl_fn_8035D294_00001018:
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14b8(r3)
    b lbl_fn_8035D294_0000103C
lbl_fn_8035D294_0000102C:
    li r4, 0x6
    li r0, 0x0
    stw r4, 0x58c(r3)
    stw r0, 0x14b8(r3)
lbl_fn_8035D294_0000103C:
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    addi r1, r1, 0xa0
    blr
}

asm void fn_8035D4E0(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    mr r29, r3
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035D4E0_00001094
    li r3, 0x0
    b lbl_fn_8035D4E0_00001220
lbl_fn_8035D4E0_00001094:
    lfs f2, 0x30(r4)
    addi r5, r1, 0x38
    psq_l f1, 0x28(r4), 0, 0
    addi r31, r1, 0x2c
    psq_st f1, 0x0(r5), 0, 0
    frsp f4, f2
    lfs f7, lbl_80885610
    li r0, 0x0
    lfs f3, lbl_8088565C
    stfs f2, 0x40(r1)
    fmuls f9, f7, f3
    lfs f0, 0x38(r1)
    psq_l f1, 0x528(r3), 0, 0
    fmuls f8, f4, f3
    lfs f2, 0x530(r3)
    fmuls f10, f0, f3
    psq_st f1, 0x0(r31), 0, 0
    lfs f0, lbl_80885660
    stfs f2, 0x34(r1)
    lfs f3, 0x30(r1)
    lfs f5, 0x52c(r3)
    lfs f4, 0x528(r3)
    fadds f3, f3, f0
    lfs f6, 0x530(r3)
    fadds f11, f5, f9
    fadds f4, f4, f10
    stfs f7, 0x3c(r1)
    fadds f5, f6, f8
    fadds f0, f11, f0
    stfs f10, 0x8(r1)
    lwz r30, lbl_8087EE98
    stfs f9, 0xc(r1)
    stfs f8, 0x10(r1)
    stfs f4, 0x20(r1)
    stfs f5, 0x28(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x24(r1)
    stw r0, 0x7c(r1)
    stw r0, 0x80(r1)
    stw r0, 0x84(r1)
    stw r0, 0x88(r1)
    bl fn_80179D44
    oris r7, r3, 0x8000
    mr r3, r30
    mr r5, r31
    addi r4, r1, 0x48
    addi r6, r1, 0x20
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    bne lbl_fn_8035D4E0_00001194
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r29, 0x14c4
    psq_st f1, 0x0(r4), 0, 0
    li r3, 0x1
    lfs f0, lbl_80885660
    lfs f3, 0x14c8(r29)
    stfs f2, 0x14cc(r29)
    fsubs f0, f3, f0
    stfs f0, 0x14c8(r29)
    b lbl_fn_8035D4E0_00001220
lbl_fn_8035D4E0_00001194:
    lfs f3, 0x54(r1)
    addi r3, r1, 0x14
    lfs f0, 0x34(r1)
    lfs f5, 0x50(r1)
    fsubs f6, f3, f0
    lfs f4, 0x30(r1)
    lfs f3, 0x4c(r1)
    lfs f0, 0x2c(r1)
    fsubs f4, f5, f4
    stfs f6, 0x1c(r1)
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    bl fn_805F9940
    lfs f0, lbl_80885624
    fcmpo cr0, f1, f0
    ble lbl_fn_8035D4E0_00001208
    addi r3, r1, 0x4c
    lfs f2, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r29, 0x14c4
    psq_st f1, 0x0(r4), 0, 0
    li r3, 0x1
    lfs f0, lbl_80885660
    lfs f3, 0x14c8(r29)
    stfs f2, 0x14cc(r29)
    fsubs f0, f3, f0
    stfs f0, 0x14c8(r29)
    b lbl_fn_8035D4E0_00001220
lbl_fn_8035D4E0_00001208:
    lfs f2, 0x530(r29)
    addi r4, r29, 0x14c4
    psq_l f1, 0x528(r29), 0, 0
    li r3, 0x1
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x14cc(r29)
lbl_fn_8035D4E0_00001220:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8035D6B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    li r31, 0x0
    beq lbl_fn_8035D6B8_0000126C
    cmpwi r4, 0x1
    beq lbl_fn_8035D6B8_000012DC
    b lbl_fn_8035D6B8_00001338
lbl_fn_8035D6B8_0000126C:
    lwz r0, 0x14e0(r3)
    lfs f31, lbl_80885664
    cmpwi r0, 0x0
    beq lbl_fn_8035D6B8_00001280
    lfs f31, lbl_8088560C
lbl_fn_8035D6B8_00001280:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8074B408@ha
    lfd f2, lbl_8074B408@l(r4)
    lfs f0, lbl_80885668
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_8035D6B8_00001338
    li r31, 0x2
    b lbl_fn_8035D6B8_00001338
lbl_fn_8035D6B8_000012DC:
    lfs f31, lbl_80885610
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x8(r1)
    mulhw r5, r5, r3
    lis r4, lbl_8074B408@ha
    lfd f2, lbl_8074B408@l(r4)
    lfs f0, lbl_80885668
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fcmpo cr0, f0, f31
    bge lbl_fn_8035D6B8_00001338
    li r31, 0x3
lbl_fn_8035D6B8_00001338:
    psq_l f31, 0x28(r1), 0, 0
    mr r3, r31
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8035D7D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8035D7D4_000013B0
    lwz r0, 0xc(r4)
    ori r0, r0, 0x8008
    stw r0, 0xc(r4)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8035D7D4_000014F4
    lwz r0, 0x560(r3)
    cmpwi r0, 0xe
    bne lbl_fn_8035D7D4_000014F4
    b lbl_fn_8035D7D4_00001574
lbl_fn_8035D7D4_000013B0:
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035D7D4_000014F4
    lwz r0, 0x151c(r3)
    mr r6, r29
    lwz r5, 0x8(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8035D7D4_000013F0
lbl_fn_8035D7D4_000013D4:
    lwz r0, 0x1520(r6)
    cmplw r0, r5
    bne lbl_fn_8035D7D4_000013E8
    li r0, 0x1
    b lbl_fn_8035D7D4_000013F4
lbl_fn_8035D7D4_000013E8:
    addi r6, r6, 0x4
    bdnz lbl_fn_8035D7D4_000013D4
lbl_fn_8035D7D4_000013F0:
    li r0, 0x0
lbl_fn_8035D7D4_000013F4:
    cmpwi r0, 0x0
    beq lbl_fn_8035D7D4_00001498
    lwz r3, lbl_8087F430
    li r4, 0x6d
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r29
    mr r4, r30
    bl fn_8035D4E0
    cmpwi r3, 0x0
    beq lbl_fn_8035D7D4_00001488
    lwz r0, 0x12a4(r29)
    li r3, 0x9
    li r4, 0x0
    stw r3, 0x58c(r29)
    rlwinm r0, r0, 0, 27, 25
    mr r3, r29
    stw r4, 0x14b8(r29)
    addi r4, r29, 0x14c4
    li r5, 0x0
    stw r0, 0x12a4(r29)
    bl fn_80155A88
    lwz r0, 0x6d0(r29)
    lwz r4, 0x38(r30)
    slwi r0, r0, 3
    lwz r3, 0x34(r30)
    add r0, r29, r0
    addic. r5, r0, 0x6d4
    beq lbl_fn_8035D7D4_00001470
    stw r3, 0x0(r5)
    stw r4, 0x4(r5)
lbl_fn_8035D7D4_00001470:
    lwz r3, 0x6d0(r29)
    li r0, -0x1
    addi r3, r3, 0x1
    stw r3, 0x6d0(r29)
    stw r0, 0x88(r30)
    b lbl_fn_8035D7D4_00001574
lbl_fn_8035D7D4_00001488:
    lwz r0, 0xc(r30)
    ori r0, r0, 0x8008
    stw r0, 0xc(r30)
    b lbl_fn_8035D7D4_000014F4
lbl_fn_8035D7D4_00001498:
    lwz r0, 0x151c(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    addic. r5, r0, 0x1520
    beq lbl_fn_8035D7D4_000014B4
    lwz r0, 0x8(r4)
    stw r0, 0x0(r5)
lbl_fn_8035D7D4_000014B4:
    lwz r5, 0x151c(r3)
    li r4, 0x0
    lfs f1, lbl_80885610
    addi r0, r5, 0x1
    stw r0, 0x151c(r3)
    mr r3, r29
    bl fn_8035DC58
    lwz r3, lbl_8087F430
    li r4, 0x76
    li r5, 0x1
    bl fn_80370AE4
    lwz r3, 0x50(r30)
    li r0, 0x1
    ori r3, r3, 0x8
    stw r3, 0x50(r30)
    stw r0, 0x14dc(r29)
lbl_fn_8035D7D4_000014F4:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_801513D0
    lwz r3, 0x14d4(r29)
    lwz r0, 0x1540(r29)
    addi r5, r3, 0x1
    lwz r4, 0x14b8(r29)
    lwz r3, 0x15a8(r29)
    cmpw r5, r0
    add r0, r4, r3
    stw r0, 0x14b8(r29)
    bge lbl_fn_8035D7D4_00001574
    mulli r0, r5, 0xc
    lwz r4, 0x940(r29)
    lis r3, 0x4330
    stw r3, 0x8(r1)
    lfs f0, lbl_8088566C
    xoris r3, r4, 0x8000
    stw r3, 0xc(r1)
    add r3, r29, r0
    lis r4, lbl_8074B408@ha
    lfs f1, 0x154c(r3)
    lfd f3, lbl_8074B408@l(r4)
    lfd f2, 0x8(r1)
    fsubs f1, f1, f0
    lfs f0, 0x7d8(r29)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_8035D7D4_00001574
    stfs f1, 0x7d8(r29)
lbl_fn_8035D7D4_00001574:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8035DA0C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, 0x14d4(r3)
    lwz r0, 0x1540(r3)
    addi r4, r4, 0x1
    cmpw r4, r0
    bge lbl_fn_8035DA0C_000015FC
    mulli r0, r4, 0xc
    lwz r5, 0x940(r3)
    lis r4, 0x4330
    stw r4, 0x8(r1)
    lfs f0, lbl_8088566C
    xoris r4, r5, 0x8000
    stw r4, 0xc(r1)
    add r4, r3, r0
    lis r5, lbl_8074B408@ha
    lfs f1, 0x154c(r4)
    lfd f3, lbl_8074B408@l(r5)
    lfd f2, 0x8(r1)
    fsubs f1, f1, f0
    lfs f0, 0x7d8(r3)
    fsubs f2, f2, f3
    fmuls f1, f2, f1
    fcmpo cr0, f0, f1
    bge lbl_fn_8035DA0C_000015FC
    stfs f1, 0x7d8(r3)
lbl_fn_8035DA0C_000015FC:
    li r4, 0x20
    addi r3, r3, 0x7d4
    bl fn_8013322C
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8035DA94(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r3
    lwz r0, 0x14e0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8035DA94_00001654
    lwz r0, 0x14dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8035DA94_0000165C
lbl_fn_8035DA94_00001654:
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_0000165C:
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x0
    blt lbl_fn_8035DA94_00001670
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_00001670:
    lwz r3, 0xd1c(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8035DA94_00001684
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_00001684:
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8035DA94_000016A8
    lwz r12, 0x0(r3)
    lwz r12, 0x78(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8035DA94_000016B0
lbl_fn_8035DA94_000016A8:
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_000016B0:
    lwz r4, 0xd1c(r29)
    lwz r31, 0x638(r4)
    cmpwi r31, 0x0
    bne lbl_fn_8035DA94_000016C8
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_000016C8:
    lfs f1, 0x530(r4)
    addi r3, r1, 0x8
    lfs f0, 0x530(r29)
    lfs f3, 0x52c(r4)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r29)
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r29)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    lwz r3, 0xd1c(r29)
    lwz r0, 0x560(r3)
    cmpwi r0, 0xe
    bne lbl_fn_8035DA94_00001718
    lfs f2, 0x58(r31)
    b lbl_fn_8035DA94_00001724
lbl_fn_8035DA94_00001718:
    lfs f2, 0x40(r31)
    lfs f0, 0x8e4(r3)
    fadds f2, f2, f0
lbl_fn_8035DA94_00001724:
    lfs f0, lbl_80885654
    fadds f0, f0, f2
    fcmpo cr0, f1, f0
    ble lbl_fn_8035DA94_0000173C
    li r3, 0x0
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_0000173C:
    lwz r4, 0x940(r29)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r3, lbl_8074B408@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_8074B408@l(r3)
    stw r0, 0x1c(r1)
    addi r31, r29, 0x1544
    lfs f0, 0x7d8(r29)
    li r30, 0x0
    lfd f1, 0x18(r1)
    fsubs f1, f1, f2
    fdivs f31, f0, f1
    b lbl_fn_8035DA94_000017A8
lbl_fn_8035DA94_00001774:
    lwz r3, lbl_8087F430
    lwz r4, 0x0(r31)
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_8035DA94_000017A0
    lfs f0, 0x8(r31)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8035DA94_000017A0
    li r3, 0x1
    b lbl_fn_8035DA94_000017B8
lbl_fn_8035DA94_000017A0:
    addi r31, r31, 0xc
    addi r30, r30, 0x1
lbl_fn_8035DA94_000017A8:
    lwz r0, 0x1540(r29)
    cmplw r30, r0
    blt lbl_fn_8035DA94_00001774
    li r3, 0x0
lbl_fn_8035DA94_000017B8:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8035DC58(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x14e0(r3)
    stfs f1, 0x14e4(r3)
    stw r4, 0x14e0(r3)
    beq lbl_fn_8035DC58_000018C4
    cmpwi r0, 0x0
    bne lbl_fn_8035DC58_00001980
    li r4, 0x5
    bl fn_80232B7C
    lwz r4, lbl_8087F3C0
    li r0, 0x2
    lfs f1, lbl_8088560C
    li r3, -0x1
    stw r0, 0xb8(r4)
    li r0, 0x1
    lfs f0, lbl_80885610
    addi r4, r31, 0x1504
    stfs f0, 0x50(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x5c
    addi r8, r1, 0x50
    stfs f0, 0x54(r1)
    addi r9, r1, 0x40
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x58(r1)
    stfs f0, 0x5c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x4c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    lis r4, lbl_8074B448@ha
    addi r4, r4, lbl_8074B448@l
    li r0, 0x0
    stw r0, 0xb8(r3)
    addi r3, r1, 0x14
    lfs f1, lbl_8088560C
    addi r4, r4, 0xc0
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8035DC58_00001980
lbl_fn_8035DC58_000018C4:
    cmpwi r0, 0x0
    beq lbl_fn_8035DC58_00001980
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x5
    li r6, 0x1
    bl fn_80239DAC
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80885610
    li r3, -0x1
    lfs f1, lbl_8088560C
    li r0, 0x1
    stfs f0, 0x28(r1)
    addi r4, r31, 0x1510
    addi r5, r31, 0xb0
    addi r7, r1, 0x34
    stfs f0, 0x2c(r1)
    addi r8, r1, 0x28
    addi r9, r1, 0x18
    li r6, 0x0
    stfs f0, 0x30(r1)
    li r10, -0x1
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_8074B448@ha
    lfs f1, lbl_8088560C
    addi r4, r4, lbl_8074B448@l
    addi r3, r1, 0x10
    addi r4, r4, 0xcd
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8035DC58_00001980:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
