#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8005B9CC(void);
extern void fn_8006AC08(void);
extern void fn_80079044(void);
extern void fn_800791B4(void);
extern void fn_80079210(void);
extern void fn_800844D8(void);
extern void fn_800BB6C0(void);
extern void fn_800BB994(void);
extern void fn_800BBBB0(void);
extern void fn_800BBD90(void);
extern void fn_800BBFE8(void);
extern void fn_800C16B4(void);
extern void fn_800C2108(void);
extern void fn_800C2448(void);
extern void fn_800C2634(void);
extern void fn_800C289C(void);
extern void fn_800C2B24(void);
extern void fn_800C2C20(void);
extern void fn_800D3FA4(void);
extern void fn_800D5908(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_80494354(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_8067E23C(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756700[];
extern u8 lbl_8077927C[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_80887068;
extern u32 lbl_8088706C;
extern u32 lbl_80887070;
extern u32 lbl_80887074;
extern u32 lbl_80887078;
extern u32 lbl_8088707C;
extern u32 lbl_80887080;
extern u32 lbl_80887084;
extern u32 lbl_80887088;
extern u32 lbl_8088708C;
extern u32 lbl_80887090;
extern u32 lbl_80887094;
extern u32 lbl_80887098;
extern u32 lbl_8088709C;
extern u32 lbl_808870A0;
extern u32 lbl_808870A4;

/* Function declarations */
void fn_804923AC(void);
void fn_804923B4(void);
void fn_8049248C(void);

asm void fn_804923AC(void)
{
    nofralloc
    lwz r3, 0x2fc(r3)
    blr
}

asm void fn_804923B4(void)
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
    lwz r0, 0x64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804923B4_00000094
    li r30, 0x1
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_804923B4_00000068
lbl_fn_804923B4_00000044:
    lwz r3, 0x58(r28)
    lwzx r3, r3, r31
    addi r3, r3, 0x4c
    bl fn_800C2108
    cmpwi r3, 0x0
    beq lbl_fn_804923B4_00000060
    li r30, 0x0
lbl_fn_804923B4_00000060:
    addi r29, r29, 0x1
    addi r31, r31, 0x4
lbl_fn_804923B4_00000068:
    lwz r0, 0x5c(r28)
    cmplw r29, r0
    blt lbl_fn_804923B4_00000044
    cmpwi r30, 0x0
    beq lbl_fn_804923B4_000000BC
    mr r3, r28
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804923B4_000000BC
    li r3, 0x1
    b lbl_fn_804923B4_000000C0
lbl_fn_804923B4_00000094:
    addi r3, r3, 0x50
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_804923B4_000000BC
    mr r3, r28
    bl fn_80494354
    addi r3, r28, 0x50
    bl fn_80473F88
    li r0, 0x1
    stw r0, 0x64(r28)
lbl_fn_804923B4_000000BC:
    li r3, 0x0
lbl_fn_804923B4_000000C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049248C(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    addi r11, r1, 0x590
    stfd f31, 0x640(r1)
    psq_st f31, 0x648(r1), 0, 0
    stfd f30, 0x630(r1)
    psq_st f30, 0x638(r1), 0, 0
    stfd f29, 0x620(r1)
    psq_st f29, 0x628(r1), 0, 0
    stfd f28, 0x610(r1)
    psq_st f28, 0x618(r1), 0, 0
    stfd f27, 0x600(r1)
    psq_st f27, 0x608(r1), 0, 0
    stfd f26, 0x5f0(r1)
    psq_st f26, 0x5f8(r1), 0, 0
    stfd f25, 0x5e0(r1)
    psq_st f25, 0x5e8(r1), 0, 0
    stfd f24, 0x5d0(r1)
    psq_st f24, 0x5d8(r1), 0, 0
    stfd f23, 0x5c0(r1)
    psq_st f23, 0x5c8(r1), 0, 0
    stfd f22, 0x5b0(r1)
    psq_st f22, 0x5b8(r1), 0, 0
    stfd f21, 0x5a0(r1)
    psq_st f21, 0x5a8(r1), 0, 0
    stfd f20, 0x590(r1)
    psq_st f20, 0x598(r1), 0, 0
    bl _savegpr_14
    lis r24, lbl_80756700@ha
    addi r14, r5, 0x10
    addi r25, r24, lbl_80756700@l
    mr r15, r4
    mr r16, r5
    mr r3, r14
    addi r4, r25, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000001C0
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0xc(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x10(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x14(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x18(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_000001C0:
    mr r3, r14
    addi r4, r25, 0xf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000470
    mr r3, r16
    bl fn_8005B9CC
    mr r14, r3
    addi r4, r25, 0x1b
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000290
    mr r3, r14
    bl fn_800DC288
    stfs f1, 0x98(r1)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x9c(r1)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x90(r1)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f5, f1
    lfs f6, 0x9c(r1)
    lfs f4, 0x98(r1)
    addi r4, r1, 0x80
    lfs f3, 0x90(r1)
    addi r3, r1, 0xa8
    fadds f7, f6, f5
    lfs f0, lbl_80887068
    fadds f8, f4, f3
    stfs f1, 0x94(r1)
    fsubs f6, f5, f6
    addi r6, r1, 0x70
    fmuls f5, f7, f0
    stfs f6, 0x74(r1)
    fmuls f0, f8, f0
    addi r5, r1, 0xa0
    fsubs f3, f3, f4
    stfs f5, 0x84(r1)
    stfs f0, 0x80(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x70(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f8, 0x78(r1)
    stfs f7, 0x7c(r1)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_8049248C_00000290:
    mr r3, r16
    bl fn_8005B9CC
    li r0, 0x0
    stw r0, 0x1f8(r1)
    mr r17, r3
    addi r14, r1, 0x1f8
    stw r0, 0x1fc(r1)
    stw r0, 0x200(r1)
    bl strlen
    mr r16, r3
    mr r3, r14
    mr r4, r16
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r3, r14
    stb r0, 0x10(r1)
    mr r6, r17
    add r7, r17, r16
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r14
    addi r3, r1, 0x1b0
    bl fn_8006AC08
    lis r16, lbl_80756700@ha
    addi r16, r16, lbl_80756700@l
    mr r3, r16
    bl strlen
    lwz r0, 0x1b0(r1)
    mr r14, r3
    stw r3, 0x50(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8049248C_00000324
    lbz r0, 0x1b0(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8049248C_00000328
lbl_fn_8049248C_00000324:
    lwz r4, 0x1b4(r1)
lbl_fn_8049248C_00000328:
    lwz r0, 0x1b0(r1)
    stw r4, 0x54(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8049248C_00000348
    lbz r0, 0x1b0(r1)
    addi r3, r1, 0x1b1
    clrlwi r0, r0, 25
    b lbl_fn_8049248C_00000350
lbl_fn_8049248C_00000348:
    lwz r3, 0x1b8(r1)
    lwz r0, 0x1b4(r1)
lbl_fn_8049248C_00000350:
    cmplw r4, r0
    stw r0, 0x4c(r1)
    addi r4, r1, 0x4c
    bge lbl_fn_8049248C_00000364
    addi r4, r1, 0x54
lbl_fn_8049248C_00000364:
    lwz r0, 0x0(r4)
    mr r4, r16
    stw r0, 0x48(r1)
    addi r5, r1, 0x48
    cmplw r14, r0
    bge lbl_fn_8049248C_00000380
    addi r5, r1, 0x50
lbl_fn_8049248C_00000380:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000003B4
    lwz r0, 0x48(r1)
    cmplw r0, r14
    bge lbl_fn_8049248C_000003A4
    li r3, -0x1
    b lbl_fn_8049248C_000003B4
lbl_fn_8049248C_000003A4:
    bne lbl_fn_8049248C_000003B0
    li r3, 0x0
    b lbl_fn_8049248C_000003B4
lbl_fn_8049248C_000003B0:
    li r3, 0x1
lbl_fn_8049248C_000003B4:
    lwz r0, 0x1b0(r1)
    cntlzw r3, r3
    srwi r14, r3, 5
    srwi. r0, r0, 31
    beq lbl_fn_8049248C_000003D0
    lwz r3, 0x1b8(r1)
    bl dtor_80084684
lbl_fn_8049248C_000003D0:
    cmpwi r14, 0x0
    beq lbl_fn_8049248C_00000430
    lwz r0, 0x1f8(r1)
    lis r3, lbl_80756700@ha
    addi r3, r3, lbl_80756700@l
    srwi. r0, r0, 31
    addi r14, r3, 0x20
    bne lbl_fn_8049248C_000003FC
    lbz r0, 0x1f8(r1)
    clrlwi r16, r0, 25
    b lbl_fn_8049248C_00000400
lbl_fn_8049248C_000003FC:
    lwz r16, 0x1fc(r1)
lbl_fn_8049248C_00000400:
    lbz r0, 0xc(r1)
    mr r3, r14
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r4, r16
    mr r6, r14
    addi r3, r1, 0x1f8
    add r7, r14, r0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_80013F78
lbl_fn_8049248C_00000430:
    lwz r0, 0x1f8(r1)
    mr r3, r15
    addi r4, r1, 0xa8
    addi r5, r1, 0xa0
    srwi. r0, r0, 31
    bne lbl_fn_8049248C_00000450
    addi r6, r1, 0x1f9
    b lbl_fn_8049248C_00000454
lbl_fn_8049248C_00000450:
    lwz r6, 0x200(r1)
lbl_fn_8049248C_00000454:
    bl fn_800C2B24
    lwz r0, 0x1f8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049248C_00001F30
    lwz r3, 0x200(r1)
    bl dtor_80084684
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000470:
    mr r3, r14
    addi r4, r25, 0x29
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000C38
    lfs f0, lbl_8088706C
    mr r3, r16
    lfs f3, lbl_80887068
    stfs f3, 0x88(r1)
    stfs f3, 0x8c(r1)
    stfs f0, 0x1ec(r1)
    stfs f0, 0x1f0(r1)
    stfs f0, 0x1f4(r1)
    bl fn_8005B9CC
    mr r14, r3
    addi r4, r25, 0x32
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000514
    lwz r3, lbl_8087EFB4
    bl fn_800C16B4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_000004E8
    lwz r0, 0x74(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_000004E0
    b lbl_fn_8049248C_000004EC
lbl_fn_8049248C_000004E0:
    addi r0, r3, 0x78
    b lbl_fn_8049248C_000004EC
lbl_fn_8049248C_000004E8:
    li r0, 0x0
lbl_fn_8049248C_000004EC:
    cmpwi r0, 0x0
    stw r0, 0x74(r15)
    li r3, 0x0
    bne lbl_fn_8049248C_00000508
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_0000050C
lbl_fn_8049248C_00000508:
    li r3, 0x1
lbl_fn_8049248C_0000050C:
    stw r3, 0x70(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000514:
    mr r3, r14
    addi r4, r25, 0x39
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00001F30
    li r26, 0x1
    stw r26, 0x70(r15)
    mr r3, r14
    bl fn_800DC288
    fmr f28, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f27, f1
    mr r3, r16
    bl fn_8005B9CC
    mr r4, r3
    addi r3, r1, 0x440
    bl strcpy
    mr r3, r16
    bl fn_8005B9CC
    lfs f24, lbl_80887070
    mr r17, r3
    lfs f23, lbl_8088706C
    addi r23, r1, 0x198
    addi r22, r1, 0x18c
    addi r19, r1, 0x180
    addi r20, r1, 0x68
    addi r21, r1, 0x88
    li r14, 0x5
    li r30, 0x4
    li r29, 0x3
    li r28, 0x2
    li r27, 0x0
    b lbl_fn_8049248C_00000AC8
lbl_fn_8049248C_000005A0:
    mr r3, r17
    addi r4, r25, 0x41
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000005BC
    stw r28, 0xc8(r15)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000005BC:
    mr r3, r17
    addi r4, r25, 0x4c
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000005D8
    stw r29, 0xc8(r15)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000005D8:
    mr r3, r17
    addi r4, r25, 0x61
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000005F4
    stw r26, 0xc8(r15)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000005F4:
    mr r3, r17
    addi r4, r25, 0x6b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000638
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_0000062C
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000624
    b lbl_fn_8049248C_00000630
lbl_fn_8049248C_00000624:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000630
lbl_fn_8049248C_0000062C:
    li r3, 0x0
lbl_fn_8049248C_00000630:
    stw r27, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_00000638:
    mr r3, r17
    addi r4, r25, 0x6f
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_0000067C
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000670
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000668
    b lbl_fn_8049248C_00000674
lbl_fn_8049248C_00000668:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000674
lbl_fn_8049248C_00000670:
    li r3, 0x0
lbl_fn_8049248C_00000674:
    stw r26, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_0000067C:
    mr r3, r17
    addi r4, r25, 0x74
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000006C0
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_000006B4
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_000006AC
    b lbl_fn_8049248C_000006B8
lbl_fn_8049248C_000006AC:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_000006B8
lbl_fn_8049248C_000006B4:
    li r3, 0x0
lbl_fn_8049248C_000006B8:
    stw r28, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000006C0:
    mr r3, r17
    addi r4, r25, 0x79
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000704
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_000006F8
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_000006F0
    b lbl_fn_8049248C_000006FC
lbl_fn_8049248C_000006F0:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_000006FC
lbl_fn_8049248C_000006F8:
    li r3, 0x0
lbl_fn_8049248C_000006FC:
    stw r29, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_00000704:
    mr r3, r17
    addi r4, r25, 0x7d
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000748
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_0000073C
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000734
    b lbl_fn_8049248C_00000740
lbl_fn_8049248C_00000734:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000740
lbl_fn_8049248C_0000073C:
    li r3, 0x0
lbl_fn_8049248C_00000740:
    stw r30, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_00000748:
    mr r3, r17
    addi r4, r25, 0x85
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_0000078C
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000780
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000778
    b lbl_fn_8049248C_00000784
lbl_fn_8049248C_00000778:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000784
lbl_fn_8049248C_00000780:
    li r3, 0x0
lbl_fn_8049248C_00000784:
    stw r14, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_0000078C:
    mr r3, r17
    addi r4, r25, 0x89
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000007D4
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_000007C4
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_000007BC
    b lbl_fn_8049248C_000007C8
lbl_fn_8049248C_000007BC:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_000007C8
lbl_fn_8049248C_000007C4:
    li r3, 0x0
lbl_fn_8049248C_000007C8:
    li r0, 0x6
    stw r0, 0x0(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000007D4:
    mr r3, r17
    addi r4, r25, 0x91
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000008E0
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f26, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f25, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f22, f1
    stfs f26, 0x1a4(r1)
    addi r3, r1, 0x1a4
    stfs f25, 0x1a8(r1)
    stfs f1, 0x1ac(r1)
    bl fn_805F9920
    fcmpo cr0, f1, f24
    ble lbl_fn_8049248C_00000898
    stfs f26, 0x18c(r1)
    frsp f2, f22
    mr r3, r23
    mr r4, r23
    stfs f25, 0x190(r1)
    psq_l f1, 0x0(r22), 0, 0
    stfs f22, 0x194(r1)
    psq_st f1, 0x0(r23), 0, 0
    stfs f2, 0x1a0(r1)
    bl fn_805F98D0
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000880
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000878
    b lbl_fn_8049248C_00000884
lbl_fn_8049248C_00000878:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000884
lbl_fn_8049248C_00000880:
    li r3, 0x0
lbl_fn_8049248C_00000884:
    lfs f2, 0x1a0(r1)
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    stfs f2, 0x2c(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_00000898:
    lwz r0, 0x70(r15)
    stfs f23, 0x180(r1)
    cmpwi r0, 0x0
    stfs f23, 0x184(r1)
    stfs f23, 0x188(r1)
    beq lbl_fn_8049248C_000008C8
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_000008C0
    b lbl_fn_8049248C_000008CC
lbl_fn_8049248C_000008C0:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_000008CC
lbl_fn_8049248C_000008C8:
    li r3, 0x0
lbl_fn_8049248C_000008CC:
    psq_l f1, 0x0(r19), 0, 0
    psq_st f1, 0x24(r3), 0, 0
    lfs f2, 0x188(r1)
    stfs f2, 0x2c(r3)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000008E0:
    mr r3, r17
    addi r4, r25, 0x9b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000924
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f22, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f22, 0x68(r1)
    stfs f1, 0x6c(r1)
    psq_l f1, 0x0(r20), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_00000924:
    mr r3, r17
    addi r4, r25, 0xa1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000009AC
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_0000095C
    lwz r17, 0x74(r15)
    cmpwi r17, 0x0
    beq lbl_fn_8049248C_00000954
    b lbl_fn_8049248C_00000960
lbl_fn_8049248C_00000954:
    addi r17, r15, 0x78
    b lbl_fn_8049248C_00000960
lbl_fn_8049248C_0000095C:
    li r17, 0x0
lbl_fn_8049248C_00000960:
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r17)
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000994
    lwz r17, 0x74(r15)
    cmpwi r17, 0x0
    beq lbl_fn_8049248C_0000098C
    b lbl_fn_8049248C_00000998
lbl_fn_8049248C_0000098C:
    addi r17, r15, 0x78
    b lbl_fn_8049248C_00000998
lbl_fn_8049248C_00000994:
    li r17, 0x0
lbl_fn_8049248C_00000998:
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r17)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000009AC:
    mr r3, r17
    addi r4, r25, 0xa5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000009F4
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1ec(r1)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1f0(r1)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1f4(r1)
    b lbl_fn_8049248C_00000ABC
lbl_fn_8049248C_000009F4:
    mr r3, r17
    addi r4, r25, 0xae
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000ABC
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r18, r3
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r17, r3
    mr r3, r15
    mr r4, r18
    bl fn_800C2634
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000A58
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000A50
    b lbl_fn_8049248C_00000A5C
lbl_fn_8049248C_00000A50:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000A5C
lbl_fn_8049248C_00000A58:
    li r3, 0x0
lbl_fn_8049248C_00000A5C:
    stw r17, 0x48(r3)
    li r17, 0x0
    li r31, 0x0
    b lbl_fn_8049248C_00000AB4
lbl_fn_8049248C_00000A6C:
    mr r3, r16
    bl fn_8005B9CC
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000A98
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049248C_00000A90
    b lbl_fn_8049248C_00000A9C
lbl_fn_8049248C_00000A90:
    addi r4, r15, 0x78
    b lbl_fn_8049248C_00000A9C
lbl_fn_8049248C_00000A98:
    li r4, 0x0
lbl_fn_8049248C_00000A9C:
    lwz r0, 0x40(r4)
    mr r4, r3
    add r3, r0, r31
    bl fn_800D5908
    addi r17, r17, 0x1
    addi r31, r31, 0x30
lbl_fn_8049248C_00000AB4:
    cmpw r17, r18
    blt lbl_fn_8049248C_00000A6C
lbl_fn_8049248C_00000ABC:
    mr r3, r16
    bl fn_8005B9CC
    mr r17, r3
lbl_fn_8049248C_00000AC8:
    mr r3, r17
    addi r4, r24, lbl_80756700@l
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000005A0
    lwz r3, 0x70(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000B00
    lwz r0, 0x74(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000AF8
    b lbl_fn_8049248C_00000B04
lbl_fn_8049248C_00000AF8:
    addi r0, r15, 0x78
    b lbl_fn_8049248C_00000B04
lbl_fn_8049248C_00000B00:
    li r0, 0x0
lbl_fn_8049248C_00000B04:
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00001F30
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000B2C
    lwz r3, 0x74(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00000B24
    b lbl_fn_8049248C_00000B30
lbl_fn_8049248C_00000B24:
    addi r3, r15, 0x78
    b lbl_fn_8049248C_00000B30
lbl_fn_8049248C_00000B2C:
    li r3, 0x0
lbl_fn_8049248C_00000B30:
    lwz r0, 0x3c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8049248C_00000B48
    mr r3, r15
    addi r4, r1, 0x440
    bl fn_800C289C
lbl_fn_8049248C_00000B48:
    lwz r0, 0x70(r15)
    addi r3, r1, 0x60
    lfs f0, lbl_8088706C
    cmpwi r0, 0x0
    stfs f0, 0x60(r1)
    stfs f0, 0x64(r1)
    beq lbl_fn_8049248C_00000B7C
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049248C_00000B74
    b lbl_fn_8049248C_00000B80
lbl_fn_8049248C_00000B74:
    addi r4, r15, 0x78
    b lbl_fn_8049248C_00000B80
lbl_fn_8049248C_00000B7C:
    li r4, 0x0
lbl_fn_8049248C_00000B80:
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x58
    psq_st f1, 0x4(r4), 0, 0
    lwz r0, 0x70(r15)
    stfs f28, 0x58(r1)
    cmpwi r0, 0x0
    stfs f27, 0x5c(r1)
    beq lbl_fn_8049248C_00000BB8
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049248C_00000BB0
    b lbl_fn_8049248C_00000BBC
lbl_fn_8049248C_00000BB0:
    addi r4, r15, 0x78
    b lbl_fn_8049248C_00000BBC
lbl_fn_8049248C_00000BB8:
    li r4, 0x0
lbl_fn_8049248C_00000BBC:
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x88
    psq_st f1, 0xc(r4), 0, 0
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000BEC
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049248C_00000BE4
    b lbl_fn_8049248C_00000BF0
lbl_fn_8049248C_00000BE4:
    addi r4, r15, 0x78
    b lbl_fn_8049248C_00000BF0
lbl_fn_8049248C_00000BEC:
    li r4, 0x0
lbl_fn_8049248C_00000BF0:
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1ec
    psq_st f1, 0x14(r4), 0, 0
    lwz r0, 0x70(r15)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00000C20
    lwz r4, 0x74(r15)
    cmpwi r4, 0x0
    beq lbl_fn_8049248C_00000C18
    b lbl_fn_8049248C_00000C24
lbl_fn_8049248C_00000C18:
    addi r4, r15, 0x78
    b lbl_fn_8049248C_00000C24
lbl_fn_8049248C_00000C20:
    li r4, 0x0
lbl_fn_8049248C_00000C24:
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x30(r4), 0, 0
    lfs f2, 0x1f4(r1)
    stfs f2, 0x38(r4)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000C38:
    mr r3, r14
    addi r4, r25, 0xb8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00000D10
    mr r3, r16
    bl fn_8005B9CC
    addi r4, r25, 0xbc
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_8049248C_00000D04
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC12C
    mr r14, r3
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f25, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f24, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f23, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f22, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    frsp f4, f23
    lfs f5, lbl_80887074
    frsp f3, f22
    stw r14, 0x3c(r15)
    frsp f0, f1
    stfs f25, 0x40(r15)
    stfs f24, 0x44(r15)
    stfs f23, 0x170(r1)
    stfs f22, 0x174(r1)
    stfs f1, 0x178(r1)
    stfs f5, 0x17c(r1)
    stfs f4, 0x48(r15)
    stfs f3, 0x4c(r15)
    stfs f0, 0x50(r15)
    stfs f5, 0x54(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000D04:
    li r0, 0x0
    stw r0, 0x3c(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000D10:
    mr r3, r14
    addi r4, r25, 0xbf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001984
    mr r3, r16
    bl fn_8005B9CC
    mr r14, r3
    addi r4, r25, 0xc5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000012B8
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f28, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f27, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f26, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f25, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f24, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f23, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f22, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    addi r3, r1, 0x3fc
    bl fn_80079044
    fmr f1, f29
    stfs f28, 0x150(r1)
    addi r3, r1, 0x3fc
    addi r4, r1, 0x160
    stfs f27, 0x154(r1)
    addi r5, r1, 0x150
    stfs f26, 0x158(r1)
    stfs f25, 0x15c(r1)
    stfs f24, 0x160(r1)
    stfs f23, 0x164(r1)
    stfs f22, 0x168(r1)
    bl fn_800791B4
    addi r3, r1, 0x404
    lwz r0, 0x5c(r15)
    lwz r14, 0x60(r15)
    addi r8, r1, 0x2e0
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x410
    lfs f2, 0x40c(r1)
    cmplw r0, r14
    psq_st f1, 0x0(r8), 0, 0
    addi r7, r1, 0x2ec
    lwz r6, 0x3fc(r1)
    stfs f2, 0x2e8(r1)
    lwz r5, 0x400(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x418(r1)
    lwz r4, 0x41c(r1)
    lfs f9, 0x420(r1)
    lfs f8, 0x424(r1)
    lfs f7, 0x428(r1)
    lfs f6, 0x42c(r1)
    lfs f5, 0x430(r1)
    lfs f4, 0x434(r1)
    lfs f3, 0x438(r1)
    lfs f0, 0x43c(r1)
    stw r6, 0x2d8(r1)
    stw r5, 0x2dc(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x2f4(r1)
    stw r4, 0x2f8(r1)
    stfs f9, 0x2fc(r1)
    stfs f8, 0x300(r1)
    stfs f7, 0x304(r1)
    stfs f6, 0x308(r1)
    stfs f5, 0x30c(r1)
    stfs f4, 0x310(r1)
    stfs f3, 0x314(r1)
    stfs f0, 0x318(r1)
    bge lbl_fn_8049248C_00000EFC
    mulli r0, r0, 0x44
    lwz r3, 0x58(r15)
    add. r3, r3, r0
    beq lbl_fn_8049248C_00000EEC
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0x2e8(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x2f4(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_8049248C_00000EEC:
    lwz r3, 0x5c(r15)
    addi r0, r3, 0x1
    stw r0, 0x5c(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00000EFC:
    lis r3, 0x3c4
    li r4, 0x1
    subi r0, r3, 0x3c3d
    stw r4, 0x44(r1)
    subf r0, r14, r0
    cmplwi r0, 0x1
    bge lbl_fn_8049248C_00000F34
    lis r3, __files@ha
    addi r4, r25, 0xcb
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_00000F34:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r14, r0
    bge lbl_fn_8049248C_00000F6C
    addi r4, r14, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x3c(r1)
    cmplwi r0, 0x1
    b lbl_fn_8049248C_00000F8C
lbl_fn_8049248C_00000F6C:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r14, r0
    bge lbl_fn_8049248C_00000F8C
    addi r0, r14, 0x1
    srwi r0, r0, 1
    stw r0, 0x40(r1)
    cmplwi r0, 0x1
lbl_fn_8049248C_00000F8C:
    lwz r4, 0x5c(r15)
    li r5, 0x0
    lis r3, 0x3c4
    lwz r14, 0x60(r15)
    subi r0, r3, 0x3c3d
    addi r4, r4, 0x1
    subf r3, r14, r4
    addi r6, r15, 0x60
    subf r0, r14, r0
    stw r5, 0x218(r1)
    cmplw r3, r0
    stw r5, 0x21c(r1)
    stw r5, 0x220(r1)
    stw r6, 0x224(r1)
    stw r5, 0x228(r1)
    stw r3, 0x30(r1)
    ble lbl_fn_8049248C_00000FF4
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_00000FF4:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r14, r0
    bge lbl_fn_8049248C_00001044
    addi r5, r14, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x30(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x38
    srwi r4, r4, 2
    stw r4, 0x38(r1)
    cmplw r4, r0
    bge lbl_fn_8049248C_00001038
    addi r3, r1, 0x30
lbl_fn_8049248C_00001038:
    lwz r0, 0x0(r3)
    add r16, r14, r0
    b lbl_fn_8049248C_00001088
lbl_fn_8049248C_00001044:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r14, r0
    bge lbl_fn_8049248C_00001080
    addi r3, r14, 0x1
    lwz r0, 0x30(r1)
    srwi r3, r3, 1
    stw r3, 0x34(r1)
    cmplw r3, r0
    addi r3, r1, 0x34
    bge lbl_fn_8049248C_00001074
    addi r3, r1, 0x30
lbl_fn_8049248C_00001074:
    lwz r0, 0x0(r3)
    add r16, r14, r0
    b lbl_fn_8049248C_00001088
lbl_fn_8049248C_00001080:
    lis r3, 0x3c4
    subi r16, r3, 0x3c3d
lbl_fn_8049248C_00001088:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r16, r0
    ble lbl_fn_8049248C_000010BC
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_000010BC:
    mulli r3, r16, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_fn_8049248C_000010F0
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_000010F0:
    lwz r5, 0x5c(r15)
    addi r7, r1, 0x2e0
    lwz r0, 0x21c(r1)
    addi r6, r1, 0x2ec
    mulli r4, r5, 0x44
    stw r14, 0x218(r1)
    stw r16, 0x220(r1)
    mulli r3, r0, 0x44
    add r0, r14, r4
    stw r5, 0x228(r1)
    add. r3, r3, r0
    beq lbl_fn_8049248C_00001198
    lwz r0, 0x2d8(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x2dc(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0x2e8(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x2f4(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0x2f8(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x2fc(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x300(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x304(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0x308(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0x30c(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x310(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x314(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x318(r1)
    stfs f0, 0x40(r3)
lbl_fn_8049248C_00001198:
    lwz r3, 0x5c(r15)
    lwz r0, 0x228(r1)
    lwz r5, 0x21c(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x58(r15)
    addi r5, r5, 0x1
    stw r5, 0x21c(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x218(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_8049248C_00001264
lbl_fn_8049248C_000011C8:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_8049248C_0000124C
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_8049248C_0000124C:
    lwz r4, 0x228(r1)
    lwz r3, 0x21c(r1)
    subi r0, r4, 0x1
    stw r0, 0x228(r1)
    addi r0, r3, 0x1
    stw r0, 0x21c(r1)
lbl_fn_8049248C_00001264:
    cmplw r7, r5
    blt lbl_fn_8049248C_000011C8
    addic. r0, r1, 0x218
    lwz r0, 0x21c(r1)
    lwz r7, 0x60(r15)
    li r6, 0x0
    lwz r5, 0x220(r1)
    lwz r3, 0x58(r15)
    lwz r4, 0x218(r1)
    stw r5, 0x60(r15)
    stw r7, 0x220(r1)
    stw r4, 0x58(r15)
    stw r3, 0x218(r1)
    stw r0, 0x5c(r15)
    stw r6, 0x21c(r1)
    beq lbl_fn_8049248C_00001F30
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00001F30
    stw r6, 0x21c(r1)
    bl dtor_80084684
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_000012B8:
    mr r3, r14
    addi r4, r25, 0xdf
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001898
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f22, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f23, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f24, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f25, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f28, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f27, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f26, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f21, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f20, f1
    addi r3, r1, 0x3b8
    bl fn_80079044
    fmr f1, f21
    stfs f22, 0x128(r1)
    fmr f2, f20
    addi r3, r1, 0x3b8
    stfs f23, 0x12c(r1)
    addi r4, r1, 0x144
    stfs f24, 0x130(r1)
    addi r5, r1, 0x138
    addi r6, r1, 0x128
    stfs f25, 0x134(r1)
    stfs f28, 0x138(r1)
    stfs f27, 0x13c(r1)
    stfs f26, 0x140(r1)
    stfs f31, 0x144(r1)
    stfs f30, 0x148(r1)
    stfs f29, 0x14c(r1)
    bl fn_80079210
    addi r3, r1, 0x3c0
    lwz r0, 0x5c(r15)
    lwz r14, 0x60(r15)
    addi r8, r1, 0x29c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x3cc
    lfs f2, 0x3c8(r1)
    cmplw r0, r14
    psq_st f1, 0x0(r8), 0, 0
    addi r7, r1, 0x2a8
    lwz r6, 0x3b8(r1)
    stfs f2, 0x2a4(r1)
    lwz r5, 0x3bc(r1)
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x3d4(r1)
    lwz r4, 0x3d8(r1)
    lfs f9, 0x3dc(r1)
    lfs f8, 0x3e0(r1)
    lfs f7, 0x3e4(r1)
    lfs f6, 0x3e8(r1)
    lfs f5, 0x3ec(r1)
    lfs f4, 0x3f0(r1)
    lfs f3, 0x3f4(r1)
    lfs f0, 0x3f8(r1)
    stw r6, 0x294(r1)
    stw r5, 0x298(r1)
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x2b0(r1)
    stw r4, 0x2b4(r1)
    stfs f9, 0x2b8(r1)
    stfs f8, 0x2bc(r1)
    stfs f7, 0x2c0(r1)
    stfs f6, 0x2c4(r1)
    stfs f5, 0x2c8(r1)
    stfs f4, 0x2cc(r1)
    stfs f3, 0x2d0(r1)
    stfs f0, 0x2d4(r1)
    bge lbl_fn_8049248C_000014DC
    mulli r0, r0, 0x44
    lwz r3, 0x58(r15)
    add. r3, r3, r0
    beq lbl_fn_8049248C_000014CC
    stw r6, 0x0(r3)
    psq_l f1, 0x0(r8), 0, 0
    stw r5, 0x4(r3)
    lfs f2, 0x2a4(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x10(r3)
    lfs f2, 0x2b0(r1)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    stw r4, 0x20(r3)
    stfs f9, 0x24(r3)
    stfs f8, 0x28(r3)
    stfs f7, 0x2c(r3)
    stfs f6, 0x30(r3)
    stfs f5, 0x34(r3)
    stfs f4, 0x38(r3)
    stfs f3, 0x3c(r3)
    stfs f0, 0x40(r3)
lbl_fn_8049248C_000014CC:
    lwz r3, 0x5c(r15)
    addi r0, r3, 0x1
    stw r0, 0x5c(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_000014DC:
    lis r3, 0x3c4
    li r4, 0x1
    subi r0, r3, 0x3c3d
    stw r4, 0x2c(r1)
    subf r0, r14, r0
    cmplwi r0, 0x1
    bge lbl_fn_8049248C_00001514
    lis r3, __files@ha
    addi r4, r25, 0xcb
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_00001514:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r14, r0
    bge lbl_fn_8049248C_0000154C
    addi r4, r14, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x24(r1)
    cmplwi r0, 0x1
    b lbl_fn_8049248C_0000156C
lbl_fn_8049248C_0000154C:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r14, r0
    bge lbl_fn_8049248C_0000156C
    addi r0, r14, 0x1
    srwi r0, r0, 1
    stw r0, 0x28(r1)
    cmplwi r0, 0x1
lbl_fn_8049248C_0000156C:
    lwz r4, 0x5c(r15)
    li r5, 0x0
    lis r3, 0x3c4
    lwz r14, 0x60(r15)
    subi r0, r3, 0x3c3d
    addi r4, r4, 0x1
    subf r3, r14, r4
    addi r6, r15, 0x60
    subf r0, r14, r0
    stw r5, 0x204(r1)
    cmplw r3, r0
    stw r5, 0x208(r1)
    stw r5, 0x20c(r1)
    stw r6, 0x210(r1)
    stw r5, 0x214(r1)
    stw r3, 0x18(r1)
    ble lbl_fn_8049248C_000015D4
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_000015D4:
    lis r3, 0x141
    addi r0, r3, 0x4141
    cmplw r14, r0
    bge lbl_fn_8049248C_00001624
    addi r5, r14, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_8049248C_00001618
    addi r3, r1, 0x18
lbl_fn_8049248C_00001618:
    lwz r0, 0x0(r3)
    add r16, r14, r0
    b lbl_fn_8049248C_00001668
lbl_fn_8049248C_00001624:
    lis r3, 0x283
    subi r0, r3, 0x7d7e
    cmplw r14, r0
    bge lbl_fn_8049248C_00001660
    addi r3, r14, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_8049248C_00001654
    addi r3, r1, 0x18
lbl_fn_8049248C_00001654:
    lwz r0, 0x0(r3)
    add r16, r14, r0
    b lbl_fn_8049248C_00001668
lbl_fn_8049248C_00001660:
    lis r3, 0x3c4
    subi r16, r3, 0x3c3d
lbl_fn_8049248C_00001668:
    lis r3, 0x3c4
    subi r0, r3, 0x3c3d
    cmplw r16, r0
    ble lbl_fn_8049248C_0000169C
    lis r4, lbl_80756700@ha
    lis r3, __files@ha
    addi r4, r4, lbl_80756700@l
    addi r3, r3, __files@l
    addi r4, r4, 0xcb
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_0000169C:
    mulli r3, r16, 0x44
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r14, r3
    bne lbl_fn_8049248C_000016D0
    lis r3, __files@ha
    lis r4, lbl_8077927C@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_8077927C@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8049248C_000016D0:
    lwz r5, 0x5c(r15)
    addi r7, r1, 0x29c
    lwz r0, 0x208(r1)
    addi r6, r1, 0x2a8
    mulli r4, r5, 0x44
    stw r14, 0x204(r1)
    stw r16, 0x20c(r1)
    mulli r3, r0, 0x44
    add r0, r14, r4
    stw r5, 0x214(r1)
    add. r3, r3, r0
    beq lbl_fn_8049248C_00001778
    lwz r0, 0x294(r1)
    stw r0, 0x0(r3)
    lwz r0, 0x298(r1)
    stw r0, 0x4(r3)
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x8(r3), 0, 0
    lfs f2, 0x2a4(r1)
    stfs f2, 0x10(r3)
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x14(r3), 0, 0
    lfs f2, 0x2b0(r1)
    stfs f2, 0x1c(r3)
    lwz r0, 0x2b4(r1)
    stw r0, 0x20(r3)
    lfs f0, 0x2b8(r1)
    stfs f0, 0x24(r3)
    lfs f0, 0x2bc(r1)
    stfs f0, 0x28(r3)
    lfs f0, 0x2c0(r1)
    stfs f0, 0x2c(r3)
    lfs f0, 0x2c4(r1)
    stfs f0, 0x30(r3)
    lfs f0, 0x2c8(r1)
    stfs f0, 0x34(r3)
    lfs f0, 0x2cc(r1)
    stfs f0, 0x38(r3)
    lfs f0, 0x2d0(r1)
    stfs f0, 0x3c(r3)
    lfs f0, 0x2d4(r1)
    stfs f0, 0x40(r3)
lbl_fn_8049248C_00001778:
    lwz r3, 0x5c(r15)
    lwz r0, 0x214(r1)
    lwz r5, 0x208(r1)
    mulli r4, r3, 0x44
    lwz r7, 0x58(r15)
    addi r5, r5, 0x1
    stw r5, 0x208(r1)
    mulli r0, r0, 0x44
    lwz r3, 0x204(r1)
    add r5, r7, r4
    add r6, r3, r0
    b lbl_fn_8049248C_00001844
lbl_fn_8049248C_000017A8:
    subic. r6, r6, 0x44
    subi r5, r5, 0x44
    beq lbl_fn_8049248C_0000182C
    lwz r0, 0x0(r5)
    stw r0, 0x0(r6)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r6)
    lfs f2, 0x10(r5)
    psq_l f1, 0x8(r5), 0, 0
    psq_st f1, 0x8(r6), 0, 0
    stfs f2, 0x10(r6)
    lfs f2, 0x1c(r5)
    psq_l f1, 0x14(r5), 0, 0
    psq_st f1, 0x14(r6), 0, 0
    stfs f2, 0x1c(r6)
    lwz r0, 0x20(r5)
    stw r0, 0x20(r6)
    lfs f0, 0x24(r5)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r5)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r5)
    stfs f0, 0x2c(r6)
    lfs f0, 0x30(r5)
    stfs f0, 0x30(r6)
    lfs f0, 0x34(r5)
    stfs f0, 0x34(r6)
    lfs f0, 0x38(r5)
    stfs f0, 0x38(r6)
    lfs f0, 0x3c(r5)
    stfs f0, 0x3c(r6)
    lfs f0, 0x40(r5)
    stfs f0, 0x40(r6)
lbl_fn_8049248C_0000182C:
    lwz r4, 0x214(r1)
    lwz r3, 0x208(r1)
    subi r0, r4, 0x1
    stw r0, 0x214(r1)
    addi r0, r3, 0x1
    stw r0, 0x208(r1)
lbl_fn_8049248C_00001844:
    cmplw r7, r5
    blt lbl_fn_8049248C_000017A8
    addic. r0, r1, 0x204
    lwz r0, 0x208(r1)
    lwz r7, 0x60(r15)
    li r6, 0x0
    lwz r5, 0x20c(r1)
    lwz r3, 0x58(r15)
    lwz r4, 0x204(r1)
    stw r5, 0x60(r15)
    stw r7, 0x20c(r1)
    stw r4, 0x58(r15)
    stw r3, 0x204(r1)
    stw r0, 0x5c(r15)
    stw r6, 0x208(r1)
    beq lbl_fn_8049248C_00001F30
    cmpwi r3, 0x0
    beq lbl_fn_8049248C_00001F30
    stw r6, 0x208(r1)
    bl dtor_80084684
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001898:
    mr r3, r14
    addi r4, r25, 0xe4
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001F30
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f26, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f27, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f28, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f29, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f31, 0x1e0(r1)
    mr r3, r15
    li r4, 0x0
    stfs f30, 0x1e4(r1)
    stfs f1, 0x1e8(r1)
    bl fn_800C2448
    addi r4, r1, 0x1e0
    lfs f2, 0x1e8(r1)
    psq_l f1, 0x0(r4), 0, 0
    li r4, 0x0
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    mr r3, r15
    stfs f26, 0x118(r1)
    stfs f27, 0x11c(r1)
    stfs f28, 0x120(r1)
    stfs f29, 0x124(r1)
    bl fn_800C2448
    frsp f0, f26
    stfs f0, 0x34(r3)
    frsp f0, f27
    stfs f0, 0x38(r3)
    frsp f0, f28
    stfs f0, 0x3c(r3)
    frsp f0, f29
    stfs f0, 0x40(r3)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001984:
    mr r3, r14
    addi r4, r25, 0xe8
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_000019DC
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1c(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x20(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x24(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x28(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_000019DC:
    mr r3, r14
    addi r4, r25, 0xf6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001A88
    li r0, 0x1
    stw r0, 0x120(r15)
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f30, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    fmr f31, f1
    mr r3, r16
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f30, 0x108(r1)
    frsp f2, f1
    addi r5, r1, 0x108
    addi r4, r1, 0x1d0
    stfs f31, 0x10c(r1)
    mr r3, r16
    stfs f1, 0x110(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1d8(r1)
    bl fn_8005B9CC
    bl fn_800DC288
    stfs f1, 0x1dc(r1)
    mr r3, r16
    bl fn_8005B9CC
    addi r4, r25, 0xfe
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001A78
    li r0, 0x0
    stw r0, 0x120(r15)
lbl_fn_8049248C_00001A78:
    mr r3, r15
    addi r4, r1, 0x1d0
    bl fn_800C2C20
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001A88:
    mr r3, r14
    addi r4, r25, 0x102
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001BB0
    lfs f5, lbl_80887074
    li r6, 0x0
    lfs f4, lbl_8088707C
    li r5, 0x2
    lfs f6, lbl_80887078
    li r0, 0x3
    lfs f3, lbl_8088706C
    li r14, 0x1
    lfs f0, lbl_80887080
    mr r4, r16
    stw r6, 0x370(r1)
    addi r3, r1, 0x370
    stw r6, 0x374(r1)
    stw r5, 0x378(r1)
    stw r0, 0x37c(r1)
    stw r14, 0x380(r1)
    stw r6, 0x384(r1)
    stw r6, 0x388(r1)
    stfs f6, 0x38c(r1)
    stfs f6, 0x390(r1)
    stfs f5, 0x394(r1)
    stfs f4, 0x398(r1)
    stfs f4, 0x39c(r1)
    stfs f4, 0x3a0(r1)
    stfs f5, 0x3a4(r1)
    stfs f3, 0x3a8(r1)
    stfs f5, 0x3ac(r1)
    stfs f3, 0x3b0(r1)
    stfs f0, 0x3b4(r1)
    bl fn_800BB6C0
    lwz r0, 0x19c(r15)
    addi r4, r1, 0x3a8
    stw r0, 0x374(r1)
    stw r14, 0x194(r15)
    lwz r0, 0x370(r1)
    stw r0, 0x198(r15)
    lwz r0, 0x374(r1)
    stw r0, 0x19c(r15)
    lwz r0, 0x378(r1)
    stw r0, 0x1a0(r15)
    lwz r0, 0x37c(r1)
    stw r0, 0x1a4(r15)
    lwz r0, 0x380(r1)
    stw r0, 0x1a8(r15)
    lwz r0, 0x384(r1)
    stw r0, 0x1ac(r15)
    lwz r0, 0x388(r1)
    stw r0, 0x1b0(r15)
    lfs f0, 0x38c(r1)
    stfs f0, 0x1b4(r15)
    lfs f0, 0x390(r1)
    stfs f0, 0x1b8(r15)
    lfs f0, 0x394(r1)
    stfs f0, 0x1bc(r15)
    lwz r3, 0x398(r1)
    lwz r0, 0x39c(r1)
    stw r0, 0x1c4(r15)
    stw r3, 0x1c0(r15)
    lwz r3, 0x3a0(r1)
    lwz r0, 0x3a4(r1)
    stw r0, 0x1cc(r15)
    stw r3, 0x1c8(r15)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x3b0(r1)
    stfs f2, 0x1d8(r15)
    psq_st f1, 0x1d0(r15), 0, 0
    lfs f0, 0x3b4(r1)
    stfs f0, 0x1dc(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001BB0:
    mr r3, r14
    addi r4, r25, 0x109
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001CFC
    lfs f0, lbl_8088706C
    li r0, 0x0
    lfs f3, lbl_80887074
    addi r14, r1, 0x320
    stfs f3, 0xc8(r1)
    addi r8, r1, 0xc8
    addi r17, r1, 0x324
    addi r7, r1, 0xd8
    stfs f0, 0xcc(r1)
    addi r6, r1, 0xe8
    addi r5, r1, 0xf8
    mr r3, r14
    psq_l f1, 0x0(r8), 0, 0
    mr r4, r16
    stfs f0, 0xd0(r1)
    stfs f0, 0xd4(r1)
    psq_l f2, 0x8(r8), 0, 0
    stfs f0, 0xd8(r1)
    stfs f3, 0xdc(r1)
    psq_st f1, 0x0(r17), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0xe0(r1)
    stfs f0, 0xe4(r1)
    psq_st f2, 0x8(r17), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f0, 0xe8(r1)
    stfs f0, 0xec(r1)
    psq_st f1, 0x14(r14), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f3, 0xf0(r1)
    stfs f0, 0xf4(r1)
    psq_st f2, 0x1c(r14), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f0, 0xf8(r1)
    stfs f0, 0xfc(r1)
    psq_st f1, 0x24(r14), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x100(r1)
    stfs f0, 0x104(r1)
    psq_st f2, 0x2c(r14), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stw r0, 0x320(r1)
    stw r0, 0x364(r1)
    stw r0, 0x368(r1)
    stfs f3, 0x36c(r1)
    psq_st f1, 0x34(r14), 0, 0
    psq_st f2, 0x3c(r14), 0, 0
    bl fn_800BBFE8
    lwz r0, 0x320(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8049248C_00001F30
    li r0, 0x1
    stw r0, 0x260(r15)
    lwz r0, 0x320(r1)
    stw r0, 0x264(r15)
    psq_l f1, 0x0(r17), 0, 0
    psq_l f2, 0x8(r17), 0, 0
    psq_st f2, 0x270(r15), 0, 0
    psq_st f1, 0x268(r15), 0, 0
    psq_l f1, 0x14(r14), 0, 0
    psq_l f2, 0x1c(r14), 0, 0
    psq_st f2, 0x280(r15), 0, 0
    psq_st f1, 0x278(r15), 0, 0
    psq_l f1, 0x24(r14), 0, 0
    psq_l f2, 0x2c(r14), 0, 0
    psq_st f2, 0x290(r15), 0, 0
    psq_st f1, 0x288(r15), 0, 0
    psq_l f1, 0x34(r14), 0, 0
    psq_l f2, 0x3c(r14), 0, 0
    psq_st f2, 0x2a0(r15), 0, 0
    psq_st f1, 0x298(r15), 0, 0
    lwz r0, 0x364(r1)
    stw r0, 0x2a8(r15)
    lwz r0, 0x368(r1)
    stw r0, 0x2ac(r15)
    lfs f0, 0x36c(r1)
    stfs f0, 0x2b0(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001CFC:
    mr r3, r14
    addi r4, r25, 0x116
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001D64
    lfs f3, lbl_80887074
    li r0, 0x0
    lfs f0, lbl_80887084
    mr r4, r16
    stw r0, 0x1c0(r1)
    addi r3, r1, 0x1c0
    stw r0, 0x1c4(r1)
    stfs f3, 0x1c8(r1)
    stfs f0, 0x1cc(r1)
    bl fn_800BB994
    li r0, 0x1
    stw r0, 0x1e0(r15)
    lwz r0, 0x1c0(r1)
    stw r0, 0x1e4(r15)
    lwz r0, 0x1c4(r1)
    stw r0, 0x1e8(r15)
    lfs f0, 0x1c8(r1)
    stfs f0, 0x1ec(r15)
    lfs f0, 0x1cc(r1)
    stfs f0, 0x1f0(r15)
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001D64:
    mr r3, r14
    addi r4, r25, 0x11b
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001E4C
    lfs f8, lbl_8088706C
    li r0, 0x0
    lfs f4, lbl_80887098
    mr r4, r16
    lfs f0, lbl_80887074
    addi r3, r1, 0x258
    lfs f9, lbl_80887088
    lfs f7, lbl_8088708C
    lfs f6, lbl_80887090
    lfs f5, lbl_80887094
    lfs f3, lbl_8088709C
    stw r0, 0x258(r1)
    stw r0, 0x25c(r1)
    stfs f9, 0x260(r1)
    stfs f8, 0x264(r1)
    stfs f7, 0x268(r1)
    stfs f6, 0x26c(r1)
    stfs f5, 0x270(r1)
    stfs f8, 0x274(r1)
    stfs f4, 0x278(r1)
    stfs f3, 0x27c(r1)
    stfs f4, 0x280(r1)
    stfs f8, 0x284(r1)
    stfs f8, 0x288(r1)
    stfs f0, 0x28c(r1)
    stfs f0, 0x290(r1)
    bl fn_800BBBB0
    li r0, 0x1
    stw r0, 0x1f4(r15)
    addi r3, r1, 0x264
    addi r4, r1, 0x26c
    lwz r0, 0x258(r1)
    addi r5, r1, 0x274
    stw r0, 0x1f8(r15)
    addi r6, r1, 0x27c
    addi r7, r1, 0x284
    lwz r0, 0x25c(r1)
    stw r0, 0x1fc(r15)
    lfs f0, 0x260(r1)
    stfs f0, 0x200(r15)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x204(r15), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x20c(r15), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x214(r15), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    psq_st f1, 0x21c(r15), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    psq_st f2, 0x22c(r15), 0, 0
    psq_st f1, 0x224(r15), 0, 0
    b lbl_fn_8049248C_00001F30
lbl_fn_8049248C_00001E4C:
    mr r3, r14
    addi r4, r25, 0x120
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8049248C_00001F30
    lfs f2, lbl_80887074
    addi r18, r1, 0xb0
    lfs f0, lbl_808870A4
    li r14, 0x1
    stfs f0, 0xc0(r1)
    addi r4, r1, 0xbc
    lfs f3, lbl_80887068
    li r0, 0x0
    stfs f2, 0xbc(r1)
    mr r3, r18
    lfs f0, lbl_808870A0
    addi r17, r1, 0x230
    psq_l f1, 0x0(r4), 0, 0
    mr r4, r18
    stw r14, 0x230(r1)
    stw r0, 0x234(r1)
    stfs f0, 0x238(r1)
    stfs f3, 0x23c(r1)
    stfs f3, 0x240(r1)
    stfs f3, 0x244(r1)
    stfs f2, 0x248(r1)
    stfs f2, 0xc4(r1)
    psq_st f1, 0x0(r18), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_805F98D0
    psq_l f1, 0x0(r18), 0, 0
    mr r3, r17
    lfs f2, 0xb8(r1)
    mr r4, r16
    psq_st f1, 0x1c(r17), 0, 0
    stfs f2, 0x254(r1)
    bl fn_800BBD90
    stw r14, 0x234(r15)
    addi r4, r1, 0x24c
    lwz r0, 0x230(r1)
    stw r0, 0x238(r15)
    lwz r0, 0x234(r1)
    stw r0, 0x23c(r15)
    lfs f0, 0x238(r1)
    stfs f0, 0x240(r15)
    lwz r3, 0x23c(r1)
    lwz r0, 0x240(r1)
    stw r0, 0x248(r15)
    stw r3, 0x244(r15)
    lwz r3, 0x244(r1)
    lwz r0, 0x248(r1)
    stw r0, 0x250(r15)
    stw r3, 0x24c(r15)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x254(r1)
    stfs f2, 0x25c(r15)
    psq_st f1, 0x254(r15), 0, 0
lbl_fn_8049248C_00001F30:
    addi r11, r1, 0x590
    psq_l f31, 0x648(r1), 0, 0
    lfd f31, 0x640(r1)
    psq_l f30, 0x638(r1), 0, 0
    lfd f30, 0x630(r1)
    psq_l f29, 0x628(r1), 0, 0
    lfd f29, 0x620(r1)
    psq_l f28, 0x618(r1), 0, 0
    lfd f28, 0x610(r1)
    psq_l f27, 0x608(r1), 0, 0
    lfd f27, 0x600(r1)
    psq_l f26, 0x5f8(r1), 0, 0
    lfd f26, 0x5f0(r1)
    psq_l f25, 0x5e8(r1), 0, 0
    lfd f25, 0x5e0(r1)
    psq_l f24, 0x5d8(r1), 0, 0
    lfd f24, 0x5d0(r1)
    psq_l f23, 0x5c8(r1), 0, 0
    lfd f23, 0x5c0(r1)
    psq_l f22, 0x5b8(r1), 0, 0
    lfd f22, 0x5b0(r1)
    psq_l f21, 0x5a8(r1), 0, 0
    lfd f21, 0x5a0(r1)
    psq_l f20, 0x598(r1), 0, 0
    lfd f20, 0x590(r1)
    bl _restgpr_14
    lwz r0, 0x654(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}
