#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80079044(void);
extern void fn_800C16B4(void);
extern void fn_800C2448(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_801FED24(void);
extern void fn_80373148(void);
extern void fn_8041D180(void);
extern void fn_8041D198(void);
extern void fn_8047CB74(void);
extern void fn_8049003C(void);
extern void fn_80490098(void);
extern void fn_80491528(void);
extern void fn_80541214(void);
extern void fn_805F98D0(void);

/* External data declarations */
extern u8 lbl_80756380[];
extern u8 lbl_807C88F0[];

/* Small data declarations */
extern u32 lbl_8087E088;
extern u32 lbl_8087E08C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F4C0;
extern u32 lbl_8087F558;
extern u32 lbl_80886F8C;
extern u32 lbl_80886F90;
extern u32 lbl_80886F98;
extern u32 lbl_80886FAC;
extern u32 lbl_80886FB4;
extern u32 lbl_80886FC0;
extern u32 lbl_80886FC4;
extern u32 lbl_80886FC8;
extern u32 lbl_80886FCC;
extern u32 lbl_80886FD0;
extern u32 lbl_80886FD4;
extern u32 lbl_80886FD8;
extern u32 lbl_80886FDC;
extern u32 lbl_80886FE0;
extern u32 lbl_80886FE4;
extern u32 lbl_80886FE8;
extern u32 lbl_80886FEC;
extern u32 lbl_80886FF8;
extern u32 lbl_80886FFC;
extern u32 lbl_80887000;
extern u32 lbl_80887004;
extern u32 lbl_80887008;
extern u32 lbl_8088700C;

/* Function declarations */
void fn_804814E8(void);
void fn_804814F0(void);
void fn_804814F8(void);
void fn_80481654(void);
void fn_80481668(void);
void fn_8048169C(void);
void fn_804816F4(void);
void fn_804817D4(void);
void fn_80481800(void);
void fn_80481818(void);
void fn_80481A20(void);
void fn_80481B9C(void);
void fn_80482400(void);
void fn_804827CC(void);
void fn_804827D8(void);
void fn_80482B24(void);
void fn_80482B54(void);
void fn_80482D90(void);
void fn_80482DF4(void);
void fn_80482E28(void);
void fn_80482E4C(void);
void fn_80482EB4(void);
void fn_80482ED8(void);

asm void fn_804814E8(void)
{
    nofralloc
    lwz r3, lbl_8087F558
    blr
}

asm void fn_804814F0(void)
{
    nofralloc
    lwz r3, lbl_8087F448
    blr
}

asm void fn_804814F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r30, 0x70(r3)
    cmpwi r30, 0x0
    beq lbl_fn_804814F8_00000040
    mr r3, r30
    bl fn_80541214
    b lbl_fn_804814F8_00000044
lbl_fn_804814F8_00000040:
    li r3, 0x0
lbl_fn_804814F8_00000044:
    cmpwi r3, 0x0
    beq lbl_fn_804814F8_000000D8
    lwz r0, 0x194(r30)
    cmpwi r0, 0xa
    bne lbl_fn_804814F8_000000D8
    lwz r4, 0x14(r3)
    cmpwi r4, 0x0
    beq lbl_fn_804814F8_000000A0
    lwz r3, 0x1a7c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804814F8_000000A0
    bne lbl_fn_804814F8_000000D8
    lfs f0, lbl_80886F90
    stfs f0, 0x100(r3)
    lwz r3, 0x1a7c(r31)
    stfs f0, 0x104(r3)
    lwz r3, 0x1a7c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_804814F8_000000D8
lbl_fn_804814F8_000000A0:
    cmpwi r4, 0x0
    bne lbl_fn_804814F8_000000D8
    lwz r3, 0x1a7c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804814F8_000000D8
    lwz r0, 0x1a90(r31)
    cmpwi r0, 0x0
    bne lbl_fn_804814F8_000000D8
    li r3, 0x1
    li r0, 0x5
    stw r3, 0x1a90(r31)
    stw r0, 0x1a8c(r31)
lbl_fn_804814F8_000000D8:
    lwz r3, 0x1a7c(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804814F8_0000011C
    lfs f1, 0x104(r3)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f1, f0
    bge lbl_fn_804814F8_0000011C
    lfs f1, 0x100(r3)
    lfs f0, lbl_80886F90
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_804814F8_0000011C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_804814F8_0000011C:
    lwz r0, 0x1a90(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804814F8_00000154
    lwz r3, 0x1a8c(r31)
    cmpwi r3, -0x1
    bne lbl_fn_804814F8_0000014C
    li r0, 0x0
    stw r0, 0x1a90(r31)
    lwz r3, 0x1a7c(r31)
    lfs f0, lbl_80886FD8
    stfs f0, 0x104(r3)
    b lbl_fn_804814F8_00000154
lbl_fn_804814F8_0000014C:
    subi r0, r3, 0x1
    stw r0, 0x1a8c(r31)
lbl_fn_804814F8_00000154:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80481654(void)
{
    nofralloc
    lwz r3, 0x1a7c(r3)
    lwz r0, 0x38(r3)
    extrwi r0, r0, 1, 29
    xori r3, r0, 0x1
    blr
}

asm void fn_80481668(void)
{
    nofralloc
    lwz r4, 0x1a7c(r3)
    li r3, 0x0
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beqlr
    lfs f1, 0x104(r4)
    lfs f0, lbl_80886F8C
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bnelr
    li r3, 0x1
    blr
}

asm void fn_8048169C(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8048169C_000001DC
    lwz r0, 0x1a90(r3)
    cmpwi r0, 0x0
    bnelr
    li r4, 0x1
    li r0, 0x5
    stw r4, 0x1a90(r3)
    stw r0, 0x1a8c(r3)
    blr
lbl_fn_8048169C_000001DC:
    lwz r5, 0x1a7c(r3)
    li r4, 0x0
    lfs f0, lbl_80886F8C
    li r0, -0x1
    stfs f0, 0x100(r5)
    lwz r6, 0x1a7c(r3)
    lwz r5, 0x38(r6)
    ori r5, r5, 0x4
    stw r5, 0x38(r6)
    stw r4, 0x1a90(r3)
    stw r0, 0x1a8c(r3)
    blr
}

asm void fn_804816F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    lwz r5, 0x1a80(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_804816F4_000002E4
    lfs f6, lbl_80886F8C
    li r4, 0x1
    stfs f6, 0x100(r5)
    lfs f5, lbl_80886F90
    lwz r5, 0x1a80(r3)
    lfs f4, lbl_80886FF8
    stfs f5, 0x104(r5)
    lfs f3, lbl_80886FFC
    lwz r3, 0x1a80(r3)
    lfs f2, lbl_80887000
    lwz r0, 0x38(r3)
    lfs f1, lbl_80887004
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lfs f0, lbl_80886FC0
    lwz r6, lbl_8087EFA8
    stfs f4, 0x10(r1)
    lwz r5, 0x378(r6)
    stfs f3, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r4, 0x374(r6)
    lwz r0, 0x14(r1)
    stw r5, 0x378(r6)
    stw r3, 0x37c(r6)
    stfs f2, 0x18(r1)
    stw r0, 0x380(r6)
    lwz r3, 0x18(r1)
    stfs f5, 0x1c(r1)
    stw r3, 0x384(r6)
    lwz r0, 0x1c(r1)
    stw r0, 0x388(r6)
    stfs f6, 0x38c(r6)
    stfs f1, 0x390(r6)
    stw r5, 0x30(r1)
    stw r4, 0x2c(r1)
    stfs f6, 0x44(r1)
    stfs f4, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f2, 0x3c(r1)
    stfs f5, 0x40(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    stw r4, 0x8(r1)
    stw r5, 0xc(r1)
    stfs f6, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x394(r6)
lbl_fn_804816F4_000002E4:
    addi r1, r1, 0x50
    blr
}

asm void fn_804817D4(void)
{
    nofralloc
    lwz r5, 0x1a80(r3)
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beqlr
    lwz r4, 0x38(r5)
    li r0, 0x1
    ori r4, r4, 0x4
    stw r4, 0x38(r5)
    stw r0, 0x1a88(r3)
    blr
}

asm void fn_80481800(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x1ea4(r3)
    beqlr
    li r0, 0x0
    stw r0, 0x1eb0(r3)
    blr
}

asm void fn_80481818(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lwz r0, 0x1a88(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80481818_00000514
    lwz r5, lbl_8087EFA8
    lwz r4, 0x374(r5)
    lwz r0, 0x378(r5)
    lfs f6, 0x37c(r5)
    cmpwi r4, 0x0
    lfs f5, 0x380(r5)
    lfs f4, 0x384(r5)
    lfs f3, 0x388(r5)
    lfs f2, 0x38c(r5)
    lfs f1, 0x390(r5)
    lfs f0, 0x394(r5)
    stw r4, 0x20(r1)
    stw r0, 0x24(r1)
    stfs f6, 0x28(r1)
    stfs f5, 0x2c(r1)
    stfs f4, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f2, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x40(r1)
    bne lbl_fn_80481818_000003C0
    li r0, 0x0
    stw r0, 0x1a88(r3)
    b lbl_fn_80481818_00000514
lbl_fn_80481818_000003C0:
    lwz r0, 0x23b4(r3)
    li r4, 0x2
    stw r4, 0x1a88(r3)
    lwz r4, 0x70(r3)
    cmpwi r0, 0x0
    lfs f0, 0x198(r4)
    stfs f0, 0x1a84(r3)
    beq lbl_fn_80481818_00000514
    lis r30, lbl_80756380@ha
    lfs f1, lbl_80886F90
    addi r30, r30, lbl_80756380@l
    addi r3, r1, 0x8
    addi r4, r30, 0x270
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, 0x48(r31)
    addi r3, r30, 0x27d
    lfs f31, lbl_80887008
    lwz r0, 0x38(r4)
    lfs f0, lbl_80886FE8
    ori r0, r0, 0x4
    stw r0, 0x38(r4)
    lfs f1, 0x5c(r31)
    lwz r4, 0x48(r31)
    stfs f31, 0x18(r1)
    addi r29, r4, 0x58
    stfs f0, 0x1c(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x48(r31)
    addi r3, r30, 0x27d
    lfs f31, 0x1c(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x1
    bl fn_801FED24
    lwz r4, 0x48(r31)
    addi r3, r30, 0x27d
    lfs f31, 0x10(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x2
    bl fn_801FED24
    lwz r4, 0x48(r31)
    addi r3, r30, 0x27d
    lfs f31, 0x14(r1)
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    li r5, 0x3
    bl fn_801FED24
    lwz r3, 0x48(r31)
    li r4, 0x0
    lfs f0, 0x60(r31)
    stfs f0, 0x104(r3)
    lfs f0, lbl_80886F8C
    lwz r3, 0x48(r31)
    stfs f0, 0x100(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
    lwz r3, 0x48(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    stw r4, 0x23b4(r31)
lbl_fn_80481818_00000514:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80481A20(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    lwz r0, 0x1a88(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80481A20_000006AC
    lwz r5, lbl_8087EFA8
    lwz r6, 0x70(r3)
    lwz r4, 0x374(r5)
    lfs f1, 0x198(r6)
    lfs f0, 0x1a84(r3)
    cmpwi r4, 0x0
    lwz r0, 0x378(r5)
    fsubs f7, f1, f0
    lfs f6, 0x37c(r5)
    lfs f5, 0x380(r5)
    lfs f4, 0x384(r5)
    lfs f3, 0x388(r5)
    lfs f2, 0x38c(r5)
    lfs f1, 0x390(r5)
    lfs f0, 0x394(r5)
    stw r4, 0x2c(r1)
    stw r0, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    bne lbl_fn_80481A20_000005B8
    li r0, 0x0
    stw r0, 0x1a88(r3)
    b lbl_fn_80481A20_000006AC
lbl_fn_80481A20_000005B8:
    lfs f1, lbl_8088700C
    lfs f0, lbl_80886F8C
    fdivs f1, f7, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80481A20_000005D0
    b lbl_fn_80481A20_000005D4
lbl_fn_80481A20_000005D0:
    fmr f1, f0
lbl_fn_80481A20_000005D4:
    lfs f3, lbl_80886F90
    fcmpo cr0, f1, f3
    bge lbl_fn_80481A20_000005FC
    lfs f1, lbl_8088700C
    lfs f0, lbl_80886F8C
    fdivs f3, f7, f1
    fcmpo cr0, f3, f0
    ble lbl_fn_80481A20_000005F8
    b lbl_fn_80481A20_000005FC
lbl_fn_80481A20_000005F8:
    fmr f3, f0
lbl_fn_80481A20_000005FC:
    lfs f1, lbl_8087E08C
    lfs f2, lbl_8087E088
    lfs f0, lbl_8088700C
    fsubs f1, f1, f2
    fcmpo cr0, f7, f0
    fmadds f0, f3, f1, f2
    stfs f0, 0x4c(r1)
    cror eq, gt, eq
    bne lbl_fn_80481A20_0000062C
    li r0, 0x0
    stw r0, 0x1a88(r3)
    stw r0, 0x2c(r1)
lbl_fn_80481A20_0000062C:
    lwz r5, lbl_8087EFA8
    lwz r4, 0x2c(r1)
    lfs f0, 0x34(r1)
    stfs f0, 0x10(r1)
    lwz r3, 0x30(r1)
    stw r4, 0x374(r5)
    lfs f0, 0x38(r1)
    stfs f0, 0x14(r1)
    lfs f0, 0x3c(r1)
    stfs f0, 0x18(r1)
    lfs f0, 0x40(r1)
    stfs f0, 0x1c(r1)
    lfs f2, 0x44(r1)
    lfs f1, 0x48(r1)
    lfs f0, 0x4c(r1)
    stw r3, 0x378(r5)
    lwz r0, 0x10(r1)
    stw r0, 0x37c(r5)
    lwz r0, 0x14(r1)
    stw r0, 0x380(r5)
    lwz r0, 0x18(r1)
    stw r0, 0x384(r5)
    lwz r0, 0x1c(r1)
    stw r0, 0x388(r5)
    stfs f2, 0x38c(r5)
    stfs f1, 0x390(r5)
    stw r4, 0x8(r1)
    stw r3, 0xc(r1)
    stfs f2, 0x20(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x394(r5)
lbl_fn_80481A20_000006AC:
    addi r1, r1, 0x50
    blr
}

asm void fn_80481B9C(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    lfs f2, lbl_80886F90
    li r6, 0x2
    stw r0, 0x214(r1)
    addi r7, r1, 0x8
    lfs f0, lbl_80886FD8
    li r0, 0x1
    stw r31, 0x20c(r1)
    li r31, 0x0
    lfs f7, lbl_80886F98
    li r5, 0x3
    stw r30, 0x208(r1)
    mr r30, r4
    lfs f5, lbl_80886FCC
    stw r29, 0x204(r1)
    mr r29, r3
    lfs f6, lbl_80886FC8
    stw r28, 0x200(r1)
    addi r28, r1, 0x14
    lfs f4, lbl_80886F8C
    mr r3, r28
    stfs f0, 0xc(r1)
    mr r4, r28
    lfs f9, lbl_80886FC4
    stfs f2, 0x8(r1)
    lfs f8, lbl_80886FAC
    lfs f3, lbl_80886FD0
    lfs f0, lbl_80886FD4
    psq_l f1, 0x0(r7), 0, 0
    stw r31, 0x60(r1)
    stfs f9, 0x64(r1)
    stfs f8, 0x68(r1)
    stfs f7, 0x6c(r1)
    stfs f7, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f2, 0x78(r1)
    stw r31, 0xac(r1)
    stw r31, 0xb0(r1)
    stw r6, 0xb4(r1)
    stw r5, 0xb8(r1)
    stw r0, 0xbc(r1)
    stw r31, 0xc0(r1)
    stw r31, 0xc4(r1)
    stfs f6, 0xc8(r1)
    stfs f6, 0xcc(r1)
    stfs f2, 0xd0(r1)
    stfs f5, 0xd4(r1)
    stfs f5, 0xd8(r1)
    stfs f5, 0xdc(r1)
    stfs f2, 0xe0(r1)
    stfs f4, 0xe4(r1)
    stfs f2, 0xe8(r1)
    stfs f4, 0xec(r1)
    stfs f3, 0xf0(r1)
    stw r0, 0xf4(r1)
    stw r31, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f7, 0x100(r1)
    stfs f7, 0x104(r1)
    stfs f7, 0x108(r1)
    stfs f2, 0x10c(r1)
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F98D0
    lfs f8, lbl_80886F8C
    addi r12, r1, 0x110
    lfs f9, lbl_80886F90
    addi r5, r1, 0x50
    psq_l f1, 0x0(r28), 0, 0
    addi r4, r1, 0x120
    lfs f2, 0x1c(r1)
    addi r7, r1, 0x40
    stfs f9, 0x50(r1)
    addi r6, r1, 0x130
    addi r9, r1, 0x30
    addi r8, r1, 0x140
    lfs f3, lbl_80886FE8
    addi r11, r1, 0x20
    lfs f7, lbl_80886FDC
    addi r10, r1, 0x150
    lfs f6, lbl_80886FE0
    addi r3, r1, 0x1ac
    lfs f5, lbl_80886FB4
    lfs f4, lbl_80886FE4
    lfs f0, lbl_80886FEC
    stfs f8, 0x54(r1)
    psq_st f1, 0x0(r12), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f8, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f2, 0x118(r1)
    psq_l f2, 0x8(r5), 0, 0
    stfs f8, 0x40(r1)
    stfs f9, 0x44(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f8, 0x48(r1)
    stfs f8, 0x4c(r1)
    psq_st f2, 0x8(r4), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f8, 0x30(r1)
    stfs f8, 0x34(r1)
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    psq_st f2, 0x8(r6), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f8, 0x20(r1)
    stfs f8, 0x24(r1)
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f8, 0x28(r1)
    stfs f8, 0x2c(r1)
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stw r31, 0x11c(r1)
    stw r31, 0x160(r1)
    stw r31, 0x164(r1)
    stfs f9, 0x168(r1)
    psq_st f1, 0x0(r10), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    stw r31, 0x16c(r1)
    stw r31, 0x170(r1)
    stfs f7, 0x174(r1)
    stfs f8, 0x178(r1)
    stfs f6, 0x17c(r1)
    stfs f5, 0x180(r1)
    stfs f4, 0x184(r1)
    stfs f8, 0x188(r1)
    stfs f3, 0x18c(r1)
    stfs f0, 0x190(r1)
    stfs f3, 0x194(r1)
    stfs f8, 0x198(r1)
    stfs f8, 0x19c(r1)
    stfs f9, 0x1a0(r1)
    stfs f9, 0x1a4(r1)
    bl fn_80079044
    lwz r0, 0x88(r29)
    addi r3, r29, 0x4c
    stw r0, 0x60(r1)
    addi r6, r1, 0xe4
    addi r5, r1, 0xf4
    lfs f0, 0x8c(r29)
    stfs f0, 0x64(r1)
    lfs f0, 0x90(r29)
    stfs f0, 0x68(r1)
    lwz r4, 0x94(r29)
    lwz r0, 0x98(r29)
    stw r0, 0x70(r1)
    stw r4, 0x6c(r1)
    lwz r4, 0x9c(r29)
    lwz r0, 0xa0(r29)
    stw r0, 0x78(r1)
    stw r4, 0x74(r1)
    lfs f0, 0x58(r29)
    stfs f0, 0x7c(r1)
    lfs f0, 0x5c(r29)
    stfs f0, 0x80(r1)
    lfs f0, 0x60(r29)
    stfs f0, 0x84(r1)
    lfs f0, 0x64(r29)
    stfs f0, 0x88(r1)
    lfs f0, 0x68(r29)
    stfs f0, 0x8c(r1)
    lfs f0, 0x6c(r29)
    stfs f0, 0x90(r1)
    lfs f0, 0x70(r29)
    stfs f0, 0x94(r1)
    lfs f0, 0x74(r29)
    stfs f0, 0x98(r1)
    lfs f0, 0x78(r29)
    stfs f0, 0x9c(r1)
    lfs f0, 0x7c(r29)
    stfs f0, 0xa0(r1)
    lfs f0, 0x80(r29)
    stfs f0, 0xa4(r1)
    lfs f0, 0x84(r29)
    stfs f0, 0xa8(r1)
    lwz r0, 0x1e4(r29)
    stw r0, 0xac(r1)
    lwz r0, 0x1e8(r29)
    stw r0, 0xb0(r1)
    lwz r0, 0x1ec(r29)
    stw r0, 0xb4(r1)
    lwz r0, 0x1f0(r29)
    stw r0, 0xb8(r1)
    lwz r0, 0x1f4(r29)
    stw r0, 0xbc(r1)
    lwz r0, 0x1f8(r29)
    stw r0, 0xc0(r1)
    lwz r0, 0x1fc(r29)
    stw r0, 0xc4(r1)
    lfs f0, 0x200(r29)
    stfs f0, 0xc8(r1)
    lfs f0, 0x204(r29)
    stfs f0, 0xcc(r1)
    lfs f0, 0x208(r29)
    stfs f0, 0xd0(r1)
    lwz r4, 0x20c(r29)
    lwz r0, 0x210(r29)
    stw r0, 0xd8(r1)
    stw r4, 0xd4(r1)
    lwz r4, 0x214(r29)
    lwz r0, 0x218(r29)
    stw r0, 0xe0(r1)
    stw r4, 0xdc(r1)
    psq_l f1, 0x1d0(r3), 0, 0
    lfs f2, 0x224(r29)
    stfs f2, 0xec(r1)
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x228(r29)
    stfs f0, 0xf0(r1)
    lwz r0, 0x284(r29)
    stw r0, 0xf4(r1)
    lwz r0, 0x288(r29)
    stw r0, 0xf8(r1)
    lfs f0, 0x28c(r29)
    stfs f0, 0xfc(r1)
    lwz r4, 0x290(r29)
    lwz r0, 0x294(r29)
    stw r0, 0x104(r1)
    stw r4, 0x100(r1)
    lwz r4, 0x298(r29)
    lwz r0, 0x29c(r29)
    stw r0, 0x10c(r1)
    stw r4, 0x108(r1)
    psq_l f1, 0x254(r3), 0, 0
    lfs f2, 0x2a8(r29)
    stfs f2, 0x118(r1)
    psq_st f1, 0x1c(r5), 0, 0
    lwz r0, 0x2ac(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80481B9C_00000A6C
    addi r28, r3, 0x264
    b lbl_fn_80481B9C_00000A74
lbl_fn_80481B9C_00000A6C:
    lwz r4, lbl_8087EFA8
    addi r28, r4, 0x324
lbl_fn_80481B9C_00000A74:
    lwz r0, 0x0(r28)
    addi r4, r1, 0x120
    stw r0, 0x11c(r1)
    addi r10, r1, 0x130
    addi r11, r1, 0x140
    addi r12, r1, 0x150
    psq_l f1, 0x4(r28), 0, 0
    addi r5, r1, 0x178
    psq_l f2, 0xc(r28), 0, 0
    addi r6, r1, 0x180
    psq_st f2, 0x8(r4), 0, 0
    addi r7, r1, 0x188
    addi r8, r1, 0x190
    addi r9, r1, 0x198
    psq_st f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_l f1, 0x14(r28), 0, 0
    psq_l f2, 0x1c(r28), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x24(r28), 0, 0
    psq_l f2, 0x2c(r28), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x34(r28), 0, 0
    psq_l f2, 0x3c(r28), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    lwz r0, 0x44(r28)
    stw r0, 0x160(r1)
    lwz r0, 0x48(r28)
    stw r0, 0x164(r1)
    lfs f0, 0x4c(r28)
    stfs f0, 0x168(r1)
    lwz r0, 0x1f8(r3)
    stw r0, 0x16c(r1)
    lwz r0, 0x1fc(r3)
    stw r0, 0x170(r1)
    lfs f0, 0x200(r3)
    stfs f0, 0x174(r1)
    psq_l f1, 0x204(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20c(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x214(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x21c(r3), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x224(r3), 0, 0
    psq_l f2, 0x22c(r3), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lwz r0, 0x120(r3)
    stw r0, 0x1a8(r1)
    bl fn_800C2448
    lwz r0, 0x0(r3)
    addi r31, r30, 0x110
    stw r0, 0x1ac(r1)
    addi r4, r1, 0x1b4
    addi r5, r1, 0x1c0
    addi r30, r1, 0x60
    lwz r0, 0x4(r3)
    stw r0, 0x1b0(r1)
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    stfs f2, 0x1bc(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    lfs f2, 0x1c(r3)
    stfs f2, 0x1c8(r1)
    psq_st f1, 0x0(r5), 0, 0
    lwz r0, 0x20(r3)
    stw r0, 0x1cc(r1)
    lfs f0, 0x24(r3)
    stfs f0, 0x1d0(r1)
    lfs f0, 0x28(r3)
    stfs f0, 0x1d4(r1)
    lfs f0, 0x2c(r3)
    stfs f0, 0x1d8(r1)
    lfs f0, 0x30(r3)
    stfs f0, 0x1dc(r1)
    lwz r4, 0x34(r3)
    lwz r0, 0x38(r3)
    stw r0, 0x1e4(r1)
    stw r4, 0x1e0(r1)
    lwz r4, 0x3c(r3)
    lwz r0, 0x40(r3)
    stw r0, 0x1ec(r1)
    stw r4, 0x1e8(r1)
    lwz r0, 0x24(r29)
    stw r0, 0x1f0(r1)
    lwz r3, 0x4(r31)
    lwz r0, 0x8(r31)
    cmplw r3, r0
    bge lbl_fn_80481B9C_00000EA8
    mulli r0, r3, 0x194
    lwz r3, 0x0(r31)
    add. r3, r3, r0
    beq lbl_fn_80481B9C_00000E98
    lwz r0, 0x60(r1)
    stw r0, 0x0(r3)
    lfs f0, 0x64(r1)
    stfs f0, 0x4(r3)
    lfs f0, 0x68(r1)
    stfs f0, 0x8(r3)
    lfs f0, 0x6c(r1)
    stfs f0, 0xc(r3)
    lfs f0, 0x70(r1)
    stfs f0, 0x10(r3)
    lfs f0, 0x74(r1)
    stfs f0, 0x14(r3)
    lfs f0, 0x78(r1)
    stfs f0, 0x18(r3)
    lfs f0, 0x7c(r1)
    stfs f0, 0x1c(r3)
    lfs f0, 0x80(r1)
    stfs f0, 0x20(r3)
    lfs f0, 0x84(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x88(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x8c(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0x90(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0x94(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x98(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x9c(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0xa0(r1)
    stfs f0, 0x40(r3)
    lfs f0, 0xa4(r1)
    stfs f0, 0x44(r3)
    lfs f0, 0xa8(r1)
    stfs f0, 0x48(r3)
    lwz r0, 0xac(r1)
    stw r0, 0x4c(r3)
    lwz r0, 0xb0(r1)
    stw r0, 0x50(r3)
    lwz r0, 0xb4(r1)
    stw r0, 0x54(r3)
    lwz r0, 0xb8(r1)
    stw r0, 0x58(r3)
    lwz r0, 0xbc(r1)
    stw r0, 0x5c(r3)
    lwz r0, 0xc0(r1)
    stw r0, 0x60(r3)
    lwz r0, 0xc4(r1)
    stw r0, 0x64(r3)
    lfs f0, 0xc8(r1)
    stfs f0, 0x68(r3)
    lfs f0, 0xcc(r1)
    stfs f0, 0x6c(r3)
    lfs f0, 0xd0(r1)
    stfs f0, 0x70(r3)
    lfs f0, 0xd4(r1)
    stfs f0, 0x74(r3)
    lfs f0, 0xd8(r1)
    stfs f0, 0x78(r3)
    lfs f0, 0xdc(r1)
    stfs f0, 0x7c(r3)
    lfs f0, 0xe0(r1)
    stfs f0, 0x80(r3)
    lfs f2, 0xec(r1)
    psq_l f1, 0x84(r30), 0, 0
    psq_st f1, 0x84(r3), 0, 0
    stfs f2, 0x8c(r3)
    lfs f0, 0xf0(r1)
    stfs f0, 0x90(r3)
    lwz r0, 0xf4(r1)
    stw r0, 0x94(r3)
    lwz r0, 0xf8(r1)
    stw r0, 0x98(r3)
    lfs f0, 0xfc(r1)
    stfs f0, 0x9c(r3)
    lfs f0, 0x100(r1)
    stfs f0, 0xa0(r3)
    lfs f0, 0x104(r1)
    stfs f0, 0xa4(r3)
    lfs f0, 0x108(r1)
    stfs f0, 0xa8(r3)
    lfs f0, 0x10c(r1)
    stfs f0, 0xac(r3)
    lfs f2, 0x118(r1)
    psq_l f1, 0xb0(r30), 0, 0
    psq_st f1, 0xb0(r3), 0, 0
    stfs f2, 0xb8(r3)
    lwz r0, 0x11c(r1)
    stw r0, 0xbc(r3)
    psq_l f2, 0xc8(r30), 0, 0
    psq_l f1, 0xc0(r30), 0, 0
    psq_st f1, 0xc0(r3), 0, 0
    psq_st f2, 0xc8(r3), 0, 0
    psq_l f2, 0xd8(r30), 0, 0
    psq_l f1, 0xd0(r30), 0, 0
    psq_st f1, 0xd0(r3), 0, 0
    psq_st f2, 0xd8(r3), 0, 0
    psq_l f2, 0xe8(r30), 0, 0
    psq_l f1, 0xe0(r30), 0, 0
    psq_st f1, 0xe0(r3), 0, 0
    psq_st f2, 0xe8(r3), 0, 0
    psq_l f2, 0xf8(r30), 0, 0
    psq_l f1, 0xf0(r30), 0, 0
    psq_st f1, 0xf0(r3), 0, 0
    psq_st f2, 0xf8(r3), 0, 0
    lwz r0, 0x160(r1)
    stw r0, 0x100(r3)
    lwz r0, 0x164(r1)
    stw r0, 0x104(r3)
    lfs f0, 0x168(r1)
    stfs f0, 0x108(r3)
    lwz r0, 0x16c(r1)
    stw r0, 0x10c(r3)
    lwz r0, 0x170(r1)
    stw r0, 0x110(r3)
    lfs f0, 0x174(r1)
    stfs f0, 0x114(r3)
    psq_l f1, 0x118(r30), 0, 0
    psq_st f1, 0x118(r3), 0, 0
    psq_l f1, 0x120(r30), 0, 0
    psq_st f1, 0x120(r3), 0, 0
    psq_l f1, 0x128(r30), 0, 0
    psq_st f1, 0x128(r3), 0, 0
    psq_l f1, 0x130(r30), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    psq_l f2, 0x140(r30), 0, 0
    psq_l f1, 0x138(r30), 0, 0
    psq_st f1, 0x138(r3), 0, 0
    psq_st f2, 0x140(r3), 0, 0
    lwz r0, 0x1a8(r1)
    stw r0, 0x148(r3)
    lwz r0, 0x1ac(r1)
    stw r0, 0x14c(r3)
    lwz r0, 0x1b0(r1)
    stw r0, 0x150(r3)
    lfs f2, 0x1bc(r1)
    psq_l f1, 0x154(r30), 0, 0
    psq_st f1, 0x154(r3), 0, 0
    stfs f2, 0x15c(r3)
    lfs f2, 0x1c8(r1)
    psq_l f1, 0x160(r30), 0, 0
    psq_st f1, 0x160(r3), 0, 0
    stfs f2, 0x168(r3)
    lwz r0, 0x1cc(r1)
    stw r0, 0x16c(r3)
    lfs f0, 0x1d0(r1)
    stfs f0, 0x170(r3)
    lfs f0, 0x1d4(r1)
    stfs f0, 0x174(r3)
    lfs f0, 0x1d8(r1)
    stfs f0, 0x178(r3)
    lfs f0, 0x1dc(r1)
    stfs f0, 0x17c(r3)
    lfs f0, 0x1e0(r1)
    stfs f0, 0x180(r3)
    lfs f0, 0x1e4(r1)
    stfs f0, 0x184(r3)
    lfs f0, 0x1e8(r1)
    stfs f0, 0x188(r3)
    lfs f0, 0x1ec(r1)
    stfs f0, 0x18c(r3)
    lwz r0, 0x1f0(r1)
    stw r0, 0x190(r3)
lbl_fn_80481B9C_00000E98:
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_80481B9C_00000EF8
lbl_fn_80481B9C_00000EA8:
    mr r3, r31
    li r4, 0x1
    bl fn_8049003C
    cmpwi r3, 0x0
    beq lbl_fn_80481B9C_00000EE8
    lwz r0, 0x4(r31)
    mr r5, r30
    lwz r4, 0x0(r31)
    addi r3, r31, 0x8
    mulli r0, r0, 0x194
    add r4, r4, r0
    bl fn_80482400
    lwz r3, 0x4(r31)
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_80481B9C_00000EF8
lbl_fn_80481B9C_00000EE8:
    mr r3, r31
    mr r5, r30
    li r4, 0x1
    bl fn_80490098
lbl_fn_80481B9C_00000EF8:
    lwz r0, 0x214(r1)
    lwz r31, 0x20c(r1)
    lwz r30, 0x208(r1)
    lwz r29, 0x204(r1)
    lwz r28, 0x200(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_80482400(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    cmpwi r4, 0x0
    stfd f31, 0x110(r1)
    psq_st f31, 0x118(r1), 0, 0
    stfd f30, 0x100(r1)
    psq_st f30, 0x108(r1), 0, 0
    stfd f29, 0xf0(r1)
    psq_st f29, 0xf8(r1), 0, 0
    stfd f28, 0xe0(r1)
    psq_st f28, 0xe8(r1), 0, 0
    stfd f27, 0xd0(r1)
    psq_st f27, 0xd8(r1), 0, 0
    stfd f26, 0xc0(r1)
    psq_st f26, 0xc8(r1), 0, 0
    stfd f25, 0xb0(r1)
    psq_st f25, 0xb8(r1), 0, 0
    stfd f24, 0xa0(r1)
    psq_st f24, 0xa8(r1), 0, 0
    stfd f23, 0x90(r1)
    psq_st f23, 0x98(r1), 0, 0
    stfd f22, 0x80(r1)
    psq_st f22, 0x88(r1), 0, 0
    stfd f21, 0x70(r1)
    psq_st f21, 0x78(r1), 0, 0
    stfd f20, 0x60(r1)
    psq_st f20, 0x68(r1), 0, 0
    stfd f19, 0x50(r1)
    psq_st f19, 0x58(r1), 0, 0
    stfd f18, 0x40(r1)
    psq_st f18, 0x48(r1), 0, 0
    stfd f17, 0x30(r1)
    psq_st f17, 0x38(r1), 0, 0
    stfd f16, 0x20(r1)
    psq_st f16, 0x28(r1), 0, 0
    stfd f15, 0x10(r1)
    psq_st f15, 0x18(r1), 0, 0
    stw r31, 0xc(r1)
    beq lbl_fn_80482400_00001250
    lwz r31, 0x0(r5)
    lfs f16, 0x4(r5)
    lfs f17, 0x8(r5)
    lfs f18, 0xc(r5)
    lfs f19, 0x10(r5)
    lfs f20, 0x14(r5)
    lfs f21, 0x18(r5)
    lfs f22, 0x1c(r5)
    lfs f23, 0x20(r5)
    lfs f24, 0x24(r5)
    lfs f25, 0x28(r5)
    lfs f26, 0x2c(r5)
    lfs f27, 0x30(r5)
    lfs f28, 0x34(r5)
    lfs f29, 0x38(r5)
    lfs f30, 0x3c(r5)
    lfs f31, 0x40(r5)
    lfs f13, 0x44(r5)
    lfs f12, 0x48(r5)
    lwz r12, 0x4c(r5)
    lwz r11, 0x50(r5)
    lwz r10, 0x54(r5)
    lwz r9, 0x58(r5)
    lwz r8, 0x5c(r5)
    lwz r7, 0x60(r5)
    lwz r6, 0x64(r5)
    lfs f11, 0x68(r5)
    lfs f10, 0x6c(r5)
    lfs f9, 0x70(r5)
    lfs f8, 0x74(r5)
    lfs f7, 0x78(r5)
    lfs f6, 0x7c(r5)
    lfs f5, 0x80(r5)
    psq_l f1, 0x84(r5), 0, 0
    lfs f2, 0x8c(r5)
    lfs f4, 0x90(r5)
    lwz r3, 0x94(r5)
    lwz r0, 0x98(r5)
    lfs f3, 0x9c(r5)
    lfs f0, 0xa0(r5)
    lfs f15, 0xa4(r5)
    stw r31, 0x0(r4)
    stfs f16, 0x4(r4)
    stfs f17, 0x8(r4)
    stfs f18, 0xc(r4)
    stfs f19, 0x10(r4)
    stfs f20, 0x14(r4)
    stfs f21, 0x18(r4)
    stfs f22, 0x1c(r4)
    stfs f23, 0x20(r4)
    stfs f24, 0x24(r4)
    stfs f25, 0x28(r4)
    stfs f26, 0x2c(r4)
    stfs f27, 0x30(r4)
    stfs f28, 0x34(r4)
    stfs f29, 0x38(r4)
    stfs f30, 0x3c(r4)
    stfs f31, 0x40(r4)
    stfs f13, 0x44(r4)
    stfs f12, 0x48(r4)
    stw r12, 0x4c(r4)
    stw r11, 0x50(r4)
    stw r10, 0x54(r4)
    stw r9, 0x58(r4)
    stw r8, 0x5c(r4)
    stw r7, 0x60(r4)
    stw r6, 0x64(r4)
    stfs f11, 0x68(r4)
    stfs f10, 0x6c(r4)
    stfs f9, 0x70(r4)
    stfs f8, 0x74(r4)
    stfs f7, 0x78(r4)
    stfs f6, 0x7c(r4)
    stfs f5, 0x80(r4)
    psq_st f1, 0x84(r4), 0, 0
    stfs f2, 0x8c(r4)
    stfs f4, 0x90(r4)
    stw r3, 0x94(r4)
    stw r0, 0x98(r4)
    stfs f3, 0x9c(r4)
    stfs f0, 0xa0(r4)
    stfs f15, 0xa4(r4)
    psq_l f1, 0xb0(r5), 0, 0
    addi r6, r5, 0x138
    psq_st f1, 0xb0(r4), 0, 0
    addi r3, r4, 0x138
    psq_l f1, 0xc0(r5), 0, 0
    psq_st f1, 0xc0(r4), 0, 0
    psq_l f1, 0xd0(r5), 0, 0
    psq_st f1, 0xd0(r4), 0, 0
    psq_l f1, 0xe0(r5), 0, 0
    psq_st f1, 0xe0(r4), 0, 0
    lfs f2, 0xb8(r5)
    psq_l f1, 0xf0(r5), 0, 0
    stfs f2, 0xb8(r4)
    psq_l f2, 0xc8(r5), 0, 0
    psq_st f1, 0xf0(r4), 0, 0
    psq_l f1, 0x118(r5), 0, 0
    psq_st f2, 0xc8(r4), 0, 0
    psq_l f2, 0xd8(r5), 0, 0
    psq_st f1, 0x118(r4), 0, 0
    psq_l f1, 0x120(r5), 0, 0
    psq_st f2, 0xd8(r4), 0, 0
    psq_l f2, 0xe8(r5), 0, 0
    psq_st f1, 0x120(r4), 0, 0
    psq_l f1, 0x128(r5), 0, 0
    psq_st f2, 0xe8(r4), 0, 0
    psq_l f2, 0xf8(r5), 0, 0
    psq_st f1, 0x128(r4), 0, 0
    psq_l f1, 0x130(r5), 0, 0
    psq_st f2, 0xf8(r4), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x130(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x154(r5), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    lfs f2, 0x15c(r5)
    psq_st f1, 0x154(r4), 0, 0
    lfs f13, 0xa8(r5)
    stfs f2, 0x15c(r4)
    lfs f12, 0xac(r5)
    lwz r31, 0xbc(r5)
    lwz r12, 0x100(r5)
    lwz r11, 0x104(r5)
    lfs f11, 0x108(r5)
    lwz r10, 0x10c(r5)
    lwz r9, 0x110(r5)
    lfs f10, 0x114(r5)
    lwz r8, 0x148(r5)
    lwz r7, 0x14c(r5)
    lwz r6, 0x150(r5)
    psq_l f1, 0x160(r5), 0, 0
    lfs f2, 0x168(r5)
    lwz r3, 0x16c(r5)
    lfs f9, 0x170(r5)
    lfs f8, 0x174(r5)
    lfs f7, 0x178(r5)
    lfs f6, 0x17c(r5)
    lfs f5, 0x180(r5)
    lfs f4, 0x184(r5)
    lfs f3, 0x188(r5)
    lfs f0, 0x18c(r5)
    lwz r0, 0x190(r5)
    stfs f13, 0xa8(r4)
    stfs f12, 0xac(r4)
    stw r31, 0xbc(r4)
    stw r12, 0x100(r4)
    stw r11, 0x104(r4)
    stfs f11, 0x108(r4)
    stw r10, 0x10c(r4)
    stw r9, 0x110(r4)
    stfs f10, 0x114(r4)
    stw r8, 0x148(r4)
    stw r7, 0x14c(r4)
    stw r6, 0x150(r4)
    psq_st f1, 0x160(r4), 0, 0
    stfs f2, 0x168(r4)
    stw r3, 0x16c(r4)
    stfs f9, 0x170(r4)
    stfs f8, 0x174(r4)
    stfs f7, 0x178(r4)
    stfs f6, 0x17c(r4)
    stfs f5, 0x180(r4)
    stfs f4, 0x184(r4)
    stfs f3, 0x188(r4)
    stfs f0, 0x18c(r4)
    stw r0, 0x190(r4)
lbl_fn_80482400_00001250:
    psq_l f31, 0x118(r1), 0, 0
    lfd f31, 0x110(r1)
    psq_l f30, 0x108(r1), 0, 0
    lfd f30, 0x100(r1)
    psq_l f29, 0xf8(r1), 0, 0
    lfd f29, 0xf0(r1)
    psq_l f28, 0xe8(r1), 0, 0
    lfd f28, 0xe0(r1)
    psq_l f27, 0xd8(r1), 0, 0
    lfd f27, 0xd0(r1)
    psq_l f26, 0xc8(r1), 0, 0
    lfd f26, 0xc0(r1)
    psq_l f25, 0xb8(r1), 0, 0
    lfd f25, 0xb0(r1)
    psq_l f24, 0xa8(r1), 0, 0
    lfd f24, 0xa0(r1)
    psq_l f23, 0x98(r1), 0, 0
    lfd f23, 0x90(r1)
    psq_l f22, 0x88(r1), 0, 0
    lfd f22, 0x80(r1)
    psq_l f21, 0x78(r1), 0, 0
    lfd f21, 0x70(r1)
    psq_l f20, 0x68(r1), 0, 0
    lfd f20, 0x60(r1)
    psq_l f19, 0x58(r1), 0, 0
    lfd f19, 0x50(r1)
    psq_l f18, 0x48(r1), 0, 0
    lfd f18, 0x40(r1)
    psq_l f17, 0x38(r1), 0, 0
    lfd f17, 0x30(r1)
    psq_l f16, 0x28(r1), 0, 0
    lfd f16, 0x20(r1)
    psq_l f15, 0x18(r1), 0, 0
    lfd f15, 0x10(r1)
    lwz r31, 0xc(r1)
    addi r1, r1, 0x120
    blr
}

asm void fn_804827CC(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    blr
}

asm void fn_804827D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r10, 0x0
    li r7, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r9, 0x0(r4)
    lwz r0, 0x114(r9)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804827D8_00001628
lbl_fn_804827D8_0000131C:
    lwz r8, 0x110(r9)
    lwz r6, 0x24(r3)
    add r5, r8, r7
    lwz r0, 0x190(r5)
    cmplw r6, r0
    bne lbl_fn_804827D8_0000161C
    lbz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804827D8_00001358
    mulli r0, r10, 0x194
    lfs f1, 0xc(r4)
    addi r4, r3, 0x4c
    add r3, r8, r0
    bl fn_8047CB74
    b lbl_fn_804827D8_00001628
lbl_fn_804827D8_00001358:
    mulli r4, r10, 0x194
    addi r3, r3, 0x4c
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    lwzx r0, r8, r4
    stw r0, 0x3c(r3)
    add r31, r8, r4
    lfs f0, 0x4(r31)
    stfs f0, 0x40(r3)
    lfs f0, 0x8(r31)
    stfs f0, 0x44(r3)
    lwz r4, 0xc(r31)
    lwz r0, 0x10(r31)
    stw r0, 0x4c(r3)
    stw r4, 0x48(r3)
    lwz r4, 0x14(r31)
    lwz r0, 0x18(r31)
    stw r0, 0x54(r3)
    stw r4, 0x50(r3)
    lfs f0, 0x1c(r31)
    stfs f0, 0xc(r3)
    lfs f0, 0x20(r31)
    stfs f0, 0x10(r3)
    lfs f0, 0x24(r31)
    stfs f0, 0x14(r3)
    lfs f0, 0x28(r31)
    stfs f0, 0x18(r3)
    lfs f0, 0x2c(r31)
    stfs f0, 0x1c(r3)
    lfs f0, 0x30(r31)
    stfs f0, 0x20(r3)
    lfs f0, 0x34(r31)
    stfs f0, 0x24(r3)
    lfs f0, 0x38(r31)
    stfs f0, 0x28(r3)
    lfs f0, 0x3c(r31)
    stfs f0, 0x2c(r3)
    lfs f0, 0x40(r31)
    stfs f0, 0x30(r3)
    lfs f0, 0x44(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x48(r31)
    stfs f0, 0x38(r3)
    lwz r0, 0x4c(r31)
    stw r0, 0x198(r3)
    lwz r0, 0x50(r31)
    stw r0, 0x19c(r3)
    lwz r0, 0x54(r31)
    stw r0, 0x1a0(r3)
    lwz r0, 0x58(r31)
    stw r0, 0x1a4(r3)
    lwz r0, 0x5c(r31)
    stw r0, 0x1a8(r3)
    lwz r0, 0x60(r31)
    stw r0, 0x1ac(r3)
    lwz r0, 0x64(r31)
    stw r0, 0x1b0(r3)
    lfs f0, 0x68(r31)
    stfs f0, 0x1b4(r3)
    lfs f0, 0x6c(r31)
    stfs f0, 0x1b8(r3)
    lfs f0, 0x70(r31)
    stfs f0, 0x1bc(r3)
    lwz r4, 0x74(r31)
    lwz r0, 0x78(r31)
    stw r0, 0x1c4(r3)
    stw r4, 0x1c0(r3)
    lwz r4, 0x7c(r31)
    lwz r0, 0x80(r31)
    stw r0, 0x1cc(r3)
    stw r4, 0x1c8(r3)
    psq_l f1, 0x84(r31), 0, 0
    lfs f2, 0x8c(r31)
    stfs f2, 0x1d8(r3)
    psq_st f1, 0x1d0(r3), 0, 0
    lfs f0, 0x90(r31)
    stfs f0, 0x1dc(r3)
    lwz r0, 0x94(r31)
    stw r0, 0x238(r3)
    lwz r0, 0x98(r31)
    stw r0, 0x23c(r3)
    lfs f0, 0x9c(r31)
    stfs f0, 0x240(r3)
    lwz r4, 0xa0(r31)
    lwz r0, 0xa4(r31)
    stw r0, 0x248(r3)
    stw r4, 0x244(r3)
    lwz r4, 0xa8(r31)
    lwz r0, 0xac(r31)
    stw r0, 0x250(r3)
    stw r4, 0x24c(r3)
    psq_l f1, 0xb0(r31), 0, 0
    lfs f2, 0xb8(r31)
    stfs f2, 0x25c(r3)
    psq_st f1, 0x254(r3), 0, 0
    beq lbl_fn_804827D8_000014E0
    addi r5, r3, 0x264
    b lbl_fn_804827D8_000014E8
lbl_fn_804827D8_000014E0:
    lwz r4, lbl_8087EFA8
    addi r5, r4, 0x324
lbl_fn_804827D8_000014E8:
    lwz r0, 0xbc(r31)
    li r4, 0x0
    stw r0, 0x0(r5)
    psq_l f2, 0xc8(r31), 0, 0
    psq_l f1, 0xc0(r31), 0, 0
    psq_st f1, 0x4(r5), 0, 0
    psq_st f2, 0xc(r5), 0, 0
    psq_l f2, 0xd8(r31), 0, 0
    psq_l f1, 0xd0(r31), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    psq_st f2, 0x1c(r5), 0, 0
    psq_l f2, 0xe8(r31), 0, 0
    psq_l f1, 0xe0(r31), 0, 0
    psq_st f1, 0x24(r5), 0, 0
    psq_st f2, 0x2c(r5), 0, 0
    psq_l f2, 0xf8(r31), 0, 0
    psq_l f1, 0xf0(r31), 0, 0
    psq_st f1, 0x34(r5), 0, 0
    psq_st f2, 0x3c(r5), 0, 0
    lwz r0, 0x100(r31)
    stw r0, 0x44(r5)
    lwz r0, 0x104(r31)
    stw r0, 0x48(r5)
    lfs f0, 0x108(r31)
    stfs f0, 0x4c(r5)
    lwz r0, 0x10c(r31)
    stw r0, 0x1f8(r3)
    lwz r0, 0x110(r31)
    stw r0, 0x1fc(r3)
    lfs f0, 0x114(r31)
    stfs f0, 0x200(r3)
    psq_l f1, 0x118(r31), 0, 0
    psq_st f1, 0x204(r3), 0, 0
    psq_l f1, 0x120(r31), 0, 0
    psq_st f1, 0x20c(r3), 0, 0
    psq_l f1, 0x128(r31), 0, 0
    psq_st f1, 0x214(r3), 0, 0
    psq_l f1, 0x130(r31), 0, 0
    psq_st f1, 0x21c(r3), 0, 0
    psq_l f1, 0x138(r31), 0, 0
    psq_l f2, 0x140(r31), 0, 0
    psq_st f2, 0x22c(r3), 0, 0
    psq_st f1, 0x224(r3), 0, 0
    lwz r0, 0x148(r31)
    stw r0, 0x120(r3)
    bl fn_800C2448
    lwz r0, 0x14c(r31)
    stw r0, 0x0(r3)
    lwz r0, 0x150(r31)
    stw r0, 0x4(r3)
    lfs f2, 0x15c(r31)
    psq_l f1, 0x154(r31), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x168(r31)
    psq_l f1, 0x160(r31), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lwz r0, 0x16c(r31)
    stw r0, 0x20(r3)
    lfs f0, 0x170(r31)
    stfs f0, 0x24(r3)
    lfs f0, 0x174(r31)
    stfs f0, 0x28(r3)
    lfs f0, 0x178(r31)
    stfs f0, 0x2c(r3)
    lfs f0, 0x17c(r31)
    stfs f0, 0x30(r3)
    lwz r0, 0x184(r31)
    lwz r4, 0x180(r31)
    stw r4, 0x34(r3)
    stw r0, 0x38(r3)
    lwz r0, 0x18c(r31)
    lwz r4, 0x188(r31)
    stw r4, 0x3c(r3)
    stw r0, 0x40(r3)
    b lbl_fn_804827D8_00001628
lbl_fn_804827D8_0000161C:
    addi r7, r7, 0x194
    addi r10, r10, 0x1
    bdnz lbl_fn_804827D8_0000131C
lbl_fn_804827D8_00001628:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80482B24(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0xc0(r3)
    li r4, 0x0
    bne lbl_fn_80482B24_00001658
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80482B24_0000165C
lbl_fn_80482B24_00001658:
    li r4, 0x1
lbl_fn_80482B24_0000165C:
    li r0, -0x1
    stw r4, 0xbc(r3)
    stw r0, 0x114(r3)
    blr
}

asm void fn_80482B54(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    stw r31, 0xac(r1)
    lwz r0, 0x4(r4)
    lwz r5, 0xc(r4)
    cmpw r5, r0
    bge lbl_fn_80482B54_0000189C
    mulli r0, r5, 0x50
    lwz r5, 0x0(r4)
    lwz r7, 0x10(r4)
    addi r31, r1, 0x58
    lwz r6, 0x54(r4)
    addi r8, r1, 0xc
    add r11, r5, r0
    addi r5, r1, 0x5c
    psq_l f1, 0x4(r11), 0, 0
    addi r12, r1, 0x8
    psq_l f2, 0xc(r11), 0, 0
    li r0, 0x2
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r11), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    psq_l f2, 0x1c(r11), 0, 0
    psq_st f1, 0x14(r31), 0, 0
    psq_l f1, 0x24(r11), 0, 0
    psq_st f2, 0x1c(r31), 0, 0
    psq_l f2, 0x2c(r11), 0, 0
    psq_st f1, 0x24(r31), 0, 0
    psq_l f1, 0x34(r11), 0, 0
    psq_st f2, 0x2c(r31), 0, 0
    psq_l f2, 0x3c(r11), 0, 0
    psq_st f1, 0x34(r31), 0, 0
    psq_l f1, 0x14(r4), 0, 0
    psq_st f2, 0x3c(r31), 0, 0
    psq_l f2, 0x1c(r4), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x24(r4), 0, 0
    psq_st f2, 0x8(r8), 0, 0
    psq_l f2, 0x2c(r4), 0, 0
    psq_st f1, 0x14(r12), 0, 0
    psq_l f1, 0x34(r4), 0, 0
    psq_st f2, 0x1c(r12), 0, 0
    psq_l f2, 0x3c(r4), 0, 0
    psq_st f1, 0x24(r12), 0, 0
    lwz r10, 0x0(r11)
    psq_st f2, 0x2c(r12), 0, 0
    lwz r9, 0x44(r11)
    lwz r8, 0x48(r11)
    lfs f4, 0x4c(r11)
    psq_l f1, 0x44(r4), 0, 0
    psq_l f2, 0x4c(r4), 0, 0
    lwz r5, 0x58(r4)
    lfs f3, 0x5c(r4)
    lfs f11, 0x60(r4)
    lfs f0, lbl_80886F90
    stw r10, 0x58(r1)
    fsubs f6, f0, f11
    stw r9, 0x9c(r1)
    stw r8, 0xa0(r1)
    stfs f4, 0xa4(r1)
    stw r7, 0x8(r1)
    psq_st f1, 0x34(r12), 0, 0
    psq_st f2, 0x3c(r12), 0, 0
    stw r6, 0x4c(r1)
    stw r5, 0x50(r1)
    stfs f3, 0x54(r1)
    mtctr r0
lbl_fn_80482B54_00001774:
    lfs f5, 0x4(r12)
    lfs f8, 0x8(r12)
    fmuls f5, f5, f6
    lfs f7, 0x4(r31)
    fmuls f4, f8, f6
    lfs f9, 0xc(r12)
    lfs f10, 0x10(r12)
    fmadds f7, f7, f11, f5
    fmuls f3, f9, f6
    lfs f5, 0x14(r12)
    stfs f7, 0x4(r31)
    fmuls f0, f10, f6
    fmuls f5, f5, f6
    lfs f7, 0x8(r31)
    lfs f8, 0x18(r12)
    fmadds f7, f7, f11, f4
    lfs f9, 0x1c(r12)
    fmuls f4, f8, f6
    lfsu f10, 0x20(r12)
    stfs f7, 0x8(r31)
    lfs f7, 0xc(r31)
    fmadds f7, f7, f11, f3
    fmuls f3, f9, f6
    stfs f7, 0xc(r31)
    lfs f7, 0x10(r31)
    fmadds f7, f7, f11, f0
    fmuls f0, f10, f6
    stfs f7, 0x10(r31)
    lfs f7, 0x14(r31)
    fmadds f7, f7, f11, f5
    stfs f7, 0x14(r31)
    lfs f7, 0x18(r31)
    fmadds f7, f7, f11, f4
    stfs f7, 0x18(r31)
    lfs f7, 0x1c(r31)
    fmadds f7, f7, f11, f3
    stfs f7, 0x1c(r31)
    lfs f7, 0x20(r31)
    fmadds f7, f7, f11, f0
    stfsu f7, 0x20(r31)
    bdnz lbl_fn_80482B54_00001774
    addi r5, r1, 0x5c
    lwz r6, 0x58(r1)
    psq_l f1, 0x0(r5), 0, 0
    addi r8, r1, 0x6c
    psq_l f2, 0x8(r5), 0, 0
    addi r5, r1, 0x7c
    psq_st f1, 0x2b4(r3), 0, 0
    addi r9, r1, 0x8c
    psq_l f1, 0x0(r8), 0, 0
    li r7, 0x1
    psq_st f2, 0x2bc(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    psq_st f1, 0x2c4(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f2, 0x2cc(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_st f1, 0x2d4(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    psq_st f2, 0x2dc(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    lwz r5, 0x9c(r1)
    lwz r0, 0xa0(r1)
    lfs f0, 0xa4(r1)
    stw r7, 0x2ac(r3)
    stw r6, 0x2b0(r3)
    psq_st f1, 0x2e4(r3), 0, 0
    psq_st f2, 0x2ec(r3), 0, 0
    stw r5, 0x2f4(r3)
    stw r0, 0x2f8(r3)
    stfs f0, 0x2fc(r3)
    lwz r3, 0xc(r4)
    addi r0, r3, 0x1
    stw r0, 0xc(r4)
lbl_fn_80482B54_0000189C:
    lwz r31, 0xac(r1)
    addi r1, r1, 0xb0
    blr
}

asm void fn_80482D90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0x4c
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    bl fn_800C2448
    lfs f2, 0x1c(r31)
    psq_l f1, 0x14(r31), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    lfs f0, 0x34(r31)
    stfs f0, 0x34(r3)
    lfs f0, 0x38(r31)
    stfs f0, 0x38(r3)
    lfs f0, 0x3c(r31)
    stfs f0, 0x3c(r3)
    lfs f0, 0x40(r31)
    stfs f0, 0x40(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80482DF4(void)
{
    nofralloc
    lfs f0, 0x28(r4)
    stfs f0, 0x20c(r3)
    lfs f0, 0x2c(r4)
    stfs f0, 0x210(r3)
    lfs f0, 0x30(r4)
    stfs f0, 0x214(r3)
    lfs f0, 0x34(r4)
    stfs f0, 0x218(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0x204(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x200(r3)
    blr
}

asm void fn_80482E28(void)
{
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x68(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x6c(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x70(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0x74(r3)
    blr
}

asm void fn_80482E4C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r4)
    lwz r0, 0x114(r6)
    cmpw r5, r0
    bge lbl_fn_80482E4C_000019C4
    mulli r0, r5, 0x194
    lwz r5, 0x110(r6)
    add r5, r5, r0
    lfs f3, 0x2c(r5)
    lfs f2, 0x30(r5)
    lfs f1, 0x34(r5)
    lfs f0, 0x38(r5)
    stfs f0, 0x74(r3)
    stfs f3, 0x68(r3)
    stfs f2, 0x6c(r3)
    stfs f1, 0x70(r3)
    lwz r3, 0x4(r4)
    stfs f3, 0x8(r1)
    addi r0, r3, 0x1
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f0, 0x14(r1)
    stw r0, 0x4(r4)
lbl_fn_80482E4C_000019C4:
    addi r1, r1, 0x20
    blr
}

asm void fn_80482EB4(void)
{
    nofralloc
    lfs f0, 0x0(r4)
    stfs f0, 0x58(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x5c(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x60(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0x64(r3)
    blr
}

asm void fn_80482ED8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    stw r30, 0x48(r1)
    lbz r0, 0x1ab0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80482ED8_00002144
    lwz r4, lbl_8087EFA8
    cmpwi r4, 0x0
    beq lbl_fn_80482ED8_00002144
    lwz r0, lbl_8087EFB4
    cmpwi r0, 0x0
    beq lbl_fn_80482ED8_00002144
    lwz r5, 0x54(r4)
    stw r5, 0x1ab8(r3)
    lwz r5, 0x58(r4)
    stw r5, 0x1abc(r3)
    lwz r5, 0x5c(r4)
    stw r5, 0x1ac0(r3)
    lwz r5, 0x60(r4)
    stw r5, 0x1ac4(r3)
    lwz r5, 0x64(r4)
    stw r5, 0x1ac8(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x1acc(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x1ad0(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0x1ad4(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x1ad8(r3)
    lwz r6, 0x78(r4)
    lwz r5, 0x7c(r4)
    stw r5, 0x1ae0(r3)
    stw r6, 0x1adc(r3)
    lwz r6, 0x80(r4)
    lwz r5, 0x84(r4)
    stw r5, 0x1ae8(r3)
    stw r6, 0x1ae4(r3)
    lwz r5, 0x88(r4)
    stw r5, 0x1aec(r3)
    lwz r6, 0x8c(r4)
    lwz r5, 0x90(r4)
    stw r5, 0x1af4(r3)
    stw r6, 0x1af0(r3)
    lwz r6, 0x94(r4)
    lwz r5, 0x98(r4)
    stw r5, 0x1afc(r3)
    stw r6, 0x1af8(r3)
    lwz r6, 0x9c(r4)
    lwz r5, 0xa0(r4)
    stw r5, 0x1b04(r3)
    stw r6, 0x1b00(r3)
    lwz r6, 0xa4(r4)
    lwz r5, 0xa8(r4)
    stw r5, 0x1b0c(r3)
    stw r6, 0x1b08(r3)
    lwz r6, 0xac(r4)
    lwz r5, 0xb0(r4)
    stw r5, 0x1b14(r3)
    stw r6, 0x1b10(r3)
    lwz r6, 0xb4(r4)
    lwz r5, 0xb8(r4)
    stw r5, 0x1b1c(r3)
    stw r6, 0x1b18(r3)
    lwz r6, 0xbc(r4)
    lwz r5, 0xc0(r4)
    stw r5, 0x1b24(r3)
    stw r6, 0x1b20(r3)
    lwz r5, 0xc4(r4)
    stw r5, 0x1b28(r3)
    lwz r6, 0xc8(r4)
    lwz r5, 0xcc(r4)
    stw r5, 0x1b30(r3)
    stw r6, 0x1b2c(r3)
    lwz r5, 0xd0(r4)
    stw r5, 0x1b34(r3)
    lwz r5, 0xd4(r4)
    stw r5, 0x1b38(r3)
    lwz r5, 0xd8(r4)
    stw r5, 0x1b3c(r3)
    lwz r5, 0xdc(r4)
    stw r5, 0x1b40(r3)
    lwz r5, 0xe0(r4)
    stw r5, 0x1b44(r3)
    lfs f0, 0xe4(r4)
    stfs f0, 0x1b48(r3)
    lfs f0, 0xe8(r4)
    stfs f0, 0x1b4c(r3)
    lfs f0, 0xec(r4)
    stfs f0, 0x1b50(r3)
    lfs f0, 0xf0(r4)
    stfs f0, 0x1b54(r3)
    lwz r5, 0xf4(r4)
    stw r5, 0x1b58(r3)
    lwz r5, 0xf8(r4)
    stw r5, 0x1b5c(r3)
    lfs f0, 0xfc(r4)
    stfs f0, 0x1b60(r3)
    lfs f0, 0x100(r4)
    stfs f0, 0x1b64(r3)
    lwz r5, 0x240(r4)
    stw r5, 0x1b68(r3)
    lwz r5, 0x244(r4)
    li r7, 0x0
    stw r5, 0x1b6c(r3)
    lfs f0, lbl_80886F90
    lwz r5, 0x248(r4)
    stw r5, 0x1b70(r3)
    lfs f3, lbl_80886F8C
    lfs f4, 0x24c(r4)
    stfs f4, 0x1b74(r3)
    lfs f4, 0x250(r4)
    stfs f4, 0x1b78(r3)
    lwz r5, 0x254(r4)
    stw r5, 0x1b7c(r3)
    lwz r5, 0x258(r4)
    stw r5, 0x1b80(r3)
    lfs f4, 0x25c(r4)
    stfs f4, 0x1b84(r3)
    lfs f4, 0x260(r4)
    stfs f4, 0x1b88(r3)
    lwz r5, 0x374(r4)
    stw r5, 0x1b8c(r3)
    lwz r5, 0x378(r4)
    stw r5, 0x1b90(r3)
    lwz r6, 0x37c(r4)
    lwz r5, 0x380(r4)
    stw r5, 0x1b98(r3)
    stw r6, 0x1b94(r3)
    lwz r6, 0x384(r4)
    lwz r5, 0x388(r4)
    stw r5, 0x1ba0(r3)
    stw r6, 0x1b9c(r3)
    lfs f4, 0x38c(r4)
    stfs f4, 0x1ba4(r3)
    lfs f4, 0x390(r4)
    stfs f4, 0x1ba8(r3)
    lfs f4, 0x394(r4)
    stfs f4, 0x1bac(r3)
    stfs f0, 0x24(r1)
    stw r7, 0x374(r4)
    lwz r5, 0x24(r1)
    stw r7, 0x378(r4)
    stfs f0, 0x28(r1)
    stw r5, 0x37c(r4)
    lwz r6, 0x28(r1)
    stfs f0, 0x2c(r1)
    stw r6, 0x380(r4)
    lwz r5, 0x2c(r1)
    stfs f0, 0x30(r1)
    stw r5, 0x384(r4)
    lwz r5, 0x30(r1)
    stw r5, 0x388(r4)
    stfs f3, 0x38c(r4)
    stfs f3, 0x390(r4)
    stfs f3, 0x394(r4)
    lwz r5, 0x2ac(r4)
    stw r5, 0x1bb0(r3)
    lwz r5, 0x2b0(r4)
    stw r5, 0x1bb4(r3)
    lfs f0, 0x2b4(r4)
    stfs f0, 0x1bb8(r3)
    lfs f0, 0x2b8(r4)
    stfs f0, 0x1bbc(r3)
    mr r3, r0
    stw r7, 0x1c(r1)
    stw r7, 0x20(r1)
    stfs f3, 0x34(r1)
    stfs f3, 0x38(r1)
    stfs f3, 0x3c(r1)
    bl fn_800C16B4
    lwz r0, 0x3c(r3)
    addi r6, r31, 0x1c54
    stw r0, 0x1bd0(r31)
    addi r5, r31, 0x1c64
    lfs f0, 0x40(r3)
    stfs f0, 0x1bd4(r31)
    lfs f0, 0x44(r3)
    stfs f0, 0x1bd8(r31)
    lwz r4, 0x48(r3)
    lwz r0, 0x4c(r3)
    stw r0, 0x1be0(r31)
    stw r4, 0x1bdc(r31)
    lwz r4, 0x50(r3)
    lwz r0, 0x54(r3)
    stw r0, 0x1be8(r31)
    stw r4, 0x1be4(r31)
    lfs f0, 0xc(r3)
    stfs f0, 0x1bec(r31)
    lfs f0, 0x10(r3)
    stfs f0, 0x1bf0(r31)
    lfs f0, 0x14(r3)
    stfs f0, 0x1bf4(r31)
    lfs f0, 0x18(r3)
    stfs f0, 0x1bf8(r31)
    lfs f0, 0x1c(r3)
    stfs f0, 0x1bfc(r31)
    lfs f0, 0x20(r3)
    stfs f0, 0x1c00(r31)
    lfs f0, 0x24(r3)
    stfs f0, 0x1c04(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x1c08(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x1c0c(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x1c10(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0x1c14(r31)
    lfs f0, 0x38(r3)
    stfs f0, 0x1c18(r31)
    lwz r0, 0x198(r3)
    stw r0, 0x1c1c(r31)
    lwz r0, 0x19c(r3)
    stw r0, 0x1c20(r31)
    lwz r0, 0x1a0(r3)
    stw r0, 0x1c24(r31)
    lwz r0, 0x1a4(r3)
    stw r0, 0x1c28(r31)
    lwz r0, 0x1a8(r3)
    stw r0, 0x1c2c(r31)
    lwz r0, 0x1ac(r3)
    stw r0, 0x1c30(r31)
    lwz r0, 0x1b0(r3)
    stw r0, 0x1c34(r31)
    lfs f0, 0x1b4(r3)
    stfs f0, 0x1c38(r31)
    lfs f0, 0x1b8(r3)
    stfs f0, 0x1c3c(r31)
    lfs f0, 0x1bc(r3)
    stfs f0, 0x1c40(r31)
    lwz r4, 0x1c0(r3)
    lwz r0, 0x1c4(r3)
    stw r0, 0x1c48(r31)
    stw r4, 0x1c44(r31)
    lwz r4, 0x1c8(r3)
    lwz r0, 0x1cc(r3)
    stw r0, 0x1c50(r31)
    stw r4, 0x1c4c(r31)
    psq_l f1, 0x1d0(r3), 0, 0
    lfs f2, 0x1d8(r3)
    stfs f2, 0x1c5c(r31)
    psq_st f1, 0x0(r6), 0, 0
    lfs f0, 0x1dc(r3)
    stfs f0, 0x1c60(r31)
    lwz r0, 0x238(r3)
    stw r0, 0x1c64(r31)
    lwz r0, 0x23c(r3)
    stw r0, 0x1c68(r31)
    lfs f0, 0x240(r3)
    stfs f0, 0x1c6c(r31)
    lwz r4, 0x244(r3)
    lwz r0, 0x248(r3)
    stw r0, 0x1c74(r31)
    stw r4, 0x1c70(r31)
    lwz r4, 0x24c(r3)
    lwz r0, 0x250(r3)
    stw r0, 0x1c7c(r31)
    stw r4, 0x1c78(r31)
    psq_l f1, 0x254(r3), 0, 0
    lfs f2, 0x25c(r3)
    stfs f2, 0x1c88(r31)
    psq_st f1, 0x1c(r5), 0, 0
    lwz r0, 0x260(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80482ED8_00001E2C
    addi r30, r3, 0x264
    b lbl_fn_80482ED8_00001E34
lbl_fn_80482ED8_00001E2C:
    lwz r4, lbl_8087EFA8
    addi r30, r4, 0x324
lbl_fn_80482ED8_00001E34:
    lwz r0, 0x0(r30)
    addi r4, r31, 0x1c90
    stw r0, 0x1c8c(r31)
    addi r10, r31, 0x1ca0
    addi r11, r31, 0x1cb0
    addi r12, r31, 0x1cc0
    psq_l f1, 0x4(r30), 0, 0
    addi r5, r31, 0x1ce8
    psq_l f2, 0xc(r30), 0, 0
    addi r6, r31, 0x1cf0
    psq_st f2, 0x8(r4), 0, 0
    addi r7, r31, 0x1cf8
    addi r8, r31, 0x1d00
    addi r9, r31, 0x1d08
    psq_st f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_l f1, 0x14(r30), 0, 0
    psq_l f2, 0x1c(r30), 0, 0
    psq_st f2, 0x8(r10), 0, 0
    psq_st f1, 0x0(r10), 0, 0
    psq_l f1, 0x24(r30), 0, 0
    psq_l f2, 0x2c(r30), 0, 0
    psq_st f2, 0x8(r11), 0, 0
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x34(r30), 0, 0
    psq_l f2, 0x3c(r30), 0, 0
    psq_st f2, 0x8(r12), 0, 0
    psq_st f1, 0x0(r12), 0, 0
    lwz r0, 0x44(r30)
    stw r0, 0x1cd0(r31)
    lwz r0, 0x48(r30)
    stw r0, 0x1cd4(r31)
    lfs f0, 0x4c(r30)
    stfs f0, 0x1cd8(r31)
    lwz r0, 0x1f8(r3)
    stw r0, 0x1cdc(r31)
    lwz r0, 0x1fc(r3)
    stw r0, 0x1ce0(r31)
    lfs f0, 0x200(r3)
    stfs f0, 0x1ce4(r31)
    psq_l f1, 0x204(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x20c(r3), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    psq_l f1, 0x214(r3), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x21c(r3), 0, 0
    psq_st f1, 0x0(r8), 0, 0
    psq_l f1, 0x224(r3), 0, 0
    psq_l f2, 0x22c(r3), 0, 0
    psq_st f2, 0x8(r9), 0, 0
    psq_st f1, 0x0(r9), 0, 0
    lwz r0, 0x120(r3)
    stw r0, 0x1d18(r31)
    bl fn_800C2448
    lwz r0, 0x0(r3)
    addi r5, r31, 0x1d24
    stw r0, 0x1d1c(r31)
    addi r6, r31, 0x1d30
    lwz r7, 0x1bc4(r31)
    li r4, 0x0
    lwz r0, 0x4(r3)
    stw r0, 0x1d20(r31)
    subf r0, r7, r7
    psq_l f1, 0x8(r3), 0, 0
    lfs f2, 0x10(r3)
    stfs f2, 0x1d2c(r31)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x14(r3), 0, 0
    lfs f2, 0x1c(r3)
    stfs f2, 0x1d38(r31)
    psq_st f1, 0x0(r6), 0, 0
    lwz r5, 0x20(r3)
    stw r5, 0x1d3c(r31)
    lfs f0, 0x24(r3)
    stfs f0, 0x1d40(r31)
    lfs f0, 0x28(r3)
    stfs f0, 0x1d44(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x1d48(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x1d4c(r31)
    lwz r6, 0x34(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x1d54(r31)
    stw r6, 0x1d50(r31)
    lwz r5, 0x3c(r3)
    lwz r3, 0x40(r3)
    stw r3, 0x1d5c(r31)
    stw r5, 0x1d58(r31)
    stw r0, 0x1bc4(r31)
    lbz r0, lbl_8087F4C0
    stw r4, 0x8(r1)
    extsb. r0, r0
    bne lbl_fn_80482ED8_00001FD8
    lis r6, lbl_807C88F0@ha
    lis r4, fn_8041D180@ha
    lis r3, fn_8041D198@ha
    li r0, 0x1
    addi r3, r3, fn_8041D198@l
    addi r5, r6, lbl_807C88F0@l
    addi r4, r4, fn_8041D180@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C88F0@l(r6)
    stb r0, lbl_8087F4C0
lbl_fn_80482ED8_00001FD8:
    lis r3, lbl_807C88F0@ha
    lwz r12, lbl_807C88F0@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80482ED8_00001FFC
    addi r3, r1, 0xc
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80482ED8_00001FFC:
    lis r0, fn_80481B9C@ha
    addic. r0, r0, 7068
    beq lbl_fn_80482ED8_00002014
    stw r0, 0xc(r1)
    li r0, 0x1
    b lbl_fn_80482ED8_00002018
lbl_fn_80482ED8_00002014:
    li r0, 0x0
lbl_fn_80482ED8_00002018:
    cmpwi r0, 0x0
    beq lbl_fn_80482ED8_00002030
    lis r3, lbl_807C88F0@ha
    addi r3, r3, lbl_807C88F0@l
    stw r3, 0x8(r1)
    b lbl_fn_80482ED8_00002038
lbl_fn_80482ED8_00002030:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80482ED8_00002038:
    lwz r3, lbl_8087F558
    addi r4, r1, 0x8
    addi r5, r31, 0x1ab0
    bl fn_80491528
    addic. r3, r1, 0x8
    beq lbl_fn_80482ED8_00002084
    lwz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80482ED8_00002084
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_80482ED8_0000207C
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80482ED8_0000207C:
    li r0, 0x0
    stw r0, 0x8(r1)
lbl_fn_80482ED8_00002084:
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x74(r3)
    li r30, 0x0
    stw r0, 0x1bcc(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80482ED8_000020BC
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80482ED8_000020BC
    lwz r3, lbl_8087F430
    bl fn_80373148
    mr r30, r3
lbl_fn_80482ED8_000020BC:
    cmpwi r30, 0x0
    bne lbl_fn_80482ED8_000020E0
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_80482ED8_000020E0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80482ED8_000020E0
    lwz r30, 0x4c(r3)
lbl_fn_80482ED8_000020E0:
    cmpwi r30, 0x0
    beq lbl_fn_80482ED8_000020F0
    lwz r0, 0x104(r30)
    stw r0, 0x1d6c(r31)
lbl_fn_80482ED8_000020F0:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80482ED8_00002118
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80482ED8_00002110
    lwz r0, 0xc4(r3)
    b lbl_fn_80482ED8_0000211C
lbl_fn_80482ED8_00002110:
    lwz r0, 0x8c(r3)
    b lbl_fn_80482ED8_0000211C
lbl_fn_80482ED8_00002118:
    li r0, -0x1
lbl_fn_80482ED8_0000211C:
    stw r0, 0x1d64(r31)
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80482ED8_00002134
    lfs f0, 0x94(r3)
    b lbl_fn_80482ED8_00002138
lbl_fn_80482ED8_00002134:
    lfs f0, lbl_80886F8C
lbl_fn_80482ED8_00002138:
    li r0, 0x1
    stfs f0, 0x1d68(r31)
    stb r0, 0x1ab0(r31)
lbl_fn_80482ED8_00002144:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
