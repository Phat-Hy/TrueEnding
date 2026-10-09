#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008BBD8(void);
extern void fn_80092814(void);
extern void fn_80097C08(void);
extern void fn_80097CCC(void);
extern void fn_80097D7C(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB5C8(void);
extern void fn_800F8548(void);
extern void fn_8013A258(void);
extern void fn_8013CB68(void);
extern void fn_80145334(void);
extern void fn_80148990(void);
extern void fn_80149A30(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8016E970(void);
extern void fn_80194550(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802DA718(void);
extern void fn_802DAA38(void);
extern void fn_802DB2D0(void);
extern void fn_802DB534(void);
extern void fn_802DB7C8(void);
extern void fn_802DBA3C(void);
extern void fn_802DBC68(void);
extern void fn_802DBE70(void);
extern void fn_802DC014(void);
extern void fn_802DC1C0(void);
extern void fn_802DC3D0(void);
extern void fn_802DC618(void);
extern void fn_802DDA90(void);
extern void fn_802E2360(void);
extern void fn_80370AE4(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 jumptable_80786DC8[];
extern u8 lbl_80747654[];
extern u8 lbl_80786E08[];
extern u8 lbl_80786E18[];
extern u8 lbl_80786F6C[];
extern u8 lbl_807C8408[];

/* Small data declarations */
extern u32 lbl_8087D9E0;
extern u32 lbl_8087D9E4;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F3E0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F8A0;
extern u32 lbl_808845EC;
extern u32 lbl_808845F0;
extern u32 lbl_808845F8;
extern u32 lbl_80884600;
extern u32 lbl_80884604;
extern u32 lbl_80884608;
extern u32 lbl_8088460C;
extern u32 lbl_80884610;
extern u32 lbl_80884614;
extern u32 lbl_80884618;
extern u32 lbl_8088461C;
extern u32 lbl_80884620;
extern u32 lbl_80884624;
extern u32 lbl_80884628;
extern u32 lbl_8088462C;
extern u32 lbl_80884630;

/* Function declarations */
void fn_802D8B6C(void);
void fn_802D8B7C(void);
void fn_802D9234(void);
void fn_802D9248(void);
void fn_802D92CC(void);
void fn_802D92E4(void);
void fn_802D977C(void);
void fn_802D9834(void);
void fn_802D9938(void);
void fn_802D99D8(void);
void fn_802D9C10(void);
void fn_802D9C40(void);
void fn_802D9D5C(void);
void fn_802DA01C(void);
void fn_802DA0C8(void);
void fn_802DA174(void);

asm void fn_802D8B6C(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    slwi r0, r4, 2
    add r3, r3, r0
    blr
}

asm void fn_802D8B7C(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x8
    beq lbl_fn_802D8B7C_000000A0
    lwz r0, 0xd1c(r3)
    stw r0, 0xd20(r3)
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_802D8B7C_00000088
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x6
    bne lbl_fn_802D8B7C_00000078
    lwz r0, 0x560(r4)
    cmpwi r0, 0x11
    beq lbl_fn_802D8B7C_00000088
lbl_fn_802D8B7C_00000078:
    li r0, 0x0
    stw r0, 0x1454(r3)
    stw r4, 0x1630(r3)
    b lbl_fn_802D8B7C_00000098
lbl_fn_802D8B7C_00000088:
    lwz r0, 0xd1c(r3)
    li r4, 0x1
    stw r4, 0x1454(r3)
    stw r0, 0x1630(r3)
lbl_fn_802D8B7C_00000098:
    lwz r0, 0x1630(r3)
    stw r0, 0xd1c(r3)
lbl_fn_802D8B7C_000000A0:
    lwz r4, 0x1658(r3)
    cmpwi r4, 0x0
    ble lbl_fn_802D8B7C_00000180
    lwz r6, 0x1654(r3)
    subi r0, r4, 0x1
    stw r0, 0x1658(r3)
    cmpwi r6, 0x0
    beq lbl_fn_802D8B7C_00000180
    cmpwi r0, 0x0
    lwz r4, lbl_8087F430
    ble lbl_fn_802D8B7C_00000164
    addi r5, r1, 0x28
    psq_l f1, 0x6c(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0x165c(r3)
    lfs f3, 0x2c(r1)
    lfs f0, lbl_808845F8
    cmpwi r0, 0x0
    lfs f2, 0x74(r6)
    fadds f0, f3, f0
    stfs f2, 0x30(r1)
    stfs f0, 0x2c(r1)
    bne lbl_fn_802D8B7C_00000148
    stw r3, 0x8a0(r4)
    addi r6, r4, 0x97c
    li r0, 0x1
    psq_l f1, 0x0(r5), 0, 0
    lbz r4, 0x97c(r4)
    frsp f2, f2
    stb r4, 0x1(r6)
    lfs f0, lbl_808845F0
    stb r0, 0x0(r6)
    psq_st f1, 0xc(r6), 0, 0
    stfs f2, 0x14(r6)
    stfs f0, 0x24(r6)
    b lbl_fn_802D8B7C_00000134
    b lbl_fn_802D8B7C_00000138
lbl_fn_802D8B7C_00000134:
    li r0, 0x0
lbl_fn_802D8B7C_00000138:
    stw r0, 0x4(r6)
    li r0, 0x1
    stw r0, 0x165c(r3)
    b lbl_fn_802D8B7C_00000180
lbl_fn_802D8B7C_00000148:
    stw r3, 0x8a0(r4)
    addi r4, r4, 0x988
    psq_l f1, 0x0(r5), 0, 0
    frsp f2, f2
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    b lbl_fn_802D8B7C_00000180
lbl_fn_802D8B7C_00000164:
    lwz r0, 0x165c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D8B7C_00000180
    li r0, 0x0
    stw r0, 0x8a0(r4)
    stb r0, 0x97c(r4)
    stw r0, 0x165c(r3)
lbl_fn_802D8B7C_00000180:
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D8B7C_00000198
    lwz r0, 0xd1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802D8B7C_000001C8
lbl_fn_802D8B7C_00000198:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x7
    bne lbl_fn_802D8B7C_000004F4
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x3
    bne lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DA174
    b lbl_fn_802D8B7C_000004F4
lbl_fn_802D8B7C_000001C8:
    lwz r0, 0x15d8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802D8B7C_00000244
    subic. r0, r0, 0x1
    stw r0, 0x15d8(r3)
    bne lbl_fn_802D8B7C_00000244
    lwz r3, lbl_8087F4A0
    li r30, 0x0
    lfs f31, lbl_808845F0
    lwz r29, 0x48(r3)
    b lbl_fn_802D8B7C_0000023C
lbl_fn_802D8B7C_000001F4:
    lwz r0, 0x48(r29)
    cmpwi r0, 0x444
    bne lbl_fn_802D8B7C_00000238
    stw r30, 0x38(r1)
    mr r3, r29
    addi r4, r1, 0x38
    stw r30, 0x3c(r1)
    stw r30, 0x40(r1)
    stw r30, 0x44(r1)
    stw r30, 0x48(r1)
    stfs f31, 0x4c(r1)
    stfs f31, 0x50(r1)
    stfs f31, 0x54(r1)
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_802D8B7C_00000238:
    lwz r29, 0x5c(r29)
lbl_fn_802D8B7C_0000023C:
    cmpwi r29, 0x0
    bne lbl_fn_802D8B7C_000001F4
lbl_fn_802D8B7C_00000244:
    lwz r3, 0x169c(r31)
    cmpwi r3, 0x0
    ble lbl_fn_802D8B7C_00000258
    subi r0, r3, 0x1
    stw r0, 0x169c(r31)
lbl_fn_802D8B7C_00000258:
    lwz r0, 0x58c(r31)
    lwz r3, 0x14c4(r31)
    cmplwi r0, 0xf
    addi r4, r3, 0x1
    stw r4, 0x14c4(r31)
    bgt lbl_fn_802D8B7C_00000494
    lis r3, jumptable_80786DC8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80786DC8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lfs f31, 0x2e4(r31)
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097D7C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802D8B7C_000004F4
    li r30, 0x0
    stw r30, 0x14c8(r31)
    stw r30, 0x14c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802D8B7C_000004F4
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808845F0
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802D8B7C_000004F4
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x9c(r12)
    mtctr r12
    bctrl
    li r30, 0x0
    li r0, 0x1
    stw r0, 0x1560(r31)
    stw r30, 0x14c8(r31)
    stw r30, 0x14c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    mr r3, r31
    li r4, 0x3
    stw r30, 0x58c(r31)
    bl fn_8016E970
    addi r3, r31, 0x1588
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x64
    li r6, 0x1
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DA718
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DAA38
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DB2D0
    b lbl_fn_802D8B7C_000004F4
    lwz r0, 0x2dc(r31)
    cmpwi r0, 0x145
    bne lbl_fn_802D8B7C_0000041C
    lfs f0, lbl_80884600
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x146
    lfs f2, lbl_80884604
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    lwz r3, lbl_8087F430
    li r4, 0x5b
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_802D8B7C_000004F4
lbl_fn_802D8B7C_0000041C:
    cmpwi r4, 0x14
    bge lbl_fn_802D8B7C_00000438
    xoris r3, r4, 0x8000
    lis r0, 0x4330
    stw r3, 0x5c(r1)
    stw r0, 0x58(r1)
    b lbl_fn_802D8B7C_000004F4
lbl_fn_802D8B7C_00000438:
    cmpwi r4, 0x2d
    blt lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DC3D0
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DB534
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DB7C8
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DBA3C
    b lbl_fn_802D8B7C_000004F4
    mr r3, r31
    bl fn_802DBC68
    b lbl_fn_802D8B7C_000004F4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802D8B7C_000004F4
lbl_fn_802D8B7C_00000494:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    psq_l f1, 0x534(r31), 0, 0
    addi r4, r1, 0x8
    lfs f2, 0x53c(r31)
    stfs f2, 0x10(r1)
    lfs f3, lbl_808845F0
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, lbl_80884600
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_802D8B7C_000004D4
    mr r3, r31
    bl fn_8013A258
    b lbl_fn_802D8B7C_000004EC
lbl_fn_802D8B7C_000004D4:
    lfs f0, 0x568(r31)
    fmr f1, f3
    mr r3, r31
    li r5, 0x0
    fmuls f2, f0, f4
    bl fn_8013CB68
lbl_fn_802D8B7C_000004EC:
    mr r3, r31
    bl fn_802DA174
lbl_fn_802D8B7C_000004F4:
    lwz r4, 0x1634(r31)
    lwz r3, 0x14d4(r31)
    cmpwi r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x14d4(r31)
    beq lbl_fn_802D8B7C_0000052C
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x530(r31)
    lfs f3, lbl_8088460C
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, 0x14(r4)
    fadds f0, f3, f0
    stfs f0, 0x538(r31)
lbl_fn_802D8B7C_0000052C:
    lfs f3, 0x52c(r31)
    lfs f0, 0x15cc(r31)
    lwz r0, 0x14b8(r31)
    fadds f3, f3, f0
    lfs f0, 0x14cc(r31)
    lfs f5, 0x528(r31)
    cmpwi r0, 0x3
    lfs f4, 0x15c8(r31)
    fadds f3, f3, f0
    fadds f5, f5, f4
    lfs f4, 0x530(r31)
    lfs f0, 0x15d0(r31)
    stfs f5, 0x528(r31)
    fadds f0, f4, f0
    stfs f3, 0x52c(r31)
    stfs f0, 0x530(r31)
    bne lbl_fn_802D8B7C_0000057C
    lfs f0, lbl_80884610
    fsubs f0, f3, f0
    stfs f0, 0x52c(r31)
lbl_fn_802D8B7C_0000057C:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    lfs f4, 0x16a0(r31)
    lfs f3, lbl_80884604
    lfs f0, lbl_808845F0
    fsubs f3, f4, f3
    stfs f3, 0x16a0(r31)
    fcmpo cr0, f3, f0
    bge lbl_fn_802D8B7C_000005AC
    stfs f0, 0x16a0(r31)
lbl_fn_802D8B7C_000005AC:
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802D8B7C_000006A0
    lwz r0, 0x58c(r31)
    lwz r3, lbl_8087F8A0
    cmpwi r0, 0xc
    lwz r29, 0x48(r3)
    bne lbl_fn_802D8B7C_000005EC
    lwz r0, 0x14c4(r31)
    cmpwi r0, 0x2d
    ble lbl_fn_802D8B7C_000005EC
    lfs f3, 0x16a0(r31)
    lfs f0, lbl_808845EC
    fadds f0, f3, f0
    stfs f0, 0x16a0(r31)
lbl_fn_802D8B7C_000005EC:
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_802D8B7C_00000618
lbl_fn_802D8B7C_000005F8:
    lwz r3, 0x1678(r31)
    lwzx r3, r3, r30
    bl fn_802E2360
    lfs f0, 0x16a0(r31)
    addi r30, r30, 0x4
    addi r28, r28, 0x1
    fadds f0, f0, f1
    stfs f0, 0x16a0(r31)
lbl_fn_802D8B7C_00000618:
    lwz r0, 0x167c(r31)
    cmplw r28, r0
    blt lbl_fn_802D8B7C_000005F8
    lfs f3, 0x16a0(r31)
    lfs f0, lbl_80884600
    fcmpo cr0, f3, f0
    bge lbl_fn_802D8B7C_00000638
    b lbl_fn_802D8B7C_0000063C
lbl_fn_802D8B7C_00000638:
    fmr f3, f0
lbl_fn_802D8B7C_0000063C:
    stfs f3, 0x16a0(r31)
    frsp f4, f3
    lfs f3, lbl_80884614
    li r0, 0x1
    lwz r4, lbl_8087EFA8
    lfs f5, 0x570(r29)
    lfs f0, lbl_80884600
    lwz r3, 0x2b0(r4)
    fcmpo cr0, f5, f0
    stw r3, 0x1c(r1)
    stw r0, 0x18(r1)
    stfs f4, 0x24(r1)
    stfs f3, 0x20(r1)
    ble lbl_fn_802D8B7C_00000680
    lfs f0, lbl_80884604
    fadds f0, f4, f0
    stfs f0, 0x24(r1)
lbl_fn_802D8B7C_00000680:
    lwz r0, 0x18(r1)
    stw r0, 0x2ac(r4)
    lwz r0, 0x1c(r1)
    stw r0, 0x2b0(r4)
    lfs f0, 0x20(r1)
    stfs f0, 0x2b4(r4)
    lfs f0, 0x24(r1)
    stfs f0, 0x2b8(r4)
lbl_fn_802D8B7C_000006A0:
    lwz r0, 0x84(r1)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802D9234(void)
{
    nofralloc
    lwz r0, 0x1560(r3)
    cmpwi r0, 0x0
    bnelr
    b fn_80149A30
    blr
}

asm void fn_802D9248(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f3, lbl_808845F0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lfs f2, 0x10(r4)
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    lwz r0, 0x50(r4)
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    ori r0, r0, 0x10
    stw r0, 0x50(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802D92CC(void)
{
    nofralloc
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bnelr
    b fn_802DC618
    blr
}

asm void fn_802D92E4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lfs f2, lbl_808845F0
    lis r4, lbl_80747654@ha
    stw r0, 0x54(r1)
    addi r4, r4, lbl_80747654@l
    li r0, 0x0
    addi r5, r1, 0x8
    stw r31, 0x4c(r1)
    addi r6, r1, 0x30
    mr r31, r3
    addi r4, r4, 0x2a0
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lfs f0, 0x5b0(r3)
    addi r3, r3, 0xb0
    stfs f2, 0x8(r1)
    stfs f2, 0xc(r1)
    psq_l f1, 0x0(r5), 0, 0
    li r5, 0x0
    stw r0, 0x2c(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x38(r1)
    stfs f0, 0x3c(r1)
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D92E4_000007F0
    li r5, 0x0
    b lbl_fn_802D92E4_000007FC
lbl_fn_802D92E4_000007F0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r5, r3, r0
lbl_fn_802D92E4_000007FC:
    lfs f4, 0x2c(r5)
    addi r4, r1, 0x20
    lfs f0, 0x5ac(r31)
    addi r3, r1, 0x30
    lfs f5, 0x1c(r5)
    fadds f2, f4, f0
    lfs f6, 0xc(r5)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lwz r0, 0x62c(r31)
    fadds f0, f6, f0
    stfs f6, 0x14(r1)
    cmpwi r0, 0x0
    stfs f0, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x38(r1)
    beq lbl_fn_802D92E4_00000864
    lwz r0, 0x628(r31)
    cmpwi r0, 0x0
    bne lbl_fn_802D92E4_00000A04
lbl_fn_802D92E4_00000864:
    lwz r0, 0x628(r31)
    li r30, 0x8
    cmplwi r0, 0x8
    bgt lbl_fn_802D92E4_00000BAC
    li r3, 0xb0
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    li r5, 0x0
    addi r4, r4, fn_80148990@l
    li r6, 0x14
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D92E4_000009F8
    lwz r0, 0x624(r31)
    li r5, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_802D92E4_000008C8
    mr r5, r0
lbl_fn_802D92E4_000008C8:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D92E4_000009E4
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D92E4_000009AC
lbl_fn_802D92E4_000008E0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D92E4_000008E0
    andi. r5, r5, 0x3
    beq lbl_fn_802D92E4_000009E4
lbl_fn_802D92E4_000009AC:
    mtctr r5
lbl_fn_802D92E4_000009B0:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D92E4_000009B0
lbl_fn_802D92E4_000009E4:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D92E4_000009F8
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D92E4_000009F8:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
    b lbl_fn_802D92E4_00000BAC
lbl_fn_802D92E4_00000A04:
    lwz r3, 0x624(r31)
    cmplw r3, r0
    blt lbl_fn_802D92E4_00000BAC
    slwi r30, r3, 1
    cmplw r0, r30
    bgt lbl_fn_802D92E4_00000BAC
    mulli r3, r30, 0x14
    li r4, 0x0
    la r5, lbl_8087D9E4
    la r6, lbl_8087D9E0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80148990@ha
    mr r7, r30
    addi r4, r4, fn_80148990@l
    li r5, 0x0
    li r6, 0x14
    bl fn_80695720
    lwz r0, 0x62c(r31)
    mr r29, r3
    cmpwi r0, 0x0
    beq lbl_fn_802D92E4_00000BA4
    lwz r0, 0x624(r31)
    mr r5, r30
    cmplw r30, r0
    ble lbl_fn_802D92E4_00000A74
    mr r5, r0
lbl_fn_802D92E4_00000A74:
    cmplwi r5, 0x0
    li r4, 0x0
    ble lbl_fn_802D92E4_00000B90
    srwi. r0, r5, 2
    mtctr r0
    beq lbl_fn_802D92E4_00000B58
lbl_fn_802D92E4_00000A8C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    add r6, r3, r4
    lwz r0, 0x62c(r31)
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D92E4_00000A8C
    andi. r5, r5, 0x3
    beq lbl_fn_802D92E4_00000B90
lbl_fn_802D92E4_00000B58:
    mtctr r5
lbl_fn_802D92E4_00000B5C:
    lwz r0, 0x62c(r31)
    add r6, r3, r4
    add r7, r0, r4
    lwzx r0, r4, r0
    stwx r0, r3, r4
    addi r4, r4, 0x14
    lfs f2, 0xc(r7)
    psq_l f1, 0x4(r7), 0, 0
    psq_st f1, 0x4(r6), 0, 0
    stfs f2, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    bdnz lbl_fn_802D92E4_00000B5C
lbl_fn_802D92E4_00000B90:
    lwz r3, 0x62c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802D92E4_00000BA4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_802D92E4_00000BA4:
    stw r29, 0x62c(r31)
    stw r30, 0x628(r31)
lbl_fn_802D92E4_00000BAC:
    lwz r0, 0x624(r31)
    addi r5, r1, 0x30
    lwz r4, 0x62c(r31)
    mulli r3, r0, 0x14
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x4(r3), 0, 0
    lfs f2, 0x38(r1)
    stfs f2, 0xc(r3)
    lfs f0, 0x3c(r1)
    stfs f0, 0x10(r3)
    lwz r3, 0x624(r31)
    lwz r0, 0x12a8(r31)
    addi r3, r3, 0x1
    stw r3, 0x624(r31)
    rlwinm r0, r0, 0, 3, 1
    stw r0, 0x12a8(r31)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_802D977C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    lwz r0, 0x624(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802D977C_00000CB4
    lis r4, lbl_80747654@ha
    li r5, 0x0
    addi r4, r4, lbl_80747654@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x2a0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D977C_00000C58
    li r4, 0x0
    b lbl_fn_802D977C_00000C64
lbl_fn_802D977C_00000C58:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r4, r3, r0
lbl_fn_802D977C_00000C64:
    lfs f4, 0x1c(r4)
    addi r3, r1, 0x14
    lfs f5, 0xc(r4)
    lfs f3, 0x5a8(r31)
    lfs f0, 0x5a4(r31)
    fadds f6, f4, f3
    lfs f3, 0x2c(r4)
    fadds f7, f5, f0
    lfs f0, 0x5ac(r31)
    stfs f6, 0x18(r1)
    fadds f2, f3, f0
    stfs f7, 0x14(r1)
    lwz r4, 0x62c(r31)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x4(r4), 0, 0
    stfs f5, 0x8(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    stfs f2, 0x1c(r1)
    stfs f2, 0xc(r4)
lbl_fn_802D977C_00000CB4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_802D9834(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r4, lbl_80747654@ha
    li r5, 0x0
    stw r0, 0x44(r1)
    addi r4, r4, lbl_80747654@l
    addi r4, r4, 0x2a0
    stw r31, 0x3c(r1)
    mr r31, r3
    lfs f0, 0x5b0(r3)
    stfs f0, 0x620(r3)
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D9834_00000D0C
    li r6, 0x0
    b lbl_fn_802D9834_00000D18
lbl_fn_802D9834_00000D0C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r6, r3, r0
lbl_fn_802D9834_00000D18:
    lfs f5, 0x1c(r6)
    addi r3, r1, 0x14
    lfs f6, 0xc(r6)
    addi r5, r1, 0x20
    lfs f3, 0x5a8(r31)
    addi r4, r1, 0x2c
    lfs f0, 0x5a4(r31)
    fadds f3, f5, f3
    lfs f4, 0x2c(r6)
    fadds f8, f6, f0
    lfs f0, 0x5ac(r31)
    stfs f3, 0x18(r1)
    fadds f7, f4, f0
    stfs f8, 0x14(r1)
    lfs f0, 0x5b4(r31)
    psq_l f1, 0x0(r3), 0, 0
    fmr f2, f7
    psq_st f1, 0x0(r5), 0, 0
    lfs f8, 0x620(r31)
    lfs f3, 0x24(r1)
    stfs f2, 0x61c(r31)
    frsp f2, f2
    fadds f0, f3, f0
    stfs f2, 0x34(r1)
    stfs f2, 0x28(r1)
    frsp f2, f2
    stfs f2, 0x5fc(r31)
    lfs f2, 0x28(r1)
    stfs f0, 0x24(r1)
    psq_st f1, 0x614(r31), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f1, 0x5f4(r31), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x600(r31), 0, 0
    stfs f2, 0x608(r31)
    stfs f8, 0x60c(r31)
    lwz r31, 0x3c(r1)
    lwz r0, 0x44(r1)
    stfs f6, 0x8(r1)
    stfs f5, 0xc(r1)
    stfs f4, 0x10(r1)
    stfs f7, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802D9938(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lwz r0, 0x14b8(r3)
    cmpwi r0, 0x1
    beq lbl_fn_802D9938_00000DE4
    li r3, 0x0
    b lbl_fn_802D9938_00000E64
lbl_fn_802D9938_00000DE4:
    lfs f6, lbl_808845F0
    addi r5, r1, 0x2c
    lfs f3, 0x60c(r3)
    lfs f5, lbl_80884600
    fmuls f7, f6, f3
    lfs f0, lbl_80884618
    fmuls f8, f5, f3
    lwz r6, 0x62c(r3)
    stfs f6, 0x8(r1)
    li r3, 0x1
    fmuls f9, f7, f0
    lfs f3, 0x8(r6)
    fmuls f10, f8, f0
    lfs f0, 0x4(r6)
    lfs f4, 0xc(r6)
    fadds f0, f0, f9
    fadds f2, f4, f9
    stfs f5, 0xc(r1)
    fadds f3, f3, f10
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0x10(r1)
    stfs f7, 0x14(r1)
    stfs f8, 0x18(r1)
    stfs f7, 0x1c(r1)
    stfs f9, 0x20(r1)
    stfs f10, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
lbl_fn_802D9938_00000E64:
    addi r1, r1, 0x40
    blr
}

asm void fn_802D99D8(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r3
    stw r30, 0x78(r1)
    li r30, 0x0
    stw r29, 0x74(r1)
    mr r29, r5
    stw r28, 0x70(r1)
    mr r28, r4
    stw r30, 0x14c8(r4)
    stw r30, 0x14c4(r4)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r28)
    li r0, 0xf
    mr r3, r28
    li r4, 0x3
    stw r0, 0x58c(r28)
    bl fn_8016E970
    lis r3, lbl_80747654@ha
    stw r30, 0x1600(r28)
    addi r3, r3, lbl_80747654@l
    li r4, 0x0
    addi r5, r3, 0x2b
    li r7, 0x0
    li r3, 0x44
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_802D99D8_00000F0C
    psq_l f1, 0x528(r29), 0, 0
    addi r6, r1, 0x28
    lfs f2, 0x530(r29)
    mr r4, r29
    stfs f2, 0x30(r1)
    mr r5, r28
    psq_st f1, 0x0(r6), 0, 0
    bl fn_80194550
lbl_fn_802D99D8_00000F0C:
    lis r4, lbl_80786E08@ha
    lwzu r6, lbl_80786E08@l(r4)
    li r0, 0x0
    stw r29, 0x8(r1)
    lwz r5, 0x4(r4)
    lwz r4, 0x8(r4)
    stw r3, 0xc(r1)
    stw r0, 0x0(r31)
    lbz r0, lbl_8087F3E0
    stw r6, 0x1c(r1)
    extsb. r0, r0
    stw r5, 0x20(r1)
    stw r4, 0x24(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r6, 0x5c(r1)
    stw r5, 0x60(r1)
    stw r4, 0x64(r1)
    stw r29, 0x68(r1)
    stw r3, 0x6c(r1)
    bne lbl_fn_802D99D8_00000F8C
    lis r6, lbl_807C8408@ha
    lis r4, fn_802D9C10@ha
    lis r3, fn_802D9C40@ha
    li r0, 0x1
    addi r3, r3, fn_802D9C40@l
    addi r5, r6, lbl_807C8408@l
    addi r4, r4, fn_802D9C10@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8408@l(r6)
    stb r0, lbl_8087F3E0
lbl_fn_802D99D8_00000F8C:
    lwz r7, 0x5c(r1)
    addi r3, r1, 0x48
    lwz r6, 0x60(r1)
    lwz r5, 0x64(r1)
    lwz r4, 0x68(r1)
    lwz r0, 0x6c(r1)
    stw r7, 0x48(r1)
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stw r4, 0x54(r1)
    stw r0, 0x58(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_802D99D8_00001060
    lwz r7, 0x48(r1)
    li r3, 0x14
    lwz r6, 0x4c(r1)
    lwz r5, 0x50(r1)
    lwz r4, 0x54(r1)
    lwz r0, 0x58(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_802D99D8_00001024
    lis r3, __files@ha
    lis r4, lbl_80786F6C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80786F6C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D99D8_00001024:
    cmpwi r30, 0x0
    beq lbl_fn_802D99D8_00001054
    lwz r0, 0x34(r1)
    stw r0, 0x0(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x4(r30)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r30)
    lwz r0, 0x40(r1)
    stw r0, 0xc(r30)
    lwz r0, 0x44(r1)
    stw r0, 0x10(r30)
lbl_fn_802D99D8_00001054:
    stw r30, 0x4(r31)
    li r0, 0x1
    b lbl_fn_802D99D8_00001064
lbl_fn_802D99D8_00001060:
    li r0, 0x0
lbl_fn_802D99D8_00001064:
    cmpwi r0, 0x0
    beq lbl_fn_802D99D8_0000107C
    lis r3, lbl_807C8408@ha
    addi r3, r3, lbl_807C8408@l
    stw r3, 0x0(r31)
    b lbl_fn_802D99D8_00001084
lbl_fn_802D99D8_0000107C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_802D99D8_00001084:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802D9C10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r12, 0x0(r3)
    lwz r3, 0xc(r12)
    lwz r4, 0x10(r12)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802D9C40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r4
    bne lbl_fn_802D9C40_0000110C
    lis r3, lbl_80786E18@ha
    addi r3, r3, lbl_80786E18@l
    stw r3, 0x0(r4)
    b lbl_fn_802D9C40_000011D4
lbl_fn_802D9C40_0000110C:
    cmpwi r5, 0x0
    bne lbl_fn_802D9C40_00001184
    lwz r31, 0x0(r3)
    li r3, 0x14
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_802D9C40_0000114C
    lis r3, __files@ha
    lis r4, lbl_80786F6C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80786F6C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_802D9C40_0000114C:
    cmpwi r30, 0x0
    beq lbl_fn_802D9C40_0000117C
    lwz r0, 0x4(r31)
    lwz r3, 0x0(r31)
    stw r3, 0x0(r30)
    stw r0, 0x4(r30)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r30)
    lwz r0, 0xc(r31)
    stw r0, 0xc(r30)
    lwz r0, 0x10(r31)
    stw r0, 0x10(r30)
lbl_fn_802D9C40_0000117C:
    stw r30, 0x0(r29)
    b lbl_fn_802D9C40_000011D4
lbl_fn_802D9C40_00001184:
    cmpwi r5, 0x1
    bne lbl_fn_802D9C40_000011A0
    lwz r3, 0x0(r4)
    bl dtor_80084684
    li r0, 0x0
    stw r0, 0x0(r29)
    b lbl_fn_802D9C40_000011D4
lbl_fn_802D9C40_000011A0:
    lwz r5, 0x0(r4)
    lis r3, lbl_80786E18@ha
    lwz r4, lbl_80786E18@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_802D9C40_000011CC
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    b lbl_fn_802D9C40_000011D4
lbl_fn_802D9C40_000011CC:
    li r0, 0x0
    stw r0, 0x0(r29)
lbl_fn_802D9C40_000011D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802D9D5C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    lis r5, lbl_80747654@ha
    stw r0, 0x184(r1)
    addi r5, r5, lbl_80747654@l
    stw r31, 0x17c(r1)
    mr r31, r4
    addi r4, r5, 0x2a0
    li r5, 0x0
    stw r30, 0x178(r1)
    mr r30, r3
    addi r3, r3, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802D9D5C_00001234
    li r5, 0x0
    b lbl_fn_802D9D5C_00001240
lbl_fn_802D9D5C_00001234:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r5, r3, r0
lbl_fn_802D9D5C_00001240:
    lfs f5, 0x2c(r5)
    addi r3, r1, 0x140
    lfs f6, 0x1c(r5)
    li r4, 0x79
    lfs f7, 0xc(r5)
    lfs f4, 0x5ac(r30)
    lfs f3, 0x5a8(r30)
    lfs f0, 0x5a4(r30)
    fadds f4, f5, f4
    fadds f3, f6, f3
    lfs f1, 0x538(r30)
    fadds f0, f7, f0
    stfs f7, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f5, 0xa0(r1)
    stfs f0, 0xa4(r1)
    stfs f3, 0xa8(r1)
    stfs f4, 0xac(r1)
    bl fn_805F8E70
    lfs f2, lbl_8088461C
    addi r4, r1, 0x80
    lfs f0, lbl_80884608
    addi r6, r1, 0x74
    stfs f2, 0x74(r1)
    mr r5, r4
    addi r3, r1, 0x140
    stfs f0, 0x78(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x7c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F93C0
    lfs f3, 0xac(r1)
    addi r5, r1, 0x8c
    lfs f0, 0x88(r1)
    addi r3, r1, 0x110
    lfs f5, 0xa8(r1)
    li r4, 0x79
    fadds f2, f3, f0
    lfs f4, 0x84(r1)
    lfs f0, 0x80(r1)
    lfs f3, 0xa4(r1)
    fadds f4, f5, f4
    stfs f2, 0x8(r31)
    fadds f0, f3, f0
    stfs f4, 0x90(r1)
    stfs f0, 0x8c(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    lfs f1, 0x538(r30)
    stfs f2, 0x94(r1)
    bl fn_805F8E70
    lfs f3, lbl_80884620
    addi r4, r1, 0x5c
    lfs f0, lbl_80884608
    addi r6, r1, 0x50
    stfs f3, 0x50(r1)
    mr r5, r4
    lfs f2, lbl_80884624
    addi r3, r1, 0x110
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x64(r1)
    bl fn_805F93C0
    lfs f3, 0xac(r1)
    addi r5, r1, 0x68
    lfs f0, 0x64(r1)
    addi r3, r1, 0xe0
    lfs f5, 0xa8(r1)
    li r4, 0x79
    fadds f2, f3, f0
    lfs f4, 0x60(r1)
    lfs f0, 0x5c(r1)
    lfs f3, 0xa4(r1)
    fadds f4, f5, f4
    stfs f2, 0x14(r31)
    fadds f0, f3, f0
    stfs f4, 0x6c(r1)
    stfs f0, 0x68(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0xc(r31), 0, 0
    lfs f1, 0x538(r30)
    stfs f2, 0x70(r1)
    bl fn_805F8E70
    lfs f3, lbl_808845F8
    addi r4, r1, 0x38
    lfs f0, lbl_80884608
    addi r6, r1, 0x2c
    stfs f3, 0x2c(r1)
    mr r5, r4
    lfs f2, lbl_80884624
    addi r3, r1, 0xe0
    stfs f0, 0x30(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F93C0
    lfs f3, 0xac(r1)
    addi r5, r1, 0x44
    lfs f0, 0x40(r1)
    addi r3, r1, 0xb0
    lfs f5, 0xa8(r1)
    li r4, 0x79
    fadds f2, f3, f0
    lfs f4, 0x3c(r1)
    lfs f0, 0x38(r1)
    lfs f3, 0xa4(r1)
    fadds f4, f5, f4
    stfs f2, 0x20(r31)
    fadds f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x18(r31), 0, 0
    lfs f1, 0x538(r30)
    stfs f2, 0x4c(r1)
    bl fn_805F8E70
    lfs f3, lbl_80884628
    addi r4, r1, 0x14
    lfs f0, lbl_80884608
    addi r6, r1, 0x8
    stfs f3, 0x8(r1)
    mr r5, r4
    lfs f2, lbl_8088461C
    addi r3, r1, 0xb0
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F93C0
    lfs f3, 0xac(r1)
    addi r3, r1, 0x20
    lfs f0, 0x1c(r1)
    lfs f5, 0xa8(r1)
    fadds f2, f3, f0
    lfs f4, 0x18(r1)
    lfs f0, 0x14(r1)
    lfs f3, 0xa4(r1)
    fadds f4, f5, f4
    stfs f2, 0x2c(r31)
    fadds f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    lwz r31, 0x17c(r1)
    lwz r30, 0x178(r1)
    lwz r0, 0x184(r1)
    stfs f2, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_802DA01C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80747654@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80747654@l
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r5, 0x2a0
    li r5, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DA01C_000014F4
    li r3, 0x0
    b lbl_fn_802DA01C_00001500
lbl_fn_802DA01C_000014F4:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802DA01C_00001500:
    lfs f4, 0x1c(r3)
    lfs f0, 0x5a8(r31)
    lfs f3, 0x2c(r3)
    fadds f6, f4, f0
    lfs f5, 0xc(r3)
    lfs f2, 0x5ac(r31)
    lfs f1, 0x5a4(r31)
    lfs f0, lbl_8088462C
    fadds f2, f3, f2
    fadds f1, f5, f1
    stfs f5, 0x8(r1)
    fadds f0, f6, f0
    stfs f1, 0x0(r30)
    stfs f2, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802DA0C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80747654@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80747654@l
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r5, 0x2a0
    li r5, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r31, 0xb0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_802DA0C8_000015A0
    li r3, 0x0
    b lbl_fn_802DA0C8_000015AC
lbl_fn_802DA0C8_000015A0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r3, r3, r0
lbl_fn_802DA0C8_000015AC:
    lfs f4, 0x1c(r3)
    lfs f0, 0x5a8(r31)
    lfs f3, 0x2c(r3)
    fadds f6, f4, f0
    lfs f5, 0xc(r3)
    lfs f2, 0x5ac(r31)
    lfs f1, 0x5a4(r31)
    lfs f0, lbl_80884630
    fadds f2, f3, f2
    fadds f1, f5, f1
    stfs f5, 0x8(r1)
    fadds f0, f6, f0
    stfs f1, 0x0(r30)
    stfs f2, 0x8(r30)
    stfs f0, 0x4(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    stfs f4, 0xc(r1)
    stfs f3, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802DA174(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lwz r7, 0x14b8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_802DA174_00001650
    cmpwi r7, 0x1
    beq lbl_fn_802DA174_00001748
    cmpwi r7, 0x2
    beq lbl_fn_802DA174_00001844
    cmpwi r7, 0x3
    beq lbl_fn_802DA174_00001914
    cmpwi r7, 0x4
    beq lbl_fn_802DA174_00001A04
    b lbl_fn_802DA174_00001B88
lbl_fn_802DA174_00001650:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DA174_0000171C
    lwz r5, 0x1640(r3)
    cmpwi r5, 0x0
    beq lbl_fn_802DA174_00001710
    lwz r4, 0x1638(r3)
    addi r0, r4, 0x1
    stw r0, 0x1638(r3)
    cmpw r5, r0
    bgt lbl_fn_802DA174_00001684
    li r0, 0x0
    stw r0, 0x1638(r3)
lbl_fn_802DA174_00001684:
    lwz r0, 0x1638(r3)
    lwz r4, 0x163c(r3)
    slwi r0, r0, 2
    lwzx r4, r4, r0
    stw r4, 0x1634(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802DA174_000016C0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x530(r3)
    lfs f3, lbl_8088460C
    psq_st f1, 0x528(r3), 0, 0
    lfs f0, 0x14(r4)
    fadds f0, f3, f0
    stfs f0, 0x538(r3)
lbl_fn_802DA174_000016C0:
    lfs f3, 0x52c(r3)
    lfs f0, 0x15cc(r3)
    lwz r0, 0x14b8(r3)
    fadds f3, f3, f0
    lfs f0, 0x14cc(r3)
    lfs f5, 0x528(r3)
    cmpwi r0, 0x3
    lfs f4, 0x15c8(r3)
    fadds f3, f3, f0
    fadds f5, f5, f4
    lfs f4, 0x530(r3)
    lfs f0, 0x15d0(r3)
    stfs f5, 0x528(r3)
    fadds f0, f4, f0
    stfs f3, 0x52c(r3)
    stfs f0, 0x530(r3)
    bne lbl_fn_802DA174_00001710
    lfs f0, lbl_80884610
    fsubs f0, f3, f0
    stfs f0, 0x52c(r3)
lbl_fn_802DA174_00001710:
    mr r3, r31
    li r4, 0x0
    bl fn_802DBE70
lbl_fn_802DA174_0000171C:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802DA174_00001B88
    lwz r4, 0x14b8(r31)
    li r0, 0x0
    li r3, 0x4
    stw r4, 0x14bc(r31)
    stw r3, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    stw r0, 0x14d4(r31)
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001748:
    lwz r0, 0x1580(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DA174_00001760
    lwz r0, 0x14d0(r3)
    cmpwi r0, 0x5
    blt lbl_fn_802DA174_00001780
lbl_fn_802DA174_00001760:
    li r4, 0x3
    li r0, 0x0
    stw r7, 0x14bc(r3)
    stw r4, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    mr r3, r31
    bl fn_802DDA90
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001780:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x12c
    ble lbl_fn_802DA174_000017BC
    lwz r5, 0x54c(r3)
    li r6, 0x1
    li r4, 0x3
    li r0, 0x0
    rlwinm r5, r5, 0, 19, 17
    stw r6, 0xd18(r3)
    li r6, 0x0
    stw r5, 0x54c(r3)
    stw r7, 0x14bc(r3)
    stw r4, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    b lbl_fn_802DA174_00001838
lbl_fn_802DA174_000017BC:
    lwz r0, 0x14d4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_802DA174_00001834
    li r30, 0x0
    stw r30, 0x14c8(r3)
    stw r30, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0x8
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x14
    addi r4, r4, 0x2a5
    addi r5, r31, 0x614
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x14d0(r31)
    stw r30, 0x14d4(r31)
    addi r0, r3, 0x1
    stw r0, 0x14d0(r31)
lbl_fn_802DA174_00001834:
    li r6, 0x1
lbl_fn_802DA174_00001838:
    cmpwi r6, 0x0
    bne lbl_fn_802DA174_00001B88
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001844:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DA174_000018E4
    lwz r4, 0x14dc(r3)
    addi r4, r4, 0x1
    cmpwi r4, 0x1
    blt lbl_fn_802DA174_00001864
    li r4, 0x0
lbl_fn_802DA174_00001864:
    li r0, 0x0
    stw r4, 0x14dc(r3)
    stw r0, 0x14c8(r3)
    stw r0, 0x14c4(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xa
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f1, lbl_808845F0
    addi r3, r31, 0xb0
    li r4, 0x0
    bl fn_80097CCC
    lfs f0, lbl_80884600
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    bl fn_802DC014
lbl_fn_802DA174_000018E4:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802DA174_00001B88
    mr r3, r31
    bl fn_802DDA90
    lwz r4, 0x14b8(r31)
    li r3, 0x3
    li r0, 0x0
    stw r4, 0x14bc(r31)
    stw r3, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001914:
    lwz r0, 0x167c(r3)
    li r5, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802DA174_0000195C
lbl_fn_802DA174_0000192C:
    lwz r4, 0x1678(r3)
    lwzx r4, r4, r6
    lwz r0, 0x7e0(r4)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802DA174_00001954
    lwz r0, 0xd18(r4)
    cmpwi r0, 0x1
    bne lbl_fn_802DA174_00001954
    addi r5, r5, 0x1
lbl_fn_802DA174_00001954:
    addi r6, r6, 0x4
    bdnz lbl_fn_802DA174_0000192C
lbl_fn_802DA174_0000195C:
    cmpwi r5, 0x0
    bgt lbl_fn_802DA174_00001990
    lwz r5, 0x54c(r3)
    li r6, 0x1
    lwz r4, 0x14b8(r3)
    li r0, 0x0
    rlwinm r5, r5, 0, 19, 17
    stw r6, 0xd18(r3)
    stw r5, 0x54c(r3)
    stw r4, 0x14bc(r3)
    stw r0, 0x14b8(r3)
    stw r0, 0x14c0(r3)
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001990:
    lwz r0, 0x14c0(r3)
    li r5, 0x0
    lwz r4, 0x54c(r3)
    cmpwi r0, 0x0
    stw r5, 0xd18(r3)
    ori r0, r4, 0x2000
    stw r0, 0x54c(r3)
    bne lbl_fn_802DA174_000019B8
    mr r3, r31
    bl fn_802DC014
lbl_fn_802DA174_000019B8:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x384
    ble lbl_fn_802DA174_000019F4
    lwz r4, 0x54c(r31)
    li r5, 0x1
    lwz r3, 0x14b8(r31)
    li r0, 0x0
    rlwinm r4, r4, 0, 19, 17
    stw r5, 0xd18(r31)
    li r5, 0x0
    stw r4, 0x54c(r31)
    stw r3, 0x14bc(r31)
    stw r0, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    b lbl_fn_802DA174_000019F8
lbl_fn_802DA174_000019F4:
    li r5, 0x1
lbl_fn_802DA174_000019F8:
    cmpwi r5, 0x0
    bne lbl_fn_802DA174_00001B88
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001A04:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802DA174_00001A24
    lwz r0, 0x14bc(r3)
    cmpwi r0, 0x3
    bne lbl_fn_802DA174_00001A24
    li r4, 0x1
    bl fn_802DBE70
lbl_fn_802DA174_00001A24:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_802DA174_00001B54
    lwz r0, 0x1604(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802DA174_00001B3C
    li r0, 0x0
    stw r0, 0x14c8(r31)
    stw r0, 0x14c4(r31)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    stw r3, 0x590(r31)
    li r0, 0xd
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl fn_8016E970
    lfs f0, lbl_80884600
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808845F0
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x145
    lfs f2, lbl_80884604
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r31
    li r4, 0x64
    bl fn_80232B7C
    lfs f0, lbl_808845F0
    li r0, -0x1
    lfs f1, lbl_80884600
    addi r4, r31, 0x160c
    stfs f0, 0x28(r1)
    addi r5, r31, 0xb0
    addi r7, r1, 0x34
    addi r8, r1, 0x28
    stfs f0, 0x2c(r1)
    addi r9, r1, 0x18
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f1, 0x24(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lis r4, lbl_80747654@ha
    lfs f1, lbl_80884600
    addi r4, r4, lbl_80747654@l
    addi r3, r1, 0x10
    addi r4, r4, 0x2b2
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_802DA174_00001B54
lbl_fn_802DA174_00001B3C:
    lwz r3, lbl_8087F430
    li r4, 0xcc
    li r5, 0x1
    bl fn_80370AE4
    mr r3, r31
    bl fn_802DC1C0
lbl_fn_802DA174_00001B54:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802DA174_00001B88
    lwz r4, 0x14b8(r31)
    li r0, 0x0
    li r3, 0x1
    stw r4, 0x14bc(r31)
    stw r3, 0x14b8(r31)
    stw r0, 0x14c0(r31)
    stw r0, 0x14d4(r31)
    stw r0, 0x14d0(r31)
    stw r0, 0x1580(r31)
    b lbl_fn_802DA174_00001B94
lbl_fn_802DA174_00001B88:
    lwz r3, 0x14c0(r31)
    addi r0, r3, 0x1
    stw r0, 0x14c0(r31)
lbl_fn_802DA174_00001B94:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
