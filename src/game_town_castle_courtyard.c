#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_14(void);
extern void _savegpr_14(void);
extern void fn_8003E950(void);
extern void fn_8006F72C(void);
extern void fn_80092814(void);
extern void fn_800BFAC8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800DC6B4(void);
extern void fn_801346C8(void);
extern void fn_8016E484(void);
extern void fn_801F465C(void);
extern void fn_801F4B4C(void);
extern void fn_801F4CB4(void);
extern void fn_801F8FE4(void);
extern void fn_801F90E0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80219160(void);
extern void fn_80219558(void);
extern void fn_8021AF50(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_803D7850(void);
extern void fn_803E2410(void);
extern void fn_803E4A5C(void);
extern void fn_803E4DD4(void);
extern void fn_803E4E58(void);
extern void fn_80481654(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);
extern void fn_805F9160(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80686A48(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80750618[];
extern u8 lbl_80750650[];
extern u8 lbl_80750658[];
extern u8 lbl_807506A0[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F540;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9F8;
extern u32 lbl_808813D0;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D68;
extern u32 lbl_80885DDC;
extern u32 lbl_80885DFC;
extern u32 lbl_80885E58;
extern u32 lbl_80885E5C;
extern u32 lbl_80885E68;
extern u32 lbl_80885E70;
extern u32 lbl_80885E80;
extern u32 lbl_80885E84;
extern u32 lbl_80885E88;
extern u32 lbl_80885E8C;
extern u32 lbl_80885E90;
extern u32 lbl_80885E94;
extern u32 lbl_80885E98;

/* Function declarations */
void fn_803D83A8(void);

asm void fn_803D83A8(void)
{
    nofralloc
    stwu r1, -0x810(r1)
    mflr r0
    stw r0, 0x814(r1)
    li r0, 0x808
    addi r11, r1, 0x750
    stfd f31, 0x800(r1)
    psq_stx f31, r1, r0, 0, 0
    stfd f30, 0x7f0(r1)
    psq_st f30, 0x7f8(r1), 0, 0
    stfd f29, 0x7e0(r1)
    psq_st f29, 0x7e8(r1), 0, 0
    stfd f28, 0x7d0(r1)
    psq_st f28, 0x7d8(r1), 0, 0
    stfd f27, 0x7c0(r1)
    psq_st f27, 0x7c8(r1), 0, 0
    stfd f26, 0x7b0(r1)
    psq_st f26, 0x7b8(r1), 0, 0
    stfd f25, 0x7a0(r1)
    psq_st f25, 0x7a8(r1), 0, 0
    stfd f24, 0x790(r1)
    psq_st f24, 0x798(r1), 0, 0
    stfd f23, 0x780(r1)
    psq_st f23, 0x788(r1), 0, 0
    stfd f22, 0x770(r1)
    psq_st f22, 0x778(r1), 0, 0
    stfd f21, 0x760(r1)
    psq_st f21, 0x768(r1), 0, 0
    stfd f20, 0x750(r1)
    psq_st f20, 0x758(r1), 0, 0
    bl _savegpr_14
    lwz r0, 0xdc8(r3)
    lis r4, 0x4330
    stw r4, 0x638(r1)
    mr r15, r3
    cmpwi r0, 0x0
    stw r4, 0x640(r1)
    beq lbl_fn_803D83A8_00002728
    lwz r3, lbl_8087F430
    li r4, 0x6a
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_803D83A8_000000BC
    lwz r3, lbl_8087F430
    li r4, 0x6a
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
lbl_fn_803D83A8_000000BC:
    lwz r3, 0x10f8(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r0, 0x10fc(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00000110
    lwz r3, 0x10f8(r15)
    li r4, 0x6a
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F430
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_803D83A8_00000110
    lwz r3, lbl_8087F430
    li r4, 0x6a
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_803D83A8_00000110:
    li r0, 0x8
    li r3, 0x0
    mr r4, r15
    stw r3, 0x10fc(r15)
    mtctr r0
lbl_fn_803D83A8_00000124:
    lwz r3, 0x5bc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5c0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5c4(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5c8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5cc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5d0(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5d4(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5d8(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5dc(r4)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x5e0(r4)
    addi r4, r4, 0x28
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    bdnz lbl_fn_803D83A8_00000124
    lwz r3, 0x1104(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1108(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1110(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1114(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x254c(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x2550(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000234
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00000234:
    lwz r3, 0x2554(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000024C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_0000024C:
    lwz r3, 0x2558(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000264
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00000264:
    lwz r3, 0x2564(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000027C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_0000027C:
    lwz r3, 0x2610(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000294
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00000294:
    lwz r3, 0x2614(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000002AC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_000002AC:
    lwz r3, 0x2618(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000002C4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_000002C4:
    lwz r3, 0x261c(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000002DC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_000002DC:
    lwz r3, 0x2628(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000002F4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_000002F4:
    lwz r7, 0xdc4(r15)
    li r0, 0x5
    mr r6, r15
    lfs f0, lbl_80885D58
    lwz r4, 0x38(r7)
    li r3, 0x0
    li r5, 0x0
    ori r4, r4, 0x4
    stw r4, 0x38(r7)
    stw r3, 0xa8c(r15)
    mtctr r0
lbl_fn_803D83A8_00000320:
    lwz r3, 0xa90(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xab8(r6)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803D83A8_00000348
    stfs f0, 0x50(r3)
lbl_fn_803D83A8_00000348:
    lwz r3, 0xab8(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xae0(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xa94(r6)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xabc(r6)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803D83A8_00000390
    stfs f0, 0x50(r3)
lbl_fn_803D83A8_00000390:
    lwz r3, 0xabc(r6)
    addi r5, r5, 0x1
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0xae4(r6)
    addi r6, r6, 0x8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    bdnz lbl_fn_803D83A8_00000320
    lwz r17, lbl_8087F430
    li r0, 0x0
    stb r0, 0x6ec(r1)
    li r0, 0x0
    lwz r3, 0x54e4(r17)
    cmpwi r3, 0x8
    bne lbl_fn_803D83A8_000003E8
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000003E8
    li r0, 0x1
lbl_fn_803D83A8_000003E8:
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00000408
    lwz r3, lbl_8087F540
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000408
    li r0, 0x1
    stb r0, 0x6ec(r1)
lbl_fn_803D83A8_00000408:
    lwz r3, lbl_8087F430
    li r14, 0x0
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x8
    bne lbl_fn_803D83A8_00000448
    lwz r3, lbl_8087F540
    li r16, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000043C
    bl fn_80481654
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000043C
    li r16, 0x0
lbl_fn_803D83A8_0000043C:
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00000448
    li r14, 0x1
lbl_fn_803D83A8_00000448:
    lwz r0, 0x868(r17)
    cmpwi r0, 0x6
    beq lbl_fn_803D83A8_000005C4
    cmpwi r0, 0x5
    beq lbl_fn_803D83A8_000005C4
    lis r5, fn_803E4DD4@ha
    mr r3, r15
    addi r4, r15, 0x2788
    addi r5, r5, fn_803E4DD4@l
    bl fn_803E4A5C
    lfs f25, lbl_80885E88
    mr r16, r15
    lfs f24, lbl_80885E90
    mr r17, r15
    lfs f27, lbl_80885D58
    li r18, 0x0
    lfs f26, lbl_80885E8C
lbl_fn_803D83A8_0000048C:
    lwz r0, 0x2788(r15)
    cmplw r18, r0
    bge lbl_fn_803D83A8_000005B0
    lwz r20, 0x2790(r16)
    cmpwi r20, 0x0
    beq lbl_fn_803D83A8_000005B0
    stfs f27, 0x1fc(r1)
    li r19, 0x0
    stfs f26, 0x200(r1)
    stfs f27, 0x204(r1)
    lwz r0, 0xc04(r20)
    cmpwi r0, 0x0
    ble lbl_fn_803D83A8_00000544
    lwz r0, 0x7ec(r20)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_803D83A8_00000544
    lwz r4, 0x5bc(r17)
    mr r3, r15
    mr r5, r20
    addi r6, r1, 0x1fc
    li r7, 0x0
    li r19, 0x1
    bl fn_803E4E58
    lfs f0, 0xc08(r20)
    fcmpo cr0, f0, f25
    bge lbl_fn_803D83A8_00000514
    lwz r4, 0x5c0(r17)
    mr r3, r15
    lwz r5, 0x2790(r16)
    addi r6, r1, 0x1fc
    li r7, 0x0
    li r19, 0x2
    bl fn_803E4E58
lbl_fn_803D83A8_00000514:
    lfs f0, 0xc08(r20)
    fcmpo cr0, f0, f24
    bge lbl_fn_803D83A8_00000544
    slwi r0, r19, 2
    lwz r5, 0x2790(r16)
    add r4, r17, r0
    mr r3, r15
    lwz r4, 0x5bc(r4)
    addi r6, r1, 0x1fc
    li r7, 0x0
    addi r19, r19, 0x1
    bl fn_803E4E58
lbl_fn_803D83A8_00000544:
    lwz r0, 0x7e0(r20)
    rlwinm r3, r0, 0, 8, 8
    subis r0, r3, 0x80
    cmplwi r0, 0x0
    bne lbl_fn_803D83A8_0000057C
    slwi r0, r19, 2
    lwz r5, 0x2790(r16)
    add r4, r17, r0
    mr r3, r15
    lwz r4, 0x5bc(r4)
    addi r6, r1, 0x1fc
    li r7, 0x0
    addi r19, r19, 0x1
    bl fn_803E4E58
lbl_fn_803D83A8_0000057C:
    lwz r0, 0x7e0(r20)
    rlwinm r3, r0, 0, 7, 7
    subis r0, r3, 0x100
    cmplwi r0, 0x0
    bne lbl_fn_803D83A8_000005B0
    slwi r0, r19, 2
    lwz r5, 0x2790(r16)
    add r4, r17, r0
    mr r3, r15
    lwz r4, 0x5bc(r4)
    addi r6, r1, 0x1fc
    li r7, 0x0
    bl fn_803E4E58
lbl_fn_803D83A8_000005B0:
    addi r18, r18, 0x1
    addi r17, r17, 0x14
    cmplwi r18, 0x10
    addi r16, r16, 0x8
    blt lbl_fn_803D83A8_0000048C
lbl_fn_803D83A8_000005C4:
    cmpwi r14, 0x0
    bne lbl_fn_803D83A8_000005E4
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_000005E4
    cmpwi r0, 0xe
    bne lbl_fn_803D83A8_0000062C
lbl_fn_803D83A8_000005E4:
    lwz r3, lbl_8087F8A0
    lwz r14, 0x48(r3)
    b lbl_fn_803D83A8_00000600
lbl_fn_803D83A8_000005F0:
    mr r3, r15
    mr r4, r14
    bl fn_803E2410
    lwz r14, 0x14ac(r14)
lbl_fn_803D83A8_00000600:
    cmpwi r14, 0x0
    bne lbl_fn_803D83A8_000005F0
    lwz r3, lbl_8087F408
    lwz r14, 0x48(r3)
    b lbl_fn_803D83A8_00000624
lbl_fn_803D83A8_00000614:
    mr r3, r15
    mr r4, r14
    bl fn_803E2410
    lwz r14, 0x14ac(r14)
lbl_fn_803D83A8_00000624:
    cmpwi r14, 0x0
    bne lbl_fn_803D83A8_00000614
lbl_fn_803D83A8_0000062C:
    lwz r3, lbl_8087EE68
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000131C
    lwzu r0, 0xe0(r3)
    li r14, 0x0
    lwz r9, lbl_8087F9F8
    mulli r0, r0, 0x34
    addi r10, r3, 0x4
    add r3, r3, r0
    addi r6, r3, 0x4
    b lbl_fn_803D83A8_00000710
lbl_fn_803D83A8_00000658:
    lwz r0, 0x8(r10)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_0000070C
    lwz r7, 0xc(r10)
    cmpwi r7, 0x0
    beq lbl_fn_803D83A8_0000070C
    lwz r8, 0x38(r7)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r8, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803D83A8_0000069C
    clrlwi r0, r8, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D83A8_0000069C
    li r5, 0x1
lbl_fn_803D83A8_0000069C:
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_000006B8
    lwz r0, 0x7e0(r7)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803D83A8_000006B8
    li r3, 0x1
lbl_fn_803D83A8_000006B8:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000006EC
    lwz r0, 0x55c(r7)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803D83A8_000006E0
    lwz r0, 0x560(r7)
    cmpwi r0, 0x1c
    bne lbl_fn_803D83A8_000006E0
    li r3, 0x1
lbl_fn_803D83A8_000006E0:
    cmpwi r3, 0x0
    bne lbl_fn_803D83A8_000006EC
    li r4, 0x1
lbl_fn_803D83A8_000006EC:
    cmpwi r4, 0x0
    beq lbl_fn_803D83A8_0000070C
    cmpwi r9, 0x0
    beq lbl_fn_803D83A8_0000070C
    lwz r0, 0xa70(r9)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_0000070C
    mr r14, r7
lbl_fn_803D83A8_0000070C:
    addi r10, r10, 0x34
lbl_fn_803D83A8_00000710:
    cmplw r10, r6
    bne lbl_fn_803D83A8_00000658
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_0000098C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_0000098C
    lwz r5, lbl_8087F3C0
    li r0, 0x5
    addi r3, r15, 0x1554
    li r4, 0x0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r3, lbl_8087F9F8
    li r16, 0x0
    lwz r0, 0x1590(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803D83A8_00000874
    lwz r3, lbl_8087F8A0
    lwz r17, 0x48(r3)
    b lbl_fn_803D83A8_00000868
lbl_fn_803D83A8_00000768:
    lwz r6, 0x38(r17)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803D83A8_00000794
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D83A8_00000794
    li r5, 0x1
lbl_fn_803D83A8_00000794:
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_000007B0
    lwz r0, 0x7e0(r17)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803D83A8_000007B0
    li r3, 0x1
lbl_fn_803D83A8_000007B0:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000007E4
    lwz r0, 0x55c(r17)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803D83A8_000007D8
    lwz r0, 0x560(r17)
    cmpwi r0, 0x1c
    bne lbl_fn_803D83A8_000007D8
    li r3, 0x1
lbl_fn_803D83A8_000007D8:
    cmpwi r3, 0x0
    bne lbl_fn_803D83A8_000007E4
    li r4, 0x1
lbl_fn_803D83A8_000007E4:
    cmpwi r4, 0x0
    beq lbl_fn_803D83A8_00000864
    lwz r5, 0xd1c(r17)
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_00000864
    lwz r0, 0xd6c(r17)
    cmpwi r0, 0x4
    beq lbl_fn_803D83A8_00000864
    cmpwi r14, 0x0
    beq lbl_fn_803D83A8_00000810
    mr r5, r14
lbl_fn_803D83A8_00000810:
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_00000864
    lwz r3, 0x48(r5)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_803D83A8_00000834
    cmpwi r3, 0x4
    beq lbl_fn_803D83A8_00000834
    li r0, 0x0
lbl_fn_803D83A8_00000834:
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00000864
    lwz r0, 0x15b4(r15)
    mr r3, r15
    mr r4, r17
    subf r6, r14, r0
    subf r0, r0, r14
    or r0, r6, r0
    mr r6, r16
    srwi r7, r0, 31
    bl fn_803D7850
    addi r16, r16, 0x1
lbl_fn_803D83A8_00000864:
    lwz r17, 0x14ac(r17)
lbl_fn_803D83A8_00000868:
    cmpwi r17, 0x0
    bne lbl_fn_803D83A8_00000768
    b lbl_fn_803D83A8_00000970
lbl_fn_803D83A8_00000874:
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_00000970
    lwz r3, lbl_8087F408
    lwz r17, 0x48(r3)
    b lbl_fn_803D83A8_00000968
lbl_fn_803D83A8_00000888:
    lwz r6, 0x38(r17)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803D83A8_000008B4
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D83A8_000008B4
    li r5, 0x1
lbl_fn_803D83A8_000008B4:
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_000008D0
    lwz r0, 0x7e0(r17)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803D83A8_000008D0
    li r3, 0x1
lbl_fn_803D83A8_000008D0:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000904
    lwz r0, 0x55c(r17)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803D83A8_000008F8
    lwz r0, 0x560(r17)
    cmpwi r0, 0x1c
    bne lbl_fn_803D83A8_000008F8
    li r3, 0x1
lbl_fn_803D83A8_000008F8:
    cmpwi r3, 0x0
    bne lbl_fn_803D83A8_00000904
    li r4, 0x1
lbl_fn_803D83A8_00000904:
    cmpwi r4, 0x0
    beq lbl_fn_803D83A8_00000964
    lwz r5, 0xd1c(r17)
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_803D83A8_00000964
    lwz r0, 0xd6c(r17)
    cmpwi r0, 0x4
    beq lbl_fn_803D83A8_00000964
    beq cr1, lbl_fn_803D83A8_00000964
    lwz r3, 0x48(r5)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_803D83A8_00000944
    cmpwi r3, 0x4
    beq lbl_fn_803D83A8_00000944
    li r0, 0x0
lbl_fn_803D83A8_00000944:
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00000964
    mr r3, r15
    mr r4, r17
    mr r6, r16
    li r7, 0x0
    bl fn_803D7850
    addi r16, r16, 0x1
lbl_fn_803D83A8_00000964:
    lwz r17, 0x14ac(r17)
lbl_fn_803D83A8_00000968:
    cmpwi r17, 0x0
    bne lbl_fn_803D83A8_00000888
lbl_fn_803D83A8_00000970:
    lwz r4, lbl_8087F3C0
    li r3, 0x0
    li r0, 0x1
    stw r3, 0xb8(r4)
    stw r14, 0x15b4(r15)
    stw r0, 0x15b8(r15)
    b lbl_fn_803D83A8_000009C8
lbl_fn_803D83A8_0000098C:
    lwz r0, 0x15b8(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_000009C8
    lwz r3, lbl_8087F3C0
    li r0, 0x5
    addi r4, r15, 0x1554
    li r5, 0x0
    stw r0, 0xb8(r3)
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    stw r0, 0x15b8(r15)
lbl_fn_803D83A8_000009C8:
    lwz r3, lbl_8087EE68
    li r17, 0x0
    addi r0, r3, 0x458
    stw r0, 0x6e8(r1)
    mr r3, r0
    lwz r0, 0x8(r3)
    cmpwi r0, 0x4
    beq lbl_fn_803D83A8_000009F0
    lwz r3, 0x6e8(r1)
    lwz r17, 0xc(r3)
lbl_fn_803D83A8_000009F0:
    cmpwi r17, 0x0
    beq lbl_fn_803D83A8_000012E0
    lwz r0, 0x1170(r15)
    cmplw r0, r17
    beq lbl_fn_803D83A8_00001318
    lwz r5, lbl_8087F3C0
    li r0, 0x5
    addi r3, r15, 0x1158
    li r4, 0x0
    stw r0, 0xb8(r5)
    bl fn_80232B7C
    lwz r3, lbl_8087F8A0
    li r31, 0x0
    lis r0, lbl_807506A0@ha
    lfs f25, lbl_80885D58
    lwz r16, 0x48(r3)
    mr r3, r0
    addi r3, r3, lbl_807506A0@l
    lfs f24, lbl_80885D60
    lfs f31, lbl_80885E98
    addi r30, r1, 0x538
    stw r31, 0x6f4(r1)
    addi r27, r1, 0x418
    lfs f30, lbl_80885E58
    addi r29, r1, 0x4d8
    lfs f29, lbl_80885E80
    addi r28, r1, 0x478
    lfs f28, lbl_80885E70
    addi r14, r1, 0x3e8
    stw r31, 0x6f8(r1)
    addi r25, r1, 0x3b8
    lfs f26, lbl_80885E94
    addi r22, r1, 0x358
    stw r3, 0x6f0(r1)
    addi r24, r1, 0x5d8
    lfs f27, lbl_80885E68
    addi r19, r1, 0x238
    addi r21, r1, 0x2f8
    addi r20, r1, 0x298
    addi r23, r1, 0x208
    b lbl_fn_803D83A8_000012C8
lbl_fn_803D83A8_00000A94:
    lwz r6, 0x38(r16)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803D83A8_00000AC0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_803D83A8_00000AC0
    li r5, 0x1
lbl_fn_803D83A8_00000AC0:
    cmpwi r5, 0x0
    beq lbl_fn_803D83A8_00000ADC
    lwz r0, 0x7e0(r16)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_803D83A8_00000ADC
    li r3, 0x1
lbl_fn_803D83A8_00000ADC:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00000B10
    lwz r0, 0x55c(r16)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_803D83A8_00000B04
    lwz r0, 0x560(r16)
    cmpwi r0, 0x1c
    bne lbl_fn_803D83A8_00000B04
    li r3, 0x1
lbl_fn_803D83A8_00000B04:
    cmpwi r3, 0x0
    bne lbl_fn_803D83A8_00000B10
    li r4, 0x1
lbl_fn_803D83A8_00000B10:
    cmpwi r4, 0x0
    beq lbl_fn_803D83A8_000012C4
    lwz r3, 0x6f0(r1)
    addi r18, r16, 0xb0
    li r5, 0x0
    addi r4, r3, 0x10c1
    mr r3, r18
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803D83A8_00000B40
    li r5, 0x0
    b lbl_fn_803D83A8_00000B4C
lbl_fn_803D83A8_00000B40:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r18)
    add r5, r3, r0
lbl_fn_803D83A8_00000B4C:
    lfs f0, 0x2c(r5)
    addi r3, r1, 0x190
    lfs f7, 0x1c(r5)
    lfs f8, 0xc(r5)
    lwz r4, 0x6e8(r1)
    stfs f8, 0x1f0(r1)
    stfs f7, 0x1f4(r1)
    stfs f0, 0x1f8(r1)
    bl fn_8003E950
    lfs f9, 0x198(r1)
    addi r3, r1, 0x1e4
    lfs f8, 0x1f8(r1)
    lfs f7, 0x190(r1)
    lfs f0, 0x1f0(r1)
    fsubs f8, f9, f8
    stfs f25, 0x1e8(r1)
    fsubs f0, f7, f0
    stfs f8, 0x1ec(r1)
    stfs f0, 0x1e4(r1)
    bl fn_805F9940
    lfs f7, 0x5c(r17)
    lfs f0, 0x28(r17)
    fmuls f0, f7, f0
    fnmsubs f0, f26, f0, f1
    fcmpo cr0, f0, f27
    ble lbl_fn_803D83A8_000012C4
    addi r3, r1, 0x1e4
    mr r4, r3
    bl fn_805F98D0
    lfs f7, 0x5c(r17)
    addi r3, r1, 0x184
    lfs f0, 0x28(r17)
    lfs f8, 0x1ec(r1)
    fmuls f9, f7, f0
    lfs f7, 0x1e8(r1)
    lfs f0, 0x1e4(r1)
    lwz r4, 0x6e8(r1)
    fmuls f9, f31, f9
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x180(r1)
    stfs f0, 0x178(r1)
    stfs f7, 0x17c(r1)
    bl fn_8003E950
    lfs f8, 0x18c(r1)
    addi r3, r1, 0x16c
    lfs f7, 0x180(r1)
    lfs f0, 0x1f8(r1)
    fsubs f10, f8, f7
    lfs f9, 0x188(r1)
    lfs f7, 0x17c(r1)
    lfs f8, 0x184(r1)
    fsubs f12, f10, f0
    lfs f0, 0x178(r1)
    fsubs f9, f9, f7
    lfs f7, 0x1f4(r1)
    fsubs f11, f8, f0
    lfs f0, 0x1f0(r1)
    fmr f2, f12
    stfs f11, 0x1d8(r1)
    fadds f8, f9, f30
    stfs f2, 0x1ec(r1)
    fsubs f9, f11, f0
    frsp f2, f2
    fsubs f0, f8, f7
    stfs f9, 0x16c(r1)
    fabs f7, f2
    stfs f0, 0x170(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1e4
    frsp f0, f7
    psq_st f1, 0x0(r3), 0, 0
    addi r3, r1, 0x1cc
    stfs f10, 0x1e0(r1)
    fcmpo cr0, f0, f29
    stfs f8, 0x1dc(r1)
    stfs f12, 0x174(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x1d4(r1)
    bge lbl_fn_803D83A8_00000CB0
    lfs f0, 0x1cc(r1)
    fcmpo cr0, f0, f25
    ble lbl_fn_803D83A8_00000CA4
    lfs f0, lbl_80885E5C
    b lbl_fn_803D83A8_00000CA8
lbl_fn_803D83A8_00000CA4:
    lfs f0, lbl_80885E84
lbl_fn_803D83A8_00000CA8:
    stfs f0, 0x7c(r1)
    b lbl_fn_803D83A8_00000CC4
lbl_fn_803D83A8_00000CB0:
    frsp f2, f2
    lfs f1, 0x1cc(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x7c(r1)
lbl_fn_803D83A8_00000CC4:
    lfs f0, 0x7c(r1)
    addi r3, r1, 0x568
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    addi r4, r1, 0x6c
    addi r6, r1, 0x1cc
    lfs f20, 0x570(r1)
    mr r5, r4
    lfs f21, 0x56c(r1)
    addi r3, r1, 0x598
    lfs f22, 0x568(r1)
    lfs f23, 0x580(r1)
    lfs f13, 0x57c(r1)
    lfs f12, 0x578(r1)
    lfs f11, 0x590(r1)
    lfs f10, 0x58c(r1)
    lfs f9, 0x588(r1)
    lfs f8, 0x594(r1)
    lfs f7, 0x584(r1)
    lfs f0, 0x574(r1)
    psq_l f1, 0x0(r6), 0, 0
    mr r6, r4
    lfs f2, 0x1d4(r1)
    stfs f25, 0x5c8(r1)
    stfs f25, 0x5cc(r1)
    stfs f25, 0x5d0(r1)
    stfs f24, 0x5d4(r1)
    stfs f22, 0x3c(r1)
    stfs f21, 0x40(r1)
    stfs f20, 0x44(r1)
    stfs f22, 0x598(r1)
    stfs f21, 0x59c(r1)
    stfs f20, 0x5a0(r1)
    stfs f12, 0x48(r1)
    stfs f13, 0x4c(r1)
    stfs f23, 0x50(r1)
    stfs f12, 0x5a8(r1)
    stfs f13, 0x5ac(r1)
    stfs f23, 0x5b0(r1)
    stfs f9, 0x54(r1)
    stfs f10, 0x58(r1)
    stfs f11, 0x5c(r1)
    stfs f9, 0x5b8(r1)
    stfs f10, 0x5bc(r1)
    stfs f11, 0x5c0(r1)
    stfs f0, 0x60(r1)
    stfs f7, 0x64(r1)
    stfs f8, 0x68(r1)
    stfs f0, 0x5a4(r1)
    stfs f7, 0x5b4(r1)
    stfs f8, 0x5c4(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x74(r1)
    bl fn_805F9750
    lfs f2, 0x74(r1)
    fabs f0, f2
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_803D83A8_00000DD8
    lfs f0, 0x70(r1)
    fcmpo cr0, f0, f25
    ble lbl_fn_803D83A8_00000DC8
    lfs f0, lbl_80885E5C
    b lbl_fn_803D83A8_00000DCC
lbl_fn_803D83A8_00000DC8:
    lfs f0, lbl_80885E84
lbl_fn_803D83A8_00000DCC:
    fneg f0, f0
    stfs f0, 0x78(r1)
    b lbl_fn_803D83A8_00000DEC
lbl_fn_803D83A8_00000DD8:
    lfs f1, 0x70(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x78(r1)
lbl_fn_803D83A8_00000DEC:
    fmr f2, f25
    addi r3, r1, 0x78
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r1, 0x1cc
    stfs f25, 0x80(r1)
    addi r3, r1, 0x1e4
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1d4(r1)
    bl fn_805F9940
    fdivs f20, f1, f28
    lfs f1, 0x1f0(r1)
    lfs f2, 0x1f4(r1)
    addi r3, r1, 0x608
    lfs f3, 0x1f8(r1)
    bl fn_805F90D0
    addi r3, r1, 0x608
    add r4, r15, r31
    psq_l f2, 0x8(r3), 0, 0
    addi r18, r4, 0x1174
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    lfs f1, 0x1d4(r1)
    psq_st f2, 0x8(r18), 0, 0
    fcmpu cr0, f25, f1
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    stfs f25, 0x444(r1)
    stfs f25, 0x43c(r1)
    stfs f25, 0x438(r1)
    stfs f25, 0x434(r1)
    stfs f25, 0x430(r1)
    stfs f25, 0x428(r1)
    stfs f25, 0x424(r1)
    stfs f25, 0x420(r1)
    stfs f25, 0x41c(r1)
    stfs f24, 0x440(r1)
    stfs f24, 0x42c(r1)
    stfs f24, 0x418(r1)
    beq lbl_fn_803D83A8_00000EEC
    addi r3, r1, 0x508
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x508
    addi r5, r1, 0x538
    bl fn_805F89F0
    psq_l f1, 0x0(r30), 0, 0
    psq_l f2, 0x8(r30), 0, 0
    psq_l f3, 0x10(r30), 0, 0
    psq_l f4, 0x18(r30), 0, 0
    psq_l f5, 0x20(r30), 0, 0
    psq_l f6, 0x28(r30), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803D83A8_00000EEC:
    lfs f1, 0x1d0(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_803D83A8_00000F44
    addi r3, r1, 0x4a8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x4a8
    addi r5, r1, 0x4d8
    bl fn_805F89F0
    psq_l f1, 0x0(r29), 0, 0
    psq_l f2, 0x8(r29), 0, 0
    psq_l f3, 0x10(r29), 0, 0
    psq_l f4, 0x18(r29), 0, 0
    psq_l f5, 0x20(r29), 0, 0
    psq_l f6, 0x28(r29), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803D83A8_00000F44:
    lfs f1, 0x1cc(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_803D83A8_00000F9C
    addi r3, r1, 0x448
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r27
    addi r4, r1, 0x448
    addi r5, r1, 0x478
    bl fn_805F89F0
    psq_l f1, 0x0(r28), 0, 0
    psq_l f2, 0x8(r28), 0, 0
    psq_l f3, 0x10(r28), 0, 0
    psq_l f4, 0x18(r28), 0, 0
    psq_l f5, 0x20(r28), 0, 0
    psq_l f6, 0x28(r28), 0, 0
    psq_st f1, 0x0(r27), 0, 0
    psq_st f2, 0x8(r27), 0, 0
    psq_st f3, 0x10(r27), 0, 0
    psq_st f4, 0x18(r27), 0, 0
    psq_st f5, 0x20(r27), 0, 0
    psq_st f6, 0x28(r27), 0, 0
lbl_fn_803D83A8_00000F9C:
    mr r3, r18
    mr r4, r27
    addi r5, r1, 0x3e8
    bl fn_805F89F0
    psq_l f2, 0x8(r14), 0, 0
    add r3, r15, r31
    psq_l f3, 0x10(r14), 0, 0
    addi r26, r3, 0x1174
    psq_l f4, 0x18(r14), 0, 0
    addi r3, r1, 0x388
    psq_l f5, 0x20(r14), 0, 0
    psq_l f6, 0x28(r14), 0, 0
    psq_l f1, 0x0(r14), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    fmr f1, f24
    psq_st f2, 0x8(r18), 0, 0
    fmr f2, f1
    psq_st f3, 0x10(r18), 0, 0
    fmr f3, f20
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    stfs f24, 0x30(r1)
    stfs f24, 0x34(r1)
    stfs f20, 0x38(r1)
    bl fn_805F9160
    mr r3, r26
    addi r4, r1, 0x388
    addi r5, r1, 0x3b8
    bl fn_805F89F0
    psq_l f2, 0x8(r25), 0, 0
    addi r3, r1, 0x5d8
    psq_l f3, 0x10(r25), 0, 0
    psq_l f4, 0x18(r25), 0, 0
    psq_l f5, 0x20(r25), 0, 0
    psq_l f6, 0x28(r25), 0, 0
    psq_l f1, 0x0(r25), 0, 0
    psq_st f1, 0x0(r26), 0, 0
    lfs f10, 0x1f8(r1)
    psq_st f2, 0x8(r26), 0, 0
    lfs f9, 0x1f4(r1)
    psq_st f3, 0x10(r26), 0, 0
    lfs f7, 0x1f0(r1)
    psq_st f4, 0x18(r26), 0, 0
    psq_st f5, 0x20(r26), 0, 0
    psq_st f6, 0x28(r26), 0, 0
    lfs f0, 0x1ec(r1)
    lfs f8, 0x1e8(r1)
    fadds f3, f10, f0
    lfs f0, 0x1e4(r1)
    fadds f2, f9, f8
    fadds f1, f7, f0
    stfs f3, 0x168(r1)
    stfs f1, 0x160(r1)
    stfs f2, 0x164(r1)
    bl fn_805F90D0
    add r3, r15, r31
    psq_l f2, 0x8(r24), 0, 0
    psq_l f3, 0x10(r24), 0, 0
    addi r18, r3, 0x11a4
    psq_l f4, 0x18(r24), 0, 0
    psq_l f5, 0x20(r24), 0, 0
    psq_l f6, 0x28(r24), 0, 0
    psq_l f1, 0x0(r24), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    lfs f1, 0x1d4(r1)
    psq_st f2, 0x8(r18), 0, 0
    fcmpu cr0, f25, f1
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    stfs f25, 0x264(r1)
    stfs f25, 0x25c(r1)
    stfs f25, 0x258(r1)
    stfs f25, 0x254(r1)
    stfs f25, 0x250(r1)
    stfs f25, 0x248(r1)
    stfs f25, 0x244(r1)
    stfs f25, 0x240(r1)
    stfs f25, 0x23c(r1)
    stfs f24, 0x260(r1)
    stfs f24, 0x24c(r1)
    stfs f24, 0x238(r1)
    beq lbl_fn_803D83A8_0000113C
    addi r3, r1, 0x328
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x328
    addi r5, r1, 0x358
    bl fn_805F89F0
    psq_l f1, 0x0(r22), 0, 0
    psq_l f2, 0x8(r22), 0, 0
    psq_l f3, 0x10(r22), 0, 0
    psq_l f4, 0x18(r22), 0, 0
    psq_l f5, 0x20(r22), 0, 0
    psq_l f6, 0x28(r22), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_803D83A8_0000113C:
    lfs f1, 0x1d0(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_803D83A8_00001194
    addi r3, r1, 0x2c8
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x2c8
    addi r5, r1, 0x2f8
    bl fn_805F89F0
    psq_l f1, 0x0(r21), 0, 0
    psq_l f2, 0x8(r21), 0, 0
    psq_l f3, 0x10(r21), 0, 0
    psq_l f4, 0x18(r21), 0, 0
    psq_l f5, 0x20(r21), 0, 0
    psq_l f6, 0x28(r21), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_803D83A8_00001194:
    lfs f1, 0x1cc(r1)
    fcmpu cr0, f25, f1
    beq lbl_fn_803D83A8_000011EC
    addi r3, r1, 0x268
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r19
    addi r4, r1, 0x268
    addi r5, r1, 0x298
    bl fn_805F89F0
    psq_l f1, 0x0(r20), 0, 0
    psq_l f2, 0x8(r20), 0, 0
    psq_l f3, 0x10(r20), 0, 0
    psq_l f4, 0x18(r20), 0, 0
    psq_l f5, 0x20(r20), 0, 0
    psq_l f6, 0x28(r20), 0, 0
    psq_st f1, 0x0(r19), 0, 0
    psq_st f2, 0x8(r19), 0, 0
    psq_st f3, 0x10(r19), 0, 0
    psq_st f4, 0x18(r19), 0, 0
    psq_st f5, 0x20(r19), 0, 0
    psq_st f6, 0x28(r19), 0, 0
lbl_fn_803D83A8_000011EC:
    mr r3, r18
    mr r4, r19
    addi r5, r1, 0x208
    bl fn_805F89F0
    psq_l f2, 0x8(r23), 0, 0
    psq_l f3, 0x10(r23), 0, 0
    psq_l f4, 0x18(r23), 0, 0
    psq_l f5, 0x20(r23), 0, 0
    psq_l f6, 0x28(r23), 0, 0
    psq_l f1, 0x0(r23), 0, 0
    psq_st f1, 0x0(r18), 0, 0
    psq_st f2, 0x8(r18), 0, 0
    psq_st f3, 0x10(r18), 0, 0
    psq_st f4, 0x18(r18), 0, 0
    psq_st f5, 0x20(r18), 0, 0
    psq_st f6, 0x28(r18), 0, 0
    lwz r0, 0x1170(r15)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_000012C0
    lwz r0, 0x6f4(r1)
    add r3, r15, r31
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80885D60
    addi r7, r3, 0x1174
    stw r0, 0xc(r1)
    li r0, 0x1
    addi r4, r15, 0x1158
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
    lwz r0, 0x6f8(r1)
    add r3, r15, r31
    stw r0, 0x8(r1)
    li r0, -0x1
    lfs f1, lbl_80885D60
    addi r7, r3, 0x11a4
    stw r0, 0xc(r1)
    li r0, 0x1
    addi r4, r15, 0x1164
    li r5, -0x1
    stw r0, 0x10(r1)
    li r6, 0x5
    li r8, 0x0
    li r9, 0x0
    lwz r3, lbl_8087F3C0
    li r10, 0x0
    bl fn_8023A680
lbl_fn_803D83A8_000012C0:
    addi r31, r31, 0x7c
lbl_fn_803D83A8_000012C4:
    lwz r16, 0x14ac(r16)
lbl_fn_803D83A8_000012C8:
    cmpwi r16, 0x0
    bne lbl_fn_803D83A8_00000A94
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
    b lbl_fn_803D83A8_00001318
lbl_fn_803D83A8_000012E0:
    lwz r0, 0x1170(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001318
    lwz r3, lbl_8087F3C0
    li r0, 0x5
    addi r4, r15, 0x1158
    li r5, 0x0
    stw r0, 0xb8(r3)
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    li r0, 0x0
    stw r0, 0xb8(r3)
lbl_fn_803D83A8_00001318:
    stw r17, 0x1170(r15)
lbl_fn_803D83A8_0000131C:
    lwz r3, 0x254c(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00001350
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_803D83A8_00001350
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00001350:
    lwz r3, 0xdc4(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00001384
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    bne lbl_fn_803D83A8_00001384
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00001384:
    lbz r0, 0x6ec(r1)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_000013A8
    li r0, 0x0
    stw r0, 0x2568(r15)
    lwz r3, 0x2564(r15)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_803D83A8_00001800
lbl_fn_803D83A8_000013A8:
    lwz r0, 0x2568(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001800
    lwz r3, 0x2564(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x2568(r15)
    cmplwi r0, 0x2
    blt lbl_fn_803D83A8_000013E0
    lwz r3, 0x2564(r15)
    lfs f0, lbl_80885DDC
    stfs f0, 0x104(r3)
    b lbl_fn_803D83A8_000013EC
lbl_fn_803D83A8_000013E0:
    lwz r3, 0x2564(r15)
    lfs f0, lbl_80885D60
    stfs f0, 0x104(r3)
lbl_fn_803D83A8_000013EC:
    lwz r0, 0x256c(r15)
    lis r3, lbl_80750658@ha
    lwz r4, lbl_8087F1E4
    addi r3, r3, lbl_80750658@l
    slwi r0, r0, 2
    lwzx r0, r3, r0
    addi r5, r4, 0x4
    slwi r3, r0, 3
    lwzx r0, r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001424
    add r3, r4, r3
    lwz r16, 0x4(r3)
    b lbl_fn_803D83A8_00001428
lbl_fn_803D83A8_00001424:
    la r16, lbl_808813D0
lbl_fn_803D83A8_00001428:
    lwz r4, 0x2564(r15)
    lis r14, lbl_807506A0@ha
    addi r14, r14, lbl_807506A0@l
    addi r3, r14, 0x11e6
    addi r17, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r17
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0x256c(r15)
    cmpwi r0, 0x6
    bge lbl_fn_803D83A8_0000147C
    cmpwi r0, 0x2
    bge lbl_fn_803D83A8_00001470
    cmpwi r0, 0x0
    bge lbl_fn_803D83A8_00001494
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_00001470:
    cmpwi r0, 0x4
    bge lbl_fn_803D83A8_00001584
    b lbl_fn_803D83A8_0000150C
lbl_fn_803D83A8_0000147C:
    cmpwi r0, 0xa
    beq lbl_fn_803D83A8_000016EC
    bge lbl_fn_803D83A8_00001760
    cmpwi r0, 0x8
    bge lbl_fn_803D83A8_00001674
    b lbl_fn_803D83A8_000015FC
lbl_fn_803D83A8_00001494:
    lfs f0, 0x26f4(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0x150
    lfs f8, 0x26f0(r15)
    lfs f7, 0x26ec(r15)
    fmuls f10, f0, f9
    lfs f0, 0x26e8(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x158(r1)
    stfs f0, 0x150(r1)
    stfs f7, 0x154(r1)
    stfs f10, 0x15c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x26e8(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0x140(r1)
    addi r5, r1, 0x140
    lfs f0, 0x26ec(r15)
    stfs f0, 0x144(r1)
    lfs f0, 0x26f0(r15)
    stfs f0, 0x148(r1)
    lfs f0, 0x26f4(r15)
    stfs f0, 0x14c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_0000150C:
    lfs f0, 0x2704(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0x130
    lfs f8, 0x2700(r15)
    lfs f7, 0x26fc(r15)
    fmuls f10, f0, f9
    lfs f0, 0x26f8(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x138(r1)
    stfs f0, 0x130(r1)
    stfs f7, 0x134(r1)
    stfs f10, 0x13c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x26f8(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0x120(r1)
    addi r5, r1, 0x120
    lfs f0, 0x26fc(r15)
    stfs f0, 0x124(r1)
    lfs f0, 0x2700(r15)
    stfs f0, 0x128(r1)
    lfs f0, 0x2704(r15)
    stfs f0, 0x12c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_00001584:
    lfs f0, 0x2714(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0x110
    lfs f8, 0x2710(r15)
    lfs f7, 0x270c(r15)
    fmuls f10, f0, f9
    lfs f0, 0x2708(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0x118(r1)
    stfs f0, 0x110(r1)
    stfs f7, 0x114(r1)
    stfs f10, 0x11c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x2708(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0x100(r1)
    addi r5, r1, 0x100
    lfs f0, 0x270c(r15)
    stfs f0, 0x104(r1)
    lfs f0, 0x2710(r15)
    stfs f0, 0x108(r1)
    lfs f0, 0x2714(r15)
    stfs f0, 0x10c(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_000015FC:
    lfs f0, 0x2724(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0xf0
    lfs f8, 0x2720(r15)
    lfs f7, 0x271c(r15)
    fmuls f10, f0, f9
    lfs f0, 0x2718(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xf8(r1)
    stfs f0, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f10, 0xfc(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x2718(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0xe0(r1)
    addi r5, r1, 0xe0
    lfs f0, 0x271c(r15)
    stfs f0, 0xe4(r1)
    lfs f0, 0x2720(r15)
    stfs f0, 0xe8(r1)
    lfs f0, 0x2724(r15)
    stfs f0, 0xec(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_00001674:
    lfs f0, 0x26e4(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0xd0
    lfs f8, 0x26e0(r15)
    lfs f7, 0x26dc(r15)
    fmuls f10, f0, f9
    lfs f0, 0x26d8(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xd8(r1)
    stfs f0, 0xd0(r1)
    stfs f7, 0xd4(r1)
    stfs f10, 0xdc(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x26d8(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0xc0(r1)
    addi r5, r1, 0xc0
    lfs f0, 0x26dc(r15)
    stfs f0, 0xc4(r1)
    lfs f0, 0x26e0(r15)
    stfs f0, 0xc8(r1)
    lfs f0, 0x26e4(r15)
    stfs f0, 0xcc(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    b lbl_fn_803D83A8_00001760
lbl_fn_803D83A8_000016EC:
    lfs f0, 0x26d4(r15)
    addi r4, r14, 0x11f2
    lfs f9, lbl_80885DFC
    addi r5, r1, 0xb0
    lfs f8, 0x26d0(r15)
    lfs f7, 0x26cc(r15)
    fmuls f10, f0, f9
    lfs f0, 0x26c8(r15)
    fmuls f8, f8, f9
    fmuls f7, f7, f9
    fmuls f0, f0, f9
    stfs f8, 0xb8(r1)
    stfs f0, 0xb0(r1)
    stfs f7, 0xb4(r1)
    stfs f10, 0xbc(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
    lfs f0, 0x26c8(r15)
    addi r4, r14, 0x11ff
    stfs f0, 0xa0(r1)
    addi r5, r1, 0xa0
    lfs f0, 0x26cc(r15)
    stfs f0, 0xa4(r1)
    lfs f0, 0x26d0(r15)
    stfs f0, 0xa8(r1)
    lfs f0, 0x26d4(r15)
    stfs f0, 0xac(r1)
    lwz r3, 0x2564(r15)
    bl fn_801F4B4C
lbl_fn_803D83A8_00001760:
    lwz r3, 0x2564(r15)
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803D83A8_00001800
    addi r0, r15, 0x256c
    lis r3, 0x2aab
    subf r4, r0, r0
    subi r0, r3, 0x5555
    mulhw r0, r0, r4
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r4, r0, r3
    mulli r0, r4, 0xc
    add r5, r15, r0
    b lbl_fn_803D83A8_000017CC
lbl_fn_803D83A8_000017AC:
    lwz r0, 0x2578(r5)
    addi r4, r4, 0x1
    stw r0, 0x256c(r5)
    lwz r0, 0x257c(r5)
    stw r0, 0x2570(r5)
    lwz r0, 0x2580(r5)
    stw r0, 0x2574(r5)
    addi r5, r5, 0xc
lbl_fn_803D83A8_000017CC:
    lwz r3, 0x2568(r15)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_803D83A8_000017AC
    cmpwi r0, 0x0
    stw r0, 0x2568(r15)
    beq lbl_fn_803D83A8_00001800
    lwz r3, 0x2564(r15)
    lfs f0, lbl_80885D58
    stfs f0, 0x100(r3)
    lwz r0, 0x2660(r15)
    ori r0, r0, 0x400
    stw r0, 0x2660(r15)
lbl_fn_803D83A8_00001800:
    lwz r4, 0x255c(r15)
    cmpwi cr1, r4, 0x0
    blt cr1, lbl_fn_803D83A8_0000193C
    lwz r0, 0x2568(r15)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_0000193C
    lfs f0, 0x2560(r15)
    lfs f7, lbl_80885D58
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    bne lbl_fn_803D83A8_000018F0
    lwz r3, lbl_8087EFA8
    lfs f8, 0x3a4(r3)
    fsubs f0, f0, f8
    stfs f0, 0x2560(r15)
    fcmpo cr0, f0, f7
    cror eq, lt, eq
    bne lbl_fn_803D83A8_0000193C
    beq cr1, lbl_fn_803D83A8_00001860
    cmpwi r4, 0x1
    beq lbl_fn_803D83A8_00001890
    cmpwi r4, 0x2
    beq lbl_fn_803D83A8_000018C0
    b lbl_fn_803D83A8_0000193C
lbl_fn_803D83A8_00001860:
    lis r4, lbl_80750618@ha
    lfs f1, lbl_80885D60
    addi r4, r4, lbl_80750618@l
    addi r3, r1, 0x2c
    lwz r4, 0x1c(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803D83A8_0000193C
lbl_fn_803D83A8_00001890:
    lis r4, lbl_80750618@ha
    lfs f1, lbl_80885D60
    addi r4, r4, lbl_80750618@l
    addi r3, r1, 0x28
    lwz r4, 0x20(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x28
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803D83A8_0000193C
lbl_fn_803D83A8_000018C0:
    lis r4, lbl_80750618@ha
    lfs f1, lbl_80885D60
    addi r4, r4, lbl_80750618@l
    addi r3, r1, 0x24
    lwz r4, 0x24(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_803D83A8_0000193C
lbl_fn_803D83A8_000018F0:
    slwi r0, r4, 2
    add r3, r15, r0
    lwz r3, 0x2550(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x255c(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x2550(r3)
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803D83A8_0000193C
    li r0, -0x1
    stw r0, 0x255c(r15)
lbl_fn_803D83A8_0000193C:
    lwz r0, 0x25cc(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001B60
    lis r3, lbl_80750650@ha
    lis r4, lbl_807506A0@ha
    lfs f30, lbl_80885D60
    addi r19, r4, lbl_807506A0@l
    lfs f29, lbl_80885D58
    addi r14, r1, 0x1c0
    lfs f28, lbl_80885D68
    li r16, 0x0
    lfd f31, lbl_80750650@l(r3)
    li r17, 0x0
    li r18, 0x0
    b lbl_fn_803D83A8_00001B54
lbl_fn_803D83A8_00001978:
    add r3, r15, r18
    lwz r0, 0x2610(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001B48
    add r20, r15, r17
    lwz r3, 0x25d0(r20)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00001A74
    addi r21, r3, 0xb0
    addi r4, r19, 0x10c1
    mr r3, r21
    li r5, 0x0
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803D83A8_000019BC
    li r3, 0x0
    b lbl_fn_803D83A8_000019C8
lbl_fn_803D83A8_000019BC:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r21)
    add r3, r3, r0
lbl_fn_803D83A8_000019C8:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000019F0
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x90
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x90(r1)
    stfs f7, 0x94(r1)
    stfs f0, 0x98(r1)
    b lbl_fn_803D83A8_000019F8
lbl_fn_803D83A8_000019F0:
    lwz r3, 0x25d0(r20)
    addi r4, r3, 0x600
lbl_fn_803D83A8_000019F8:
    lfs f2, 0x8(r4)
    mr r5, r14
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x1b4
    psq_st f1, 0x0(r14), 0, 0
    lwz r4, lbl_8087EFB4
    lfs f0, 0x1c4(r1)
    stfs f2, 0x1c8(r1)
    fadds f0, f0, f28
    stfs f0, 0x1c4(r1)
    bl fn_800BFAC8
    lfs f0, 0x1bc(r1)
    fcmpo cr0, f29, f0
    bge lbl_fn_803D83A8_00001A74
    fcmpo cr0, f0, f30
    bge lbl_fn_803D83A8_00001A74
    add r21, r15, r18
    addi r4, r19, 0x10a2
    lwz r3, 0x2610(r21)
    li r5, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x2610(r21)
    lfs f1, 0x1b4(r1)
    bl fn_801F90E0
    lwz r3, 0x2610(r21)
    addi r4, r19, 0x10a2
    lfs f1, 0x1b8(r1)
    li r5, 0x1
    bl fn_801F90E0
lbl_fn_803D83A8_00001A74:
    lwz r4, 0x25d8(r20)
    lfs f1, lbl_80885D58
    cmpwi r4, 0x0
    ble lbl_fn_803D83A8_00001B38
    lwz r5, 0x25d4(r20)
    xoris r0, r4, 0x8000
    stw r0, 0x644(r1)
    xoris r3, r5, 0x8000
    stw r3, 0x63c(r1)
    lfd f0, 0x640(r1)
    lfd f7, 0x638(r1)
    fsubs f0, f0, f31
    fsubs f7, f7, f31
    fdivs f0, f7, f0
    fcmpo cr0, f30, f0
    bge lbl_fn_803D83A8_00001ABC
    fmr f0, f30
    b lbl_fn_803D83A8_00001AD8
lbl_fn_803D83A8_00001ABC:
    stw r3, 0x63c(r1)
    stw r0, 0x644(r1)
    lfd f7, 0x638(r1)
    lfd f0, 0x640(r1)
    fsubs f7, f7, f31
    fsubs f0, f0, f31
    fdivs f0, f7, f0
lbl_fn_803D83A8_00001AD8:
    fcmpo cr0, f29, f0
    ble lbl_fn_803D83A8_00001AE8
    fmr f1, f29
    b lbl_fn_803D83A8_00001B38
lbl_fn_803D83A8_00001AE8:
    xoris r3, r5, 0x8000
    stw r3, 0x63c(r1)
    xoris r0, r4, 0x8000
    stw r0, 0x644(r1)
    lfd f7, 0x638(r1)
    lfd f0, 0x640(r1)
    fsubs f7, f7, f31
    fsubs f0, f0, f31
    fdivs f0, f7, f0
    fcmpo cr0, f30, f0
    bge lbl_fn_803D83A8_00001B1C
    fmr f1, f30
    b lbl_fn_803D83A8_00001B38
lbl_fn_803D83A8_00001B1C:
    stw r3, 0x63c(r1)
    stw r0, 0x644(r1)
    lfd f7, 0x638(r1)
    lfd f0, 0x640(r1)
    fsubs f7, f7, f31
    fsubs f0, f0, f31
    fdivs f1, f7, f0
lbl_fn_803D83A8_00001B38:
    add r3, r15, r18
    addi r4, r19, 0x10d6
    lwz r3, 0x2610(r3)
    bl fn_801F8FE4
lbl_fn_803D83A8_00001B48:
    addi r16, r16, 0x1
    addi r17, r17, 0x10
    addi r18, r18, 0x4
lbl_fn_803D83A8_00001B54:
    lwz r0, 0x25cc(r15)
    cmplw r16, r0
    blt lbl_fn_803D83A8_00001978
lbl_fn_803D83A8_00001B60:
    li r0, 0x0
    stw r0, 0x25cc(r15)
    lbz r0, 0x6ec(r1)
    lwz r4, lbl_8087F610
    cntlzw r0, r0
    cmpwi r4, 0x0
    srwi r5, r0, 5
    beq lbl_fn_803D83A8_00001BAC
    lwz r3, 0x4fc(r4)
    li r0, 0x0
    cmpwi r3, 0x1e
    bne lbl_fn_803D83A8_00001BA0
    lwz r3, 0x50c(r4)
    cmpwi r3, 0x5
    bge lbl_fn_803D83A8_00001BA0
    li r0, 0x1
lbl_fn_803D83A8_00001BA0:
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_00001BAC
    li r5, 0x0
lbl_fn_803D83A8_00001BAC:
    cmpwi r5, 0x0
    bne lbl_fn_803D83A8_00001BDC
    li r0, 0x0
    stw r0, 0x2620(r15)
    lwz r3, 0x2628(r15)
    stw r0, 0x2624(r15)
    lfs f0, lbl_80885D5C
    stfs f0, 0x104(r3)
    lfs f0, lbl_80885D58
    lwz r3, 0x2628(r15)
    stfs f0, 0x100(r3)
    b lbl_fn_803D83A8_00001D68
lbl_fn_803D83A8_00001BDC:
    lwz r16, 0x2620(r15)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00001BEC
    b lbl_fn_803D83A8_00001BF0
lbl_fn_803D83A8_00001BEC:
    lwz r16, 0x2624(r15)
lbl_fn_803D83A8_00001BF0:
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00001D10
    lis r4, lbl_807506A0@ha
    addi r14, r16, 0xb0
    addi r4, r4, lbl_807506A0@l
    li r5, 0x0
    mr r3, r14
    addi r4, r4, 0x120f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_803D83A8_00001C24
    li r3, 0x0
    b lbl_fn_803D83A8_00001C30
lbl_fn_803D83A8_00001C24:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r14)
    add r3, r3, r0
lbl_fn_803D83A8_00001C30:
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00001C58
    lfs f0, 0x2c(r3)
    addi r4, r1, 0x84
    lfs f7, 0x1c(r3)
    lfs f8, 0xc(r3)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f0, 0x8c(r1)
    b lbl_fn_803D83A8_00001C5C
lbl_fn_803D83A8_00001C58:
    addi r4, r16, 0x600
lbl_fn_803D83A8_00001C5C:
    psq_l f1, 0x0(r4), 0, 0
    addi r3, r1, 0x1a8
    lfs f2, 0x8(r4)
    stfs f2, 0x1b0(r1)
    psq_st f1, 0x0(r3), 0, 0
    lwz r3, 0x50(r16)
    subis r0, r3, 0xa
    cmplwi r0, 0xaec8
    beq lbl_fn_803D83A8_00001C94
    subis r0, r3, 0x4
    cmplwi r0, 0x9cdd
    beq lbl_fn_803D83A8_00001C94
    cmplwi r0, 0xa449
    bne lbl_fn_803D83A8_00001CA8
lbl_fn_803D83A8_00001C94:
    psq_l f1, 0x600(r16), 0, 0
    addi r3, r1, 0x1a8
    lfs f2, 0x608(r16)
    stfs f2, 0x1b0(r1)
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_803D83A8_00001CA8:
    lwz r4, lbl_8087EFB4
    addi r3, r1, 0x19c
    addi r5, r1, 0x1a8
    bl fn_800BFAC8
    lwz r4, 0x2628(r15)
    lis r14, lbl_807506A0@ha
    addi r14, r14, lbl_807506A0@l
    lfs f20, 0x19c(r1)
    addi r3, r14, 0x1215
    addi r16, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r16
    li r5, 0x0
    bl fn_801FED24
    lwz r4, 0x2628(r15)
    addi r3, r14, 0x1215
    lfs f20, 0x1a0(r1)
    addi r14, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f20
    mr r4, r3
    mr r3, r14
    li r5, 0x1
    bl fn_801FED24
lbl_fn_803D83A8_00001D10:
    lwz r0, 0x2620(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001D3C
    lwz r3, 0x2628(r15)
    lfs f0, lbl_80885D60
    stfs f0, 0x104(r3)
    lwz r3, 0x2628(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    b lbl_fn_803D83A8_00001D68
lbl_fn_803D83A8_00001D3C:
    lwz r3, 0x2628(r15)
    lfs f0, lbl_80885D5C
    stfs f0, 0x104(r3)
    lfs f0, lbl_80885D58
    lwz r3, 0x2628(r15)
    lfs f7, 0x100(r3)
    fcmpo cr0, f7, f0
    ble lbl_fn_803D83A8_00001D68
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00001D68:
    lwz r0, 0x110c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00002728
    lwz r3, 0x1104(r15)
    li r16, 0x0
    li r7, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r6, lbl_8087F4F0
    lwz r0, 0x601c(r6)
    addi r4, r6, 0x601c
    mr r5, r4
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803D83A8_00001DD4
lbl_fn_803D83A8_00001DA8:
    lwz r3, 0x4(r5)
    lwz r0, 0x110c(r15)
    cmplw r3, r0
    bne lbl_fn_803D83A8_00001DC8
    mulli r0, r7, 0x90
    add r3, r4, r0
    addi r16, r3, 0x4
    b lbl_fn_803D83A8_00001DD4
lbl_fn_803D83A8_00001DC8:
    addi r5, r5, 0x90
    addi r7, r7, 0x1
    bdnz lbl_fn_803D83A8_00001DA8
lbl_fn_803D83A8_00001DD4:
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r0, -0x20d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_00001DF0
    addis r16, r6, 0x1
    subi r16, r16, 0x20d0
lbl_fn_803D83A8_00001DF0:
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_000025C0
    lfs f0, 0xc(r16)
    lis r14, lbl_807506A0@ha
    lwz r4, 0x110c(r15)
    addi r14, r14, lbl_807506A0@l
    fctiwz f0, f0
    lwz r3, 0x1110(r15)
    lwz r0, 0x934(r4)
    addi r4, r14, 0x121f
    stfd f0, 0x648(r1)
    li r6, 0x0
    lwz r5, 0x64c(r1)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1228
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lwz r5, 0x934(r5)
    bl fn_801F4CB4
    lfs f0, 0x10(r16)
    addi r4, r14, 0x1232
    lwz r5, 0x110c(r15)
    li r6, 0x0
    fctiwz f0, f0
    lwz r3, 0x1110(r15)
    lwz r0, 0x940(r5)
    stfd f0, 0x650(r1)
    lwz r5, 0x654(r1)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1238
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lwz r5, 0x940(r5)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x123f
    lfs f0, 0x14(r16)
    li r6, 0x0
    lfs f7, 0x8bc(r3)
    lwz r3, 0x1110(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x658(r1)
    lwz r5, 0x65c(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1246
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lfs f0, 0x8bc(r5)
    fctiwz f0, f0
    stfd f0, 0x660(r1)
    lwz r5, 0x664(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x124e
    lfs f0, 0x18(r16)
    li r6, 0x0
    lfs f7, 0x8c0(r3)
    lwz r3, 0x1110(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x668(r1)
    lwz r5, 0x66c(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1256
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lfs f0, 0x8c0(r5)
    fctiwz f0, f0
    stfd f0, 0x670(r1)
    lwz r5, 0x674(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x125f
    lfs f0, 0x1c(r16)
    li r6, 0x0
    lfs f7, 0x8c4(r3)
    lwz r3, 0x1110(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x678(r1)
    lwz r5, 0x67c(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1266
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lfs f0, 0x8c4(r5)
    fctiwz f0, f0
    stfd f0, 0x680(r1)
    lwz r5, 0x684(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x126e
    lfs f0, 0x20(r16)
    li r6, 0x0
    lfs f7, 0x8c8(r3)
    lwz r3, 0x1110(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x688(r1)
    lwz r5, 0x68c(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1276
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lfs f0, 0x8c8(r5)
    fctiwz f0, f0
    stfd f0, 0x690(r1)
    lwz r5, 0x694(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x127f
    lwz r5, 0x24(r16)
    li r6, 0x0
    lwz r0, 0x950(r3)
    lwz r3, 0x1110(r15)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1286
    lwz r3, 0x1110(r15)
    li r6, 0x0
    lwz r5, 0x950(r5)
    bl fn_801F4CB4
    lfs f0, 0xc(r16)
    addi r4, r14, 0x121f
    lwz r5, 0x110c(r15)
    li r6, 0x0
    fctiwz f0, f0
    lwz r3, 0x1114(r15)
    lwz r0, 0x934(r5)
    stfd f0, 0x698(r1)
    lwz r5, 0x69c(r1)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1228
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lwz r5, 0x934(r5)
    bl fn_801F4CB4
    lfs f0, 0x10(r16)
    addi r4, r14, 0x1232
    lwz r5, 0x110c(r15)
    li r6, 0x0
    fctiwz f0, f0
    lwz r3, 0x1114(r15)
    lwz r0, 0x940(r5)
    stfd f0, 0x6a0(r1)
    lwz r5, 0x6a4(r1)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1238
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lwz r5, 0x940(r5)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x123f
    lfs f0, 0x14(r16)
    li r6, 0x0
    lfs f7, 0x8bc(r3)
    lwz r3, 0x1114(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x6a8(r1)
    lwz r5, 0x6ac(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1246
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lfs f0, 0x8bc(r5)
    fctiwz f0, f0
    stfd f0, 0x6b0(r1)
    lwz r5, 0x6b4(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x124e
    lfs f0, 0x18(r16)
    li r6, 0x0
    lfs f7, 0x8c0(r3)
    lwz r3, 0x1114(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x6b8(r1)
    lwz r5, 0x6bc(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1256
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lfs f0, 0x8c0(r5)
    fctiwz f0, f0
    stfd f0, 0x6c0(r1)
    lwz r5, 0x6c4(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x125f
    lfs f0, 0x1c(r16)
    li r6, 0x0
    lfs f7, 0x8c4(r3)
    lwz r3, 0x1114(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x6c8(r1)
    lwz r5, 0x6cc(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1266
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lfs f0, 0x8c4(r5)
    fctiwz f0, f0
    stfd f0, 0x6d0(r1)
    lwz r5, 0x6d4(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x126e
    lfs f0, 0x20(r16)
    li r6, 0x0
    lfs f7, 0x8c8(r3)
    lwz r3, 0x1114(r15)
    fsubs f0, f7, f0
    fctiwz f0, f0
    stfd f0, 0x6d8(r1)
    lwz r5, 0x6dc(r1)
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1276
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lfs f0, 0x8c8(r5)
    fctiwz f0, f0
    stfd f0, 0x6e0(r1)
    lwz r5, 0x6e4(r1)
    bl fn_801F4CB4
    lwz r3, 0x110c(r15)
    addi r4, r14, 0x127f
    lwz r5, 0x24(r16)
    li r6, 0x0
    lwz r0, 0x950(r3)
    lwz r3, 0x1114(r15)
    subf r5, r5, r0
    bl fn_801F4CB4
    lwz r5, 0x110c(r15)
    addi r4, r14, 0x1286
    lwz r3, 0x1114(r15)
    li r6, 0x0
    lwz r5, 0x950(r5)
    bl fn_801F4CB4
    lwz r0, 0x1120(r15)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_00002328
    lwz r3, 0x110c(r15)
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000022D0
    lwz r3, 0x110c(r15)
    lwz r3, 0x50(r3)
    bl fn_80219558
    lwz r4, 0x110c(r15)
    lwz r5, 0x8c(r16)
    lwz r0, 0x874(r4)
    subf r4, r5, r0
    bl fn_80219160
    cmpwi r3, 0x0
    mr r14, r3
    beq lbl_fn_803D83A8_000022D0
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_000022D0
    li r16, 0x0
    li r17, 0x0
lbl_fn_803D83A8_00002260:
    add r3, r14, r17
    lbz r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_000022C4
    lwz r3, 0x110c(r15)
    mr r4, r17
    li r5, 0x0
    addi r3, r3, 0x7d4
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000022C4
    mr r3, r17
    bl fn_8021AF50
    lwz r0, 0x1130(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r4, r0, 0x1134
    beq lbl_fn_803D83A8_000022AC
    stw r3, 0x0(r4)
lbl_fn_803D83A8_000022AC:
    lwz r3, 0x1130(r15)
    addi r16, r16, 0x1
    cmpwi r16, 0x2
    addi r0, r3, 0x1
    stw r0, 0x1130(r15)
    bge lbl_fn_803D83A8_000022D0
lbl_fn_803D83A8_000022C4:
    addi r17, r17, 0x1
    cmpwi r17, 0x80
    blt lbl_fn_803D83A8_00002260
lbl_fn_803D83A8_000022D0:
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r3, -0x2040(r3)
    cmpwi r3, 0x0
    ble lbl_fn_803D83A8_00002320
    bl fn_8021AF50
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_00002320
    lwz r0, 0x1130(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r4, r0, 0x1134
    beq lbl_fn_803D83A8_00002308
    stw r3, 0x0(r4)
lbl_fn_803D83A8_00002308:
    lwz r3, 0x1130(r15)
    lwz r4, 0x1104(r15)
    addi r0, r3, 0x1
    stw r0, 0x1130(r15)
    lfs f0, 0xa0(r4)
    stfs f0, 0x100(r4)
lbl_fn_803D83A8_00002320:
    li r0, 0x1
    stw r0, 0x1120(r15)
lbl_fn_803D83A8_00002328:
    lwz r3, 0x1130(r15)
    cmpwi r3, 0x0
    beq lbl_fn_803D83A8_000025D4
    lwz r0, 0x1124(r15)
    cmpw r0, r3
    bge lbl_fn_803D83A8_000025D4
    lwz r3, 0x1104(r15)
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803D83A8_000025D4
    lwz r3, 0x1128(r15)
    addi r0, r3, 0x1
    stw r0, 0x1128(r15)
    cmpwi r0, 0x1e
    blt lbl_fn_803D83A8_000025D4
    bne lbl_fn_803D83A8_000023A4
    lis r4, lbl_807506A0@ha
    lfs f1, lbl_80885D60
    addi r4, r4, lbl_807506A0@l
    addi r3, r1, 0x20
    addi r4, r4, 0x128e
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_803D83A8_000023A4:
    lwz r3, 0x1108(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x1124(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x1134(r3)
    lwz r16, 0xc(r3)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_000023D4
    b lbl_fn_803D83A8_000023D8
lbl_fn_803D83A8_000023D4:
    la r16, lbl_808813D0
lbl_fn_803D83A8_000023D8:
    lwz r4, 0x1108(r15)
    lis r3, lbl_807506A0@ha
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x129b
    addi r14, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r14
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0x1124(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x1134(r3)
    lwz r16, 0xc(r3)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00002420
    b lbl_fn_803D83A8_00002424
lbl_fn_803D83A8_00002420:
    la r16, lbl_808813D0
lbl_fn_803D83A8_00002424:
    lwz r4, 0x1108(r15)
    lis r3, lbl_807506A0@ha
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x12a7
    addi r14, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r14
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0x1124(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x1134(r3)
    lwz r16, 0xc(r3)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_0000246C
    b lbl_fn_803D83A8_00002470
lbl_fn_803D83A8_0000246C:
    la r16, lbl_808813D0
lbl_fn_803D83A8_00002470:
    lwz r4, 0x1108(r15)
    lis r3, lbl_807506A0@ha
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x12b3
    addi r14, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r14
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0x1124(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x1134(r3)
    lwz r16, 0xc(r3)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_000024B8
    b lbl_fn_803D83A8_000024BC
lbl_fn_803D83A8_000024B8:
    la r16, lbl_808813D0
lbl_fn_803D83A8_000024BC:
    lwz r4, 0x1108(r15)
    lis r3, lbl_807506A0@ha
    addi r3, r3, lbl_807506A0@l
    addi r3, r3, 0x12bf
    addi r14, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r14
    mr r5, r16
    bl fn_801FEE08
    lwz r0, 0x1124(r15)
    slwi r0, r0, 2
    add r3, r15, r0
    lwz r3, 0x1134(r3)
    lwz r16, 0x14(r3)
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00002504
    b lbl_fn_803D83A8_00002508
lbl_fn_803D83A8_00002504:
    la r16, lbl_808813D0
lbl_fn_803D83A8_00002508:
    cmpwi r16, 0x0
    beq lbl_fn_803D83A8_00002574
    lwz r0, 0xd98(r15)
    li r4, 0x1
    li r3, 0x0
    stw r4, 0xd90(r15)
    srwi. r0, r0, 31
    stw r3, 0xd94(r15)
    bne lbl_fn_803D83A8_00002538
    lbz r0, 0xd98(r15)
    clrlwi r14, r0, 25
    b lbl_fn_803D83A8_0000253C
lbl_fn_803D83A8_00002538:
    lwz r14, 0xd9c(r15)
lbl_fn_803D83A8_0000253C:
    lbz r0, 0x18(r1)
    mr r3, r16
    stb r0, 0x1c(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r5, r14
    mr r6, r16
    addi r3, r15, 0xd98
    addi r8, r1, 0x1c
    add r7, r16, r0
    li r4, 0x0
    bl fn_8006F72C
    li r0, 0x2
    stw r0, 0xdb0(r15)
lbl_fn_803D83A8_00002574:
    lwz r4, 0x1108(r15)
    lfs f7, 0xa0(r4)
    lfs f0, 0x100(r4)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803D83A8_000025D4
    lwz r3, 0x1124(r15)
    lwz r0, 0x1130(r15)
    addi r3, r3, 0x1
    cmpw r3, r0
    bge lbl_fn_803D83A8_000025D4
    li r0, 0x0
    stw r0, 0x1128(r15)
    lfs f0, lbl_80885D58
    stw r3, 0x1124(r15)
    stfs f0, 0x100(r4)
    b lbl_fn_803D83A8_000025D4
lbl_fn_803D83A8_000025C0:
    li r0, 0x0
    stw r0, 0x110c(r15)
    stw r0, 0x1118(r15)
    stw r0, 0x111c(r15)
    stw r0, 0x112c(r15)
lbl_fn_803D83A8_000025D4:
    lwz r0, 0x112c(r15)
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_000025F4
    lwz r0, 0x1118(r15)
    cmpwi r0, 0x78
    blt lbl_fn_803D83A8_000025F4
    li r0, 0x77
    stw r0, 0x1118(r15)
lbl_fn_803D83A8_000025F4:
    lwz r0, 0x1118(r15)
    cmpwi r0, 0x78
    ble lbl_fn_803D83A8_00002638
    lwz r3, 0x1110(r15)
    lfs f0, lbl_80885D60
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x1110(r15)
    lfs f7, 0x100(r3)
    fcmpo cr0, f7, f0
    cror eq, lt, eq
    bne lbl_fn_803D83A8_000026D0
    li r0, 0x0
    stw r0, 0x110c(r15)
    stw r0, 0x1118(r15)
    b lbl_fn_803D83A8_000026D0
lbl_fn_803D83A8_00002638:
    bne lbl_fn_803D83A8_00002668
    lwz r3, 0x1110(r15)
    lfs f0, lbl_80885D5C
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, 0x1110(r15)
    stfs f0, 0x104(r3)
    lwz r3, 0x1110(r15)
    lfs f0, 0xa0(r3)
    stfs f0, 0x100(r3)
    b lbl_fn_803D83A8_000026D0
lbl_fn_803D83A8_00002668:
    cmpwi r0, 0x0
    beq lbl_fn_803D83A8_000026D0
    lwz r3, 0x1110(r15)
    lfs f7, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f7
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_803D83A8_000026C4
    lwz r3, 0x1114(r15)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r0, 0x111c(r15)
    cmpwi r0, 0x0
    bne lbl_fn_803D83A8_000026D0
    lwz r3, 0x1114(r15)
    li r4, 0x1
    bl fn_801F465C
    li r0, 0x1
    stw r0, 0x111c(r15)
    b lbl_fn_803D83A8_000026D0
lbl_fn_803D83A8_000026C4:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_803D83A8_000026D0:
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r0, -0x2040(r3)
    cmpwi r0, 0x0
    ble lbl_fn_803D83A8_00002714
    lwz r3, 0x1104(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1110(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x1114(r15)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_803D83A8_00002714:
    lwz r3, 0x1118(r15)
    li r0, 0x0
    stw r0, 0x112c(r15)
    addi r0, r3, 0x1
    stw r0, 0x1118(r15)
lbl_fn_803D83A8_00002728:
    li r0, 0x808
    addi r11, r1, 0x750
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x800(r1)
    psq_l f30, 0x7f8(r1), 0, 0
    lfd f30, 0x7f0(r1)
    psq_l f29, 0x7e8(r1), 0, 0
    lfd f29, 0x7e0(r1)
    psq_l f28, 0x7d8(r1), 0, 0
    lfd f28, 0x7d0(r1)
    psq_l f27, 0x7c8(r1), 0, 0
    lfd f27, 0x7c0(r1)
    psq_l f26, 0x7b8(r1), 0, 0
    lfd f26, 0x7b0(r1)
    psq_l f25, 0x7a8(r1), 0, 0
    lfd f25, 0x7a0(r1)
    psq_l f24, 0x798(r1), 0, 0
    lfd f24, 0x790(r1)
    psq_l f23, 0x788(r1), 0, 0
    lfd f23, 0x780(r1)
    psq_l f22, 0x778(r1), 0, 0
    lfd f22, 0x770(r1)
    psq_l f21, 0x768(r1), 0, 0
    lfd f21, 0x760(r1)
    psq_l f20, 0x758(r1), 0, 0
    lfd f20, 0x750(r1)
    bl _restgpr_14
    lwz r0, 0x814(r1)
    mtlr r0
    addi r1, r1, 0x810
    blr
}
