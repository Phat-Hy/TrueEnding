#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void fn_80049B74(void);
extern void fn_80049CDC(void);
extern void fn_8005B9CC(void);
extern void fn_800697D8(void);
extern void fn_8006AA20(void);
extern void fn_8007FAF0(void);
extern void fn_80092954(void);
extern void fn_8009385C(void);
extern void fn_800C93D4(void);
extern void fn_800CA7D4(void);
extern void fn_800CB360(void);
extern void fn_800CB3A0(void);
extern void fn_800CB404(void);
extern void fn_800CB4EC(void);
extern void fn_800CB58C(void);
extern void fn_800CB5C8(void);
extern void fn_800CB6F8(void);
extern void fn_800CFDA0(void);
extern void fn_800CFDC8(void);
extern void fn_800D0AB0(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8021FFB0(void);
extern void fn_803CC6B4(void);
extern void fn_803E3BE8(void);
extern void fn_803F1BB4(void);
extern void fn_803F471C(void);
extern void fn_803F69E4(void);
extern void fn_803F744C(void);
extern void fn_803F74D0(void);
extern void fn_803F9420(void);
extern void fn_803F9F34(void);
extern void fn_803FBFA8(void);
extern void fn_803FC8D8(void);
extern void fn_803FE390(void);
extern void fn_803FE570(void);
extern void fn_80400728(void);
extern void fn_80402978(void);
extern void fn_80405DD4(void);
extern void fn_80406754(void);
extern void fn_804067D8(void);
extern void fn_80408324(void);
extern void fn_804093B4(void);
extern void fn_8040D1D0(void);
extern void fn_8040DC30(void);
extern void fn_8040EC30(void);
extern void fn_8040ED00(void);
extern void fn_8040FAC0(void);
extern void fn_80410A68(void);
extern void fn_80411440(void);
extern void fn_80412AFC(void);
extern void fn_80414AC4(void);
extern void fn_8041537C(void);
extern void fn_804166B0(void);
extern void fn_80416F74(void);
extern void fn_80418198(void);
extern void fn_80418EAC(void);
extern void fn_80418F30(void);
extern void fn_8041B970(void);
extern void fn_8041C09C(void);
extern void fn_8041CD54(void);
extern void fn_8041DDE4(void);
extern void fn_8041EB80(void);
extern void fn_8041FF08(void);
extern void fn_80420ADC(void);
extern void fn_80421454(void);
extern void fn_80421AB8(void);
extern void fn_80422610(void);
extern void fn_8042335C(void);
extern void fn_80423F64(void);
extern void fn_80426108(void);
extern void fn_80427EB4(void);
extern void fn_80428B0C(void);
extern void fn_80429668(void);
extern void fn_8042AFE4(void);
extern void fn_8042B56C(void);
extern void fn_8042C21C(void);
extern void fn_8042CE30(void);
extern void fn_8042D628(void);
extern void fn_8042E36C(void);
extern void fn_8042F0B4(void);
extern void fn_8042F7EC(void);
extern void fn_804310B0(void);
extern void fn_80432CF0(void);
extern void fn_80435CE4(void);
extern void fn_80435DEC(void);
extern void fn_80436E34(void);
extern void fn_8043A770(void);
extern void fn_8043A850(void);
extern void fn_8043B778(void);
extern void fn_8043D594(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80684600(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078C6C8[];
extern u8 jumptable_8078C7D8[];
extern u8 lbl_80751D1C[];
extern u8 lbl_80751DB0[];
extern u8 lbl_80751DB8[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_80885F4C;
extern u32 lbl_80885F50;
extern u32 lbl_80885F54;
extern u32 lbl_80885F58;

/* Function declarations */
void fn_803EAA7C(void);
void fn_803EAC20(void);
void fn_803EAC3C(void);
void fn_803EAF60(void);
void fn_803EB038(void);
void fn_803EB234(void);
void fn_803EB2A4(void);
void fn_803EB338(void);
void fn_803EB394(void);
void fn_803EB4A8(void);
void fn_803EB668(void);
void fn_803EB7E4(void);
void fn_803EBA54(void);
void fn_803EBAC8(void);
void fn_803EBBCC(void);
void fn_803EBC04(void);
void fn_803EBC44(void);
void fn_803EBD6C(void);
void fn_803EBE74(void);
void fn_803EC0A4(void);
void fn_803EC0F8(void);
void fn_803EC16C(void);
void fn_803EC374(void);

asm void fn_803EAA7C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r3, r1, 0x8
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    bl fn_800CB360
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803EAA7C_00000060
    lwz r0, 0x5538(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EAA7C_00000060
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EAA7C_0000017C
lbl_fn_803EAA7C_00000060:
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803EAA7C_00000098
    lwz r3, 0x2640(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803EAA7C_00000098
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EAA7C_00000098
    lfs f0, 0x60(r3)
    fcmpo cr0, f0, f31
    bge lbl_fn_803EAA7C_00000098
    li r0, 0x0
    b lbl_fn_803EAA7C_0000009C
lbl_fn_803EAA7C_00000098:
    li r0, 0x1
lbl_fn_803EAA7C_0000009C:
    cmpwi r0, 0x0
    bne lbl_fn_803EAA7C_000000B4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EAA7C_0000017C
lbl_fn_803EAA7C_000000B4:
    cmpwi r28, 0x0
    bne lbl_fn_803EAA7C_000000CC
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EAA7C_0000017C
lbl_fn_803EAA7C_000000CC:
    lwz r31, 0x7c(r28)
    cmpwi r31, 0x0
    beq lbl_fn_803EAA7C_000000EC
    mr r3, r31
    mr r4, r29
    bl fn_8021FFB0
    cmpwi r3, 0x0
    bgt lbl_fn_803EAA7C_000000FC
lbl_fn_803EAA7C_000000EC:
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EAA7C_0000017C
lbl_fn_803EAA7C_000000FC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803EAA7C_00000110
    lwz r30, 0x10d8(r3)
    b lbl_fn_803EAA7C_00000114
lbl_fn_803EAA7C_00000110:
    li r30, 0x0
lbl_fn_803EAA7C_00000114:
    cmpwi r30, 0x0
    beq lbl_fn_803EAA7C_0000013C
    mr r3, r31
    mr r4, r29
    bl fn_8021FFB0
    mr r4, r3
    mr r3, r30
    bl fn_803CC6B4
    mr r4, r3
    b lbl_fn_803EAA7C_00000140
lbl_fn_803EAA7C_0000013C:
    li r4, 0x0
lbl_fn_803EAA7C_00000140:
    cmpwi r4, 0x0
    bne lbl_fn_803EAA7C_00000158
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803EAA7C_0000017C
lbl_fn_803EAA7C_00000158:
    fmr f1, f31
    lwz r3, lbl_8087F490
    li r5, 0x0
    bl fn_803E3BE8
    lwz r5, lbl_8087F490
    addi r3, r1, 0x8
    li r4, -0x1
    stw r28, 0x2658(r5)
    bl fn_800CB3A0
lbl_fn_803EAA7C_0000017C:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803EAC20(void)
{
    nofralloc
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803EAC20_000001B8
    lwz r3, 0x2658(r3)
    blr
lbl_fn_803EAC20_000001B8:
    li r3, 0x0
    blr
}

asm void fn_803EAC3C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_20
    lwz r5, lbl_8087F490
    mr r20, r3
    mr r21, r4
    cmpwi r5, 0x0
    beq lbl_fn_803EAC3C_00000210
    lwz r0, 0x2658(r5)
    cmplw r0, r4
    beq lbl_fn_803EAC3C_00000204
    cmpwi r4, 0x0
    bne lbl_fn_803EAC3C_00000210
lbl_fn_803EAC3C_00000204:
    lwz r4, lbl_8087F490
    li r0, 0x0
    stw r0, 0x2658(r4)
lbl_fn_803EAC3C_00000210:
    lis r27, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    addi r22, r3, 0x398
    li r31, 0x10
    addi r27, r27, lbl_807C7030@l
    li r28, 0x0
    lis r29, 0x9249
    b lbl_fn_803EAC3C_000003D8
lbl_fn_803EAC3C_00000230:
    lwz r0, 0x8(r22)
    cmplw r0, r21
    bne lbl_fn_803EAC3C_000003D4
    lwz r30, 0x24(r22)
    li r4, 0x0
    li r5, 0x0
    mr r3, r30
    bl fn_800CB5C8
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EAC3C_00000280
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803EAC3C_00000280
    lwz r4, 0x1154(r3)
    addi r0, r30, 0x4
    cmplw r4, r0
    bne lbl_fn_803EAC3C_00000280
    stw r28, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EAC3C_00000280:
    addi r3, r30, 0x10
    bl fn_80473F88
    addi r0, r20, 0x398
    stw r28, 0x18(r30)
    subf r0, r0, r22
    addi r3, r29, 0x2493
    mulhw r3, r3, r0
    lfs f2, 0x8(r27)
    psq_l f1, 0x0(r27), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
    add r0, r3, r0
    srawi r0, r0, 7
    stw r28, 0x28(r30)
    srwi r3, r0, 31
    add r26, r0, r3
    stb r28, 0x2c(r30)
    mulli r0, r26, 0xe0
    stb r28, 0x2d(r30)
    add r24, r20, r0
    addi r23, r24, 0x398
    b lbl_fn_803EAC3C_000003BC
lbl_fn_803EAC3C_000002D8:
    lwz r3, 0x478(r24)
    addi r0, r26, 0x1
    stw r3, 0x398(r24)
    mulli r4, r0, 0xe0
    addi r0, r23, 0x38
    lwz r3, 0x47c(r24)
    stw r3, 0x39c(r24)
    add r30, r20, r4
    addi r25, r30, 0x3d0
    lwz r3, 0x480(r24)
    cmplw r25, r0
    stw r3, 0x3a0(r24)
    lwz r0, 0x484(r24)
    stw r0, 0x3a4(r24)
    lwz r0, 0x488(r24)
    stw r0, 0x3a8(r24)
    lfs f0, 0x48c(r24)
    stfs f0, 0x3ac(r24)
    lwz r0, 0x490(r24)
    stw r0, 0x3b0(r24)
    lwz r0, 0x494(r24)
    stw r0, 0x3b4(r24)
    lwz r0, 0x498(r24)
    stw r0, 0x3b8(r24)
    lwz r0, 0x49c(r24)
    stw r0, 0x3bc(r24)
    lwz r0, 0x3c0(r30)
    stw r0, 0x3c0(r24)
    lwz r0, 0x3c4(r30)
    stw r0, 0x3c4(r24)
    lwz r0, 0x3c8(r30)
    stw r0, 0x3c8(r24)
    lwz r0, 0x3cc(r30)
    stw r0, 0x3cc(r24)
    beq lbl_fn_803EAC3C_00000380
    mr r3, r25
    bl strlen
    mr r5, r3
    mr r4, r25
    addi r3, r23, 0x38
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_803EAC3C_00000380:
    lwz r0, 0x3f0(r30)
    addi r5, r24, 0x3f4
    stw r0, 0x3f0(r24)
    addi r4, r24, 0x4d4
    lwz r0, 0x3f4(r30)
    stw r0, 0x3f4(r24)
    mtctr r31
lbl_fn_803EAC3C_0000039C:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_803EAC3C_0000039C
    addi r24, r24, 0xe0
    addi r23, r23, 0xe0
    addi r26, r26, 0x1
lbl_fn_803EAC3C_000003BC:
    lwz r3, 0x394(r20)
    subi r0, r3, 0x1
    cmplw r26, r0
    blt lbl_fn_803EAC3C_000002D8
    stw r0, 0x394(r20)
    b lbl_fn_803EAC3C_000003D8
lbl_fn_803EAC3C_000003D4:
    addi r22, r22, 0xe0
lbl_fn_803EAC3C_000003D8:
    lwz r0, 0x394(r20)
    mulli r0, r0, 0xe0
    add r3, r20, r0
    addi r0, r3, 0x398
    cmplw r22, r0
    bne lbl_fn_803EAC3C_00000230
    addi r6, r20, 0x114
    lis r4, 0x6666
    b lbl_fn_803EAC3C_000004AC
lbl_fn_803EAC3C_000003FC:
    lwz r0, 0x0(r6)
    cmplw r0, r21
    beq lbl_fn_803EAC3C_00000410
    cmpwi r21, 0x0
    bne lbl_fn_803EAC3C_000004A8
lbl_fn_803EAC3C_00000410:
    addi r0, r20, 0x114
    addi r3, r4, 0x6667
    subf r0, r0, r6
    mulhw r0, r3, r0
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0x28
    add r7, r20, r0
    b lbl_fn_803EAC3C_00000490
lbl_fn_803EAC3C_00000438:
    lwz r0, 0x13c(r7)
    addi r5, r5, 0x1
    stw r0, 0x114(r7)
    lwz r0, 0x140(r7)
    stw r0, 0x118(r7)
    lwz r0, 0x144(r7)
    stw r0, 0x11c(r7)
    lwz r0, 0x148(r7)
    stw r0, 0x120(r7)
    lfs f0, 0x14c(r7)
    stfs f0, 0x124(r7)
    lfs f0, 0x150(r7)
    stfs f0, 0x128(r7)
    lwz r0, 0x154(r7)
    stw r0, 0x12c(r7)
    lwz r0, 0x158(r7)
    stw r0, 0x130(r7)
    lwz r0, 0x15c(r7)
    stw r0, 0x134(r7)
    lwz r0, 0x160(r7)
    stw r0, 0x138(r7)
    addi r7, r7, 0x28
lbl_fn_803EAC3C_00000490:
    lwz r3, 0x110(r20)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_803EAC3C_00000438
    stw r0, 0x110(r20)
    b lbl_fn_803EAC3C_000004AC
lbl_fn_803EAC3C_000004A8:
    addi r6, r6, 0x28
lbl_fn_803EAC3C_000004AC:
    lwz r0, 0x110(r20)
    mulli r0, r0, 0x28
    add r3, r20, r0
    addi r0, r3, 0x114
    cmplw r6, r0
    bne lbl_fn_803EAC3C_000003FC
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_20
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803EAF60(void)
{
    nofralloc
    addi r5, r3, 0x114
    lis r7, 0x6666
    b lbl_fn_803EAF60_000005A0
lbl_fn_803EAF60_000004F0:
    lwz r0, 0x0(r5)
    cmplw r0, r4
    beq lbl_fn_803EAF60_00000504
    cmpwi r4, 0x0
    bne lbl_fn_803EAF60_0000059C
lbl_fn_803EAF60_00000504:
    addi r0, r3, 0x114
    addi r6, r7, 0x6667
    subf r0, r0, r5
    mulhw r0, r6, r0
    srawi r0, r0, 4
    srwi r6, r0, 31
    add r8, r0, r6
    mulli r0, r8, 0x28
    add r9, r3, r0
    b lbl_fn_803EAF60_00000584
lbl_fn_803EAF60_0000052C:
    lwz r0, 0x13c(r9)
    addi r8, r8, 0x1
    stw r0, 0x114(r9)
    lwz r0, 0x140(r9)
    stw r0, 0x118(r9)
    lwz r0, 0x144(r9)
    stw r0, 0x11c(r9)
    lwz r0, 0x148(r9)
    stw r0, 0x120(r9)
    lfs f0, 0x14c(r9)
    stfs f0, 0x124(r9)
    lfs f0, 0x150(r9)
    stfs f0, 0x128(r9)
    lwz r0, 0x154(r9)
    stw r0, 0x12c(r9)
    lwz r0, 0x158(r9)
    stw r0, 0x130(r9)
    lwz r0, 0x15c(r9)
    stw r0, 0x134(r9)
    lwz r0, 0x160(r9)
    stw r0, 0x138(r9)
    addi r9, r9, 0x28
lbl_fn_803EAF60_00000584:
    lwz r6, 0x110(r3)
    subi r0, r6, 0x1
    cmplw r8, r0
    blt lbl_fn_803EAF60_0000052C
    stw r0, 0x110(r3)
    b lbl_fn_803EAF60_000005A0
lbl_fn_803EAF60_0000059C:
    addi r5, r5, 0x28
lbl_fn_803EAF60_000005A0:
    lwz r0, 0x110(r3)
    mulli r0, r0, 0x28
    add r6, r3, r0
    addi r0, r6, 0x114
    cmplw r5, r0
    bne lbl_fn_803EAF60_000004F0
    blr
}

asm void fn_803EB038(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r4
    stw r29, 0x114(r1)
    mr r29, r3
    stw r28, 0x110(r1)
    mr r28, r5
    beq lbl_fn_803EB038_000005FC
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    mr r4, r3
    b lbl_fn_803EB038_00000600
lbl_fn_803EB038_000005FC:
    li r4, 0x0
lbl_fn_803EB038_00000600:
    mr r3, r29
    li r5, 0x0
    bl fn_803EB7E4
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803EB038_00000630
    lbz r0, 0x2c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803EB038_00000630
    lbz r0, 0x2d(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EB038_00000638
lbl_fn_803EB038_00000630:
    li r3, 0x0
    b lbl_fn_803EB038_00000798
lbl_fn_803EB038_00000638:
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803EB038_0000067C
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803EB038_0000067C
    lwz r3, 0x1154(r4)
    addi r0, r31, 0x4
    cmplw r3, r0
    bne lbl_fn_803EB038_0000067C
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803EB038_0000067C:
    addi r3, r31, 0x10
    bl fn_80473F88
    li r29, 0x0
    lis r3, lbl_807C7030@ha
    stw r29, 0x18(r31)
    addi r3, r3, lbl_807C7030@l
    mr r4, r30
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r31), 0, 0
    stfs f2, 0x24(r31)
    stw r29, 0x28(r31)
    stb r29, 0x2c(r31)
    stb r29, 0x2d(r31)
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    lwz r5, lbl_8087EFE8
    mr r4, r3
    stw r29, 0x34c8(r5)
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    lwz r4, lbl_8087EFE8
    li r0, 0x1
    cmpwi r3, 0x0
    mr r29, r3
    stw r0, 0x34c8(r4)
    bne lbl_fn_803EB038_000006F0
    li r29, 0x0
    b lbl_fn_803EB038_00000728
lbl_fn_803EB038_000006F0:
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    bl fn_800CFDA0
    stw r3, 0xa8(r29)
    li r4, 0x8
    lwz r3, lbl_8087EFE8
    bl fn_800CFDC8
    stw r3, 0xac(r29)
    mr r3, r29
    mr r4, r28
    bl fn_800CA7D4
    mr r3, r29
    mr r4, r30
    bl fn_800C93D4
lbl_fn_803EB038_00000728:
    mr r3, r31
    mr r4, r29
    bl fn_800CB404
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803EB038_00000748
    li r0, 0x1
    stb r0, 0x2c(r31)
lbl_fn_803EB038_00000748:
    lis r4, lbl_80751D1C@ha
    mr r5, r30
    addi r4, r4, lbl_80751D1C@l
    addi r3, r1, 0x8
    addi r4, r4, 0x41
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_803EB038_0000078C
    lwz r12, 0x10(r31)
    addi r3, r31, 0x10
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803EB038_0000078C:
    li r0, 0x1
    stb r0, 0x2d(r31)
    li r3, 0x1
lbl_fn_803EB038_00000798:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803EB234(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x48
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_803EB234_000007D4:
    mr r3, r31
    bl fn_800CB4EC
    cmpwi r3, 0x0
    bne lbl_fn_803EB234_000007F4
    addi r3, r31, 0x10
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803EB234_000007FC
lbl_fn_803EB234_000007F4:
    li r3, 0x1
    b lbl_fn_803EB234_00000810
lbl_fn_803EB234_000007FC:
    addi r30, r30, 0x1
    addi r31, r31, 0x30
    cmpwi r30, 0x4
    blt lbl_fn_803EB234_000007D4
    li r3, 0x0
lbl_fn_803EB234_00000810:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EB2A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_803EB2A4_0000085C
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    mr r31, r3
    b lbl_fn_803EB2A4_00000860
lbl_fn_803EB2A4_0000085C:
    li r31, 0x0
lbl_fn_803EB2A4_00000860:
    addi r30, r29, 0x48
    li r29, 0x0
lbl_fn_803EB2A4_00000868:
    lbz r0, 0x2c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803EB2A4_0000088C
    mr r3, r30
    bl fn_800CB6F8
    cmplw r31, r3
    bne lbl_fn_803EB2A4_0000088C
    li r3, 0x1
    b lbl_fn_803EB2A4_000008A0
lbl_fn_803EB2A4_0000088C:
    addi r29, r29, 0x1
    addi r30, r30, 0x30
    cmpwi r29, 0x4
    blt lbl_fn_803EB2A4_00000868
    li r3, 0x0
lbl_fn_803EB2A4_000008A0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EB338(void)
{
    nofralloc
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EB338_000008D0
    li r3, 0x1
    blr
lbl_fn_803EB338_000008D0:
    lbz r0, 0xa4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EB338_000008E4
    li r3, 0x1
    blr
lbl_fn_803EB338_000008E4:
    addi r3, r3, 0x60
    lbz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EB338_000008FC
    li r3, 0x1
    blr
lbl_fn_803EB338_000008FC:
    lbz r0, 0xa4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EB338_00000910
    li r3, 0x1
    blr
lbl_fn_803EB338_00000910:
    li r3, 0x0
    blr
}

asm void fn_803EB394(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_24
    cmpwi r4, 0x0
    mr r24, r3
    beq lbl_fn_803EB394_00000950
    lwz r3, lbl_8087EE90
    bl fn_80049B74
    mr r27, r3
    b lbl_fn_803EB394_00000954
lbl_fn_803EB394_00000950:
    li r27, 0x0
lbl_fn_803EB394_00000954:
    li r26, 0x0
    lis r28, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    mr r29, r26
    mr r30, r26
    addi r28, r28, lbl_807C7030@l
    li r31, 0x0
lbl_fn_803EB394_00000970:
    add r3, r24, r31
    lbz r0, 0x74(r3)
    addi r25, r3, 0x48
    cmpwi r0, 0x0
    beq lbl_fn_803EB394_000009FC
    mr r3, r25
    bl fn_800CB6F8
    cmplw r27, r3
    bne lbl_fn_803EB394_000009FC
    mr r3, r25
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x18(r25)
    cmpwi r3, 0x0
    beq lbl_fn_803EB394_000009D4
    lwz r0, 0x4(r25)
    cmpwi r0, 0x0
    beq lbl_fn_803EB394_000009D4
    lwz r4, 0x1154(r3)
    addi r0, r25, 0x4
    cmplw r4, r0
    bne lbl_fn_803EB394_000009D4
    stw r29, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EB394_000009D4:
    addi r3, r25, 0x10
    bl fn_80473F88
    stw r30, 0x18(r25)
    lfs f2, 0x8(r28)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x1c(r25), 0, 0
    stfs f2, 0x24(r25)
    stw r30, 0x28(r25)
    stb r30, 0x2c(r25)
    stb r30, 0x2d(r25)
lbl_fn_803EB394_000009FC:
    addi r26, r26, 0x1
    addi r31, r31, 0x30
    cmpwi r26, 0x4
    blt lbl_fn_803EB394_00000970
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EB4A8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_23
    li r25, 0x0
    lis r26, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    mr r30, r3
    mr r31, r4
    mr r23, r5
    mr r27, r25
    mr r28, r25
    addi r26, r26, lbl_807C7030@l
    li r29, 0x0
lbl_fn_803EB4A8_00000A70:
    add r3, r30, r29
    lbz r0, 0x74(r3)
    addi r24, r3, 0x48
    cmpwi r0, 0x0
    bne lbl_fn_803EB4A8_00000A90
    lbz r0, 0x2d(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803EB4A8_00000AF8
lbl_fn_803EB4A8_00000A90:
    mr r3, r24
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x18(r24)
    cmpwi r3, 0x0
    beq lbl_fn_803EB4A8_00000AD0
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    beq lbl_fn_803EB4A8_00000AD0
    lwz r4, 0x1154(r3)
    addi r0, r24, 0x4
    cmplw r4, r0
    bne lbl_fn_803EB4A8_00000AD0
    stw r27, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EB4A8_00000AD0:
    addi r3, r24, 0x10
    bl fn_80473F88
    stw r28, 0x18(r24)
    lfs f2, 0x8(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x1c(r24), 0, 0
    stfs f2, 0x24(r24)
    stw r28, 0x28(r24)
    stb r28, 0x2c(r24)
    stb r28, 0x2d(r24)
lbl_fn_803EB4A8_00000AF8:
    addi r25, r25, 0x1
    addi r29, r29, 0x30
    cmpwi r25, 0x4
    blt lbl_fn_803EB4A8_00000A70
    cmpwi r23, 0x0
    li r28, 0x0
    stw r28, 0x110(r30)
    bne lbl_fn_803EB4A8_00000BCC
    lis r26, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    addi r26, r26, lbl_807C7030@l
    li r24, 0x0
    li r29, 0x0
    b lbl_fn_803EB4A8_00000BB8
lbl_fn_803EB4A8_00000B30:
    add r3, r30, r29
    lwz r27, 0x3bc(r3)
    cmpwi r27, 0x0
    beq lbl_fn_803EB4A8_00000BB0
    mr r3, r27
    li r4, 0xa
    li r5, 0x0
    bl fn_800CB5C8
    cmpwi r31, 0x0
    bne lbl_fn_803EB4A8_00000B94
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_803EB4A8_00000B88
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803EB4A8_00000B88
    lwz r4, 0x1154(r3)
    addi r0, r27, 0x4
    cmplw r4, r0
    bne lbl_fn_803EB4A8_00000B88
    stw r28, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EB4A8_00000B88:
    addi r3, r27, 0x10
    bl fn_80473F88
    stw r28, 0x18(r27)
lbl_fn_803EB4A8_00000B94:
    lfs f2, 0x8(r26)
    psq_l f1, 0x0(r26), 0, 0
    psq_st f1, 0x1c(r27), 0, 0
    stfs f2, 0x24(r27)
    stw r28, 0x28(r27)
    stb r28, 0x2c(r27)
    stb r28, 0x2d(r27)
lbl_fn_803EB4A8_00000BB0:
    addi r24, r24, 0x1
    addi r29, r29, 0xe0
lbl_fn_803EB4A8_00000BB8:
    lwz r0, 0x394(r30)
    cmplw r24, r0
    blt lbl_fn_803EB4A8_00000B30
    li r0, 0x0
    stw r0, 0x394(r30)
lbl_fn_803EB4A8_00000BCC:
    addi r11, r1, 0x30
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EB668(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r5, 0x0
    mr r31, r3
    mr r25, r4
    mr r26, r6
    beq lbl_fn_803EB668_00000C28
    lwz r3, lbl_8087EE90
    mr r4, r5
    bl fn_80049B74
    mr r29, r3
    b lbl_fn_803EB668_00000C2C
lbl_fn_803EB668_00000C28:
    li r29, 0x0
lbl_fn_803EB668_00000C2C:
    cmpwi r29, 0x0
    li r28, 0x0
    beq lbl_fn_803EB668_00000C70
    addi r30, r31, 0x48
    li r27, 0x0
    b lbl_fn_803EB668_00000C64
lbl_fn_803EB668_00000C44:
    mr r3, r30
    bl fn_800CB6F8
    cmplw r29, r3
    bne lbl_fn_803EB668_00000C5C
    mr r28, r30
    b lbl_fn_803EB668_00000C70
lbl_fn_803EB668_00000C5C:
    addi r30, r30, 0x30
    addi r27, r27, 0x1
lbl_fn_803EB668_00000C64:
    lwz r0, 0x10c(r31)
    cmpw r27, r0
    blt lbl_fn_803EB668_00000C44
lbl_fn_803EB668_00000C70:
    cmpwi r28, 0x0
    bne lbl_fn_803EB668_00000D2C
    cmpwi r25, 0x0
    beq lbl_fn_803EB668_00000D2C
    lwz r0, 0x10c(r31)
    addi r27, r31, 0x48
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803EB668_00000D2C
lbl_fn_803EB668_00000C94:
    lwz r0, 0x18(r27)
    cmplw r0, r25
    bne lbl_fn_803EB668_00000D24
    mr r3, r27
    li r4, 0x5
    li r5, 0x0
    bl fn_800CB5C8
    lwz r4, 0x18(r27)
    cmpwi r4, 0x0
    beq lbl_fn_803EB668_00000CE8
    lwz r0, 0x4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803EB668_00000CE8
    lwz r3, 0x1154(r4)
    addi r0, r27, 0x4
    cmplw r3, r0
    bne lbl_fn_803EB668_00000CE8
    li r0, 0x0
    stw r0, 0x1154(r4)
    lfs f0, lbl_80885F4C
    stfs f0, 0x1158(r4)
lbl_fn_803EB668_00000CE8:
    addi r3, r27, 0x10
    bl fn_80473F88
    li r0, 0x0
    lis r3, lbl_807C7030@ha
    stw r0, 0x18(r27)
    addi r3, r3, lbl_807C7030@l
    mr r28, r27
    lfs f2, 0x8(r3)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x1c(r27), 0, 0
    stfs f2, 0x24(r27)
    stw r0, 0x28(r27)
    stb r0, 0x2c(r27)
    stb r0, 0x2d(r27)
    b lbl_fn_803EB668_00000D2C
lbl_fn_803EB668_00000D24:
    addi r27, r27, 0x30
    bdnz lbl_fn_803EB668_00000C94
lbl_fn_803EB668_00000D2C:
    cmpwi r28, 0x0
    beq lbl_fn_803EB668_00000D38
    b lbl_fn_803EB668_00000D4C
lbl_fn_803EB668_00000D38:
    mr r3, r31
    mr r4, r29
    mr r5, r26
    bl fn_803EB7E4
    mr r28, r3
lbl_fn_803EB668_00000D4C:
    addi r11, r1, 0x30
    mr r3, r28
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803EB7E4(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x140
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    bl _savegpr_21
    li r31, 0x0
    lis r23, lbl_80751D1C@ha
    lis r22, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r24, r31
    mr r25, r31
    addi r23, r23, lbl_80751D1C@l
    addi r22, r22, lbl_807C7030@l
    li r26, 0x0
lbl_fn_803EB7E4_00000DB4:
    add r3, r27, r26
    lbz r0, 0x74(r3)
    addi r30, r3, 0x48
    cmpwi r0, 0x0
    beq lbl_fn_803EB7E4_00000E90
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_803EB7E4_00000E90
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_803EB7E4_00000E28
    lwz r21, lbl_8087EE90
    mr r3, r30
    bl fn_800CB6F8
    mr r4, r3
    mr r3, r21
    bl fn_80049CDC
    mr r21, r3
    mr r3, r30
    bl fn_800CB6F8
    mr r5, r3
    mr r6, r21
    addi r3, r1, 0x8
    addi r4, r23, 0x57
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x8
    bl fn_800697D8
lbl_fn_803EB7E4_00000E28:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x18(r30)
    cmpwi r3, 0x0
    beq lbl_fn_803EB7E4_00000E68
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803EB7E4_00000E68
    lwz r4, 0x1154(r3)
    addi r0, r30, 0x4
    cmplw r4, r0
    bne lbl_fn_803EB7E4_00000E68
    stw r24, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EB7E4_00000E68:
    addi r3, r30, 0x10
    bl fn_80473F88
    stw r25, 0x18(r30)
    lfs f2, 0x8(r22)
    psq_l f1, 0x0(r22), 0, 0
    psq_st f1, 0x1c(r30), 0, 0
    stfs f2, 0x24(r30)
    stw r25, 0x28(r30)
    stb r25, 0x2c(r30)
    stb r25, 0x2d(r30)
lbl_fn_803EB7E4_00000E90:
    addi r31, r31, 0x1
    addi r26, r26, 0x30
    cmpwi r31, 0x4
    blt lbl_fn_803EB7E4_00000DB4
    cmpwi r28, 0x0
    li r22, 0x0
    beq lbl_fn_803EB7E4_00000EE4
    addi r21, r27, 0x48
    li r23, 0x0
    b lbl_fn_803EB7E4_00000ED8
lbl_fn_803EB7E4_00000EB8:
    mr r3, r21
    bl fn_800CB6F8
    cmplw r28, r3
    bne lbl_fn_803EB7E4_00000ED0
    mr r22, r21
    b lbl_fn_803EB7E4_00000EE4
lbl_fn_803EB7E4_00000ED0:
    addi r21, r21, 0x30
    addi r23, r23, 0x1
lbl_fn_803EB7E4_00000ED8:
    lwz r0, 0x10c(r27)
    cmpw r23, r0
    blt lbl_fn_803EB7E4_00000EB8
lbl_fn_803EB7E4_00000EE4:
    cmpwi r22, 0x0
    bne lbl_fn_803EB7E4_00000F30
    addi r21, r27, 0x48
    li r23, 0x0
    b lbl_fn_803EB7E4_00000F24
lbl_fn_803EB7E4_00000EF8:
    mr r3, r21
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_803EB7E4_00000F1C
    lwz r0, 0x18(r21)
    cmpwi r0, 0x0
    bne lbl_fn_803EB7E4_00000F1C
    mr r22, r21
    b lbl_fn_803EB7E4_00000F30
lbl_fn_803EB7E4_00000F1C:
    addi r21, r21, 0x30
    addi r23, r23, 0x1
lbl_fn_803EB7E4_00000F24:
    lwz r0, 0x10c(r27)
    cmpw r23, r0
    blt lbl_fn_803EB7E4_00000EF8
lbl_fn_803EB7E4_00000F30:
    cmpwi r22, 0x0
    bne lbl_fn_803EB7E4_00000F70
    addi r21, r27, 0x48
    li r23, 0x0
    b lbl_fn_803EB7E4_00000F64
lbl_fn_803EB7E4_00000F44:
    mr r3, r21
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_803EB7E4_00000F5C
    mr r22, r21
    b lbl_fn_803EB7E4_00000F70
lbl_fn_803EB7E4_00000F5C:
    addi r21, r21, 0x30
    addi r23, r23, 0x1
lbl_fn_803EB7E4_00000F64:
    lwz r0, 0x10c(r27)
    cmpw r23, r0
    blt lbl_fn_803EB7E4_00000F44
lbl_fn_803EB7E4_00000F70:
    cmpwi r22, 0x0
    bne lbl_fn_803EB7E4_00000FB4
    cmpwi r29, 0x0
    beq lbl_fn_803EB7E4_00000FB4
    lwz r0, 0x10c(r27)
    addi r3, r27, 0x48
    li r4, -0x1
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_803EB7E4_00000FB4
lbl_fn_803EB7E4_00000F98:
    lwz r0, 0x28(r3)
    cmpw r0, r4
    ble lbl_fn_803EB7E4_00000FAC
    mr r4, r0
    mr r22, r3
lbl_fn_803EB7E4_00000FAC:
    addi r3, r3, 0x30
    bdnz lbl_fn_803EB7E4_00000F98
lbl_fn_803EB7E4_00000FB4:
    psq_l f31, 0x148(r1), 0, 0
    mr r3, r22
    lfd f31, 0x140(r1)
    addi r11, r1, 0x140
    bl _restgpr_21
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}

asm void fn_803EBA54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x48
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_803EBA54_00001020
lbl_fn_803EBA54_00001000:
    mr r3, r31
    bl fn_800CB58C
    cmpwi r3, 0x0
    bne lbl_fn_803EBA54_00001018
    li r3, 0x1
    b lbl_fn_803EBA54_00001030
lbl_fn_803EBA54_00001018:
    addi r31, r31, 0x30
    addi r30, r30, 0x1
lbl_fn_803EBA54_00001020:
    lwz r0, 0x10c(r29)
    cmpw r30, r0
    blt lbl_fn_803EBA54_00001000
    li r3, 0x0
lbl_fn_803EBA54_00001030:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803EBAC8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x30
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    bl _savegpr_23
    li r27, 0x0
    lis r28, lbl_807C7030@ha
    lfs f31, lbl_80885F4C
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r29, r27
    mr r30, r27
    addi r28, r28, lbl_807C7030@l
    li r31, 0x0
lbl_fn_803EBAC8_00001090:
    cmpwi r25, 0x0
    add r3, r23, r31
    addi r26, r3, 0x48
    beq lbl_fn_803EBAC8_000010AC
    lbz r0, 0x2c(r26)
    cmpwi r0, 0x0
    bne lbl_fn_803EBAC8_00001114
lbl_fn_803EBAC8_000010AC:
    mr r3, r26
    mr r4, r24
    li r5, 0x0
    bl fn_800CB5C8
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_803EBAC8_000010EC
    lwz r0, 0x4(r26)
    cmpwi r0, 0x0
    beq lbl_fn_803EBAC8_000010EC
    lwz r4, 0x1154(r3)
    addi r0, r26, 0x4
    cmplw r4, r0
    bne lbl_fn_803EBAC8_000010EC
    stw r29, 0x1154(r3)
    stfs f31, 0x1158(r3)
lbl_fn_803EBAC8_000010EC:
    addi r3, r26, 0x10
    bl fn_80473F88
    stw r30, 0x18(r26)
    lfs f2, 0x8(r28)
    psq_l f1, 0x0(r28), 0, 0
    psq_st f1, 0x1c(r26), 0, 0
    stfs f2, 0x24(r26)
    stw r30, 0x28(r26)
    stb r30, 0x2c(r26)
    stb r30, 0x2d(r26)
lbl_fn_803EBAC8_00001114:
    addi r27, r27, 0x1
    addi r31, r31, 0x30
    cmpwi r27, 0x4
    blt lbl_fn_803EBAC8_00001090
    li r0, 0x0
    stw r0, 0x394(r23)
    stw r0, 0x110(r23)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EBBCC(void)
{
    nofralloc
    addi r6, r3, 0x398
    li r7, 0x0
    li r5, 0x0
    b lbl_fn_803EBBCC_00001178
lbl_fn_803EBBCC_00001160:
    lwz r0, 0x8(r6)
    cmplw r0, r4
    bne lbl_fn_803EBBCC_00001170
    stw r5, 0x8(r6)
lbl_fn_803EBBCC_00001170:
    addi r6, r6, 0xe0
    addi r7, r7, 0x1
lbl_fn_803EBBCC_00001178:
    lwz r0, 0x394(r3)
    cmplw r7, r0
    blt lbl_fn_803EBBCC_00001160
    blr
}

asm void fn_803EBC04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087EE90
    cmpwi r3, 0x0
    beq lbl_fn_803EBC04_000011B4
    bl fn_80049B74
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_803EBC04_000011B8
lbl_fn_803EBC04_000011B4:
    li r3, 0x0
lbl_fn_803EBC04_000011B8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EBC44(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lis r0, 0x4330
    stw r31, 0x3c(r1)
    mr r31, r5
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r30
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    bl fn_8005B9CC
    mr r4, r3
    mr r3, r31
    bl fn_80092954
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_fn_803EBC44_000012D4
    mr r3, r30
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4(r29)
    mr r3, r30
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x8(r29)
    lis r4, lbl_80751DB0@ha
    lwz r5, 0x0(r29)
    mr r3, r30
    lfd f5, lbl_80751DB0@l(r4)
    lwz r0, 0x18(r5)
    stw r0, 0x8(r1)
    lfs f4, lbl_80885F50
    lbz r4, 0x8(r1)
    stw r4, 0x24(r1)
    lbz r0, 0x9(r1)
    lfd f0, 0x20(r1)
    stw r0, 0x2c(r1)
    fsubs f1, f0, f5
    lbz r4, 0xa(r1)
    lfd f0, 0x28(r1)
    lbz r0, 0xb(r1)
    fsubs f2, f0, f5
    stw r0, 0x2c(r1)
    fdivs f3, f1, f4
    stw r4, 0x24(r1)
    lfd f0, 0x28(r1)
    lfd f1, 0x20(r1)
    stfs f3, 0x10(r1)
    fsubs f1, f1, f5
    fsubs f0, f0, f5
    fdivs f2, f2, f4
    stfs f2, 0x14(r1)
    fdivs f0, f0, f4
    stfs f0, 0x1c(r1)
    fdivs f1, f1, f4
    stfs f0, 0xc(r29)
    stfs f1, 0x18(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r29)
    lwz r3, 0x0(r29)
    lbz r0, 0x4d(r3)
    extsb r0, r0
    stw r0, 0x14(r29)
lbl_fn_803EBC44_000012D4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803EBD6C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x4330
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    fmr f31, f1
    stw r31, 0x3c(r1)
    mr r31, r7
    stw r30, 0x38(r1)
    mr r30, r6
    stw r29, 0x34(r1)
    mr r29, r3
    mr r3, r4
    mr r4, r5
    stw r0, 0x20(r1)
    stw r0, 0x28(r1)
    bl fn_80092954
    cmpwi r3, 0x0
    stw r3, 0x0(r29)
    beq lbl_fn_803EBD6C_000013D4
    stw r30, 0x4(r29)
    lis r4, lbl_80751DB0@ha
    lfd f5, lbl_80751DB0@l(r4)
    stw r31, 0x8(r29)
    lfs f3, lbl_80885F50
    lwz r0, 0x18(r3)
    stw r0, 0x8(r1)
    lbz r0, 0x9(r1)
    stw r0, 0x2c(r1)
    lbz r4, 0x8(r1)
    lfd f0, 0x28(r1)
    lbz r0, 0xb(r1)
    fsubs f0, f0, f5
    stw r0, 0x2c(r1)
    stw r4, 0x24(r1)
    fdivs f2, f0, f3
    lfd f0, 0x28(r1)
    lfd f4, 0x20(r1)
    lbz r4, 0xa(r1)
    stw r4, 0x24(r1)
    lfd f1, 0x20(r1)
    fsubs f0, f0, f5
    stfs f2, 0x14(r1)
    fsubs f2, f4, f5
    fsubs f1, f1, f5
    stfs f31, 0x10(r29)
    fdivs f0, f0, f3
    stfs f0, 0xc(r29)
    fdivs f2, f2, f3
    stfs f0, 0x1c(r1)
    lbz r0, 0x4d(r3)
    extsb r0, r0
    stw r0, 0x14(r29)
    stfs f2, 0x10(r1)
    fdivs f0, f1, f3
    stfs f0, 0x18(r1)
lbl_fn_803EBD6C_000013D4:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803EBE74(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    mr r6, r3
    stw r0, 0x64(r1)
    lis r0, 0x4330
    stw r31, 0x5c(r1)
    mr r31, r4
    lwz r5, 0x0(r3)
    stw r0, 0x28(r1)
    cmpwi r5, 0x0
    stw r0, 0x30(r1)
    beq lbl_fn_803EBE74_00001614
    lwz r0, 0x8(r3)
    lfs f3, 0x234(r4)
    cmpwi r0, 0x0
    ble lbl_fn_803EBE74_00001470
    lwz r7, 0x4(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lis r4, lbl_80751DB8@ha
    xoris r0, r7, 0x8000
    lfd f2, lbl_80751DB8@l(r4)
    stw r0, 0x2c(r1)
    lfd f0, 0x30(r1)
    lfd f1, 0x28(r1)
    fsubs f0, f0, f2
    fsubs f1, f1, f2
    fsubs f1, f3, f1
    fdivs f7, f1, f0
    b lbl_fn_803EBE74_000014A0
lbl_fn_803EBE74_00001470:
    lwz r0, 0x4(r3)
    lis r4, lbl_80751DB8@ha
    lfd f1, lbl_80751DB8@l(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f3, f0
    bge lbl_fn_803EBE74_0000149C
    lfs f7, lbl_80885F54
    b lbl_fn_803EBE74_000014A0
lbl_fn_803EBE74_0000149C:
    lfs f7, lbl_80885F58
lbl_fn_803EBE74_000014A0:
    lfs f1, lbl_80885F54
    fcmpo cr0, f7, f1
    ble lbl_fn_803EBE74_000014B0
    fmr f1, f7
lbl_fn_803EBE74_000014B0:
    lfs f0, lbl_80885F58
    fcmpo cr0, f1, f0
    bge lbl_fn_803EBE74_000014D4
    lfs f0, lbl_80885F54
    fcmpo cr0, f7, f0
    ble lbl_fn_803EBE74_000014CC
    b lbl_fn_803EBE74_000014D8
lbl_fn_803EBE74_000014CC:
    fmr f7, f0
    b lbl_fn_803EBE74_000014D8
lbl_fn_803EBE74_000014D4:
    fmr f7, f0
lbl_fn_803EBE74_000014D8:
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803EBE74_000014EC
    lfs f0, lbl_80885F58
    fsubs f7, f0, f7
lbl_fn_803EBE74_000014EC:
    lwz r0, 0x18(r5)
    lis r7, lbl_80751DB0@ha
    stw r0, 0x10(r1)
    lfs f0, lbl_80885F54
    lbz r0, 0x10(r1)
    stw r0, 0x34(r1)
    fcmpo cr0, f7, f0
    lbz r4, 0x11(r1)
    lfd f0, 0x30(r1)
    lbz r0, 0x12(r1)
    lfd f3, lbl_80751DB0@l(r7)
    stw r4, 0x2c(r1)
    fsubs f2, f0, f3
    lfs f4, lbl_80885F50
    stw r0, 0x34(r1)
    lfd f1, 0x28(r1)
    lfd f0, 0x30(r1)
    fsubs f1, f1, f3
    lfs f5, 0x10(r3)
    fsubs f0, f0, f3
    lfs f6, 0xc(r3)
    fdivs f3, f2, f4
    stfs f3, 0x18(r1)
    fdivs f2, f1, f4
    stfs f2, 0x1c(r1)
    fdivs f1, f0, f4
    stfs f1, 0x20(r1)
    fsubs f5, f5, f6
    fmuls f0, f4, f3
    fmuls f2, f4, f2
    fmadds f5, f7, f5, f6
    fctiwz f3, f0
    fmuls f1, f4, f1
    stfs f5, 0x24(r1)
    fmuls f0, f4, f5
    fctiwz f2, f2
    stfd f3, 0x38(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x40(r1)
    lwz r8, 0x3c(r1)
    stfd f1, 0x48(r1)
    lwz r7, 0x44(r1)
    stfd f0, 0x50(r1)
    lwz r4, 0x4c(r1)
    lwz r0, 0x54(r1)
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r4, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    lbz r0, 0xc(r1)
    stb r0, 0x18(r5)
    lbz r0, 0xd(r1)
    stb r0, 0x19(r5)
    lbz r0, 0xe(r1)
    stb r0, 0x1a(r5)
    lbz r0, 0xf(r1)
    stb r0, 0x1b(r5)
    ble lbl_fn_803EBE74_000015FC
    lwz r3, 0x0(r3)
    li r4, 0x3
    bl fn_8007FAF0
    lwz r0, 0x4(r31)
    ori r0, r0, 0x10
    stw r0, 0x4(r31)
    b lbl_fn_803EBE74_00001614
lbl_fn_803EBE74_000015FC:
    lwz r3, 0x0(r3)
    lwz r4, 0x14(r6)
    bl fn_8007FAF0
    lwz r0, 0x4(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x4(r31)
lbl_fn_803EBE74_00001614:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803EC0A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_8005B9CC
    bl fn_800DC6B4
    stw r3, 0x0(r30)
    mr r3, r31
    bl fn_8005B9CC
    bl fn_80684600
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EC0F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r6, 0x0(r3)
    cmpwi r6, 0x0
    beq lbl_fn_803EC0F8_000016E0
    lwz r3, 0x4(r3)
    lis r0, 0x4330
    lis r5, lbl_80751DB8@ha
    stw r0, 0x8(r1)
    xoris r3, r3, 0x8000
    lfd f1, lbl_80751DB8@l(r5)
    stw r3, 0xc(r1)
    mr r3, r4
    lfs f2, 0x234(r4)
    mr r4, r6
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, lt, eq
    mfcr r5
    li r6, 0x1
    extrwi r5, r5, 1, 2
    li r7, 0x0
    bl fn_8009385C
lbl_fn_803EC0F8_000016E0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EC16C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, 0x1062
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r0, r6, 0x4dd3
    mulhw r0, r0, r4
    srawi r0, r0, 6
    srwi r6, r0, 31
    add. r0, r0, r6
    bne lbl_fn_803EC16C_00001724
    mr r0, r4
    mulli r4, r4, 0x3e8
lbl_fn_803EC16C_00001724:
    cmplwi r0, 0x43
    bgt lbl_fn_803EC16C_000018E4
    lis r6, jumptable_8078C6C8@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_8078C6C8@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    bl fn_803F1BB4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_803F471C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_803F69E4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_803F744C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_803FE390
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80400728
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80406754
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80408324
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_804093B4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_803FE390
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8040DC30
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8040EC30
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8040FAC0
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80412AFC
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80418198
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80418EAC
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8041C09C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8041CD54
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8041DDE4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8041FF08
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042335C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80423F64
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80426108
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042AFE4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042B56C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042C21C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042CE30
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042D628
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8042E36C
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_804310B0
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80432CF0
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80435CE4
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_80436E34
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8043A770
    mr r7, r3
    b lbl_fn_803EC16C_000018E4
    bl fn_8043D594
    mr r7, r3
lbl_fn_803EC16C_000018E4:
    lwz r0, 0x14(r1)
    mr r3, r7
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803EC374(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, 0x1062
    li r7, 0x0
    stw r0, 0x14(r1)
    addi r0, r5, 0x4dd3
    lwz r6, 0x18(r4)
    mulhw r0, r0, r6
    srawi r0, r0, 6
    srwi r5, r0, 31
    add. r5, r0, r5
    bne lbl_fn_803EC374_0000192C
    mr r5, r6
lbl_fn_803EC374_0000192C:
    subi r0, r5, 0x5
    cmplwi r0, 0x3d
    bgt lbl_fn_803EC374_00001AD8
    lis r5, jumptable_8078C7D8@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_8078C7D8@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    bl fn_803F74D0
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_803F9420
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_803F9F34
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_803FBFA8
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_803FC8D8
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_803FE570
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80402978
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80405DD4
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80405DD4
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_804067D8
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8040D1D0
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8040ED00
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80410A68
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80411440
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80414AC4
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8041537C
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_804166B0
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80416F74
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80418F30
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8041B970
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8041EB80
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80420ADC
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80421454
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80421AB8
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80422610
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80427EB4
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80428B0C
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80429668
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8042F0B4
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8042F7EC
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_80435DEC
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8043A850
    mr r7, r3
    b lbl_fn_803EC374_00001AD8
    bl fn_8043B778
    mr r7, r3
lbl_fn_803EC374_00001AD8:
    lwz r0, 0x14(r1)
    mr r3, r7
    mtlr r0
    addi r1, r1, 0x10
    blr
}
