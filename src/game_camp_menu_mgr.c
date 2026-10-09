#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800A555C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DBF68(void);
extern void fn_800DFB40(void);
extern void fn_800E0908(void);
extern void fn_80124B60(void);
extern void fn_801F0544(void);
extern void fn_801F64D0(void);
extern void fn_801F6C2C(void);
extern void fn_801F6C38(void);
extern void fn_801F6C80(void);
extern void fn_801F837C(void);
extern void fn_8020924C(void);
extern void fn_8021F3E8(void);
extern void fn_80370320(void);
extern void fn_80370AE4(void);
extern void fn_803B3D2C(void);
extern void fn_803B4338(void);
extern void fn_803B5974(void);
extern void fn_803B82C0(void);
extern void fn_803B834C(void);
extern void fn_803B8758(void);
extern void fn_803B87A8(void);
extern void fn_803E9608(void);
extern void fn_803EB038(void);
extern void fn_803EB234(void);
extern void fn_803EB394(void);
extern void fn_803EB4A8(void);
extern void fn_803EBC04(void);
extern void fn_8046ECDC(void);
extern void fn_80686A48(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8074FD38[];
extern u8 lbl_8074FF58[];
extern u8 lbl_8078B460[];
extern u8 lbl_8078B508[];

/* Small data declarations */
extern u32 lbl_8087DD88;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F468;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F518;
extern u32 lbl_80885C1C;
extern u32 lbl_80885C20;
extern u32 lbl_80885C34;
extern u32 lbl_80885C40;
extern u32 lbl_80885C44;
extern u32 lbl_80885C48;
extern u32 lbl_80885C4C;
extern u32 lbl_80885C50;
extern u32 lbl_80885C54;

/* Function declarations */
void fn_803B612C(void);
void fn_803B6190(void);
void fn_803B6260(void);
void fn_803B62C8(void);
void fn_803B6324(void);
void fn_803B6970(void);
void fn_803B6C88(void);
void fn_803B6E04(void);
void fn_803B710C(void);
void fn_803B78B4(void);
void fn_803B78E8(void);
void fn_803B7944(void);
void fn_803B7A08(void);
void fn_803B7A60(void);

asm void fn_803B612C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803B612C_0000004C
    lis r5, lbl_8074FD38@ha
    li r3, 0x1c0
    addi r5, r5, lbl_8074FD38@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803B612C_00000050
    mr r4, r31
    bl fn_803B6190
    b lbl_fn_803B612C_00000050
lbl_fn_803B612C_0000004C:
    li r3, 0x0
lbl_fn_803B612C_00000050:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B6190(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D1D3C
    lfs f0, lbl_80885C20
    lis r3, lbl_8078B460@ha
    li r31, 0x0
    li r0, 0xf
    addi r3, r3, lbl_8078B460@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x6c
    stw r31, 0x48(r30)
    stw r31, 0x4c(r30)
    stw r31, 0x50(r30)
    stw r31, 0x54(r30)
    stw r31, 0x58(r30)
    stw r31, 0x5c(r30)
    stfs f0, 0x60(r30)
    stw r0, 0x64(r30)
    stfs f0, 0x68(r30)
    bl fn_800CB360
    stb r31, 0x70(r30)
    mr r3, r30
    lwz r4, lbl_80885C1C
    stb r31, 0x71(r30)
    stw r31, 0x74(r30)
    stw r31, 0x78(r30)
    stw r31, 0x7c(r30)
    stw r31, 0x80(r30)
    stw r31, 0x84(r30)
    stw r31, 0x88(r30)
    stb r31, 0x8c(r30)
    stw r31, 0xac(r30)
    stw r31, 0xb0(r30)
    stw r31, 0xb4(r30)
    stw r31, 0x1b8(r30)
    bl fn_801F64D0
    stw r3, 0x48(r30)
    li r4, 0x1
    stb r31, 0x4d(r3)
    lwz r3, 0x48(r30)
    bl fn_800D246C
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B6260(void)
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
    beq lbl_fn_803B6260_00000180
    li r4, -0x1
    addi r3, r3, 0x6c
    bl fn_800CB3A0
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B6260_00000180
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B6260_00000180:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B62C8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803B62C8_000001E0
    lwz r3, 0x48(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r4, 0x48(r31)
    li r3, 0x1
    lwz r0, 0x38(r4)
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    b lbl_fn_803B62C8_000001E4
lbl_fn_803B62C8_000001E0:
    li r3, 0x0
lbl_fn_803B62C8_000001E4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B6324(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087F430
    mr r31, r3
    cmpwi r4, 0x0
    beq lbl_fn_803B6324_00000244
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    bne lbl_fn_803B6324_00000244
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_00000244:
    lbz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_00000338
    lwz r3, 0x50(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_803B6324_00000338
    lwz r3, lbl_8087F0A8
    li r30, 0x0
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002D8
    lwz r3, lbl_8087F430
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002D8
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002D8
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002D8
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_000002B4
    lwz r3, 0x90(r3)
    b lbl_fn_803B6324_000002B8
lbl_fn_803B6324_000002B4:
    li r3, 0x0
lbl_fn_803B6324_000002B8:
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002D8
    lwz r0, 0x0(r3)
    cmplwi r0, 0x5c
    beq lbl_fn_803B6324_000002D4
    cmplwi r0, 0x61
    bne lbl_fn_803B6324_000002D8
lbl_fn_803B6324_000002D4:
    li r30, 0x0
lbl_fn_803B6324_000002D8:
    cmpwi r30, 0x0
    bne lbl_fn_803B6324_00000338
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000002F4
    lwz r3, 0x263c(r3)
    b lbl_fn_803B6324_000002F8
lbl_fn_803B6324_000002F4:
    li r3, 0x0
lbl_fn_803B6324_000002F8:
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000338
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_803B6324_0000031C
    cmpwi r4, 0x4
    beq lbl_fn_803B6324_0000031C
    li r0, 0x0
lbl_fn_803B6324_0000031C:
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_00000338
    li r0, 0x3
    stw r0, 0x50(r3)
    lfs f0, lbl_80885C40
    lwz r3, 0x48(r3)
    stfs f0, 0x54(r3)
lbl_fn_803B6324_00000338:
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_803B6324_00000358
    cmpwi r0, 0x3
    beq lbl_fn_803B6324_00000668
    cmpwi r0, 0x2
    beq lbl_fn_803B6324_00000740
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_00000358:
    lwz r3, 0x54(r31)
    cmpwi r3, 0x0
    ble lbl_fn_803B6324_00000570
    subic. r0, r3, 0x1
    stw r0, 0x54(r31)
    bgt lbl_fn_803B6324_00000570
    lwz r27, 0x4c(r31)
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    cmpwi r27, 0x0
    beq lbl_fn_803B6324_0000039C
    addi r3, r27, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_0000039C
    li r28, 0x1
lbl_fn_803B6324_0000039C:
    cmpwi r28, 0x0
    beq lbl_fn_803B6324_000003B4
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_000003B4
    li r29, 0x1
lbl_fn_803B6324_000003B4:
    cmpwi r29, 0x0
    beq lbl_fn_803B6324_000003D4
    lwz r3, lbl_8087F498
    addi r4, r27, 0x10
    bl fn_803EBC04
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000003D4
    li r30, 0x1
lbl_fn_803B6324_000003D4:
    cmpwi r30, 0x0
    beq lbl_fn_803B6324_0000040C
    lwz r3, lbl_8087F498
    bl fn_803EB234
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_0000040C
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x5a
    bge lbl_fn_803B6324_0000040C
    addi r0, r3, 0x1
    li r3, 0x1
    stw r3, 0x54(r31)
    stw r0, 0x5c(r31)
    b lbl_fn_803B6324_00000570
lbl_fn_803B6324_0000040C:
    lwz r0, 0x5c(r31)
    cmpwi r0, 0x5a
    blt lbl_fn_803B6324_00000430
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000430
    lwz r4, 0x4c(r31)
    addi r4, r4, 0x10
    bl fn_803EB394
lbl_fn_803B6324_00000430:
    lwz r3, 0x48(r31)
    li r0, 0x0
    lfs f0, lbl_80885C20
    stfs f0, 0x50(r3)
    lfs f0, lbl_80885C34
    lwz r3, 0x48(r31)
    stfs f0, 0x54(r3)
    lwz r4, 0x48(r31)
    lwz r3, 0x38(r4)
    rlwinm r3, r3, 0, 30, 28
    stw r3, 0x38(r4)
    stb r0, 0x70(r31)
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_00000570
    lwz r3, lbl_8087F0A8
    li r30, 0x0
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000004E4
    lwz r3, lbl_8087F430
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000004E4
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000004E4
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000004E4
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_000004C0
    lwz r3, 0x90(r3)
    b lbl_fn_803B6324_000004C4
lbl_fn_803B6324_000004C0:
    li r3, 0x0
lbl_fn_803B6324_000004C4:
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000004E4
    lwz r0, 0x0(r3)
    cmplwi r0, 0x5c
    beq lbl_fn_803B6324_000004E0
    cmplwi r0, 0x61
    bne lbl_fn_803B6324_000004E4
lbl_fn_803B6324_000004E0:
    li r30, 0x0
lbl_fn_803B6324_000004E4:
    cmpwi r30, 0x0
    beq lbl_fn_803B6324_00000570
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000570
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_803B6324_00000518
    cmpwi r4, 0x4
    beq lbl_fn_803B6324_00000518
    li r0, 0x0
lbl_fn_803B6324_00000518:
    cmpwi r0, 0x0
    bne lbl_fn_803B6324_00000570
    li r5, 0x1
    la r4, lbl_8087F468
    stb r5, 0x70(r31)
    addi r0, r31, 0x7c
    lwz r6, 0x58(r31)
    stw r4, 0x84(r31)
    lfs f1, lbl_80885C20
    stw r0, 0x4c(r3)
    lfs f0, lbl_80885C44
    stw r5, 0x50(r3)
    lwz r4, 0x48(r3)
    stfs f1, 0x50(r4)
    lwz r4, 0x48(r3)
    stfs f0, 0x54(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    stw r6, 0x58(r3)
    bl fn_803B5974
lbl_fn_803B6324_00000570:
    lwz r3, 0x48(r31)
    lfs f31, 0x50(r3)
    bl fn_801F6C2C
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_803B6324_00000824
    lwz r0, 0x5c(r31)
    li r3, 0x2
    stw r3, 0x50(r31)
    cmpwi r0, 0x5a
    bge lbl_fn_803B6324_00000824
    lwz r27, 0x4c(r31)
    li r28, 0x0
    li r29, 0x0
    li r30, 0x0
    cmpwi r27, 0x0
    beq lbl_fn_803B6324_000005C8
    addi r3, r27, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000005C8
    li r30, 0x1
lbl_fn_803B6324_000005C8:
    cmpwi r30, 0x0
    beq lbl_fn_803B6324_000005E0
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_000005E0
    li r29, 0x1
lbl_fn_803B6324_000005E0:
    cmpwi r29, 0x0
    beq lbl_fn_803B6324_00000600
    lwz r3, lbl_8087F498
    addi r4, r27, 0x10
    bl fn_803EBC04
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000600
    li r28, 0x1
lbl_fn_803B6324_00000600:
    cmpwi r28, 0x0
    beq lbl_fn_803B6324_00000824
    addi r3, r31, 0x6c
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, lbl_8087F0A8
    lfs f1, lbl_80885C34
    lwz r0, 0x174(r3)
    cmpwi r0, 0x2
    blt lbl_fn_803B6324_00000630
    lfs f1, lbl_80885C20
lbl_fn_803B6324_00000630:
    lwz r5, 0x4c(r31)
    addi r3, r1, 0x8
    lwz r4, lbl_8087F498
    li r6, 0x0
    addi r5, r5, 0x10
    li r7, 0x1
    bl fn_803E9608
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_00000668:
    lwz r6, 0x48(r31)
    lfs f0, lbl_80885C34
    lfs f1, 0x50(r6)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803B6324_00000824
    lwz r0, 0xb4(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803B6324_00000704
    li r30, 0x0
    stw r30, 0x50(r31)
    addi r3, r31, 0x6c
    li r4, 0xf
    lwz r0, 0x38(r6)
    li r5, 0x0
    ori r0, r0, 0x4
    stw r0, 0x38(r6)
    bl fn_800CB5C8
    lbz r0, 0x71(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_00000824
    stb r30, 0x71(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000824
    lwz r0, 0x74(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803B6324_000006E8
    lwz r4, 0x78(r31)
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_000006E8:
    cmpwi r0, 0x1
    bne lbl_fn_803B6324_00000824
    lwz r4, 0x78(r31)
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_00000704:
    lwz r6, 0x1b8(r31)
    mr r3, r31
    lwz r4, 0xb4(r31)
    li r5, 0x0
    slwi r0, r6, 2
    addi r6, r6, 0x1
    add r7, r31, r0
    lfs f1, 0x60(r31)
    subi r0, r4, 0x1
    lwz r4, 0xb8(r7)
    clrlwi r6, r6, 26
    stw r6, 0x1b8(r31)
    stw r0, 0xb4(r31)
    bl fn_803B6970
    b lbl_fn_803B6324_00000824
lbl_fn_803B6324_00000740:
    lwz r0, 0x58(r31)
    cmpwi r0, 0x0
    ble lbl_fn_803B6324_00000764
    subic. r0, r0, 0x1
    stw r0, 0x58(r31)
    bne lbl_fn_803B6324_00000764
    mr r3, r31
    li r4, 0x0
    bl fn_803B6C88
lbl_fn_803B6324_00000764:
    lwz r3, lbl_8087F0A8
    li r30, 0x0
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000007DC
    lwz r3, lbl_8087F430
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000007DC
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000007DC
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000007DC
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6324_000007B8
    lwz r3, 0x90(r3)
    b lbl_fn_803B6324_000007BC
lbl_fn_803B6324_000007B8:
    li r3, 0x0
lbl_fn_803B6324_000007BC:
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_000007DC
    lwz r0, 0x0(r3)
    cmplwi r0, 0x5c
    beq lbl_fn_803B6324_000007D8
    cmplwi r0, 0x61
    bne lbl_fn_803B6324_000007DC
lbl_fn_803B6324_000007D8:
    li r30, 0x0
lbl_fn_803B6324_000007DC:
    cmpwi r30, 0x0
    beq lbl_fn_803B6324_00000824
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B6324_00000824
    lfs f1, lbl_80885C50
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_803B4338
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    mr r3, r31
    li r4, 0x0
    bl fn_803B6C88
lbl_fn_803B6324_00000824:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803B6970(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x50(r3)
    mr r31, r3
    li r6, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_803B6970_0000087C
    lfs f0, 0x60(r3)
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_803B6970_00000880
lbl_fn_803B6970_0000087C:
    li r6, 0x1
lbl_fn_803B6970_00000880:
    cmpwi r6, 0x0
    beq lbl_fn_803B6970_00000B44
    li r0, 0x1
    stw r0, 0x50(r3)
    stw r4, 0x4c(r3)
    lwz r0, 0x30(r4)
    stw r0, 0x54(r3)
    stw r5, 0x58(r3)
    stfs f1, 0x60(r3)
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    ble lbl_fn_803B6970_000008B4
    stw r0, 0x58(r3)
lbl_fn_803B6970_000008B4:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6970_000008F8
    lwz r3, 0x4c(r3)
    addi r28, r3, 0x10
    mr r3, r28
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_000008F8
    mr r3, r28
    bl fn_8021F3E8
    cmpwi r3, 0x0
    ble lbl_fn_803B6970_000008F0
    stw r3, 0x58(r31)
    b lbl_fn_803B6970_000008F8
lbl_fn_803B6970_000008F0:
    li r0, 0x96
    stw r0, 0x58(r31)
lbl_fn_803B6970_000008F8:
    lwz r27, 0x4c(r31)
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    cmpwi r27, 0x0
    beq lbl_fn_803B6970_00000924
    addi r3, r27, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000924
    li r28, 0x1
lbl_fn_803B6970_00000924:
    cmpwi r28, 0x0
    beq lbl_fn_803B6970_0000093C
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_803B6970_0000093C
    li r29, 0x1
lbl_fn_803B6970_0000093C:
    cmpwi r29, 0x0
    beq lbl_fn_803B6970_0000095C
    lwz r3, lbl_8087F498
    addi r4, r27, 0x10
    bl fn_803EBC04
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_0000095C
    li r30, 0x1
lbl_fn_803B6970_0000095C:
    cmpwi r30, 0x0
    beq lbl_fn_803B6970_000009CC
    lwz r0, 0x6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B6970_0000098C
    addi r3, r31, 0x6c
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x54(r31)
    addi r0, r3, 0xa
    stw r0, 0x54(r31)
lbl_fn_803B6970_0000098C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6970_000009A0
    li r0, 0x1
    stw r0, 0x54(r31)
lbl_fn_803B6970_000009A0:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_000009CC
    li r4, 0x0
    li r5, 0x1
    bl fn_803EB4A8
    lwz r4, 0x4c(r31)
    li r5, 0x0
    lwz r3, lbl_8087F498
    addi r4, r4, 0x10
    bl fn_803EB038
lbl_fn_803B6970_000009CC:
    li r30, 0x0
    stw r30, 0x5c(r31)
    mr r3, r31
    bl fn_803B710C
    lwz r3, 0x48(r31)
    lfs f1, lbl_80885C20
    stfs f1, 0x50(r3)
    lwz r3, 0x48(r31)
    stfs f1, 0x54(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6970_00000B44
    lwz r3, 0x48(r31)
    lfs f0, lbl_80885C34
    stfs f1, 0x50(r3)
    lwz r3, 0x48(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    stb r30, 0x70(r31)
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_803B6970_00000B44
    lwz r3, lbl_8087F0A8
    li r30, 0x0
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000AB8
    lwz r3, lbl_8087F430
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000AB8
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000AB8
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000AB8
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6970_00000A94
    lwz r3, 0x90(r3)
    b lbl_fn_803B6970_00000A98
lbl_fn_803B6970_00000A94:
    li r3, 0x0
lbl_fn_803B6970_00000A98:
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000AB8
    lwz r0, 0x0(r3)
    cmplwi r0, 0x5c
    beq lbl_fn_803B6970_00000AB4
    cmplwi r0, 0x61
    bne lbl_fn_803B6970_00000AB8
lbl_fn_803B6970_00000AB4:
    li r30, 0x0
lbl_fn_803B6970_00000AB8:
    cmpwi r30, 0x0
    beq lbl_fn_803B6970_00000B44
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6970_00000B44
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_803B6970_00000AEC
    cmpwi r4, 0x4
    beq lbl_fn_803B6970_00000AEC
    li r0, 0x0
lbl_fn_803B6970_00000AEC:
    cmpwi r0, 0x0
    bne lbl_fn_803B6970_00000B44
    li r5, 0x1
    la r4, lbl_8087F468
    stb r5, 0x70(r31)
    addi r0, r31, 0x7c
    lwz r6, 0x58(r31)
    stw r4, 0x84(r31)
    lfs f1, lbl_80885C20
    stw r0, 0x4c(r3)
    lfs f0, lbl_80885C44
    stw r5, 0x50(r3)
    lwz r4, 0x48(r3)
    stfs f1, 0x50(r4)
    lwz r4, 0x48(r3)
    stfs f0, 0x54(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    stw r6, 0x58(r3)
    bl fn_803B5974
lbl_fn_803B6970_00000B44:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B6C88(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_803B6C88_00000B9C
    li r0, 0x3
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lfs f0, lbl_80885C54
    stfs f0, 0x54(r3)
    b lbl_fn_803B6C88_00000C3C
lbl_fn_803B6C88_00000B9C:
    li r30, 0x0
    stw r30, 0x50(r3)
    lwz r6, 0x48(r3)
    li r4, 0xf
    lfs f0, lbl_80885C20
    li r5, 0x0
    stfs f0, 0x50(r6)
    lwz r6, 0x48(r3)
    stfs f0, 0x54(r6)
    lwz r6, 0x48(r3)
    lwz r0, 0x38(r6)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r6)
    stw r30, 0xb4(r3)
    lwz r6, 0x48(r3)
    addi r3, r3, 0x6c
    lwz r0, 0x38(r6)
    ori r0, r0, 0x4
    stw r0, 0x38(r6)
    bl fn_800CB5C8
    lbz r0, 0x71(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803B6C88_00000C3C
    stb r30, 0x71(r29)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803B6C88_00000C3C
    lwz r0, 0x74(r29)
    cmpwi r0, 0x0
    bne lbl_fn_803B6C88_00000C24
    lwz r4, 0x78(r29)
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_803B6C88_00000C3C
lbl_fn_803B6C88_00000C24:
    cmpwi r0, 0x1
    bne lbl_fn_803B6C88_00000C3C
    lwz r4, 0x78(r29)
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_803B6C88_00000C3C:
    lbz r0, 0x70(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803B6C88_00000CBC
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803B6C88_00000CBC
    lwz r3, 0x263c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6C88_00000CBC
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_803B6C88_00000C7C
    cmpwi r4, 0x4
    beq lbl_fn_803B6C88_00000C7C
    li r0, 0x0
lbl_fn_803B6C88_00000C7C:
    cmpwi r0, 0x0
    beq lbl_fn_803B6C88_00000CBC
    cmpwi r31, 0x0
    bne lbl_fn_803B6C88_00000CA4
    li r0, 0x3
    stw r0, 0x50(r3)
    lfs f0, lbl_80885C40
    lwz r3, 0x48(r3)
    stfs f0, 0x54(r3)
    b lbl_fn_803B6C88_00000CBC
lbl_fn_803B6C88_00000CA4:
    li r0, 0x0
    stw r0, 0x50(r3)
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803B6C88_00000CBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B6E04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lwz r0, 0x50(r3)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803B6E04_00000D08
    lfs f0, 0x60(r3)
    fcmpo cr0, f0, f1
    blt lbl_fn_803B6E04_00000FC8
lbl_fn_803B6E04_00000D08:
    stw r4, 0x4c(r3)
    stw r5, 0x58(r3)
    lwz r0, 0x30(r4)
    stw r0, 0x54(r3)
    stfs f1, 0x60(r3)
    lwz r0, 0x34(r4)
    cmpwi r0, 0x0
    ble lbl_fn_803B6E04_00000D2C
    stw r0, 0x58(r3)
lbl_fn_803B6E04_00000D2C:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6E04_00000D70
    lwz r3, 0x4c(r3)
    addi r28, r3, 0x10
    mr r3, r28
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000D70
    mr r3, r28
    bl fn_8021F3E8
    cmpwi r3, 0x0
    ble lbl_fn_803B6E04_00000D68
    stw r3, 0x58(r31)
    b lbl_fn_803B6E04_00000D70
lbl_fn_803B6E04_00000D68:
    li r0, 0x96
    stw r0, 0x58(r31)
lbl_fn_803B6E04_00000D70:
    lwz r27, 0x4c(r31)
    li r30, 0x0
    li r29, 0x0
    li r28, 0x0
    cmpwi r27, 0x0
    beq lbl_fn_803B6E04_00000D9C
    addi r3, r27, 0x10
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000D9C
    li r28, 0x1
lbl_fn_803B6E04_00000D9C:
    cmpwi r28, 0x0
    beq lbl_fn_803B6E04_00000DB4
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    beq lbl_fn_803B6E04_00000DB4
    li r29, 0x1
lbl_fn_803B6E04_00000DB4:
    cmpwi r29, 0x0
    beq lbl_fn_803B6E04_00000DD4
    lwz r3, lbl_8087F498
    addi r4, r27, 0x10
    bl fn_803EBC04
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000DD4
    li r30, 0x1
lbl_fn_803B6E04_00000DD4:
    cmpwi r30, 0x0
    beq lbl_fn_803B6E04_00000E44
    lwz r0, 0x6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B6E04_00000E04
    addi r3, r31, 0x6c
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x54(r31)
    addi r0, r3, 0xa
    stw r0, 0x54(r31)
lbl_fn_803B6E04_00000E04:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6E04_00000E18
    li r0, 0x1
    stw r0, 0x54(r31)
lbl_fn_803B6E04_00000E18:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000E44
    li r4, 0x0
    li r5, 0x0
    bl fn_803EB4A8
    lwz r4, 0x4c(r31)
    li r5, 0x0
    lwz r3, lbl_8087F498
    addi r4, r4, 0x10
    bl fn_803EB038
lbl_fn_803B6E04_00000E44:
    li r30, 0x0
    stw r30, 0x5c(r31)
    lwz r4, 0x48(r31)
    li r0, 0x1
    lfs f0, lbl_80885C20
    mr r3, r31
    stfs f0, 0x50(r4)
    lwz r4, 0x48(r31)
    stfs f0, 0x54(r4)
    lwz r5, 0x48(r31)
    lwz r4, 0x38(r5)
    rlwinm r4, r4, 0, 30, 28
    stw r4, 0x38(r5)
    stw r0, 0x50(r31)
    bl fn_803B710C
    lwz r0, 0x54(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803B6E04_00000FC8
    lwz r3, 0x48(r31)
    lfs f0, lbl_80885C20
    stfs f0, 0x50(r3)
    lfs f0, lbl_80885C34
    lwz r3, 0x48(r31)
    stfs f0, 0x54(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    stb r30, 0x70(r31)
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_803B6E04_00000FC8
    lwz r3, lbl_8087F0A8
    li r30, 0x0
    addi r3, r3, 0x48c
    bl fn_80124B60
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000F3C
    lwz r3, lbl_8087F430
    li r30, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000F3C
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000F3C
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000F3C
    lwz r0, 0x8c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B6E04_00000F18
    lwz r3, 0x90(r3)
    b lbl_fn_803B6E04_00000F1C
lbl_fn_803B6E04_00000F18:
    li r3, 0x0
lbl_fn_803B6E04_00000F1C:
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000F3C
    lwz r0, 0x0(r3)
    cmplwi r0, 0x5c
    beq lbl_fn_803B6E04_00000F38
    cmplwi r0, 0x61
    bne lbl_fn_803B6E04_00000F3C
lbl_fn_803B6E04_00000F38:
    li r30, 0x0
lbl_fn_803B6E04_00000F3C:
    cmpwi r30, 0x0
    beq lbl_fn_803B6E04_00000FC8
    lwz r3, lbl_8087F490
    lwz r3, 0x263c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803B6E04_00000FC8
    lwz r4, 0x50(r3)
    li r0, 0x1
    cmpwi r4, 0x2
    beq lbl_fn_803B6E04_00000F70
    cmpwi r4, 0x4
    beq lbl_fn_803B6E04_00000F70
    li r0, 0x0
lbl_fn_803B6E04_00000F70:
    cmpwi r0, 0x0
    bne lbl_fn_803B6E04_00000FC8
    li r5, 0x1
    la r4, lbl_8087F468
    stb r5, 0x70(r31)
    addi r0, r31, 0x7c
    lwz r6, 0x58(r31)
    stw r4, 0x84(r31)
    lfs f1, lbl_80885C20
    stw r0, 0x4c(r3)
    lfs f0, lbl_80885C44
    stw r5, 0x50(r3)
    lwz r4, 0x48(r3)
    stfs f1, 0x50(r4)
    lwz r4, 0x48(r3)
    stfs f0, 0x54(r4)
    lwz r4, 0x48(r3)
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r4)
    stw r6, 0x58(r3)
    bl fn_803B5974
lbl_fn_803B6E04_00000FC8:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B710C(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lis r4, lbl_8074FD38@ha
    stw r0, 0xc4(r1)
    addi r4, r4, lbl_8074FD38@l
    addi r4, r4, 0x12f
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    lfs f31, lbl_80885C48
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    lfs f30, lbl_80885C4C
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    mr r29, r3
    stw r28, 0x90(r1)
    lwz r3, 0x48(r3)
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_00001044
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    fmr f31, f1
lbl_fn_803B710C_00001044:
    lis r4, lbl_8074FD38@ha
    lwz r3, 0x48(r29)
    addi r4, r4, lbl_8074FD38@l
    addi r4, r4, 0x139
    bl fn_801F6C38
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_00001070
    li r4, 0x0
    addi r3, r3, 0x4
    bl fn_801F0544
    fmr f30, f1
lbl_fn_803B710C_00001070:
    lwz r3, 0x4c(r29)
    li r0, 0x0
    addi r31, r1, 0x84
    lwz r30, 0x8(r3)
    stw r0, 0x84(r1)
    mr r3, r30
    stw r0, 0x88(r1)
    stw r0, 0x8c(r1)
    bl fn_80686A48
    mr r28, r3
    mr r3, r31
    mr r4, r28
    bl fn_800DBF68
    lbz r3, 0x2c(r1)
    slwi r0, r28, 1
    stb r3, 0x28(r1)
    mr r3, r31
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r3, r31
    bl fn_803B3D2C
    lwz r0, 0x84(r1)
    addi r3, r1, 0x54
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_000010EC
    addi r4, r1, 0x86
    b lbl_fn_803B710C_000010F0
lbl_fn_803B710C_000010EC:
    lwz r4, 0x8c(r1)
lbl_fn_803B710C_000010F0:
    fmr f1, f31
    lfs f3, lbl_80885C20
    fmr f2, f30
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800DFB40
    lwz r0, 0x84(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B710C_00001140
    lwz r4, 0x54(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B710C_00001140
    lwz r3, 0x58(r1)
    lwz r0, 0x5c(r1)
    stw r4, 0x84(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    b lbl_fn_803B710C_0000119C
lbl_fn_803B710C_00001140:
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_00001150
    lwz r5, 0x88(r1)
    b lbl_fn_803B710C_00001158
lbl_fn_803B710C_00001150:
    lbz r0, 0x84(r1)
    clrlwi r5, r0, 25
lbl_fn_803B710C_00001158:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_00001174
    lbz r0, 0x54(r1)
    addi r6, r1, 0x56
    clrlwi r0, r0, 25
    b lbl_fn_803B710C_0000117C
lbl_fn_803B710C_00001174:
    lwz r6, 0x5c(r1)
    lwz r0, 0x58(r1)
lbl_fn_803B710C_0000117C:
    lbz r3, 0x24(r1)
    slwi r0, r0, 1
    stb r3, 0x20(r1)
    addi r3, r1, 0x84
    add r7, r6, r0
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B710C_0000119C:
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_000011B0
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_803B710C_000011B0:
    lwz r0, 0x84(r1)
    li r3, 0x0
    stw r3, 0x78(r1)
    srwi. r0, r0, 31
    stw r3, 0x7c(r1)
    stw r3, 0x80(r1)
    stw r3, 0x6c(r1)
    stw r3, 0x70(r1)
    stw r3, 0x74(r1)
    stw r3, 0x60(r1)
    stw r3, 0x64(r1)
    stw r3, 0x68(r1)
    bne lbl_fn_803B710C_000011F4
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r0, r0, 25
    b lbl_fn_803B710C_000011FC
lbl_fn_803B710C_000011F4:
    lwz r5, 0x8c(r1)
    lwz r0, 0x88(r1)
lbl_fn_803B710C_000011FC:
    cmpwi r0, 0x0
    beq lbl_fn_803B710C_00001250
    slwi r0, r0, 1
    mr r3, r5
    add r4, r5, r0
    addi r0, r4, 0x1
    subf r0, r5, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_803B710C_00001250
lbl_fn_803B710C_00001228:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B710C_00001248
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r31, r0, 1
    b lbl_fn_803B710C_00001254
lbl_fn_803B710C_00001248:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B710C_00001228
lbl_fn_803B710C_00001250:
    li r31, -0x1
lbl_fn_803B710C_00001254:
    mr r6, r31
    addi r3, r1, 0x48
    addi r4, r1, 0x84
    li r5, 0x0
    bl fn_800E0908
    lwz r0, 0x78(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B710C_00001298
    lwz r4, 0x48(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B710C_00001298
    lwz r3, 0x4c(r1)
    lwz r0, 0x50(r1)
    stw r4, 0x78(r1)
    stw r3, 0x7c(r1)
    stw r0, 0x80(r1)
    b lbl_fn_803B710C_000012F4
lbl_fn_803B710C_00001298:
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_000012A8
    lwz r5, 0x7c(r1)
    b lbl_fn_803B710C_000012B0
lbl_fn_803B710C_000012A8:
    lbz r0, 0x78(r1)
    clrlwi r5, r0, 25
lbl_fn_803B710C_000012B0:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_000012CC
    lbz r0, 0x48(r1)
    addi r6, r1, 0x4a
    clrlwi r0, r0, 25
    b lbl_fn_803B710C_000012D4
lbl_fn_803B710C_000012CC:
    lwz r6, 0x50(r1)
    lwz r0, 0x4c(r1)
lbl_fn_803B710C_000012D4:
    lbz r3, 0x1c(r1)
    slwi r0, r0, 1
    stb r3, 0x18(r1)
    addi r3, r1, 0x78
    add r7, r6, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B710C_000012F4:
    lwz r0, 0x48(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_00001308
    lwz r3, 0x50(r1)
    bl dtor_80084684
lbl_fn_803B710C_00001308:
    addis r0, r31, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_803B710C_00001590
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_00001330
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r3, r0, 25
    b lbl_fn_803B710C_00001338
lbl_fn_803B710C_00001330:
    lwz r5, 0x8c(r1)
    lwz r3, 0x88(r1)
lbl_fn_803B710C_00001338:
    addi r0, r31, 0x1
    cmplw r0, r3
    bge lbl_fn_803B710C_00001394
    slwi r3, r3, 1
    slwi r0, r0, 1
    add r4, r5, r3
    add r3, r5, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_803B710C_00001394
lbl_fn_803B710C_0000136C:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B710C_0000138C
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r30, r0, 1
    b lbl_fn_803B710C_00001398
lbl_fn_803B710C_0000138C:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B710C_0000136C
lbl_fn_803B710C_00001394:
    li r30, -0x1
lbl_fn_803B710C_00001398:
    addi r5, r31, 0x1
    addi r3, r1, 0x3c
    addi r4, r1, 0x84
    subf r6, r5, r30
    bl fn_800E0908
    lwz r0, 0x6c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B710C_000013DC
    lwz r4, 0x3c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B710C_000013DC
    lwz r3, 0x40(r1)
    lwz r0, 0x44(r1)
    stw r4, 0x6c(r1)
    stw r3, 0x70(r1)
    stw r0, 0x74(r1)
    b lbl_fn_803B710C_00001438
lbl_fn_803B710C_000013DC:
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_000013EC
    lwz r5, 0x70(r1)
    b lbl_fn_803B710C_000013F4
lbl_fn_803B710C_000013EC:
    lbz r0, 0x6c(r1)
    clrlwi r5, r0, 25
lbl_fn_803B710C_000013F4:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_00001410
    lbz r0, 0x3c(r1)
    addi r6, r1, 0x3e
    clrlwi r0, r0, 25
    b lbl_fn_803B710C_00001418
lbl_fn_803B710C_00001410:
    lwz r6, 0x44(r1)
    lwz r0, 0x40(r1)
lbl_fn_803B710C_00001418:
    lbz r3, 0x14(r1)
    slwi r0, r0, 1
    stb r3, 0x10(r1)
    addi r3, r1, 0x6c
    add r7, r6, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B710C_00001438:
    lwz r0, 0x3c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_0000144C
    lwz r3, 0x44(r1)
    bl dtor_80084684
lbl_fn_803B710C_0000144C:
    addis r0, r30, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_803B710C_00001590
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_00001474
    lbz r0, 0x84(r1)
    addi r5, r1, 0x86
    clrlwi r3, r0, 25
    b lbl_fn_803B710C_0000147C
lbl_fn_803B710C_00001474:
    lwz r5, 0x8c(r1)
    lwz r3, 0x88(r1)
lbl_fn_803B710C_0000147C:
    addi r0, r30, 0x1
    cmplw r0, r3
    bge lbl_fn_803B710C_000014D8
    slwi r3, r3, 1
    slwi r0, r0, 1
    add r4, r5, r3
    add r3, r5, r0
    addi r0, r4, 0x1
    subf r0, r3, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_803B710C_000014D8
lbl_fn_803B710C_000014B0:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xa
    bne lbl_fn_803B710C_000014D0
    subf r3, r5, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    b lbl_fn_803B710C_000014DC
lbl_fn_803B710C_000014D0:
    addi r3, r3, 0x2
    bdnz lbl_fn_803B710C_000014B0
lbl_fn_803B710C_000014D8:
    li r0, -0x1
lbl_fn_803B710C_000014DC:
    addi r5, r30, 0x1
    addi r3, r1, 0x30
    addi r4, r1, 0x84
    subf r6, r5, r0
    bl fn_800E0908
    lwz r0, 0x60(r1)
    srwi. r3, r0, 31
    bne lbl_fn_803B710C_00001520
    lwz r4, 0x30(r1)
    srwi. r0, r4, 31
    bne lbl_fn_803B710C_00001520
    lwz r3, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r0, 0x68(r1)
    b lbl_fn_803B710C_0000157C
lbl_fn_803B710C_00001520:
    cmpwi r3, 0x0
    beq lbl_fn_803B710C_00001530
    lwz r5, 0x64(r1)
    b lbl_fn_803B710C_00001538
lbl_fn_803B710C_00001530:
    lbz r0, 0x60(r1)
    clrlwi r5, r0, 25
lbl_fn_803B710C_00001538:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_00001554
    lbz r0, 0x30(r1)
    addi r6, r1, 0x32
    clrlwi r0, r0, 25
    b lbl_fn_803B710C_0000155C
lbl_fn_803B710C_00001554:
    lwz r6, 0x38(r1)
    lwz r0, 0x34(r1)
lbl_fn_803B710C_0000155C:
    lbz r3, 0xc(r1)
    slwi r0, r0, 1
    stb r3, 0x8(r1)
    addi r3, r1, 0x60
    add r7, r6, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_803B710C_0000157C:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_00001590
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_803B710C_00001590:
    lwz r3, 0x4c(r29)
    lwz r3, 0xc(r3)
    bl fn_8020924C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803B710C_00001660
    lwz r3, 0x4c(r29)
    lwz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B710C_00001660
    lis r30, lbl_8074FD38@ha
    lwz r3, 0x48(r29)
    addi r30, r30, lbl_8074FD38@l
    lfs f1, lbl_80885C34
    addi r4, r30, 0x14f
    bl fn_801F6C80
    lwz r3, 0x48(r29)
    addi r4, r30, 0x158
    lwz r5, 0x4(r31)
    bl fn_801F837C
    lwz r0, 0x78(r1)
    addi r4, r30, 0x161
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_000015FC
    addi r5, r1, 0x7a
    b lbl_fn_803B710C_00001600
lbl_fn_803B710C_000015FC:
    lwz r5, 0x80(r1)
lbl_fn_803B710C_00001600:
    bl fn_801F837C
    lwz r0, 0x6c(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x16e
    bne lbl_fn_803B710C_00001628
    addi r5, r1, 0x6e
    b lbl_fn_803B710C_0000162C
lbl_fn_803B710C_00001628:
    lwz r5, 0x74(r1)
lbl_fn_803B710C_0000162C:
    bl fn_801F837C
    lwz r0, 0x60(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x17b
    bne lbl_fn_803B710C_00001654
    addi r5, r1, 0x62
    b lbl_fn_803B710C_00001658
lbl_fn_803B710C_00001654:
    lwz r5, 0x68(r1)
lbl_fn_803B710C_00001658:
    bl fn_801F837C
    b lbl_fn_803B710C_00001708
lbl_fn_803B710C_00001660:
    lis r30, lbl_8074FD38@ha
    lwz r3, 0x48(r29)
    addi r30, r30, lbl_8074FD38@l
    lfs f1, lbl_80885C20
    addi r4, r30, 0x14f
    bl fn_801F6C80
    la r5, lbl_8087DD88
    lwz r3, 0x48(r29)
    addi r4, r30, 0x158
    addi r5, r5, 0x4
    bl fn_801F837C
    lwz r0, 0x78(r1)
    addi r4, r30, 0x188
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    bne lbl_fn_803B710C_000016A8
    addi r5, r1, 0x7a
    b lbl_fn_803B710C_000016AC
lbl_fn_803B710C_000016A8:
    lwz r5, 0x80(r1)
lbl_fn_803B710C_000016AC:
    bl fn_801F837C
    lwz r0, 0x6c(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x196
    bne lbl_fn_803B710C_000016D4
    addi r5, r1, 0x6e
    b lbl_fn_803B710C_000016D8
lbl_fn_803B710C_000016D4:
    lwz r5, 0x74(r1)
lbl_fn_803B710C_000016D8:
    bl fn_801F837C
    lwz r0, 0x60(r1)
    lis r4, lbl_8074FD38@ha
    addi r4, r4, lbl_8074FD38@l
    lwz r3, 0x48(r29)
    srwi. r0, r0, 31
    addi r4, r4, 0x1a4
    bne lbl_fn_803B710C_00001700
    addi r5, r1, 0x62
    b lbl_fn_803B710C_00001704
lbl_fn_803B710C_00001700:
    lwz r5, 0x68(r1)
lbl_fn_803B710C_00001704:
    bl fn_801F837C
lbl_fn_803B710C_00001708:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_0000171C
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_803B710C_0000171C:
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_00001730
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_803B710C_00001730:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_00001744
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_803B710C_00001744:
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_803B710C_00001758
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_803B710C_00001758:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_803B78B4(void)
{
    nofralloc
    lwz r0, 0xb4(r3)
    cmplwi r0, 0x40
    bgelr
    lwz r5, 0x1b8(r3)
    lwz r0, 0xb4(r3)
    add r0, r5, r0
    clrlslwi r0, r0, 26, 2
    add r5, r3, r0
    stw r4, 0xb8(r5)
    lwz r4, 0xb4(r3)
    addi r0, r4, 0x1
    stw r0, 0xb4(r3)
    blr
}

asm void fn_803B78E8(void)
{
    nofralloc
    lbz r0, 0x71(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stb r0, 0x71(r3)
    lwz r5, lbl_8087F430
    cmpwi r5, 0x0
    beqlr
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803B78E8_000017F8
    lwz r4, 0x78(r3)
    mr r3, r5
    li r5, 0x1
    b fn_80370AE4
lbl_fn_803B78E8_000017F8:
    cmpwi r0, 0x1
    bnelr
    lwz r4, 0x78(r3)
    mr r3, r5
    li r5, 0x1
    li r6, 0x0
    b fn_80370320
    blr
}

asm void fn_803B7944(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_803B7944_000018B8
    lis r5, lbl_8074FF58@ha
    lis r31, 0x1
    addi r5, r5, lbl_8074FF58@l
    li r4, 0x1
    mr r6, r5
    addi r3, r31, 0x42e0
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_803B7944_000018B0
    mr r4, r28
    bl fn_803B82C0
    lis r3, lbl_8078B508@ha
    li r0, 0x0
    addi r3, r3, lbl_8078B508@l
    stw r3, 0x0(r30)
    addi r3, r30, 0xd80
    addi r5, r31, 0x3560
    stw r0, 0xd68(r30)
    li r4, 0x0
    stw r0, 0xd6c(r30)
    stw r29, 0xd70(r30)
    bl memset
    mr r3, r30
    li r4, -0x1
    bl fn_803B8758
lbl_fn_803B7944_000018B0:
    mr r3, r30
    b lbl_fn_803B7944_000018BC
lbl_fn_803B7944_000018B8:
    li r3, 0x0
lbl_fn_803B7944_000018BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B7A08(void)
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
    beq lbl_fn_803B7A08_00001918
    li r4, 0x0
    bl fn_803B834C
    cmpwi r31, 0x0
    ble lbl_fn_803B7A08_00001918
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B7A08_00001918:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B7A60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, lbl_8087F518
    bl fn_8046ECDC
    lwz r3, 0xd70(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803B7A60_00001974
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B7A60_00001974
    li r3, 0x0
    b lbl_fn_803B7A60_00001990
lbl_fn_803B7A60_00001974:
    mr r3, r31
    bl fn_803B87A8
    cmpwi r3, 0x0
    bne lbl_fn_803B7A60_0000198C
    li r3, 0x1
    b lbl_fn_803B7A60_00001990
lbl_fn_803B7A60_0000198C:
    li r3, 0x0
lbl_fn_803B7A60_00001990:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
