#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_15(void);
extern void _savegpr_15(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800698DC(void);
extern void fn_8006A950(void);
extern void fn_8006AD24(void);
extern void fn_8006B0C8(void);
extern void fn_8006B404(void);
extern void fn_8006D008(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_8008A4E0(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DC6B4(void);
extern void fn_8022D754(void);
extern void fn_80239030(void);
extern void fn_802396A0(void);
extern void fn_8043F5C4(void);
extern void fn_8043F63C(void);
extern void fn_8043FA08(void);
extern void fn_8043FE90(void);
extern void fn_8046C3FC(void);
extern void fn_8046D1EC(void);
extern void fn_8046DD20(void);
extern void fn_8046F5CC(void);
extern void fn_8046F834(void);
extern void fn_80471FD0(void);
extern void fn_80473F88(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80755C20[];
extern u8 lbl_80755C64[];
extern u8 lbl_80755C90[];
extern u8 lbl_80755CB8[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FBF0[];
extern u8 lbl_8078FC10[];
extern u8 lbl_8078FC68[];
extern u8 lbl_8078FCB8[];
extern u8 lbl_8078FCD0[];
extern u8 lbl_807C7060[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087F518;
extern u32 lbl_80886EE0;
extern u32 lbl_80886EE4;
extern u32 lbl_80886EE8;
extern u32 lbl_80886EEC;
extern u32 lbl_80886EF0;
extern u32 lbl_80886EF4;
extern u32 lbl_80886EF8;

/* Function declarations */
void fn_8047202C(void);
void fn_80472340(void);
void fn_80472344(void);
void fn_8047239C(void);
void fn_80472424(void);
void fn_80472A34(void);
void fn_80472A50(void);
void fn_80472A9C(void);
void fn_80472C90(void);
void fn_80472CAC(void);
void fn_80472D04(void);
void fn_80472D64(void);
void fn_80472D80(void);
void fn_80472DCC(void);
void fn_80472FAC(void);
void fn_8047304C(void);
void fn_804730D4(void);
void fn_804730E4(void);
void fn_80473104(void);
void fn_80473130(void);
void fn_80473184(void);
void fn_804731C0(void);
void fn_804732DC(void);
void fn_804738C4(void);
void fn_804738E0(void);
void fn_8047392C(void);

asm void fn_8047202C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lhz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047202C_00000024
    lwz r3, 0x8(r3)
    lfs f1, 0x0(r3)
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000024:
    cmplwi r0, 0x3
    bne lbl_fn_8047202C_00000148
    lhz r0, 0x6(r3)
    slwi r0, r0, 8
    ori r5, r0, 0x7
    slwi r0, r5, 16
    or r0, r5, r0
    mtspr GQR6, r0
    lwz r7, 0x8(r3)
    lhz r5, 0x4(r3)
    psq_l f0, 0x0(r7), 1, 5
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8047202C_00000064
    psq_l f1, 0x2(r7), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000064:
    subi r0, r5, 0x1
    slwi r0, r0, 2
    add r3, r7, r0
    psq_l f0, 0x0(r3), 1, 5
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8047202C_00000088
    psq_l f1, 0x2(r3), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000088:
    lha r3, 0x0(r4)
    subi r0, r5, 0x2
    cmpw r3, r0
    bgt lbl_fn_8047202C_000000A0
    cmpwi r3, 0x0
    bge lbl_fn_8047202C_000000A8
lbl_fn_8047202C_000000A0:
    li r0, 0x0
    sth r0, 0x0(r4)
lbl_fn_8047202C_000000A8:
    lha r0, 0x0(r4)
    slwi r0, r0, 2
    psq_lx f0, r7, r0, 1, 5
    fcmpo cr0, f1, f0
    bge lbl_fn_8047202C_000000C4
    li r0, 0x0
    sth r0, 0x0(r4)
lbl_fn_8047202C_000000C4:
    subi r0, r5, 0x1
    b lbl_fn_8047202C_000000D8
lbl_fn_8047202C_000000CC:
    lha r3, 0x0(r4)
    addi r3, r3, 0x1
    sth r3, 0x0(r4)
lbl_fn_8047202C_000000D8:
    lha r6, 0x0(r4)
    addi r5, r6, 0x1
    slwi r3, r5, 2
    psq_lx f0, r7, r3, 1, 5
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r3
    extrwi. r3, r3, 1, 2
    beq lbl_fn_8047202C_00000104
    cmpw r6, r0
    blt lbl_fn_8047202C_000000CC
lbl_fn_8047202C_00000104:
    extsh r0, r5
    slwi r3, r6, 2
    slwi r0, r0, 2
    add r3, r7, r3
    add r4, r7, r0
    psq_l f0, 0x0(r3), 1, 5
    psq_l f2, 0x0(r4), 1, 5
    psq_l f3, 0x2(r3), 1, 6
    psq_l f4, 0x2(r4), 1, 6
    fsubs f2, f2, f0
    fsubs f1, f1, f0
    lfs f0, lbl_80886EE0
    fdivs f1, f1, f2
    fsubs f0, f0, f1
    fmuls f0, f0, f3
    fmadds f1, f4, f1, f0
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000148:
    cmplwi r0, 0x4
    bne lbl_fn_8047202C_000001F4
    lhz r0, 0x6(r3)
    slwi r0, r0, 8
    ori r4, r0, 0x7
    slwi r0, r4, 16
    or r0, r4, r0
    mtspr GQR6, r0
    lfs f0, lbl_80886EE4
    lwz r5, 0x8(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_8047202C_00000180
    psq_l f1, 0x0(r5), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000180:
    fctiwz f0, f1
    lhz r3, 0x4(r3)
    stfd f0, 0x8(r1)
    subi r0, r3, 0x1
    lwz r6, 0xc(r1)
    cmpw r6, r0
    blt lbl_fn_8047202C_000001AC
    clrlslwi r0, r3, 16, 1
    add r3, r5, r0
    psq_l f1, -0x2(r3), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_000001AC:
    xoris r3, r6, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_80755C20@ha
    lfd f2, lbl_80755C20@l(r4)
    slwi r3, r6, 1
    stw r0, 0x8(r1)
    add r3, r5, r3
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fsubs f3, f1, f0
    psq_l f1, 0x0(r3), 1, 6
    psq_l f2, 0x2(r3), 1, 6
    lfs f0, lbl_80886EE0
    fsubs f0, f0, f3
    fmuls f0, f0, f1
    fmadds f1, f2, f3, f0
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_000001F4:
    lhz r0, 0x6(r3)
    slwi r0, r0, 8
    ori r5, r0, 0x7
    slwi r0, r5, 16
    or r0, r5, r0
    mtspr GQR6, r0
    lwz r7, 0x8(r3)
    lhz r5, 0x4(r3)
    psq_l f0, 0x0(r7), 1, 5
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_8047202C_0000022C
    psq_l f1, 0x2(r7), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_0000022C:
    subi r0, r5, 0x1
    mulli r0, r0, 0x6
    add r3, r7, r0
    psq_l f0, 0x0(r3), 1, 5
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_8047202C_00000250
    psq_l f1, 0x2(r3), 1, 6
    b lbl_fn_8047202C_00000304
lbl_fn_8047202C_00000250:
    lha r3, 0x0(r4)
    subi r0, r5, 0x2
    cmpw r3, r0
    bgt lbl_fn_8047202C_00000268
    cmpwi r3, 0x0
    bge lbl_fn_8047202C_00000270
lbl_fn_8047202C_00000268:
    li r0, 0x0
    sth r0, 0x0(r4)
lbl_fn_8047202C_00000270:
    lha r0, 0x0(r4)
    mulli r0, r0, 0x6
    psq_lx f0, r7, r0, 1, 5
    fcmpo cr0, f1, f0
    bge lbl_fn_8047202C_0000028C
    li r0, 0x0
    sth r0, 0x0(r4)
lbl_fn_8047202C_0000028C:
    subi r0, r5, 0x1
    b lbl_fn_8047202C_000002A0
lbl_fn_8047202C_00000294:
    lha r3, 0x0(r4)
    addi r3, r3, 0x1
    sth r3, 0x0(r4)
lbl_fn_8047202C_000002A0:
    lha r6, 0x0(r4)
    addi r5, r6, 0x1
    mulli r3, r5, 0x6
    psq_lx f0, r7, r3, 1, 5
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    mfcr r3
    extrwi. r3, r3, 1, 2
    beq lbl_fn_8047202C_000002CC
    cmpw r6, r0
    blt lbl_fn_8047202C_00000294
lbl_fn_8047202C_000002CC:
    extsh r0, r5
    mulli r3, r6, 0x6
    mulli r0, r0, 0x6
    add r3, r7, r3
    add r4, r7, r0
    psq_l f0, 0x0(r3), 1, 5
    psq_l f2, 0x0(r4), 1, 5
    lis r5, lbl_8078FBF0@ha
    fsubs f1, f1, f0
    addi r3, r3, 0x2
    fsubs f2, f2, f0
    addi r4, r4, 0x2
    addi r5, r5, lbl_8078FBF0@l
    bl fn_80471FD0
lbl_fn_8047202C_00000304:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80472340(void)
{
    nofralloc
    blr
}

asm void fn_80472344(void)
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
    beq lbl_fn_80472344_00000354
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_80472344_00000354
    mr r3, r30
    bl dtor_80084684
lbl_fn_80472344_00000354:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047239C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_8047239C_000003E4
    lwz r4, 0x54(r31)
    addi r3, r1, 0x14
    bl fn_8043F5C4
    lwz r4, 0x34(r1)
    lis r5, lbl_807C7060@ha
    stw r4, 0x5c(r31)
    mr r3, r31
    lfs f0, lbl_80886EEC
    addi r5, r5, lbl_807C7060@l
    stfs f0, 0x8(r1)
    addi r6, r1, 0x8
    stfs f0, 0xc(r1)
    stfs f0, 0x10(r1)
    lwz r4, 0xc(r4)
    bl fn_80472424
    mr r3, r31
    li r4, 0x3
    bl fn_80473104
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8043F63C
lbl_fn_8047239C_000003E4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80472424(void)
{
    nofralloc
    stwu r1, -0x3f0(r1)
    mflr r0
    stw r0, 0x3f4(r1)
    addi r11, r1, 0x370
    stfd f31, 0x3e0(r1)
    psq_st f31, 0x3e8(r1), 0, 0
    stfd f30, 0x3d0(r1)
    psq_st f30, 0x3d8(r1), 0, 0
    stfd f29, 0x3c0(r1)
    psq_st f29, 0x3c8(r1), 0, 0
    stfd f28, 0x3b0(r1)
    psq_st f28, 0x3b8(r1), 0, 0
    stfd f27, 0x3a0(r1)
    psq_st f27, 0x3a8(r1), 0, 0
    stfd f26, 0x390(r1)
    psq_st f26, 0x398(r1), 0, 0
    stfd f25, 0x380(r1)
    psq_st f25, 0x388(r1), 0, 0
    stfd f24, 0x370(r1)
    psq_st f24, 0x378(r1), 0, 0
    bl _savegpr_15
    lfs f26, lbl_80886EE8
    addi r29, r1, 0x2f0
    lfs f27, lbl_80886EEC
    mr r15, r3
    lfs f28, lbl_80886EF4
    mr r16, r4
    lfs f29, lbl_80886EF0
    mr r17, r5
    lfs f30, lbl_80886EF8
    mr r18, r6
    addi r30, r1, 0x2c0
    addi r31, r1, 0xa0
    addi r25, r1, 0x170
    addi r24, r1, 0x140
    addi r26, r1, 0x1d0
    addi r27, r1, 0x230
    addi r28, r1, 0x110
    addi r23, r1, 0xe0
    addi r20, r1, 0x74
    addi r21, r1, 0x80
    addi r22, r1, 0x90
    b lbl_fn_80472424_000009A8
lbl_fn_80472424_000004A4:
    lwz r19, 0xc(r16)
    psq_l f1, 0x0(r18), 0, 0
    lfs f2, 0x8(r18)
    psq_st f1, 0x0(r31), 0, 0
    psq_l f1, 0x0(r17), 0, 0
    stfs f2, 0xa8(r1)
    psq_l f2, 0x8(r17), 0, 0
    psq_l f3, 0x10(r17), 0, 0
    psq_l f4, 0x18(r17), 0, 0
    psq_l f5, 0x20(r17), 0, 0
    psq_l f6, 0x28(r17), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lwz r0, 0x8(r16)
    clrlwi. r0, r0, 31
    beq lbl_fn_80472424_00000554
    lfs f3, 0x18(r16)
    addi r3, r1, 0x290
    lfs f2, 0x14(r16)
    lfs f1, 0x10(r16)
    stfs f1, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f3, 0x40(r1)
    bl fn_805F90D0
    mr r3, r29
    addi r4, r1, 0x290
    addi r5, r1, 0x2c0
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80472424_00000554:
    lwz r0, 0x8(r16)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_fn_80472424_000006EC
    lfs f1, 0x24(r16)
    lfs f7, 0x20(r16)
    lfs f0, 0x1c(r16)
    fcmpu cr0, f26, f1
    stfs f0, 0x2c(r1)
    stfs f7, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f26, 0x16c(r1)
    stfs f26, 0x164(r1)
    stfs f26, 0x160(r1)
    stfs f26, 0x15c(r1)
    stfs f26, 0x158(r1)
    stfs f26, 0x150(r1)
    stfs f26, 0x14c(r1)
    stfs f26, 0x148(r1)
    stfs f26, 0x144(r1)
    stfs f27, 0x168(r1)
    stfs f27, 0x154(r1)
    stfs f27, 0x140(r1)
    beq lbl_fn_80472424_000005FC
    addi r3, r1, 0x1a0
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    psq_l f1, 0x0(r25), 0, 0
    psq_l f2, 0x8(r25), 0, 0
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_80472424_000005FC:
    lfs f1, 0x30(r1)
    fcmpu cr0, f26, f1
    beq lbl_fn_80472424_00000654
    addi r3, r1, 0x200
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x200
    addi r5, r1, 0x1d0
    bl fn_805F89F0
    psq_l f1, 0x0(r26), 0, 0
    psq_l f2, 0x8(r26), 0, 0
    psq_l f3, 0x10(r26), 0, 0
    psq_l f4, 0x18(r26), 0, 0
    psq_l f5, 0x20(r26), 0, 0
    psq_l f6, 0x28(r26), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_80472424_00000654:
    lfs f1, 0x2c(r1)
    fcmpu cr0, f26, f1
    beq lbl_fn_80472424_000006AC
    addi r3, r1, 0x260
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r24
    addi r4, r1, 0x260
    addi r5, r1, 0x230
    bl fn_805F89F0
    psq_l f1, 0x0(r27), 0, 0
    psq_l f2, 0x8(r27), 0, 0
    psq_l f3, 0x10(r27), 0, 0
    psq_l f4, 0x18(r27), 0, 0
    psq_l f5, 0x20(r27), 0, 0
    psq_l f6, 0x28(r27), 0, 0
    psq_st f1, 0x0(r24), 0, 0
    psq_st f2, 0x8(r24), 0, 0
    psq_st f3, 0x10(r24), 0, 0
    psq_st f4, 0x18(r24), 0, 0
    psq_st f5, 0x20(r24), 0, 0
    psq_st f6, 0x28(r24), 0, 0
lbl_fn_80472424_000006AC:
    mr r3, r29
    mr r4, r24
    addi r5, r1, 0x110
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    psq_st f2, 0x8(r29), 0, 0
    psq_st f3, 0x10(r29), 0, 0
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
lbl_fn_80472424_000006EC:
    lwz r0, 0x8(r16)
    rlwinm. r0, r0, 0, 28, 28
    beq lbl_fn_80472424_00000788
    lfs f3, 0x34(r16)
    addi r3, r1, 0xb0
    lfs f2, 0x30(r16)
    lfs f1, 0x2c(r16)
    stfs f1, 0x20(r1)
    stfs f2, 0x24(r1)
    stfs f3, 0x28(r1)
    bl fn_805F9160
    addi r3, r1, 0x2f0
    addi r4, r1, 0xb0
    addi r5, r1, 0xe0
    bl fn_805F89F0
    psq_l f1, 0x0(r23), 0, 0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    lfs f9, 0xa0(r1)
    psq_st f2, 0x8(r29), 0, 0
    lfs f8, 0xa4(r1)
    psq_st f3, 0x10(r29), 0, 0
    lfs f7, 0xa8(r1)
    psq_st f4, 0x18(r29), 0, 0
    psq_st f5, 0x20(r29), 0, 0
    psq_st f6, 0x28(r29), 0, 0
    lfs f0, 0x2c(r16)
    fmuls f0, f9, f0
    stfs f0, 0xa0(r1)
    lfs f0, 0x30(r16)
    fmuls f0, f8, f0
    stfs f0, 0xa4(r1)
    lfs f0, 0x34(r16)
    fmuls f0, f7, f0
    stfs f0, 0xa8(r1)
lbl_fn_80472424_00000788:
    cmpwi r19, 0x0
    beq lbl_fn_80472424_00000988
    addi r3, r1, 0xa0
    bl fn_805F9940
    lfs f0, 0xc(r19)
    fmuls f7, f28, f1
    stfs f0, 0x80(r1)
    addi r4, r1, 0x80
    mr r5, r4
    addi r3, r1, 0x2f0
    lfs f0, 0x10(r19)
    stfs f0, 0x84(r1)
    fmuls f25, f29, f7
    lfs f0, 0x14(r19)
    stfs f0, 0x88(r1)
    bl fn_805F93C0
    lfs f0, 0x18(r19)
    psq_l f1, 0x0(r21), 0, 0
    fmuls f0, f0, f25
    lfs f2, 0x88(r1)
    psq_st f1, 0x0(r22), 0, 0
    fcmpo cr0, f0, f26
    stfs f2, 0x98(r1)
    stfs f0, 0x9c(r1)
    ble lbl_fn_80472424_00000988
    lfs f7, 0x6c(r15)
    fabs f8, f7
    frsp f8, f8
    fcmpo cr0, f8, f30
    bge lbl_fn_80472424_00000814
    frsp f2, f2
    psq_st f1, 0x60(r15), 0, 0
    stfs f2, 0x68(r15)
    stfs f0, 0x6c(r15)
    b lbl_fn_80472424_00000988
lbl_fn_80472424_00000814:
    fadds f0, f7, f0
    lfs f11, 0x68(r15)
    frsp f10, f2
    lfs f9, 0x64(r15)
    lfs f8, 0x94(r1)
    addi r3, r1, 0x5c
    fdivs f24, f7, f0
    lfs f7, 0x60(r15)
    lfs f0, 0x90(r1)
    fsubs f13, f11, f10
    fsubs f25, f9, f8
    fsubs f12, f7, f0
    stfs f13, 0x1c(r1)
    fmuls f31, f13, f24
    fmuls f13, f25, f24
    stfs f12, 0x14(r1)
    fmuls f12, f12, f24
    fadds f10, f31, f10
    stfs f25, 0x18(r1)
    fadds f8, f13, f8
    fadds f0, f12, f0
    stfs f12, 0x8(r1)
    fsubs f11, f11, f10
    fsubs f9, f9, f8
    stfs f13, 0xc(r1)
    fsubs f7, f7, f0
    stfs f31, 0x10(r1)
    stfs f0, 0x74(r1)
    stfs f8, 0x78(r1)
    stfs f10, 0x7c(r1)
    stfs f7, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f11, 0x64(r1)
    bl fn_805F9940
    lfs f7, 0x98(r1)
    fmr f31, f1
    lfs f0, 0x7c(r1)
    addi r3, r1, 0x68
    lfs f9, 0x94(r1)
    fsubs f10, f7, f0
    lfs f8, 0x78(r1)
    lfs f7, 0x90(r1)
    lfs f0, 0x74(r1)
    fsubs f8, f9, f8
    stfs f10, 0x70(r1)
    fsubs f0, f7, f0
    stfs f8, 0x6c(r1)
    stfs f0, 0x68(r1)
    bl fn_805F9940
    lfs f7, 0x9c(r1)
    lfs f0, 0x6c(r15)
    fadds f7, f7, f1
    fadds f0, f0, f31
    fcmpo cr0, f7, f0
    ble lbl_fn_80472424_00000934
    lfs f7, 0x98(r1)
    addi r3, r1, 0x50
    lfs f0, 0x7c(r1)
    lfs f9, 0x94(r1)
    fsubs f10, f7, f0
    lfs f8, 0x78(r1)
    lfs f7, 0x90(r1)
    lfs f0, 0x74(r1)
    fsubs f8, f9, f8
    stfs f10, 0x58(r1)
    fsubs f0, f7, f0
    stfs f8, 0x54(r1)
    stfs f0, 0x50(r1)
    bl fn_805F9940
    lfs f0, 0x9c(r1)
    fadds f0, f0, f1
    b lbl_fn_80472424_00000974
lbl_fn_80472424_00000934:
    lfs f7, 0x68(r15)
    addi r3, r1, 0x44
    lfs f0, 0x7c(r1)
    lfs f9, 0x64(r15)
    fsubs f10, f7, f0
    lfs f8, 0x78(r1)
    lfs f7, 0x60(r15)
    lfs f0, 0x74(r1)
    fsubs f8, f9, f8
    stfs f10, 0x4c(r1)
    fsubs f0, f7, f0
    stfs f8, 0x48(r1)
    stfs f0, 0x44(r1)
    bl fn_805F9940
    lfs f0, 0x6c(r15)
    fadds f0, f0, f1
lbl_fn_80472424_00000974:
    psq_l f1, 0x0(r20), 0, 0
    lfs f2, 0x7c(r1)
    psq_st f1, 0x60(r15), 0, 0
    stfs f2, 0x68(r15)
    stfs f0, 0x6c(r15)
lbl_fn_80472424_00000988:
    lwz r4, 0x38(r16)
    cmpwi r4, 0x0
    beq lbl_fn_80472424_000009A4
    mr r3, r15
    addi r5, r1, 0x2f0
    addi r6, r1, 0xa0
    bl fn_80472424
lbl_fn_80472424_000009A4:
    lwz r16, 0x3c(r16)
lbl_fn_80472424_000009A8:
    cmpwi r16, 0x0
    bne lbl_fn_80472424_000004A4
    addi r11, r1, 0x370
    psq_l f31, 0x3e8(r1), 0, 0
    lfd f31, 0x3e0(r1)
    psq_l f30, 0x3d8(r1), 0, 0
    lfd f30, 0x3d0(r1)
    psq_l f29, 0x3c8(r1), 0, 0
    lfd f29, 0x3c0(r1)
    psq_l f28, 0x3b8(r1), 0, 0
    lfd f28, 0x3b0(r1)
    psq_l f27, 0x3a8(r1), 0, 0
    lfd f27, 0x3a0(r1)
    psq_l f26, 0x398(r1), 0, 0
    lfd f26, 0x390(r1)
    psq_l f25, 0x388(r1), 0, 0
    lfd f25, 0x380(r1)
    psq_l f24, 0x378(r1), 0, 0
    lfd f24, 0x370(r1)
    bl _restgpr_15
    lwz r0, 0x3f4(r1)
    mtlr r0
    addi r1, r1, 0x3f0
    blr
}

asm void fn_80472A34(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80472A34_00000A1C
    lwz r3, 0x5c(r3)
    blr
lbl_fn_80472A34_00000A1C:
    li r3, 0x0
    blr
}

asm void fn_80472A50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80472A9C
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80472A9C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80472A9C_00000B1C
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80472A9C_00000AD4
lbl_fn_80472A9C_00000AD0:
    lwz r4, 0x4(r4)
lbl_fn_80472A9C_00000AD4:
    cmplw r4, r0
    beq lbl_fn_80472A9C_00000AEC
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80472A9C_00000AD0
lbl_fn_80472A9C_00000AEC:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80472A9C_00000B0C
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80472A9C_00000B0C
    b lbl_fn_80472A9C_00000B1C
lbl_fn_80472A9C_00000B0C:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80472A9C_00000B1C:
    cmpwi r30, 0x0
    bne lbl_fn_80472A9C_00000C38
    lis r5, lbl_80755C64@ha
    li r3, 0x70
    addi r5, r5, lbl_80755C64@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80472A9C_00000B7C
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FC10@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FC10@l
    stw r3, 0x0(r30)
    lfs f0, lbl_80886EE8
    stw r0, 0x5c(r30)
    stfs f0, 0x60(r30)
    stfs f0, 0x64(r30)
    stfs f0, 0x68(r30)
    stfs f0, 0x6c(r30)
lbl_fn_80472A9C_00000B7C:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80472A9C_00000C1C
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80472A9C_00000BC8
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80472A9C_00000BC8:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80472A9C_00000BE0
    stw r30, 0x0(r3)
lbl_fn_80472A9C_00000BE0:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80472A9C_00000C40
    bl dtor_80084684
    b lbl_fn_80472A9C_00000C40
lbl_fn_80472A9C_00000C1C:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80472A9C_00000C40
lbl_fn_80472A9C_00000C38:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80472A9C_00000C40:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80472C90(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80472C90_00000C78
    addi r3, r3, 0x60
    blr
lbl_fn_80472C90_00000C78:
    li r3, 0x0
    blr
}

asm void fn_80472CAC(void)
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
    beq lbl_fn_80472CAC_00000CBC
    li r4, 0x0
    bl fn_8047304C
    cmpwi r31, 0x0
    ble lbl_fn_80472CAC_00000CBC
    mr r3, r30
    bl dtor_80084684
lbl_fn_80472CAC_00000CBC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80472D04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80472D04_00000D24
    lwz r4, 0x54(r31)
    addi r3, r1, 0x8
    bl fn_8043FA08
    lwz r0, 0x28(r1)
    mr r3, r31
    stw r0, 0x5c(r31)
    li r4, 0x3
    bl fn_80473104
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8043FE90
lbl_fn_80472D04_00000D24:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80472D64(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80472D64_00000D4C
    lwz r3, 0x5c(r3)
    blr
lbl_fn_80472D64_00000D4C:
    li r3, 0x0
    blr
}

asm void fn_80472D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80472DCC
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80472DCC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_80472DCC_00000E4C
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80472DCC_00000E04
lbl_fn_80472DCC_00000E00:
    lwz r4, 0x4(r4)
lbl_fn_80472DCC_00000E04:
    cmplw r4, r0
    beq lbl_fn_80472DCC_00000E1C
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80472DCC_00000E00
lbl_fn_80472DCC_00000E1C:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80472DCC_00000E3C
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80472DCC_00000E3C
    b lbl_fn_80472DCC_00000E4C
lbl_fn_80472DCC_00000E3C:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80472DCC_00000E4C:
    cmpwi r30, 0x0
    bne lbl_fn_80472DCC_00000F54
    lis r5, lbl_80755C90@ha
    li r3, 0x60
    addi r5, r5, lbl_80755C90@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80472DCC_00000E98
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FC68@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FC68@l
    stw r3, 0x0(r30)
    stw r0, 0x5c(r30)
lbl_fn_80472DCC_00000E98:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80472DCC_00000F38
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80472DCC_00000EE4
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80472DCC_00000EE4:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80472DCC_00000EFC
    stw r30, 0x0(r3)
lbl_fn_80472DCC_00000EFC:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80472DCC_00000F5C
    bl dtor_80084684
    b lbl_fn_80472DCC_00000F5C
lbl_fn_80472DCC_00000F38:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80472DCC_00000F5C
lbl_fn_80472DCC_00000F54:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80472DCC_00000F5C:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80472FAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_8078FCB8@ha
    li r5, 0x1
    stw r0, 0x14(r1)
    addi r0, r3, 0x6
    cmplw r4, r0
    addi r6, r6, lbl_8078FCB8@l
    stw r31, 0xc(r1)
    li r0, 0x0
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    stb r5, 0x4(r3)
    stw r6, 0x0(r3)
    stb r0, 0x5(r3)
    beq lbl_fn_80472FAC_00000FE0
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r4, r31
    addi r3, r30, 0x6
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80472FAC_00000FE0:
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x4c(r30)
    addi r3, r30, 0x6
    stw r0, 0x50(r30)
    stw r0, 0x54(r30)
    stw r0, 0x58(r30)
    bl fn_800DC6B4
    stw r3, 0x48(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047304C(void)
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
    beq lbl_fn_8047304C_0000108C
    lwz r4, 0x54(r3)
    lis r5, lbl_8078FCB8@ha
    addi r5, r5, lbl_8078FCB8@l
    stw r5, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8047304C_00001070
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8047304C_00001070
    lwz r3, lbl_8087F518
    bl fn_8046DD20
lbl_fn_8047304C_00001070:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x54(r30)
    stw r0, 0x50(r30)
    ble lbl_fn_8047304C_0000108C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8047304C_0000108C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804730D4(void)
{
    nofralloc
    lwz r4, 0x4c(r3)
    addi r0, r4, 0x1
    stw r0, 0x4c(r3)
    blr
}

asm void fn_804730E4(void)
{
    nofralloc
    lwz r0, 0x4c(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4c(r3)
    bnelr
    lwz r3, lbl_8087F518
    li r0, 0x1
    stw r0, 0x3edc(r3)
    blr
}

asm void fn_80473104(void)
{
    nofralloc
    stb r4, 0x4(r3)
    mr r4, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x4
    bnelr
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beqlr
    addi r4, r4, 0x6
    b fn_800698DC
    blr
}

asm void fn_80473130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x54(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80473130_00001138
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80473130_00001138
    lwz r3, lbl_8087F518
    bl fn_8046DD20
lbl_fn_80473130_00001138:
    li r0, 0x0
    stw r0, 0x54(r31)
    stw r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80473184(void)
{
    nofralloc
    lbz r0, 0x4(r3)
    mr r4, r3
    cmplwi r0, 0x2
    bnelr
    li r0, 0x3
    stb r0, 0x4(r3)
    lbz r0, 0x4(r3)
    cmplwi r0, 0x4
    bnelr
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beqlr
    addi r4, r4, 0x6
    b fn_800698DC
    blr
}

asm void fn_804731C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    beq lbl_fn_804731C0_00001298
    lis r4, lbl_8078FCD0@ha
    li r27, 0x0
    addi r4, r4, lbl_8078FCD0@l
    stw r4, 0x0(r3)
    li r30, 0x0
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_804731C0_00001268
lbl_fn_804731C0_000011D4:
    lwz r3, 0x90(r25)
    lwz r0, 0x68(r25)
    lwzx r28, r3, r29
    add r3, r0, r30
    cmpwi cr1, r28, 0x0
    beq cr1, lbl_fn_804731C0_0000125C
    lwz r0, 0x104(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804731C0_00001218
    beq cr1, lbl_fn_804731C0_00001254
    lwz r12, 0x0(r28)
    mr r3, r28
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_804731C0_00001254
lbl_fn_804731C0_00001218:
    cmplwi r0, 0x2
    bne lbl_fn_804731C0_00001248
    beq cr1, lbl_fn_804731C0_00001254
    addi r3, r28, 0x30
    li r4, -0x1
    bl fn_800D5808
    mr r3, r28
    li r4, -0x1
    bl fn_800D5808
    mr r3, r28
    bl dtor_80084684
    b lbl_fn_804731C0_00001254
lbl_fn_804731C0_00001248:
    mr r3, r28
    li r4, 0x1
    bl fn_800D5808
lbl_fn_804731C0_00001254:
    lwz r3, 0x90(r25)
    stwx r31, r3, r29
lbl_fn_804731C0_0000125C:
    addi r30, r30, 0x138
    addi r29, r29, 0x4
    addi r27, r27, 0x1
lbl_fn_804731C0_00001268:
    lwz r0, 0x64(r25)
    cmplw r27, r0
    blt lbl_fn_804731C0_000011D4
    addi r3, r25, 0x5c
    bl fn_802396A0
    mr r3, r25
    li r4, 0x0
    bl fn_8047304C
    cmpwi r26, 0x0
    ble lbl_fn_804731C0_00001298
    mr r3, r25
    bl dtor_80084684
lbl_fn_804731C0_00001298:
    mr r3, r25
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804732DC(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stmw r17, 0x94(r1)
    mr r17, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804732DC_00001884
    lwz r0, 0xa0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804732DC_000013C8
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804732DC_000012F4
    li r4, 0x5
    bl fn_80473104
    b lbl_fn_804732DC_00001884
lbl_fn_804732DC_000012F4:
    li r22, 0x0
    li r23, 0x0
    li r19, 0x0
    li r20, 0x0
    b lbl_fn_804732DC_000013A4
lbl_fn_804732DC_00001308:
    lwz r3, 0x90(r17)
    lwz r0, 0x68(r17)
    lwzx r21, r3, r20
    add r3, r0, r19
    cmpwi r21, 0x0
    beq lbl_fn_804732DC_00001398
    lwz r0, 0x104(r3)
    cmplwi r0, 0x1
    bne lbl_fn_804732DC_00001344
    mr r3, r21
    bl fn_8008B140
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_00001398
    li r22, 0x1
    b lbl_fn_804732DC_00001398
lbl_fn_804732DC_00001344:
    cmplwi r0, 0x2
    bne lbl_fn_804732DC_00001384
    mr r3, r21
    li r18, 0x0
    bl fn_800D59B8
    cmpwi r3, 0x0
    bne lbl_fn_804732DC_00001370
    addi r3, r21, 0x30
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_00001374
lbl_fn_804732DC_00001370:
    li r18, 0x1
lbl_fn_804732DC_00001374:
    cmpwi r18, 0x0
    beq lbl_fn_804732DC_00001398
    li r22, 0x1
    b lbl_fn_804732DC_00001398
lbl_fn_804732DC_00001384:
    mr r3, r21
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_00001398
    li r22, 0x1
lbl_fn_804732DC_00001398:
    addi r19, r19, 0x138
    addi r20, r20, 0x4
    addi r23, r23, 0x1
lbl_fn_804732DC_000013A4:
    lwz r0, 0x64(r17)
    cmplw r23, r0
    blt lbl_fn_804732DC_00001308
    cmpwi r22, 0x0
    bne lbl_fn_804732DC_00001884
    mr r3, r17
    li r4, 0x3
    bl fn_80473104
    b lbl_fn_804732DC_00001884
lbl_fn_804732DC_000013C8:
    lwz r3, 0x54(r3)
    addi r4, r17, 0x5c
    bl fn_80239030
    cmpwi r3, 0x0
    bne lbl_fn_804732DC_000013F0
    mr r3, r17
    bl fn_80473130
    mr r3, r17
    li r4, 0x4
    bl fn_80473104
lbl_fn_804732DC_000013F0:
    addi r19, r17, 0x6
    stw r19, 0x9c(r17)
    li r0, 0x0
    addi r18, r1, 0x5c
    stw r0, 0x5c(r1)
    mr r3, r19
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl strlen
    mr r20, r3
    mr r3, r18
    mr r4, r20
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r3, r18
    stb r0, 0x18(r1)
    mr r6, r19
    add r7, r19, r20
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r18
    addi r3, r1, 0x80
    bl fn_8006B0C8
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001468
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001468:
    lis r27, lbl_80755CB8@ha
    addi r22, r1, 0x69
    addi r28, r27, lbl_80755CB8@l
    addi r21, r1, 0x75
    addi r20, r1, 0x2d
    addi r25, r1, 0x20
    li r19, 0x0
    li r24, 0x0
    li r23, 0x0
    lis r29, 0x200
    li r30, 0x1
    li r31, 0x0
    b lbl_fn_804732DC_0000185C
lbl_fn_804732DC_0000149C:
    lwz r0, 0x68(r17)
    add r18, r0, r24
    mr r3, r18
    bl fn_8022D754
    addi r3, r1, 0x50
    addi r4, r1, 0x80
    addi r5, r27, lbl_80755CB8@l
    bl fn_8006D008
    mr r5, r18
    addi r3, r1, 0x74
    addi r4, r1, 0x50
    bl fn_8006D008
    lwz r0, 0x50(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_000014E0
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_804732DC_000014E0:
    lwz r0, 0x104(r18)
    cmplwi r0, 0x1
    bne lbl_fn_804732DC_000015E4
    addi r5, r28, 0x2
    li r3, 0x214
    mr r6, r5
    li r4, 0x7
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_804732DC_0000151C
    addi r4, r29, 0x1
    bl fn_8008A4E0
    mr r26, r3
lbl_fn_804732DC_0000151C:
    addi r3, r18, 0x80
    addi r4, r28, 0x2
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_000015B4
    mr r5, r28
    addi r3, r1, 0x44
    addi r4, r1, 0x80
    bl fn_8006D008
    addi r3, r1, 0x68
    addi r4, r1, 0x44
    addi r5, r18, 0x80
    bl fn_8006D008
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001564
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001564:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_00001578
    mr r5, r22
    b lbl_fn_804732DC_0000157C
lbl_fn_804732DC_00001578:
    lwz r5, 0x70(r1)
lbl_fn_804732DC_0000157C:
    lwz r0, 0x74(r1)
    mr r3, r26
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_00001594
    mr r4, r21
    b lbl_fn_804732DC_00001598
lbl_fn_804732DC_00001594:
    lwz r4, 0x7c(r1)
lbl_fn_804732DC_00001598:
    bl fn_8008AD4C
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_000015D8
    lwz r3, 0x70(r1)
    bl dtor_80084684
    b lbl_fn_804732DC_000015D8
lbl_fn_804732DC_000015B4:
    lwz r0, 0x74(r1)
    mr r3, r26
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_000015CC
    mr r4, r21
    b lbl_fn_804732DC_000015D0
lbl_fn_804732DC_000015CC:
    lwz r4, 0x7c(r1)
lbl_fn_804732DC_000015D0:
    li r5, 0x0
    bl fn_8008AD4C
lbl_fn_804732DC_000015D8:
    lwz r3, 0x90(r17)
    stwx r26, r3, r23
    b lbl_fn_804732DC_0000183C
lbl_fn_804732DC_000015E4:
    cmplwi r0, 0x2
    bne lbl_fn_804732DC_00001758
    addi r5, r28, 0x2
    li r3, 0x60
    mr r6, r5
    li r4, 0x7
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_804732DC_0000161C
    bl fn_800D5738
    addi r3, r26, 0x30
    bl fn_800D5738
lbl_fn_804732DC_0000161C:
    mr r3, r18
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_0000164C
    lwz r0, 0x74(r1)
    mr r3, r26
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_00001644
    mr r4, r21
    b lbl_fn_804732DC_00001648
lbl_fn_804732DC_00001644:
    lwz r4, 0x7c(r1)
lbl_fn_804732DC_00001648:
    bl fn_800D5908
lbl_fn_804732DC_0000164C:
    stb r30, 0x2d(r26)
    addi r3, r1, 0x38
    addi r4, r1, 0x80
    addi r5, r27, lbl_80755CB8@l
    stb r30, 0x2e(r26)
    bl fn_8006D008
    addi r3, r1, 0x2c
    addi r4, r1, 0x38
    addi r5, r18, 0x80
    bl fn_8006D008
    lwz r0, 0x74(r1)
    srwi. r3, r0, 31
    bne lbl_fn_804732DC_000016A4
    lwz r4, 0x2c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804732DC_000016A4
    lwz r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r4, 0x74(r1)
    stw r3, 0x78(r1)
    stw r0, 0x7c(r1)
    b lbl_fn_804732DC_000016FC
lbl_fn_804732DC_000016A4:
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_000016B4
    lwz r5, 0x78(r1)
    b lbl_fn_804732DC_000016BC
lbl_fn_804732DC_000016B4:
    lbz r0, 0x74(r1)
    clrlwi r5, r0, 25
lbl_fn_804732DC_000016BC:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_000016D8
    lbz r0, 0x2c(r1)
    mr r6, r20
    clrlwi r4, r0, 25
    b lbl_fn_804732DC_000016E0
lbl_fn_804732DC_000016D8:
    lwz r6, 0x34(r1)
    lwz r4, 0x30(r1)
lbl_fn_804732DC_000016E0:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x74
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804732DC_000016FC:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001710
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001710:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001724
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001724:
    lwz r0, 0x74(r1)
    addi r3, r26, 0x30
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_0000173C
    mr r4, r21
    b lbl_fn_804732DC_00001740
lbl_fn_804732DC_0000173C:
    lwz r4, 0x7c(r1)
lbl_fn_804732DC_00001740:
    bl fn_800D5908
    stb r30, 0x5d(r26)
    stb r30, 0x5e(r26)
    lwz r3, 0x90(r17)
    stwx r26, r3, r23
    b lbl_fn_804732DC_0000183C
lbl_fn_804732DC_00001758:
    mr r3, r18
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_804732DC_00001834
    addi r18, r28, 0x3
    stw r31, 0x20(r1)
    mr r3, r18
    stw r31, 0x24(r1)
    stw r31, 0x28(r1)
    bl strlen
    mr r26, r3
    mr r3, r25
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r25
    stb r0, 0x8(r1)
    mr r6, r18
    add r7, r18, r26
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r25
    addi r3, r1, 0x74
    bl fn_8006AD24
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_000017D4
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_804732DC_000017D4:
    addi r5, r28, 0x2
    li r3, 0x30
    mr r6, r5
    li r4, 0x7
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_804732DC_00001800
    bl fn_800D5738
    mr r18, r3
lbl_fn_804732DC_00001800:
    lwz r0, 0x74(r1)
    mr r3, r18
    srwi. r0, r0, 31
    bne lbl_fn_804732DC_00001818
    mr r4, r21
    b lbl_fn_804732DC_0000181C
lbl_fn_804732DC_00001818:
    lwz r4, 0x7c(r1)
lbl_fn_804732DC_0000181C:
    bl fn_800D5908
    stb r30, 0x2d(r18)
    stb r30, 0x2e(r18)
    lwz r3, 0x90(r17)
    stwx r18, r3, r23
    b lbl_fn_804732DC_0000183C
lbl_fn_804732DC_00001834:
    lwz r3, 0x90(r17)
    stwx r31, r3, r23
lbl_fn_804732DC_0000183C:
    lwz r0, 0x74(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001850
    lwz r3, 0x7c(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001850:
    addi r24, r24, 0x138
    addi r23, r23, 0x4
    addi r19, r19, 0x1
lbl_fn_804732DC_0000185C:
    lwz r0, 0x64(r17)
    cmplw r19, r0
    blt lbl_fn_804732DC_0000149C
    li r0, 0x1
    stw r0, 0xa0(r17)
    lwz r0, 0x80(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804732DC_00001884
    lwz r3, 0x88(r1)
    bl dtor_80084684
lbl_fn_804732DC_00001884:
    lmw r17, 0x94(r1)
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_804738C4(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804738C4_000018AC
    addi r3, r3, 0x5c
    blr
lbl_fn_804738C4_000018AC:
    li r3, 0x0
    blr
}

asm void fn_804738E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_8047392C
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8047392C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r30, 0x0
    beq lbl_fn_8047392C_000019AC
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_8047392C_00001964
lbl_fn_8047392C_00001960:
    lwz r4, 0x4(r4)
lbl_fn_8047392C_00001964:
    cmplw r4, r0
    beq lbl_fn_8047392C_0000197C
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_8047392C_00001960
lbl_fn_8047392C_0000197C:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_8047392C_0000199C
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8047392C_0000199C
    b lbl_fn_8047392C_000019AC
lbl_fn_8047392C_0000199C:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_8047392C_000019AC:
    cmpwi r30, 0x0
    bne lbl_fn_8047392C_00001AC8
    lis r5, lbl_80755CB8@ha
    li r3, 0xa4
    addi r5, r5, lbl_80755CB8@l
    li r4, 0x2
    addi r5, r5, 0x2
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8047392C_00001A0C
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FCD0@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FCD0@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x5c
    li r4, 0x0
    stw r0, 0xa0(r30)
    li r5, 0x44
    bl memset
lbl_fn_8047392C_00001A0C:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_8047392C_00001AAC
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8047392C_00001A58
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8047392C_00001A58:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_8047392C_00001A70
    stw r30, 0x0(r3)
lbl_fn_8047392C_00001A70:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_8047392C_00001AD0
    bl dtor_80084684
    b lbl_fn_8047392C_00001AD0
lbl_fn_8047392C_00001AAC:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_8047392C_00001AD0
lbl_fn_8047392C_00001AC8:
    mr r3, r30
    bl fn_804730D4
lbl_fn_8047392C_00001AD0:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
