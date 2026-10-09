#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008A4E0(void);
extern void fn_8008A76C(void);
extern void fn_8008B140(void);
extern void fn_8008BBD8(void);
extern void fn_800902C0(void);
extern void fn_800920B8(void);
extern void fn_800928B0(void);
extern void fn_80097C08(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_800F29D0(void);
extern void fn_8015495C(void);
extern void fn_8016D3F8(void);
extern void fn_8016E970(void);
extern void fn_8016EB48(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_8023A8B4(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ECBD4(void);
extern void fn_803EDB18(void);
extern void fn_803FFC50(void);
extern void fn_80473E8C(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80682428(void);
extern void fn_8068A850(void);
extern void fn_8068AD58(void);
extern void fn_8068AEA8(void);
extern void fn_80695B00(void);

/* External data declarations */
extern u8 lbl_807525B8[];
extern u8 lbl_807525D8[];
extern u8 lbl_807526BC[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D080[];
extern u8 lbl_8078D090[];
extern u8 lbl_8078D098[];
extern u8 lbl_807C8870[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F4A8;
extern u32 lbl_80886090;
extern u32 lbl_80886094;
extern u32 lbl_80886098;
extern u32 lbl_808860AC;
extern u32 lbl_808860B4;
extern u32 lbl_808860B8;
extern u32 lbl_808860C0;
extern u32 lbl_808860C4;
extern u32 lbl_808860C8;
extern u32 lbl_808860CC;
extern u32 lbl_808860D0;
extern u32 lbl_808860D4;
extern u32 lbl_808860D8;
extern u32 lbl_808860DC;
extern u32 lbl_808860E0;
extern u32 lbl_808860E4;
extern u32 lbl_808860E8;
extern u32 lbl_808860EC;
extern u32 lbl_808860F0;
extern u32 lbl_808860F4;
extern u32 lbl_808860F8;

/* Function declarations */
void fn_803FD328(void);
void fn_803FDF0C(void);
void fn_803FDF10(void);
void fn_803FDF3C(void);
void fn_803FDF68(void);
void fn_803FDFC0(void);
void fn_803FE390(void);
void fn_803FE570(void);
void fn_803FE798(void);
void fn_803FE828(void);
void fn_803FEB70(void);
void fn_803FEB9C(void);
void fn_803FEC54(void);

asm void fn_803FD328(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x50
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    stfd f29, 0x60(r1)
    psq_st f29, 0x68(r1), 0, 0
    stfd f28, 0x50(r1)
    psq_st f28, 0x58(r1), 0, 0
    bl _savegpr_25
    cmpwi r4, 0x3
    li r30, 0x0
    stw r4, 0x108(r3)
    mr r26, r3
    stw r30, 0x110(r3)
    beq lbl_fn_803FD328_00000080
    cmpwi r4, 0x4
    beq lbl_fn_803FD328_000001CC
    cmpwi r4, 0x6
    beq lbl_fn_803FD328_000004B8
    cmpwi r4, 0x7
    beq lbl_fn_803FD328_000005AC
    cmpwi r4, 0x8
    beq lbl_fn_803FD328_00000878
    cmpwi r4, 0x9
    beq lbl_fn_803FD328_00000984
    cmpwi r4, 0xa
    beq lbl_fn_803FD328_00000AE8
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000080:
    lwz r4, 0xf4(r3)
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_000000B4
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_000000B4
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_000000C4
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_0000011C
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_00000174
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000000B4:
    mr r3, r26
    li r4, 0x4
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000000C4:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x78
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_0000011C:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x7e
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000174:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x81
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000001CC:
    lwz r4, 0xf4(r3)
    lwz r0, 0x28(r4)
    cmpwi r0, 0x1
    ble lbl_fn_803FD328_000004AC
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_0000020C
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_00000264
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_000002BC
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_00000388
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_000003E0
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_0000020C:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x2
    lfs f1, lbl_808860AC
    li r6, 0x1
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000264:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x2
    lfs f1, lbl_808860AC
    li r6, 0x1
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000002BC:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f1, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x79
    lfs f2, lbl_808860B8
    li r6, 0x1
    lwz r3, 0xf8(r26)
    li r7, 0x0
    li r8, 0x1
    stfs f1, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f1, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r5, 0xf8(r26)
    addi r4, r1, 0x20
    lfs f3, lbl_80886090
    lis r3, lbl_807525B8@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f0, 0x24(r1)
    stfs f2, 0x28(r1)
    fadds f1, f3, f0
    lfd f2, lbl_807525B8@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886090
    fcmpo cr0, f3, f0
    ble lbl_fn_803FD328_00000354
    lfs f0, lbl_80886094
    fsubs f3, f3, f0
lbl_fn_803FD328_00000354:
    lfs f0, lbl_80886098
    fcmpo cr0, f3, f0
    bge lbl_fn_803FD328_00000368
    lfs f0, lbl_80886094
    fadds f3, f3, f0
lbl_fn_803FD328_00000368:
    stfs f3, 0x24(r1)
    addi r3, r1, 0x20
    lwz r4, 0xf8(r26)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x53c(r4)
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000388:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x7f
    lfs f1, lbl_808860AC
    li r6, 0x1
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000003E0:
    lwz r3, 0xf8(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f1, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x82
    lfs f2, lbl_808860B8
    li r6, 0x1
    lwz r3, 0xf8(r26)
    li r7, 0x0
    li r8, 0x1
    stfs f1, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f1, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    lwz r5, 0xf8(r26)
    addi r4, r1, 0x14
    lfs f3, lbl_80886090
    lis r3, lbl_807525B8@ha
    psq_l f1, 0x534(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x53c(r5)
    lfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    fadds f1, f3, f0
    lfd f2, lbl_807525B8@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80886090
    fcmpo cr0, f3, f0
    ble lbl_fn_803FD328_00000478
    lfs f0, lbl_80886094
    fsubs f3, f3, f0
lbl_fn_803FD328_00000478:
    lfs f0, lbl_80886098
    fcmpo cr0, f3, f0
    bge lbl_fn_803FD328_0000048C
    lfs f0, lbl_80886094
    fadds f3, f3, f0
lbl_fn_803FD328_0000048C:
    stfs f3, 0x18(r1)
    addi r3, r1, 0x14
    lwz r4, 0xf8(r26)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r4), 0, 0
    lfs f2, 0x1c(r1)
    stfs f2, 0x53c(r4)
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000004AC:
    li r4, 0x7
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000004B8:
    lwz r4, 0xf4(r3)
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_000004EC
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_000004EC
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_000004EC
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_000004FC
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_00000554
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000004EC:
    mr r3, r26
    li r4, 0x7
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000004FC:
    lwz r3, 0xfc(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xfc(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x78
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xfc(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xfc(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xfc(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000554:
    lwz r3, 0xfc(r3)
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xfc(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x7e
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xfc(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xfc(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xfc(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000005AC:
    lfs f28, lbl_808860B4
    addi r29, r1, 0x8
    lfs f29, lbl_80886090
    li r27, 0x0
    lfs f30, lbl_80886094
    li r31, 0x1
    lfs f31, lbl_80886098
    lis r25, lbl_807525B8@ha
lbl_fn_803FD328_000005CC:
    add r28, r26, r30
    lwz r3, 0xf8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_803FD328_00000864
    lwz r4, 0xf4(r26)
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_00000610
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_000006C0
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_0000070C
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_000007C8
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_00000814
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_00000610:
    lwz r0, 0x28(r4)
    cmpwi r0, 0x1
    bne lbl_fn_803FD328_00000668
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    li r4, 0x0
    lfs f1, lbl_808860AC
    li r5, 0x75
    stw r31, 0x3fc(r3)
    li r6, 0x1
    lfs f2, lbl_808860B8
    li r7, 0x0
    lwz r3, 0xf8(r28)
    li r8, 0x1
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_00000668:
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    cmpwi r27, 0x0
    li r4, 0x0
    li r5, 0x77
    stw r31, 0x3fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bne lbl_fn_803FD328_000006A4
    li r5, 0x76
lbl_fn_803FD328_000006A4:
    lfs f1, lbl_808860AC
    li r6, 0x1
    lfs f2, lbl_808860B8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_000006C0:
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    li r4, 0x0
    lfs f1, lbl_808860AC
    li r5, 0x7d
    stw r31, 0x3fc(r3)
    li r6, 0x1
    lfs f2, lbl_808860B8
    li r7, 0x0
    lwz r3, 0xf8(r28)
    li r8, 0x1
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_0000070C:
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    cmpwi r27, 0x0
    li r4, 0x0
    li r5, 0x7c
    stw r31, 0x3fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bne lbl_fn_803FD328_00000748
    li r5, 0x7b
lbl_fn_803FD328_00000748:
    lfs f1, lbl_808860AC
    li r6, 0x0
    lfs f2, lbl_808860B8
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    cmpwi r27, 0x1
    bne lbl_fn_803FD328_00000864
    lwz r3, 0xf8(r26)
    psq_l f1, 0x534(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f2, 0x53c(r3)
    lfs f0, 0xc(r1)
    stfs f2, 0x10(r1)
    fadds f1, f29, f0
    lfd f2, lbl_807525B8@l(r25)
    bl fn_8068AEA8
    frsp f0, f1
    fcmpo cr0, f0, f29
    ble lbl_fn_803FD328_0000079C
    fsubs f0, f0, f30
lbl_fn_803FD328_0000079C:
    fcmpo cr0, f0, f31
    bge lbl_fn_803FD328_000007A8
    fadds f0, f0, f30
lbl_fn_803FD328_000007A8:
    stfs f0, 0xc(r1)
    add r3, r26, r30
    lwz r3, 0xf8(r3)
    psq_l f1, 0x0(r29), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    lfs f2, 0x10(r1)
    stfs f2, 0x53c(r3)
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_000007C8:
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    li r4, 0x0
    lfs f1, lbl_808860AC
    li r5, 0x7f
    stw r31, 0x3fc(r3)
    li r6, 0x0
    lfs f2, lbl_808860B8
    li r7, 0x0
    lwz r3, 0xf8(r28)
    li r8, 0x1
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000864
lbl_fn_803FD328_00000814:
    cmpwi r27, 0x1
    bne lbl_fn_803FD328_00000864
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r28)
    li r4, 0x0
    lfs f1, lbl_808860AC
    li r5, 0x76
    stw r31, 0x3fc(r3)
    li r6, 0x0
    lfs f2, lbl_808860B8
    li r7, 0x0
    lwz r3, 0xf8(r28)
    li r8, 0x1
    stfs f28, 0x2fc(r3)
    lwz r3, 0xf8(r28)
    stfs f28, 0x2e8(r3)
    lwz r3, 0xf8(r28)
    addi r3, r3, 0xb0
    bl fn_80097C08
lbl_fn_803FD328_00000864:
    addi r27, r27, 0x1
    addi r30, r30, 0x4
    cmpwi r27, 0x2
    blt lbl_fn_803FD328_000005CC
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000878:
    lwz r4, 0xfc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803FD328_00000978
    lwz r3, 0xf4(r3)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_000008B8
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_000008B8
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_000008B8
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_000008C8
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_00000920
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000008B8:
    mr r3, r26
    li r4, 0x9
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000008C8:
    mr r3, r4
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xfc(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x7a
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xfc(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xfc(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xfc(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000920:
    mr r3, r4
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xfc(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x80
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xfc(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xfc(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xfc(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000978:
    li r4, 0x9
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000984:
    lwz r4, 0xf8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803FD328_00000ADC
    lwz r3, 0xf4(r3)
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FD328_000009C4
    cmpwi r0, 0x2
    beq lbl_fn_803FD328_000009C4
    cmpwi r0, 0x1
    beq lbl_fn_803FD328_000009D4
    cmpwi r0, 0x3
    beq lbl_fn_803FD328_00000A2C
    cmpwi r0, 0x4
    beq lbl_fn_803FD328_00000A84
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000009C4:
    mr r3, r26
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_000009D4:
    mr r3, r4
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x7a
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000A2C:
    mr r3, r4
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x80
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000A84:
    mr r3, r4
    li r4, 0x9
    bl fn_8016E970
    lwz r3, 0xf8(r26)
    li r0, 0x1
    lfs f0, lbl_808860B4
    li r4, 0x0
    stw r0, 0x3fc(r3)
    li r5, 0x83
    lfs f1, lbl_808860AC
    li r6, 0x0
    lwz r3, 0xf8(r26)
    li r7, 0x0
    lfs f2, lbl_808860B8
    li r8, 0x1
    stfs f0, 0x2fc(r3)
    lwz r3, 0xf8(r26)
    stfs f0, 0x2e8(r3)
    lwz r3, 0xf8(r26)
    addi r3, r3, 0xb0
    bl fn_80097C08
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000ADC:
    li r4, 0xa
    bl fn_803FD328
    b lbl_fn_803FD328_00000BAC
lbl_fn_803FD328_00000AE8:
    mr r25, r26
    li r29, 0x0
    li r27, 0x2
    li r28, 0x1
lbl_fn_803FD328_00000AF8:
    lwz r3, 0xf8(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803FD328_00000B84
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r3, 0xf8(r25)
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_803FD328_00000B34
    lwz r0, 0x560(r3)
    cmpwi r0, 0x44
    beq lbl_fn_803FD328_00000B40
lbl_fn_803FD328_00000B34:
    bl fn_8016D3F8
    cmpwi r3, 0x0
    beq lbl_fn_803FD328_00000B60
lbl_fn_803FD328_00000B40:
    lwz r3, 0xf8(r25)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803FD328_00000B58
    stw r28, 0x564(r3)
    b lbl_fn_803FD328_00000B74
lbl_fn_803FD328_00000B58:
    stw r27, 0x564(r3)
    b lbl_fn_803FD328_00000B74
lbl_fn_803FD328_00000B60:
    lwz r3, 0xf8(r25)
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_803FD328_00000B74:
    lwz r3, 0xf8(r25)
    lhz r0, 0xd38(r3)
    rlwinm r0, r0, 0, 17, 15
    sth r0, 0xd38(r3)
lbl_fn_803FD328_00000B84:
    lwz r0, 0xf8(r25)
    addi r29, r29, 0x1
    stw r0, 0x100(r25)
    cmpwi r29, 0x2
    stw r30, 0xf8(r25)
    addi r25, r25, 0x4
    blt lbl_fn_803FD328_00000AF8
    mr r3, r26
    li r4, 0x0
    bl fn_803FD328
lbl_fn_803FD328_00000BAC:
    addi r11, r1, 0x50
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    psq_l f29, 0x68(r1), 0, 0
    lfd f29, 0x60(r1)
    psq_l f28, 0x58(r1), 0, 0
    lfd f28, 0x50(r1)
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_803FDF0C(void)
{
    nofralloc
    blr
}

asm void fn_803FDF10(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_803FDF10_00000BF8
    li r3, 0x0
    blr
lbl_fn_803FDF10_00000BF8:
    lwz r4, 0x0(r4)
    subi r0, r4, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_803FDF10_00000C0C
    stw r4, 0x54(r3)
lbl_fn_803FDF10_00000C0C:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_803FDF3C(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    bne lbl_fn_803FDF3C_00000C38
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803FDF3C_00000C38
    li r4, 0x1
lbl_fn_803FDF3C_00000C38:
    mr r3, r4
    blr
}

asm void fn_803FDF68(void)
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
    beq lbl_fn_803FDF68_00000C7C
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_803FDF68_00000C7C
    mr r3, r30
    bl dtor_80084684
lbl_fn_803FDF68_00000C7C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FDFC0(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    stw r0, 0x664(r1)
    addi r11, r1, 0x660
    bl _savegpr_25
    lis r8, lbl_807774D8@ha
    li r0, 0x0
    addi r8, r8, lbl_807774D8@l
    stw r8, 0x8(r1)
    mr r26, r3
    mr r25, r4
    mr r27, r5
    stw r0, 0xc(r1)
    mr r28, r6
    mr r29, r7
    stw r0, 0x10(r1)
    addi r3, r1, 0x18
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r26
    mr r5, r25
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r26, lbl_807526BC@ha
    mr r31, r27
    addi r26, r26, lbl_807526BC@l
    li r30, 0x0
lbl_fn_803FDFC0_00000D44:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r25, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803FDFC0_00000F28
    addi r4, r26, 0x23
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FDFC0_00000DA0
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x0(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x4(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x8(r28)
    b lbl_fn_803FDFC0_00000F28
lbl_fn_803FDFC0_00000DA0:
    mr r3, r25
    addi r4, r26, 0x28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FDFC0_00000E58
    cmpwi r30, 0x2
    bge lbl_fn_803FDFC0_00000F28
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x0(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x4(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x8(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r31)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r31)
    addi r31, r31, 0x24
    addi r30, r30, 0x1
    b lbl_fn_803FDFC0_00000F28
lbl_fn_803FDFC0_00000E58:
    mr r3, r25
    addi r4, r26, 0x2e
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FDFC0_00000F00
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    li r4, 0x0
    cmpwi r0, 0x2d
    bne lbl_fn_803FDFC0_00000E8C
    li r4, 0x3
    addi r3, r3, 0x1
lbl_fn_803FDFC0_00000E8C:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x58
    beq lbl_fn_803FDFC0_00000EB0
    cmpwi r0, 0x59
    addi r0, r4, 0x2
    bne lbl_fn_803FDFC0_00000EAC
    addi r0, r4, 0x1
lbl_fn_803FDFC0_00000EAC:
    mr r4, r0
lbl_fn_803FDFC0_00000EB0:
    stw r4, 0x28(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    li r4, 0x0
    cmpwi r0, 0x2d
    bne lbl_fn_803FDFC0_00000ED4
    li r4, 0x3
    addi r3, r3, 0x1
lbl_fn_803FDFC0_00000ED4:
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x58
    beq lbl_fn_803FDFC0_00000EF8
    cmpwi r0, 0x59
    addi r0, r4, 0x2
    bne lbl_fn_803FDFC0_00000EF4
    addi r0, r4, 0x1
lbl_fn_803FDFC0_00000EF4:
    mr r4, r0
lbl_fn_803FDFC0_00000EF8:
    stw r4, 0x2c(r28)
    b lbl_fn_803FDFC0_00000F28
lbl_fn_803FDFC0_00000F00:
    mr r3, r25
    addi r4, r26, 0x33
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FDFC0_00000F28
    addi r3, r1, 0x8
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r29
    bl fn_8023780C
lbl_fn_803FDFC0_00000F28:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803FDFC0_00000D44
    cmpwi r30, 0x2
    bge lbl_fn_803FDFC0_00001050
    mulli r0, r30, 0x24
    subfic r3, r30, 0x2
    add r4, r27, r0
    bge lbl_fn_803FDFC0_00001050
    srwi. r0, r3, 1
    mtctr r0
    beq lbl_fn_803FDFC0_00000FFC
lbl_fn_803FDFC0_00000F5C:
    lfs f8, -0x24(r4)
    stfs f8, 0x0(r4)
    frsp f8, f8
    lfs f7, -0x20(r4)
    stfs f7, 0x4(r4)
    frsp f7, f7
    lfs f6, -0x1c(r4)
    stfs f6, 0x8(r4)
    frsp f6, f6
    lfs f5, -0x18(r4)
    stfs f5, 0xc(r4)
    frsp f5, f5
    lfs f4, -0x14(r4)
    stfs f4, 0x10(r4)
    frsp f4, f4
    lfs f3, -0x10(r4)
    stfs f3, 0x14(r4)
    frsp f3, f3
    lfs f2, -0xc(r4)
    stfs f2, 0x18(r4)
    frsp f2, f2
    lfs f1, -0x8(r4)
    stfs f1, 0x1c(r4)
    frsp f1, f1
    lfs f0, -0x4(r4)
    stfs f0, 0x20(r4)
    frsp f0, f0
    stfs f8, 0x24(r4)
    stfs f7, 0x28(r4)
    stfs f6, 0x2c(r4)
    stfs f5, 0x30(r4)
    stfs f4, 0x34(r4)
    stfs f3, 0x38(r4)
    stfs f2, 0x3c(r4)
    stfs f1, 0x40(r4)
    stfs f0, 0x44(r4)
    addi r4, r4, 0x48
    bdnz lbl_fn_803FDFC0_00000F5C
    andi. r3, r3, 0x1
    beq lbl_fn_803FDFC0_00001050
lbl_fn_803FDFC0_00000FFC:
    mtctr r3
lbl_fn_803FDFC0_00001000:
    lfs f8, -0x24(r4)
    stfs f8, 0x0(r4)
    lfs f7, -0x20(r4)
    stfs f7, 0x4(r4)
    lfs f6, -0x1c(r4)
    stfs f6, 0x8(r4)
    lfs f5, -0x18(r4)
    stfs f5, 0xc(r4)
    lfs f4, -0x14(r4)
    stfs f4, 0x10(r4)
    lfs f3, -0x10(r4)
    stfs f3, 0x14(r4)
    lfs f2, -0xc(r4)
    stfs f2, 0x18(r4)
    lfs f1, -0x8(r4)
    stfs f1, 0x1c(r4)
    lfs f0, -0x4(r4)
    stfs f0, 0x20(r4)
    addi r4, r4, 0x24
    bdnz lbl_fn_803FDFC0_00001000
lbl_fn_803FDFC0_00001050:
    addi r11, r1, 0x660
    bl _restgpr_25
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_803FE390(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r5
    beq lbl_fn_803FE390_00001224
    lis r5, lbl_807526BC@ha
    li r3, 0x3a8
    addi r5, r5, lbl_807526BC@l
    li r4, 0xc
    addi r5, r5, 0x37
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803FE390_0000121C
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl fn_803EC568
    lis r4, lbl_8078D098@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D098@l
    stw r4, 0x0(r31)
    li r4, 0x1
    bl fn_8008A4E0
    lfs f1, lbl_808860C0
    addi r4, r31, 0x338
    stfs f1, 0x318(r31)
    addi r3, r31, 0x35c
    lfs f0, lbl_808860E4
    cmplw r4, r3
    stfs f0, 0x330(r31)
    stfs f1, 0x334(r31)
    bge lbl_fn_803FE390_0000113C
    addi r3, r3, 0x23
    li r0, 0x24
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803FE390_0000113C
lbl_fn_803FE390_00001128:
    stfs f1, 0x4(r4)
    stfs f0, 0x1c(r4)
    stfs f1, 0x20(r4)
    addi r4, r4, 0x24
    bdnz lbl_fn_803FE390_00001128
lbl_fn_803FE390_0000113C:
    lfs f0, lbl_808860F0
    stfs f0, 0x36c(r31)
    lfs f0, lbl_808860C0
    stfs f0, 0x370(r31)
    bl fn_80680CF8
    lis r28, 0x6666
    lis r30, 0x4330
    addi r0, r28, 0x6667
    lis r29, lbl_807525D8@ha
    mulhw r0, r0, r3
    stw r30, 0x8(r1)
    lfd f2, lbl_807525D8@l(r29)
    lfs f0, lbl_808860C0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r3, r0, r3
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    stfs f1, 0x374(r31)
    stfs f0, 0x378(r31)
    stfs f0, 0x37c(r31)
    stfs f0, 0x380(r31)
    bl fn_80680CF8
    addi r0, r28, 0x6667
    stw r30, 0x10(r1)
    mulhw r5, r0, r3
    lfd f3, lbl_807525D8@l(r29)
    lfs f1, lbl_808860F4
    li r4, 0x2
    li r0, 0x1
    lfs f0, lbl_808860C0
    srawi r5, r5, 3
    li r30, 0x0
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x14
    subf r5, r5, r3
    addi r3, r31, 0x398
    addi r5, r5, 0x1
    xoris r5, r5, 0x8000
    stw r5, 0x14(r1)
    lfd f2, 0x10(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    stfs f1, 0x384(r31)
    stw r4, 0x388(r31)
    stw r0, 0x38c(r31)
    stfs f0, 0x390(r31)
    stb r30, 0x394(r31)
    bl fn_802377B8
    stw r30, 0x54(r31)
lbl_fn_803FE390_0000121C:
    mr r3, r31
    b lbl_fn_803FE390_00001228
lbl_fn_803FE390_00001224:
    li r3, 0x0
lbl_fn_803FE390_00001228:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FE570(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r30, r4
    beq lbl_fn_803FE570_00001454
    lis r5, lbl_807526BC@ha
    li r3, 0x3a8
    addi r5, r5, lbl_807526BC@l
    li r4, 0xc
    addi r5, r5, 0x37
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803FE570_000013F0
    lwz r6, 0x1c(r30)
    mr r4, r27
    lwz r5, 0x18(r30)
    bl fn_803EC568
    lis r4, lbl_8078D098@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D098@l
    stw r4, 0x0(r31)
    li r4, 0x1
    bl fn_8008A4E0
    lfs f3, lbl_808860C0
    addi r4, r31, 0x338
    stfs f3, 0x318(r31)
    addi r3, r31, 0x35c
    lfs f0, lbl_808860E4
    cmplw r4, r3
    stfs f0, 0x330(r31)
    stfs f3, 0x334(r31)
    bge lbl_fn_803FE570_00001310
    addi r3, r3, 0x23
    li r0, 0x24
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803FE570_00001310
lbl_fn_803FE570_000012FC:
    stfs f3, 0x4(r4)
    stfs f0, 0x1c(r4)
    stfs f3, 0x20(r4)
    addi r4, r4, 0x24
    bdnz lbl_fn_803FE570_000012FC
lbl_fn_803FE570_00001310:
    lfs f0, lbl_808860F0
    stfs f0, 0x36c(r31)
    lfs f0, lbl_808860C0
    stfs f0, 0x370(r31)
    bl fn_80680CF8
    lis r27, 0x6666
    lis r29, 0x4330
    addi r0, r27, 0x6667
    lis r28, lbl_807525D8@ha
    mulhw r0, r0, r3
    stw r29, 0x20(r1)
    lfd f4, lbl_807525D8@l(r28)
    lfs f0, lbl_808860C0
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r3, r0, r3
    addi r0, r3, 0x1
    xoris r0, r0, 0x8000
    stw r0, 0x24(r1)
    lfd f3, 0x20(r1)
    fsubs f3, f3, f4
    stfs f3, 0x374(r31)
    stfs f0, 0x378(r31)
    stfs f0, 0x37c(r31)
    stfs f0, 0x380(r31)
    bl fn_80680CF8
    addi r0, r27, 0x6667
    stw r29, 0x28(r1)
    mulhw r5, r0, r3
    lfd f5, lbl_807525D8@l(r28)
    lfs f3, lbl_808860F4
    li r4, 0x2
    li r0, 0x1
    lfs f0, lbl_808860C0
    srawi r5, r5, 3
    li r29, 0x0
    srwi r6, r5, 31
    add r5, r5, r6
    mulli r5, r5, 0x14
    subf r5, r5, r3
    addi r3, r31, 0x398
    addi r5, r5, 0x1
    xoris r5, r5, 0x8000
    stw r5, 0x2c(r1)
    lfd f4, 0x28(r1)
    fsubs f4, f4, f5
    fdivs f3, f4, f3
    stfs f3, 0x384(r31)
    stw r4, 0x388(r31)
    stw r0, 0x38c(r31)
    stfs f0, 0x390(r31)
    stb r29, 0x394(r31)
    bl fn_802377B8
    stw r29, 0x54(r31)
lbl_fn_803FE570_000013F0:
    cmpwi r31, 0x0
    beq lbl_fn_803FE570_00001454
    psq_l f1, 0x4(r30), 0, 0
    addi r3, r1, 0x14
    lfs f3, lbl_808860C0
    addi r4, r1, 0x8
    lfs f4, 0x14(r30)
    psq_st f1, 0x6c(r31), 0, 0
    lfs f2, 0xc(r30)
    lfs f0, lbl_808860C4
    stfs f2, 0x74(r31)
    fmr f2, f3
    stfs f3, 0x14(r1)
    stfs f4, 0x18(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x78(r31), 0, 0
    stfs f2, 0x80(r31)
    fmr f2, f0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x90(r31), 0, 0
    stfs f3, 0x1c(r1)
    stfs f0, 0x10(r1)
    stfs f2, 0x98(r31)
lbl_fn_803FE570_00001454:
    addi r11, r1, 0x50
    li r3, 0x0
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803FE798(void)
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
    beq lbl_fn_803FE798_000014E0
    addic. r31, r3, 0x398
    beq lbl_fn_803FE798_000014B8
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_803FE798_000014B8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803FE798_000014B8:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl fn_8008A76C
    mr r3, r29
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r30, 0x0
    ble lbl_fn_803FE798_000014E0
    mr r3, r29
    bl dtor_80084684
lbl_fn_803FE798_000014E0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803FE828(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803FE828_00001830
    addi r3, r31, 0xf4
    bl fn_8008B140
    cmpwi r3, 0x0
    bne lbl_fn_803FE828_00001830
    addi r3, r31, 0x398
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803FE828_00001830
    lwz r4, 0x360(r31)
    addi r3, r31, 0xf4
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803FE828_00001560
    li r0, 0x0
    b lbl_fn_803FE828_0000156C
lbl_fn_803FE828_00001560:
    mulli r0, r3, 0x30
    lwz r3, 0x130(r31)
    add r0, r3, r0
lbl_fn_803FE828_0000156C:
    stw r0, 0x308(r31)
    addi r3, r31, 0xf4
    lwz r4, 0x364(r31)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803FE828_00001590
    li r0, 0x0
    b lbl_fn_803FE828_0000159C
lbl_fn_803FE828_00001590:
    mulli r0, r3, 0x30
    lwz r3, 0x130(r31)
    add r0, r3, r0
lbl_fn_803FE828_0000159C:
    stw r0, 0x30c(r31)
    addi r3, r31, 0xf4
    lwz r4, 0x368(r31)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_803FE828_000015C0
    li r3, 0x0
    b lbl_fn_803FE828_000015CC
lbl_fn_803FE828_000015C0:
    mulli r0, r3, 0x30
    lwz r3, 0x130(r31)
    add r3, r3, r0
lbl_fn_803FE828_000015CC:
    lwz r0, 0x308(r31)
    stw r3, 0x310(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FE828_00001768
    lwz r0, 0x30c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FE828_00001768
    cmpwi r3, 0x0
    beq lbl_fn_803FE828_00001768
    lbz r0, lbl_8087F4A8
    lis r6, lbl_8078D080@ha
    lwzu r5, lbl_8078D080@l(r6)
    li r3, 0x0
    extsb. r0, r0
    stw r5, 0x64(r1)
    lwz r4, 0x4(r6)
    lwz r0, 0x8(r6)
    stw r4, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r5, 0x58(r1)
    stw r4, 0x5c(r1)
    stw r0, 0x60(r1)
    stw r5, 0x70(r1)
    stw r4, 0x74(r1)
    stw r0, 0x78(r1)
    stw r31, 0x7c(r1)
    stw r3, 0x80(r1)
    bne lbl_fn_803FE828_00001664
    lis r6, lbl_807C8870@ha
    lis r4, fn_803FEB70@ha
    lis r3, fn_803FEB9C@ha
    li r0, 0x1
    addi r3, r3, fn_803FEB9C@l
    addi r5, r6, lbl_807C8870@l
    addi r4, r4, fn_803FEB70@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8870@l(r6)
    stb r0, lbl_8087F4A8
lbl_fn_803FE828_00001664:
    lwz r6, 0x70(r1)
    addi r3, r1, 0x48
    lwz r5, 0x74(r1)
    lwz r4, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r6, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x50(r1)
    stw r0, 0x54(r1)
    crclr 6
    bl fn_8008BBD8
    cmpwi r3, 0x0
    bne lbl_fn_803FE828_000016D8
    addic. r0, r1, 0x84
    lwz r5, 0x48(r1)
    lwz r4, 0x4c(r1)
    lwz r3, 0x50(r1)
    lwz r0, 0x54(r1)
    stw r5, 0x38(r1)
    stw r4, 0x3c(r1)
    stw r3, 0x40(r1)
    stw r0, 0x44(r1)
    beq lbl_fn_803FE828_000016D0
    stw r5, 0x84(r1)
    stw r4, 0x88(r1)
    stw r3, 0x8c(r1)
    stw r0, 0x90(r1)
lbl_fn_803FE828_000016D0:
    li r0, 0x1
    b lbl_fn_803FE828_000016DC
lbl_fn_803FE828_000016D8:
    li r0, 0x0
lbl_fn_803FE828_000016DC:
    cmpwi r0, 0x0
    beq lbl_fn_803FE828_000016F4
    lis r3, lbl_807C8870@ha
    addi r3, r3, lbl_807C8870@l
    stw r3, 0x80(r1)
    b lbl_fn_803FE828_000016FC
lbl_fn_803FE828_000016F4:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_803FE828_000016FC:
    addi r3, r31, 0xf4
    addi r4, r1, 0x80
    bl fn_800F29D0
    addic. r3, r1, 0x80
    beq lbl_fn_803FE828_00001744
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803FE828_00001744
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803FE828_0000173C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803FE828_0000173C:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_803FE828_00001744:
    lwz r4, 0x360(r31)
    addi r3, r31, 0xf4
    bl fn_800920B8
    lwz r4, 0x364(r31)
    addi r3, r31, 0xf4
    bl fn_800920B8
    lwz r4, 0x368(r31)
    addi r3, r31, 0xf4
    bl fn_800920B8
lbl_fn_803FE828_00001768:
    lwz r0, 0x58(r31)
    rlwinm r0, r0, 0, 30, 30
    cmpwi r0, 0x2
    beq lbl_fn_803FE828_000017FC
    mr r3, r31
    li r4, 0x1
    bl fn_80232B7C
    lwz r3, lbl_8087F3C0
    li r11, 0x1
    lfs f1, lbl_808860C4
    li r0, -0x1
    stw r11, 0xb8(r3)
    addi r4, r31, 0x398
    lfs f0, lbl_808860C0
    addi r5, r31, 0xf4
    stfs f0, 0x1c(r1)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    stfs f0, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r11, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803FE828_000017FC:
    addi r0, r31, 0x314
    li r3, 0x1
    stw r3, 0x54(r31)
    mr r3, r31
    addi r4, r31, 0xf4
    stw r0, 0x35c(r31)
    bl fn_803EDB18
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ECBD4
    li r3, 0x1
    b lbl_fn_803FE828_00001834
lbl_fn_803FE828_00001830:
    li r3, 0x0
lbl_fn_803FE828_00001834:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803FEB70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r12, r3
    stw r0, 0x14(r1)
    lwz r3, 0xc(r3)
    bl fn_80695B00
    nop
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FEB9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_803FEB9C_000018A8
    lis r3, lbl_8078D090@ha
    addi r3, r3, lbl_8078D090@l
    stw r3, 0x0(r4)
    b lbl_fn_803FEB9C_00001914
lbl_fn_803FEB9C_000018A8:
    cmpwi r5, 0x0
    bne lbl_fn_803FEB9C_000018DC
    cmpwi r4, 0x0
    beq lbl_fn_803FEB9C_00001914
    lwz r5, 0x0(r3)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r4)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r4)
    b lbl_fn_803FEB9C_00001914
lbl_fn_803FEB9C_000018DC:
    cmpwi r5, 0x1
    beq lbl_fn_803FEB9C_00001914
    lwz r5, 0x0(r4)
    lis r3, lbl_8078D090@ha
    lwz r4, lbl_8078D090@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_803FEB9C_0000190C
    stw r30, 0x0(r31)
    b lbl_fn_803FEB9C_00001914
lbl_fn_803FEB9C_0000190C:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_803FEB9C_00001914:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FEC54(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x273a
    beq lbl_fn_803FEC54_000019F4
    lwz r4, lbl_8087EFB4
    lfs f0, 0x74(r3)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x70(r3)
    lfs f0, 0x6c(r3)
    addi r3, r1, 0x8
    lfs f1, 0x10c(r4)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_808860F8
    fcmpo cr0, f1, f0
    ble lbl_fn_803FEC54_000019F4
    lwz r3, 0x300(r31)
    lbz r0, 0x394(r31)
    extlwi r3, r3, 9, 8
    lwz r4, 0x144(r31)
    srawi r5, r3, 24
    lwz r3, 0x300(r31)
    subi r5, r5, 0x1
    rlwimi r3, r4, 8, 16, 23
    srawi r4, r5, 31
    cmpwi r0, 0x0
    andc r0, r5, r4
    stw r3, 0x300(r31)
    stw r0, 0x144(r31)
    bne lbl_fn_803FEC54_00001C30
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x1
    bl fn_803ECBD4
    li r0, 0x1
    stb r0, 0x394(r31)
    b lbl_fn_803FEC54_00001C30
lbl_fn_803FEC54_000019F4:
    mr r3, r31
    bl fn_803FFC50
    lwz r30, 0x35c(r31)
    lfs f2, 0x36c(r31)
    lfs f3, 0xc(r30)
    lfs f0, 0x8(r30)
    lfs f1, 0x0(r30)
    fsubs f3, f3, f0
    lfs f0, 0x370(r31)
    fadds f0, f1, f0
    fdivs f1, f3, f2
    fcmpo cr0, f0, f2
    fmuls f31, f1, f0
    ble lbl_fn_803FEC54_00001A30
    fmr f31, f3
lbl_fn_803FEC54_00001A30:
    lfs f1, 0x384(r31)
    lfs f0, 0x14(r30)
    fadds f1, f1, f0
    bl fn_8068AD58
    lfs f2, lbl_808860C8
    frsp f4, f1
    lfs f0, 0x10(r30)
    lfs f3, 0x8(r30)
    fdivs f2, f2, f0
    lfs f0, lbl_808860CC
    lfs f1, 0x384(r31)
    fadds f3, f3, f31
    fdivs f2, f3, f2
    fmuls f0, f0, f2
    fmuls f0, f0, f4
    stfs f0, 0x378(r31)
    bl fn_8068AD58
    lfs f0, 0x8(r30)
    frsp f4, f1
    lfs f1, 0x384(r31)
    fadds f3, f0, f31
    lfs f0, 0x374(r31)
    lfs f2, lbl_808860CC
    fadds f1, f1, f0
    fmuls f0, f3, f4
    fmuls f0, f2, f0
    stfs f0, 0x37c(r31)
    bl fn_8068AD58
    lfs f0, 0x8(r30)
    frsp f4, f1
    lfs f5, lbl_808860CC
    fadds f0, f0, f31
    lfs f2, 0x1c(r30)
    lfs f3, lbl_808860D0
    lfs f1, 0x370(r31)
    fmuls f4, f0, f4
    lfs f0, lbl_808860D4
    fmuls f4, f5, f4
    fmuls f2, f2, f4
    stfs f2, 0x380(r31)
    lfs f4, 0xc(r30)
    lfs f2, 0x0(r30)
    fdivs f3, f4, f3
    fmuls f3, f5, f3
    fadds f1, f2, f1
    fmuls f1, f1, f3
    stfs f1, 0x390(r31)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803FEC54_00001B08
    lfs f1, 0x36c(r31)
    lfs f0, lbl_808860D8
    fmuls f0, f1, f0
    stfs f0, 0x390(r31)
lbl_fn_803FEC54_00001B08:
    lfs f3, 0x0(r30)
    lfs f0, lbl_808860C0
    fcmpo cr0, f3, f0
    ble lbl_fn_803FEC54_00001B58
    lfs f2, lbl_808860E0
    lfs f1, lbl_808860DC
    lfs f0, 0x384(r31)
    fnmsubs f1, f2, f3, f1
    fdivs f1, f0, f1
    bl fn_8068A850
    frsp f3, f1
    lfs f0, lbl_808860C4
    lfs f2, 0x20(r30)
    lfs f1, lbl_808860E4
    fsubs f3, f0, f3
    lfs f0, 0x0(r30)
    fmuls f2, f2, f3
    fmadds f0, f1, f0, f2
    stfs f0, 0x370(r31)
    b lbl_fn_803FEC54_00001B5C
lbl_fn_803FEC54_00001B58:
    stfs f0, 0x370(r31)
lbl_fn_803FEC54_00001B5C:
    lfs f4, 0x0(r30)
    lfs f2, 0x370(r31)
    lfs f1, lbl_808860EC
    lfs f0, lbl_808860E8
    fadds f3, f4, f2
    lwz r0, 0x308(r31)
    fnmsubs f2, f1, f4, f0
    lfs f1, 0x18(r30)
    lfs f0, 0x384(r31)
    cmpwi r0, 0x0
    fdivs f2, f3, f2
    fadds f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x384(r31)
    beq lbl_fn_803FEC54_00001C30
    lwz r0, 0x30c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FEC54_00001C30
    lwz r0, 0x310(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803FEC54_00001BB4
    b lbl_fn_803FEC54_00001C30
lbl_fn_803FEC54_00001BB4:
    mr r3, r31
    addi r4, r31, 0xf4
    li r5, 0x0
    bl fn_803ECBD4
    lwz r0, 0x300(r31)
    extlwi r0, r0, 2, 25
    srawi. r0, r0, 31
    beq lbl_fn_803FEC54_00001C30
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r3, r31, 0xf4
    addi r5, r1, 0x14
    li r4, 0x0
    bl fn_800902C0
    addic. r3, r1, 0x14
    beq lbl_fn_803FEC54_00001C28
    lwz r4, 0x14(r1)
    cmpwi r4, 0x0
    beq lbl_fn_803FEC54_00001C28
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_803FEC54_00001C20
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_803FEC54_00001C20:
    li r0, 0x0
    stw r0, 0x14(r1)
lbl_fn_803FEC54_00001C28:
    li r0, 0x1
    stb r0, 0x394(r31)
lbl_fn_803FEC54_00001C30:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
