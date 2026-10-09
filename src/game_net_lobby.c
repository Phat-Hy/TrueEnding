#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80061824(void);
extern void fn_80062C8C(void);
extern void fn_80063764(void);
extern void fn_8006F2F0(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801E9544(void);
extern void fn_801EB188(void);
extern void fn_801EB7C4(void);
extern void fn_801EB93C(void);
extern void fn_801F4AA0(void);
extern void fn_801F4C14(void);
extern void fn_801FECE0(void);
extern void fn_801FEE08(void);
extern void fn_80211480(void);
extern void fn_80211734(void);
extern void fn_80219E6C(void);
extern void fn_80370174(void);
extern void fn_8044441C(void);
extern void fn_804444E8(void);
extern void fn_805F9920(void);
extern void fn_80680CF8(void);
extern void fn_80695D84(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 lbl_8073CBD0[];
extern u8 lbl_8073CBEC[];
extern u8 lbl_8073CC80[];
extern u8 lbl_80782900[];
extern u8 lbl_807829C8[];
extern u8 lbl_807829E0[];

/* Small data declarations */
extern u32 lbl_8087D9A0;
extern u32 lbl_8087D9A4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F128;
extern u32 lbl_8087F130;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80882B30;
extern u32 lbl_80882B34;
extern u32 lbl_80882B38;
extern u32 lbl_80882B3C;
extern u32 lbl_80882B40;
extern u32 lbl_80882B44;
extern u32 lbl_80882B48;
extern u32 lbl_80882B4C;
extern u32 lbl_80882B50;
extern u32 lbl_80882B54;
extern u32 lbl_80882B58;
extern u32 lbl_80882B5C;
extern u32 lbl_80882B60;
extern u32 lbl_80882B64;
extern u32 lbl_80882B68;
extern u32 lbl_80882B70;
extern u32 lbl_80882B74;
extern u32 lbl_80882B78;
extern u32 lbl_80882B7C;
extern u32 lbl_80882B80;
extern u32 lbl_80882B84;
extern u32 lbl_80882B88;
extern u32 lbl_80882B8C;
extern u32 lbl_80882B90;
extern u32 lbl_80882B94;
extern u32 lbl_80882B98;
extern u32 lbl_80882B9C;
extern u32 lbl_80882BA0;

/* Function declarations */
void fn_801E97DC(void);
void fn_801E97E8(void);
void fn_801E996C(void);
void fn_801E9B84(void);
void fn_801E9EA4(void);
void fn_801E9ECC(void);
void fn_801EA01C(void);
void fn_801EA0B4(void);
void fn_801EA11C(void);
void fn_801EA390(void);
void fn_801EA4B0(void);
void fn_801EA534(void);
void fn_801EA874(void);
void fn_801EA920(void);
void fn_801EA924(void);
void fn_801EAB24(void);
void fn_801EB078(void);

asm void fn_801E97DC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x150(r3)
    blr
}

asm void fn_801E97E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801E97E8_00000044
    bl fn_801E9544
    li r0, 0x0
    stw r0, 0x154(r31)
lbl_fn_801E97E8_00000044:
    addi r30, r31, 0x4
    li r29, 0x1
    li r28, 0x1
    b lbl_fn_801E97E8_00000090
lbl_fn_801E97E8_00000054:
    lwz r3, 0x50(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_801E97E8_00000088
    bl fn_80211734
    cmpwi r3, 0x0
    bne lbl_fn_801E97E8_00000084
    lwz r3, lbl_8087F4F0
    lwz r4, 0x50(r30)
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801E97E8_00000088
lbl_fn_801E97E8_00000084:
    addi r29, r29, 0x1
lbl_fn_801E97E8_00000088:
    addi r30, r30, 0x4
    addi r28, r28, 0x1
lbl_fn_801E97E8_00000090:
    lwz r0, 0x4c(r31)
    cmplw r28, r0
    blt lbl_fn_801E97E8_00000054
    lwz r5, 0x15c(r31)
    li r0, 0x1
    srawi r4, r0, 31
    srwi r3, r29, 31
    subfc r0, r29, r0
    cmpwi r5, 0x1
    adde r0, r4, r3
    stw r0, 0x160(r31)
    bne lbl_fn_801E97E8_000000F4
    lwz r3, 0x48(r31)
    lfs f1, lbl_80882B34
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    bne lbl_fn_801E97E8_00000170
    li r0, 0x0
    stw r0, 0x15c(r31)
    lfs f0, lbl_80882B30
    stfs f1, 0x100(r3)
    lwz r3, 0x48(r31)
    stfs f0, 0x104(r3)
    b lbl_fn_801E97E8_00000170
lbl_fn_801E97E8_000000F4:
    cmpwi r5, 0x2
    bne lbl_fn_801E97E8_00000134
    lwz r3, 0x48(r31)
    lfs f0, lbl_80882B38
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801E97E8_00000170
    li r0, 0x0
    stw r0, 0x15c(r31)
    lfs f0, lbl_80882B34
    stfs f0, 0x100(r3)
    lfs f0, lbl_80882B30
    lwz r3, 0x48(r31)
    stfs f0, 0x104(r3)
    b lbl_fn_801E97E8_00000170
lbl_fn_801E97E8_00000134:
    cmpwi r5, 0x3
    bne lbl_fn_801E97E8_00000170
    lwz r3, 0x48(r31)
    lfs f0, lbl_80882B3C
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_801E97E8_00000170
    li r0, 0x0
    stw r0, 0x15c(r31)
    lfs f0, lbl_80882B34
    stfs f0, 0x100(r3)
    lfs f0, lbl_80882B30
    lwz r3, 0x48(r31)
    stfs f0, 0x104(r3)
lbl_fn_801E97E8_00000170:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801E996C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801E996C_00000390
    lwz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801E996C_000001C4
    b lbl_fn_801E996C_00000390
lbl_fn_801E996C_000001C4:
    lwz r0, 0x15c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_801E996C_00000270
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x1
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x2
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x3
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x4
    bl fn_801E9B84
    mr r3, r30
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
    mr r3, r30
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
    b lbl_fn_801E996C_0000030C
lbl_fn_801E996C_00000270:
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
    mr r3, r30
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x1
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x2
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x3
    bl fn_801E9B84
    mr r3, r30
    li r4, 0x1
    li r5, 0x0
    bl fn_801E9ECC
    lwz r4, 0x150(r30)
    mr r3, r30
    li r5, 0x4
    bl fn_801E9B84
    mr r3, r30
    li r4, -0x1
    li r5, 0x0
    bl fn_801E9ECC
lbl_fn_801E996C_0000030C:
    lwz r0, 0x160(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801E996C_00000344
    lwz r4, 0x48(r30)
    lis r3, lbl_8073CBEC@ha
    addi r3, r3, lbl_8073CBEC@l
    addi r3, r3, 0x24
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882B30
    mr r4, r3
    mr r3, r31
    bl fn_801FECE0
    b lbl_fn_801E996C_0000036C
lbl_fn_801E996C_00000344:
    lwz r4, 0x48(r30)
    lis r3, lbl_8073CBEC@ha
    addi r3, r3, lbl_8073CBEC@l
    addi r3, r3, 0x24
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80882B40
    mr r4, r3
    mr r3, r31
    bl fn_801FECE0
lbl_fn_801E996C_0000036C:
    lwz r0, 0x150(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r0, 0x50(r3)
    cmpwi r0, 0x19c
    bne lbl_fn_801E996C_00000390
    lwz r3, lbl_8087F490
    li r0, 0x1
    stw r0, 0x10fc(r3)
lbl_fn_801E996C_00000390:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801E9B84(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    stw r31, 0x21c(r1)
    mr r31, r4
    stw r30, 0x218(r1)
    mr r30, r3
    addi r3, r1, 0x140
    stw r29, 0x214(r1)
    lis r29, lbl_8073CBEC@ha
    addi r29, r29, lbl_8073CBEC@l
    stw r28, 0x210(r1)
    mr r28, r5
    addi r4, r29, 0x2f
    crclr 6
    bl sprintf
    mr r5, r28
    addi r3, r1, 0x100
    addi r4, r29, 0x3d
    crclr 6
    bl sprintf
    mr r5, r28
    addi r3, r1, 0xc0
    addi r4, r29, 0x4a
    crclr 6
    bl sprintf
    mr r5, r28
    addi r3, r1, 0x80
    addi r4, r29, 0x58
    crclr 6
    bl sprintf
    mr r5, r28
    addi r3, r1, 0x40
    addi r4, r29, 0x65
    crclr 6
    bl sprintf
    slwi r0, r31, 2
    add r29, r30, r0
    lwz r3, 0x50(r29)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_801E9B84_000006A0
    lwz r3, lbl_8087F4F0
    lwz r4, 0x50(r29)
    bl fn_804444E8
    mr r28, r3
    mr r4, r30
    mr r5, r31
    addi r3, r1, 0x28
    bl fn_801EA11C
    lwz r0, 0x28(r1)
    cmpwi r0, 0x0
    bge lbl_fn_801E9B84_00000490
    lfs f31, lbl_80882B30
    b lbl_fn_801E9B84_00000494
lbl_fn_801E9B84_00000490:
    lfs f31, lbl_80882B40
lbl_fn_801E9B84_00000494:
    lwz r4, 0x48(r30)
    addi r3, r1, 0x80
    addi r29, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lwz r4, 0x28(r1)
    lis r0, 0x4330
    lis r5, lbl_8073CBD0@ha
    lwz r3, 0x48(r30)
    xoris r4, r4, 0x8000
    stw r4, 0x204(r1)
    addi r29, r3, 0x58
    lfd f1, lbl_8073CBD0@l(r5)
    stw r0, 0x200(r1)
    addi r3, r1, 0xc0
    lfd f0, 0x200(r1)
    fsubs f31, f0, f1
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r29
    bl fn_801FECE0
    lfs f3, lbl_80882B44
    addi r4, r1, 0x40
    lfs f1, 0x2c(r1)
    lfs f2, 0x30(r1)
    lfs f0, 0x34(r1)
    fmuls f1, f3, f1
    fmuls f2, f3, f2
    lwz r3, 0x48(r30)
    fmuls f3, f3, f0
    bl fn_801F4AA0
    lis r29, lbl_8073CBEC@ha
    mr r5, r28
    addi r29, r29, lbl_8073CBEC@l
    addi r3, r1, 0x8
    addi r4, r29, 0x73
    crclr 6
    bl sprintf
    mr r3, r31
    bl fn_80211734
    cmpwi r3, 0x0
    beq lbl_fn_801E9B84_00000558
    addi r3, r1, 0x8
    addi r4, r29, 0x76
    bl strcpy
lbl_fn_801E9B84_00000558:
    lwz r3, lbl_8087F430
    li r4, 0xda
    bl fn_80370174
    cmpwi r3, 0x0
    ble lbl_fn_801E9B84_000005AC
    lwz r0, 0x4(r31)
    cmpwi r0, 0x65
    bne lbl_fn_801E9B84_000005AC
    lis r5, 0x6666
    lis r4, lbl_807829C8@ha
    addi r0, r5, 0x6667
    lwz r5, 0x8(r31)
    mulhw r0, r0, r3
    addi r3, r1, 0x180
    addi r4, r4, lbl_807829C8@l
    srawi r0, r0, 2
    srwi r6, r0, 31
    add r6, r0, r6
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_801E9B84_000005C8
lbl_fn_801E9B84_000005AC:
    lis r4, lbl_807829C8@ha
    lwz r5, 0x8(r31)
    addi r4, r4, lbl_807829C8@l
    addi r3, r1, 0x180
    addi r4, r4, 0x10
    crclr 6
    bl fn_800DD3FC
lbl_fn_801E9B84_000005C8:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_801E9B84_00000670
    lwz r0, 0x4(r31)
    cmpwi r0, 0x65
    bne lbl_fn_801E9B84_00000670
    lwz r3, lbl_8087F8A0
    li r28, 0x0
    lwz r4, 0x48(r3)
    lwz r3, 0x5c(r4)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x3
    beq lbl_fn_801E9B84_0000060C
    lwz r3, 0x50(r4)
    subis r0, r3, 0xa
    cmplwi r0, 0xae72
    bne lbl_fn_801E9B84_00000630
lbl_fn_801E9B84_0000060C:
    lwz r3, 0xaa4(r4)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_801E9B84_00000644
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_801E9B84_00000644
    mr r28, r0
    b lbl_fn_801E9B84_00000644
lbl_fn_801E9B84_00000630:
    subis r3, r3, 0xb
    addi r0, r3, 0x518a
    cmplwi r0, 0x1
    bgt lbl_fn_801E9B84_00000644
    lwz r28, 0xaac(r4)
lbl_fn_801E9B84_00000644:
    cmpwi r28, 0x0
    ble lbl_fn_801E9B84_00000670
    mr r3, r28
    bl fn_80219E6C
    lis r4, lbl_807829C8@ha
    lwz r5, 0x8(r3)
    addi r4, r4, lbl_807829C8@l
    addi r3, r1, 0x180
    addi r4, r4, 0x10
    crclr 6
    bl fn_800DD3FC
lbl_fn_801E9B84_00000670:
    lwz r4, 0x48(r30)
    addi r3, r1, 0x140
    addi r29, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r29
    addi r5, r1, 0x180
    bl fn_801FEE08
    lwz r3, 0x48(r30)
    addi r4, r1, 0x100
    addi r5, r1, 0x8
    bl fn_801F4C14
lbl_fn_801E9B84_000006A0:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    lwz r28, 0x210(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}

asm void fn_801E9EA4(void)
{
    nofralloc
    li r0, 0x1
    stw r0, 0x154(r3)
    lwz r4, 0x48(r3)
    lfs f0, lbl_80882B30
    stfs f0, 0x100(r4)
    lfs f0, lbl_80882B40
    lwz r4, 0x48(r3)
    stfs f0, 0x104(r4)
    stw r0, 0x15c(r3)
    blr
}

asm void fn_801E9ECC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r5, 0x0
    mr r30, r3
    beq lbl_fn_801E9ECC_0000071C
    lwz r0, 0x160(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801E9ECC_00000828
lbl_fn_801E9ECC_0000071C:
    cmpwi r4, 0x0
    beq lbl_fn_801E9ECC_00000820
    li r31, -0x1
    ble lbl_fn_801E9ECC_00000730
    li r31, 0x1
lbl_fn_801E9ECC_00000730:
    cmpwi r5, 0x0
    beq lbl_fn_801E9ECC_00000788
    cmpwi r31, 0x0
    bge lbl_fn_801E9ECC_00000764
    li r0, 0x2
    stw r0, 0x15c(r3)
    lwz r4, 0x48(r3)
    lfs f0, lbl_80882B40
    stfs f0, 0x104(r4)
    lfs f0, lbl_80882B34
    lwz r3, 0x48(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_801E9ECC_00000788
lbl_fn_801E9ECC_00000764:
    ble lbl_fn_801E9ECC_00000788
    li r0, 0x3
    stw r0, 0x15c(r3)
    lwz r4, 0x48(r3)
    lfs f0, lbl_80882B40
    stfs f0, 0x104(r4)
    lfs f0, lbl_80882B38
    lwz r3, 0x48(r3)
    stfs f0, 0x100(r3)
lbl_fn_801E9ECC_00000788:
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_801E9ECC_00000814
lbl_fn_801E9ECC_00000794:
    lwz r0, 0x150(r30)
    add. r0, r0, r31
    stw r0, 0x150(r30)
    bge lbl_fn_801E9ECC_000007B0
    lwz r3, 0x4c(r30)
    subi r0, r3, 0x1
    stw r0, 0x150(r30)
lbl_fn_801E9ECC_000007B0:
    lwz r3, 0x150(r30)
    lwz r0, 0x4c(r30)
    cmplw r3, r0
    blt lbl_fn_801E9ECC_000007C4
    stw r29, 0x150(r30)
lbl_fn_801E9ECC_000007C4:
    lwz r0, 0x150(r30)
    cmpwi r0, 0x0
    beq lbl_fn_801E9ECC_00000828
    slwi r0, r0, 2
    add r3, r30, r0
    lwz r3, 0x50(r3)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_801E9ECC_00000810
    bl fn_80211734
    cmpwi r3, 0x0
    bne lbl_fn_801E9ECC_00000828
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r27)
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801E9ECC_00000810
    b lbl_fn_801E9ECC_00000828
lbl_fn_801E9ECC_00000810:
    addi r28, r28, 0x1
lbl_fn_801E9ECC_00000814:
    lwz r0, 0x4c(r30)
    cmplw r28, r0
    blt lbl_fn_801E9ECC_00000794
lbl_fn_801E9ECC_00000820:
    li r0, 0x0
    stw r0, 0x150(r30)
lbl_fn_801E9ECC_00000828:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EA01C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x150(r3)
    stw r31, 0xc(r1)
    li r31, -0x1
    slwi r0, r0, 2
    add r3, r3, r0
    stw r30, 0x8(r1)
    lwz r30, 0x50(r3)
    cmpwi r30, 0x0
    beq lbl_fn_801EA01C_000008BC
    lwz r3, lbl_8087F4F0
    mr r4, r30
    bl fn_804444E8
    cmpwi r3, 0x0
    ble lbl_fn_801EA01C_000008BC
    mr r3, r30
    bl fn_80211480
    cmpwi r30, 0x71
    lwz r31, 0xc4(r3)
    bne lbl_fn_801EA01C_000008BC
    bl fn_80680CF8
    lis r4, 0x5555
    addi r0, r4, 0x5556
    mulhw r4, r0, r3
    srwi r0, r4, 31
    add r0, r4, r0
    mulli r0, r0, 0x3
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_801EA01C_000008BC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EA0B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, 0x150(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r31, 0x50(r3)
    cmpwi r31, 0x0
    beq lbl_fn_801EA0B4_0000092C
    mr r3, r31
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_801EA0B4_0000092C
    bl fn_80211734
    cmpwi r3, 0x0
    bne lbl_fn_801EA0B4_0000092C
    lwz r3, lbl_8087F4F0
    mr r4, r31
    li r5, 0x1
    bl fn_8044441C
lbl_fn_801EA0B4_0000092C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EA11C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801EA11C_00000B70
    lwz r0, 0x4(r5)
    cmpwi r0, 0x69
    bne lbl_fn_801EA11C_0000099C
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x14(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_0000099C:
    cmpwi r0, 0x71
    bne lbl_fn_801EA11C_000009D8
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x50(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_000009D8:
    cmpwi r0, 0x6f
    bne lbl_fn_801EA11C_00000A14
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x64(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x68(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x6c(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x70(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x74(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000A14:
    cmpwi r0, 0x70
    bne lbl_fn_801EA11C_00000A50
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x78(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x7c(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x80(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x84(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x88(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000A50:
    cmpwi r0, 0x6c
    bne lbl_fn_801EA11C_00000A8C
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x14(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x18(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x1c(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x20(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x24(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000A8C:
    cmpwi r0, 0x72
    bne lbl_fn_801EA11C_00000AC8
    lis r4, lbl_80782900@ha
    addi r4, r4, lbl_80782900@l
    lwz r0, 0x50(r4)
    stw r0, 0x0(r3)
    lfs f0, 0x54(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x58(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0x5c(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x60(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000AC8:
    li r0, 0x2
    mr r6, r5
    mtctr r0
lbl_fn_801EA11C_00000AD4:
    lwz r4, 0xf4(r6)
    subi r0, r4, 0x5
    cmplwi r0, 0x1
    bgt lbl_fn_801EA11C_00000B18
    lis r4, lbl_80782900@ha
    lwz r0, lbl_80782900@l(r4)
    addi r4, r4, lbl_80782900@l
    stw r0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000B18:
    addi r6, r6, 0x14
    bdnz lbl_fn_801EA11C_00000AD4
    lwz r3, 0xc4(r5)
    bl fn_80219E6C
    cmpwi r3, 0x0
    beq lbl_fn_801EA11C_00000B70
    lwz r0, 0x90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801EA11C_00000B70
    lis r3, lbl_80782900@ha
    addi r3, r3, lbl_80782900@l
    lwz r0, 0x28(r3)
    stw r0, 0x0(r31)
    lfs f0, 0x2c(r3)
    stfs f0, 0x4(r31)
    lfs f0, 0x30(r3)
    stfs f0, 0x8(r31)
    lfs f0, 0x34(r3)
    stfs f0, 0xc(r31)
    lfs f0, 0x38(r3)
    stfs f0, 0x10(r31)
    b lbl_fn_801EA11C_00000BA0
lbl_fn_801EA11C_00000B70:
    lis r3, lbl_80782900@ha
    addi r3, r3, lbl_80782900@l
    lwz r0, 0x3c(r3)
    stw r0, 0x0(r31)
    lfs f0, 0x40(r3)
    stfs f0, 0x4(r31)
    lfs f0, 0x44(r3)
    stfs f0, 0x8(r31)
    lfs f0, 0x48(r3)
    stfs f0, 0xc(r31)
    lfs f0, 0x4c(r3)
    stfs f0, 0x10(r31)
lbl_fn_801EA11C_00000BA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EA390(void)
{
    nofralloc
    lis r3, lbl_80782900@ha
    stwu r1, -0x80(r1)
    lfs f7, lbl_80882B40
    addi r3, r3, lbl_80782900@l
    lfs f8, lbl_80882B50
    lfs f9, lbl_80882B4C
    lfs f4, lbl_80882B58
    lfs f1, lbl_80882B64
    lfs f10, lbl_80882B48
    lfs f6, lbl_80882B54
    lfs f5, lbl_80882B30
    lfs f3, lbl_80882B5C
    lfs f2, lbl_80882B60
    lfs f0, lbl_80882B68
    stfs f10, 0x68(r1)
    stfs f9, 0x6c(r1)
    stfs f8, 0x70(r1)
    stfs f7, 0x74(r1)
    stfs f10, 0x4(r3)
    stfs f9, 0x8(r3)
    stfs f8, 0xc(r3)
    stfs f7, 0x10(r3)
    stfs f7, 0x58(r1)
    stfs f9, 0x5c(r1)
    stfs f9, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f7, 0x18(r3)
    stfs f9, 0x1c(r3)
    stfs f9, 0x20(r3)
    stfs f7, 0x24(r3)
    stfs f7, 0x48(r1)
    stfs f6, 0x4c(r1)
    stfs f5, 0x50(r1)
    stfs f7, 0x54(r1)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f7, 0x38(r3)
    stfs f4, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f4, 0x40(r1)
    stfs f7, 0x44(r1)
    stfs f4, 0x40(r3)
    stfs f4, 0x44(r3)
    stfs f4, 0x48(r3)
    stfs f7, 0x4c(r3)
    stfs f3, 0x28(r1)
    stfs f8, 0x2c(r1)
    stfs f2, 0x30(r1)
    stfs f7, 0x34(r1)
    stfs f3, 0x54(r3)
    stfs f8, 0x58(r3)
    stfs f2, 0x5c(r3)
    stfs f7, 0x60(r3)
    stfs f8, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x20(r1)
    stfs f7, 0x24(r1)
    stfs f8, 0x68(r3)
    stfs f1, 0x6c(r3)
    stfs f1, 0x70(r3)
    stfs f7, 0x74(r3)
    stfs f8, 0x8(r1)
    stfs f8, 0xc(r1)
    stfs f0, 0x10(r1)
    stfs f7, 0x14(r1)
    stfs f8, 0x7c(r3)
    stfs f8, 0x80(r3)
    stfs f0, 0x84(r3)
    stfs f7, 0x88(r3)
    addi r1, r1, 0x80
    blr
}

asm void fn_801EA4B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_801EA4B0_00000D38
    lis r5, lbl_8073CC80@ha
    li r3, 0x98
    addi r5, r5, lbl_8073CC80@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801EA4B0_00000D34
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801EA534
lbl_fn_801EA4B0_00000D34:
    stw r3, lbl_8087F128
lbl_fn_801EA4B0_00000D38:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F128
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EA534(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r6
    bl fn_800D1D3C
    lfs f3, lbl_80882B70
    lis r5, lbl_807829E0@ha
    li r4, 0x0
    lfs f2, lbl_80882B74
    lfs f1, lbl_80882B78
    addi r5, r5, lbl_807829E0@l
    lfs f0, lbl_80882B7C
    li r3, 0x1
    li r0, 0x64
    stw r5, 0x0(r30)
    stfs f3, 0x48(r30)
    stfs f3, 0x4c(r30)
    stfs f3, 0x50(r30)
    stfs f2, 0x54(r30)
    stfs f1, 0x58(r30)
    stfs f0, 0x5c(r30)
    stw r4, 0x64(r30)
    stw r4, 0x74(r30)
    stw r3, 0x78(r30)
    stw r31, 0x7c(r30)
    stw r28, 0x80(r30)
    stw r4, 0x84(r30)
    stw r4, 0x88(r30)
    stw r4, 0x8c(r30)
    stw r4, 0x90(r30)
    stw r0, 0x70(r30)
    lwz r3, 0x0(r31)
    neg r0, r3
    or r0, r0, r3
    srawi r0, r0, 31
    rlwinm r0, r0, 0, 28, 30
    stw r0, 0x68(r30)
    cmpwi cr1, r0, 0x0
    lwz r3, 0x0(r31)
    neg r0, r3
    stw r4, 0x60(r30)
    or r0, r0, r3
    srawi r0, r0, 31
    andi. r0, r0, 0x5
    stw r0, 0x6c(r30)
    ble cr1, lbl_fn_801EA534_00000E74
    lwz r3, lbl_8087F430
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801EA534_00000E74
    lwz r0, 0x4c(r3)
    cmpwi r0, 0xe
    beq lbl_fn_801EA534_00000E6C
    cmpwi r0, 0x3c
    beq lbl_fn_801EA534_00000E6C
    cmpwi r0, 0x15
    beq lbl_fn_801EA534_00000E6C
    cmpwi r0, 0x1f
    beq lbl_fn_801EA534_00000E6C
    cmpwi r0, 0x21
    beq lbl_fn_801EA534_00000E6C
    cmpwi r0, 0x29
    bne lbl_fn_801EA534_00000E74
lbl_fn_801EA534_00000E6C:
    li r0, 0x5
    stw r0, 0x68(r30)
lbl_fn_801EA534_00000E74:
    lwz r3, 0x88(r30)
    lwz r4, 0x7c(r30)
    cmpwi r3, 0x0
    lwz r28, 0x0(r4)
    beq lbl_fn_801EA534_00000E8C
    bl fn_80084C24
lbl_fn_801EA534_00000E8C:
    cmpwi r28, 0x0
    stw r28, 0x84(r30)
    beq lbl_fn_801EA534_00000EB8
    slwi r3, r28, 2
    li r4, 0x3
    la r5, lbl_8087D9A4
    la r6, lbl_8087D9A0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x88(r30)
    b lbl_fn_801EA534_00000EC0
lbl_fn_801EA534_00000EB8:
    li r0, 0x0
    stw r0, 0x88(r30)
lbl_fn_801EA534_00000EC0:
    li r6, 0x0
    li r5, 0x0
    li r4, 0x0
    b lbl_fn_801EA534_00000EE0
lbl_fn_801EA534_00000ED0:
    lwz r3, 0x88(r30)
    addi r6, r6, 0x1
    stwx r4, r3, r5
    addi r5, r5, 0x4
lbl_fn_801EA534_00000EE0:
    lwz r0, 0x84(r30)
    cmplw r6, r0
    blt lbl_fn_801EA534_00000ED0
    lwz r0, 0x90(r30)
    lis r3, lbl_8073CC80@ha
    addi r3, r3, lbl_8073CC80@l
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    bne lbl_fn_801EA534_00000F24
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_801EA534_00000F24
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x90(r30)
    mr r28, r3
    b lbl_fn_801EA534_00000F28
lbl_fn_801EA534_00000F24:
    li r28, 0x0
lbl_fn_801EA534_00000F28:
    lis r29, lbl_8073CC80@ha
    mr r3, r28
    addi r29, r29, lbl_8073CC80@l
    addi r5, r30, 0x8c
    addi r4, r29, 0x7
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r29, 0xd
    addi r5, r30, 0x70
    li r6, 0x0
    li r7, 0x1f4
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x18
    addi r5, r30, 0x68
    li r6, 0x0
    li r7, 0xc8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x20
    addi r5, r30, 0x6c
    li r6, 0x0
    li r7, 0xc8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x28
    addi r5, r30, 0x60
    li r6, 0x0
    li r7, 0xc8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r29, 0x2e
    addi r5, r30, 0x74
    li r6, 0x0
    li r7, 0xc8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80882B80
    mr r3, r28
    lfs f2, lbl_80882B84
    addi r4, r29, 0x36
    fmr f3, f1
    addi r5, r30, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80882B80
    mr r3, r28
    lfs f2, lbl_80882B84
    addi r4, r29, 0x3c
    fmr f3, f1
    addi r5, r30, 0x58
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80882B80
    mr r3, r28
    lfs f2, lbl_80882B84
    addi r4, r29, 0x42
    fmr f3, f1
    addi r5, r30, 0x5c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r30
    mr r4, r31
    bl fn_801EB93C
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801EA874(void)
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
    beq lbl_fn_801EA874_00001128
    addic. r0, r3, 0x90
    li r0, 0x0
    stw r0, lbl_8087F128
    beq lbl_fn_801EA874_000010E8
    lwz r4, 0x90(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801EA874_000010E8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_801EA874_000010E8
    bl fn_800897D8
lbl_fn_801EA874_000010E8:
    addic. r0, r30, 0x84
    beq lbl_fn_801EA874_0000110C
    lwz r3, 0x88(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801EA874_00001100
    bl fn_80084C24
lbl_fn_801EA874_00001100:
    li r0, 0x0
    stw r0, 0x88(r30)
    stw r0, 0x84(r30)
lbl_fn_801EA874_0000110C:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801EA874_00001128
    mr r3, r30
    bl dtor_80084684
lbl_fn_801EA874_00001128:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801EA920(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_801EA924(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_27
    lwz r4, lbl_8087EFB4
    li r0, 0x0
    mr r31, r3
    psq_l f1, 0x118(r4), 0, 0
    lfs f2, 0x120(r4)
    stfs f2, 0x50(r3)
    psq_st f1, 0x48(r3), 0, 0
    stw r0, 0x74(r3)
    lwz r4, lbl_8087F890
    lwz r5, 0x48(r4)
    b lbl_fn_801EA924_000011BC
lbl_fn_801EA924_00001190:
    lwz r0, 0x20(r5)
    cmplw r0, r3
    beq lbl_fn_801EA924_000011B8
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801EA924_000011B8
    lwz r4, 0x74(r3)
    addi r0, r4, 0x1
    stw r0, 0x74(r3)
lbl_fn_801EA924_000011B8:
    lwz r5, 0x1424(r5)
lbl_fn_801EA924_000011BC:
    cmpwi r5, 0x0
    bne lbl_fn_801EA924_00001190
    lwz r4, 0x74(r3)
    lwz r0, 0x70(r3)
    lwz r5, 0x68(r3)
    subf r4, r4, r0
    cmpw r5, r4
    mr r0, r4
    bge lbl_fn_801EA924_000011E4
    mr r0, r5
lbl_fn_801EA924_000011E4:
    lwz r6, 0x6c(r3)
    cmpw r6, r0
    ble lbl_fn_801EA924_000011F4
    b lbl_fn_801EA924_00001204
lbl_fn_801EA924_000011F4:
    cmpw r5, r4
    bge lbl_fn_801EA924_00001200
    mr r4, r5
lbl_fn_801EA924_00001200:
    mr r6, r4
lbl_fn_801EA924_00001204:
    stw r6, 0x60(r3)
    lwz r4, lbl_8087F098
    cmpwi r4, 0x0
    beq lbl_fn_801EA924_00001234
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801EA924_00001234
    cmpwi r6, 0x8
    li r0, 0x8
    bgt lbl_fn_801EA924_00001230
    mr r0, r6
lbl_fn_801EA924_00001230:
    stw r0, 0x60(r3)
lbl_fn_801EA924_00001234:
    lwz r4, lbl_8087F430
    lwz r0, 0x54e4(r4)
    cmpwi r0, 0x8
    beq lbl_fn_801EA924_00001328
    lwz r4, 0x60(r3)
    lwz r0, 0x64(r3)
    cmpw r0, r4
    bge lbl_fn_801EA924_00001270
    subf r30, r0, r4
    b lbl_fn_801EA924_00001264
lbl_fn_801EA924_0000125C:
    mr r3, r31
    bl fn_801EB188
lbl_fn_801EA924_00001264:
    cmpwi r30, 0x0
    subi r30, r30, 0x1
    bgt lbl_fn_801EA924_0000125C
lbl_fn_801EA924_00001270:
    lfs f0, 0x5c(r31)
    lwz r3, lbl_8087F890
    fmuls f31, f0, f0
    lwz r29, 0x48(r3)
    b lbl_fn_801EA924_00001320
lbl_fn_801EA924_00001284:
    lwz r0, 0x64(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801EA924_0000131C
    lhz r0, 0xd38(r29)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_801EA924_0000131C
    lfs f3, 0x530(r29)
    addi r3, r1, 0x8
    lfs f0, 0x50(r31)
    lfs f5, 0x52c(r29)
    fsubs f6, f3, f0
    lfs f4, 0x4c(r31)
    lfs f3, 0x528(r29)
    lfs f0, 0x48(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    ble lbl_fn_801EA924_0000131C
    lwz r28, lbl_8087F130
    li r27, 0x0
    li r30, 0x0
    b lbl_fn_801EA924_00001310
lbl_fn_801EA924_000012EC:
    lwz r0, 0x1630(r28)
    add r4, r0, r30
    lwz r0, 0x30(r4)
    cmplw r29, r0
    bne lbl_fn_801EA924_00001308
    mr r3, r31
    bl fn_801EB7C4
lbl_fn_801EA924_00001308:
    addi r27, r27, 0x1
    addi r30, r30, 0x34
lbl_fn_801EA924_00001310:
    lwz r0, 0x162c(r28)
    cmpw r27, r0
    blt lbl_fn_801EA924_000012EC
lbl_fn_801EA924_0000131C:
    lwz r29, 0x1424(r29)
lbl_fn_801EA924_00001320:
    cmpwi r29, 0x0
    bne lbl_fn_801EA924_00001284
lbl_fn_801EA924_00001328:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_27
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801EAB24(void)
{
    nofralloc
    stwu r1, -0x400(r1)
    mflr r0
    stw r0, 0x404(r1)
    addi r11, r1, 0x380
    stfd f31, 0x3f0(r1)
    psq_st f31, 0x3f8(r1), 0, 0
    stfd f30, 0x3e0(r1)
    psq_st f30, 0x3e8(r1), 0, 0
    stfd f29, 0x3d0(r1)
    psq_st f29, 0x3d8(r1), 0, 0
    stfd f28, 0x3c0(r1)
    psq_st f28, 0x3c8(r1), 0, 0
    stfd f27, 0x3b0(r1)
    psq_st f27, 0x3b8(r1), 0, 0
    stfd f26, 0x3a0(r1)
    psq_st f26, 0x3a8(r1), 0, 0
    stfd f25, 0x390(r1)
    psq_st f25, 0x398(r1), 0, 0
    stfd f24, 0x380(r1)
    psq_st f24, 0x388(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x8c(r3)
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_801EAB24_00001844
    lis r29, 0x6601
    lwz r3, lbl_8087EEB0
    lfs f1, 0x48(r26)
    subi r5, r29, 0x100
    lfs f2, 0x4c(r26)
    li r4, 0x10
    lfs f3, 0x50(r26)
    lfs f4, lbl_80882B70
    lfs f5, 0x54(r26)
    lfs f6, lbl_80882B88
    bl fn_80062C8C
    lis r30, 0x6700
    lwz r3, lbl_8087EEB0
    lfs f1, 0x48(r26)
    subi r5, r30, 0x100
    lfs f2, 0x4c(r26)
    li r4, 0x10
    lfs f3, 0x50(r26)
    lfs f4, lbl_80882B70
    lfs f5, 0x58(r26)
    lfs f6, lbl_80882B88
    bl fn_80062C8C
    lwz r3, lbl_8087EEB0
    li r4, 0x10
    lfs f1, 0x48(r26)
    lis r5, 0x66ff
    lfs f2, 0x4c(r26)
    lfs f3, 0x50(r26)
    lfs f4, lbl_80882B70
    lfs f5, 0x5c(r26)
    lfs f6, lbl_80882B88
    bl fn_80062C8C
    lis r23, lbl_8073CC80@ha
    lfs f31, lbl_80882B90
    lfs f25, lbl_80882B80
    addi r23, r23, lbl_8073CC80@l
    lfs f26, lbl_80882B70
    li r27, 0x0
    lfs f27, lbl_80882B98
    li r25, 0x0
    lfs f28, lbl_80882B94
    lis r31, 0xff00
    lfs f30, lbl_80882BA0
    lis r24, 0xb000
    lfs f29, lbl_80882B9C
    b lbl_fn_801EAB24_00001834
lbl_fn_801EAB24_00001464:
    lwz r3, lbl_8087F130
    lwz r0, 0x1630(r3)
    add r28, r0, r25
    lwz r0, 0x30(r28)
    cmpwi r0, 0x0
    bne lbl_fn_801EAB24_00001534
    lwz r6, 0x4(r28)
    subi r5, r29, 0x100
    lwz r0, 0x8(r28)
    li r4, 0x10
    lwz r3, lbl_8087EEB0
    cmpw r6, r0
    lfs f1, 0xc(r28)
    lfs f2, 0x10(r28)
    lfs f3, 0x14(r28)
    lfs f4, lbl_80882B70
    lfs f5, lbl_80882B8C
    lfs f6, lbl_80882B90
    bne lbl_fn_801EAB24_000014B4
    subi r5, r30, 0x100
lbl_fn_801EAB24_000014B4:
    bl fn_80062C8C
    lwz r3, lbl_8087EEB0
    addi r4, r28, 0xc
    lfs f1, lbl_80882B70
    addi r5, r28, 0x18
    li r6, -0x1
    bl fn_80063764
    lfs f2, 0x2c(r28)
    addi r4, r28, 0xc
    lfs f1, 0x28(r28)
    addi r5, r1, 0x34
    fmuls f3, f2, f31
    lfs f0, 0x24(r28)
    fmuls f4, f1, f31
    lfs f2, 0x14(r28)
    fmuls f5, f0, f31
    lfs f1, 0x10(r28)
    lfs f0, 0xc(r28)
    fadds f6, f1, f4
    fadds f2, f2, f3
    stfs f5, 0x28(r1)
    fadds f0, f0, f5
    lwz r3, lbl_8087EEB0
    stfs f4, 0x2c(r1)
    lfs f1, lbl_80882B70
    stfs f3, 0x30(r1)
    addi r6, r31, 0xff
    stfs f0, 0x34(r1)
    stfs f6, 0x38(r1)
    stfs f2, 0x3c(r1)
    bl fn_80063764
    b lbl_fn_801EAB24_00001658
lbl_fn_801EAB24_00001534:
    fcmpo cr0, f25, f25
    stfs f25, 0x18(r1)
    stfs f26, 0x1c(r1)
    stfs f26, 0x20(r1)
    stfs f25, 0x24(r1)
    cror eq, gt, eq
    bne lbl_fn_801EAB24_00001558
    li r20, 0xff
    b lbl_fn_801EAB24_00001578
lbl_fn_801EAB24_00001558:
    fcmpo cr0, f25, f26
    cror eq, lt, eq
    bne lbl_fn_801EAB24_0000156C
    li r3, 0x0
    b lbl_fn_801EAB24_00001574
lbl_fn_801EAB24_0000156C:
    fmadds f1, f27, f25, f28
    bl fn_80695D84
lbl_fn_801EAB24_00001574:
    mr r20, r3
lbl_fn_801EAB24_00001578:
    lfs f0, 0x1c(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_801EAB24_00001590
    li r21, 0xff
    b lbl_fn_801EAB24_000015B0
lbl_fn_801EAB24_00001590:
    fcmpo cr0, f0, f26
    cror eq, lt, eq
    bne lbl_fn_801EAB24_000015A4
    li r3, 0x0
    b lbl_fn_801EAB24_000015AC
lbl_fn_801EAB24_000015A4:
    fmadds f1, f27, f0, f28
    bl fn_80695D84
lbl_fn_801EAB24_000015AC:
    mr r21, r3
lbl_fn_801EAB24_000015B0:
    lfs f0, 0x20(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_801EAB24_000015C8
    li r22, 0xff
    b lbl_fn_801EAB24_000015E8
lbl_fn_801EAB24_000015C8:
    fcmpo cr0, f0, f26
    cror eq, lt, eq
    bne lbl_fn_801EAB24_000015DC
    li r3, 0x0
    b lbl_fn_801EAB24_000015E4
lbl_fn_801EAB24_000015DC:
    fmadds f1, f27, f0, f28
    bl fn_80695D84
lbl_fn_801EAB24_000015E4:
    mr r22, r3
lbl_fn_801EAB24_000015E8:
    lfs f0, 0x24(r1)
    fcmpo cr0, f0, f25
    cror eq, gt, eq
    bne lbl_fn_801EAB24_00001600
    li r3, 0xff
    b lbl_fn_801EAB24_0000161C
lbl_fn_801EAB24_00001600:
    fcmpo cr0, f0, f26
    cror eq, lt, eq
    bne lbl_fn_801EAB24_00001614
    li r3, 0x0
    b lbl_fn_801EAB24_0000161C
lbl_fn_801EAB24_00001614:
    fmadds f1, f27, f0, f28
    bl fn_80695D84
lbl_fn_801EAB24_0000161C:
    slwi r5, r21, 8
    slwi r4, r3, 24
    slwi r0, r20, 16
    lwz r3, lbl_8087EEB0
    or r0, r4, r0
    or r5, r22, r5
    lfs f1, 0xc(r28)
    or r5, r5, r0
    lfs f2, 0x10(r28)
    li r4, 0x10
    lfs f3, 0x14(r28)
    lfs f4, lbl_80882B70
    lfs f5, lbl_80882B8C
    lfs f6, lbl_80882B90
    bl fn_80062C8C
lbl_fn_801EAB24_00001658:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x8
    lfs f0, 0x14(r28)
    lfs f1, 0x114(r4)
    lfs f3, 0x110(r4)
    fsubs f4, f1, f0
    lfs f2, 0x10(r28)
    lfs f1, 0x10c(r4)
    lfs f0, 0xc(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f29
    bge lbl_fn_801EAB24_0000182C
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x40
    addi r5, r28, 0xc
    bl fn_800BFAC8
    lfs f0, 0x48(r1)
    lfs f24, 0x44(r1)
    fcmpo cr0, f0, f26
    ble lbl_fn_801EAB24_0000182C
    fcmpo cr0, f0, f25
    bge lbl_fn_801EAB24_0000182C
    lwz r5, 0x4(r28)
    addi r3, r1, 0x50
    lwz r6, 0x8(r28)
    addi r4, r23, 0x47
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x150
    addi r5, r1, 0x50
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80882B70
    fmr f2, f24
    lfs f4, lbl_80882BA0
    addi r4, r1, 0x150
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x40(r1)
    fmr f8, f3
    subi r5, r24, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    lwz r4, 0x7c(r26)
    fadds f24, f24, f30
    lwz r5, 0x0(r28)
    addi r3, r1, 0x50
    lwz r6, 0x4(r4)
    addi r4, r23, 0x59
    slwi r0, r5, 5
    lwzx r6, r6, r0
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x150
    addi r5, r1, 0x50
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80882B70
    fmr f2, f24
    lfs f4, lbl_80882BA0
    addi r4, r1, 0x150
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x40(r1)
    fmr f8, f3
    subi r5, r24, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
    fadds f24, f24, f30
    lfs f1, 0x18(r28)
    lfs f2, 0x1c(r28)
    addi r3, r1, 0x50
    lfs f3, 0x20(r28)
    addi r4, r23, 0x6b
    crset 6
    bl sprintf
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x150
    addi r5, r1, 0x50
    li r6, 0x100
    bl fn_8006F2F0
    lfs f3, lbl_80882B70
    fmr f2, f24
    lfs f4, lbl_80882BA0
    addi r4, r1, 0x150
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    fmr f7, f3
    lfs f1, 0x40(r1)
    fmr f8, f3
    subi r5, r24, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    li r9, 0x0
    lis r10, 0xff00
    bl fn_80061824
lbl_fn_801EAB24_0000182C:
    addi r27, r27, 0x1
    addi r25, r25, 0x34
lbl_fn_801EAB24_00001834:
    lwz r3, lbl_8087F130
    lwz r0, 0x162c(r3)
    cmpw r27, r0
    blt lbl_fn_801EAB24_00001464
lbl_fn_801EAB24_00001844:
    addi r11, r1, 0x380
    psq_l f31, 0x3f8(r1), 0, 0
    lfd f31, 0x3f0(r1)
    psq_l f30, 0x3e8(r1), 0, 0
    lfd f30, 0x3e0(r1)
    psq_l f29, 0x3d8(r1), 0, 0
    lfd f29, 0x3d0(r1)
    psq_l f28, 0x3c8(r1), 0, 0
    lfd f28, 0x3c0(r1)
    psq_l f27, 0x3b8(r1), 0, 0
    lfd f27, 0x3b0(r1)
    psq_l f26, 0x3a8(r1), 0, 0
    lfd f26, 0x3a0(r1)
    psq_l f25, 0x398(r1), 0, 0
    lfd f25, 0x390(r1)
    psq_l f24, 0x388(r1), 0, 0
    lfd f24, 0x380(r1)
    bl _restgpr_20
    lwz r0, 0x404(r1)
    mtlr r0
    addi r1, r1, 0x400
    blr
}

asm void fn_801EB078(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r0, 0x74(r3)
    lwz r4, lbl_8087F890
    lwz r5, 0x48(r4)
    b lbl_fn_801EB078_000018F4
lbl_fn_801EB078_000018C8:
    lwz r0, 0x20(r5)
    cmplw r0, r3
    beq lbl_fn_801EB078_000018F0
    lwz r0, 0x38(r5)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_801EB078_000018F0
    lwz r4, 0x74(r3)
    addi r0, r4, 0x1
    stw r0, 0x74(r3)
lbl_fn_801EB078_000018F0:
    lwz r5, 0x1424(r5)
lbl_fn_801EB078_000018F4:
    cmpwi r5, 0x0
    bne lbl_fn_801EB078_000018C8
    lwz r4, 0x74(r3)
    lwz r0, 0x70(r3)
    lwz r5, 0x68(r3)
    subf r4, r4, r0
    cmpw r5, r4
    mr r0, r4
    bge lbl_fn_801EB078_0000191C
    mr r0, r5
lbl_fn_801EB078_0000191C:
    lwz r6, 0x6c(r3)
    cmpw r6, r0
    ble lbl_fn_801EB078_0000192C
    b lbl_fn_801EB078_0000193C
lbl_fn_801EB078_0000192C:
    cmpw r5, r4
    bge lbl_fn_801EB078_00001938
    mr r4, r5
lbl_fn_801EB078_00001938:
    mr r6, r4
lbl_fn_801EB078_0000193C:
    stw r6, 0x60(r3)
    lwz r4, lbl_8087F098
    cmpwi r4, 0x0
    beq lbl_fn_801EB078_0000196C
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_801EB078_0000196C
    cmpwi r6, 0x8
    li r0, 0x8
    bgt lbl_fn_801EB078_00001968
    mr r0, r6
lbl_fn_801EB078_00001968:
    stw r0, 0x60(r3)
lbl_fn_801EB078_0000196C:
    li r30, 0x0
    b lbl_fn_801EB078_00001980
lbl_fn_801EB078_00001974:
    mr r3, r31
    bl fn_801EB188
    addi r30, r30, 0x1
lbl_fn_801EB078_00001980:
    lwz r0, 0x60(r31)
    cmpw r30, r0
    blt lbl_fn_801EB078_00001974
    li r0, 0x0
    stw r0, 0x78(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
