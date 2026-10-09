#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restgpr_17(void);
extern void _restgpr_27(void);
extern void _savegpr_17(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B710(void);
extern void fn_8005B8F8(void);
extern void fn_8005B9AC(void);
extern void fn_80061824(void);
extern void fn_8006AD24(void);
extern void fn_8006EF48(void);
extern void fn_8006F72C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D1D3C(void);
extern void fn_800DBF68(void);
extern void fn_800DC1DC(void);
extern void fn_800E0000(void);
extern void fn_800E0908(void);
extern void fn_801EC158(void);
extern void fn_801EC6C0(void);
extern void fn_801EC784(void);
extern void fn_801ED928(void);
extern void fn_801EDC78(void);
extern void fn_801EEE54(void);
extern void fn_801F04FC(void);
extern void fn_801F10E0(void);
extern void fn_801F1418(void);
extern void fn_801F14FC(void);
extern void fn_801F1658(void);
extern void fn_801F1E7C(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80473FCC(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686EA4(void);
extern void fn_80695D84(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073E380[];
extern u8 lbl_8073E420[];
extern u8 lbl_807799A0[];
extern u8 lbl_8077A070[];
extern u8 lbl_8077A090[];
extern u8 lbl_8077A0A8[];
extern u8 lbl_80782BB0[];
extern u8 lbl_80782BD0[];
extern u8 lbl_80782C08[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C7F68[];
extern u8 lbl_807C7F74[];

/* Small data declarations */
extern u32 lbl_8087DAE8;
extern u32 lbl_8087DAEC;
extern u32 lbl_8087DAF0;
extern u32 lbl_8087DAF4;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F138;
extern u32 lbl_8087F140;
extern u32 lbl_80882C5C;
extern u32 lbl_80882C60;
extern u32 lbl_80882C64;
extern u32 lbl_80882C68;
extern u32 lbl_80882C6C;
extern u32 lbl_80882C70;
extern u32 lbl_80882C78;
extern u32 lbl_80882C7C;
extern u32 lbl_80882C80;
extern u32 lbl_80882C84;

/* Function declarations */
void fn_801F275C(void);
void fn_801F2A88(void);
void fn_801F2A8C(void);
void fn_801F33A8(void);
void fn_801F33D4(void);
void fn_801F3490(void);
void fn_801F34F8(void);
void fn_801F35B4(void);
void fn_801F362C(void);
void fn_801F36C8(void);
void fn_801F3E20(void);
void fn_801F3EF4(void);
void fn_801F3F74(void);
void fn_801F3FF4(void);
void fn_801F3FF8(void);
void fn_801F407C(void);

asm void fn_801F275C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_801EC784
    lwz r29, 0xfc(r28)
    cmpwi r29, 0x0
    beq lbl_fn_801F275C_0000030C
    lwz r0, 0x48(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801F275C_00000048
    lwz r0, 0x44(r29)
    cmpwi r0, 0x0
    bne lbl_fn_801F275C_00000198
lbl_fn_801F275C_00000048:
    lwz r0, 0x44(r29)
    cmplwi r0, 0x8
    bgt lbl_fn_801F275C_000002EC
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087DAEC
    la r6, lbl_8087DAE8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x48(r29)
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F275C_00000188
    lwz r0, 0x40(r29)
    li r4, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_801F275C_00000090
    mr r4, r0
lbl_fn_801F275C_00000090:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F275C_00000180
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F275C_00000150
    addi r0, r8, 0x7
    mr r7, r31
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F275C_00000150
lbl_fn_801F275C_000000C4:
    lwz r8, 0x48(r29)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F275C_000000C4
lbl_fn_801F275C_00000150:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F275C_00000180
lbl_fn_801F275C_00000168:
    lwz r3, 0x48(r29)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F275C_00000168
lbl_fn_801F275C_00000180:
    lwz r3, 0x48(r29)
    bl fn_80084C24
lbl_fn_801F275C_00000188:
    stw r31, 0x48(r29)
    li r0, 0x8
    stw r0, 0x44(r29)
    b lbl_fn_801F275C_000002EC
lbl_fn_801F275C_00000198:
    lwz r3, 0x40(r29)
    cmplw r3, r0
    blt lbl_fn_801F275C_000002EC
    slwi r31, r3, 1
    cmplw r0, r31
    bgt lbl_fn_801F275C_000002EC
    slwi r3, r31, 2
    li r4, 0x0
    la r5, lbl_8087DAEC
    la r6, lbl_8087DAE8
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x48(r29)
    mr r30, r3
    cmpwi r0, 0x0
    beq lbl_fn_801F275C_000002E4
    lwz r0, 0x40(r29)
    mr r4, r31
    cmplw r31, r0
    ble lbl_fn_801F275C_000001EC
    mr r4, r0
lbl_fn_801F275C_000001EC:
    cmpwi r4, 0x0
    li r5, 0x0
    beq lbl_fn_801F275C_000002DC
    cmplwi r4, 0x8
    subi r8, r4, 0x8
    ble lbl_fn_801F275C_000002AC
    addi r0, r8, 0x7
    mr r7, r30
    srwi r0, r0, 3
    li r6, 0x0
    mtctr r0
    cmplwi r8, 0x0
    ble lbl_fn_801F275C_000002AC
lbl_fn_801F275C_00000220:
    lwz r8, 0x48(r29)
    addi r5, r5, 0x8
    lwzx r0, r8, r6
    stw r0, 0x0(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x4(r8)
    stw r0, 0x4(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x8(r8)
    stw r0, 0x8(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0xc(r8)
    stw r0, 0xc(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x10(r8)
    stw r0, 0x10(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x14(r8)
    stw r0, 0x14(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    lwz r0, 0x18(r8)
    stw r0, 0x18(r7)
    lwz r0, 0x48(r29)
    add r8, r0, r6
    addi r6, r6, 0x20
    lwz r0, 0x1c(r8)
    stw r0, 0x1c(r7)
    addi r7, r7, 0x20
    bdnz lbl_fn_801F275C_00000220
lbl_fn_801F275C_000002AC:
    slwi r7, r5, 2
    subf r0, r5, r4
    add r6, r3, r7
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_801F275C_000002DC
lbl_fn_801F275C_000002C4:
    lwz r3, 0x48(r29)
    lwzx r0, r3, r7
    addi r7, r7, 0x4
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    bdnz lbl_fn_801F275C_000002C4
lbl_fn_801F275C_000002DC:
    lwz r3, 0x48(r29)
    bl fn_80084C24
lbl_fn_801F275C_000002E4:
    stw r30, 0x48(r29)
    stw r31, 0x44(r29)
lbl_fn_801F275C_000002EC:
    lwz r0, 0x40(r29)
    addi r4, r28, 0x134
    lwz r3, 0x48(r29)
    slwi r0, r0, 2
    stwx r4, r3, r0
    lwz r3, 0x40(r29)
    addi r0, r3, 0x1
    stw r0, 0x40(r29)
lbl_fn_801F275C_0000030C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F2A88(void)
{
    nofralloc
    blr
}

asm void fn_801F2A8C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    addi r11, r1, 0xf0
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    stfd f29, 0x110(r1)
    psq_st f29, 0x118(r1), 0, 0
    stfd f28, 0x100(r1)
    psq_st f28, 0x108(r1), 0, 0
    stfd f27, 0xf0(r1)
    psq_st f27, 0xf8(r1), 0, 0
    bl _savegpr_17
    lfs f0, lbl_80882C5C
    li r0, 0x0
    stfs f0, 0x90(r1)
    mr r31, r3
    addi r4, r1, 0x90
    addi r5, r1, 0x50
    stfs f0, 0x94(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x78
    stfs f0, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f0, 0xa0(r1)
    stfs f0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_801ED928
    lfs f1, 0x94(r1)
    lfs f0, lbl_80882C60
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    beq lbl_fn_801F2A8C_00000C0C
    mr r3, r31
    bl fn_801EDC78
    cmpwi r3, 0x0
    beq lbl_fn_801F2A8C_00000C0C
    lfs f3, 0x80(r1)
    lfs f2, 0x84(r1)
    lfs f1, 0x88(r1)
    lfs f0, 0x8c(r1)
    stfs f3, 0x40(r1)
    stfs f2, 0x44(r1)
    stfs f1, 0x48(r1)
    stfs f0, 0x4c(r1)
    lwz r3, 0xfc(r31)
    lwz r12, 0x9c(r3)
    cmpwi r12, 0x0
    beq lbl_fn_801F2A8C_00000434
    lhz r0, 0xe(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801F2A8C_00000420
    mr r3, r31
    addi r4, r1, 0x50
    li r5, 0x0
    mtctr r12
    bctrl
    b lbl_fn_801F2A8C_00000434
lbl_fn_801F2A8C_00000420:
    mr r3, r31
    addi r4, r1, 0x50
    addi r5, r1, 0x40
    mtctr r12
    bctrl
lbl_fn_801F2A8C_00000434:
    lfs f1, 0x5c(r1)
    lfs f0, lbl_80882C5C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    beq lbl_fn_801F2A8C_00000C0C
    lfs f0, 0x4c(r1)
    lbz r0, lbl_8087F140
    fmuls f0, f0, f1
    cmpwi r0, 0x0
    stfs f0, 0x4c(r1)
    bne lbl_fn_801F2A8C_000005AC
    lis r3, lbl_807C7F74@ha
    addi r3, r3, lbl_807C7F74@l
    lwz r0, 0x8(r3)
    cmplwi r0, 0x1e
    bge lbl_fn_801F2A8C_000005A0
    li r0, 0x0
    stw r0, 0x18(r1)
    li r3, 0x168
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_801F2A8C_000004B8
    lis r3, __files@ha
    lis r4, lbl_807799A0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_807799A0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F2A8C_000004B8:
    lis r29, lbl_807C7F74@ha
    lis r3, 0x2aab
    addi r28, r29, lbl_807C7F74@l
    lwz r0, 0x1c(r1)
    lwz r4, 0x4(r28)
    subi r5, r3, 0x5555
    li r6, 0x1e
    lwz r23, lbl_807C7F74@l(r29)
    mulli r3, r4, 0xc
    stw r6, 0x20(r1)
    mr r4, r23
    add r3, r23, r3
    subf r3, r23, r3
    mulhw r3, r5, r3
    srawi r3, r3, 1
    srwi r5, r3, 31
    add r17, r3, r5
    mulli r18, r17, 0xc
    mulli r0, r0, 0xc
    mr r5, r18
    add r3, r30, r0
    bl memcpy
    mr r3, r23
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r3, 0x1c(r1)
    mr r0, r30
    lwz r5, lbl_807C7F74@l(r29)
    lwz r18, 0x4(r28)
    add r4, r3, r17
    lwz r6, 0x8(r28)
    cmpwi r5, 0x0
    lwz r3, 0x20(r1)
    stw r3, 0x8(r28)
    stw r6, 0x20(r1)
    stw r0, lbl_807C7F74@l(r29)
    stw r5, 0x18(r1)
    stw r4, 0x4(r28)
    stw r18, 0x1c(r1)
    beq lbl_fn_801F2A8C_000005A0
    mulli r3, r18, 0xc
    subf r0, r18, r18
    stw r0, 0x1c(r1)
    add r17, r5, r3
    b lbl_fn_801F2A8C_00000590
lbl_fn_801F2A8C_00000570:
    subic. r17, r17, 0xc
    beq lbl_fn_801F2A8C_0000058C
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_801F2A8C_0000058C
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_801F2A8C_0000058C:
    subi r18, r18, 0x1
lbl_fn_801F2A8C_00000590:
    cmpwi r18, 0x0
    bne lbl_fn_801F2A8C_00000570
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_801F2A8C_000005A0:
    li r0, 0x1
    stb r0, lbl_8087F140
    b lbl_fn_801F2A8C_000005F8
lbl_fn_801F2A8C_000005AC:
    lis r3, lbl_807C7F74@ha
    addi r5, r3, lbl_807C7F74@l
    lwz r4, lbl_807C7F74@l(r3)
    lwz r18, 0x4(r5)
    mulli r3, r18, 0xc
    subf r0, r18, r18
    stw r0, 0x4(r5)
    add r17, r4, r3
    b lbl_fn_801F2A8C_000005F0
lbl_fn_801F2A8C_000005D0:
    subic. r17, r17, 0xc
    beq lbl_fn_801F2A8C_000005EC
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_801F2A8C_000005EC
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_801F2A8C_000005EC:
    subi r18, r18, 0x1
lbl_fn_801F2A8C_000005F0:
    cmpwi r18, 0x0
    bne lbl_fn_801F2A8C_000005D0
lbl_fn_801F2A8C_000005F8:
    lwz r0, 0x140(r31)
    lis r3, lbl_807C7F74@ha
    addi r3, r3, lbl_807C7F74@l
    srwi. r0, r0, 31
    bne lbl_fn_801F2A8C_00000614
    addi r4, r31, 0x142
    b lbl_fn_801F2A8C_00000618
lbl_fn_801F2A8C_00000614:
    lwz r4, 0x148(r31)
lbl_fn_801F2A8C_00000618:
    lis r7, fn_801F1418@ha
    lfs f1, lbl_80882C64
    lfs f2, 0x98(r1)
    addi r7, r7, fn_801F1418@l
    lhz r6, 0x12c(r31)
    li r5, 0x1
    lfs f3, lbl_80882C5C
    bl fn_800E0000
    lis r29, lbl_807C7F74@ha
    addi r24, r1, 0x26
    li r25, 0x0
    li r23, 0x0
    addi r17, r29, lbl_807C7F74@l
    li r28, -0x1
    b lbl_fn_801F2A8C_0000079C
lbl_fn_801F2A8C_00000654:
    lwz r0, lbl_807C7F74@l(r29)
    li r3, -0x1
    add r4, r0, r23
    lwzx r0, r23, r0
    srwi. r0, r0, 31
    bne lbl_fn_801F2A8C_0000067C
    lbz r0, 0x0(r4)
    addi r6, r4, 0x2
    clrlwi r5, r0, 25
    b lbl_fn_801F2A8C_00000684
lbl_fn_801F2A8C_0000067C:
    lwz r6, 0x8(r4)
    lwz r5, 0x4(r4)
lbl_fn_801F2A8C_00000684:
    cmpwi r5, 0x0
    beq lbl_fn_801F2A8C_000006D4
    subi r0, r5, 0x1
    cmplw r0, r28
    bge lbl_fn_801F2A8C_0000069C
    mr r3, r0
lbl_fn_801F2A8C_0000069C:
    slwi r0, r3, 1
    add r3, r6, r0
lbl_fn_801F2A8C_000006A4:
    lhz r0, 0x0(r3)
    cmplwi r0, 0xd
    bne lbl_fn_801F2A8C_000006C4
    subf r3, r6, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r6, r0, 1
    b lbl_fn_801F2A8C_000006D8
lbl_fn_801F2A8C_000006C4:
    cmplw r3, r6
    ble lbl_fn_801F2A8C_000006D4
    subi r3, r3, 0x2
    b lbl_fn_801F2A8C_000006A4
lbl_fn_801F2A8C_000006D4:
    li r6, -0x1
lbl_fn_801F2A8C_000006D8:
    addis r0, r6, 0x1
    cmplwi r0, 0xffff
    beq lbl_fn_801F2A8C_00000794
    addi r3, r1, 0x24
    li r5, 0x0
    bl fn_800E0908
    lwz r0, lbl_807C7F74@l(r29)
    add r3, r0, r23
    lwzx r0, r23, r0
    srwi. r5, r0, 31
    bne lbl_fn_801F2A8C_00000728
    lwz r4, 0x24(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F2A8C_00000728
    lwz r0, 0x28(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x2c(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F2A8C_00000780
lbl_fn_801F2A8C_00000728:
    cmpwi r5, 0x0
    beq lbl_fn_801F2A8C_00000738
    lwz r5, 0x4(r3)
    b lbl_fn_801F2A8C_00000740
lbl_fn_801F2A8C_00000738:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F2A8C_00000740:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F2A8C_0000075C
    lbz r0, 0x24(r1)
    mr r6, r24
    clrlwi r0, r0, 25
    b lbl_fn_801F2A8C_00000764
lbl_fn_801F2A8C_0000075C:
    lwz r6, 0x2c(r1)
    lwz r0, 0x28(r1)
lbl_fn_801F2A8C_00000764:
    lbz r4, 0xc(r1)
    slwi r0, r0, 1
    stb r4, 0x8(r1)
    add r7, r6, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801F2A8C_00000780:
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F2A8C_00000794
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F2A8C_00000794:
    addi r23, r23, 0xc
    addi r25, r25, 0x1
lbl_fn_801F2A8C_0000079C:
    lwz r0, 0x4(r17)
    cmplw r25, r0
    blt lbl_fn_801F2A8C_00000654
    cmpwi r0, 0x0
    li r22, 0x0
    beq lbl_fn_801F2A8C_00000C0C
    lis r28, lbl_807C7F74@ha
    lfs f28, lbl_80882C70
    lfs f29, lbl_80882C5C
    addi r27, r1, 0x30
    lfs f30, lbl_80882C6C
    addi r20, r28, lbl_807C7F74@l
    lfs f31, lbl_80882C68
    li r24, 0x0
    li r29, 0x0
    b lbl_fn_801F2A8C_00000C00
lbl_fn_801F2A8C_000007DC:
    lwz r0, lbl_807C7F74@l(r28)
    lfs f27, lbl_80882C5C
    add r3, r0, r24
    lwzx r0, r24, r0
    srwi. r0, r0, 31
    bne lbl_fn_801F2A8C_000007FC
    addi r3, r3, 0x2
    b lbl_fn_801F2A8C_00000800
lbl_fn_801F2A8C_000007FC:
    lwz r3, 0x8(r3)
lbl_fn_801F2A8C_00000800:
    lfs f1, 0x98(r1)
    li r4, 0x1
    lhz r5, 0x12c(r31)
    lfs f2, lbl_80882C5C
    bl fn_801F14FC
    lhz r0, 0x12e(r31)
    cmplwi r0, 0x1
    bne lbl_fn_801F2A8C_00000828
    fneg f0, f1
    fmuls f27, f31, f0
lbl_fn_801F2A8C_00000828:
    cmplwi r0, 0x2
    bne lbl_fn_801F2A8C_00000834
    fneg f27, f1
lbl_fn_801F2A8C_00000834:
    lfs f0, 0x90(r1)
    li r18, 0x0
    stw r29, 0x30(r1)
    li r17, 0x0
    fadds f27, f0, f27
    stw r29, 0x38(r1)
    stw r29, 0x34(r1)
    b lbl_fn_801F2A8C_00000878
lbl_fn_801F2A8C_00000854:
    subic. r17, r17, 0x10
    beq lbl_fn_801F2A8C_00000874
    beq lbl_fn_801F2A8C_00000874
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_801F2A8C_00000874
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_801F2A8C_00000874:
    subi r18, r18, 0x1
lbl_fn_801F2A8C_00000878:
    cmpwi r18, 0x0
    bne lbl_fn_801F2A8C_00000854
    lwz r0, lbl_807C7F74@l(r28)
    addi r3, r1, 0x30
    add r4, r0, r24
    bl fn_801F1658
    li r21, 0x0
    li r23, 0x0
    b lbl_fn_801F2A8C_00000B70
lbl_fn_801F2A8C_0000089C:
    lwz r0, 0x30(r1)
    add r17, r0, r23
    lwz r0, 0xc(r17)
    cmpwi r0, 0x0
    bge lbl_fn_801F2A8C_00000B1C
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    bne lbl_fn_801F2A8C_000008C4
    addi r26, r17, 0x2
    b lbl_fn_801F2A8C_000008C8
lbl_fn_801F2A8C_000008C4:
    lwz r26, 0x8(r17)
lbl_fn_801F2A8C_000008C8:
    lfs f0, 0x40(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_000008E0
    li r18, 0xff
    b lbl_fn_801F2A8C_00000900
lbl_fn_801F2A8C_000008E0:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_000008F4
    li r3, 0x0
    b lbl_fn_801F2A8C_000008FC
lbl_fn_801F2A8C_000008F4:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_000008FC:
    mr r18, r3
lbl_fn_801F2A8C_00000900:
    lfs f0, 0x44(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000918
    li r17, 0xff
    b lbl_fn_801F2A8C_00000938
lbl_fn_801F2A8C_00000918:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_0000092C
    li r3, 0x0
    b lbl_fn_801F2A8C_00000934
lbl_fn_801F2A8C_0000092C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_00000934:
    mr r17, r3
lbl_fn_801F2A8C_00000938:
    lfs f0, 0x48(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000950
    li r30, 0xff
    b lbl_fn_801F2A8C_00000970
lbl_fn_801F2A8C_00000950:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_00000964
    li r3, 0x0
    b lbl_fn_801F2A8C_0000096C
lbl_fn_801F2A8C_00000964:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_0000096C:
    mr r30, r3
lbl_fn_801F2A8C_00000970:
    lfs f0, 0x4c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000988
    li r3, 0xff
    b lbl_fn_801F2A8C_000009A4
lbl_fn_801F2A8C_00000988:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_0000099C
    li r3, 0x0
    b lbl_fn_801F2A8C_000009A4
lbl_fn_801F2A8C_0000099C:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_000009A4:
    lfs f0, 0x50(r1)
    slwi r4, r3, 24
    slwi r3, r18, 16
    lwz r0, 0x10(r31)
    fcmpo cr0, f0, f28
    or r4, r4, r3
    slwi r3, r17, 8
    extrwi r25, r0, 1, 29
    or r0, r3, r4
    or r30, r30, r0
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_000009DC
    li r17, 0xff
    b lbl_fn_801F2A8C_000009FC
lbl_fn_801F2A8C_000009DC:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_000009F0
    li r3, 0x0
    b lbl_fn_801F2A8C_000009F8
lbl_fn_801F2A8C_000009F0:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_000009F8:
    mr r17, r3
lbl_fn_801F2A8C_000009FC:
    lfs f0, 0x54(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000A14
    li r18, 0xff
    b lbl_fn_801F2A8C_00000A34
lbl_fn_801F2A8C_00000A14:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_00000A28
    li r3, 0x0
    b lbl_fn_801F2A8C_00000A30
lbl_fn_801F2A8C_00000A28:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_00000A30:
    mr r18, r3
lbl_fn_801F2A8C_00000A34:
    lfs f0, 0x58(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000A4C
    li r19, 0xff
    b lbl_fn_801F2A8C_00000A6C
lbl_fn_801F2A8C_00000A4C:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_00000A60
    li r3, 0x0
    b lbl_fn_801F2A8C_00000A68
lbl_fn_801F2A8C_00000A60:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_00000A68:
    mr r19, r3
lbl_fn_801F2A8C_00000A6C:
    lfs f0, 0x5c(r1)
    fcmpo cr0, f0, f28
    cror eq, gt, eq
    bne lbl_fn_801F2A8C_00000A84
    li r3, 0xff
    b lbl_fn_801F2A8C_00000AA0
lbl_fn_801F2A8C_00000A84:
    fcmpo cr0, f0, f29
    cror eq, lt, eq
    bne lbl_fn_801F2A8C_00000A98
    li r3, 0x0
    b lbl_fn_801F2A8C_00000AA0
lbl_fn_801F2A8C_00000A98:
    fmadds f1, f30, f0, f31
    bl fn_80695D84
lbl_fn_801F2A8C_00000AA0:
    slwi r5, r18, 8
    slwi r4, r3, 24
    slwi r0, r17, 16
    fmr f1, f27
    or r0, r4, r0
    or r5, r19, r5
    lwz r3, lbl_8087EEB0
    mr r4, r26
    lfs f2, 0x94(r1)
    lfs f3, 0xa0(r1)
    mr r8, r25
    lfs f4, 0x98(r1)
    mr r10, r30
    lfs f5, 0x9c(r1)
    or r5, r5, r0
    lhz r7, 0x12c(r31)
    li r6, 0x1
    lfs f6, lbl_80882C5C
    lhz r9, 0xe(r31)
    lfs f7, 0x78(r1)
    lfs f8, 0x7c(r1)
    bl fn_80061824
    lwz r3, lbl_8087EEC8
    mr r4, r26
    lfs f1, 0x98(r1)
    li r5, 0x1
    lhz r6, 0x12c(r31)
    lfs f2, lbl_80882C5C
    bl fn_8006EF48
    fadds f27, f27, f1
    b lbl_fn_801F2A8C_00000B68
lbl_fn_801F2A8C_00000B1C:
    lfs f1, 0x94(r1)
    addi r5, r1, 0x60
    lfs f4, 0x98(r1)
    lfs f3, 0x9c(r1)
    lfs f2, 0xa0(r1)
    lfs f0, 0x5c(r1)
    stfs f1, 0x64(r1)
    fmuls f1, f30, f0
    lwz r3, lbl_8087F138
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    stfs f2, 0x70(r1)
    stfs f27, 0x60(r1)
    lwz r4, 0xc(r17)
    bl fn_801F10E0
    lwz r3, 0xc(r17)
    lfs f1, 0x98(r1)
    bl fn_801F1E7C
    fadds f27, f27, f1
lbl_fn_801F2A8C_00000B68:
    addi r23, r23, 0x10
    addi r21, r21, 0x1
lbl_fn_801F2A8C_00000B70:
    lwz r0, 0x34(r1)
    cmplw r21, r0
    blt lbl_fn_801F2A8C_0000089C
    lfs f2, 0x9c(r1)
    cmpwi r27, 0x0
    lfs f1, 0x130(r31)
    lfs f0, 0x94(r1)
    fadds f1, f2, f1
    fadds f0, f0, f1
    stfs f0, 0x94(r1)
    beq lbl_fn_801F2A8C_00000BF8
    beq lbl_fn_801F2A8C_00000BF8
    lwz r4, 0x30(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801F2A8C_00000BF8
    lwz r18, 0x34(r1)
    slwi r3, r18, 4
    subf r0, r18, r18
    stw r0, 0x34(r1)
    add r17, r4, r3
    b lbl_fn_801F2A8C_00000BE8
lbl_fn_801F2A8C_00000BC4:
    subic. r17, r17, 0x10
    beq lbl_fn_801F2A8C_00000BE4
    beq lbl_fn_801F2A8C_00000BE4
    lwz r0, 0x0(r17)
    srwi. r0, r0, 31
    beq lbl_fn_801F2A8C_00000BE4
    lwz r3, 0x8(r17)
    bl dtor_80084684
lbl_fn_801F2A8C_00000BE4:
    subi r18, r18, 0x1
lbl_fn_801F2A8C_00000BE8:
    cmpwi r18, 0x0
    bne lbl_fn_801F2A8C_00000BC4
    lwz r3, 0x30(r1)
    bl dtor_80084684
lbl_fn_801F2A8C_00000BF8:
    addi r24, r24, 0xc
    addi r22, r22, 0x1
lbl_fn_801F2A8C_00000C00:
    lwz r0, 0x4(r20)
    cmplw r22, r0
    blt lbl_fn_801F2A8C_000007DC
lbl_fn_801F2A8C_00000C0C:
    addi r11, r1, 0xf0
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    psq_l f29, 0x118(r1), 0, 0
    lfd f29, 0x110(r1)
    psq_l f28, 0x108(r1), 0, 0
    lfd f28, 0x100(r1)
    psq_l f27, 0xf8(r1), 0, 0
    lfd f27, 0xf0(r1)
    bl _restgpr_17
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_801F33A8(void)
{
    nofralloc
    lis r6, lbl_807C7F74@ha
    li r0, 0x0
    addi r3, r6, lbl_807C7F74@l
    lis r4, fn_801F33D4@ha
    lis r5, lbl_807C7F68@ha
    stw r0, lbl_807C7F74@l(r6)
    addi r4, r4, fn_801F33D4@l
    stw r0, 0x4(r3)
    addi r5, r5, lbl_807C7F68@l
    stw r0, 0x8(r3)
    b __register_global_object
}

asm void fn_801F33D4(void)
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
    beq lbl_fn_801F33D4_00000D10
    beq lbl_fn_801F33D4_00000D00
    beq lbl_fn_801F33D4_00000D00
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801F33D4_00000D00
    lwz r30, 0x4(r3)
    mulli r4, r30, 0xc
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_801F33D4_00000CF0
lbl_fn_801F33D4_00000CD0:
    subic. r31, r31, 0xc
    beq lbl_fn_801F33D4_00000CEC
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_801F33D4_00000CEC
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_801F33D4_00000CEC:
    subi r30, r30, 0x1
lbl_fn_801F33D4_00000CF0:
    cmpwi r30, 0x0
    bne lbl_fn_801F33D4_00000CD0
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_801F33D4_00000D00:
    cmpwi r29, 0x0
    ble lbl_fn_801F33D4_00000D10
    mr r3, r28
    bl dtor_80084684
lbl_fn_801F33D4_00000D10:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F3490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    addi r30, r3, 0xc
    stw r29, 0x14(r1)
    mr r29, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    stw r31, 0x14(r29)
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F34F8(void)
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
    beq lbl_fn_801F34F8_00000E38
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801F34F8_00000DD4
    bl fn_80084C24
lbl_fn_801F34F8_00000DD4:
    lwz r3, 0x14(r29)
    li r31, 0x0
    stw r31, 0x4(r29)
    cmpwi r3, 0x0
    stw r31, 0x0(r29)
    beq lbl_fn_801F34F8_00000DF4
    bl fn_80084C24
    stw r31, 0x14(r29)
lbl_fn_801F34F8_00000DF4:
    addic. r3, r29, 0xc
    beq lbl_fn_801F34F8_00000E04
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_801F34F8_00000E04:
    cmpwi r29, 0x0
    beq lbl_fn_801F34F8_00000E28
    lwz r3, 0x4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801F34F8_00000E1C
    bl fn_80084C24
lbl_fn_801F34F8_00000E1C:
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x0(r29)
lbl_fn_801F34F8_00000E28:
    cmpwi r30, 0x0
    ble lbl_fn_801F34F8_00000E38
    mr r3, r29
    bl dtor_80084684
lbl_fn_801F34F8_00000E38:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F35B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801F35B4_00000EA4
    addi r3, r3, 0xc
    bl fn_80473FCC
    addi r3, r31, 0xc
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_801F35B4_00000E98
    li r0, 0x2
    stw r0, 0x8(r31)
    b lbl_fn_801F35B4_00000EBC
lbl_fn_801F35B4_00000E98:
    li r0, 0x0
    stw r0, 0x8(r31)
    b lbl_fn_801F35B4_00000EBC
lbl_fn_801F35B4_00000EA4:
    li r0, 0x1
    stw r0, 0x8(r3)
    lwzu r12, 0xc(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801F35B4_00000EBC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F362C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_801F362C_00000F50
    addi r3, r3, 0xc
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_801F362C_00000F0C
    li r3, 0x1
    b lbl_fn_801F362C_00000F54
lbl_fn_801F362C_00000F0C:
    addi r3, r30, 0xc
    bl fn_80470580
    cmpwi r3, 0x0
    beq lbl_fn_801F362C_00000F40
    addi r3, r30, 0xc
    bl fn_8047059C
    srwi r31, r3, 1
    addi r3, r30, 0xc
    bl fn_80470580
    mr r4, r3
    mr r3, r30
    subi r5, r31, 0x1
    bl fn_801F36C8
lbl_fn_801F362C_00000F40:
    addi r3, r30, 0xc
    bl fn_80473F88
    li r0, 0x2
    stw r0, 0x8(r30)
lbl_fn_801F362C_00000F50:
    li r3, 0x0
lbl_fn_801F362C_00000F54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F36C8(void)
{
    nofralloc
    stwu r1, -0xd00(r1)
    mflr r0
    stw r0, 0xd04(r1)
    stmw r16, 0xcc0(r1)
    mr r29, r3
    mr r18, r4
    mr r17, r5
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801F36C8_00000F9C
    mr r3, r0
    bl fn_80084C24
lbl_fn_801F36C8_00000F9C:
    lwz r3, 0x14(r29)
    li r16, 0x0
    stw r16, 0x4(r29)
    cmpwi r3, 0x0
    stw r16, 0x0(r29)
    beq lbl_fn_801F36C8_00000FBC
    bl fn_80084C24
    stw r16, 0x14(r29)
lbl_fn_801F36C8_00000FBC:
    lis r6, lbl_8077A090@ha
    li r0, 0x0
    addi r6, r6, lbl_8077A090@l
    stw r0, 0x40(r1)
    addi r16, r1, 0x60
    addi r3, r1, 0x70
    stw r0, 0x44(r1)
    li r30, 0x0
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x48(r1)
    stw r6, 0x60(r1)
    stw r0, 0x64(r1)
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    stw r0, 0xcb0(r1)
    bl memset
    addi r3, r1, 0xc70
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r17, 0x0
    mr r5, r17
    beq lbl_fn_801F36C8_00001020
    subi r5, r17, 0x1
lbl_fn_801F36C8_00001020:
    cmpwi r17, 0x0
    mr r3, r16
    beq lbl_fn_801F36C8_00001034
    addi r4, r18, 0x2
    b lbl_fn_801F36C8_00001038
lbl_fn_801F36C8_00001034:
    mr r4, r18
lbl_fn_801F36C8_00001038:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r3, lbl_8077A070@ha
    lis r4, lbl_8077A0A8@ha
    addi r3, r3, lbl_8077A070@l
    stw r3, 0x60(r1)
    mr r3, r16
    addi r4, r4, lbl_8077A0A8@l
    bl fn_8005B9AC
    addi r3, r1, 0x60
    bl fn_8005B8F8
    addi r3, r1, 0x60
    bl fn_8005B8F8
    lis r3, __files@ha
    addi r21, r1, 0x48
    addi r31, r1, 0x4c
    addi r28, r1, 0x34
    addi r20, r3, __files@l
    li r27, 0x0
    lis r24, 0xcccd
    lis r19, lbl_8073E380@ha
    lis r18, 0x1000
    lis r23, 0x555
    lis r25, 0xaab
    lis r26, lbl_80782BB0@ha
lbl_fn_801F36C8_000010A4:
    addi r3, r1, 0x60
    bl fn_8005B710
    lhz r0, 0x0(r3)
    cmplwi r0, 0x23
    beq lbl_fn_801F36C8_00001520
    cmpwi r0, 0x0
    beq lbl_fn_801F36C8_00001520
    cmplwi r0, 0x3b
    beq lbl_fn_801F36C8_00001520
    stw r27, 0x30(r1)
    stw r27, 0x34(r1)
    stw r27, 0x38(r1)
    stw r27, 0x3c(r1)
    bl fn_800DC1DC
    stw r3, 0x30(r1)
    addi r3, r1, 0x60
    bl fn_8005B710
    lwz r0, 0x34(r1)
    mr r22, r3
    srwi. r0, r0, 31
    bne lbl_fn_801F36C8_00001104
    lbz r0, 0x34(r1)
    clrlwi r16, r0, 25
    b lbl_fn_801F36C8_00001108
lbl_fn_801F36C8_00001104:
    lwz r16, 0x38(r1)
lbl_fn_801F36C8_00001108:
    lbz r0, 0x1c(r1)
    mr r3, r22
    stb r0, 0x18(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r16
    mr r6, r22
    addi r3, r1, 0x34
    addi r8, r1, 0x18
    add r7, r22, r0
    li r4, 0x0
    bl fn_8006F72C
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F36C8_00001150
    lbz r0, 0x34(r1)
    clrlwi r0, r0, 25
    b lbl_fn_801F36C8_00001154
lbl_fn_801F36C8_00001150:
    lwz r0, 0x38(r1)
lbl_fn_801F36C8_00001154:
    lwz r5, 0x44(r1)
    add r4, r0, r30
    lwz r3, 0x48(r1)
    addi r30, r4, 0x1
    cmplw r5, r3
    bge lbl_fn_801F36C8_000011FC
    lwz r3, 0x40(r1)
    slwi r0, r5, 4
    add. r17, r3, r0
    beq lbl_fn_801F36C8_000011EC
    lwz r0, 0x30(r1)
    stw r0, 0x0(r17)
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F36C8_000011A8
    lwz r0, 0x38(r1)
    stw r3, 0x4(r17)
    stw r0, 0x8(r17)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r17)
    b lbl_fn_801F36C8_000011EC
lbl_fn_801F36C8_000011A8:
    stw r27, 0x4(r17)
    addi r3, r17, 0x4
    stw r27, 0x8(r17)
    stw r27, 0xc(r17)
    lwz r4, 0x38(r1)
    bl fn_800DBF68
    lwz r0, 0x38(r1)
    addi r3, r17, 0x4
    lbz r4, 0x8(r1)
    addi r8, r1, 0xc
    stb r4, 0xc(r1)
    slwi r0, r0, 1
    lwz r6, 0x3c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F36C8_000011EC:
    lwz r3, 0x44(r1)
    addi r0, r3, 0x1
    stw r0, 0x44(r1)
    b lbl_fn_801F36C8_00001504
lbl_fn_801F36C8_000011FC:
    subi r0, r18, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_801F36C8_00001220
    addi r4, r19, lbl_8073E380@l
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F36C8_00001220:
    lwz r3, 0x44(r1)
    subi r0, r18, 0x1
    lwz r22, 0x48(r1)
    addi r3, r3, 0x1
    stw r27, 0x4c(r1)
    subf r3, r22, r3
    subf r0, r22, r0
    cmplw r3, r0
    stw r27, 0x50(r1)
    stw r27, 0x54(r1)
    stw r21, 0x58(r1)
    stw r27, 0x5c(r1)
    stw r3, 0x28(r1)
    ble lbl_fn_801F36C8_0000126C
    addi r4, r19, lbl_8073E380@l
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F36C8_0000126C:
    addi r0, r23, 0x5555
    cmplw r22, r0
    bge lbl_fn_801F36C8_000012B4
    addi r4, r22, 0x1
    subi r5, r24, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x28(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_801F36C8_000012A8
    addi r3, r1, 0x28
lbl_fn_801F36C8_000012A8:
    lwz r0, 0x0(r3)
    add r22, r22, r0
    b lbl_fn_801F36C8_000012F0
lbl_fn_801F36C8_000012B4:
    subi r0, r25, 0x5556
    cmplw r22, r0
    bge lbl_fn_801F36C8_000012EC
    addi r3, r22, 0x1
    lwz r0, 0x28(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_801F36C8_000012E0
    addi r3, r1, 0x28
lbl_fn_801F36C8_000012E0:
    lwz r0, 0x0(r3)
    add r22, r22, r0
    b lbl_fn_801F36C8_000012F0
lbl_fn_801F36C8_000012EC:
    subi r22, r18, 0x1
lbl_fn_801F36C8_000012F0:
    subi r0, r18, 0x1
    cmplw r22, r0
    ble lbl_fn_801F36C8_00001310
    addi r4, r19, lbl_8073E380@l
    addi r3, r20, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F36C8_00001310:
    slwi r3, r22, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r17, r3
    bne lbl_fn_801F36C8_00001338
    addi r3, r20, 0xa0
    addi r4, r26, lbl_80782BB0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F36C8_00001338:
    lwz r5, 0x44(r1)
    lwz r0, 0x50(r1)
    slwi r4, r5, 4
    stw r17, 0x4c(r1)
    slwi r3, r0, 4
    add r0, r17, r4
    stw r22, 0x54(r1)
    add. r17, r3, r0
    stw r5, 0x5c(r1)
    beq lbl_fn_801F36C8_000013D0
    lwz r0, 0x30(r1)
    stw r0, 0x0(r17)
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_801F36C8_0000138C
    lwz r0, 0x38(r1)
    stw r3, 0x4(r17)
    stw r0, 0x8(r17)
    lwz r0, 0x3c(r1)
    stw r0, 0xc(r17)
    b lbl_fn_801F36C8_000013D0
lbl_fn_801F36C8_0000138C:
    stw r27, 0x4(r17)
    addi r3, r17, 0x4
    stw r27, 0x8(r17)
    stw r27, 0xc(r17)
    lwz r4, 0x38(r1)
    bl fn_800DBF68
    lwz r0, 0x38(r1)
    addi r3, r17, 0x4
    lbz r4, 0x14(r1)
    addi r8, r1, 0x10
    stb r4, 0x10(r1)
    slwi r0, r0, 1
    lwz r6, 0x3c(r1)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F36C8_000013D0:
    lwz r0, 0x44(r1)
    lwz r16, 0x40(r1)
    slwi r0, r0, 4
    lwz r4, 0x50(r1)
    add r3, r16, r0
    lwz r0, 0x5c(r1)
    subf r3, r16, r3
    addi r5, r4, 0x1
    srawi r4, r3, 4
    lwz r3, 0x4c(r1)
    addze r17, r4
    stw r5, 0x50(r1)
    subf r0, r17, r0
    mr r4, r16
    slwi r22, r17, 4
    stw r0, 0x5c(r1)
    slwi r0, r0, 4
    mr r5, r22
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r22
    li r4, 0x0
    bl memset
    lwz r0, 0x5c(r1)
    lwz r4, 0x50(r1)
    lwz r7, 0x40(r1)
    slwi r3, r0, 4
    lwz r8, 0x44(r1)
    add r5, r4, r17
    lwz r4, 0x4c(r1)
    add r22, r7, r3
    slwi r0, r8, 4
    lwz r6, 0x48(r1)
    lwz r3, 0x54(r1)
    add r17, r22, r0
    stw r3, 0x48(r1)
    stw r6, 0x54(r1)
    stw r4, 0x40(r1)
    stw r7, 0x4c(r1)
    stw r5, 0x44(r1)
    stw r8, 0x50(r1)
    b lbl_fn_801F36C8_000014A0
lbl_fn_801F36C8_0000147C:
    subic. r17, r17, 0x10
    beq lbl_fn_801F36C8_000014A0
    addic. r0, r17, 0x4
    beq lbl_fn_801F36C8_000014A0
    lwz r0, 0x4(r17)
    srwi. r0, r0, 31
    beq lbl_fn_801F36C8_000014A0
    lwz r3, 0xc(r17)
    bl dtor_80084684
lbl_fn_801F36C8_000014A0:
    cmplw r17, r22
    bgt lbl_fn_801F36C8_0000147C
    cmpwi r31, 0x0
    stw r27, 0x50(r1)
    beq lbl_fn_801F36C8_00001504
    lwz r22, 0x4c(r1)
    cmpwi r22, 0x0
    beq lbl_fn_801F36C8_00001504
    stw r27, 0x50(r1)
    li r17, 0x0
    b lbl_fn_801F36C8_000014F4
lbl_fn_801F36C8_000014CC:
    subic. r22, r22, 0x10
    beq lbl_fn_801F36C8_000014F0
    addic. r0, r22, 0x4
    beq lbl_fn_801F36C8_000014F0
    lwz r0, 0x4(r22)
    srwi. r0, r0, 31
    beq lbl_fn_801F36C8_000014F0
    lwz r3, 0xc(r22)
    bl dtor_80084684
lbl_fn_801F36C8_000014F0:
    subi r17, r17, 0x1
lbl_fn_801F36C8_000014F4:
    cmpwi r17, 0x0
    bne lbl_fn_801F36C8_000014CC
    lwz r3, 0x4c(r1)
    bl dtor_80084684
lbl_fn_801F36C8_00001504:
    cmpwi r28, 0x0
    beq lbl_fn_801F36C8_00001520
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F36C8_00001520
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_801F36C8_00001520:
    addi r3, r1, 0x60
    bl fn_8005B8F8
    cmpwi r3, 0x0
    bne lbl_fn_801F36C8_000010A4
    lwz r3, 0x4(r29)
    lwz r16, 0x44(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801F36C8_00001544
    bl fn_80084C24
lbl_fn_801F36C8_00001544:
    cmpwi r16, 0x0
    stw r16, 0x0(r29)
    beq lbl_fn_801F36C8_00001570
    slwi r3, r16, 3
    li r4, 0x8
    la r5, lbl_8087DAF4
    la r6, lbl_8087DAF0
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x4(r29)
    b lbl_fn_801F36C8_00001578
lbl_fn_801F36C8_00001570:
    li r0, 0x0
    stw r0, 0x4(r29)
lbl_fn_801F36C8_00001578:
    lis r5, lbl_8073E380@ha
    slwi r3, r30, 1
    addi r5, r5, lbl_8073E380@l
    li r4, 0x8
    addi r5, r5, 0x14
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, 0x14(r29)
    li r16, 0x0
    li r19, 0x0
    li r17, 0x0
    li r18, 0x0
    b lbl_fn_801F36C8_0000163C
lbl_fn_801F36C8_000015B0:
    lwz r4, 0x40(r1)
    slwi r5, r16, 1
    lwz r3, 0x4(r29)
    lwzx r0, r4, r17
    stwx r0, r3, r18
    lwz r0, 0x4(r29)
    lwz r4, 0x14(r29)
    add r3, r0, r18
    add r0, r4, r5
    stw r0, 0x4(r3)
    lwz r0, 0x40(r1)
    lwz r3, 0x14(r29)
    add r4, r0, r17
    lwz r0, 0x4(r4)
    add r3, r3, r5
    srwi. r0, r0, 31
    bne lbl_fn_801F36C8_000015FC
    addi r4, r4, 0x6
    b lbl_fn_801F36C8_00001600
lbl_fn_801F36C8_000015FC:
    lwz r4, 0xc(r4)
lbl_fn_801F36C8_00001600:
    bl fn_80686A64
    lwz r0, 0x40(r1)
    add r3, r0, r17
    lwz r0, 0x4(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801F36C8_00001624
    lbz r0, 0x4(r3)
    clrlwi r0, r0, 25
    b lbl_fn_801F36C8_00001628
lbl_fn_801F36C8_00001624:
    lwz r0, 0x8(r3)
lbl_fn_801F36C8_00001628:
    add r3, r0, r16
    addi r17, r17, 0x10
    addi r16, r3, 0x1
    addi r18, r18, 0x8
    addi r19, r19, 0x1
lbl_fn_801F36C8_0000163C:
    lwz r0, 0x0(r29)
    cmplw r19, r0
    blt lbl_fn_801F36C8_000015B0
    addic. r0, r1, 0x40
    beq lbl_fn_801F36C8_000016B0
    beq lbl_fn_801F36C8_000016B0
    lwz r4, 0x40(r1)
    cmpwi r4, 0x0
    beq lbl_fn_801F36C8_000016B0
    lwz r17, 0x44(r1)
    slwi r3, r17, 4
    subf r0, r17, r17
    stw r0, 0x44(r1)
    add r16, r4, r3
    b lbl_fn_801F36C8_000016A0
lbl_fn_801F36C8_00001678:
    subic. r16, r16, 0x10
    beq lbl_fn_801F36C8_0000169C
    addic. r0, r16, 0x4
    beq lbl_fn_801F36C8_0000169C
    lwz r0, 0x4(r16)
    srwi. r0, r0, 31
    beq lbl_fn_801F36C8_0000169C
    lwz r3, 0xc(r16)
    bl dtor_80084684
lbl_fn_801F36C8_0000169C:
    subi r17, r17, 0x1
lbl_fn_801F36C8_000016A0:
    cmpwi r17, 0x0
    bne lbl_fn_801F36C8_00001678
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_801F36C8_000016B0:
    lmw r16, 0xcc0(r1)
    lwz r0, 0xd04(r1)
    mtlr r0
    addi r1, r1, 0xd00
    blr
}

asm void fn_801F3E20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r8, 0x0
    li r6, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r0, 0x0(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_801F3E20_00001778
lbl_fn_801F3E20_000016F8:
    lwz r7, 0x4(r3)
    lwzx r0, r7, r6
    cmplw r5, r0
    bne lbl_fn_801F3E20_0000176C
    lwz r0, 0x0(r4)
    slwi r3, r8, 3
    add r3, r7, r3
    srwi. r0, r0, 31
    lwz r31, 0x4(r3)
    bne lbl_fn_801F3E20_0000172C
    lbz r0, 0x0(r4)
    clrlwi r30, r0, 25
    b lbl_fn_801F3E20_00001730
lbl_fn_801F3E20_0000172C:
    lwz r30, 0x4(r4)
lbl_fn_801F3E20_00001730:
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    bl fn_80686A48
    mr r0, r3
    mr r3, r29
    slwi r0, r0, 1
    mr r5, r30
    mr r6, r31
    addi r8, r1, 0x8
    add r7, r31, r0
    li r4, 0x0
    bl fn_8006F72C
    li r3, 0x1
    b lbl_fn_801F3E20_0000177C
lbl_fn_801F3E20_0000176C:
    addi r6, r6, 0x8
    addi r8, r8, 0x1
    bdnz lbl_fn_801F3E20_000016F8
lbl_fn_801F3E20_00001778:
    li r3, 0x0
lbl_fn_801F3E20_0000177C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F3EF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_801EC158
    lfs f0, lbl_80882C78
    lis r3, lbl_80782BD0@ha
    li r6, 0x0
    li r0, 0x5
    addi r3, r3, lbl_80782BD0@l
    stw r3, 0x0(r31)
    lfs f1, lbl_80882C7C
    addi r3, r31, 0x30
    stw r6, 0x12c(r31)
    li r4, 0x0
    li r5, 0x1
    stw r6, 0x130(r31)
    sth r0, 0x8(r31)
    stfs f0, 0x58(r31)
    bl fn_801F04FC
    lfs f1, lbl_80882C7C
    addi r3, r31, 0x38
    li r4, 0x0
    li r5, 0x1
    bl fn_801F04FC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F3F74(void)
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
    beq lbl_fn_801F3F74_0000187C
    addic. r0, r3, 0x12c
    beq lbl_fn_801F3F74_00001860
    lwz r3, 0x130(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801F3F74_00001854
    bl fn_80084C24
lbl_fn_801F3F74_00001854:
    li r0, 0x0
    stw r0, 0x130(r30)
    stw r0, 0x12c(r30)
lbl_fn_801F3F74_00001860:
    mr r3, r30
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801F3F74_0000187C
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F3F74_0000187C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F3FF4(void)
{
    nofralloc
    blr
}

asm void fn_801F3FF8(void)
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
    beq lbl_fn_801F3FF8_00001900
    lis r5, lbl_8073E420@ha
    li r3, 0x110
    addi r5, r5, lbl_8073E420@l
    li r4, 0x8
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F3FF8_00001904
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_801F407C
    b lbl_fn_801F3FF8_00001904
lbl_fn_801F3FF8_00001900:
    li r3, 0x0
lbl_fn_801F3FF8_00001904:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F407C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_27
    mr r31, r3
    mr r28, r5
    mr r27, r6
    bl fn_800D1D3C
    lis r4, lbl_80782C08@ha
    addi r3, r31, 0x48
    addi r4, r4, lbl_80782C08@l
    stw r4, 0x0(r31)
    bl fn_801EEE54
    addi r30, r31, 0xf0
    mr r3, r30
    bl fn_80473E74
    lwz r0, 0xfc(r31)
    rlwimi r0, r27, 31, 0, 0
    lfs f1, lbl_80882C80
    lis r3, lbl_8078FBB0@ha
    lfs f0, lbl_80882C84
    oris r0, r0, 0x7000
    rlwinm r4, r0, 0, 6, 3
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x0(r30)
    li r5, 0x1
    li r0, 0x12
    li r30, 0x0
    stw r5, 0xf8(r31)
    mr r3, r28
    addi r29, r1, 0x24
    stw r4, 0xfc(r31)
    stfs f1, 0x100(r31)
    stfs f0, 0x104(r31)
    stw r0, 0x108(r31)
    stw r30, 0x24(r1)
    stw r30, 0x28(r1)
    stw r30, 0x2c(r1)
    bl strlen
    mr r27, r3
    mr r3, r29
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r29
    stb r0, 0x10(r1)
    mr r6, r28
    add r7, r28, r27
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_8073E420@ha
    stw r30, 0x18(r1)
    addi r3, r3, lbl_8073E420@l
    addi r27, r1, 0x18
    addi r28, r3, 0x1
    stw r30, 0x1c(r1)
    mr r3, r28
    stw r30, 0x20(r1)
    bl strlen
    mr r30, r3
    mr r3, r27
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r27
    stb r0, 0x8(r1)
    mr r6, r28
    add r7, r28, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r3, r29
    mr r4, r27
    bl fn_8006AD24
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F407C_00001A6C
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_801F407C_00001A6C:
    lwz r0, 0xfc(r31)
    addi r3, r31, 0xf0
    oris r0, r0, 0x400
    stw r0, 0xfc(r31)
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F407C_00001A90
    addi r4, r1, 0x25
    b lbl_fn_801F407C_00001A94
lbl_fn_801F407C_00001A90:
    lwz r4, 0x2c(r1)
lbl_fn_801F407C_00001A94:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F407C_00001AB8
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F407C_00001AB8:
    addi r11, r1, 0x50
    mr r3, r31
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}
