#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D0F8(void);
extern void fn_8000D114(void);
extern void fn_8000D124(void);
extern void fn_8000D3A8(void);
extern void fn_8000D430(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80012C88(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80013484(void);
extern void fn_8003EFB0(void);
extern void fn_8004ECC0(void);
extern void fn_8004ED34(void);
extern void fn_80057A64(void);
extern void fn_8005B9CC(void);
extern void fn_8005BBF8(void);
extern void fn_8005BCE8(void);
extern void fn_80084320(void);
extern void fn_8008AD4C(void);
extern void fn_8008B140(void);
extern void fn_8008CCE8(void);
extern void fn_80092814(void);
extern void fn_80092F1C(void);
extern void fn_80096E94(void);
extern void fn_800C344C(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6E4(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC288(void);
extern void fn_800F52F8(void);
extern void fn_800F72CC(void);
extern void fn_800F7F90(void);
extern void fn_800F7FD8(void);
extern void fn_800F80A8(void);
extern void fn_800F80B8(void);
extern void fn_800F84C8(void);
extern void fn_801162A0(void);
extern void fn_80121F00(void);
extern void fn_8013A18C(void);
extern void fn_8013C38C(void);
extern void fn_8013C3B4(void);
extern void fn_8013C480(void);
extern void fn_801404F8(void);
extern void fn_80140500(void);
extern void fn_80144ED4(void);
extern void fn_80148334(void);
extern void fn_801750FC(void);
extern void fn_80198C00(void);
extern void fn_801A03E0(void);
extern void fn_801A03E8(void);
extern void fn_801A03EC(void);
extern void fn_801A0408(void);
extern void fn_80232B7C(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_80237874(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_80266154(void);
extern void fn_802A36B0(void);
extern void fn_802A4094(void);
extern void fn_802F0998(void);
extern void fn_80315644(void);
extern void fn_80316E38(void);
extern void fn_80317034(void);
extern void fn_80373148(void);
extern void fn_803750E4(void);
extern void fn_803D6E24(void);
extern void fn_803EC568(void);
extern void fn_803EC69C(void);
extern void fn_803EC91C(void);
extern void fn_803ED774(void);
extern void fn_803EFDA4(void);
extern void fn_803EFDAC(void);
extern void fn_803FB870(void);
extern void fn_803FBC34(void);
extern void fn_804093B4(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_804EB1B0(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_80752540[];
extern u8 lbl_80752550[];
extern u8 lbl_80752568[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078CE90[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8750[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087EE74;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F610;
extern u32 lbl_80886038;
extern u32 lbl_8088603C;
extern u32 lbl_80886040;
extern u32 lbl_80886044;
extern u32 lbl_80886048;
extern u32 lbl_8088604C;
extern u32 lbl_80886050;
extern u32 lbl_80886054;
extern u32 lbl_80886058;
extern u32 lbl_8088605C;
extern u32 lbl_80886060;
extern u32 lbl_80886064;
extern u32 lbl_80886068;
extern u32 lbl_8088606C;

/* Function declarations */
void fn_803F9E14(void);
void fn_803F9E70(void);
void fn_803F9E9C(void);
void fn_803F9EDC(void);
void fn_803F9F34(void);
void fn_803F9FA8(void);
void fn_803FA148(void);
void fn_803FA1E4(void);
void fn_803FA214(void);
void fn_803FA3D0(void);
void fn_803FA540(void);
void fn_803FA59C(void);
void fn_803FA5C8(void);
void fn_803FADF4(void);
void fn_803FAE08(void);
void fn_803FAE38(void);
void fn_803FAE84(void);
void fn_803FAE8C(void);
void fn_803FAEB4(void);
void fn_803FAEFC(void);
void fn_803FAF8C(void);

asm void fn_803F9E14(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_803F9E14_00000010
    li r3, 0x0
    blr
lbl_fn_803F9E14_00000010:
    lwz r5, 0x0(r4)
    subi r0, r5, 0x1
    cmplwi r0, 0x2
    bgt lbl_fn_803F9E14_00000054
    lwz r4, 0xf8(r3)
    stw r5, 0x54(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803F9E14_00000054
    cmpwi r5, 0x2
    blt lbl_fn_803F9E14_00000048
    lwz r0, 0x54c(r4)
    oris r0, r0, 0x8
    stw r0, 0x54c(r4)
    b lbl_fn_803F9E14_00000054
lbl_fn_803F9E14_00000048:
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x54c(r4)
lbl_fn_803F9E14_00000054:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_803F9E70(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    li r4, 0x0
    cmpwi r0, 0x2
    blt lbl_fn_803F9E70_00000080
    lwz r3, 0xf4(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803F9E70_00000080
    li r4, 0x1
lbl_fn_803F9E70_00000080:
    mr r3, r4
    blr
}

asm void fn_803F9E9C(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_803F9E9C_0000009C
    cmpwi r4, 0x9
    beq lbl_fn_803F9E9C_000000A4
    b lbl_fn_803F9E9C_000000C0
lbl_fn_803F9E9C_0000009C:
    lwz r3, 0x104(r3)
    blr
lbl_fn_803F9E9C_000000A4:
    lwz r3, 0xf8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803F9E9C_000000B8
    lwz r3, 0x58(r3)
    blr
lbl_fn_803F9E9C_000000B8:
    li r3, 0x0
    blr
lbl_fn_803F9E9C_000000C0:
    li r3, 0x0
    blr
}

asm void fn_803F9EDC(void)
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
    beq lbl_fn_803F9EDC_00000104
    li r4, 0x0
    bl fn_803EC69C
    cmpwi r31, 0x0
    ble lbl_fn_803F9EDC_00000104
    mr r3, r30
    bl dtor_80084684
lbl_fn_803F9EDC_00000104:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F9F34(void)
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
    beq lbl_fn_803F9F34_00000178
    lis r5, lbl_80752568@ha
    li r3, 0x528
    addi r5, r5, lbl_80752568@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803F9F34_0000017C
    mr r4, r30
    mr r5, r31
    bl fn_803F9FA8
    b lbl_fn_803F9F34_0000017C
lbl_fn_803F9F34_00000178:
    li r3, 0x0
lbl_fn_803F9F34_0000017C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803F9FA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r5
    lwz r5, 0x18(r5)
    lwz r6, 0x1c(r29)
    bl fn_803EC568
    lis r4, lbl_8078CE90@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078CE90@l
    stw r4, 0x0(r31)
    li r4, 0x1
    li r5, 0x20
    bl fn_80096E94
    li r30, 0x0
    li r0, 0x1
    stw r29, 0x4c4(r31)
    addi r3, r31, 0x500
    stw r30, 0x4c8(r31)
    stw r30, 0x4cc(r31)
    stw r30, 0x4d0(r31)
    stw r0, 0x4f0(r31)
    stw r30, 0x4f4(r31)
    stw r30, 0x4f8(r31)
    stw r30, 0x4fc(r31)
    bl fn_802377B8
    addi r3, r31, 0x50c
    bl fn_802377B8
    addi r3, r31, 0x518
    bl fn_800CB360
    li r0, 0xff
    li r5, -0x1
    li r4, 0x6
    stw r30, 0x51c(r31)
    lis r3, 0x1062
    stb r0, 0x520(r31)
    addi r0, r3, 0x4dd3
    stw r5, 0x524(r31)
    stw r30, 0x54(r31)
    stw r4, 0xe8(r31)
    lwz r4, 0x18(r29)
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x1
    bne lbl_fn_803F9FA8_00000274
    li r0, 0x13
    stw r0, 0xec(r31)
    b lbl_fn_803F9FA8_0000027C
lbl_fn_803F9FA8_00000274:
    li r0, 0x3
    stw r0, 0xec(r31)
lbl_fn_803F9FA8_0000027C:
    lwz r3, 0x4c4(r31)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803F9FA8_00000314
    lwz r5, 0x4c(r31)
    mr r3, r31
    li r4, 0x4650
    addi r5, r5, 0x1b58
    bl fn_804093B4
    stw r3, 0x51c(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x4c4(r31)
    addi r4, r1, 0x8
    lfs f0, lbl_80886038
    li r5, 0x0
    lwz r6, 0x51c(r31)
    lfs f2, 0xc(r3)
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x6c(r6), 0, 0
    stfs f2, 0x74(r6)
    fmr f2, f0
    lwz r3, 0x4c4(r31)
    stfs f0, 0x8(r1)
    lfs f3, 0x14(r3)
    stfs f3, 0xc(r1)
    lwz r3, 0x51c(r31)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x78(r3), 0, 0
    stfs f2, 0x80(r3)
    lwz r3, 0x51c(r31)
    lwz r4, 0x4c4(r31)
    lwz r12, 0x0(r3)
    stfs f0, 0x10(r1)
    lwz r12, 0x68(r12)
    lwz r4, 0x24(r4)
    mtctr r12
    bctrl
lbl_fn_803F9FA8_00000314:
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FA148(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_803EC91C
    cmpwi r3, 0x0
    bne lbl_fn_803FA148_000003B8
    addi r3, r31, 0x500
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803FA148_000003B8
    addi r3, r31, 0x50c
    bl fn_80237874
    cmpwi r3, 0x0
    bne lbl_fn_803FA148_000003B8
    mr r3, r31
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803FA148_000003B8
    lwz r3, 0x51c(r31)
    li r0, 0x1
    stw r0, 0x54(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803FA148_000003B0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x51c(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803FA148_000003B0:
    li r3, 0x1
    b lbl_fn_803FA148_000003BC
lbl_fn_803FA148_000003B8:
    li r3, 0x0
lbl_fn_803FA148_000003BC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FA1E4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addi r3, r3, 0xf4
    stw r0, 0x14(r1)
    bl fn_8008B140
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FA214(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r30, r3
    addi r3, r29, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl fn_8005BCE8
    lis r31, lbl_80752568@ha
    addi r31, r31, lbl_80752568@l
lbl_fn_803FA214_000004B0:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803FA214_00000590
    addi r4, r31, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FA214_000004F4
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl fn_8008AD4C
    b lbl_fn_803FA214_00000590
lbl_fn_803FA214_000004F4:
    mr r3, r30
    addi r4, r31, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FA214_0000053C
    addi r3, r1, 0x108
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl fn_8005B9CC
    bl fn_800DC288
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl fn_80092F1C
    b lbl_fn_803FA214_00000590
lbl_fn_803FA214_0000053C:
    mr r3, r30
    addi r4, r31, 0x11
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FA214_00000590
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_803FA214_00000570
    mr r4, r3
    addi r3, r29, 0x500
    bl fn_8023780C
lbl_fn_803FA214_00000570:
    addi r3, r1, 0x108
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_803FA214_00000590
    mr r4, r3
    addi r3, r29, 0x50c
    bl fn_8023780C
lbl_fn_803FA214_00000590:
    addi r3, r1, 0x108
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803FA214_000004B0
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_803FA3D0(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    stw r28, 0x640(r1)
    mr r28, r3
    addi r3, r3, 0x60
    bl fn_8047059C
    mr r31, r3
    addi r3, r28, 0x60
    bl fn_80470580
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r31
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
    lis r30, lbl_80752568@ha
    li r31, 0x55f0
    addi r30, r30, lbl_80752568@l
lbl_fn_803FA3D0_00000674:
    addi r3, r1, 0x8
    bl fn_8005B9CC
    lbz r0, 0x0(r3)
    mr r29, r3
    cmpwi r0, 0x3b
    beq lbl_fn_803FA3D0_000006FC
    addi r4, r30, 0x15
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FA3D0_000006D8
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4f4(r28)
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4f8(r28)
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_803FA3D0_000006FC
    cmpwi r3, 0x7d0
    bne lbl_fn_803FA3D0_000006FC
    stw r31, 0x4f8(r28)
    b lbl_fn_803FA3D0_000006FC
lbl_fn_803FA3D0_000006D8:
    mr r3, r29
    addi r4, r30, 0x23
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_803FA3D0_000006FC
    addi r3, r1, 0x8
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4fc(r28)
lbl_fn_803FA3D0_000006FC:
    addi r3, r1, 0x8
    bl fn_8005BBF8
    cmpwi r3, 0x0
    bne lbl_fn_803FA3D0_00000674
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    lwz r28, 0x640(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_803FA540(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886038
    li r4, 0x1
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803FA59C(void)
{
    nofralloc
    lfs f0, lbl_80886038
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f0, 0x18(r3)
    stfs f0, 0x1c(r3)
    blr
}

asm void fn_803FA5C8(void)
{
    nofralloc
    stwu r1, -0x210(r1)
    mflr r0
    stw r0, 0x214(r1)
    stfd f31, 0x200(r1)
    psq_st f31, 0x208(r1), 0, 0
    stfd f30, 0x1f0(r1)
    psq_st f30, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    lwz r4, 0x4c4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FA5C8_00000FB8
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_0000084C
    bl fn_80121F00
    bl fn_803D6E24
    subi r0, r3, 0x8
    cmplwi r0, 0x3
    bgt lbl_fn_803FA5C8_0000084C
    mr r3, r31
    bl fn_8013A18C
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000FB8
    addi r3, r1, 0x110
    li r4, 0x8
    bl fn_803FA59C
    lwz r12, 0x0(r31)
    mr r3, r31
    addi r4, r1, 0x110
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x4d0(r31)
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_0000084C:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x8
    bne lbl_fn_803FA5C8_000008E0
    lwz r0, 0x9c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803FA5C8_000008E0
    lwz r0, 0x51c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803FA5C8_000008E0
    lwz r3, 0x4d0(r31)
    subi r0, r3, 0x1
    stw r0, 0x4d0(r31)
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_000008B0
    bl fn_800F7F90
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_803FA5C8_000008B0
    lwz r3, 0x4d0(r31)
    li r0, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_803FA5C8_000008AC
    mr r0, r3
lbl_fn_803FA5C8_000008AC:
    stw r0, 0x4d0(r31)
lbl_fn_803FA5C8_000008B0:
    lwz r0, 0x4d0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803FA5C8_00000FB8
    li r0, 0x1
    stw r0, 0x9c(r31)
    mr r3, r31
    lwz r12, 0x0(r31)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    b lbl_fn_803FA5C8_000008E0
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_000008E0:
    lwz r3, 0x54(r31)
    subi r0, r3, 0x5
    cmplwi r0, 0x1
    ble lbl_fn_803FA5C8_000008F8
    cmpwi r3, 0x2
    bne lbl_fn_803FA5C8_00000AA0
lbl_fn_803FA5C8_000008F8:
    lwz r0, 0x4f4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803FA5C8_0000090C
    cmpwi r3, 0x6
    bne lbl_fn_803FA5C8_0000091C
lbl_fn_803FA5C8_0000090C:
    lwz r3, 0x4d0(r31)
    subi r0, r3, 0x1
    stw r0, 0x4d0(r31)
    b lbl_fn_803FA5C8_00000924
lbl_fn_803FA5C8_0000091C:
    li r0, 0x3e7
    stw r0, 0x4d0(r31)
lbl_fn_803FA5C8_00000924:
    addi r3, r31, 0x518
    bl fn_803FADF4
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000944
    addi r3, r31, 0x518
    addi r4, r31, 0x6c
    bl fn_800CB6E4
    b lbl_fn_803FA5C8_0000098C
lbl_fn_803FA5C8_00000944:
    lwz r0, 0x4d0(r31)
    cmpwi r0, 0x96
    bge lbl_fn_803FA5C8_0000098C
    lis r4, lbl_80752540@ha
    lfs f1, lbl_8088603C
    addi r4, r4, lbl_80752540@l
    addi r3, r1, 0x8
    lwz r4, 0x4(r4)
    addi r5, r31, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r31, 0x518
    addi r4, r1, 0x8
    bl fn_803FAE08
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803FA5C8_0000098C:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_000009F0
    bl fn_80121F00
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_000009F0
    bl fn_80121F00
    bl fn_80373148
    bl fn_803EFDA4
    cmpwi r3, 0xb
    bne lbl_fn_803FA5C8_000009F0
    bl fn_80121F00
    bl fn_80373148
    bl fn_803EFDAC
    cmpwi r3, 0x3
    bne lbl_fn_803FA5C8_000009F0
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803FA5C8_000009F0
    lwz r0, 0x4d0(r31)
    cmpwi r0, 0xb4
    bgt lbl_fn_803FA5C8_000009F0
    li r0, 0xb4
    stw r0, 0x4d0(r31)
lbl_fn_803FA5C8_000009F0:
    lwz r3, 0x4c8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000A20
    bl fn_80148334
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000A20
    lwz r3, 0x4d0(r31)
    li r0, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_803FA5C8_00000A1C
    mr r0, r3
lbl_fn_803FA5C8_00000A1C:
    stw r0, 0x4d0(r31)
lbl_fn_803FA5C8_00000A20:
    lwz r0, 0x4d0(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_803FA5C8_00000AA0
    lwz r0, 0x54(r31)
    cmpwi r0, 0x2
    bne lbl_fn_803FA5C8_00000A58
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r5, r3
    mr r3, r31
    addi r4, r31, 0x6c
    li r6, 0x1
    bl fn_803FB870
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000A58:
    cmpwi r0, 0x6
    bne lbl_fn_803FA5C8_00000A80
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r5, r3
    mr r3, r31
    addi r4, r31, 0x6c
    li r6, 0x1
    bl fn_803FB870
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000A80:
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r5, r3
    mr r3, r31
    addi r4, r31, 0x6c
    li r6, 0x0
    bl fn_803FB870
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000AA0:
    lwz r3, 0x4c8(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000B08
    bl fn_800F84C8
    lis r4, lbl_80752568@ha
    addi r4, r4, lbl_80752568@l
    addi r4, r4, 0x2f
    bl fn_803FAE38
    mr r4, r3
    addi r3, r1, 0x160
    bl fn_8008CCE8
    lfs f1, lbl_80886040
    addi r3, r1, 0x160
    bl fn_80144ED4
    addi r3, r31, 0xf4
    addi r4, r1, 0x160
    bl fn_80316E38
    addi r3, r31, 0xf4
    bl fn_80266154
    mr r4, r3
    addi r3, r1, 0x84
    bl fn_8000D0F8
    addi r3, r31, 0x6c
    addi r4, r1, 0x84
    bl fn_8000D124
    b lbl_fn_803FA5C8_00000F94
lbl_fn_803FA5C8_00000B08:
    lwz r0, 0x54(r31)
    cmpwi r0, 0x3
    bne lbl_fn_803FA5C8_00000BA8
    bl fn_800F52F8
    bl fn_802F0998
    lfs f2, 0x4d4(r31)
    addi r3, r1, 0xf0
    lfs f0, 0x70(r31)
    addi r4, r31, 0x6c
    fadds f1, f2, f1
    stfs f1, 0x4d4(r31)
    fadds f0, f0, f1
    stfs f0, 0x70(r31)
    bl fn_8001047C
    lfs f1, 0xf4(r1)
    addi r3, r1, 0xe4
    lfs f0, lbl_80886044
    fadds f0, f1, f0
    stfs f0, 0xf4(r1)
    bl fn_80057A64
    bl fn_801404F8
    lis r7, 0x8000
    addi r4, r1, 0xe4
    addi r5, r1, 0xf0
    addi r6, r31, 0x6c
    addi r7, r7, 0x20
    li r8, 0x0
    li r9, 0x0
    bl fn_8004ECC0
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000F70
    li r0, 0x4
    stw r0, 0x54(r31)
    mr r3, r31
    li r4, 0xff
    bl fn_803FAE84
    addi r3, r31, 0x6c
    addi r4, r1, 0xe4
    bl fn_8000D124
    b lbl_fn_803FA5C8_00000F70
lbl_fn_803FA5C8_00000BA8:
    cmpwi r0, 0x5
    bne lbl_fn_803FA5C8_00000DC8
    addi r3, r1, 0xd8
    addi r4, r31, 0x6c
    bl fn_8001047C
    bl fn_800F52F8
    bl fn_802F0998
    lfs f0, 0x4e8(r31)
    addi r3, r1, 0xd8
    addi r4, r31, 0x4e4
    fadds f0, f0, f1
    stfs f0, 0x4e8(r31)
    bl fn_80013484
    addi r3, r31, 0x6c
    addi r4, r31, 0x4e4
    bl fn_80012C88
    addi r3, r1, 0xcc
    bl fn_80057A64
    lwz r3, 0x4c4(r31)
    li r30, 0x2
    lwz r0, 0x20(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803FA5C8_00000C08
    oris r30, r30, 0x8000
lbl_fn_803FA5C8_00000C08:
    addi r3, r1, 0x190
    bl fn_80140500
    bl fn_801404F8
    lwz r8, 0x4cc(r31)
    mr r7, r30
    addi r4, r1, 0x190
    addi r5, r1, 0xd8
    addi r6, r31, 0x6c
    li r9, 0x0
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000D4C
    lwz r3, 0x4c4(r31)
    lwz r0, 0x20(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803FA5C8_00000D20
    lfs f1, lbl_80886038
    addi r3, r1, 0x78
    lfs f2, lbl_8088603C
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    addi r3, r1, 0x1b8
    bl fn_801A03E8
    lfs f0, lbl_80886048
    fcmpo cr0, f1, f0
    bge lbl_fn_803FA5C8_00000D04
    addi r3, r1, 0x1b8
    addi r4, r31, 0x4e4
    bl fn_801A03E8
    addi r3, r1, 0xc0
    addi r4, r1, 0x1b8
    bl fn_803FAE8C
    addi r3, r1, 0xb4
    addi r4, r31, 0x4e4
    addi r5, r1, 0xc0
    bl fn_80013338
    lfs f1, lbl_80886050
    addi r3, r1, 0x48
    addi r4, r1, 0xb4
    bl fn_800F72CC
    addi r3, r1, 0x54
    addi r4, r1, 0xc0
    bl fn_8013C3B4
    lfs f1, lbl_8088604C
    addi r3, r1, 0x60
    addi r4, r1, 0x54
    bl fn_800F72CC
    addi r3, r1, 0x6c
    addi r4, r1, 0x60
    addi r5, r1, 0x48
    bl fn_80013410
    addi r3, r31, 0x4e4
    addi r4, r1, 0x6c
    bl fn_8000D124
    addi r3, r1, 0x3c
    addi r4, r1, 0x194
    addi r5, r1, 0x1b8
    bl fn_80013410
    addi r3, r31, 0x6c
    addi r4, r1, 0x3c
    bl fn_8000D124
    b lbl_fn_803FA5C8_00000D4C
lbl_fn_803FA5C8_00000D04:
    lwz r0, 0x4f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FA5C8_00000D4C
    mr r3, r31
    addi r4, r1, 0x194
    bl fn_803FBC34
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000D20:
    lwz r0, 0x4f0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803FA5C8_00000D4C
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r5, r3
    mr r3, r31
    addi r4, r1, 0x194
    li r6, 0x0
    bl fn_803FB870
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000D4C:
    lwz r3, 0x4c4(r31)
    lfs f2, 0x70(r31)
    lfs f1, 0x8(r3)
    lfs f0, lbl_80886054
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    bge lbl_fn_803FA5C8_00000D88
    bl fn_8000D9E8
    bl fn_8000DCF4
    mr r5, r3
    mr r3, r31
    addi r4, r31, 0x6c
    li r6, 0x0
    bl fn_803FB870
    b lbl_fn_803FA5C8_00000FB8
lbl_fn_803FA5C8_00000D88:
    li r0, 0x0
    stw r0, 0x4cc(r31)
    addi r3, r1, 0x24
    addi r4, r31, 0x4e4
    bl fn_800F7FD8
    addi r3, r1, 0x30
    addi r4, r1, 0x24
    bl fn_80011034
    addi r3, r31, 0x78
    addi r4, r1, 0x30
    bl fn_8000D124
    lfs f1, 0x78(r31)
    lfs f0, lbl_80886058
    fadds f0, f1, f0
    stfs f0, 0x78(r31)
    b lbl_fn_803FA5C8_00000F70
lbl_fn_803FA5C8_00000DC8:
    cmpwi r0, 0x6
    bne lbl_fn_803FA5C8_00000E38
    addi r3, r1, 0xa8
    addi r4, r31, 0x6c
    bl fn_8001047C
    addi r3, r31, 0x6c
    addi r4, r31, 0x4e4
    bl fn_80012C88
    bl fn_800F52F8
    bl fn_802F0998
    lfs f2, lbl_8088605C
    addi r3, r1, 0xc
    lfs f0, 0x4e8(r31)
    addi r4, r31, 0x4e4
    fmadds f0, f2, f1, f0
    stfs f0, 0x4e8(r31)
    bl fn_800F7FD8
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    bl fn_80011034
    addi r3, r31, 0x78
    addi r4, r1, 0x18
    bl fn_8000D124
    lfs f1, 0x78(r31)
    lfs f0, lbl_80886058
    fadds f0, f1, f0
    stfs f0, 0x78(r31)
    b lbl_fn_803FA5C8_00000F70
lbl_fn_803FA5C8_00000E38:
    cmpwi r0, 0x7
    bne lbl_fn_803FA5C8_00000F70
    bl fn_800F7F90
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000E58
    bl fn_803FAEB4
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000F70
lbl_fn_803FA5C8_00000E58:
    bl fn_8000D9E8
    bl fn_802A36B0
    lfs f31, lbl_8088603C
    mr r30, r3
    b lbl_fn_803FA5C8_00000EDC
lbl_fn_803FA5C8_00000E6C:
    mr r3, r30
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000ED0
    mr r3, r30
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x9c
    addi r5, r31, 0x6c
    bl fn_80013338
    mr r3, r30
    bl fn_80198C00
    bl fn_80315644
    lfs f30, 0x18(r3)
    addi r3, r1, 0x9c
    fadds f30, f30, f31
    bl fn_801162A0
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bge lbl_fn_803FA5C8_00000ED0
    mr r3, r31
    addi r4, r31, 0x6c
    li r5, 0x0
    li r6, 0x0
    bl fn_803FB870
lbl_fn_803FA5C8_00000ED0:
    mr r3, r30
    bl fn_802A4094
    mr r30, r3
lbl_fn_803FA5C8_00000EDC:
    cmpwi r30, 0x0
    bne lbl_fn_803FA5C8_00000E6C
    bl fn_801A03E0
    bl fn_801A0408
    lfs f31, lbl_80886060
    mr r30, r3
    b lbl_fn_803FA5C8_00000F68
lbl_fn_803FA5C8_00000EF8:
    mr r3, r30
    bl fn_8013C480
    cmpwi r3, 0x0
    beq lbl_fn_803FA5C8_00000F5C
    mr r3, r30
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x90
    addi r5, r31, 0x6c
    bl fn_80013338
    mr r3, r30
    bl fn_80198C00
    bl fn_80315644
    lfs f30, 0x18(r3)
    addi r3, r1, 0x90
    fadds f30, f30, f31
    bl fn_801162A0
    fmuls f0, f30, f30
    fcmpo cr0, f1, f0
    bge lbl_fn_803FA5C8_00000F5C
    mr r3, r31
    addi r4, r31, 0x6c
    li r5, 0x0
    li r6, 0x0
    bl fn_803FB870
lbl_fn_803FA5C8_00000F5C:
    mr r3, r30
    bl fn_801A03EC
    mr r30, r3
lbl_fn_803FA5C8_00000F68:
    cmpwi r30, 0x0
    bne lbl_fn_803FA5C8_00000EF8
lbl_fn_803FA5C8_00000F70:
    addi r3, r1, 0x130
    addi r4, r31, 0x6c
    bl fn_800F80A8
    addi r3, r1, 0x130
    addi r4, r31, 0x78
    bl fn_800F80B8
    addi r3, r31, 0xf4
    addi r4, r1, 0x130
    bl fn_80316E38
lbl_fn_803FA5C8_00000F94:
    addi r3, r1, 0xfc
    li r4, 0x0
    bl fn_80317034
    addi r3, r31, 0xf4
    addi r4, r1, 0xfc
    bl fn_8000D430
    addi r3, r1, 0xfc
    li r4, -0x1
    bl fn_8000D3A8
lbl_fn_803FA5C8_00000FB8:
    lwz r0, 0x214(r1)
    psq_l f31, 0x208(r1), 0, 0
    lfd f31, 0x200(r1)
    psq_l f30, 0x1f8(r1), 0, 0
    lfd f30, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    mtlr r0
    addi r1, r1, 0x210
    blr
}

asm void fn_803FADF4(void)
{
    nofralloc
    lwz r3, 0x0(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_803FAE08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800CB440
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FAE38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803FAE38_00001050
    li r3, 0x0
    b lbl_fn_803FAE38_0000105C
lbl_fn_803FAE38_00001050:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r3, r3, r0
lbl_fn_803FAE38_0000105C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FAE84(void)
{
    nofralloc
    stb r4, 0x520(r3)
    blr
}

asm void fn_803FAE8C(void)
{
    nofralloc
    lfs f3, 0x8(r4)
    lfs f2, 0x4(r4)
    lfs f0, 0x0(r4)
    fmuls f3, f3, f1
    fmuls f2, f2, f1
    fmuls f0, f0, f1
    stfs f3, 0x8(r3)
    stfs f0, 0x0(r3)
    stfs f2, 0x4(r3)
    blr
}

asm void fn_803FAEB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803FAEB4_000010D0
    bl fn_804EB1B0
    cmpwi r3, 0x0
    beq lbl_fn_803FAEB4_000010D0
    li r31, 0x1
lbl_fn_803FAEB4_000010D0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FAEFC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x4c4(r3)
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803FAEFC_00001164
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803FAEFC_00001128
    lwz r3, 0x54e4(r3)
    subi r0, r3, 0x8
    cmplwi r0, 0x3
    ble lbl_fn_803FAEFC_00001164
lbl_fn_803FAEFC_00001128:
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FAEFC_00001164
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    bl fn_803ED774
lbl_fn_803FAEFC_00001164:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803FAF8C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    addi r11, r1, 0xc0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stfd f30, 0xc0(r1)
    psq_st f30, 0xc8(r1), 0, 0
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r30, r3
    mr r31, r4
    bne lbl_fn_803FAF8C_000011B4
    li r3, 0x0
    b lbl_fn_803FAF8C_0000194C
lbl_fn_803FAF8C_000011B4:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x1
    bne lbl_fn_803FAF8C_000011E0
    lwz r4, 0x0(r4)
    cmpwi r4, 0x5
    bne lbl_fn_803FAF8C_000011E0
    lwz r0, 0x54(r3)
    cmpw r4, r0
    bne lbl_fn_803FAF8C_000011E0
    li r3, 0x0
    b lbl_fn_803FAF8C_0000194C
lbl_fn_803FAF8C_000011E0:
    lwz r3, lbl_8087F610
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_0000120C
    bl fn_804EB1B0
    cmpwi r3, 0x0
    bne lbl_fn_803FAF8C_0000120C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803FAF8C_0000120C
    li r0, 0x1
    stw r0, 0x9c(r30)
lbl_fn_803FAF8C_0000120C:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
    cmpwi r3, 0x1
    lwz r0, 0x10(r31)
    stw r0, 0x4c8(r30)
    beq lbl_fn_803FAF8C_00001258
    cmpwi r3, 0x2
    beq lbl_fn_803FAF8C_000013B0
    cmpwi r3, 0x3
    beq lbl_fn_803FAF8C_00001560
    cmpwi r3, 0x5
    beq lbl_fn_803FAF8C_000015DC
    cmpwi r3, 0x6
    beq lbl_fn_803FAF8C_000016F4
    cmpwi r3, 0x7
    beq lbl_fn_803FAF8C_00001808
    cmpwi r3, 0x8
    beq lbl_fn_803FAF8C_0000183C
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_00001258:
    li r28, 0x1
    li r27, 0x0
    stw r28, 0x9c(r30)
    li r4, -0x1
    lwz r5, 0x4c4(r30)
    li r0, 0xff
    stw r27, 0x4c8(r30)
    lwz r3, 0x51c(r30)
    psq_l f1, 0x4(r5), 0, 0
    lfs f2, 0xc(r5)
    cmpwi r3, 0x0
    stfs f2, 0x74(r30)
    lfs f0, lbl_80886038
    psq_st f1, 0x6c(r30), 0, 0
    lfs f3, 0x14(r5)
    stfs f3, 0x7c(r30)
    stfs f0, 0x78(r30)
    stfs f0, 0x80(r30)
    stw r28, 0x4f0(r30)
    stw r4, 0x524(r30)
    stb r0, 0x520(r30)
    beq lbl_fn_803FAF8C_00001870
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_00001870
    lwz r3, 0x51c(r30)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803FAF8C_00001310
    lis r3, lbl_807C6BB8@ha
    stwu r27, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8750@ha
    stw r27, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8750@l
    stw r27, 0x8(r3)
    stw r28, 0xc(r3)
    bl __register_global_object
    stb r28, lbl_8087EE74
lbl_fn_803FAF8C_00001310:
    lis r28, lbl_807C6BB8@ha
    li r27, 0x0
    lfs f0, lbl_80886038
    addi r28, r28, lbl_807C6BB8@l
    li r0, 0x6
    stw r27, 0xc(r28)
    addi r4, r1, 0x70
    stw r0, 0x70(r1)
    stw r27, 0x74(r1)
    stw r27, 0x78(r1)
    stw r27, 0x7c(r1)
    stw r27, 0x80(r1)
    stfs f0, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f0, 0x8c(r1)
    lwz r3, 0x51c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803FAF8C_0000139C
    li r29, 0x1
    lis r4, fn_8003EFB0@ha
    lis r5, lbl_807C8750@ha
    stw r27, 0x0(r28)
    mr r3, r28
    addi r4, r4, fn_8003EFB0@l
    stw r27, 0x4(r28)
    addi r5, r5, lbl_807C8750@l
    stw r27, 0x8(r28)
    stw r29, 0xc(r28)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_803FAF8C_0000139C:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_000013B0:
    lwz r3, lbl_8087F430
    li r27, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_000013F8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_000013F8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xb
    bne lbl_fn_803FAF8C_000013F8
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x3
    bne lbl_fn_803FAF8C_000013F8
    li r27, 0x1
lbl_fn_803FAF8C_000013F8:
    lwz r0, 0x4f4(r30)
    stw r0, 0x4d0(r30)
    cmpwi r0, 0x0
    ble lbl_fn_803FAF8C_00001494
    cmpwi r27, 0x0
    bne lbl_fn_803FAF8C_00001494
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x0
    bl fn_80232B7C
    lfs f0, lbl_80886038
    li r11, -0x1
    lfs f1, lbl_8088603C
    li r0, 0x1
    stfs f0, 0x28(r1)
    addi r4, r30, 0x50c
    lwz r3, lbl_8087F3C0
    addi r5, r30, 0xf4
    stfs f0, 0x2c(r1)
    addi r7, r1, 0x1c
    addi r8, r1, 0x28
    addi r9, r1, 0x38
    stfs f0, 0x30(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r11, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_8023A8B4
lbl_fn_803FAF8C_00001494:
    lis r3, 0x1062
    lwz r4, 0x48(r30)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x1
    beq lbl_fn_803FAF8C_000014EC
    lis r3, lbl_80752540@ha
    lfs f1, lbl_8088603C
    lwz r4, lbl_80752540@l(r3)
    addi r3, r1, 0x18
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803FAF8C_000014EC:
    lis r3, 0x1062
    lwz r4, 0x48(r30)
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x3e8
    subf r0, r0, r4
    cmpwi r0, 0x1
    beq lbl_fn_803FAF8C_00001540
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_00001540
    cmpwi r0, 0x3
    bne lbl_fn_803FAF8C_00001538
    li r4, 0xf4
    bl fn_803750E4
    b lbl_fn_803FAF8C_00001540
lbl_fn_803FAF8C_00001538:
    li r4, 0x94
    bl fn_803750E4
lbl_fn_803FAF8C_00001540:
    lwz r3, 0x4c8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_00001554
    addi r0, r3, 0x5b8
    b lbl_fn_803FAF8C_00001558
lbl_fn_803FAF8C_00001554:
    li r0, 0x0
lbl_fn_803FAF8C_00001558:
    stw r0, 0x4cc(r30)
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_00001560:
    li r0, 0x0
    stw r0, 0x4c8(r30)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803FAF8C_00001594
    lwz r3, 0x10(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803FAF8C_00001584
    bl fn_801750FC
lbl_fn_803FAF8C_00001584:
    psq_l f1, 0x14(r31), 0, 0
    lfs f2, 0x1c(r31)
    stfs f2, 0x74(r30)
    psq_st f1, 0x6c(r30), 0, 0
lbl_fn_803FAF8C_00001594:
    li r29, 0x0
    stw r29, 0x4d0(r30)
    mr r4, r30
    li r5, 0x0
    lwz r3, lbl_8087F3C0
    li r6, 0x1
    bl fn_80239DAC
    addi r3, r30, 0x518
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    lfs f0, lbl_80886038
    li r0, 0xff
    stw r29, 0x4cc(r30)
    stfs f0, 0x78(r30)
    stfs f0, 0x80(r30)
    stb r0, 0x520(r30)
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_000015DC:
    li r29, 0x0
    stw r29, 0x4c8(r30)
    lfs f0, 0x74(r30)
    addi r3, r1, 0x60
    lfs f2, 0x1c(r31)
    psq_l f1, 0x14(r31), 0, 0
    psq_st f1, 0x4d8(r30), 0, 0
    fsubs f4, f2, f0
    lfs f0, 0x6c(r30)
    lfs f3, 0x4d8(r30)
    stfs f2, 0x4e0(r30)
    fsubs f3, f3, f0
    lfs f0, lbl_80886038
    stfs f4, 0x68(r1)
    stfs f3, 0x60(r1)
    stfs f0, 0x64(r1)
    bl fn_805F9940
    lfs f31, lbl_80886068
    lis r0, 0x4330
    lwz r4, lbl_8087F0A8
    lis r5, lbl_80752550@ha
    fdivs f7, f1, f31
    stw r0, 0x90(r1)
    lwz r6, 0x30(r4)
    addi r3, r1, 0x60
    lfd f3, lbl_80752550@l(r5)
    mr r4, r3
    mullw r0, r6, r6
    lfs f6, 0x70(r30)
    lfs f5, 0x4dc(r30)
    fsubs f5, f6, f5
    xoris r0, r0, 0x8000
    stw r0, 0x94(r1)
    lfd f0, 0x90(r1)
    fsubs f4, f0, f3
    lfs f0, lbl_80886064
    lfs f3, lbl_8088606C
    fdivs f4, f0, f4
    fdivs f0, f5, f7
    fmuls f3, f3, f4
    fmsubs f30, f7, f3, f0
    bl fn_805F98D0
    lfs f3, 0x60(r1)
    lis r4, lbl_80752540@ha
    lfs f0, 0x68(r1)
    addi r4, r4, lbl_80752540@l
    fmuls f3, f3, f31
    stfs f30, 0x64(r1)
    fmuls f2, f0, f31
    addi r5, r1, 0x60
    stfs f3, 0x60(r1)
    addi r3, r1, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r5, r30, 0x6c
    stfs f2, 0x68(r1)
    li r6, 0x0
    lwz r4, 0x8(r4)
    li r7, -0x1
    psq_st f1, 0x4e4(r30), 0, 0
    lfs f1, lbl_8088603C
    stfs f2, 0x4ec(r30)
    bl fn_800C344C
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    bne lbl_fn_803FAF8C_00001870
    stw r29, 0x4f0(r30)
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_000016F4:
    li r0, 0x0
    stw r0, 0x4c8(r30)
    lis r0, 0x4330
    lis r5, lbl_80752550@ha
    lwz r3, 0x4(r31)
    lis r4, lbl_80752540@ha
    stw r3, 0x4d0(r30)
    addi r4, r4, lbl_80752540@l
    xoris r3, r3, 0x8000
    lfd f9, lbl_80752550@l(r5)
    stw r3, 0x94(r1)
    addi r8, r1, 0x54
    lfs f0, lbl_8088603C
    addi r3, r1, 0x10
    stw r0, 0x90(r1)
    addi r5, r30, 0x6c
    lfs f2, 0x1c(r31)
    li r6, 0x0
    lfd f3, 0x90(r1)
    li r7, -0x1
    psq_l f1, 0x14(r31), 0, 0
    fsubs f12, f3, f9
    psq_st f1, 0x4d8(r30), 0, 0
    lfs f8, 0x74(r30)
    lfs f7, 0x4dc(r30)
    fdivs f11, f0, f12
    lfs f4, 0x70(r30)
    lfs f6, 0x4d8(r30)
    lfs f3, 0x6c(r30)
    stfs f2, 0x4e0(r30)
    lfs f5, lbl_80886064
    fsubs f7, f7, f4
    stw r0, 0x98(r1)
    fsubs f6, f6, f3
    lfs f4, lbl_8088605C
    fsubs f8, f2, f8
    lfs f3, lbl_8088604C
    stfs f6, 0x48(r1)
    fmuls f10, f7, f11
    fmuls f2, f8, f11
    lwz r4, 0x8(r4)
    fmuls f6, f6, f11
    stfs f10, 0x58(r1)
    stfs f6, 0x54(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x4e4(r30), 0, 0
    fmr f1, f0
    stfs f2, 0x4ec(r30)
    lfs f0, 0x4e8(r30)
    lwz r8, lbl_8087F0A8
    stfs f7, 0x4c(r1)
    lwz r0, 0x30(r8)
    stfs f8, 0x50(r1)
    mullw r0, r0, r0
    stfs f2, 0x5c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x9c(r1)
    lfd f6, 0x98(r1)
    fsubs f6, f6, f9
    fdivs f5, f5, f6
    fmuls f4, f4, f5
    fmuls f4, f12, f4
    fnmsubs f0, f3, f4, f0
    stfs f0, 0x4e8(r30)
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_00001808:
    psq_l f1, 0x14(r31), 0, 0
    li r6, 0x1
    lfs f2, 0x1c(r31)
    li r0, 0xff
    stfs f2, 0x74(r30)
    addi r3, r30, 0x518
    li r4, 0xa
    li r5, 0x0
    psq_st f1, 0x6c(r30), 0, 0
    stw r6, 0x4f0(r30)
    stb r0, 0x520(r30)
    bl fn_800CB5C8
    b lbl_fn_803FAF8C_00001870
lbl_fn_803FAF8C_0000183C:
    lwz r0, 0x4fc(r30)
    li r3, 0x0
    stw r3, 0x9c(r30)
    mr r4, r30
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x4d0(r30)
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    addi r3, r30, 0x518
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_803FAF8C_00001870:
    lfs f0, lbl_80886038
    stfs f0, 0x4d4(r30)
    lwz r0, 0xc(r31)
    cmpwi r0, 0x1
    beq lbl_fn_803FAF8C_000018A0
    lwz r0, 0x54(r30)
    cmpwi r0, 0x3
    bne lbl_fn_803FAF8C_000018A0
    psq_l f1, 0x6c(r30), 0, 0
    lfs f2, 0x74(r30)
    stfs f2, 0x1c(r31)
    psq_st f1, 0x14(r31), 0, 0
lbl_fn_803FAF8C_000018A0:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_803FAF8C_000018E0
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r29, 0x1
    lis r5, lbl_807C8750@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8750@l
    stw r0, 0x8(r3)
    stw r29, 0xc(r3)
    bl __register_global_object
    stb r29, lbl_8087EE74
lbl_fn_803FAF8C_000018E0:
    lis r27, lbl_807C6BB8@ha
    addi r27, r27, lbl_807C6BB8@l
    lwz r0, 0xc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803FAF8C_00001948
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_803FAF8C_0000193C
lbl_fn_803FAF8C_00001900:
    lwz r0, 0x0(r27)
    add r3, r0, r29
    lwzx r0, r29, r0
    cmpwi r0, -0x1
    beq lbl_fn_803FAF8C_0000191C
    cmpwi r0, 0xb
    bne lbl_fn_803FAF8C_00001934
lbl_fn_803FAF8C_0000191C:
    lwz r12, 0x4(r3)
    mr r4, r30
    mr r5, r31
    li r3, 0xb
    mtctr r12
    bctrl
lbl_fn_803FAF8C_00001934:
    addi r28, r28, 0x1
    addi r29, r29, 0x8
lbl_fn_803FAF8C_0000193C:
    lwz r0, 0x4(r27)
    cmpw r28, r0
    blt lbl_fn_803FAF8C_00001900
lbl_fn_803FAF8C_00001948:
    lwz r3, 0x54(r30)
lbl_fn_803FAF8C_0000194C:
    addi r11, r1, 0xc0
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    psq_l f30, 0xc8(r1), 0, 0
    lfd f30, 0xc0(r1)
    bl _restgpr_27
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}
