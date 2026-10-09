#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800697D8(void);
extern void fn_8007A994(void);
extern void fn_8007AA64(void);
extern void fn_8007B260(void);
extern void fn_8007C0D8(void);
extern void fn_8007E9EC(void);
extern void fn_8007EA24(void);
extern void fn_8007FAF0(void);
extern void fn_80081080(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800D5808(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8067E23C(void);
extern void fn_80682544(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8077845C[];
extern u8 lbl_807319E8[];
extern u8 lbl_80731A60[];
extern u8 lbl_80731D40[];
extern u8 lbl_80777D40[];
extern u8 lbl_80777D80[];

/* Small data declarations */
extern u32 lbl_8087D76C;
extern u32 lbl_8087D770;
extern u32 lbl_8087D774;
extern u32 lbl_8087D778;
extern u32 lbl_8087D78C;
extern u32 lbl_8087D790;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EF00;
extern u32 lbl_80880B80;
extern u32 lbl_80880B84;
extern u32 lbl_80880B9C;
extern u32 lbl_80880BA0;
extern u32 lbl_80880BB0;
extern u32 lbl_80880BB4;

/* Function declarations */
void fn_8007C46C(void);

asm void fn_8007C46C(void)
{
    nofralloc
    stwu r1, -0x630(r1)
    mflr r0
    stw r0, 0x634(r1)
    addi r11, r1, 0x5f0
    stfd f31, 0x620(r1)
    psq_st f31, 0x628(r1), 0, 0
    stfd f30, 0x610(r1)
    psq_st f30, 0x618(r1), 0, 0
    stfd f29, 0x600(r1)
    psq_st f29, 0x608(r1), 0, 0
    stfd f28, 0x5f0(r1)
    psq_st f28, 0x5f8(r1), 0, 0
    bl _savegpr_14
    li r26, 0x0
    mr r14, r4
    mr r15, r3
    stw r5, 0x8(r1)
    mr r3, r5
    lwz r4, lbl_80880B80
    stw r26, 0x9c(r1)
    addi r5, r1, 0x9c
    stw r6, 0xc(r1)
    stw r26, 0x100(r1)
    stw r26, 0x104(r1)
    stw r26, 0x108(r1)
    stw r26, 0xf4(r1)
    stw r26, 0xf8(r1)
    stw r26, 0xfc(r1)
    bl fn_8007A994
    lwz r0, 0x9c(r1)
    addi r5, r1, 0x9c
    lwz r17, lbl_80880B84
    add r3, r3, r0
    mr r4, r17
    bl fn_8007A994
    lis r30, lbl_80731D40@ha
    lfs f30, lbl_80880BA0
    lfs f31, lbl_80880B9C
    mr r16, r3
    lfs f28, lbl_80880BB0
    addi r31, r30, lbl_80731D40@l
    lfs f29, lbl_80880BB4
    li r27, 0x1
    b lbl_fn_8007C46C_00002044
lbl_fn_8007C46C_000000B0:
    lbz r0, 0x1(r16)
    cmpwi r0, 0x4d
    bne lbl_fn_8007C46C_00000128
    lbz r0, 0x2(r16)
    cmpwi r0, 0x42
    bne lbl_fn_8007C46C_00000128
    lbz r0, 0x3(r16)
    cmpwi r0, 0x5f
    bne lbl_fn_8007C46C_00000128
    lwz r3, 0x9c(r1)
    b lbl_fn_8007C46C_000000E4
lbl_fn_8007C46C_000000DC:
    addi r3, r3, 0x1
    stw r3, 0x9c(r1)
lbl_fn_8007C46C_000000E4:
    lbzx r0, r16, r3
    extsb r0, r0
    cmpwi r0, 0xa
    bne lbl_fn_8007C46C_000000DC
    lwz r3, 0x9c(r1)
    b lbl_fn_8007C46C_00000104
lbl_fn_8007C46C_000000FC:
    addi r3, r3, 0x1
    stw r3, 0x9c(r1)
lbl_fn_8007C46C_00000104:
    lbzx r0, r16, r3
    extsb r0, r0
    cmpwi r0, 0xa
    beq lbl_fn_8007C46C_000000FC
    cmpwi r0, 0xd
    beq lbl_fn_8007C46C_000000FC
    stw r26, 0x9c(r1)
    add r16, r16, r3
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000128:
    lwz r22, 0x9c(r1)
    lis r3, lbl_807319E8@ha
    addi r19, r3, lbl_807319E8@l
    li r18, 0x0
    subi r21, r22, 0x1
    b lbl_fn_8007C46C_00000174
lbl_fn_8007C46C_00000140:
    mr r3, r20
    bl strlen
    cmpw r3, r21
    bne lbl_fn_8007C46C_0000016C
    mr r4, r20
    mr r5, r21
    addi r3, r16, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_0000016C
    b lbl_fn_8007C46C_00000184
lbl_fn_8007C46C_0000016C:
    addi r19, r19, 0x4
    addi r18, r18, 0x1
lbl_fn_8007C46C_00000174:
    lwz r20, 0x0(r19)
    cmpwi r20, 0x0
    bne lbl_fn_8007C46C_00000140
    li r18, -0x1
lbl_fn_8007C46C_00000184:
    cmpwi r18, -0x1
    bne lbl_fn_8007C46C_00000970
    lis r3, lbl_80777D80@ha
    li r17, 0x0
    addi r18, r3, lbl_80777D80@l
    b lbl_fn_8007C46C_000001D0
lbl_fn_8007C46C_0000019C:
    mr r3, r19
    bl strlen
    cmpw r3, r21
    bne lbl_fn_8007C46C_000001C8
    mr r4, r19
    mr r5, r21
    addi r3, r16, 0x1
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_000001C8
    b lbl_fn_8007C46C_000001E0
lbl_fn_8007C46C_000001C8:
    addi r18, r18, 0x4
    addi r17, r17, 0x1
lbl_fn_8007C46C_000001D0:
    lwz r19, 0x0(r18)
    cmpwi r19, 0x0
    bne lbl_fn_8007C46C_0000019C
    li r17, -0x1
lbl_fn_8007C46C_000001E0:
    lwz r0, 0x9c(r1)
    mr r4, r14
    stw r26, 0x110(r1)
    mr r5, r15
    add r6, r16, r0
    addi r3, r1, 0x110
    stw r26, 0x114(r1)
    stw r26, 0x118(r1)
    stw r26, 0x11c(r1)
    stb r17, 0x120(r1)
    stb r26, 0x121(r1)
    stb r26, 0x122(r1)
    stb r26, 0x123(r1)
    stb r27, 0x124(r1)
    stb r27, 0x125(r1)
    bl fn_8007B260
    lwz r0, 0x108(r1)
    mr r16, r3
    stw r26, 0x9c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000240
    lwz r0, 0x104(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8007C46C_000004AC
lbl_fn_8007C46C_00000240:
    lwz r0, 0x104(r1)
    cmplwi r0, 0x8
    bgt lbl_fn_8007C46C_00000720
    li r3, 0xd0
    li r4, 0x0
    la r5, lbl_8087D778
    la r6, lbl_8087D774
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007E9EC@ha
    lis r5, fn_8007AA64@ha
    addi r4, r4, fn_8007E9EC@l
    li r6, 0x18
    addi r5, r5, fn_8007AA64@l
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0x108(r1)
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_0000049C
    lwz r0, 0x100(r1)
    li r18, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_8007C46C_000002A4
    mr r18, r0
lbl_fn_8007C46C_000002A4:
    lwz r17, 0x108(r1)
    mr r23, r21
    li r19, 0x0
    li r22, 0x0
    b lbl_fn_8007C46C_00000484
lbl_fn_8007C46C_000002B8:
    add r20, r17, r22
    lbz r0, 0x15(r20)
    stb r0, 0x15(r23)
    lbz r0, 0x14(r20)
    stb r0, 0x14(r23)
    lwzx r28, r17, r22
    cmpwi r28, 0x0
    beq lbl_fn_8007C46C_000002DC
    b lbl_fn_8007C46C_000002E0
lbl_fn_8007C46C_000002DC:
    la r28, lbl_8087EF00
lbl_fn_8007C46C_000002E0:
    cmpwi r28, 0x0
    beq lbl_fn_8007C46C_000002F8
    mr r3, r28
    bl strlen
    mr r25, r3
    b lbl_fn_8007C46C_000002FC
lbl_fn_8007C46C_000002F8:
    li r25, 0x0
lbl_fn_8007C46C_000002FC:
    cmpwi r28, 0x0
    beq lbl_fn_8007C46C_00000354
    cmpwi r25, 0x0
    beq lbl_fn_8007C46C_00000354
    addi r3, r25, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r24, r3
    mr r4, r28
    mr r5, r25
    bl memcpy
    stbx r26, r24, r25
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000034C
    bl fn_80084C24
    stw r26, 0x0(r23)
lbl_fn_8007C46C_0000034C:
    stw r24, 0x0(r23)
    b lbl_fn_8007C46C_00000368
lbl_fn_8007C46C_00000354:
    lwz r3, 0x0(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000368
    bl fn_80084C24
    stw r26, 0x0(r23)
lbl_fn_8007C46C_00000368:
    lbz r0, 0x11(r20)
    stb r0, 0x11(r23)
    lwz r0, 0x4(r20)
    stw r0, 0x4(r23)
    lbz r0, 0x10(r20)
    stb r0, 0x10(r23)
    lbz r0, 0x12(r20)
    stb r0, 0x12(r23)
    lbz r0, 0x13(r20)
    stb r0, 0x13(r23)
    lwz r3, 0x8(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000003A8
    beq lbl_fn_8007C46C_000003A4
    bl dtor_80084684
lbl_fn_8007C46C_000003A4:
    stw r26, 0x8(r23)
lbl_fn_8007C46C_000003A8:
    lwz r3, 0xc(r23)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000003C0
    beq lbl_fn_8007C46C_000003BC
    bl dtor_80084684
lbl_fn_8007C46C_000003BC:
    stw r26, 0xc(r23)
lbl_fn_8007C46C_000003C0:
    lwz r0, 0x8(r20)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_0000041C
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000418
    lwz r4, 0x8(r20)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_00000418:
    stw r3, 0x8(r23)
lbl_fn_8007C46C_0000041C:
    lwz r0, 0xc(r20)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000478
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000474
    lwz r4, 0xc(r20)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_00000474:
    stw r3, 0xc(r23)
lbl_fn_8007C46C_00000478:
    addi r22, r22, 0x18
    addi r23, r23, 0x18
    addi r19, r19, 0x1
lbl_fn_8007C46C_00000484:
    cmplw r19, r18
    blt lbl_fn_8007C46C_000002B8
    lis r4, fn_8007AA64@ha
    lwz r3, 0x108(r1)
    addi r4, r4, fn_8007AA64@l
    bl fn_80695A50
lbl_fn_8007C46C_0000049C:
    li r0, 0x8
    stw r21, 0x108(r1)
    stw r0, 0x104(r1)
    b lbl_fn_8007C46C_00000720
lbl_fn_8007C46C_000004AC:
    lwz r3, 0x100(r1)
    cmplw r3, r0
    blt lbl_fn_8007C46C_00000720
    slwi r22, r3, 1
    cmplw r0, r22
    bgt lbl_fn_8007C46C_00000720
    mulli r3, r22, 0x18
    li r4, 0x0
    la r5, lbl_8087D778
    la r6, lbl_8087D774
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007E9EC@ha
    lis r5, fn_8007AA64@ha
    mr r7, r22
    li r6, 0x18
    addi r4, r4, fn_8007E9EC@l
    addi r5, r5, fn_8007AA64@l
    bl fn_80695720
    lwz r0, 0x108(r1)
    mr r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000718
    lwz r0, 0x100(r1)
    mr r28, r22
    cmplw r22, r0
    ble lbl_fn_8007C46C_00000520
    mr r28, r0
lbl_fn_8007C46C_00000520:
    lwz r29, 0x108(r1)
    mr r18, r21
    li r25, 0x0
    li r19, 0x0
    b lbl_fn_8007C46C_00000700
lbl_fn_8007C46C_00000534:
    add r24, r29, r19
    lbz r0, 0x15(r24)
    stb r0, 0x15(r18)
    lbz r0, 0x14(r24)
    stb r0, 0x14(r18)
    lwzx r17, r29, r19
    cmpwi r17, 0x0
    beq lbl_fn_8007C46C_00000558
    b lbl_fn_8007C46C_0000055C
lbl_fn_8007C46C_00000558:
    la r17, lbl_8087EF00
lbl_fn_8007C46C_0000055C:
    cmpwi r17, 0x0
    beq lbl_fn_8007C46C_00000574
    mr r3, r17
    bl strlen
    mr r20, r3
    b lbl_fn_8007C46C_00000578
lbl_fn_8007C46C_00000574:
    li r20, 0x0
lbl_fn_8007C46C_00000578:
    cmpwi r17, 0x0
    beq lbl_fn_8007C46C_000005D0
    cmpwi r20, 0x0
    beq lbl_fn_8007C46C_000005D0
    addi r3, r20, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r23, r3
    mr r4, r17
    mr r5, r20
    bl memcpy
    stbx r26, r23, r20
    lwz r3, 0x0(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000005C8
    bl fn_80084C24
    stw r26, 0x0(r18)
lbl_fn_8007C46C_000005C8:
    stw r23, 0x0(r18)
    b lbl_fn_8007C46C_000005E4
lbl_fn_8007C46C_000005D0:
    lwz r3, 0x0(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000005E4
    bl fn_80084C24
    stw r26, 0x0(r18)
lbl_fn_8007C46C_000005E4:
    lbz r0, 0x11(r24)
    stb r0, 0x11(r18)
    lwz r0, 0x4(r24)
    stw r0, 0x4(r18)
    lbz r0, 0x10(r24)
    stb r0, 0x10(r18)
    lbz r0, 0x12(r24)
    stb r0, 0x12(r18)
    lbz r0, 0x13(r24)
    stb r0, 0x13(r18)
    lwz r3, 0x8(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000624
    beq lbl_fn_8007C46C_00000620
    bl dtor_80084684
lbl_fn_8007C46C_00000620:
    stw r26, 0x8(r18)
lbl_fn_8007C46C_00000624:
    lwz r3, 0xc(r18)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000063C
    beq lbl_fn_8007C46C_00000638
    bl dtor_80084684
lbl_fn_8007C46C_00000638:
    stw r26, 0xc(r18)
lbl_fn_8007C46C_0000063C:
    lwz r0, 0x8(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000698
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000694
    lwz r4, 0x8(r24)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_00000694:
    stw r3, 0x8(r18)
lbl_fn_8007C46C_00000698:
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_000006F4
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000006F0
    lwz r4, 0xc(r24)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_000006F0:
    stw r3, 0xc(r18)
lbl_fn_8007C46C_000006F4:
    addi r19, r19, 0x18
    addi r18, r18, 0x18
    addi r25, r25, 0x1
lbl_fn_8007C46C_00000700:
    cmplw r25, r28
    blt lbl_fn_8007C46C_00000534
    lis r4, fn_8007AA64@ha
    lwz r3, 0x108(r1)
    addi r4, r4, fn_8007AA64@l
    bl fn_80695A50
lbl_fn_8007C46C_00000718:
    stw r21, 0x108(r1)
    stw r22, 0x104(r1)
lbl_fn_8007C46C_00000720:
    lwz r0, 0x100(r1)
    lwz r4, 0x108(r1)
    mulli r3, r0, 0x18
    lbz r0, 0x125(r1)
    add r17, r4, r3
    stb r0, 0x15(r17)
    lbz r0, 0x124(r1)
    stb r0, 0x14(r17)
    lwz r20, 0x110(r1)
    cmpwi r20, 0x0
    beq lbl_fn_8007C46C_00000750
    b lbl_fn_8007C46C_00000754
lbl_fn_8007C46C_00000750:
    la r20, lbl_8087EF00
lbl_fn_8007C46C_00000754:
    cmpwi r20, 0x0
    beq lbl_fn_8007C46C_0000076C
    mr r3, r20
    bl strlen
    mr r19, r3
    b lbl_fn_8007C46C_00000770
lbl_fn_8007C46C_0000076C:
    li r19, 0x0
lbl_fn_8007C46C_00000770:
    cmpwi r20, 0x0
    beq lbl_fn_8007C46C_000007C8
    cmpwi r19, 0x0
    beq lbl_fn_8007C46C_000007C8
    addi r3, r19, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r18, r3
    mr r4, r20
    mr r5, r19
    bl memcpy
    stbx r26, r18, r19
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000007C0
    bl fn_80084C24
    stw r26, 0x0(r17)
lbl_fn_8007C46C_000007C0:
    stw r18, 0x0(r17)
    b lbl_fn_8007C46C_000007DC
lbl_fn_8007C46C_000007C8:
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000007DC
    bl fn_80084C24
    stw r26, 0x0(r17)
lbl_fn_8007C46C_000007DC:
    lbz r0, 0x121(r1)
    stb r0, 0x11(r17)
    lwz r0, 0x114(r1)
    stw r0, 0x4(r17)
    lbz r0, 0x120(r1)
    stb r0, 0x10(r17)
    lbz r0, 0x122(r1)
    stb r0, 0x12(r17)
    lbz r0, 0x123(r1)
    stb r0, 0x13(r17)
    lwz r3, 0x8(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000081C
    beq lbl_fn_8007C46C_00000818
    bl dtor_80084684
lbl_fn_8007C46C_00000818:
    stw r26, 0x8(r17)
lbl_fn_8007C46C_0000081C:
    lwz r3, 0xc(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000834
    beq lbl_fn_8007C46C_00000830
    bl dtor_80084684
lbl_fn_8007C46C_00000830:
    stw r26, 0xc(r17)
lbl_fn_8007C46C_00000834:
    lwz r0, 0x118(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000890
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000088C
    lwz r4, 0x118(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_0000088C:
    stw r3, 0x8(r17)
lbl_fn_8007C46C_00000890:
    lwz r0, 0x11c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_000008EC
    addi r5, r30, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000008E8
    lwz r4, 0x11c(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_000008E8:
    stw r3, 0xc(r17)
lbl_fn_8007C46C_000008EC:
    lwz r3, 0x118(r1)
    lwz r4, 0x100(r1)
    cmpwi r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0x100(r1)
    beq lbl_fn_8007C46C_00000910
    beq lbl_fn_8007C46C_0000090C
    bl dtor_80084684
lbl_fn_8007C46C_0000090C:
    stw r26, 0x118(r1)
lbl_fn_8007C46C_00000910:
    lwz r3, 0x11c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000928
    beq lbl_fn_8007C46C_00000924
    bl dtor_80084684
lbl_fn_8007C46C_00000924:
    stw r26, 0x11c(r1)
lbl_fn_8007C46C_00000928:
    lbz r0, 0x121(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00000950
    lwz r3, 0x114(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00000950
    li r4, 0x1
    bl fn_800D5808
    stb r26, 0x121(r1)
    stw r26, 0x114(r1)
lbl_fn_8007C46C_00000950:
    addic. r0, r1, 0x110
    beq lbl_fn_8007C46C_00002028
    lwz r3, 0x110(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00002028
    bl fn_80084C24
    stw r26, 0x110(r1)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000970:
    cmplwi r18, 0x15
    bgt lbl_fn_8007C46C_00002028
    lis r3, jumptable_8077845C@ha
    slwi r0, r18, 2
    addi r3, r3, jumptable_8077845C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    add r3, r16, r22
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0xa
    beq lbl_fn_8007C46C_000009AC
    cmpwi r0, 0xd
    bne lbl_fn_8007C46C_000009BC
lbl_fn_8007C46C_000009AC:
    addi r3, r1, 0x480
    addi r4, r30, lbl_80731D40@l
    bl strcpy
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_000009BC:
    mr r4, r17
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lwz r5, 0x9c(r1)
    mr r4, r16
    addi r3, r1, 0x480
    bl memcpy
    addi r3, r1, 0x480
    lwz r0, 0x9c(r1)
    mr r4, r3
    stbx r26, r4, r0
    bl fn_800DC6B4
    stw r3, 0x0(r15)
    b lbl_fn_8007C46C_00002028
    add r3, r16, r22
    lbz r0, 0x1(r3)
    extsb r0, r0
    cmpwi r0, 0xa
    beq lbl_fn_8007C46C_00000A14
    cmpwi r0, 0xd
    bne lbl_fn_8007C46C_00000A24
lbl_fn_8007C46C_00000A14:
    addi r3, r1, 0x380
    addi r4, r30, lbl_80731D40@l
    bl strcpy
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000A24:
    mr r4, r17
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lwz r5, 0x9c(r1)
    mr r4, r16
    addi r3, r1, 0x380
    bl memcpy
    addi r3, r1, 0x380
    lwz r0, 0x9c(r1)
    mr r4, r3
    stbx r26, r4, r0
    bl fn_800DC6B4
    stw r3, 0x4(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lis r3, lbl_80731A60@ha
    lwz r17, 0x9c(r1)
    addi r19, r3, lbl_80731A60@l
    li r18, 0x0
    b lbl_fn_8007C46C_00000ABC
lbl_fn_8007C46C_00000A88:
    mr r3, r20
    bl strlen
    cmpw r3, r17
    bne lbl_fn_8007C46C_00000AB4
    mr r3, r16
    mr r4, r20
    mr r5, r17
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00000AB4
    b lbl_fn_8007C46C_00000ACC
lbl_fn_8007C46C_00000AB4:
    addi r19, r19, 0x4
    addi r18, r18, 0x1
lbl_fn_8007C46C_00000ABC:
    lwz r20, 0x0(r19)
    cmpwi r20, 0x0
    bne lbl_fn_8007C46C_00000A88
    li r18, -0x1
lbl_fn_8007C46C_00000ACC:
    cmpwi r18, 0x0
    bne lbl_fn_8007C46C_00000ADC
    stb r27, 0x4e(r15)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000ADC:
    cmpwi r18, 0x1
    bne lbl_fn_8007C46C_00002028
    stb r26, 0x4e(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lis r3, lbl_80731A60@ha
    lwz r17, 0x9c(r1)
    addi r19, r3, lbl_80731A60@l
    li r18, 0x0
    b lbl_fn_8007C46C_00000B48
lbl_fn_8007C46C_00000B14:
    mr r3, r20
    bl strlen
    cmpw r3, r17
    bne lbl_fn_8007C46C_00000B40
    mr r3, r16
    mr r4, r20
    mr r5, r17
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00000B40
    b lbl_fn_8007C46C_00000B58
lbl_fn_8007C46C_00000B40:
    addi r19, r19, 0x4
    addi r18, r18, 0x1
lbl_fn_8007C46C_00000B48:
    lwz r20, 0x0(r19)
    cmpwi r20, 0x0
    bne lbl_fn_8007C46C_00000B14
    li r18, -0x1
lbl_fn_8007C46C_00000B58:
    cmpwi r18, 0x0
    bne lbl_fn_8007C46C_00000B68
    stb r27, 0x4f(r15)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000B68:
    cmpwi r18, 0x1
    bne lbl_fn_8007C46C_00002028
    stb r26, 0x4f(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lis r3, lbl_80731A60@ha
    lwz r17, 0x9c(r1)
    addi r19, r3, lbl_80731A60@l
    li r18, 0x0
    b lbl_fn_8007C46C_00000BD4
lbl_fn_8007C46C_00000BA0:
    mr r3, r20
    bl strlen
    cmpw r3, r17
    bne lbl_fn_8007C46C_00000BCC
    mr r3, r16
    mr r4, r20
    mr r5, r17
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00000BCC
    b lbl_fn_8007C46C_00000BE4
lbl_fn_8007C46C_00000BCC:
    addi r19, r19, 0x4
    addi r18, r18, 0x1
lbl_fn_8007C46C_00000BD4:
    lwz r20, 0x0(r19)
    cmpwi r20, 0x0
    bne lbl_fn_8007C46C_00000BA0
    li r18, -0x1
lbl_fn_8007C46C_00000BE4:
    cmpwi r18, 0x0
    bne lbl_fn_8007C46C_00000BF8
    stb r27, 0x50(r15)
    stb r27, 0x51(r15)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00000BF8:
    cmpwi r18, 0x1
    bne lbl_fn_8007C46C_00002028
    stb r26, 0x50(r15)
    stb r26, 0x51(r15)
    b lbl_fn_8007C46C_00002028
    lwz r17, lbl_80880B84
    add r3, r16, r22
    addi r5, r1, 0x9c
    mr r4, r17
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x580(r1)
    lwz r0, 0x584(r1)
    stb r0, 0x18(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x588(r1)
    lwz r0, 0x58c(r1)
    stb r0, 0x19(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x590(r1)
    lwz r0, 0x594(r1)
    stb r0, 0x1a(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0x598(r1)
    lwz r0, 0x59c(r1)
    stb r0, 0x1b(r15)
    b lbl_fn_8007C46C_00002028
    lwz r17, lbl_80880B84
    add r3, r16, r22
    addi r5, r1, 0x9c
    mr r4, r17
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x598(r1)
    lwz r0, 0x59c(r1)
    stb r0, 0x1c(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x590(r1)
    lwz r0, 0x594(r1)
    stb r0, 0x1d(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0x588(r1)
    lwz r0, 0x58c(r1)
    stb r0, 0x1e(r15)
    b lbl_fn_8007C46C_00002028
    lwz r17, lbl_80880B84
    add r3, r16, r22
    addi r5, r1, 0x9c
    mr r4, r17
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x598(r1)
    lwz r0, 0x59c(r1)
    stb r0, 0x20(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r17
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x590(r1)
    lwz r0, 0x594(r1)
    stb r0, 0x21(r15)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0x588(r1)
    lwz r0, 0x58c(r1)
    stb r0, 0x22(r15)
    b lbl_fn_8007C46C_00002028
    lwz r19, lbl_80880B84
    subi r17, r18, 0x10
    add r3, r16, r22
    addi r5, r1, 0x9c
    mr r4, r19
    bl fn_8007A994
    slwi r0, r17, 2
    mr r16, r3
    add r17, r15, r0
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r19
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x598(r1)
    lwz r0, 0x59c(r1)
    stb r0, 0x24(r17)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    mr r4, r19
    addi r5, r1, 0x9c
    fctiwz f0, f0
    stfd f0, 0x590(r1)
    lwz r0, 0x594(r1)
    stb r0, 0x25(r17)
    lwz r0, 0x9c(r1)
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fmuls f0, f30, f1
    fctiwz f0, f0
    stfd f0, 0x588(r1)
    lwz r0, 0x58c(r1)
    stb r0, 0x26(r17)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r20, r3
    addi r3, r1, 0x128
    bl fn_8007C0D8
    lis r3, lbl_80777D80@ha
    lwz r19, 0x9c(r1)
    addi r16, r3, lbl_80777D80@l
    li r17, 0x0
    b lbl_fn_8007C46C_00000EFC
lbl_fn_8007C46C_00000EC8:
    mr r3, r18
    bl strlen
    cmpw r3, r19
    bne lbl_fn_8007C46C_00000EF4
    mr r3, r20
    mr r4, r18
    mr r5, r19
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00000EF4
    b lbl_fn_8007C46C_00000F0C
lbl_fn_8007C46C_00000EF4:
    addi r16, r16, 0x4
    addi r17, r17, 0x1
lbl_fn_8007C46C_00000EFC:
    lwz r18, 0x0(r16)
    cmpwi r18, 0x0
    bne lbl_fn_8007C46C_00000EC8
    li r17, -0x1
lbl_fn_8007C46C_00000F0C:
    lwz r16, lbl_80880B84
    add r3, r20, r19
    stw r17, 0x128(r1)
    addi r5, r1, 0x9c
    mr r4, r16
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x130(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x134(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x138(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x13c(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x140(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x144(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x148(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x14c(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r17, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r16
    stfs f1, 0x150(r1)
    addi r5, r1, 0x9c
    add r3, r17, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lfs f0, 0x144(r1)
    li r3, 0x0
    stfs f1, 0x154(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_00001090
    lfs f0, 0x148(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_00001090
    lfs f0, 0x14c(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_00001090
    lfs f0, 0x150(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_00001090
    frsp f0, f1
    fcmpu cr0, f31, f0
    beq lbl_fn_8007C46C_00001094
lbl_fn_8007C46C_00001090:
    li r3, 0x1
lbl_fn_8007C46C_00001094:
    lbz r0, 0x178(r1)
    rlwimi r0, r3, 7, 24, 24
    stb r0, 0x178(r1)
    lwz r3, 0x9c(r1)
    lbzx r0, r16, r3
    extsb r0, r0
    cmpwi r0, 0x2c
    bne lbl_fn_8007C46C_000011D0
    lwz r17, lbl_80880B84
    add r3, r16, r3
    addi r5, r1, 0x9c
    mr r4, r17
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r17
    stfs f1, 0x158(r1)
    addi r5, r1, 0x9c
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r17
    stfs f1, 0x15c(r1)
    addi r5, r1, 0x9c
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r17
    stfs f1, 0x160(r1)
    addi r5, r1, 0x9c
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r17
    stfs f1, 0x164(r1)
    addi r5, r1, 0x9c
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lwz r0, 0x9c(r1)
    mr r4, r17
    stfs f1, 0x168(r1)
    addi r5, r1, 0x9c
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    lfs f0, 0x158(r1)
    li r3, 0x0
    stfs f1, 0x16c(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_000011C0
    lfs f0, 0x15c(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_000011C0
    lfs f0, 0x160(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_000011C0
    lfs f0, 0x164(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_000011C0
    lfs f0, 0x168(r1)
    fcmpu cr0, f31, f0
    bne lbl_fn_8007C46C_000011C0
    frsp f0, f1
    fcmpu cr0, f31, f0
    beq lbl_fn_8007C46C_000011C4
lbl_fn_8007C46C_000011C0:
    li r3, 0x1
lbl_fn_8007C46C_000011C4:
    lbz r0, 0x178(r1)
    rlwimi r0, r3, 6, 25, 25
    stb r0, 0x178(r1)
lbl_fn_8007C46C_000011D0:
    lwz r0, 0xfc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_000011E8
    lwz r0, 0xf8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8007C46C_00001328
lbl_fn_8007C46C_000011E8:
    lwz r0, 0xf8(r1)
    cmplwi r0, 0x8
    bgt lbl_fn_8007C46C_00001470
    li r3, 0x2b0
    li r4, 0x0
    la r5, lbl_8087D770
    la r6, lbl_8087D76C
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007C0D8@ha
    li r5, 0x0
    addi r4, r4, fn_8007C0D8@l
    li r6, 0x54
    li r7, 0x8
    bl fn_80695720
    lwz r0, 0xfc(r1)
    mr r17, r3
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00001318
    lwz r4, 0xf4(r1)
    li r0, 0x8
    cmplwi r4, 0x8
    bge lbl_fn_8007C46C_00001248
    mr r0, r4
lbl_fn_8007C46C_00001248:
    lwz r5, 0xfc(r1)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8007C46C_00001304
lbl_fn_8007C46C_0000125C:
    lwzx r0, r5, r4
    add r7, r5, r4
    stwx r0, r3, r4
    add r6, r3, r4
    addi r4, r4, 0x54
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r7)
    stfs f0, 0x14(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r7)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f2, 0x38(r7)
    psq_l f1, 0x30(r7), 0, 0
    psq_st f1, 0x30(r6), 0, 0
    stfs f2, 0x38(r6)
    lfs f2, 0x44(r7)
    psq_l f1, 0x3c(r7), 0, 0
    psq_st f1, 0x3c(r6), 0, 0
    stfs f2, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lbz r0, 0x50(r7)
    stb r0, 0x50(r6)
    bdnz lbl_fn_8007C46C_0000125C
lbl_fn_8007C46C_00001304:
    lwz r3, 0xfc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00001318
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8007C46C_00001318:
    li r0, 0x8
    stw r17, 0xfc(r1)
    stw r0, 0xf8(r1)
    b lbl_fn_8007C46C_00001470
lbl_fn_8007C46C_00001328:
    lwz r3, 0xf4(r1)
    cmplw r3, r0
    blt lbl_fn_8007C46C_00001470
    slwi r17, r3, 1
    cmplw r0, r17
    bgt lbl_fn_8007C46C_00001470
    mulli r3, r17, 0x54
    li r4, 0x0
    la r5, lbl_8087D770
    la r6, lbl_8087D76C
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_8007C0D8@ha
    mr r7, r17
    addi r4, r4, fn_8007C0D8@l
    li r5, 0x0
    li r6, 0x54
    bl fn_80695720
    lwz r0, 0xfc(r1)
    mr r18, r3
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00001468
    lwz r4, 0xf4(r1)
    mr r0, r17
    cmplw r17, r4
    ble lbl_fn_8007C46C_00001398
    mr r0, r4
lbl_fn_8007C46C_00001398:
    lwz r5, 0xfc(r1)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8007C46C_00001454
lbl_fn_8007C46C_000013AC:
    lwzx r0, r5, r4
    add r7, r5, r4
    stwx r0, r3, r4
    add r6, r3, r4
    addi r4, r4, 0x54
    lwz r0, 0x4(r7)
    stw r0, 0x4(r6)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r6)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r6)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r6)
    lfs f0, 0x14(r7)
    stfs f0, 0x14(r6)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r6)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r6)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r6)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r6)
    lfs f0, 0x28(r7)
    stfs f0, 0x28(r6)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r6)
    lfs f2, 0x38(r7)
    psq_l f1, 0x30(r7), 0, 0
    psq_st f1, 0x30(r6), 0, 0
    stfs f2, 0x38(r6)
    lfs f2, 0x44(r7)
    psq_l f1, 0x3c(r7), 0, 0
    psq_st f1, 0x3c(r6), 0, 0
    stfs f2, 0x44(r6)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r6)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r6)
    lbz r0, 0x50(r7)
    stb r0, 0x50(r6)
    bdnz lbl_fn_8007C46C_000013AC
lbl_fn_8007C46C_00001454:
    lwz r3, 0xfc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00001468
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8007C46C_00001468:
    stw r18, 0xfc(r1)
    stw r17, 0xf8(r1)
lbl_fn_8007C46C_00001470:
    lwz r3, 0xf4(r1)
    lwz r5, 0xfc(r1)
    addi r0, r3, 0x1
    stw r0, 0xf4(r1)
    mulli r4, r3, 0x54
    lwz r3, 0x128(r1)
    stwux r3, r4, r5
    addi r3, r1, 0x158
    lwz r0, 0x12c(r1)
    stw r0, 0x4(r4)
    lfs f0, 0x130(r1)
    stfs f0, 0x8(r4)
    lfs f0, 0x134(r1)
    stfs f0, 0xc(r4)
    lfs f0, 0x138(r1)
    stfs f0, 0x10(r4)
    lfs f0, 0x13c(r1)
    stfs f0, 0x14(r4)
    lfs f0, 0x140(r1)
    stfs f0, 0x18(r4)
    lfs f0, 0x144(r1)
    stfs f0, 0x1c(r4)
    lfs f0, 0x148(r1)
    stfs f0, 0x20(r4)
    lfs f0, 0x14c(r1)
    stfs f0, 0x24(r4)
    lfs f0, 0x150(r1)
    stfs f0, 0x28(r4)
    lfs f0, 0x154(r1)
    stfs f0, 0x2c(r4)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x164
    lfs f2, 0x160(r1)
    psq_st f1, 0x30(r4), 0, 0
    stfs f2, 0x38(r4)
    lfs f2, 0x16c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x170(r1)
    stfs f0, 0x48(r4)
    lfs f0, 0x174(r1)
    stfs f0, 0x4c(r4)
    lbz r0, 0x178(r1)
    stb r0, 0x50(r4)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    stfs f1, 0x30(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC288
    fcmpo cr0, f1, f28
    stw r26, 0x34(r15)
    bge lbl_fn_8007C46C_00001578
    li r0, 0x3
    stw r0, 0x34(r15)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_00001578:
    ble lbl_fn_8007C46C_00002028
    fcmpo cr0, f1, f29
    bge lbl_fn_8007C46C_0000158C
    stw r27, 0x34(r15)
    b lbl_fn_8007C46C_00002028
lbl_fn_8007C46C_0000158C:
    li r0, 0x2
    stw r0, 0x34(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    stw r26, 0xdc(r1)
    addi r17, r31, 0x5f
    mr r16, r3
    stw r26, 0xe0(r1)
    mr r3, r17
    stw r26, 0xe4(r1)
    bl strlen
    mr r18, r3
    addi r3, r1, 0xdc
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x48(r1)
    addi r3, r1, 0xdc
    stb r0, 0x44(r1)
    mr r6, r17
    add r7, r17, r18
    addi r8, r1, 0x44
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r17, 0x9c(r1)
    addi r3, r1, 0xd0
    stw r26, 0xd0(r1)
    mr r4, r17
    stw r26, 0xd4(r1)
    stw r26, 0xd8(r1)
    bl fn_80013DC4
    lbz r0, 0x40(r1)
    addi r3, r1, 0xd0
    stb r0, 0x3c(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x3c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xdc(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001660
    lbz r0, 0xdc(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007C46C_00001664
lbl_fn_8007C46C_00001660:
    lwz r4, 0xe0(r1)
lbl_fn_8007C46C_00001664:
    lwz r0, 0xd0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_8007C46C_0000168C
    lbz r0, 0xd0(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001690
lbl_fn_8007C46C_0000168C:
    lwz r0, 0xd4(r1)
lbl_fn_8007C46C_00001690:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_8007C46C_00001790
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_000016B8
    lbz r0, 0xd0(r1)
    addi r4, r1, 0xd1
    clrlwi r17, r0, 25
    b lbl_fn_8007C46C_000016C0
lbl_fn_8007C46C_000016B8:
    lwz r4, 0xd8(r1)
    lwz r17, 0xd4(r1)
lbl_fn_8007C46C_000016C0:
    lwz r0, 0xdc(r1)
    stw r17, 0x94(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_000016EC
    lbz r0, 0xdc(r1)
    clrlwi r5, r0, 25
    b lbl_fn_8007C46C_000016F0
lbl_fn_8007C46C_000016EC:
    lwz r5, 0xe0(r1)
lbl_fn_8007C46C_000016F0:
    lwz r0, 0xdc(r1)
    stw r5, 0x98(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001720
    lbz r0, 0xdc(r1)
    addi r3, r1, 0xdd
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001728
lbl_fn_8007C46C_00001720:
    lwz r3, 0xe4(r1)
    lwz r0, 0xe0(r1)
lbl_fn_8007C46C_00001728:
    cmplw r5, r0
    stw r0, 0x90(r1)
    addi r5, r1, 0x90
    bge lbl_fn_8007C46C_0000173C
    addi r5, r1, 0x98
lbl_fn_8007C46C_0000173C:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x8c
    stw r0, 0x8c(r1)
    cmplw r17, r0
    bge lbl_fn_8007C46C_00001754
    addi r5, r1, 0x94
lbl_fn_8007C46C_00001754:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001788
    lwz r0, 0x8c(r1)
    cmplw r0, r17
    bge lbl_fn_8007C46C_00001778
    li r3, -0x1
    b lbl_fn_8007C46C_00001788
lbl_fn_8007C46C_00001778:
    bne lbl_fn_8007C46C_00001784
    li r3, 0x0
    b lbl_fn_8007C46C_00001788
lbl_fn_8007C46C_00001784:
    li r3, 0x1
lbl_fn_8007C46C_00001788:
    cntlzw r0, r3
    srwi r4, r0, 5
lbl_fn_8007C46C_00001790:
    lwz r0, 0x14(r15)
    rlwimi r0, r4, 11, 20, 20
    stw r0, 0x14(r15)
    lwz r0, 0xd0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_000017C0
    lwz r3, 0xd8(r1)
    bl dtor_80084684
lbl_fn_8007C46C_000017C0:
    lwz r0, 0xdc(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00002028
    lwz r3, 0xe4(r1)
    bl dtor_80084684
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    stw r26, 0xc4(r1)
    addi r17, r31, 0x62
    mr r16, r3
    stw r26, 0xc8(r1)
    mr r3, r17
    stw r26, 0xcc(r1)
    bl strlen
    mr r18, r3
    addi r3, r1, 0xc4
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x38(r1)
    addi r3, r1, 0xc4
    stb r0, 0x34(r1)
    mr r6, r17
    add r7, r17, r18
    addi r8, r1, 0x34
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r17, 0x9c(r1)
    addi r3, r1, 0xb8
    stw r26, 0xb8(r1)
    mr r4, r17
    stw r26, 0xbc(r1)
    stw r26, 0xc0(r1)
    bl fn_80013DC4
    lbz r0, 0x30(r1)
    addi r3, r1, 0xb8
    stb r0, 0x2c(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x2c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xc4(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_000018B0
    lbz r0, 0xc4(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007C46C_000018B4
lbl_fn_8007C46C_000018B0:
    lwz r4, 0xc8(r1)
lbl_fn_8007C46C_000018B4:
    lwz r0, 0xb8(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_8007C46C_000018DC
    lbz r0, 0xb8(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_000018E0
lbl_fn_8007C46C_000018DC:
    lwz r0, 0xbc(r1)
lbl_fn_8007C46C_000018E0:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_8007C46C_000019E0
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001908
    lbz r0, 0xb8(r1)
    addi r4, r1, 0xb9
    clrlwi r17, r0, 25
    b lbl_fn_8007C46C_00001910
lbl_fn_8007C46C_00001908:
    lwz r4, 0xc0(r1)
    lwz r17, 0xbc(r1)
lbl_fn_8007C46C_00001910:
    lwz r0, 0xc4(r1)
    stw r17, 0x84(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_0000193C
    lbz r0, 0xc4(r1)
    clrlwi r5, r0, 25
    b lbl_fn_8007C46C_00001940
lbl_fn_8007C46C_0000193C:
    lwz r5, 0xc8(r1)
lbl_fn_8007C46C_00001940:
    lwz r0, 0xc4(r1)
    stw r5, 0x88(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001970
    lbz r0, 0xc4(r1)
    addi r3, r1, 0xc5
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001978
lbl_fn_8007C46C_00001970:
    lwz r3, 0xcc(r1)
    lwz r0, 0xc8(r1)
lbl_fn_8007C46C_00001978:
    cmplw r5, r0
    stw r0, 0x80(r1)
    addi r5, r1, 0x80
    bge lbl_fn_8007C46C_0000198C
    addi r5, r1, 0x88
lbl_fn_8007C46C_0000198C:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x7c
    stw r0, 0x7c(r1)
    cmplw r17, r0
    bge lbl_fn_8007C46C_000019A4
    addi r5, r1, 0x84
lbl_fn_8007C46C_000019A4:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_000019D8
    lwz r0, 0x7c(r1)
    cmplw r0, r17
    bge lbl_fn_8007C46C_000019C8
    li r3, -0x1
    b lbl_fn_8007C46C_000019D8
lbl_fn_8007C46C_000019C8:
    bne lbl_fn_8007C46C_000019D4
    li r3, 0x0
    b lbl_fn_8007C46C_000019D8
lbl_fn_8007C46C_000019D4:
    li r3, 0x1
lbl_fn_8007C46C_000019D8:
    cntlzw r0, r3
    srwi r4, r0, 5
lbl_fn_8007C46C_000019E0:
    neg r3, r4
    lwz r0, 0x14(r15)
    or r3, r3, r4
    rlwimi r0, r3, 13, 19, 19
    stw r0, 0x14(r15)
    lwz r0, 0xb8(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00001A18
    lwz r3, 0xc0(r1)
    bl dtor_80084684
lbl_fn_8007C46C_00001A18:
    lwz r0, 0xc4(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00002028
    lwz r3, 0xcc(r1)
    bl dtor_80084684
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    lis r3, lbl_80777D40@ha
    lwz r17, 0x9c(r1)
    addi r18, r3, lbl_80777D40@l
    li r20, 0x0
    b lbl_fn_8007C46C_00001ACC
lbl_fn_8007C46C_00001A98:
    mr r3, r19
    bl strlen
    cmpw r3, r17
    bne lbl_fn_8007C46C_00001AC4
    mr r3, r16
    mr r4, r19
    mr r5, r17
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001AC4
    b lbl_fn_8007C46C_00001ADC
lbl_fn_8007C46C_00001AC4:
    addi r18, r18, 0x4
    addi r20, r20, 0x1
lbl_fn_8007C46C_00001ACC:
    lwz r19, 0x0(r18)
    cmpwi r19, 0x0
    bne lbl_fn_8007C46C_00001A98
    li r20, -0x1
lbl_fn_8007C46C_00001ADC:
    cmpwi r20, 0x4
    beq lbl_fn_8007C46C_00001AEC
    cmpwi r20, 0x7
    bne lbl_fn_8007C46C_00001AF8
lbl_fn_8007C46C_00001AEC:
    lbz r0, 0x48(r15)
    ori r0, r0, 0x2
    stb r0, 0x48(r15)
lbl_fn_8007C46C_00001AF8:
    cmpwi r20, -0x1
    bne lbl_fn_8007C46C_00001B3C
    lwz r5, 0x9c(r1)
    mr r4, r16
    addi r3, r1, 0x280
    li r20, 0x1
    bl memcpy
    mr r6, r14
    addi r3, r1, 0x180
    addi r4, r31, 0x68
    addi r5, r1, 0x280
    crclr 6
    bl sprintf
    stb r26, 0x27f(r1)
    addi r4, r1, 0x180
    lwz r3, lbl_8087EEB8
    bl fn_800697D8
lbl_fn_8007C46C_00001B3C:
    clrlwi r4, r20, 24
    stb r20, 0x4d(r15)
    mr r3, r15
    extsb r4, r4
    bl fn_8007FAF0
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    lwz r17, 0x9c(r1)
    mr r16, r3
    stw r26, 0xe8(r1)
    addi r3, r1, 0xe8
    mr r4, r17
    stw r26, 0xec(r1)
    stw r26, 0xf0(r1)
    bl fn_80013DC4
    lbz r0, 0x28(r1)
    addi r3, r1, 0xe8
    stb r0, 0x24(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x24
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r18, r31, 0x86
    mr r3, r18
    bl strlen
    lwz r0, 0xe8(r1)
    mr r17, r3
    stw r3, 0x74(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001BE4
    lbz r0, 0xe8(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007C46C_00001BE8
lbl_fn_8007C46C_00001BE4:
    lwz r4, 0xec(r1)
lbl_fn_8007C46C_00001BE8:
    lwz r0, 0xe8(r1)
    stw r4, 0x78(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001C18
    lbz r0, 0xe8(r1)
    addi r6, r1, 0xe9
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001C20
lbl_fn_8007C46C_00001C18:
    lwz r6, 0xf0(r1)
    lwz r0, 0xec(r1)
lbl_fn_8007C46C_00001C20:
    cmplw r4, r0
    stw r0, 0x70(r1)
    addi r4, r1, 0x70
    bge lbl_fn_8007C46C_00001C34
    addi r4, r1, 0x78
lbl_fn_8007C46C_00001C34:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x6c
    stw r0, 0x6c(r1)
    cmplw r3, r0
    bge lbl_fn_8007C46C_00001C4C
    addi r4, r1, 0x74
lbl_fn_8007C46C_00001C4C:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r18
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001C88
    lwz r0, 0x6c(r1)
    cmplw r0, r17
    bge lbl_fn_8007C46C_00001C78
    li r3, -0x1
    b lbl_fn_8007C46C_00001C88
lbl_fn_8007C46C_00001C78:
    bne lbl_fn_8007C46C_00001C84
    li r3, 0x0
    b lbl_fn_8007C46C_00001C88
lbl_fn_8007C46C_00001C84:
    li r3, 0x1
lbl_fn_8007C46C_00001C88:
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001C98
    li r0, 0x0
    b lbl_fn_8007C46C_00001D88
lbl_fn_8007C46C_00001C98:
    addi r18, r31, 0x5f
    mr r3, r18
    bl strlen
    lwz r0, 0xe8(r1)
    mr r17, r3
    stw r3, 0x64(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001CD4
    lbz r0, 0xe8(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007C46C_00001CD8
lbl_fn_8007C46C_00001CD4:
    lwz r4, 0xec(r1)
lbl_fn_8007C46C_00001CD8:
    lwz r0, 0xe8(r1)
    stw r4, 0x68(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001D08
    lbz r0, 0xe8(r1)
    addi r6, r1, 0xe9
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001D10
lbl_fn_8007C46C_00001D08:
    lwz r6, 0xf0(r1)
    lwz r0, 0xec(r1)
lbl_fn_8007C46C_00001D10:
    cmplw r4, r0
    stw r0, 0x60(r1)
    addi r4, r1, 0x60
    bge lbl_fn_8007C46C_00001D24
    addi r4, r1, 0x68
lbl_fn_8007C46C_00001D24:
    lwz r0, 0x0(r4)
    addi r4, r1, 0x5c
    stw r0, 0x5c(r1)
    cmplw r3, r0
    bge lbl_fn_8007C46C_00001D3C
    addi r4, r1, 0x64
lbl_fn_8007C46C_00001D3C:
    lwz r5, 0x0(r4)
    mr r3, r6
    mr r4, r18
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001D78
    lwz r0, 0x5c(r1)
    cmplw r0, r17
    bge lbl_fn_8007C46C_00001D68
    li r3, -0x1
    b lbl_fn_8007C46C_00001D78
lbl_fn_8007C46C_00001D68:
    bne lbl_fn_8007C46C_00001D74
    li r3, 0x0
    b lbl_fn_8007C46C_00001D78
lbl_fn_8007C46C_00001D74:
    li r3, 0x1
lbl_fn_8007C46C_00001D78:
    cmpwi r3, 0x0
    li r0, 0x2
    bne lbl_fn_8007C46C_00001D88
    li r0, 0x3
lbl_fn_8007C46C_00001D88:
    stb r0, 0x4c(r15)
    lwz r0, 0xe8(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00002028
    lwz r3, 0xf0(r1)
    bl dtor_80084684
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    stw r26, 0xac(r1)
    addi r17, r31, 0x8a
    mr r16, r3
    stw r26, 0xb0(r1)
    mr r3, r17
    stw r26, 0xb4(r1)
    bl strlen
    mr r18, r3
    addi r3, r1, 0xac
    mr r4, r18
    bl fn_80013DC4
    lbz r0, 0x20(r1)
    addi r3, r1, 0xac
    stb r0, 0x1c(r1)
    mr r6, r17
    add r7, r17, r18
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r17, 0x9c(r1)
    addi r3, r1, 0xa0
    stw r26, 0xa0(r1)
    mr r4, r17
    stw r26, 0xa4(r1)
    stw r26, 0xa8(r1)
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    addi r3, r1, 0xa0
    stb r0, 0x14(r1)
    mr r6, r16
    add r7, r16, r17
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0xac(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001E7C
    lbz r0, 0xac(r1)
    clrlwi r4, r0, 25
    b lbl_fn_8007C46C_00001E80
lbl_fn_8007C46C_00001E7C:
    lwz r4, 0xb0(r1)
lbl_fn_8007C46C_00001E80:
    lwz r0, 0xa0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r3, r0, 5
    bne lbl_fn_8007C46C_00001EA8
    lbz r0, 0xa0(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001EAC
lbl_fn_8007C46C_00001EA8:
    lwz r0, 0xa4(r1)
lbl_fn_8007C46C_00001EAC:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r17, r0, 5
    beq lbl_fn_8007C46C_00001FAC
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001ED4
    lbz r0, 0xa0(r1)
    addi r4, r1, 0xa1
    clrlwi r17, r0, 25
    b lbl_fn_8007C46C_00001EDC
lbl_fn_8007C46C_00001ED4:
    lwz r4, 0xa8(r1)
    lwz r17, 0xa4(r1)
lbl_fn_8007C46C_00001EDC:
    lwz r0, 0xac(r1)
    stw r17, 0x54(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001F08
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
    b lbl_fn_8007C46C_00001F0C
lbl_fn_8007C46C_00001F08:
    lwz r5, 0xb0(r1)
lbl_fn_8007C46C_00001F0C:
    lwz r0, 0xac(r1)
    stw r5, 0x58(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8007C46C_00001F3C
    lbz r0, 0xac(r1)
    addi r3, r1, 0xad
    clrlwi r0, r0, 25
    b lbl_fn_8007C46C_00001F44
lbl_fn_8007C46C_00001F3C:
    lwz r3, 0xb4(r1)
    lwz r0, 0xb0(r1)
lbl_fn_8007C46C_00001F44:
    cmplw r5, r0
    stw r0, 0x50(r1)
    addi r5, r1, 0x50
    bge lbl_fn_8007C46C_00001F58
    addi r5, r1, 0x58
lbl_fn_8007C46C_00001F58:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x4c
    stw r0, 0x4c(r1)
    cmplw r17, r0
    bge lbl_fn_8007C46C_00001F70
    addi r5, r1, 0x54
lbl_fn_8007C46C_00001F70:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8007C46C_00001FA4
    lwz r0, 0x4c(r1)
    cmplw r0, r17
    bge lbl_fn_8007C46C_00001F94
    li r3, -0x1
    b lbl_fn_8007C46C_00001FA4
lbl_fn_8007C46C_00001F94:
    bne lbl_fn_8007C46C_00001FA0
    li r3, 0x0
    b lbl_fn_8007C46C_00001FA4
lbl_fn_8007C46C_00001FA0:
    li r3, 0x1
lbl_fn_8007C46C_00001FA4:
    cntlzw r0, r3
    srwi r17, r0, 5
lbl_fn_8007C46C_00001FAC:
    lwz r0, 0xa0(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00001FD0
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_8007C46C_00001FD0:
    lwz r0, 0xac(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8007C46C_00001FF4
    lwz r3, 0xb4(r1)
    bl dtor_80084684
lbl_fn_8007C46C_00001FF4:
    cmpwi r17, 0x0
    beq lbl_fn_8007C46C_00002028
    lbz r0, 0x48(r15)
    ori r0, r0, 0x1
    stb r0, 0x48(r15)
    b lbl_fn_8007C46C_00002028
    mr r4, r17
    add r3, r16, r22
    addi r5, r1, 0x9c
    bl fn_8007A994
    mr r16, r3
    bl fn_800DC12C
    stw r3, 0x44(r15)
lbl_fn_8007C46C_00002028:
    lwz r17, lbl_80880B84
    addi r5, r1, 0x9c
    lwz r0, 0x9c(r1)
    mr r4, r17
    add r3, r16, r0
    bl fn_8007A994
    mr r16, r3
lbl_fn_8007C46C_00002044:
    cmpwi r16, 0x0
    beq lbl_fn_8007C46C_0000206C
    lwz r0, 0x8(r1)
    subf r3, r0, r16
    lwz r0, 0xc(r1)
    cmpw r3, r0
    bge lbl_fn_8007C46C_0000206C
    lbz r0, 0x0(r16)
    cmpwi r0, 0x9
    beq lbl_fn_8007C46C_000000B0
lbl_fn_8007C46C_0000206C:
    lwz r0, 0x100(r1)
    addi r5, r1, 0x10
    lwz r3, 0x108(r1)
    mulli r0, r0, 0x18
    add r4, r3, r0
    bl fn_8007EA24
    lwz r0, 0x100(r1)
    stb r0, 0x4a(r15)
    clrlwi. r14, r0, 24
    bne lbl_fn_8007C46C_0000209C
    li r3, 0x0
    b lbl_fn_8007C46C_000020D8
lbl_fn_8007C46C_0000209C:
    mulli r3, r14, 0x18
    lis r5, lbl_80731D40@ha
    li r4, 0x6
    addi r5, r5, lbl_80731D40@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8007E9EC@ha
    lis r5, fn_8007AA64@ha
    mr r7, r14
    li r6, 0x18
    addi r4, r4, fn_8007E9EC@l
    addi r5, r5, fn_8007AA64@l
    bl fn_80695720
lbl_fn_8007C46C_000020D8:
    stw r3, 0xc(r15)
    li r20, 0x0
    lwz r14, 0x108(r1)
    li r19, 0x0
    li r22, 0x0
    lis r21, lbl_80731D40@ha
    b lbl_fn_8007C46C_000022C4
lbl_fn_8007C46C_000020F4:
    lwz r3, 0xc(r15)
    add r18, r14, r19
    lbz r0, 0x15(r18)
    add r17, r3, r19
    stb r0, 0x15(r17)
    lbz r0, 0x14(r18)
    stb r0, 0x14(r17)
    lwzx r25, r14, r19
    cmpwi r25, 0x0
    beq lbl_fn_8007C46C_00002120
    b lbl_fn_8007C46C_00002124
lbl_fn_8007C46C_00002120:
    la r25, lbl_8087EF00
lbl_fn_8007C46C_00002124:
    cmpwi r25, 0x0
    beq lbl_fn_8007C46C_0000213C
    mr r3, r25
    bl strlen
    mr r24, r3
    b lbl_fn_8007C46C_00002140
lbl_fn_8007C46C_0000213C:
    li r24, 0x0
lbl_fn_8007C46C_00002140:
    cmpwi r25, 0x0
    beq lbl_fn_8007C46C_00002198
    cmpwi r24, 0x0
    beq lbl_fn_8007C46C_00002198
    addi r3, r24, 0x1
    li r4, 0x1
    la r5, lbl_8087D790
    la r6, lbl_8087D78C
    li r7, 0x0
    bl fn_800846FC
    mr r23, r3
    mr r4, r25
    mr r5, r24
    bl memcpy
    stbx r22, r23, r24
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00002190
    bl fn_80084C24
    stw r22, 0x0(r17)
lbl_fn_8007C46C_00002190:
    stw r23, 0x0(r17)
    b lbl_fn_8007C46C_000021AC
lbl_fn_8007C46C_00002198:
    lwz r3, 0x0(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000021AC
    bl fn_80084C24
    stw r22, 0x0(r17)
lbl_fn_8007C46C_000021AC:
    lbz r0, 0x11(r18)
    stb r0, 0x11(r17)
    lwz r0, 0x4(r18)
    stw r0, 0x4(r17)
    lbz r0, 0x10(r18)
    stb r0, 0x10(r17)
    lbz r0, 0x12(r18)
    stb r0, 0x12(r17)
    lbz r0, 0x13(r18)
    stb r0, 0x13(r17)
    lwz r3, 0x8(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000021EC
    beq lbl_fn_8007C46C_000021E8
    bl dtor_80084684
lbl_fn_8007C46C_000021E8:
    stw r22, 0x8(r17)
lbl_fn_8007C46C_000021EC:
    lwz r3, 0xc(r17)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00002204
    beq lbl_fn_8007C46C_00002200
    bl dtor_80084684
lbl_fn_8007C46C_00002200:
    stw r22, 0xc(r17)
lbl_fn_8007C46C_00002204:
    lwz r0, 0x8(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00002260
    addi r5, r21, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000225C
    lwz r4, 0x8(r18)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_0000225C:
    stw r3, 0x8(r17)
lbl_fn_8007C46C_00002260:
    lwz r0, 0xc(r18)
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_000022BC
    addi r5, r21, lbl_80731D40@l
    li r3, 0x14
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_000022B8
    lwz r4, 0xc(r18)
    lfs f0, 0x0(r4)
    stfs f0, 0x0(r3)
    lfs f0, 0x4(r4)
    stfs f0, 0x4(r3)
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r3)
    lfs f0, 0xc(r4)
    stfs f0, 0xc(r3)
    lfs f0, 0x10(r4)
    stfs f0, 0x10(r3)
lbl_fn_8007C46C_000022B8:
    stw r3, 0xc(r17)
lbl_fn_8007C46C_000022BC:
    addi r19, r19, 0x18
    addi r20, r20, 0x1
lbl_fn_8007C46C_000022C4:
    lbz r0, 0x4a(r15)
    cmpw r20, r0
    blt lbl_fn_8007C46C_000020F4
    lwz r0, 0xf4(r1)
    stb r0, 0x4b(r15)
    clrlwi. r14, r0, 24
    bne lbl_fn_8007C46C_000022E8
    li r3, 0x0
    b lbl_fn_8007C46C_00002320
lbl_fn_8007C46C_000022E8:
    mulli r3, r14, 0x54
    lis r5, lbl_80731D40@ha
    li r4, 0x6
    addi r5, r5, lbl_80731D40@l
    mr r6, r5
    li r7, 0x0
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8007C0D8@ha
    mr r7, r14
    addi r4, r4, fn_8007C0D8@l
    li r5, 0x0
    li r6, 0x54
    bl fn_80695720
lbl_fn_8007C46C_00002320:
    stw r3, 0x10(r15)
    li r10, 0x0
    lwz r5, 0xfc(r1)
    li r3, 0x0
    b lbl_fn_8007C46C_00002438
lbl_fn_8007C46C_00002334:
    lwz r4, 0x10(r15)
    add r7, r5, r3
    lwzx r0, r5, r3
    li r6, 0x0
    stwux r0, r4, r3
    li r8, 0x0
    lwz r0, 0x4(r7)
    stw r0, 0x4(r4)
    lfs f0, 0x8(r7)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r7)
    stfs f0, 0xc(r4)
    lfs f0, 0x10(r7)
    stfs f0, 0x10(r4)
    lfs f0, 0x14(r7)
    stfs f0, 0x14(r4)
    lfs f0, 0x18(r7)
    stfs f0, 0x18(r4)
    lfs f0, 0x1c(r7)
    stfs f0, 0x1c(r4)
    lfs f0, 0x20(r7)
    stfs f0, 0x20(r4)
    lfs f0, 0x24(r7)
    stfs f0, 0x24(r4)
    lfs f0, 0x28(r7)
    stfs f0, 0x28(r4)
    lfs f0, 0x2c(r7)
    stfs f0, 0x2c(r4)
    lfs f2, 0x38(r7)
    psq_l f1, 0x30(r7), 0, 0
    psq_st f1, 0x30(r4), 0, 0
    stfs f2, 0x38(r4)
    lfs f2, 0x44(r7)
    psq_l f1, 0x3c(r7), 0, 0
    psq_st f1, 0x3c(r4), 0, 0
    stfs f2, 0x44(r4)
    lfs f0, 0x48(r7)
    stfs f0, 0x48(r4)
    lfs f0, 0x4c(r7)
    stfs f0, 0x4c(r4)
    lbz r0, 0x50(r7)
    stb r0, 0x50(r4)
    lwz r0, 0x10(r15)
    lbz r4, 0x4a(r15)
    add r9, r0, r3
    lwzx r0, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_8007C46C_00002428
lbl_fn_8007C46C_000023F8:
    lwz r7, 0xc(r15)
    add r4, r7, r8
    lbz r4, 0x10(r4)
    extsb r4, r4
    cmpw r0, r4
    bne lbl_fn_8007C46C_0000241C
    mulli r0, r6, 0x18
    add r0, r7, r0
    b lbl_fn_8007C46C_0000242C
lbl_fn_8007C46C_0000241C:
    addi r8, r8, 0x18
    addi r6, r6, 0x1
    bdnz lbl_fn_8007C46C_000023F8
lbl_fn_8007C46C_00002428:
    li r0, 0x0
lbl_fn_8007C46C_0000242C:
    stw r0, 0x4(r9)
    addi r10, r10, 0x1
    addi r3, r3, 0x54
lbl_fn_8007C46C_00002438:
    lbz r0, 0x4b(r15)
    cmpw r10, r0
    blt lbl_fn_8007C46C_00002334
    mr r3, r15
    addi r4, r1, 0x380
    bl fn_80081080
    lwz r0, 0x14(r15)
    li r6, 0x0
    ori r4, r6, 0x1
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8007C46C_00002468
    ori r4, r6, 0x2
lbl_fn_8007C46C_00002468:
    lbz r9, 0x4a(r15)
    mr r6, r4
    li r5, 0x0
    li r7, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007C46C_000024B0
lbl_fn_8007C46C_00002484:
    lwz r8, 0xc(r15)
    add r3, r8, r7
    lbz r0, 0x10(r3)
    cmpwi r0, 0x15
    bne lbl_fn_8007C46C_000024A4
    mulli r0, r5, 0x18
    add r0, r8, r0
    b lbl_fn_8007C46C_000024B4
lbl_fn_8007C46C_000024A4:
    addi r7, r7, 0x18
    addi r5, r5, 0x1
    bdnz lbl_fn_8007C46C_00002484
lbl_fn_8007C46C_000024B0:
    li r0, 0x0
lbl_fn_8007C46C_000024B4:
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_000024C0
    ori r6, r4, 0x4
lbl_fn_8007C46C_000024C0:
    li r4, 0x0
    li r5, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8007C46C_00002500
lbl_fn_8007C46C_000024D4:
    lwz r7, 0xc(r15)
    add r3, r7, r5
    lbz r0, 0x10(r3)
    cmpwi r0, 0x14
    bne lbl_fn_8007C46C_000024F4
    mulli r0, r4, 0x18
    add r0, r7, r0
    b lbl_fn_8007C46C_00002504
lbl_fn_8007C46C_000024F4:
    addi r5, r5, 0x18
    addi r4, r4, 0x1
    bdnz lbl_fn_8007C46C_000024D4
lbl_fn_8007C46C_00002500:
    li r0, 0x0
lbl_fn_8007C46C_00002504:
    cmpwi r0, 0x0
    beq lbl_fn_8007C46C_00002510
    ori r6, r6, 0x8
lbl_fn_8007C46C_00002510:
    lwz r3, 0xfc(r1)
    stb r6, 0x49(r15)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_0000252C
    beq lbl_fn_8007C46C_0000252C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8007C46C_0000252C:
    lwz r3, 0x108(r1)
    cmpwi r3, 0x0
    beq lbl_fn_8007C46C_00002544
    lis r4, fn_8007AA64@ha
    addi r4, r4, fn_8007AA64@l
    bl fn_80695A50
lbl_fn_8007C46C_00002544:
    psq_l f31, 0x628(r1), 0, 0
    mr r3, r16
    lfd f31, 0x620(r1)
    psq_l f30, 0x618(r1), 0, 0
    lfd f30, 0x610(r1)
    psq_l f29, 0x608(r1), 0, 0
    lfd f29, 0x600(r1)
    psq_l f28, 0x5f8(r1), 0, 0
    lfd f28, 0x5f0(r1)
    addi r11, r1, 0x5f0
    bl _restgpr_14
    lwz r0, 0x634(r1)
    mtlr r0
    addi r1, r1, 0x630
    blr
}
