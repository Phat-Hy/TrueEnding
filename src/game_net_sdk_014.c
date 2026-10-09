#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8067E23C(void);
extern void fn_806809C0(void);
extern void fn_8068446C(void);
extern void fn_806A4264(void);
extern void fn_806A4270(void);
extern void fn_806A6E40(void);
extern void fn_806A7130(void);
extern void fn_806A76B0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABB70(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B15B0(void);
extern void fn_806B1660(void);
extern void fn_806B1710(void);
extern void fn_806BBCA0(void);
extern void fn_806BCD40(void);
extern void fn_806C10C0(void);
extern void fn_806C1AC0(void);
extern void fn_806C4740(void);
extern void fn_806C6470(void);
extern void fn_806CD150(void);
extern void fn_806CE700(void);
extern void fn_806EA900(void);
extern void fn_806EA910(void);
extern void fn_806EA920(void);
extern void fn_806EAC30(void);
extern void fn_806EACA0(void);
extern void fn_806EAD20(void);
extern void fn_806EEDC0(void);
extern void fn_806EF8B0(void);
extern void fn_806F0EB0(void);
extern void fn_806FD420(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BF4B8[];
extern u8 lbl_807BF4E8[];
extern u8 lbl_807BF508[];
extern u8 lbl_807BF524[];
extern u8 lbl_807C16F0[];
extern u8 lbl_807C5D00[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806B842C_text(void);
void fn_806B8430(void);
void fn_806B85B0(void);
void fn_806B8D60(void);
void fn_806B9410(void);
void fn_806B9500(void);
void fn_806B9740(void);
void fn_806B97B0(void);
void fn_806B9820(void);

asm void pad_03_806B842C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_806B8430(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    cmpwi r7, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r27, r4
    mr r30, r5
    mr r28, r6
    mr r29, r7
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806B8430_00000040
    cmpwi r6, 0x0
    bne lbl_fn_806B8430_00000048
lbl_fn_806B8430_00000040:
    li r3, 0x0
    b lbl_fn_806B8430_00000164
lbl_fn_806B8430_00000048:
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x2
    stb r0, 0x9(r1)
    mr r3, r30
    stw r27, 0xc(r1)
    bl fn_806A4270
    sth r3, 0xa(r1)
    lbz r30, 0x0(r28)
    cmplwi r30, 0xfe
    bne lbl_fn_806B8430_00000088
    lbz r0, 0x1(r28)
    cmplwi r0, 0xfd
    beq lbl_fn_806B8430_00000090
lbl_fn_806B8430_00000088:
    cmplwi r30, 0x5c
    bne lbl_fn_806B8430_000000DC
lbl_fn_806B8430_00000090:
    addi r4, r31, 0x6d0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B8430_000000C8
    mr r4, r28
    mr r5, r29
    addi r6, r1, 0x8
    bl fn_806F0EB0
    b lbl_fn_806B8430_00000160
lbl_fn_806B8430_000000C8:
    addi r4, r31, 0x6f8
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B8430_00000160
lbl_fn_806B8430_000000DC:
    lis r4, lbl_807C5D00@ha
    mr r3, r28
    addi r4, r4, lbl_807C5D00@l
    li r5, 0x6
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_806B8430_0000011C
    addi r4, r31, 0x710
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    mr r3, r28
    mr r4, r29
    addi r5, r1, 0x8
    bl fn_806FD420
    b lbl_fn_806B8430_00000160
lbl_fn_806B8430_0000011C:
    cmplwi r30, 0xfe
    bne lbl_fn_806B8430_00000148
    lbz r0, 0x1(r28)
    cmplwi r0, 0xfe
    bne lbl_fn_806B8430_00000148
    addi r4, r31, 0x738
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B8430_00000164
lbl_fn_806B8430_00000148:
    addi r4, r31, 0x768
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    li r3, 0x0
    b lbl_fn_806B8430_00000164
lbl_fn_806B8430_00000160:
    li r3, 0x1
lbl_fn_806B8430_00000164:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806B85B0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_24
    lis r3, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r3, lbl_80860898@l(r3)
    mr r25, r4
    mr r26, r5
    mr r27, r6
    cmpwi r3, 0x0
    mr r28, r7
    mr r29, r8
    mr r24, r9
    addi r30, r30, lbl_807BE9D0@l
    li r31, 0x0
    beq lbl_fn_806B85B0_000001EC
    lwz r0, 0x744(r3)
    cmpwi r0, 0x5
    bne lbl_fn_806B85B0_000001EC
    addi r4, r30, 0x798
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_000001EC:
    cmpwi r3, 0x0
    beq lbl_fn_806B85B0_0000020C
    lwz r0, 0x744(r3)
    cmpwi r0, 0x6
    bne lbl_fn_806B85B0_0000020C
    lbz r0, 0x752(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B85B0_00000230
lbl_fn_806B85B0_0000020C:
    mr r3, r25
    addi r4, r30, 0x7d4
    li r5, -0x1
    bl fn_806EA910
    addi r4, r30, 0x7e0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_00000230:
    mr r5, r28
    mr r6, r29
    addi r4, r30, 0x808
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x0
    beq lbl_fn_806B85B0_0000026C
    cmpwi r24, 0x0
    beq lbl_fn_806B85B0_0000026C
    mr r3, r29
    li r4, 0x0
    li r5, 0xa
    bl fn_8068446C
    mr r31, r3
lbl_fn_806B85B0_0000026C:
    mr r5, r31
    addi r4, r30, 0x840
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    bl fn_806B15B0
    cmpwi r3, -0x1
    mr r29, r3
    bne lbl_fn_806B85B0_00000594
    mr r3, r25
    addi r4, r30, 0x854
    li r5, -0x1
    bl fn_806EA910
    addi r4, r30, 0x860
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B85B0_000003AC
    lis r24, lbl_80860898@ha
    li r6, 0xff
    lwz r5, lbl_80860898@l(r24)
    li r0, 0x0
    addi r4, r30, 0x884
    li r3, 0x80
    stb r6, 0x808(r5)
    lwz r5, lbl_80860898@l(r24)
    stb r0, 0x809(r5)
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r24)
    lwz r26, 0x744(r3)
    cmpwi r26, 0x1
    beq lbl_fn_806B85B0_00000398
    lis r25, lbl_80860890@ha
    addi r24, r25, lbl_80860890@l
    lwz r27, lbl_80860890@l(r25)
    lwz r28, 0x4(r24)
    bl OSGetTime
    stw r4, 0x4(r24)
    lis r24, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r25)
    addi r7, r24, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r24, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r26, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r30, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B85B0_00000398:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_000003AC:
    lis r24, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r24)
    cmpwi r3, 0x0
    beq lbl_fn_806B85B0_0000091C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r24)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r24)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x543c
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r24)
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r24)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B85B0_00000444
    cmpwi r6, 0x0
    bne lbl_fn_806B85B0_00000444
    li r6, 0x1
lbl_fn_806B85B0_00000444:
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x14
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    lis r24, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r24)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B85B0_000004B4
    li r4, 0x0
    b lbl_fn_806B85B0_00000500
lbl_fn_806B85B0_000004B4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B85B0_000004FC
    lwz r3, lbl_80860898@l(r24)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B85B0_000004E8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B85B0_000004E8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B85B0_000004FC
lbl_fn_806B85B0_000004E8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B85B0_000004FC
    li r4, 0x1
    b lbl_fn_806B85B0_00000500
lbl_fn_806B85B0_000004FC:
    li r4, 0x0
lbl_fn_806B85B0_00000500:
    neg r0, r4
    addi r3, r1, 0x14
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x48
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_00000594:
    lis r3, lbl_80860898@ha
    lwz r24, lbl_80860898@l(r3)
    lwz r0, 0x670(r24)
    cmplw r26, r0
    bne lbl_fn_806B85B0_000005C0
    mr r3, r27
    bl fn_806A4264
    lhz r0, 0x674(r24)
    clrlwi r3, r3, 16
    cmplw r3, r0
    beq lbl_fn_806B85B0_00000638
lbl_fn_806B85B0_000005C0:
    lis r24, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r24)
    lwz r0, 0x660(r3)
    cmpw r31, r0
    bne lbl_fn_806B85B0_00000600
    addi r4, r30, 0x890
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    lwz r4, lbl_80860898@l(r24)
    mr r3, r27
    stw r26, 0x670(r4)
    lwz r24, lbl_80860898@l(r24)
    bl fn_806A4264
    sth r3, 0x674(r24)
    b lbl_fn_806B85B0_00000638
lbl_fn_806B85B0_00000600:
    mr r3, r25
    addi r4, r30, 0x8b8
    li r5, -0x1
    bl fn_806EA910
    mr r3, r26
    mr r4, r27
    li r5, 0x0
    bl fn_806EEDC0
    mr r5, r3
    addi r4, r30, 0x8d0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_00000638:
    lis r31, lbl_80860898@ha
    li r24, 0x0
    lwz r4, lbl_80860898@l(r31)
    mr r3, r25
    stw r24, 0x734(r4)
    stw r24, 0x730(r4)
    lwz r4, 0x8(r4)
    bl fn_806EA900
    cmpwi r3, 0x0
    bne lbl_fn_806B85B0_00000850
    addi r4, r30, 0x908
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    cmpwi r3, 0x0
    beq lbl_fn_806B85B0_0000091C
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r31)
    lis r4, 0xffff
    li r3, 0x6
    stb r24, 0x751(r5)
    subi r4, r4, 0x3a1a
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r31)
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B85B0_00000700
    cmpwi r6, 0x0
    bne lbl_fn_806B85B0_00000700
    li r6, 0x1
lbl_fn_806B85B0_00000700:
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r30, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    lis r25, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r25)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B85B0_00000770
    li r4, 0x0
    b lbl_fn_806B85B0_000007BC
lbl_fn_806B85B0_00000770:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B85B0_000007B8
    lwz r3, lbl_80860898@l(r25)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B85B0_000007A4
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B85B0_000007A4
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B85B0_000007B8
lbl_fn_806B85B0_000007A4:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B85B0_000007B8
    li r4, 0x1
    b lbl_fn_806B85B0_000007BC
lbl_fn_806B85B0_000007B8:
    li r4, 0x0
lbl_fn_806B85B0_000007BC:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r30, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r30, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x20
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r25)
    cntlzw r0, r3
    srwi r24, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r25)
    mr r7, r3
    lwz r12, 0x8a0(r25)
    mr r5, r24
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r25)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B85B0_0000091C
lbl_fn_806B85B0_00000850:
    mr r3, r26
    mr r4, r27
    li r5, 0x0
    bl fn_806EEDC0
    mr r5, r3
    mr r6, r28
    addi r4, r30, 0x92c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r31)
    li r0, 0xff
    stb r0, 0x808(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r24, 0x809(r3)
    lwz r5, lbl_80860898@l(r31)
    lwz r0, 0x6c0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B85B0_000008C4
    lwz r0, 0x58(r5)
    cmpwi r0, 0x1
    bne lbl_fn_806B85B0_000008C4
    lis r3, 0x1
    srawi r4, r28, 1
    subi r0, r3, 0x1
    cmpw r4, r0
    bge lbl_fn_806B85B0_000008C0
    mr r0, r4
lbl_fn_806B85B0_000008C0:
    sth r0, 0x758(r5)
lbl_fn_806B85B0_000008C4:
    mr r3, r29
    bl fn_806B1660
    mr r26, r3
    mr r3, r29
    bl fn_806B1710
    stw r25, 0x0(r26)
    lis r6, lbl_80860898@ha
    mr r24, r3
    stb r29, 0x0(r3)
    lwz r4, lbl_80860898@l(r6)
    lbz r5, 0x676(r4)
    stb r5, 0x1(r3)
    lwz r4, lbl_80860898@l(r6)
    lwz r0, 0x660(r4)
    stw r0, 0x4(r3)
    mr r3, r5
    bl fn_806CE700
    mr r3, r25
    mr r4, r24
    bl fn_806EAD20
    li r3, 0x2
    bl fn_806C1AC0
lbl_fn_806B85B0_0000091C:
    addi r11, r1, 0x90
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806B8D60(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x70
    bl _savegpr_26
    cmpwi r5, 0x0
    lis r31, lbl_807BE9D0@ha
    mr r30, r3
    mr r28, r4
    mr r27, r5
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806B8D60_0000096C
    mr r26, r27
    b lbl_fn_806B8D60_00000970
lbl_fn_806B8D60_0000096C:
    addi r26, r31, 0x958
lbl_fn_806B8D60_00000970:
    mr r3, r30
    bl fn_806EACA0
    clrlwi r5, r3, 16
    mr r6, r28
    mr r7, r26
    addi r4, r31, 0x95c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806B8D60_000009B8
    lwz r0, 0x744(r3)
    cmpwi r0, 0x6
    beq lbl_fn_806B8D60_00000A2C
    cmpwi r0, 0xf
    beq lbl_fn_806B8D60_00000A2C
lbl_fn_806B8D60_000009B8:
    cmpwi r27, 0x0
    beq lbl_fn_806B8D60_000009C8
    mr r26, r27
    b lbl_fn_806B8D60_000009CC
lbl_fn_806B8D60_000009C8:
    addi r26, r31, 0x958
lbl_fn_806B8D60_000009CC:
    mr r3, r30
    bl fn_806EACA0
    clrlwi r5, r3, 16
    mr r6, r28
    mr r7, r26
    addi r4, r31, 0x994
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x6c4(r3)
    cmpwi r0, 0xf
    bne lbl_fn_806B8D60_00000A18
    addi r4, r31, 0x9d8
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B8D60_00000A2C
lbl_fn_806B8D60_00000A18:
    addi r4, r31, 0xa10
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000A2C:
    cmpwi r28, 0x0
    beq lbl_fn_806B8D60_00000D08
    cmpwi r27, 0x0
    bne lbl_fn_806B8D60_00000A40
    addi r27, r31, 0x958
lbl_fn_806B8D60_00000A40:
    mr r5, r28
    mr r6, r27
    addi r4, r31, 0xa3c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    bl fn_806CD150
    cmpwi r3, 0x1
    bne lbl_fn_806B8D60_00000B3C
    addi r4, r31, 0x2a0
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x1
    beq lbl_fn_806B8D60_00000B28
    lis r29, lbl_80860890@ha
    addi r30, r29, lbl_80860890@l
    lwz r27, lbl_80860890@l(r29)
    lwz r26, 0x4(r30)
    bl OSGetTime
    stw r4, 0x4(r30)
    lis r30, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, lbl_80860890@l(r29)
    addi r7, r30, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r30, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B8D60_00000B28:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000B3C:
    lis r30, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r30)
    lwz r0, 0x6c4(r5)
    cmpwi r0, 0xf
    bne lbl_fn_806B8D60_00000B80
    li r0, 0x0
    stw r0, 0x6c4(r5)
    li r4, 0x0
    li r5, 0x30
    lwz r3, lbl_80860898@l(r30)
    addi r3, r3, 0x6c8
    bl memset
    addi r4, r31, 0xa58
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000B80:
    cmpwi r28, 0x5
    beq lbl_fn_806B8D60_00000FC4
    cmpwi r28, 0x6
    bne lbl_fn_806B8D60_00000CC8
    lbz r3, 0xc(r5)
    addi r0, r3, 0x1
    stb r0, 0xc(r5)
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0xc(r3)
    cmplwi r0, 0x5
    ble lbl_fn_806B8D60_00000C04
    addi r4, r31, 0xa6c
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r30)
    li r0, 0x0
    li r4, 0x2
    stb r0, 0xc(r3)
    lwz r5, lbl_80860898@l(r30)
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806B8D60_00000BEC
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806B8D60_00000BFC
lbl_fn_806B8D60_00000BEC:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B8D60_00000BFC
    li r4, 0x1
lbl_fn_806B8D60_00000BFC:
    bl fn_806C10C0
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000C04:
    addi r4, r31, 0xa88
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    lwz r6, lbl_80860898@l(r30)
    addi r3, r1, 0x18
    addi r5, r31, 0x5c
    li r4, 0x18
    lwz r6, 0x7a8(r6)
    crclr 6
    bl fn_806809C0
    lwz r26, lbl_80860898@l(r30)
    li r5, 0x0
    lwz r3, 0x670(r26)
    lhz r4, 0x674(r26)
    bl fn_806EEDC0
    lwz r4, 0x4(r26)
    mr r5, r3
    lwz r9, 0x8(r26)
    addi r6, r1, 0x18
    lwz r3, 0x0(r4)
    li r4, 0x0
    li r7, -0x1
    li r8, 0x1388
    li r10, 0x0
    bl fn_806EA920
    cmpwi r3, 0x1
    bne lbl_fn_806B8D60_00000C7C
    bl fn_806C6470
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000C7C:
    cmpwi r3, 0x0
    beq lbl_fn_806B8D60_00000FC4
    lwz r5, lbl_80860898@l(r30)
    li r4, 0x2
    lbz r0, 0x15(r5)
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806B8D60_00000CA8
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806B8D60_00000CB8
lbl_fn_806B8D60_00000CA8:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B8D60_00000CB8
    li r4, 0x1
lbl_fn_806B8D60_00000CB8:
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806B8D60_00000FC4
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000CC8:
    lbz r0, 0x15(r5)
    li r4, 0x2
    lwz r3, 0x660(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806B8D60_00000CE8
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806B8D60_00000CF8
lbl_fn_806B8D60_00000CE8:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806B8D60_00000CF8
    li r4, 0x1
lbl_fn_806B8D60_00000CF8:
    bl fn_806C10C0
    cmpwi r3, 0x0
    bne lbl_fn_806B8D60_00000FC4
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000D08:
    addi r4, r31, 0xaa0
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    bl fn_806B15B0
    cmpwi r3, -0x1
    mr r26, r3
    bne lbl_fn_806B8D60_00000F20
    addi r4, r31, 0xab0
    li r3, 0x8
    crclr 6
    bl fn_806A76B0
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    cmpwi r3, 0x0
    beq lbl_fn_806B8D60_00000FC4
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r30)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r30)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x6
    stb r0, 0x751(r5)
    subi r4, r4, 0x543c
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r30)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B8D60_00000DD0
    cmpwi r6, 0x0
    bne lbl_fn_806B8D60_00000DD0
    li r6, 0x1
lbl_fn_806B8D60_00000DD0:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B8D60_00000E40
    li r4, 0x0
    b lbl_fn_806B8D60_00000E8C
lbl_fn_806B8D60_00000E40:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B8D60_00000E88
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B8D60_00000E74
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B8D60_00000E74
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B8D60_00000E88
lbl_fn_806B8D60_00000E74:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B8D60_00000E88
    li r4, 0x1
    b lbl_fn_806B8D60_00000E8C
lbl_fn_806B8D60_00000E88:
    li r4, 0x0
lbl_fn_806B8D60_00000E8C:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x30
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x30
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r27, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r27)
    cntlzw r0, r3
    srwi r26, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r27)
    mr r7, r3
    lwz r12, 0x8a0(r27)
    mr r5, r26
    subi r0, r4, 0x2
    lwz r8, 0x8a4(r27)
    cntlzw r0, r0
    li r3, 0x6
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000F20:
    bl fn_806B1660
    mr r31, r3
    mr r3, r26
    bl fn_806B1710
    stw r30, 0x0(r31)
    lis r4, lbl_80860898@ha
    mr r27, r3
    stb r26, 0x0(r3)
    lwz r5, lbl_80860898@l(r4)
    lwz r0, 0x6c4(r5)
    cmpwi r0, 0xf
    beq lbl_fn_806B8D60_00000F68
    lbz r0, 0x676(r5)
    stb r0, 0x1(r3)
    lwz r4, lbl_80860898@l(r4)
    lwz r0, 0x660(r4)
    stw r0, 0x4(r3)
    b lbl_fn_806B8D60_00000F7C
lbl_fn_806B8D60_00000F68:
    lbz r0, 0x6de(r5)
    stb r0, 0x1(r3)
    lwz r4, lbl_80860898@l(r4)
    lwz r0, 0x6c8(r4)
    stw r0, 0x4(r3)
lbl_fn_806B8D60_00000F7C:
    lbz r3, 0x1(r3)
    bl fn_806CE700
    mr r3, r30
    mr r4, r27
    bl fn_806EAD20
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x744(r3)
    cmpwi r0, 0xf
    beq lbl_fn_806B8D60_00000FB0
    lwz r0, 0x6c4(r3)
    cmpwi r0, 0xf
    bne lbl_fn_806B8D60_00000FBC
lbl_fn_806B8D60_00000FB0:
    li r3, 0x0
    bl fn_806C1AC0
    b lbl_fn_806B8D60_00000FC4
lbl_fn_806B8D60_00000FBC:
    li r3, 0x1
    bl fn_806C1AC0
lbl_fn_806B8D60_00000FC4:
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_806B9410(void)
{
    nofralloc
    stwu r1, -0x220(r1)
    mflr r0
    li r3, 0x40
    stw r0, 0x224(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x218(r1)
    mr r30, r5
    stw r29, 0x214(r1)
    mr r29, r4
    lis r4, lbl_807BF4B8@ha
    lbz r5, 0x0(r5)
    mr r6, r29
    addi r4, r4, lbl_807BF4B8@l
    crclr 6
    bl fn_806A76B0
    mr r3, r30
    bl strlen
    subic. r31, r3, 0x1
    bne lbl_fn_806B9410_00001038
    li r6, 0x0
    b lbl_fn_806B9410_0000109C
lbl_fn_806B9410_00001038:
    mr r4, r31
    addi r3, r30, 0x1
    addi r5, r1, 0x8
    li r6, 0x200
    bl fn_806A6E40
    cmpwi r3, -0x1
    mr r6, r3
    beq lbl_fn_806B9410_00001078
    slwi r0, r3, 30
    srwi r4, r3, 31
    subf r0, r4, r0
    rotlwi r0, r0, 2
    add. r0, r0, r4
    bne lbl_fn_806B9410_00001078
    cmpwi r3, 0x200
    ble lbl_fn_806B9410_00001094
lbl_fn_806B9410_00001078:
    lis r4, lbl_807BF4E8@ha
    mr r5, r31
    li r3, 0x4
    addi r4, r4, lbl_807BF4E8@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B9410_000010B8
lbl_fn_806B9410_00001094:
    srawi r0, r3, 2
    addze r6, r0
lbl_fn_806B9410_0000109C:
    lbz r3, 0x0(r30)
    mr r8, r6
    mr r4, r29
    addi r7, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_806BCD40
lbl_fn_806B9410_000010B8:
    lwz r0, 0x224(r1)
    lwz r31, 0x21c(r1)
    lwz r30, 0x218(r1)
    lwz r29, 0x214(r1)
    mtlr r0
    addi r1, r1, 0x220
    blr
}

asm void fn_806B9500(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807BE9D0@ha
    addi r31, r31, lbl_807BE9D0@l
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lis r29, lbl_80860898@ha
    stw r28, 0x40(r1)
    mr r28, r4
    lwz r5, lbl_80860898@l(r29)
    cmpwi r5, 0x0
    beq lbl_fn_806B9500_000012EC
    cmpwi r3, 0x0
    bne lbl_fn_806B9500_0000111C
    b lbl_fn_806B9500_000012EC
lbl_fn_806B9500_0000111C:
    li r0, 0x1
    stb r0, 0x751(r5)
    lwz r3, lbl_80860898@l(r29)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r29)
    li r0, 0x0
    mr r3, r30
    mr r4, r28
    stb r0, 0x751(r5)
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r29)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B9500_000011A0
    cmpwi r6, 0x0
    bne lbl_fn_806B9500_000011A0
    li r6, 0x1
lbl_fn_806B9500_000011A0:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r29, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r29)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B9500_00001210
    li r4, 0x0
    b lbl_fn_806B9500_0000125C
lbl_fn_806B9500_00001210:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806B9500_00001258
    lwz r3, lbl_80860898@l(r29)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806B9500_00001244
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806B9500_00001244
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806B9500_00001258
lbl_fn_806B9500_00001244:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806B9500_00001258
    li r4, 0x1
    b lbl_fn_806B9500_0000125C
lbl_fn_806B9500_00001258:
    li r4, 0x0
lbl_fn_806B9500_0000125C:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x14
    li r3, 0x1
    li r5, 0x0
    bl fn_806ACE00
    lis r3, lbl_80860898@ha
    lwz r31, lbl_80860898@l(r3)
    lwz r3, 0x7b0(r31)
    cntlzw r0, r3
    srwi r29, r0, 5
    bl fn_806ACCF0
    lbz r4, 0x14(r31)
    mr r7, r3
    lwz r12, 0x8a0(r31)
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r29
    cntlzw r0, r0
    lwz r8, 0x8a4(r31)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806B9500_000012EC:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806B9740(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806B1230
    cmpwi r3, 0x3
    bne lbl_fn_806B9740_00001354
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x17(r3)
    lwz r3, lbl_80860898@l(r4)
    stw r0, 0x8c0(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r3, 0x10(r3)
    bl fn_806EF8B0
    b lbl_fn_806B9740_00001368
lbl_fn_806B9740_00001354:
    lis r4, lbl_807BF508@ha
    li r3, 0x4
    addi r4, r4, lbl_807BF508@l
    crclr 6
    bl fn_806A76B0
lbl_fn_806B9740_00001368:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806B97B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    lis r4, lbl_807BF524@ha
    stw r29, 0x14(r1)
    mr r29, r3
    mr r6, r29
    subi r5, r30, 0x2
    addi r4, r4, lbl_807BF524@l
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_806B9820
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806B9820(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    cmpwi r4, 0x2
    lis r31, lbl_807BE9D0@ha
    mr r28, r3
    mr r27, r5
    addi r31, r31, lbl_807BE9D0@l
    beq lbl_fn_806B9820_00001434
    cmpwi r4, 0x3
    beq lbl_fn_806B9820_00001B80
    cmpwi r4, 0x4
    beq lbl_fn_806B9820_00001DE8
    b lbl_fn_806B9820_00002834
lbl_fn_806B9820_00001434:
    lis r30, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r30)
    lwz r0, 0x744(r6)
    cmpwi r0, 0x1
    bne lbl_fn_806B9820_00002834
    lwz r4, 0x0(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    cmplwi r0, 0x1
    bne lbl_fn_806B9820_00001910
    li r0, 0x0
    stw r0, 0x7b0(r6)
    lwz r3, lbl_80860898@l(r30)
    stw r0, 0x690(r3)
    lwz r5, 0x4(r5)
    lwz r3, lbl_80860898@l(r30)
    rlwinm r4, r5, 24, 8, 15
    extlwi r0, r5, 8, 8
    rlwimi r4, r5, 24, 24, 31
    rlwimi r0, r5, 8, 16, 23
    or r0, r4, r0
    rotlwi r0, r0, 16
    stw r0, 0x8f8(r3)
    lwz r5, lbl_80860898@l(r30)
    lwz r0, 0x8e0(r5)
    cmpwi r0, 0x2
    bne lbl_fn_806B9820_00001A60
    lwz r4, 0x58(r5)
    cmpwi r4, 0x20
    beq lbl_fn_806B9820_00001A60
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_00001898
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_00001814
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806B9820_000014DC
    li r0, 0x1
lbl_fn_806B9820_000014DC:
    cmpwi r0, 0x0
    beq lbl_fn_806B9820_00001814
    lis r6, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r6, lbl_80860898@l(r6)
    srwi r0, r0, 3
    add r3, r6, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_00001814
lbl_fn_806B9820_00001508:
    lwz r0, 0x34(r3)
    lwz r6, 0x30(r3)
    stw r6, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r6, 0x38(r3)
    stw r6, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r6, 0x40(r3)
    stw r6, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r6, 0x48(r3)
    stw r6, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r6, 0x50(r3)
    stw r6, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r6, 0x58(r3)
    stw r6, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r6, 0x0(r3)
    stw r6, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    stw r6, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r6, 0x10(r3)
    stw r6, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r6, 0x18(r3)
    stw r6, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r6, 0x20(r3)
    stw r6, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r6, 0x28(r3)
    stw r6, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r6, -0x30(r3)
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r6, -0x28(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r6, -0x20(r3)
    stw r6, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r6, -0x18(r3)
    stw r6, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r6, -0x10(r3)
    stw r6, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r6, -0x8(r3)
    stw r6, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r6, -0x60(r3)
    stw r6, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r6, -0x58(r3)
    stw r6, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r6, -0x50(r3)
    stw r6, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r6, -0x48(r3)
    stw r6, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r6, -0x40(r3)
    stw r6, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r6, -0x38(r3)
    stw r6, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r6, -0x90(r3)
    stw r6, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r6, -0x88(r3)
    stw r6, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r6, -0x80(r3)
    stw r6, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r6, -0x78(r3)
    stw r6, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r6, -0x70(r3)
    stw r6, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r6, -0x68(r3)
    stw r6, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r6, -0xc0(r3)
    stw r6, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r6, -0xb8(r3)
    stw r6, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r6, -0xb0(r3)
    stw r6, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r6, -0xa8(r3)
    stw r6, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r6, -0xa0(r3)
    stw r6, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r6, -0x98(r3)
    stw r6, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r6, -0xf0(r3)
    stw r6, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r6, -0xe8(r3)
    stw r6, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r6, -0xe0(r3)
    stw r6, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r6, -0xd8(r3)
    stw r6, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r6, -0xd0(r3)
    stw r6, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r6, -0xc8(r3)
    stw r6, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r6, -0x120(r3)
    stw r6, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r6, -0x118(r3)
    stw r6, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r6, -0x110(r3)
    stw r6, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r6, -0x108(r3)
    stw r6, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r6, -0x100(r3)
    stw r6, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r6, -0xf8(r3)
    stw r6, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806B9820_00001508
lbl_fn_806B9820_00001814:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r6, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_00001898
lbl_fn_806B9820_00001830:
    lwz r0, 0x34(r6)
    lwz r3, 0x30(r6)
    stw r3, 0x60(r6)
    stw r0, 0x64(r6)
    lwz r0, 0x3c(r6)
    lwz r3, 0x38(r6)
    stw r3, 0x68(r6)
    stw r0, 0x6c(r6)
    lwz r0, 0x44(r6)
    lwz r3, 0x40(r6)
    stw r3, 0x70(r6)
    stw r0, 0x74(r6)
    lwz r0, 0x4c(r6)
    lwz r3, 0x48(r6)
    stw r3, 0x78(r6)
    stw r0, 0x7c(r6)
    lwz r0, 0x54(r6)
    lwz r3, 0x50(r6)
    stw r3, 0x80(r6)
    stw r0, 0x84(r6)
    lwz r0, 0x5c(r6)
    lwz r3, 0x58(r6)
    stw r3, 0x88(r6)
    stw r0, 0x8c(r6)
    subi r6, r6, 0x30
    bdnz lbl_fn_806B9820_00001830
lbl_fn_806B9820_00001898:
    lis r3, lbl_80860898@ha
    lwz r0, 0x664(r5)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x660(r5)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x66c(r5)
    lwz r3, 0x668(r5)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x674(r5)
    lwz r3, 0x670(r5)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x67c(r5)
    lwz r3, 0x678(r5)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x684(r5)
    lwz r3, 0x680(r5)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x68c(r5)
    lwz r3, 0x688(r5)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
    b lbl_fn_806B9820_00001A60
lbl_fn_806B9820_00001910:
    addi r3, r1, 0x38
    li r4, 0x0
    li r5, 0x30
    bl memset
    lwz r9, 0x4(r27)
    addi r3, r1, 0x60
    addi r4, r27, 0x18
    li r5, 0x4
    rlwinm r8, r9, 24, 8, 15
    extlwi r7, r9, 8, 8
    mr r6, r8
    mr r0, r7
    rlwimi r8, r9, 24, 24, 31
    rlwimi r7, r9, 8, 16, 23
    rlwimi r6, r9, 24, 24, 31
    or r7, r8, r7
    rlwimi r0, r9, 8, 16, 23
    extrwi r7, r7, 8, 8
    stb r7, 0x4e(r1)
    or r0, r6, r0
    stb r0, 0x4f(r1)
    lwz r7, 0x8(r27)
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r0, r0, 16
    stw r0, 0x38(r1)
    lwz r0, 0xc(r27)
    stw r0, 0x3c(r1)
    lwz r0, 0x10(r27)
    stw r0, 0x40(r1)
    lwz r9, 0x14(r27)
    rlwinm r6, r9, 24, 8, 15
    extlwi r0, r9, 8, 8
    mr r8, r6
    mr r7, r0
    rlwimi r6, r9, 24, 24, 31
    rlwimi r0, r9, 8, 16, 23
    rlwimi r8, r9, 24, 24, 31
    or r0, r6, r0
    rlwimi r7, r9, 8, 16, 23
    or r6, r8, r7
    sth r6, 0x44(r1)
    srwi r0, r0, 16
    sth r0, 0x46(r1)
    bl memcpy
    lwz r5, lbl_80860898@l(r30)
    lwz r0, 0x3c(r1)
    lwz r3, 0x38(r1)
    stw r3, 0x690(r5)
    stw r0, 0x694(r5)
    lwz r0, 0x44(r1)
    lwz r3, 0x40(r1)
    stw r3, 0x698(r5)
    stw r0, 0x69c(r5)
    lwz r0, 0x4c(r1)
    lwz r3, 0x48(r1)
    stw r3, 0x6a0(r5)
    stw r0, 0x6a4(r5)
    lwz r0, 0x54(r1)
    lwz r3, 0x50(r1)
    stw r3, 0x6a8(r5)
    stw r0, 0x6ac(r5)
    lwz r0, 0x5c(r1)
    lwz r3, 0x58(r1)
    stw r3, 0x6b0(r5)
    stw r0, 0x6b4(r5)
    lwz r0, 0x64(r1)
    lwz r3, 0x60(r1)
    stw r3, 0x6b8(r5)
    stw r0, 0x6bc(r5)
    lwz r4, 0x1c(r27)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8f8(r5)
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x38(r1)
    stw r0, 0x7b0(r3)
lbl_fn_806B9820_00001A60:
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r0, 0x58(r4)
    cmpwi r0, 0x1
    bne lbl_fn_806B9820_00001A80
    lis r3, 0x1
    addi r6, r3, 0x5f90
    b lbl_fn_806B9820_00001A84
lbl_fn_806B9820_00001A80:
    mulli r6, r0, 0x2ee0
lbl_fn_806B9820_00001A84:
    stw r6, 0x7a4(r4)
    srawi r5, r6, 31
    li r3, 0x80
    stw r5, 0x7a0(r4)
    addi r4, r31, 0xb7c
    crclr 6
    bl fn_806A76B0
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x756(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r29, 0x744(r3)
    cmpwi r29, 0x8
    beq lbl_fn_806B9820_00001B60
    lis r27, lbl_80860890@ha
    addi r26, r27, lbl_80860890@l
    lwz r30, lbl_80860890@l(r27)
    lwz r25, 0x4(r26)
    bl OSGetTime
    stw r4, 0x4(r26)
    lis r26, 0x1062
    lis r6, 0x8000
    subfc r4, r25, r4
    stw r3, lbl_80860890@l(r27)
    addi r7, r26, 0x4dd3
    subfe r3, r30, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r26, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r29, 2
    lwz r8, 0x20(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B9820_00001B60:
    lis r3, lbl_80860898@ha
    li r0, 0x8
    lwz r5, lbl_80860898@l(r3)
    mr r3, r28
    li r4, 0x3
    stw r0, 0x744(r5)
    bl fn_806C4740
    b lbl_fn_806B9820_00002834
lbl_fn_806B9820_00001B80:
    lis r6, lbl_80860898@ha
    lwz r7, lbl_80860898@l(r6)
    lwz r0, 0x744(r7)
    cmpwi r0, 0x13
    bne lbl_fn_806B9820_00001DDC
    li r0, 0x1
    lbz r4, 0x0(r5)
    lbz r5, 0x1(r5)
    slw r0, r0, r3
    lwz r3, 0x780(r7)
    rlwimi r4, r5, 8, 16, 23
    or r0, r3, r0
    stw r0, 0x780(r7)
    lwz r3, lbl_80860898@l(r6)
    lhz r0, 0x758(r3)
    cmplw r4, r0
    ble lbl_fn_806B9820_00001BC8
    sth r4, 0x758(r3)
lbl_fn_806B9820_00001BC8:
    lis r3, lbl_80860898@ha
    li r6, 0x0
    lwz r30, lbl_80860898@l(r3)
    li r5, 0x1
    li r4, 0x1
    lwz r3, 0x58(r30)
    addi r7, r30, 0x90
    subi r0, r3, 0x1
    mtctr r0
    cmpwi r3, 0x1
    ble lbl_fn_806B9820_00001C24
lbl_fn_806B9820_00001BF4:
    lwz r0, 0x58(r30)
    cmpw r5, r0
    bge lbl_fn_806B9820_00001C08
    mr r3, r7
    b lbl_fn_806B9820_00001C0C
lbl_fn_806B9820_00001C08:
    li r3, 0x0
lbl_fn_806B9820_00001C0C:
    lbz r0, 0x16(r3)
    addi r7, r7, 0x30
    addi r5, r5, 0x1
    slw r0, r4, r0
    or r6, r6, r0
    bdnz lbl_fn_806B9820_00001BF4
lbl_fn_806B9820_00001C24:
    lis r26, lbl_80860898@ha
    li r4, 0x1
    lwz r5, lbl_80860898@l(r26)
    lbz r3, 0x676(r5)
    lwz r0, 0x780(r5)
    slw r3, r4, r3
    or r6, r6, r3
    cmplw r6, r0
    bne lbl_fn_806B9820_00002834
    li r3, -0x2
    bl fn_806ABB70
    addi r0, r3, 0x1
    stw r0, 0x8f8(r30)
    lwz r3, lbl_80860898@l(r26)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x2
    beq lbl_fn_806B9820_00001C7C
    addi r4, r31, 0xb90
    li r3, 0x80
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806B9820_00001DB8
lbl_fn_806B9820_00001C7C:
    li r25, 0x1
    li r27, 0x30
    b lbl_fn_806B9820_00001CB4
lbl_fn_806B9820_00001C88:
    cmpw r25, r0
    bge lbl_fn_806B9820_00001C9C
    add r3, r3, r27
    addi r3, r3, 0x60
    b lbl_fn_806B9820_00001CA0
lbl_fn_806B9820_00001C9C:
    li r3, 0x0
lbl_fn_806B9820_00001CA0:
    lbz r3, 0x16(r3)
    li r4, 0x4
    bl fn_806C4740
    addi r27, r27, 0x30
    addi r25, r25, 0x1
lbl_fn_806B9820_00001CB4:
    lwz r3, lbl_80860898@l(r26)
    lwz r0, 0x58(r3)
    cmpw r25, r0
    blt lbl_fn_806B9820_00001C88
    lwz r0, 0x660(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806B9820_00001CDC
    lbz r3, 0x676(r3)
    li r4, 0x4
    bl fn_806C4740
lbl_fn_806B9820_00001CDC:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x14
    beq lbl_fn_806B9820_00001D90
    lis r27, lbl_80860890@ha
    addi r26, r27, lbl_80860890@l
    lwz r25, lbl_80860890@l(r27)
    lwz r29, 0x4(r26)
    bl OSGetTime
    stw r4, 0x4(r26)
    lis r26, 0x1062
    lis r6, 0x8000
    subfc r4, r29, r4
    stw r3, lbl_80860890@l(r27)
    addi r7, r26, 0x4dd3
    subfe r3, r25, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r26, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r28, 2
    lwz r8, 0x50(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    li r3, 0x1
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r31, 0x118
    addi r0, r7, 0x32
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806B9820_00001D90:
    lis r6, lbl_80860898@ha
    li r0, 0x14
    lwz r5, lbl_80860898@l(r6)
    addi r4, r31, 0xbc0
    li r3, 0x80
    stw r0, 0x744(r5)
    lwz r5, lbl_80860898@l(r6)
    lhz r5, 0x758(r5)
    crclr 6
    bl fn_806A76B0
lbl_fn_806B9820_00001DB8:
    lis r26, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r26)
    stb r0, 0x754(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r26)
    stw r4, 0x78c(r5)
    stw r3, 0x788(r5)
    b lbl_fn_806B9820_00002834
lbl_fn_806B9820_00001DDC:
    li r4, 0x4
    bl fn_806C4740
    b lbl_fn_806B9820_00002834
lbl_fn_806B9820_00001DE8:
    lis r30, lbl_80860898@ha
    lwz r6, lbl_80860898@l(r30)
    lwz r0, 0x744(r6)
    cmpwi r0, 0x8
    bne lbl_fn_806B9820_00002834
    lwz r4, 0x0(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi. r28, r0, 16
    beq lbl_fn_806B9820_0000280C
    subi r31, r28, 0x1
    li r29, 0x0
    b lbl_fn_806B9820_00002354
lbl_fn_806B9820_00001E28:
    subf r0, r29, r31
    addi r3, r1, 0x8
    mulli r0, r0, 0x6
    li r4, 0x0
    li r5, 0x30
    slwi r0, r0, 2
    add r26, r27, r0
    bl memset
    lwz r9, 0x4(r26)
    addi r3, r1, 0x30
    addi r4, r26, 0x18
    li r5, 0x4
    rlwinm r8, r9, 24, 8, 15
    extlwi r7, r9, 8, 8
    mr r6, r8
    mr r0, r7
    rlwimi r8, r9, 24, 24, 31
    rlwimi r7, r9, 8, 16, 23
    rlwimi r6, r9, 24, 24, 31
    or r7, r8, r7
    rlwimi r0, r9, 8, 16, 23
    extrwi r7, r7, 8, 8
    stb r7, 0x1e(r1)
    or r0, r6, r0
    stb r0, 0x1f(r1)
    lwz r7, 0x8(r26)
    rlwinm r6, r7, 24, 8, 15
    extlwi r0, r7, 8, 8
    rlwimi r6, r7, 24, 24, 31
    rlwimi r0, r7, 8, 16, 23
    or r0, r6, r0
    rotlwi r0, r0, 16
    stw r0, 0x8(r1)
    lwz r0, 0xc(r26)
    stw r0, 0xc(r1)
    lwz r0, 0x10(r26)
    stw r0, 0x10(r1)
    lwz r9, 0x14(r26)
    rlwinm r6, r9, 24, 8, 15
    extlwi r0, r9, 8, 8
    mr r8, r6
    mr r7, r0
    rlwimi r6, r9, 24, 24, 31
    rlwimi r0, r9, 8, 16, 23
    rlwimi r8, r9, 24, 24, 31
    or r0, r6, r0
    rlwimi r7, r9, 8, 16, 23
    or r6, r8, r7
    sth r6, 0x14(r1)
    srwi r0, r0, 16
    sth r0, 0x16(r1)
    bl memcpy
    lwz r3, lbl_80860898@l(r30)
    lwz r4, 0x58(r3)
    cmpwi r4, 0x20
    beq lbl_fn_806B9820_00002350
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_000022E0
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_0000225C
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806B9820_00001F28
    li r0, 0x1
lbl_fn_806B9820_00001F28:
    cmpwi r0, 0x0
    beq lbl_fn_806B9820_0000225C
    mulli r3, r4, 0x30
    subi r0, r4, 0x1
    lwz r5, lbl_80860898@l(r30)
    srwi r0, r0, 3
    add r3, r5, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_0000225C
lbl_fn_806B9820_00001F50:
    lwz r0, 0x34(r3)
    lwz r5, 0x30(r3)
    stw r5, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r5, 0x38(r3)
    stw r5, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r5, 0x40(r3)
    stw r5, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r5, 0x48(r3)
    stw r5, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r5, 0x50(r3)
    stw r5, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r5, 0x58(r3)
    stw r5, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r5, 0x0(r3)
    stw r5, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r5, 0x8(r3)
    stw r5, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r5, 0x10(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r5, 0x18(r3)
    stw r5, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r5, 0x20(r3)
    stw r5, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x28(r3)
    stw r5, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r5, -0x30(r3)
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r5, -0x28(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r5, -0x20(r3)
    stw r5, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r5, -0x18(r3)
    stw r5, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r5, -0x10(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r5, -0x8(r3)
    stw r5, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r5, -0x60(r3)
    stw r5, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r5, -0x58(r3)
    stw r5, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r5, -0x50(r3)
    stw r5, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r5, -0x48(r3)
    stw r5, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r5, -0x40(r3)
    stw r5, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r5, -0x38(r3)
    stw r5, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r5, -0x90(r3)
    stw r5, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r5, -0x88(r3)
    stw r5, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r5, -0x80(r3)
    stw r5, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r5, -0x78(r3)
    stw r5, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r5, -0x70(r3)
    stw r5, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r5, -0x68(r3)
    stw r5, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r5, -0xc0(r3)
    stw r5, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r5, -0xb8(r3)
    stw r5, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r5, -0xb0(r3)
    stw r5, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r5, -0xa8(r3)
    stw r5, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r5, -0xa0(r3)
    stw r5, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r5, -0x98(r3)
    stw r5, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r5, -0xf0(r3)
    stw r5, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r5, -0xe8(r3)
    stw r5, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r5, -0xe0(r3)
    stw r5, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r5, -0xd8(r3)
    stw r5, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r5, -0xd0(r3)
    stw r5, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r5, -0xc8(r3)
    stw r5, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r5, -0x120(r3)
    stw r5, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r5, -0x118(r3)
    stw r5, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r5, -0x110(r3)
    stw r5, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r5, -0x108(r3)
    stw r5, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r5, -0x100(r3)
    stw r5, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r5, -0xf8(r3)
    stw r5, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806B9820_00001F50
lbl_fn_806B9820_0000225C:
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r30)
    add r5, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_000022E0
lbl_fn_806B9820_00002274:
    lwz r0, 0x34(r5)
    subi r4, r4, 0x1
    lwz r3, 0x30(r5)
    stw r3, 0x60(r5)
    stw r0, 0x64(r5)
    lwz r0, 0x3c(r5)
    lwz r3, 0x38(r5)
    stw r3, 0x68(r5)
    stw r0, 0x6c(r5)
    lwz r0, 0x44(r5)
    lwz r3, 0x40(r5)
    stw r3, 0x70(r5)
    stw r0, 0x74(r5)
    lwz r0, 0x4c(r5)
    lwz r3, 0x48(r5)
    stw r3, 0x78(r5)
    stw r0, 0x7c(r5)
    lwz r0, 0x54(r5)
    lwz r3, 0x50(r5)
    stw r3, 0x80(r5)
    stw r0, 0x84(r5)
    lwz r0, 0x5c(r5)
    lwz r3, 0x58(r5)
    stw r3, 0x88(r5)
    stw r0, 0x8c(r5)
    subi r5, r5, 0x30
    bdnz lbl_fn_806B9820_00002274
lbl_fn_806B9820_000022E0:
    lwz r4, lbl_80860898@l(r30)
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x14(r1)
    lwz r3, 0x10(r1)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x1c(r1)
    lwz r3, 0x18(r1)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x24(r1)
    lwz r3, 0x20(r1)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x2c(r1)
    lwz r3, 0x28(r1)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x34(r1)
    lwz r3, 0x30(r1)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806B9820_00002350:
    addi r29, r29, 0x1
lbl_fn_806B9820_00002354:
    cmpw r29, r28
    blt lbl_fn_806B9820_00001E28
    mulli r0, r28, 0x6
    lis r4, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r4)
    slwi r0, r0, 2
    add r5, r27, r0
    lwz r6, 0x4(r5)
    rlwinm r5, r6, 24, 8, 15
    extlwi r0, r6, 8, 8
    rlwimi r5, r6, 24, 24, 31
    rlwimi r0, r6, 8, 16, 23
    or r0, r5, r0
    rotlwi r0, r0, 16
    stw r0, 0x8f8(r3)
    lwz r5, lbl_80860898@l(r4)
    lwz r4, 0x58(r5)
    cmpwi r4, 0x20
    beq lbl_fn_806B9820_000027F0
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_0000277C
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_000026F8
    cmpwi r4, -0x1
    li r0, 0x0
    ble lbl_fn_806B9820_000023C0
    li r0, 0x1
lbl_fn_806B9820_000023C0:
    cmpwi r0, 0x0
    beq lbl_fn_806B9820_000026F8
    lis r6, lbl_80860898@ha
    subi r0, r4, 0x1
    mulli r3, r4, 0x30
    lwz r6, lbl_80860898@l(r6)
    srwi r0, r0, 3
    add r3, r6, r3
    mtctr r0
    cmpwi r4, 0x8
    ble lbl_fn_806B9820_000026F8
lbl_fn_806B9820_000023EC:
    lwz r0, 0x34(r3)
    lwz r6, 0x30(r3)
    stw r6, 0x60(r3)
    stw r0, 0x64(r3)
    lwz r0, 0x3c(r3)
    lwz r6, 0x38(r3)
    stw r6, 0x68(r3)
    stw r0, 0x6c(r3)
    lwz r0, 0x44(r3)
    lwz r6, 0x40(r3)
    stw r6, 0x70(r3)
    stw r0, 0x74(r3)
    lwz r0, 0x4c(r3)
    lwz r6, 0x48(r3)
    stw r6, 0x78(r3)
    stw r0, 0x7c(r3)
    lwz r0, 0x54(r3)
    lwz r6, 0x50(r3)
    stw r6, 0x80(r3)
    stw r0, 0x84(r3)
    lwz r0, 0x5c(r3)
    lwz r6, 0x58(r3)
    stw r6, 0x88(r3)
    stw r0, 0x8c(r3)
    lwz r0, 0x4(r3)
    lwz r6, 0x0(r3)
    stw r6, 0x30(r3)
    stw r0, 0x34(r3)
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    stw r6, 0x38(r3)
    stw r0, 0x3c(r3)
    lwz r0, 0x14(r3)
    lwz r6, 0x10(r3)
    stw r6, 0x40(r3)
    stw r0, 0x44(r3)
    lwz r0, 0x1c(r3)
    lwz r6, 0x18(r3)
    stw r6, 0x48(r3)
    stw r0, 0x4c(r3)
    lwz r0, 0x24(r3)
    lwz r6, 0x20(r3)
    stw r6, 0x50(r3)
    stw r0, 0x54(r3)
    lwz r0, 0x2c(r3)
    lwz r6, 0x28(r3)
    stw r6, 0x58(r3)
    stw r0, 0x5c(r3)
    lwz r0, -0x2c(r3)
    lwz r6, -0x30(r3)
    stw r6, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, -0x24(r3)
    lwz r6, -0x28(r3)
    stw r6, 0x8(r3)
    stw r0, 0xc(r3)
    lwz r0, -0x1c(r3)
    lwz r6, -0x20(r3)
    stw r6, 0x10(r3)
    stw r0, 0x14(r3)
    lwz r0, -0x14(r3)
    lwz r6, -0x18(r3)
    stw r6, 0x18(r3)
    stw r0, 0x1c(r3)
    lwz r0, -0xc(r3)
    lwz r6, -0x10(r3)
    stw r6, 0x20(r3)
    stw r0, 0x24(r3)
    lwz r0, -0x4(r3)
    lwz r6, -0x8(r3)
    stw r6, 0x28(r3)
    stw r0, 0x2c(r3)
    lwz r0, -0x5c(r3)
    lwz r6, -0x60(r3)
    stw r6, -0x30(r3)
    stw r0, -0x2c(r3)
    lwz r0, -0x54(r3)
    lwz r6, -0x58(r3)
    stw r6, -0x28(r3)
    stw r0, -0x24(r3)
    lwz r0, -0x4c(r3)
    lwz r6, -0x50(r3)
    stw r6, -0x20(r3)
    stw r0, -0x1c(r3)
    lwz r0, -0x44(r3)
    lwz r6, -0x48(r3)
    stw r6, -0x18(r3)
    stw r0, -0x14(r3)
    lwz r0, -0x3c(r3)
    lwz r6, -0x40(r3)
    stw r6, -0x10(r3)
    stw r0, -0xc(r3)
    lwz r0, -0x34(r3)
    lwz r6, -0x38(r3)
    stw r6, -0x8(r3)
    stw r0, -0x4(r3)
    lwz r0, -0x8c(r3)
    lwz r6, -0x90(r3)
    stw r6, -0x60(r3)
    stw r0, -0x5c(r3)
    lwz r0, -0x84(r3)
    lwz r6, -0x88(r3)
    stw r6, -0x58(r3)
    stw r0, -0x54(r3)
    lwz r0, -0x7c(r3)
    lwz r6, -0x80(r3)
    stw r6, -0x50(r3)
    stw r0, -0x4c(r3)
    lwz r0, -0x74(r3)
    lwz r6, -0x78(r3)
    stw r6, -0x48(r3)
    stw r0, -0x44(r3)
    lwz r0, -0x6c(r3)
    lwz r6, -0x70(r3)
    stw r6, -0x40(r3)
    stw r0, -0x3c(r3)
    lwz r0, -0x64(r3)
    lwz r6, -0x68(r3)
    stw r6, -0x38(r3)
    stw r0, -0x34(r3)
    lwz r0, -0xbc(r3)
    subi r4, r4, 0x8
    lwz r6, -0xc0(r3)
    stw r6, -0x90(r3)
    stw r0, -0x8c(r3)
    lwz r0, -0xb4(r3)
    lwz r6, -0xb8(r3)
    stw r6, -0x88(r3)
    stw r0, -0x84(r3)
    lwz r0, -0xac(r3)
    lwz r6, -0xb0(r3)
    stw r6, -0x80(r3)
    stw r0, -0x7c(r3)
    lwz r0, -0xa4(r3)
    lwz r6, -0xa8(r3)
    stw r6, -0x78(r3)
    stw r0, -0x74(r3)
    lwz r0, -0x9c(r3)
    lwz r6, -0xa0(r3)
    stw r6, -0x70(r3)
    stw r0, -0x6c(r3)
    lwz r0, -0x94(r3)
    lwz r6, -0x98(r3)
    stw r6, -0x68(r3)
    stw r0, -0x64(r3)
    lwz r0, -0xec(r3)
    lwz r6, -0xf0(r3)
    stw r6, -0xc0(r3)
    stw r0, -0xbc(r3)
    lwz r0, -0xe4(r3)
    lwz r6, -0xe8(r3)
    stw r6, -0xb8(r3)
    stw r0, -0xb4(r3)
    lwz r0, -0xdc(r3)
    lwz r6, -0xe0(r3)
    stw r6, -0xb0(r3)
    stw r0, -0xac(r3)
    lwz r0, -0xd4(r3)
    lwz r6, -0xd8(r3)
    stw r6, -0xa8(r3)
    stw r0, -0xa4(r3)
    lwz r0, -0xcc(r3)
    lwz r6, -0xd0(r3)
    stw r6, -0xa0(r3)
    stw r0, -0x9c(r3)
    lwz r0, -0xc4(r3)
    lwz r6, -0xc8(r3)
    stw r6, -0x98(r3)
    stw r0, -0x94(r3)
    lwz r0, -0x11c(r3)
    lwz r6, -0x120(r3)
    stw r6, -0xf0(r3)
    stw r0, -0xec(r3)
    lwz r0, -0x114(r3)
    lwz r6, -0x118(r3)
    stw r6, -0xe8(r3)
    stw r0, -0xe4(r3)
    lwz r0, -0x10c(r3)
    lwz r6, -0x110(r3)
    stw r6, -0xe0(r3)
    stw r0, -0xdc(r3)
    lwz r0, -0x104(r3)
    lwz r6, -0x108(r3)
    stw r6, -0xd8(r3)
    stw r0, -0xd4(r3)
    lwz r0, -0xfc(r3)
    lwz r6, -0x100(r3)
    stw r6, -0xd0(r3)
    stw r0, -0xcc(r3)
    lwz r0, -0xf4(r3)
    lwz r6, -0xf8(r3)
    stw r6, -0xc8(r3)
    stw r0, -0xc4(r3)
    subi r3, r3, 0x180
    bdnz lbl_fn_806B9820_000023EC
lbl_fn_806B9820_000026F8:
    lis r3, lbl_80860898@ha
    mulli r0, r4, 0x30
    lwz r3, lbl_80860898@l(r3)
    add r6, r3, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_806B9820_0000277C
lbl_fn_806B9820_00002714:
    lwz r0, 0x34(r6)
    lwz r3, 0x30(r6)
    stw r3, 0x60(r6)
    stw r0, 0x64(r6)
    lwz r0, 0x3c(r6)
    lwz r3, 0x38(r6)
    stw r3, 0x68(r6)
    stw r0, 0x6c(r6)
    lwz r0, 0x44(r6)
    lwz r3, 0x40(r6)
    stw r3, 0x70(r6)
    stw r0, 0x74(r6)
    lwz r0, 0x4c(r6)
    lwz r3, 0x48(r6)
    stw r3, 0x78(r6)
    stw r0, 0x7c(r6)
    lwz r0, 0x54(r6)
    lwz r3, 0x50(r6)
    stw r3, 0x80(r6)
    stw r0, 0x84(r6)
    lwz r0, 0x5c(r6)
    lwz r3, 0x58(r6)
    stw r3, 0x88(r6)
    stw r0, 0x8c(r6)
    subi r6, r6, 0x30
    bdnz lbl_fn_806B9820_00002714
lbl_fn_806B9820_0000277C:
    lis r3, lbl_80860898@ha
    lwz r0, 0x664(r5)
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x660(r5)
    stw r3, 0x60(r4)
    stw r0, 0x64(r4)
    lwz r0, 0x66c(r5)
    lwz r3, 0x668(r5)
    stw r3, 0x68(r4)
    stw r0, 0x6c(r4)
    lwz r0, 0x674(r5)
    lwz r3, 0x670(r5)
    stw r3, 0x70(r4)
    stw r0, 0x74(r4)
    lwz r0, 0x67c(r5)
    lwz r3, 0x678(r5)
    stw r3, 0x78(r4)
    stw r0, 0x7c(r4)
    lwz r0, 0x684(r5)
    lwz r3, 0x680(r5)
    stw r3, 0x80(r4)
    stw r0, 0x84(r4)
    lwz r0, 0x68c(r5)
    lwz r3, 0x688(r5)
    stw r3, 0x88(r4)
    stw r0, 0x8c(r4)
    lwz r3, 0x58(r4)
    addi r0, r3, 0x1
    stw r0, 0x58(r4)
lbl_fn_806B9820_000027F0:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r3, lbl_80860898@l(r3)
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    b lbl_fn_806B9820_0000282C
lbl_fn_806B9820_0000280C:
    lwz r4, 0x4(r5)
    rlwinm r3, r4, 24, 8, 15
    extlwi r0, r4, 8, 8
    rlwimi r3, r4, 24, 24, 31
    rlwimi r0, r4, 8, 16, 23
    or r0, r3, r0
    rotlwi r0, r0, 16
    stw r0, 0x8f8(r6)
lbl_fn_806B9820_0000282C:
    li r3, 0x3
    bl fn_806C1AC0
lbl_fn_806B9820_00002834:
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}
