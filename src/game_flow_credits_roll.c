#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_22(void);
extern void _savegpr_14(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800D246C(void);
extern void fn_801539E0(void);
extern void fn_8015495C(void);
extern void fn_80155DAC(void);
extern void fn_8016E970(void);
extern void fn_8016F3D0(void);
extern void fn_804AE3BC(void);
extern void fn_804D818C(void);
extern void fn_804FC7E4(void);
extern void fn_8050BA6C(void);
extern void fn_8050DDE0(void);
extern void fn_8050E098(void);
extern void fn_805F9920(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 jumptable_8079120C[];
extern u8 lbl_80759748[];
extern u8 lbl_80759E48[];
extern u8 lbl_80791780[];
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087F408;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887570;
extern u32 lbl_8088760C;
extern u32 lbl_80887610;
extern u32 lbl_80887614;
extern u32 lbl_80887618;

/* Function declarations */
void fn_804E9C68(void);
void fn_804EA524(void);
void fn_804EA538(void);
void fn_804EA5E0(void);
void fn_804EA60C(void);
void fn_804EA6B4(void);
void fn_804EA760(void);
void fn_804EA814(void);
void fn_804EA8BC(void);
void fn_804EAA54(void);
void fn_804EAA60(void);
void fn_804EAA6C(void);
void fn_804EAA88(void);
void fn_804EAEE4(void);
void fn_804EAFD4(void);
void fn_804EB014(void);
void fn_804EB1B0(void);
void fn_804EB270(void);
void fn_804EB2DC(void);
void fn_804EB3D0(void);
void fn_804EB404(void);
void fn_804EB484(void);
void fn_804EB4B0(void);
void fn_804EB5DC(void);
void fn_804EB654(void);

asm void fn_804E9C68(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x130
    bl _savegpr_14
    lwz r4, lbl_8087F628
    mr r15, r3
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9C68_0000004C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9C68_00000040
    li r14, 0x0
    b lbl_fn_804E9C68_00000068
lbl_fn_804E9C68_00000040:
    bl fn_806B0E30
    clrlwi r14, r3, 24
    b lbl_fn_804E9C68_00000068
lbl_fn_804E9C68_0000004C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9C68_00000060
    li r3, 0x0
    b lbl_fn_804E9C68_00000064
lbl_fn_804E9C68_00000060:
    bl fn_806A8E40
lbl_fn_804E9C68_00000064:
    clrlwi r14, r3, 24
lbl_fn_804E9C68_00000068:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9C68_00000080
    li r22, 0x0
    b lbl_fn_804E9C68_000000C0
lbl_fn_804E9C68_00000080:
    addi r3, r1, 0x14
    bl fn_8050BA6C
    clrlwi r4, r14, 24
    lwz r5, 0x14(r1)
    li r22, 0x0
    mtctr r3
    cmpwi r3, 0x0
    ble lbl_fn_804E9C68_000000BC
lbl_fn_804E9C68_000000A0:
    lbz r0, 0x0(r5)
    cmplw r4, r0
    bne lbl_fn_804E9C68_000000B0
    b lbl_fn_804E9C68_000000C0
lbl_fn_804E9C68_000000B0:
    addi r5, r5, 0x1
    addi r22, r22, 0x1
    bdnz lbl_fn_804E9C68_000000A0
lbl_fn_804E9C68_000000BC:
    li r22, -0x1
lbl_fn_804E9C68_000000C0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9C68_000000F4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9C68_000000E8
    li r3, 0x1
    b lbl_fn_804E9C68_000000EC
lbl_fn_804E9C68_000000E8:
    bl fn_806B0DE0
lbl_fn_804E9C68_000000EC:
    mr r21, r3
    b lbl_fn_804E9C68_00000110
lbl_fn_804E9C68_000000F4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9C68_00000108
    li r3, 0x1
    b lbl_fn_804E9C68_0000010C
lbl_fn_804E9C68_00000108:
    bl fn_806A8E70
lbl_fn_804E9C68_0000010C:
    mr r21, r3
lbl_fn_804E9C68_00000110:
    lwz r0, 0x5f4(r15)
    addi r18, r1, 0x18
    li r17, 0x0
    li r31, 0x1
    subf r0, r0, r0
    stw r0, 0x5f4(r15)
    li r26, 0xf
    lis r29, 0xcccd
    lwz r3, lbl_8087F408
    lis r23, 0xb
    li r25, 0x0
    lis r27, 0x16c
    lwz r16, 0x48(r3)
    lis r28, 0x79
    lis r30, 0xf3
    lis r14, jumptable_8079120C@ha
    b lbl_fn_804E9C68_0000089C
lbl_fn_804E9C68_00000154:
    lwz r0, 0x5e8(r15)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E9C68_00000198
lbl_fn_804E9C68_00000168:
    lwz r0, 0x5e4(r15)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E9C68_00000190
    lwz r0, 0x0(r4)
    cmplw r0, r16
    bne lbl_fn_804E9C68_00000190
    b lbl_fn_804E9C68_0000019C
lbl_fn_804E9C68_00000190:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E9C68_00000168
lbl_fn_804E9C68_00000198:
    li r4, 0x0
lbl_fn_804E9C68_0000019C:
    cmpwi r4, 0x0
    bne lbl_fn_804E9C68_00000898
    lwz r3, 0x50(r16)
    subi r0, r23, 0x51a0
    cmpw r3, r0
    blt lbl_fn_804E9C68_000001C0
    subi r0, r23, 0x5186
    cmpw r3, r0
    blt lbl_fn_804E9C68_00000898
lbl_fn_804E9C68_000001C0:
    divw r0, r17, r21
    stw r25, 0x2c(r1)
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x7c
    mullw r0, r0, r21
    subf r0, r0, r17
    addi r17, r17, 0x1
    subf r0, r22, r0
    cntlzw r0, r0
    srwi r24, r0, 5
    bl memset
    neg r3, r24
    lwz r0, 0xdc(r1)
    or r3, r3, r24
    stw r16, 0x2c(r1)
    rlwimi r0, r3, 0, 0, 0
    stw r0, 0xdc(r1)
    lwz r4, 0x5f4(r15)
    lwz r3, 0x5f8(r15)
    cmplw r4, r3
    bge lbl_fn_804E9C68_000002C8
    addi r3, r4, 0x1
    stw r3, 0x5f4(r15)
    subi r0, r3, 0x1
    lwz r4, 0x5f0(r15)
    mulli r3, r0, 0xb4
    lwz r0, 0x2c(r1)
    stwux r0, r3, r4
    addi r5, r1, 0x5c
    lwz r0, 0x34(r1)
    addi r6, r3, 0x30
    lwz r4, 0x30(r1)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x54(r1)
    lwz r4, 0x50(r1)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x5c(r1)
    lwz r4, 0x58(r1)
    stw r4, 0x2c(r3)
    stw r0, 0x30(r3)
    mtctr r26
lbl_fn_804E9C68_000002A0:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E9C68_000002A0
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0xdc(r1)
    stw r0, 0xb0(r3)
    b lbl_fn_804E9C68_0000070C
lbl_fn_804E9C68_000002C8:
    addi r0, r27, 0x16c1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804E9C68_000002F8
    lis r3, lbl_80759E48@ha
    addi r4, r3, lbl_80759E48@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804E9C68_000002F8:
    lwz r3, 0x5f4(r15)
    addi r4, r15, 0x5f8
    lwz r19, 0x5f8(r15)
    addi r0, r27, 0x16c1
    addi r3, r3, 0x1
    stw r25, 0x18(r1)
    subf r3, r19, r3
    subf r0, r19, r0
    cmplw r3, r0
    stw r25, 0x1c(r1)
    stw r25, 0x20(r1)
    stw r4, 0x24(r1)
    stw r25, 0x28(r1)
    stw r3, 0x10(r1)
    ble lbl_fn_804E9C68_00000354
    lis r3, lbl_80759E48@ha
    addi r4, r3, lbl_80759E48@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804E9C68_00000354:
    addi r0, r28, 0x5ceb
    cmplw r19, r0
    bge lbl_fn_804E9C68_0000039C
    addi r4, r19, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x10(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x8
    srwi r4, r4, 2
    stw r4, 0x8(r1)
    cmplw r4, r0
    bge lbl_fn_804E9C68_00000390
    addi r3, r1, 0x10
lbl_fn_804E9C68_00000390:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_804E9C68_000003D8
lbl_fn_804E9C68_0000039C:
    subi r0, r30, 0x462a
    cmplw r19, r0
    bge lbl_fn_804E9C68_000003D4
    addi r3, r19, 0x1
    lwz r0, 0x10(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804E9C68_000003C8
    addi r3, r1, 0x10
lbl_fn_804E9C68_000003C8:
    lwz r0, 0x0(r3)
    add r20, r19, r0
    b lbl_fn_804E9C68_000003D8
lbl_fn_804E9C68_000003D4:
    addi r20, r27, 0x16c1
lbl_fn_804E9C68_000003D8:
    addi r0, r27, 0x16c1
    cmplw r20, r0
    ble lbl_fn_804E9C68_00000404
    lis r3, lbl_80759E48@ha
    addi r4, r3, lbl_80759E48@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804E9C68_00000404:
    mulli r3, r20, 0xb4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_804E9C68_00000438
    lis r3, __files@ha
    lis r4, lbl_80791780@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80791780@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804E9C68_00000438:
    lwz r7, 0x5f4(r15)
    addi r5, r1, 0x5c
    lwz r3, 0x1c(r1)
    mulli r6, r7, 0xb4
    lwz r0, 0x2c(r1)
    stw r19, 0x18(r1)
    mulli r4, r3, 0xb4
    stw r20, 0x20(r1)
    add r3, r19, r6
    stw r7, 0x28(r1)
    stwux r0, r3, r4
    lwz r0, 0x34(r1)
    addi r6, r3, 0x30
    lwz r4, 0x30(r1)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x3c(r1)
    lwz r4, 0x38(r1)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x44(r1)
    lwz r4, 0x40(r1)
    stw r4, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x4c(r1)
    lwz r4, 0x48(r1)
    stw r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x54(r1)
    lwz r4, 0x50(r1)
    stw r4, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x5c(r1)
    lwz r4, 0x58(r1)
    stw r4, 0x2c(r3)
    stw r0, 0x30(r3)
    mtctr r26
lbl_fn_804E9C68_000004CC:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_804E9C68_000004CC
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lwz r0, 0x28(r1)
    lwz r4, 0xdc(r1)
    stw r4, 0xb0(r3)
    mulli r0, r0, 0xb4
    lwz r5, 0x1c(r1)
    lwz r4, 0x5f4(r15)
    lwz r3, 0x18(r1)
    addi r5, r5, 0x1
    mulli r4, r4, 0xb4
    lwz r6, 0x5f0(r15)
    add r3, r3, r0
    stw r5, 0x1c(r1)
    li r0, 0xb4
    add r4, r6, r4
    addi r5, r4, 0xb3
    subf r5, r6, r5
    divwu r5, r5, r0
    mtctr r5
    cmplw r4, r6
    ble lbl_fn_804E9C68_000006C8
lbl_fn_804E9C68_00000538:
    subic. r3, r3, 0xb4
    subi r4, r4, 0xb4
    beq lbl_fn_804E9C68_000006AC
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r0, 0x8(r4)
    lwz r5, 0x4(r4)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    lwz r0, 0x10(r4)
    lwz r5, 0xc(r4)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    lwz r0, 0x18(r4)
    lwz r5, 0x14(r4)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    lwz r0, 0x20(r4)
    lwz r5, 0x1c(r4)
    stw r5, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x28(r4)
    lwz r5, 0x24(r4)
    stw r5, 0x24(r3)
    stw r0, 0x28(r3)
    lwz r0, 0x30(r4)
    lwz r5, 0x2c(r4)
    stw r5, 0x2c(r3)
    stw r0, 0x30(r3)
    lwz r0, 0x34(r4)
    stw r0, 0x34(r3)
    lwz r0, 0x38(r4)
    stw r0, 0x38(r3)
    lfs f0, 0x3c(r4)
    stfs f0, 0x3c(r3)
    lfs f0, 0x40(r4)
    stfs f0, 0x40(r3)
    lfs f0, 0x44(r4)
    stfs f0, 0x44(r3)
    lfs f0, 0x48(r4)
    stfs f0, 0x48(r3)
    lfs f0, 0x4c(r4)
    stfs f0, 0x4c(r3)
    lfs f0, 0x50(r4)
    stfs f0, 0x50(r3)
    lwz r0, 0x54(r4)
    stw r0, 0x54(r3)
    lwz r0, 0x5c(r4)
    lwz r5, 0x58(r4)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, 0x64(r4)
    lwz r5, 0x60(r4)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x6c(r4)
    lwz r5, 0x68(r4)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x74(r4)
    lwz r5, 0x70(r4)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x7c(r4)
    lwz r5, 0x78(r4)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x84(r4)
    lwz r5, 0x80(r4)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x8c(r4)
    lwz r5, 0x88(r4)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x94(r4)
    lwz r5, 0x90(r4)
    stw r5, 0x90(r3)
    stw r0, 0x94(r3)
    lwz r0, 0x9c(r4)
    lwz r5, 0x98(r4)
    stw r5, 0x98(r3)
    stw r0, 0x9c(r3)
    lwz r0, 0xa4(r4)
    lwz r5, 0xa0(r4)
    stw r5, 0xa0(r3)
    stw r0, 0xa4(r3)
    lwz r0, 0xac(r4)
    lwz r5, 0xa8(r4)
    stw r5, 0xa8(r3)
    stw r0, 0xac(r3)
    lwz r0, 0xb0(r4)
    stw r0, 0xb0(r3)
lbl_fn_804E9C68_000006AC:
    lwz r6, 0x28(r1)
    lwz r5, 0x1c(r1)
    subi r0, r6, 0x1
    stw r0, 0x28(r1)
    addi r0, r5, 0x1
    stw r0, 0x1c(r1)
    bdnz lbl_fn_804E9C68_00000538
lbl_fn_804E9C68_000006C8:
    lwz r0, 0x1c(r1)
    cmpwi r18, 0x0
    lwz r6, 0x5f8(r15)
    lwz r5, 0x20(r1)
    lwz r3, 0x5f0(r15)
    lwz r4, 0x18(r1)
    stw r5, 0x5f8(r15)
    stw r6, 0x20(r1)
    stw r4, 0x5f0(r15)
    stw r3, 0x18(r1)
    stw r0, 0x5f4(r15)
    stw r25, 0x1c(r1)
    beq lbl_fn_804E9C68_0000070C
    cmpwi r3, 0x0
    beq lbl_fn_804E9C68_0000070C
    stw r25, 0x1c(r1)
    bl dtor_80084684
lbl_fn_804E9C68_0000070C:
    lwz r0, 0x7e0(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_804E9C68_0000072C
    lwz r0, 0x12a4(r16)
    extrwi r0, r0, 1, 9
    cmplwi r0, 0x1
    beq lbl_fn_804E9C68_00000898
lbl_fn_804E9C68_0000072C:
    cmpwi r24, 0x0
    beq lbl_fn_804E9C68_0000087C
    lwz r0, 0x12a4(r16)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_804E9C68_0000087C
    lwz r0, 0x12a4(r16)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x12a4(r16)
    stw r31, 0x1454(r16)
    lwz r6, 0x38(r16)
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804E9C68_0000077C
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_804E9C68_0000077C
    li r5, 0x1
lbl_fn_804E9C68_0000077C:
    cmpwi r5, 0x0
    beq lbl_fn_804E9C68_00000798
    lwz r0, 0x7e0(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_804E9C68_00000798
    li r3, 0x1
lbl_fn_804E9C68_00000798:
    cmpwi r3, 0x0
    beq lbl_fn_804E9C68_000007CC
    lwz r0, 0x55c(r16)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_804E9C68_000007C0
    lwz r0, 0x560(r16)
    cmpwi r0, 0x1c
    bne lbl_fn_804E9C68_000007C0
    li r3, 0x1
lbl_fn_804E9C68_000007C0:
    cmpwi r3, 0x0
    bne lbl_fn_804E9C68_000007CC
    li r4, 0x1
lbl_fn_804E9C68_000007CC:
    cmpwi r4, 0x0
    beq lbl_fn_804E9C68_00000898
    mr r3, r16
    li r4, 0x2
    bl fn_8016E970
    mr r3, r16
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_8015495C
    lwz r0, 0x12a4(r16)
    srwi. r0, r0, 31
    beq lbl_fn_804E9C68_0000080C
    mr r3, r16
    bl fn_801539E0
lbl_fn_804E9C68_0000080C:
    lwz r0, 0x12a4(r16)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_804E9C68_00000824
    lwz r0, 0x12a4(r16)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x12a4(r16)
lbl_fn_804E9C68_00000824:
    lwz r0, 0x12a4(r16)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_804E9C68_0000083C
    mr r3, r16
    li r4, 0x0
    bl fn_80155DAC
lbl_fn_804E9C68_0000083C:
    lwz r0, 0x146c(r16)
    cmplwi r0, 0x28
    bgt lbl_fn_804E9C68_00000898
    addi r3, r14, jumptable_8079120C@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r25, 0x58c(r16)
    b lbl_fn_804E9C68_00000898
    lwz r12, 0x0(r16)
    mr r3, r16
    lwz r12, 0xfc(r12)
    mtctr r12
    bctrl
    b lbl_fn_804E9C68_00000898
lbl_fn_804E9C68_0000087C:
    cmpwi r24, 0x0
    bne lbl_fn_804E9C68_00000898
    lwz r0, 0x12a4(r16)
    ori r0, r0, 0x4
    stw r0, 0x12a4(r16)
    li r0, 0x3
    stw r0, 0x1454(r16)
lbl_fn_804E9C68_00000898:
    lwz r16, 0x14ac(r16)
lbl_fn_804E9C68_0000089C:
    cmpwi r16, 0x0
    bne lbl_fn_804E9C68_00000154
    addi r11, r1, 0x130
    bl _restgpr_14
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804EA524(void)
{
    nofralloc
    lwz r3, 0x4fc(r3)
    subi r0, r3, 0x1e
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_804EA538(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_804EA538_0000095C
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1001
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EA538_00000930
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EA538_00000930:
    li r3, 0x0
    li r0, 0x6
    stw r3, lbl_8087F5FC
    sth r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x1001
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804EA538_0000095C:
    stw r31, 0x55c(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EA5E0(void)
{
    nofralloc
    cmplwi r4, 0x1
    ble lbl_fn_804EA5E0_0000098C
    cmpwi r4, 0x2
    beq lbl_fn_804EA5E0_00000994
    b lbl_fn_804EA5E0_0000099C
lbl_fn_804EA5E0_0000098C:
    li r3, 0x9
    blr
lbl_fn_804EA5E0_00000994:
    li r3, 0x5
    blr
lbl_fn_804EA5E0_0000099C:
    li r3, 0xa
    blr
}

asm void fn_804EA60C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_804EA60C_00000A30
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1002
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EA60C_00000A04
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EA60C_00000A04:
    li r3, 0x0
    li r0, 0x6
    stw r3, lbl_8087F5FC
    sth r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x1002
    li r7, 0x1
    bl fn_8050E098
lbl_fn_804EA60C_00000A30:
    stw r31, 0x564(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EA6B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_804EA6B4_00000AD8
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1033
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EA6B4_00000AAC
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EA6B4_00000AAC:
    li r3, 0x0
    li r0, 0x3
    stw r3, lbl_8087F5FC
    sth r0, 0x8(r1)
    stb r31, 0xc(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x1033
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804EA6B4_00000AD8:
    extsb r0, r31
    stw r0, 0x5a0(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EA760(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_804EA760_00000B90
    lwz r0, 0x568(r3)
    cmpw r0, r4
    beq lbl_fn_804EA760_00000B90
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1003
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EA760_00000B64
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EA760_00000B64:
    li r3, 0x0
    li r0, 0x6
    stw r3, lbl_8087F5FC
    sth r0, 0x8(r1)
    stw r31, 0xc(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x1003
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804EA760_00000B90:
    stw r31, 0x568(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EA814(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    beq lbl_fn_804EA814_00000C38
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x103c
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804EA814_00000C0C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804EA814_00000C0C:
    li r3, 0x0
    li r0, 0x3
    stw r3, lbl_8087F5FC
    sth r0, 0x8(r1)
    stb r31, 0xc(r1)
    bl fn_804AE3BC
    addi r6, r1, 0xc
    li r4, -0x1
    li r5, 0x103c
    li r7, 0x0
    bl fn_8050E098
lbl_fn_804EA814_00000C38:
    stw r31, 0x5a8(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EA8BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r29, r3
    mr r30, r4
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1013
    li r6, 0x0
    li r7, 0x1
    bl fn_8050E098
    bl fn_804AE3BC
    li r4, -0x1
    li r5, 0x1
    bl fn_8050DDE0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EA8BC_00000CC8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EA8BC_00000CBC
    li r0, 0x0
    b lbl_fn_804EA8BC_00000CE4
lbl_fn_804EA8BC_00000CBC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EA8BC_00000CE4
lbl_fn_804EA8BC_00000CC8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EA8BC_00000CDC
    li r3, 0x0
    b lbl_fn_804EA8BC_00000CE0
lbl_fn_804EA8BC_00000CDC:
    bl fn_806A8E40
lbl_fn_804EA8BC_00000CE0:
    clrlwi r0, r3, 24
lbl_fn_804EA8BC_00000CE4:
    lwz r5, 0x5e8(r29)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EA8BC_00000D2C
lbl_fn_804EA8BC_00000CFC:
    lwz r0, 0x5e4(r29)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EA8BC_00000D24
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804EA8BC_00000D24
    b lbl_fn_804EA8BC_00000D30
lbl_fn_804EA8BC_00000D24:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EA8BC_00000CFC
lbl_fn_804EA8BC_00000D2C:
    li r31, 0x0
lbl_fn_804EA8BC_00000D30:
    lwz r0, 0xd0(r31)
    oris r0, r0, 0x400
    stw r0, 0xd0(r31)
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804EA8BC_00000D50
    mr r4, r30
    bl fn_800D246C
lbl_fn_804EA8BC_00000D50:
    li r27, 0x0
    li r28, 0x0
    b lbl_fn_804EA8BC_00000DCC
lbl_fn_804EA8BC_00000D5C:
    lwz r0, 0x5e4(r29)
    add. r4, r0, r28
    beq lbl_fn_804EA8BC_00000D84
    lbz r0, 0xcc(r4)
    cmplwi r0, 0xff
    beq lbl_fn_804EA8BC_00000D84
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EA8BC_00000D84
    li r0, 0x1
    b lbl_fn_804EA8BC_00000D88
lbl_fn_804EA8BC_00000D84:
    li r0, 0x0
lbl_fn_804EA8BC_00000D88:
    cmpwi r0, 0x0
    beq lbl_fn_804EA8BC_00000DC4
    lbz r3, 0xcc(r4)
    lbz r0, 0xcc(r31)
    clrlwi r3, r3, 28
    cmplw r3, r0
    bne lbl_fn_804EA8BC_00000DC4
    lwz r0, 0xd0(r4)
    oris r0, r0, 0x400
    stw r0, 0xd0(r4)
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804EA8BC_00000DC4
    mr r4, r30
    bl fn_800D246C
lbl_fn_804EA8BC_00000DC4:
    addi r27, r27, 0x1
    addi r28, r28, 0xd5c
lbl_fn_804EA8BC_00000DCC:
    lwz r0, 0x5e8(r29)
    cmpw r27, r0
    blt lbl_fn_804EA8BC_00000D5C
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804EAA54(void)
{
    nofralloc
    lwz r3, lbl_8087F628
    lwz r3, 0x25c(r3)
    blr
}

asm void fn_804EAA60(void)
{
    nofralloc
    lwz r3, lbl_8087F628
    stw r4, 0x25c(r3)
    blr
}

asm void fn_804EAA6C(void)
{
    nofralloc
    cmpwi r4, 0x8
    lwz r3, lbl_8087F628
    li r0, 0x8
    bge lbl_fn_804EAA6C_00000E18
    mr r0, r4
lbl_fn_804EAA6C_00000E18:
    stw r0, 0x264(r3)
    blr
}

asm void fn_804EAA88(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x110
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    stfd f30, 0x110(r1)
    psq_st f30, 0x118(r1), 0, 0
    bl _savegpr_22
    lwz r0, 0x5e8(r3)
    mr r26, r6
    mr r24, r3
    mr r25, r4
    mr r31, r5
    li r28, 0x0
    li r23, -0x1
    li r7, 0x0
    li r6, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_804EAA88_00000EB0
lbl_fn_804EAA88_00000E74:
    lwz r0, 0x5e4(r3)
    add r5, r0, r6
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EAA88_00000EA4
    lwz r0, 0x0(r5)
    cmplw r0, r4
    bne lbl_fn_804EAA88_00000EA4
    mr r28, r5
    mr r23, r7
    b lbl_fn_804EAA88_00000EB0
lbl_fn_804EAA88_00000EA4:
    addi r6, r6, 0xd5c
    addi r7, r7, 0x1
    bdnz lbl_fn_804EAA88_00000E74
lbl_fn_804EAA88_00000EB0:
    cmpwi r4, 0x0
    beq lbl_fn_804EAA88_00001254
    cmpwi r28, 0x0
    beq lbl_fn_804EAA88_00001254
    cmpwi r23, 0x0
    bge lbl_fn_804EAA88_00000ECC
    b lbl_fn_804EAA88_00001254
lbl_fn_804EAA88_00000ECC:
    lfs f2, 0x530(r4)
    li r0, 0x0
    lfs f3, 0x538(r4)
    addi r5, r1, 0x38
    psq_l f1, 0x528(r4), 0, 0
    mr r3, r24
    lfs f0, lbl_80887570
    addi r4, r1, 0x44
    stw r0, 0x44(r1)
    lwz r0, 0xd0(r28)
    psq_st f1, 0x0(r5), 0, 0
    extrwi r5, r0, 4, 6
    stfs f2, 0x40(r1)
    stfs f0, 0x2c(r1)
    stfs f3, 0x30(r1)
    stfs f0, 0x34(r1)
    bl fn_804FC7E4
    cmpwi r3, 0x0
    beq lbl_fn_804EAA88_00001214
    cmpwi r31, 0x0
    li r27, -0x1
    beq lbl_fn_804EAA88_00000F34
    slwi r0, r23, 2
    add r3, r24, r0
    lwz r27, 0x56c(r3)
    b lbl_fn_804EAA88_0000107C
lbl_fn_804EAA88_00000F34:
    lwz r0, 0x540(r24)
    cmpwi r0, 0x2
    beq lbl_fn_804EAA88_0000107C
    cmpwi r0, 0x0
    beq lbl_fn_804EAA88_00000F50
    cmpwi r26, 0x0
    bne lbl_fn_804EAA88_0000107C
lbl_fn_804EAA88_00000F50:
    lwz r0, 0x608(r24)
    cmpwi r0, 0x0
    blt lbl_fn_804EAA88_00001068
    lwz r23, 0x44(r1)
    cmplwi r23, 0x2
    ble lbl_fn_804EAA88_00001068
    bl fn_80680CF8
    subi r5, r23, 0x2
    lwz r0, 0x608(r24)
    divwu r4, r3, r5
    addi r6, r1, 0x48
    lfs f31, lbl_8088760C
    li r29, 0x1
    li r30, 0x0
    li r26, 0x0
    mullw r4, r4, r5
    subf r3, r4, r3
    add r3, r0, r3
    addi r3, r3, 0x1
    divwu r0, r3, r23
    mullw r0, r0, r23
    subf r27, r0, r3
    slwi r0, r27, 2
    lwzx r22, r6, r0
    b lbl_fn_804EAA88_0000103C
lbl_fn_804EAA88_00000FB4:
    lwz r0, 0x5e4(r24)
    add r23, r0, r26
    lwz r0, 0xd0(r23)
    srwi. r0, r0, 31
    beq lbl_fn_804EAA88_00001034
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_804EAA88_00001034
    lwz r4, 0x0(r28)
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_804EAA88_00001034
    lwz r4, 0x0(r23)
    addi r3, r1, 0x20
    lfs f3, 0xc(r22)
    lfs f0, 0x530(r4)
    lfs f5, 0x8(r22)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r4)
    lfs f3, 0x4(r22)
    lfs f0, 0x528(r4)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f31
    bge lbl_fn_804EAA88_00001034
    li r29, 0x0
    b lbl_fn_804EAA88_00001048
lbl_fn_804EAA88_00001034:
    addi r30, r30, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804EAA88_0000103C:
    lwz r0, 0x5e8(r24)
    cmpw r30, r0
    blt lbl_fn_804EAA88_00000FB4
lbl_fn_804EAA88_00001048:
    cmpwi r29, 0x0
    bne lbl_fn_804EAA88_0000107C
    lwz r4, 0x44(r1)
    addi r3, r27, 0x1
    divwu r0, r3, r4
    mullw r0, r0, r4
    subf r27, r0, r3
    b lbl_fn_804EAA88_0000107C
lbl_fn_804EAA88_00001068:
    lwz r23, 0x44(r1)
    bl fn_80680CF8
    divwu r0, r3, r23
    mullw r0, r0, r23
    subf r27, r0, r3
lbl_fn_804EAA88_0000107C:
    cmpwi r27, 0x0
    blt lbl_fn_804EAA88_00001214
    lwz r0, 0x44(r1)
    cmpw r27, r0
    bge lbl_fn_804EAA88_00001214
    slwi r0, r27, 2
    addi r3, r1, 0x48
    lwzx r26, r3, r0
    cmpwi r31, 0x0
    addi r3, r1, 0x38
    psq_l f1, 0x4(r26), 0, 0
    lfs f2, 0xc(r26)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    bne lbl_fn_804EAA88_000011D8
    bl fn_80680CF8
    lis r29, 0x4178
    lis r31, 0x4330
    addi r0, r29, 0x749f
    lis r30, lbl_80759748@ha
    mulhw r0, r0, r3
    stw r31, 0xc8(r1)
    lfd f6, lbl_80759748@l(r30)
    lfs f4, lbl_80887614
    lfs f3, lbl_80887610
    lfs f0, lbl_80887618
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xcc(r1)
    lfd f5, 0xc8(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f31, f3, f4, f0
    bl fn_80680CF8
    addi r0, r29, 0x749f
    stw r31, 0xd0(r1)
    mulhw r0, r0, r3
    lfd f6, lbl_80759748@l(r30)
    lfs f4, lbl_80887614
    lfs f3, lbl_80887610
    lfs f0, lbl_80887618
    srawi r0, r0, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xd4(r1)
    lfd f5, 0xd0(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f30, f3, f4, f0
    bl fn_80680CF8
    addi r0, r29, 0x749f
    lfs f3, 0x3c(r1)
    mulhw r0, r0, r3
    lfs f0, 0x40(r1)
    fadds f3, f3, f30
    stw r31, 0xd8(r1)
    fadds f0, f0, f31
    lfd f9, lbl_80759748@l(r30)
    srawi r0, r0, 8
    lfs f7, lbl_80887614
    srwi r4, r0, 31
    stfs f3, 0x3c(r1)
    add r0, r0, r4
    lfs f6, lbl_80887610
    mulli r0, r0, 0x3e9
    lfs f5, lbl_80887618
    stfs f0, 0x40(r1)
    lfs f4, 0x38(r1)
    subf r0, r0, r3
    stfs f30, 0x18(r1)
    xoris r0, r0, 0x8000
    stw r0, 0xdc(r1)
    lfd f8, 0xd8(r1)
    stfs f31, 0x1c(r1)
    fsubs f8, f8, f9
    fdivs f3, f8, f7
    fmsubs f0, f6, f3, f5
    stfs f0, 0x14(r1)
    fadds f0, f4, f0
    stfs f0, 0x38(r1)
lbl_fn_804EAA88_000011D8:
    lfs f2, lbl_80887570
    addi r4, r1, 0x8
    lfs f0, 0x14(r26)
    addi r3, r1, 0x2c
    lwz r0, 0xd0(r28)
    stfs f2, 0x8(r1)
    extrwi r0, r0, 1, 1
    stfs f0, 0xc(r1)
    cmplwi r0, 0x1
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x34(r1)
    bne lbl_fn_804EAA88_00001214
    stw r27, 0x608(r24)
lbl_fn_804EAA88_00001214:
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x2c
    psq_st f1, 0x528(r25), 0, 0
    mr r3, r25
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x1
    stfs f2, 0x530(r25)
    li r5, 0x1
    lfs f2, 0x34(r1)
    li r6, 0x1
    psq_st f1, 0x534(r25), 0, 0
    li r7, 0x1
    stfs f2, 0x53c(r25)
    bl fn_8015495C
lbl_fn_804EAA88_00001254:
    addi r11, r1, 0x110
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    psq_l f30, 0x118(r1), 0, 0
    lfd f30, 0x110(r1)
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_804EAEE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r5, 0x0
    cmpwi r4, 0x0
    stb r5, 0x8(r1)
    stb r5, 0x9(r1)
    bne lbl_fn_804EAEE4_000012A8
    li r0, 0x1
    stb r0, 0x8(r1)
    lhz r0, 0x8(r1)
    slwi r3, r0, 16
    b lbl_fn_804EAEE4_00001364
lbl_fn_804EAEE4_000012A8:
    lwz r0, 0x5e8(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EAEE4_000012E8
lbl_fn_804EAEE4_000012B8:
    lwz r0, 0x5e4(r3)
    add r6, r0, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EAEE4_000012E0
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_804EAEE4_000012E0
    b lbl_fn_804EAEE4_000012EC
lbl_fn_804EAEE4_000012E0:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EAEE4_000012B8
lbl_fn_804EAEE4_000012E8:
    li r6, 0x0
lbl_fn_804EAEE4_000012EC:
    cmpwi r6, 0x0
    beq lbl_fn_804EAEE4_00001310
    lbz r0, 0xcc(r6)
    li r3, 0x2
    stb r3, 0x8(r1)
    stb r0, 0x9(r1)
    lhz r0, 0x8(r1)
    slwi r3, r0, 16
    b lbl_fn_804EAEE4_00001364
lbl_fn_804EAEE4_00001310:
    lwz r0, 0x5f4(r3)
    li r7, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EAEE4_0000135C
lbl_fn_804EAEE4_00001328:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r5
    cmplw r0, r4
    bne lbl_fn_804EAEE4_00001350
    li r0, 0x3
    stb r0, 0x8(r1)
    stb r7, 0x9(r1)
    lhz r0, 0x8(r1)
    slwi r3, r0, 16
    b lbl_fn_804EAEE4_00001364
lbl_fn_804EAEE4_00001350:
    addi r7, r7, 0x1
    addi r5, r5, 0xb4
    bdnz lbl_fn_804EAEE4_00001328
lbl_fn_804EAEE4_0000135C:
    lhz r0, 0x8(r1)
    slwi r3, r0, 16
lbl_fn_804EAEE4_00001364:
    addi r1, r1, 0x10
    blr
}

asm void fn_804EAFD4(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r6, 0x0
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EAFD4_000013A4
lbl_fn_804EAFD4_00001384:
    lwz r0, 0x5e4(r3)
    add r5, r0, r4
    lwz r0, 0xd0(r5)
    srwi. r0, r0, 31
    beq lbl_fn_804EAFD4_0000139C
    addi r6, r6, 0x1
lbl_fn_804EAFD4_0000139C:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EAFD4_00001384
lbl_fn_804EAFD4_000013A4:
    mr r3, r6
    blr
}

asm void fn_804EB014(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, lbl_8087F628
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB014_000013FC
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB014_000013F0
    li r0, 0x0
    b lbl_fn_804EB014_00001418
lbl_fn_804EB014_000013F0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB014_00001418
lbl_fn_804EB014_000013FC:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB014_00001410
    li r3, 0x0
    b lbl_fn_804EB014_00001414
lbl_fn_804EB014_00001410:
    bl fn_806A8E40
lbl_fn_804EB014_00001414:
    clrlwi r0, r3, 24
lbl_fn_804EB014_00001418:
    lwz r6, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EB014_00001460
lbl_fn_804EB014_00001430:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB014_00001458
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB014_00001458
    b lbl_fn_804EB014_00001464
lbl_fn_804EB014_00001458:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB014_00001430
lbl_fn_804EB014_00001460:
    li r5, 0x0
lbl_fn_804EB014_00001464:
    cmpwi r5, 0x0
    bne lbl_fn_804EB014_00001474
    li r3, 0x0
    b lbl_fn_804EB014_00001530
lbl_fn_804EB014_00001474:
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EB014_000014B4
lbl_fn_804EB014_00001484:
    lwz r0, 0x5e4(r30)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB014_000014AC
    lwz r0, 0x0(r6)
    cmplw r0, r31
    bne lbl_fn_804EB014_000014AC
    b lbl_fn_804EB014_000014B8
lbl_fn_804EB014_000014AC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB014_00001484
lbl_fn_804EB014_000014B4:
    li r6, 0x0
lbl_fn_804EB014_000014B8:
    lwz r0, 0x5f4(r30)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB014_000014E4
lbl_fn_804EB014_000014CC:
    lwz r4, 0x5f0(r30)
    lwzx r0, r4, r3
    cmplw r0, r31
    beq lbl_fn_804EB014_000014E4
    addi r3, r3, 0xb4
    bdnz lbl_fn_804EB014_000014CC
lbl_fn_804EB014_000014E4:
    lwz r0, 0x540(r30)
    cmpwi r0, 0x0
    bne lbl_fn_804EB014_00001504
    lwz r0, 0x0(r5)
    subf r0, r0, r31
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_804EB014_00001530
lbl_fn_804EB014_00001504:
    cmpwi r6, 0x0
    beq lbl_fn_804EB014_0000152C
    lwz r3, 0xd0(r5)
    lwz r0, 0xd0(r6)
    extrwi r3, r3, 4, 6
    extrwi r0, r0, 4, 6
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_804EB014_00001530
lbl_fn_804EB014_0000152C:
    li r3, 0x0
lbl_fn_804EB014_00001530:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EB1B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB1B0_0000158C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB1B0_00001580
    li r31, 0x0
    b lbl_fn_804EB1B0_000015A8
lbl_fn_804EB1B0_00001580:
    bl fn_806B0E30
    clrlwi r31, r3, 24
    b lbl_fn_804EB1B0_000015A8
lbl_fn_804EB1B0_0000158C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB1B0_000015A0
    li r3, 0x0
    b lbl_fn_804EB1B0_000015A4
lbl_fn_804EB1B0_000015A0:
    bl fn_806A8E40
lbl_fn_804EB1B0_000015A4:
    clrlwi r31, r3, 24
lbl_fn_804EB1B0_000015A8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB1B0_000015DC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB1B0_000015D0
    li r0, 0x0
    b lbl_fn_804EB1B0_000015E0
lbl_fn_804EB1B0_000015D0:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804EB1B0_000015E0
lbl_fn_804EB1B0_000015DC:
    li r0, 0x0
lbl_fn_804EB1B0_000015E0:
    clrlwi r3, r31, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    lwz r31, 0xc(r1)
    cntlzw r0, r0
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EB270(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r8, 0x1
    li r9, 0x0
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB270_00001660
lbl_fn_804EB270_00001624:
    lwz r0, 0x5e4(r3)
    add r7, r0, r5
    lwz r6, 0xd0(r7)
    srwi r0, r6, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB270_00001658
    extrwi. r0, r6, 1, 3
    bne lbl_fn_804EB270_00001648
    li r8, 0x0
lbl_fn_804EB270_00001648:
    lwz r0, 0xd0(r7)
    extrwi. r0, r0, 1, 3
    beq lbl_fn_804EB270_00001658
    addi r9, r9, 0x1
lbl_fn_804EB270_00001658:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EB270_00001624
lbl_fn_804EB270_00001660:
    cmpwi r4, 0x0
    beq lbl_fn_804EB270_0000166C
    stw r9, 0x0(r4)
lbl_fn_804EB270_0000166C:
    mr r3, r8
    blr
}

asm void fn_804EB2DC(void)
{
    nofralloc
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    beq lbl_fn_804EB2DC_00001688
    li r3, 0x1
    blr
lbl_fn_804EB2DC_00001688:
    lwz r6, 0x5e8(r3)
    li r7, 0x0
    li r4, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EB2DC_000016C8
lbl_fn_804EB2DC_000016A0:
    lwz r0, 0x5e4(r3)
    add r5, r0, r4
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB2DC_000016C0
    mr r7, r5
    b lbl_fn_804EB2DC_000016C8
lbl_fn_804EB2DC_000016C0:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB2DC_000016A0
lbl_fn_804EB2DC_000016C8:
    cmpwi r7, 0x0
    bne lbl_fn_804EB2DC_000016D8
    li r3, 0x1
    blr
lbl_fn_804EB2DC_000016D8:
    lwz r4, 0xd0(r7)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB2DC_000016F8
    extrwi. r0, r4, 4, 6
    bne lbl_fn_804EB2DC_000016F8
    li r3, 0x1
    blr
lbl_fn_804EB2DC_000016F8:
    lwz r0, 0xd0(r7)
    li r7, 0x0
    li r4, 0x0
    extrwi r8, r0, 4, 6
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804EB2DC_0000174C
lbl_fn_804EB2DC_00001714:
    lwz r0, 0x5e4(r3)
    add r5, r0, r4
    lwz r5, 0xd0(r5)
    srwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB2DC_00001744
    extrwi r0, r5, 4, 6
    addi r7, r7, 0x1
    cmplw r8, r0
    beq lbl_fn_804EB2DC_00001744
    li r3, 0x1
    blr
lbl_fn_804EB2DC_00001744:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB2DC_00001714
lbl_fn_804EB2DC_0000174C:
    subfic r0, r7, 0x1
    li r3, 0x1
    orc r3, r3, r7
    srwi r0, r0, 1
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_804EB3D0(void)
{
    nofralloc
    mulli r0, r4, 0xd5c
    lwz r3, 0x5e4(r3)
    add. r3, r3, r0
    beq lbl_fn_804EB3D0_00001794
    lbz r0, 0xcc(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804EB3D0_00001794
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB3D0_00001794
    li r3, 0x1
    blr
lbl_fn_804EB3D0_00001794:
    li r3, 0x0
    blr
}

asm void fn_804EB404(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB404_000017E0
lbl_fn_804EB404_000017B0:
    lwz r0, 0x5e4(r3)
    add r6, r0, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB404_000017D8
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_804EB404_000017D8
    b lbl_fn_804EB404_000017E4
lbl_fn_804EB404_000017D8:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804EB404_000017B0
lbl_fn_804EB404_000017E0:
    li r6, 0x0
lbl_fn_804EB404_000017E4:
    cmpwi r6, 0x0
    beq lbl_fn_804EB404_00001814
    beq lbl_fn_804EB404_0000180C
    lbz r0, 0xcc(r6)
    cmplwi r0, 0xff
    beq lbl_fn_804EB404_0000180C
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB404_0000180C
    li r3, 0x1
    blr
lbl_fn_804EB404_0000180C:
    li r3, 0x0
    blr
lbl_fn_804EB404_00001814:
    li r3, 0x0
    blr
}

asm void fn_804EB484(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_804EB484_00001840
    lbz r0, 0xcc(r4)
    cmplwi r0, 0xff
    beq lbl_fn_804EB484_00001840
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB484_00001840
    li r3, 0x1
    blr
lbl_fn_804EB484_00001840:
    li r3, 0x0
    blr
}

asm void fn_804EB4B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r5, lbl_8087F628
    lwz r31, lbl_8087F610
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804EB4B0_00001898
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB4B0_0000188C
    li r0, 0x0
    b lbl_fn_804EB4B0_000018B4
lbl_fn_804EB4B0_0000188C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804EB4B0_000018B4
lbl_fn_804EB4B0_00001898:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804EB4B0_000018AC
    li r3, 0x0
    b lbl_fn_804EB4B0_000018B0
lbl_fn_804EB4B0_000018AC:
    bl fn_806A8E40
lbl_fn_804EB4B0_000018B0:
    clrlwi r0, r3, 24
lbl_fn_804EB4B0_000018B4:
    lwz r5, 0x5e8(r31)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804EB4B0_000018FC
lbl_fn_804EB4B0_000018CC:
    lwz r0, 0x5e4(r31)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB4B0_000018F4
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804EB4B0_000018F4
    b lbl_fn_804EB4B0_00001900
lbl_fn_804EB4B0_000018F4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804EB4B0_000018CC
lbl_fn_804EB4B0_000018FC:
    li r5, 0x0
lbl_fn_804EB4B0_00001900:
    cmpwi r5, 0x0
    beq lbl_fn_804EB4B0_0000193C
    cmpwi r30, 0x0
    beq lbl_fn_804EB4B0_0000193C
    beq lbl_fn_804EB4B0_00001930
    lbz r0, 0xcc(r30)
    cmplwi r0, 0xff
    beq lbl_fn_804EB4B0_00001930
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB4B0_00001930
    li r0, 0x1
    b lbl_fn_804EB4B0_00001934
lbl_fn_804EB4B0_00001930:
    li r0, 0x0
lbl_fn_804EB4B0_00001934:
    cmpwi r0, 0x0
    bne lbl_fn_804EB4B0_00001944
lbl_fn_804EB4B0_0000193C:
    li r3, 0x0
    b lbl_fn_804EB4B0_0000195C
lbl_fn_804EB4B0_00001944:
    lbz r0, 0xcc(r30)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_804EB4B0_0000195C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804EB5DC(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB5DC_000019E4
lbl_fn_804EB5DC_00001988:
    lwz r0, 0x5e4(r3)
    add. r5, r0, r4
    beq lbl_fn_804EB5DC_000019B0
    lbz r0, 0xcc(r5)
    cmplwi r0, 0xff
    beq lbl_fn_804EB5DC_000019B0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804EB5DC_000019B0
    li r0, 0x1
    b lbl_fn_804EB5DC_000019B4
lbl_fn_804EB5DC_000019B0:
    li r0, 0x0
lbl_fn_804EB5DC_000019B4:
    cmpwi r0, 0x1
    beq lbl_fn_804EB5DC_000019DC
    lwz r5, 0xd0(r5)
    srwi r0, r5, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB5DC_000019DC
    extrwi. r0, r5, 1, 4
    bne lbl_fn_804EB5DC_000019DC
    li r3, 0x0
    blr
lbl_fn_804EB5DC_000019DC:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804EB5DC_00001988
lbl_fn_804EB5DC_000019E4:
    li r3, 0x1
    blr
}

asm void fn_804EB654(void)
{
    nofralloc
    lwz r0, 0x5e8(r3)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804EB654_00001A30
lbl_fn_804EB654_00001A00:
    lwz r0, 0x5e4(r3)
    add r7, r0, r6
    lwz r0, 0xd0(r7)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804EB654_00001A28
    lwz r0, 0x0(r7)
    cmplw r0, r4
    bne lbl_fn_804EB654_00001A28
    b lbl_fn_804EB654_00001A34
lbl_fn_804EB654_00001A28:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804EB654_00001A00
lbl_fn_804EB654_00001A30:
    li r7, 0x0
lbl_fn_804EB654_00001A34:
    cmpwi r7, 0x0
    bne lbl_fn_804EB654_00001A50
    lwz r7, 0x5fc(r3)
    cmpwi r7, 0x0
    bne lbl_fn_804EB654_00001A50
    li r3, 0x0
    blr
lbl_fn_804EB654_00001A50:
    cmpwi r5, 0x0
    beq lbl_fn_804EB654_00001A74
    cmpwi r5, 0x1
    beq lbl_fn_804EB654_00001A90
    cmpwi r5, 0x2
    beq lbl_fn_804EB654_00001AAC
    cmpwi r5, 0x3
    beq lbl_fn_804EB654_00001AC8
    b lbl_fn_804EB654_00001AE4
lbl_fn_804EB654_00001A74:
    lwz r0, 0xe8(r7)
    cmpwi r0, -0x1
    beq lbl_fn_804EB654_00001A88
    addi r3, r7, 0xe8
    blr
lbl_fn_804EB654_00001A88:
    li r3, 0x0
    blr
lbl_fn_804EB654_00001A90:
    lwz r0, 0x3fc(r7)
    cmpwi r0, -0x1
    beq lbl_fn_804EB654_00001AA4
    addi r3, r7, 0x3fc
    blr
lbl_fn_804EB654_00001AA4:
    li r3, 0x0
    blr
lbl_fn_804EB654_00001AAC:
    lwz r0, 0x710(r7)
    cmpwi r0, -0x1
    beq lbl_fn_804EB654_00001AC0
    addi r3, r7, 0x710
    blr
lbl_fn_804EB654_00001AC0:
    li r3, 0x0
    blr
lbl_fn_804EB654_00001AC8:
    lwz r0, 0xa24(r7)
    cmpwi r0, -0x1
    beq lbl_fn_804EB654_00001ADC
    addi r3, r7, 0xa24
    blr
lbl_fn_804EB654_00001ADC:
    li r3, 0x0
    blr
lbl_fn_804EB654_00001AE4:
    li r3, 0x0
    blr
}
