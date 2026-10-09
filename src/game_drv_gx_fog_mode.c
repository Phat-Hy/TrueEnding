#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSDisableInterrupts(void);
extern void OSGetConsoleType(void);
extern void OSRegisterVersion(void);
extern void OSRestoreInterrupts(void);
extern void __OSMaskInterrupts(void);
extern void __OSUnmaskInterrupts(void);
extern void _restgpr_14(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_14(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_805EBFB0(void);
extern void fn_805F1F10(void);

/* External data declarations */
extern u8 Ecb_807CAF50[];
extern u8 lbl_807646A8[];
extern u8 lbl_807CAE18[];
extern u8 lbl_807CAF40[];

/* Small data declarations */
extern u32 lbl_8087E718;
extern u32 lbl_8087FA40;
extern u32 lbl_8087FAC0;
extern u32 lbl_8087FAE0;
extern u32 lbl_8087FB20;
extern u32 lbl_8087FB40;

/* Function declarations */
void fn_805E6740(void);
void fn_805E6DE0(void);
void fn_805E7480(void);
void fn_805E7520(void);
void SetExiInterruptMask_805E7A90(void);
void EXIImm(void);
void fn_805E7E00(void);
void EXIDma(void);
void EXISync(void);

asm void fn_805E6740(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8087FB40
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_fn_805E6740_000000F0
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_fn_805E6740_00000050
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_00000050:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
    nop
lbl_fn_805E6740_00000060:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_fn_805E6740_00000080
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_fn_805E6740_000000C4
lbl_fn_805E6740_00000080:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_fn_805E6740_000000B0
lbl_fn_805E6740_000000A0:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_fn_805E6740_000000B0:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_fn_805E6740_000000A0
    b lbl_fn_805E6740_000000D0
lbl_fn_805E6740_000000C4:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_fn_805E6740_00000060
lbl_fn_805E6740_000000D0:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_000000F0:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_fn_805E6740_000001A8
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_fn_805E6740_00000130
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_fn_805E6740_0000020C
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_fn_805E6740_0000020C
    mr r5, r9
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_00000130:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r10, 0x6a4(r3)
    stw r11, 0x6a0(r3)
    beq lbl_fn_805E6740_0000015C
    mr r5, r9
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_0000015C:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
    nop
lbl_fn_805E6740_00000170:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_fn_805E6740_00000170
    stw r12, 0x6a4(r3)
lbl_fn_805E6740_0000018C:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_000001A8:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_fn_805E6740_000001D8
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_fn_805E6740_00000294
lbl_fn_805E6740_000001D8:
    li r12, 0x5
    li r6, 0x14
lbl_fn_805E6740_000001E0:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_fn_805E6740_000001E0
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_fn_805E6740_0000018C
lbl_fn_805E6740_0000020C:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    stw r11, 0x6a0(r3)
    add r7, r7, r6
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    lwzu r6, 0x4(r7)
    b lbl_fn_805E6740_0000026C
    nop
lbl_fn_805E6740_00000258:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_fn_805E6740_0000026C:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_fn_805E6740_00000258
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_fn_805E6740_00000294:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_805E6740_00000334
    lwz r10, 0x6a4(r3)
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subfc. r12, r11, r5
    subi r29, r10, 0x1
    bgt lbl_fn_805E6740_000002E0
    add r0, r10, r5
    stw r0, 0x6a4(r3)
    slw r10, r7, r29
    subfic r0, r5, 0x20
    srw r7, r10, r0
    b lbl_fn_805E6740_0000030C
lbl_fn_805E6740_000002E0:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    stw r10, 0x69c(r3)
    add r0, r7, r0
    stw r12, 0x6a4(r3)
    subfic r12, r5, 0x20
    srw r7, r0, r12
lbl_fn_805E6740_0000030C:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_fn_805E6740_00000334
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_fn_805E6740_00000334:
    li r0, 0x60
    dcbz r4, r0
    lis r8, lbl_807646A8@ha
    lha r0, 0x68a(r3)
    addi r8, r8, lbl_807646A8@l
    li r6, 0x1
    li r9, -0x1
    add r0, r0, r7
    sth r0, 0x68a(r3)
    sth r0, 0x0(r4)
    b lbl_fn_805E6740_0000067C
lbl_fn_805E6740_00000360:
    lwz r29, 0x6a4(r3)
    lwz r11, lbl_8087FAE0
    cmpwi r29, 0x1c
    lwz r30, 0x6a0(r3)
    addi r5, r29, 0x4
    addi r31, r11, 0x20
    rlwnm r12, r30, r5, 27, 31
    bgt lbl_fn_805E6740_00000438
    lbzx r5, r11, r12
    lbzx r31, r31, r12
    cmpwi r5, 0xff
    beq lbl_fn_805E6740_0000039C
    add r29, r29, r31
    stw r29, 0x6a4(r3)
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_0000039C:
    addi r7, r11, 0x58
    li r5, 0x5
    addi r29, r29, 0x5
lbl_fn_805E6740_000003A8:
    cmpwi r29, 0x21
    slwi r12, r12, 1
    beq lbl_fn_805E6740_000003C8
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
    addi r29, r29, 0x1
    b lbl_fn_805E6740_0000040C
lbl_fn_805E6740_000003C8:
    lwz r31, 0x69c(r3)
    li r29, 0x1
    lwzu r30, 0x4(r31)
    lwzu r0, 0x4(r7)
    rlwimi r12, r30, 1, 31, 31
    stw r31, 0x69c(r3)
    stw r30, 0x6a0(r3)
    b lbl_fn_805E6740_000003F8
lbl_fn_805E6740_000003E8:
    slwi r12, r12, 1
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
lbl_fn_805E6740_000003F8:
    cmpw r12, r0
    addi r29, r29, 0x1
    addi r5, r5, 0x1
    bgt lbl_fn_805E6740_000003E8
    b lbl_fn_805E6740_00000418
lbl_fn_805E6740_0000040C:
    cmpw r12, r0
    addi r5, r5, 0x1
    bgt lbl_fn_805E6740_000003A8
lbl_fn_805E6740_00000418:
    stw r29, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r11, r0
    lwz r0, 0x40(r11)
    lwz r5, 0x8c(r5)
    add r0, r0, r12
    lbzx r5, r5, r0
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_00000438:
    cmpwi r29, 0x21
    lwz r12, 0x69c(r3)
    beq lbl_fn_805E6740_000004F0
    cmpwi r29, 0x20
    rlwnm r5, r30, r5, 27, 31
    beq lbl_fn_805E6740_00000478
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    add r5, r29, r31
    beq lbl_fn_805E6740_00000554
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_fn_805E6740_00000554
    mr r5, r12
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_00000478:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 4, 28, 31
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    stw r31, 0x6a4(r3)
    stw r30, 0x6a0(r3)
    beq lbl_fn_805E6740_000004A4
    mr r5, r12
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_000004A4:
    slwi r12, r5, 27
    addi r7, r11, 0x58
    rlwimi r12, r30, 31, 1, 31
    li r29, 0x5
    nop
lbl_fn_805E6740_000004B8:
    subfic r30, r29, 0x1f
    lwzu r0, 0x4(r7)
    srw r5, r12, r30
    addi r29, r29, 0x1
    cmpw r5, r0
    bgt lbl_fn_805E6740_000004B8
    stw r29, 0x6a4(r3)
lbl_fn_805E6740_000004D4:
    slwi r0, r29, 2
    lwz r10, 0x40(r11)
    add r7, r11, r0
    lwz r7, 0x8c(r7)
    add r0, r10, r5
    lbzx r5, r7, r0
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_000004F0:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    srwi r5, r30, 27
    lbzx r29, r11, r5
    lbzx r31, r31, r5
    cmpwi r29, 0xff
    stw r30, 0x6a0(r3)
    addi r31, r31, 0x1
    beq lbl_fn_805E6740_00000520
    stw r31, 0x6a4(r3)
    mr r5, r29
    b lbl_fn_805E6740_000005D4
lbl_fn_805E6740_00000520:
    li r29, 0x5
    li r7, 0x14
lbl_fn_805E6740_00000528:
    subfic r12, r29, 0x1f
    addi r7, r7, 0x4
    add r5, r11, r7
    addi r29, r29, 0x1
    lwz r0, 0x44(r5)
    srw r5, r30, r12
    cmpw cr1, r5, r0
    bgt cr1, lbl_fn_805E6740_00000528
    addi r0, r29, 0x1
    stw r0, 0x6a4(r3)
    b lbl_fn_805E6740_000004D4
lbl_fn_805E6740_00000554:
    subfic r0, r29, 0x21
    lwz r12, 0x69c(r3)
    slw r10, r9, r0
    andc r5, r30, r10
    addi r10, r11, 0x44
    subfic r7, r29, 0x21
    lwzu r30, 0x4(r12)
    addi r29, r7, 0x1
    slwi r7, r7, 2
    stw r30, 0x6a0(r3)
    add r10, r10, r7
    slwi r5, r5, 1
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 1, 31, 31
    li r12, 0x2
    lwzu r7, 0x4(r10)
    b lbl_fn_805E6740_000005AC
lbl_fn_805E6740_00000598:
    slwi r5, r5, 1
    lwzu r7, 0x4(r10)
    add r5, r5, r31
    addi r12, r12, 0x1
    addi r29, r29, 0x1
lbl_fn_805E6740_000005AC:
    cmpw r5, r7
    rlwnm r31, r30, r12, 31, 31
    bgt lbl_fn_805E6740_00000598
    stw r12, 0x6a4(r3)
    slwi r0, r29, 2
    add r7, r11, r0
    lwz r0, 0x40(r11)
    lwz r7, 0x8c(r7)
    add r0, r0, r5
    lbzx r5, r7, r0
lbl_fn_805E6740_000005D4:
    clrlwi. r30, r5, 28
    srawi r7, r5, 4
    beq lbl_fn_805E6740_0000066C
    lwz r10, 0x6a4(r3)
    add r6, r6, r7
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r30
    subi r29, r10, 0x1
    bgt lbl_fn_805E6740_00000614
    add r0, r10, r30
    stw r0, 0x6a4(r3)
    slw r10, r7, r29
    subfic r0, r30, 0x20
    srw r7, r10, r0
    b lbl_fn_805E6740_00000640
lbl_fn_805E6740_00000614:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    stw r10, 0x69c(r3)
    add r0, r7, r0
    stw r12, 0x6a4(r3)
    subfic r12, r30, 0x20
    srw r7, r0, r12
lbl_fn_805E6740_00000640:
    cntlzw r5, r7
    subfic r0, r30, 0x20
    cmpw cr1, r5, r0
    ble cr1, lbl_fn_805E6740_0000065C
    slw r0, r9, r30
    add r5, r0, r7
    addi r7, r5, 0x1
lbl_fn_805E6740_0000065C:
    lbzx r0, r8, r6
    slwi r0, r0, 1
    sthx r7, r4, r0
    b lbl_fn_805E6740_00000678
lbl_fn_805E6740_0000066C:
    cmpwi cr1, r7, 0xf
    bne cr1, lbl_fn_805E6740_00000684
    addi r6, r6, 0xf
lbl_fn_805E6740_00000678:
    addi r6, r6, 0x1
lbl_fn_805E6740_0000067C:
    cmpwi cr1, r6, 0x40
    blt cr1, lbl_fn_805E6740_00000360
lbl_fn_805E6740_00000684:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805E6DE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    dcbz r0, r4
    lwz r12, 0x6a4(r3)
    lwz r8, lbl_8087FB20
    cmpwi r12, 0x1c
    lwz r11, 0x6a0(r3)
    addi r5, r12, 0x4
    addi r10, r8, 0x20
    rlwnm r9, r11, r5, 27, 31
    bgt lbl_fn_805E6DE0_00000790
    lbzx r5, r8, r9
    lbzx r10, r10, r9
    cmpwi r5, 0xff
    beq lbl_fn_805E6DE0_000006F0
    add r12, r12, r10
    stw r12, 0x6a4(r3)
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_000006F0:
    addi r6, r8, 0x58
    li r5, 0x5
    addi r12, r12, 0x5
    nop
lbl_fn_805E6DE0_00000700:
    cmpwi r12, 0x21
    slwi r9, r9, 1
    beq lbl_fn_805E6DE0_00000720
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
    addi r12, r12, 0x1
    b lbl_fn_805E6DE0_00000764
lbl_fn_805E6DE0_00000720:
    lwz r10, 0x69c(r3)
    li r12, 0x1
    lwzu r11, 0x4(r10)
    lwzu r0, 0x4(r6)
    rlwimi r9, r11, 1, 31, 31
    stw r10, 0x69c(r3)
    stw r11, 0x6a0(r3)
    b lbl_fn_805E6DE0_00000750
lbl_fn_805E6DE0_00000740:
    slwi r9, r9, 1
    rlwnm r10, r11, r12, 31, 31
    lwzu r0, 0x4(r6)
    or r9, r9, r10
lbl_fn_805E6DE0_00000750:
    cmpw r9, r0
    addi r12, r12, 0x1
    addi r5, r5, 0x1
    bgt lbl_fn_805E6DE0_00000740
    b lbl_fn_805E6DE0_00000770
lbl_fn_805E6DE0_00000764:
    cmpw r9, r0
    addi r5, r5, 0x1
    bgt lbl_fn_805E6DE0_00000700
lbl_fn_805E6DE0_00000770:
    stw r12, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r8, r0
    lwz r0, 0x40(r8)
    lwz r5, 0x8c(r5)
    add r0, r0, r9
    lbzx r5, r5, r0
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_00000790:
    cmpwi r12, 0x21
    lwz r9, 0x69c(r3)
    beq lbl_fn_805E6DE0_00000848
    cmpwi r12, 0x20
    rlwnm r5, r11, r5, 27, 31
    beq lbl_fn_805E6DE0_000007D0
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    add r5, r12, r10
    beq lbl_fn_805E6DE0_000008AC
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_fn_805E6DE0_000008AC
    mr r5, r9
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_000007D0:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 4, 28, 31
    lbzx r9, r8, r5
    lbzx r10, r10, r5
    cmpwi r9, 0xff
    stw r10, 0x6a4(r3)
    stw r11, 0x6a0(r3)
    beq lbl_fn_805E6DE0_000007FC
    mr r5, r9
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_000007FC:
    slwi r9, r5, 27
    addi r6, r8, 0x58
    rlwimi r9, r11, 31, 1, 31
    li r12, 0x5
    nop
lbl_fn_805E6DE0_00000810:
    subfic r11, r12, 0x1f
    lwzu r0, 0x4(r6)
    srw r5, r9, r11
    addi r12, r12, 0x1
    cmpw r5, r0
    bgt lbl_fn_805E6DE0_00000810
    stw r12, 0x6a4(r3)
lbl_fn_805E6DE0_0000082C:
    slwi r0, r12, 2
    lwz r7, 0x40(r8)
    add r6, r8, r0
    lwz r6, 0x8c(r6)
    add r0, r7, r5
    lbzx r5, r6, r0
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_00000848:
    lwzu r11, 0x4(r9)
    stw r9, 0x69c(r3)
    srwi r5, r11, 27
    lbzx r12, r8, r5
    lbzx r10, r10, r5
    cmpwi r12, 0xff
    stw r11, 0x6a0(r3)
    addi r10, r10, 0x1
    beq lbl_fn_805E6DE0_00000878
    stw r10, 0x6a4(r3)
    mr r5, r12
    b lbl_fn_805E6DE0_00000934
lbl_fn_805E6DE0_00000878:
    li r12, 0x5
    li r6, 0x14
lbl_fn_805E6DE0_00000880:
    subfic r9, r12, 0x1f
    addi r6, r6, 0x4
    add r5, r8, r6
    addi r12, r12, 0x1
    lwz r0, 0x44(r5)
    srw r5, r11, r9
    cmpw cr1, r5, r0
    bgt cr1, lbl_fn_805E6DE0_00000880
    addi r0, r12, 0x1
    stw r0, 0x6a4(r3)
    b lbl_fn_805E6DE0_0000082C
lbl_fn_805E6DE0_000008AC:
    subfic r0, r12, 0x21
    li r5, -0x1
    slw r7, r5, r0
    lwz r9, 0x69c(r3)
    andc r5, r11, r7
    addi r7, r8, 0x44
    subfic r6, r12, 0x21
    lwzu r11, 0x4(r9)
    addi r12, r6, 0x1
    slwi r6, r6, 2
    stw r11, 0x6a0(r3)
    add r7, r7, r6
    slwi r5, r5, 1
    stw r9, 0x69c(r3)
    rlwimi r5, r11, 1, 31, 31
    li r9, 0x2
    lwzu r6, 0x4(r7)
    b lbl_fn_805E6DE0_0000090C
    nop
lbl_fn_805E6DE0_000008F8:
    slwi r5, r5, 1
    lwzu r6, 0x4(r7)
    add r5, r5, r10
    addi r9, r9, 0x1
    addi r12, r12, 0x1
lbl_fn_805E6DE0_0000090C:
    cmpw r5, r6
    rlwnm r10, r11, r9, 31, 31
    bgt lbl_fn_805E6DE0_000008F8
    stw r9, 0x6a4(r3)
    slwi r0, r12, 2
    add r6, r8, r0
    lwz r0, 0x40(r8)
    lwz r6, 0x8c(r6)
    add r0, r0, r5
    lbzx r5, r6, r0
lbl_fn_805E6DE0_00000934:
    li r0, 0x20
    dcbz r4, r0
    li r0, 0x40
    li r7, 0x0
    dcbz r4, r0
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_fn_805E6DE0_000009D4
    lwz r10, 0x6a4(r3)
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r5
    subi r29, r10, 0x1
    bgt lbl_fn_805E6DE0_00000980
    add r0, r10, r5
    stw r0, 0x6a4(r3)
    slw r10, r7, r29
    subfic r0, r5, 0x20
    srw r7, r10, r0
    b lbl_fn_805E6DE0_000009AC
lbl_fn_805E6DE0_00000980:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    stw r10, 0x69c(r3)
    add r0, r7, r0
    stw r12, 0x6a4(r3)
    subfic r12, r5, 0x20
    srw r7, r0, r12
lbl_fn_805E6DE0_000009AC:
    extsh r6, r7
    subfic r0, r5, 0x20
    cntlzw r6, r6
    cmpw cr1, r6, r0
    ble cr1, lbl_fn_805E6DE0_000009D4
    li r0, -0x1
    slw r0, r0, r5
    add r5, r7, r0
    addi r0, r5, 0x1
    extsh r7, r0
lbl_fn_805E6DE0_000009D4:
    li r0, 0x60
    dcbz r4, r0
    lis r8, lbl_807646A8@ha
    lha r0, 0x690(r3)
    addi r8, r8, lbl_807646A8@l
    li r6, 0x1
    li r9, -0x1
    add r0, r0, r7
    sth r0, 0x690(r3)
    sth r0, 0x0(r4)
    b lbl_fn_805E6DE0_00000D1C
lbl_fn_805E6DE0_00000A00:
    lwz r29, 0x6a4(r3)
    lwz r11, lbl_8087FAC0
    cmpwi r29, 0x1c
    lwz r30, 0x6a0(r3)
    addi r5, r29, 0x4
    addi r31, r11, 0x20
    rlwnm r12, r30, r5, 27, 31
    bgt lbl_fn_805E6DE0_00000AD8
    lbzx r5, r11, r12
    lbzx r31, r31, r12
    cmpwi r5, 0xff
    beq lbl_fn_805E6DE0_00000A3C
    add r29, r29, r31
    stw r29, 0x6a4(r3)
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000A3C:
    addi r7, r11, 0x58
    li r5, 0x5
    addi r29, r29, 0x5
lbl_fn_805E6DE0_00000A48:
    cmpwi r29, 0x21
    slwi r12, r12, 1
    beq lbl_fn_805E6DE0_00000A68
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
    addi r29, r29, 0x1
    b lbl_fn_805E6DE0_00000AAC
lbl_fn_805E6DE0_00000A68:
    lwz r31, 0x69c(r3)
    li r29, 0x1
    lwzu r30, 0x4(r31)
    lwzu r0, 0x4(r7)
    rlwimi r12, r30, 1, 31, 31
    stw r31, 0x69c(r3)
    stw r30, 0x6a0(r3)
    b lbl_fn_805E6DE0_00000A98
lbl_fn_805E6DE0_00000A88:
    slwi r12, r12, 1
    rlwnm r31, r30, r29, 31, 31
    lwzu r0, 0x4(r7)
    or r12, r12, r31
lbl_fn_805E6DE0_00000A98:
    cmpw r12, r0
    addi r29, r29, 0x1
    addi r5, r5, 0x1
    bgt lbl_fn_805E6DE0_00000A88
    b lbl_fn_805E6DE0_00000AB8
lbl_fn_805E6DE0_00000AAC:
    cmpw r12, r0
    addi r5, r5, 0x1
    bgt lbl_fn_805E6DE0_00000A48
lbl_fn_805E6DE0_00000AB8:
    stw r29, 0x6a4(r3)
    slwi r0, r5, 2
    add r5, r11, r0
    lwz r0, 0x40(r11)
    lwz r5, 0x8c(r5)
    add r0, r0, r12
    lbzx r5, r5, r0
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000AD8:
    cmpwi r29, 0x21
    lwz r12, 0x69c(r3)
    beq lbl_fn_805E6DE0_00000B90
    cmpwi r29, 0x20
    rlwnm r5, r30, r5, 27, 31
    beq lbl_fn_805E6DE0_00000B18
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    add r5, r29, r31
    beq lbl_fn_805E6DE0_00000BF4
    cmpwi r5, 0x21
    stw r5, 0x6a4(r3)
    bgt lbl_fn_805E6DE0_00000BF4
    mr r5, r12
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000B18:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 4, 28, 31
    lbzx r12, r11, r5
    lbzx r31, r31, r5
    cmpwi r12, 0xff
    stw r31, 0x6a4(r3)
    stw r30, 0x6a0(r3)
    beq lbl_fn_805E6DE0_00000B44
    mr r5, r12
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000B44:
    slwi r12, r5, 27
    addi r7, r11, 0x58
    rlwimi r12, r30, 31, 1, 31
    li r29, 0x5
    nop
lbl_fn_805E6DE0_00000B58:
    subfic r30, r29, 0x1f
    lwzu r0, 0x4(r7)
    srw r5, r12, r30
    addi r29, r29, 0x1
    cmpw r5, r0
    bgt lbl_fn_805E6DE0_00000B58
    stw r29, 0x6a4(r3)
lbl_fn_805E6DE0_00000B74:
    slwi r0, r29, 2
    lwz r10, 0x40(r11)
    add r7, r11, r0
    lwz r7, 0x8c(r7)
    add r0, r10, r5
    lbzx r5, r7, r0
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000B90:
    lwzu r30, 0x4(r12)
    stw r12, 0x69c(r3)
    srwi r5, r30, 27
    lbzx r29, r11, r5
    lbzx r31, r31, r5
    cmpwi r29, 0xff
    stw r30, 0x6a0(r3)
    addi r31, r31, 0x1
    beq lbl_fn_805E6DE0_00000BC0
    stw r31, 0x6a4(r3)
    mr r5, r29
    b lbl_fn_805E6DE0_00000C74
lbl_fn_805E6DE0_00000BC0:
    li r29, 0x5
    li r7, 0x14
lbl_fn_805E6DE0_00000BC8:
    subfic r12, r29, 0x1f
    addi r7, r7, 0x4
    add r5, r11, r7
    addi r29, r29, 0x1
    lwz r0, 0x44(r5)
    srw r5, r30, r12
    cmpw cr1, r5, r0
    bgt cr1, lbl_fn_805E6DE0_00000BC8
    addi r0, r29, 0x1
    stw r0, 0x6a4(r3)
    b lbl_fn_805E6DE0_00000B74
lbl_fn_805E6DE0_00000BF4:
    subfic r0, r29, 0x21
    lwz r12, 0x69c(r3)
    slw r10, r9, r0
    andc r5, r30, r10
    addi r10, r11, 0x44
    subfic r7, r29, 0x21
    lwzu r30, 0x4(r12)
    addi r29, r7, 0x1
    slwi r7, r7, 2
    stw r30, 0x6a0(r3)
    add r10, r10, r7
    slwi r5, r5, 1
    stw r12, 0x69c(r3)
    rlwimi r5, r30, 1, 31, 31
    li r12, 0x2
    lwzu r7, 0x4(r10)
    b lbl_fn_805E6DE0_00000C4C
lbl_fn_805E6DE0_00000C38:
    slwi r5, r5, 1
    lwzu r7, 0x4(r10)
    add r5, r5, r31
    addi r12, r12, 0x1
    addi r29, r29, 0x1
lbl_fn_805E6DE0_00000C4C:
    cmpw r5, r7
    rlwnm r31, r30, r12, 31, 31
    bgt lbl_fn_805E6DE0_00000C38
    stw r12, 0x6a4(r3)
    slwi r0, r29, 2
    add r7, r11, r0
    lwz r0, 0x40(r11)
    lwz r7, 0x8c(r7)
    add r0, r0, r5
    lbzx r5, r7, r0
lbl_fn_805E6DE0_00000C74:
    clrlwi. r30, r5, 28
    srawi r7, r5, 4
    beq lbl_fn_805E6DE0_00000D0C
    lwz r10, 0x6a4(r3)
    add r6, r6, r7
    subfic r11, r10, 0x21
    lwz r7, 0x6a0(r3)
    subf. r12, r11, r30
    subi r29, r10, 0x1
    bgt lbl_fn_805E6DE0_00000CB4
    add r0, r10, r30
    stw r0, 0x6a4(r3)
    slw r10, r7, r29
    subfic r0, r30, 0x20
    srw r7, r10, r0
    b lbl_fn_805E6DE0_00000CE0
lbl_fn_805E6DE0_00000CB4:
    slw r0, r7, r29
    lwz r10, 0x69c(r3)
    lwzu r7, 0x4(r10)
    addi r12, r12, 0x1
    stw r7, 0x6a0(r3)
    srw r7, r7, r11
    stw r10, 0x69c(r3)
    add r0, r7, r0
    stw r12, 0x6a4(r3)
    subfic r12, r30, 0x20
    srw r7, r0, r12
lbl_fn_805E6DE0_00000CE0:
    cntlzw r5, r7
    subfic r0, r30, 0x20
    cmpw cr1, r5, r0
    ble cr1, lbl_fn_805E6DE0_00000CFC
    slw r0, r9, r30
    add r5, r0, r7
    addi r7, r5, 0x1
lbl_fn_805E6DE0_00000CFC:
    lbzx r0, r8, r6
    slwi r0, r0, 1
    sthx r7, r4, r0
    b lbl_fn_805E6DE0_00000D18
lbl_fn_805E6DE0_00000D0C:
    cmpwi cr1, r7, 0xf
    bne cr1, lbl_fn_805E6DE0_00000D24
    addi r6, r6, 0xf
lbl_fn_805E6DE0_00000D18:
    addi r6, r6, 0x1
lbl_fn_805E6DE0_00000D1C:
    cmpwi cr1, r6, 0x40
    blt cr1, lbl_fn_805E6DE0_00000A00
lbl_fn_805E6DE0_00000D24:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_805E7480(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087E718
    bl OSRegisterVersion
    lis r10, lbl_807CAE18@ha
    lis r6, lbl_807CAF40@ha
    lis r11, 0xe000
    li r3, 0x4
    addi r8, r10, lbl_807CAE18@l
    addi r4, r6, lbl_807CAF40@l
    addi r9, r11, 0x2000
    addi r7, r11, 0x2800
    addi r5, r11, 0x2a00
    addi r0, r11, 0x3480
    oris r3, r3, 0x4
    stw r11, lbl_807CAE18@l(r10)
    stw r9, 0x4(r8)
    stw r7, 0x8(r8)
    stw r11, lbl_807CAF40@l(r6)
    stw r5, 0x4(r4)
    stw r0, 0x8(r4)
    mtspr GQR2, r3
    li r3, 0x5
    oris r3, r3, 0x5
    mtspr GQR3, r3
    li r3, 0x6
    oris r3, r3, 0x6
    mtspr GQR4, r3
    li r3, 0x7
    oris r3, r3, 0x7
    mtspr GQR5, r3
    li r0, 0x1
    stw r0, lbl_8087FA40
    li r3, 0x1
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805E7520(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_14
    cmpwi r3, 0x0
    beq lbl_fn_805E7520_00000E04
    cmpwi r4, 0x0
    bne lbl_fn_805E7520_00000E0C
lbl_fn_805E7520_00000E04:
    li r3, 0x0
    b lbl_fn_805E7520_00001330
lbl_fn_805E7520_00000E0C:
    clrlwi. r0, r5, 31
    lwz r7, 0x0(r4)
    addi r6, r4, 0x50
    add r8, r6, r7
    beq lbl_fn_805E7520_00000E38
    lwz r0, 0x4(r4)
    mr r19, r3
    li r9, 0x1
    slwi r0, r0, 1
    add r20, r3, r0
    b lbl_fn_805E7520_00000E44
lbl_fn_805E7520_00000E38:
    mr r19, r3
    addi r20, r3, 0x2
    li r9, 0x2
lbl_fn_805E7520_00000E44:
    rlwinm. r0, r5, 0, 30, 30
    li r17, 0x0
    beq lbl_fn_805E7520_00000E54
    li r17, 0x1
lbl_fn_805E7520_00000E54:
    cmpwi r7, 0x0
    bne lbl_fn_805E7520_0000103C
    lbz r0, 0x0(r6)
    li r23, 0x0
    lha r21, 0x48(r4)
    slwi r18, r9, 1
    addi r12, r6, 0x1
    lha r22, 0x4a(r4)
    extrwi r15, r0, 3, 25
    clrlwi r16, r0, 28
    xoris r8, r23, 0x8000
    li r14, 0x2
    li r11, 0x400
    li r10, 0x0
    li r9, 0x7fff
    li r7, -0x8000
    li r6, -0x1
    li r5, 0x5a82
    li r0, 0x4000
    b lbl_fn_805E7520_0000102C
    nop
lbl_fn_805E7520_00000EA8:
    clrlwi. r3, r14, 28
    bne lbl_fn_805E7520_00000EC4
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    addi r14, r14, 0x2
    extrwi r15, r3, 3, 25
    clrlwi r16, r3, 28
lbl_fn_805E7520_00000EC4:
    clrlwi. r3, r14, 31
    beq lbl_fn_805E7520_00000EE0
    lbz r3, 0x0(r12)
    addi r12, r12, 0x1
    slwi r3, r3, 28
    srawi r25, r3, 28
    b lbl_fn_805E7520_00000EEC
lbl_fn_805E7520_00000EE0:
    lbz r3, 0x0(r12)
    extlwi r3, r3, 4, 24
    srawi r25, r3, 28
lbl_fn_805E7520_00000EEC:
    clrlslwi r24, r15, 24, 2
    clrlwi r3, r16, 24
    add r24, r4, r24
    extsh r26, r22
    lha r22, 0xa(r24)
    slw r3, r25, r3
    lha r24, 0x8(r24)
    extsh r25, r21
    mullw r26, r26, r22
    slwi r22, r3, 11
    addi r14, r14, 0x1
    mullw r25, r25, r24
    srawi r3, r26, 31
    srawi r24, r25, 31
    addc r25, r26, r25
    adde r24, r3, r24
    srawi r3, r22, 31
    addc r22, r25, r22
    adde r3, r24, r3
    addc r22, r22, r11
    adde r3, r3, r10
    rotrwi r24, r22, 11
    rlwimi r24, r3, 21, 0, 10
    srawi r3, r3, 11
    xoris r25, r3, 0x8000
    subfc r22, r24, r9
    subfe r25, r25, r8
    subfe r25, r8, r8
    neg. r25, r25
    beq lbl_fn_805E7520_00000F70
    li r24, 0x7fff
    li r3, 0x0
    b lbl_fn_805E7520_00000F94
lbl_fn_805E7520_00000F70:
    xoris r22, r3, 0x8000
    xoris r26, r6, 0x8000
    subfc r25, r7, r24
    subfe r26, r26, r22
    subfe r26, r22, r22
    neg. r26, r26
    beq lbl_fn_805E7520_00000F94
    li r24, -0x8000
    li r3, -0x1
lbl_fn_805E7520_00000F94:
    cmpwi r17, 0x0
    mr r22, r21
    mr r21, r24
    beq lbl_fn_805E7520_00001018
    slwi r26, r24, 1
    slwi r25, r3, 1
    rlwimi r25, r24, 1, 31, 31
    xoris r3, r10, 0x8000
    mulhwu r24, r26, r5
    mullw r25, r25, r5
    mulli r26, r26, 0x5a82
    add r25, r24, r25
    addc r24, r26, r0
    adde r25, r25, r10
    rotrwi r24, r24, 15
    srawi r27, r25, 15
    rlwimi r24, r25, 17, 0, 14
    xoris r26, r27, 0x8000
    subfc r25, r24, r9
    subfe r26, r26, r3
    subfe r26, r3, r3
    neg. r26, r26
    beq lbl_fn_805E7520_00000FF8
    li r24, 0x7fff
    b lbl_fn_805E7520_00001018
lbl_fn_805E7520_00000FF8:
    xoris r3, r27, 0x8000
    xoris r26, r6, 0x8000
    subfc r25, r7, r24
    subfe r26, r26, r3
    subfe r26, r3, r3
    neg. r26, r26
    beq lbl_fn_805E7520_00001018
    li r24, -0x8000
lbl_fn_805E7520_00001018:
    sth r24, 0x0(r20)
    add r20, r20, r18
    addi r23, r23, 0x1
    sth r24, 0x0(r19)
    add r19, r19, r18
lbl_fn_805E7520_0000102C:
    lwz r3, 0x4(r4)
    cmplw r23, r3
    blt lbl_fn_805E7520_00000EA8
    b lbl_fn_805E7520_00001330
lbl_fn_805E7520_0000103C:
    lbz r0, 0x0(r6)
    slwi r31, r9, 1
    lbz r3, 0x0(r8)
    addi r9, r8, 0x1
    li r27, 0x0
    lha r29, 0x48(r4)
    addi r24, r6, 0x1
    lha r28, 0x4a(r4)
    extrwi r22, r0, 3, 25
    clrlwi r21, r0, 28
    lha r18, 0x4c(r4)
    extrwi r11, r3, 3, 25
    lha r0, 0x4e(r4)
    clrlwi r12, r3, 28
    xoris r6, r27, 0x8000
    li r23, 0x2
    li r10, 0x2
    li r8, 0x0
    li r7, 0x7fff
    li r5, -0x8000
    li r14, -0x1
    b lbl_fn_805E7520_00001324
    nop
lbl_fn_805E7520_00001098:
    clrlwi. r3, r23, 28
    bne lbl_fn_805E7520_000010B4
    lbz r3, 0x0(r24)
    addi r24, r24, 0x1
    addi r23, r23, 0x2
    extrwi r22, r3, 3, 25
    clrlwi r21, r3, 28
lbl_fn_805E7520_000010B4:
    clrlwi. r3, r23, 31
    beq lbl_fn_805E7520_000010D0
    lbz r3, 0x0(r24)
    addi r24, r24, 0x1
    slwi r3, r3, 28
    srawi r15, r3, 28
    b lbl_fn_805E7520_000010DC
lbl_fn_805E7520_000010D0:
    lbz r3, 0x0(r24)
    extlwi r3, r3, 4, 24
    srawi r15, r3, 28
lbl_fn_805E7520_000010DC:
    clrlslwi r3, r22, 24, 2
    clrlwi r16, r21, 24
    add r3, r4, r3
    extsh r26, r28
    lha r25, 0xa(r3)
    slw r15, r15, r16
    lha r3, 0x8(r3)
    extsh r16, r29
    mullw r25, r26, r25
    slwi r15, r15, 11
    addi r23, r23, 0x1
    mullw r16, r16, r3
    srawi r26, r25, 31
    srawi r3, r16, 31
    addc r25, r25, r16
    adde r16, r26, r3
    srawi r3, r15, 31
    addc r15, r25, r15
    adde r16, r16, r3
    li r3, 0x400
    addc r15, r15, r3
    adde r3, r16, r8
    rotrwi r25, r15, 11
    srawi r26, r3, 11
    rlwimi r25, r3, 21, 0, 10
    xoris r15, r26, 0x8000
    subfc r3, r25, r7
    subfe r15, r15, r6
    subfe r15, r6, r6
    neg. r15, r15
    beq lbl_fn_805E7520_00001164
    li r25, 0x7fff
    li r26, 0x0
    b lbl_fn_805E7520_00001188
lbl_fn_805E7520_00001164:
    xoris r3, r26, 0x8000
    xoris r16, r14, 0x8000
    subfc r15, r5, r25
    subfe r16, r16, r3
    subfe r16, r3, r3
    neg. r16, r16
    beq lbl_fn_805E7520_00001188
    li r25, -0x8000
    li r26, -0x1
lbl_fn_805E7520_00001188:
    clrlwi. r3, r10, 28
    mr r28, r29
    mr r29, r25
    bne lbl_fn_805E7520_000011AC
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    addi r10, r10, 0x2
    extrwi r11, r3, 3, 25
    clrlwi r12, r3, 28
lbl_fn_805E7520_000011AC:
    clrlwi. r3, r10, 31
    beq lbl_fn_805E7520_000011C8
    lbz r3, 0x0(r9)
    addi r9, r9, 0x1
    slwi r3, r3, 28
    srawi r15, r3, 28
    b lbl_fn_805E7520_000011D4
lbl_fn_805E7520_000011C8:
    lbz r3, 0x0(r9)
    extlwi r3, r3, 4, 24
    srawi r15, r3, 28
lbl_fn_805E7520_000011D4:
    clrlslwi r3, r11, 24, 2
    clrlwi r16, r12, 24
    add r30, r4, r3
    addi r10, r10, 0x1
    extsh r3, r0
    lha r0, 0x2a(r30)
    lha r30, 0x28(r30)
    slw r16, r15, r16
    extsh r15, r18
    mullw r0, r3, r0
    slwi r16, r16, 11
    mullw r30, r15, r30
    srawi r3, r0, 31
    srawi r15, r30, 31
    addc r0, r0, r30
    adde r3, r3, r15
    srawi r15, r16, 31
    addc r0, r0, r16
    adde r15, r3, r15
    li r3, 0x400
    addc r3, r0, r3
    adde r0, r15, r8
    rotrwi r15, r3, 11
    srawi r3, r0, 11
    rlwimi r15, r0, 21, 0, 10
    xoris r16, r3, 0x8000
    subfc r0, r15, r7
    subfe r16, r16, r6
    subfe r16, r6, r6
    neg. r16, r16
    beq lbl_fn_805E7520_0000125C
    li r15, 0x7fff
    li r3, 0x0
    b lbl_fn_805E7520_00001280
lbl_fn_805E7520_0000125C:
    xoris r0, r3, 0x8000
    xoris r16, r14, 0x8000
    subfc r30, r5, r15
    subfe r16, r16, r0
    subfe r16, r0, r0
    neg. r16, r16
    beq lbl_fn_805E7520_00001280
    li r15, -0x8000
    li r3, -0x1
lbl_fn_805E7520_00001280:
    cmpwi r17, 0x0
    mr r0, r18
    mr r18, r15
    beq lbl_fn_805E7520_00001310
    addc r15, r25, r15
    xoris r16, r8, 0x8000
    adde r25, r26, r3
    li r3, 0x5a82
    mulhwu r3, r15, r3
    li r26, 0x5a82
    mullw r25, r25, r26
    add r25, r3, r25
    li r3, 0x4000
    mulli r15, r15, 0x5a82
    addc r15, r15, r3
    adde r3, r25, r8
    rotrwi r25, r15, 15
    srawi r26, r3, 15
    rlwimi r25, r3, 17, 0, 14
    xoris r15, r26, 0x8000
    subfc r3, r25, r7
    subfe r15, r15, r16
    subfe r15, r16, r16
    neg. r15, r15
    beq lbl_fn_805E7520_000012EC
    li r25, 0x7fff
    b lbl_fn_805E7520_0000130C
lbl_fn_805E7520_000012EC:
    xoris r3, r26, 0x8000
    xoris r16, r14, 0x8000
    subfc r15, r5, r25
    subfe r16, r16, r3
    subfe r16, r3, r3
    neg. r16, r16
    beq lbl_fn_805E7520_0000130C
    li r25, -0x8000
lbl_fn_805E7520_0000130C:
    mr r15, r25
lbl_fn_805E7520_00001310:
    sth r25, 0x0(r20)
    add r20, r20, r31
    addi r27, r27, 0x1
    sth r15, 0x0(r19)
    add r19, r19, r31
lbl_fn_805E7520_00001324:
    lwz r3, 0x4(r4)
    cmplw r27, r3
    blt lbl_fn_805E7520_00001098
lbl_fn_805E7520_00001330:
    addi r11, r1, 0x50
    bl _restgpr_14
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void SetExiInterruptMask_805E7A90(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lis r5, Ecb_807CAF50@ha
    addi r5, r5, Ecb_807CAF50@l
    cmpwi r3, 0x0
    beq lbl_SetExiInterruptMask_805E7A90_00001388
    cmpwi r3, 0x1
    beq lbl_SetExiInterruptMask_805E7A90_000013C4
    cmpwi r3, 0x2
    beq lbl_SetExiInterruptMask_805E7A90_000013F4
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_00001388:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bne lbl_SetExiInterruptMask_805E7A90_000013A0
    lwz r0, 0x80(r5)
    cmpwi r0, 0x0
    beq lbl_SetExiInterruptMask_805E7A90_000013AC
lbl_SetExiInterruptMask_805E7A90_000013A0:
    lwz r0, 0xc(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_SetExiInterruptMask_805E7A90_000013B8
lbl_SetExiInterruptMask_805E7A90_000013AC:
    lis r3, 0x41
    bl __OSMaskInterrupts
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_000013B8:
    lis r3, 0x41
    bl __OSUnmaskInterrupts
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_000013C4:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_SetExiInterruptMask_805E7A90_000013DC
    lwz r0, 0xc(r4)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_SetExiInterruptMask_805E7A90_000013E8
lbl_SetExiInterruptMask_805E7A90_000013DC:
    lis r3, 0x8
    bl __OSMaskInterrupts
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_000013E8:
    lis r3, 0x8
    bl __OSUnmaskInterrupts
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_000013F4:
    li r3, 0x19
    bl fn_805F1F10
    cmpwi r3, 0x0
    beq lbl_SetExiInterruptMask_805E7A90_00001410
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_SetExiInterruptMask_805E7A90_0000141C
lbl_SetExiInterruptMask_805E7A90_00001410:
    li r3, 0x40
    bl __OSMaskInterrupts
    b lbl_SetExiInterruptMask_805E7A90_00001424
lbl_SetExiInterruptMask_805E7A90_0000141C:
    li r3, 0x40
    bl __OSUnmaskInterrupts
lbl_SetExiInterruptMask_805E7A90_00001424:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void EXIImm(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    bne lbl_EXIImm_00001498
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_EXIImm_000014A8
lbl_EXIImm_00001498:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXIImm_000016A4
lbl_EXIImm_000014A8:
    stw r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_EXIImm_000014E4
    mulli r3, r26, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lis r3, 0x20
    slwi r0, r26, 2
    subf r0, r26, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
lbl_EXIImm_000014E4:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x2
    stw r0, 0xc(r31)
    cmpwi r29, 0x0
    beq lbl_EXIImm_00001658
    li r0, 0x0
    li r4, 0x0
    cmpwi cr1, r28, 0x0
    ble cr1, lbl_EXIImm_00001648
    subi r6, r28, 0x8
    cmpwi r28, 0x8
    ble lbl_EXIImm_00001614
    li r5, 0x0
    blt cr1, lbl_EXIImm_00001530
    lis r3, 0x8000
    subi r3, r3, 0x2
    cmpw r28, r3
    bgt lbl_EXIImm_00001530
    li r5, 0x1
lbl_EXIImm_00001530:
    cmpwi r5, 0x0
    beq lbl_EXIImm_00001614
    mr r3, r27
    addi r5, r6, 0x7
    srwi r5, r5, 3
    mtctr r5
    cmpwi r6, 0x0
    ble lbl_EXIImm_00001614
lbl_EXIImm_00001550:
    lbz r6, 0x0(r3)
    subfic r5, r4, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x1(r3)
    addi r5, r4, 0x1
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x2(r3)
    addi r5, r4, 0x2
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x3(r3)
    neg r5, r4
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x4(r3)
    addi r5, r4, 0x4
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x5(r3)
    addi r5, r4, 0x5
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x6(r3)
    addi r5, r4, 0x6
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    lbz r6, 0x7(r3)
    addi r5, r4, 0x7
    subfic r5, r5, 0x3
    slwi r5, r5, 3
    slw r5, r6, r5
    or r0, r0, r5
    addi r3, r3, 0x8
    addi r4, r4, 0x8
    bdnz lbl_EXIImm_00001550
lbl_EXIImm_00001614:
    add r6, r27, r4
    subf r3, r4, r28
    mtctr r3
    cmpw r4, r28
    bge lbl_EXIImm_00001648
lbl_EXIImm_00001628:
    lbz r5, 0x0(r6)
    subfic r3, r4, 0x3
    slwi r3, r3, 3
    slw r3, r5, r3
    or r0, r0, r3
    addi r6, r6, 0x1
    addi r4, r4, 0x1
    bdnz lbl_EXIImm_00001628
lbl_EXIImm_00001648:
    lis r4, 0xcd00
    mulli r3, r26, 0x14
    add r3, r4, r3
    stw r0, 0x6810(r3)
lbl_EXIImm_00001658:
    stw r27, 0x14(r31)
    subi r3, r29, 0x1
    subfic r0, r29, 0x1
    or r0, r3, r0
    srawi r0, r0, 31
    and r0, r28, r0
    stw r0, 0x10(r31)
    slwi r0, r29, 2
    ori r3, r0, 0x1
    subi r0, r28, 0x1
    slwi r0, r0, 4
    or r4, r3, r0
    lis r3, 0xcd00
    mulli r0, r26, 0x14
    add r3, r3, r0
    stw r4, 0x680c(r3)
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_EXIImm_000016A4:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_805E7E00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    b lbl_fn_805E7E00_00001740
lbl_fn_805E7E00_000016E8:
    cmpwi r29, 0x4
    li r31, 0x4
    bge lbl_fn_805E7E00_000016F8
    mr r31, r29
lbl_fn_805E7E00_000016F8:
    mr r3, r27
    mr r4, r28
    mr r5, r31
    mr r6, r30
    li r7, 0x0
    bl EXIImm
    cmpwi r3, 0x0
    bne lbl_fn_805E7E00_00001720
    li r3, 0x0
    b lbl_fn_805E7E00_0000174C
lbl_fn_805E7E00_00001720:
    mr r3, r27
    bl EXISync
    cmpwi r3, 0x0
    bne lbl_fn_805E7E00_00001738
    li r3, 0x0
    b lbl_fn_805E7E00_0000174C
lbl_fn_805E7E00_00001738:
    add r28, r28, r31
    subf r29, r31, r29
lbl_fn_805E7E00_00001740:
    cmpwi r29, 0x0
    bne lbl_fn_805E7E00_000016E8
    li r3, 0x1
lbl_fn_805E7E00_0000174C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void EXIDma(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r25, r7
    slwi r0, r3, 6
    lis r3, Ecb_807CAF50@ha
    addi r3, r3, Ecb_807CAF50@l
    add r31, r3, r0
    bl OSDisableInterrupts
    mr r30, r3
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    bne lbl_EXIDma_000017C8
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_EXIDma_000017D8
lbl_EXIDma_000017C8:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_EXIDma_00001850
lbl_EXIDma_000017D8:
    stw r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_EXIDma_00001814
    mulli r3, r26, 0x14
    lis r0, 0xcd00
    add r3, r0, r3
    lwz r0, 0x6800(r3)
    andi. r0, r0, 0x7f5
    ori r0, r0, 0x8
    stw r0, 0x6800(r3)
    lis r3, 0x20
    slwi r0, r26, 2
    subf r0, r26, r0
    srw r3, r3, r0
    bl __OSUnmaskInterrupts
lbl_EXIDma_00001814:
    lwz r0, 0xc(r31)
    ori r0, r0, 0x1
    stw r0, 0xc(r31)
    mulli r3, r26, 0x14
    clrrwi r4, r27, 5
    lis r0, 0xcd00
    add r3, r0, r3
    stw r4, 0x6804(r3)
    stw r28, 0x6808(r3)
    slwi r0, r29, 2
    ori r0, r0, 0x3
    stw r0, 0x680c(r3)
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_EXIDma_00001850:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void EXISync(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    slwi r0, r3, 6
    lis r4, Ecb_807CAF50@ha
    addi r4, r4, Ecb_807CAF50@l
    add r31, r4, r0
    li r29, 0x0
    mulli r30, r3, 0x14
    lis r0, 0xcd00
    add r3, r0, r30
    b lbl_EXISync_00001ABC
lbl_EXISync_000018B0:
    lwz r0, 0x680c(r3)
    clrlwi. r0, r0, 31
    bne lbl_EXISync_00001ABC
    bl OSDisableInterrupts
    mr r28, r3
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    beq lbl_EXISync_00001AB0
    lwz r0, 0xc(r31)
    clrlwi. r0, r0, 30
    beq lbl_EXISync_00001A2C
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_EXISync_00001A20
    lwz r5, 0x10(r31)
    cmpwi cr1, r5, 0x0
    beq cr1, lbl_EXISync_00001A20
    lwz r4, 0x14(r31)
    lis r0, 0xcd00
    add r3, r0, r30
    lwz r0, 0x6810(r3)
    li r3, 0x0
    ble cr1, lbl_EXISync_00001A20
    subi r7, r5, 0x8
    cmpwi r5, 0x8
    ble lbl_EXISync_000019F4
    li r8, 0x0
    blt cr1, lbl_EXISync_00001934
    lis r6, 0x8000
    subi r6, r6, 0x2
    cmpw r5, r6
    bgt lbl_EXISync_00001934
    li r8, 0x1
lbl_EXISync_00001934:
    cmpwi r8, 0x0
    beq lbl_EXISync_000019F4
    addi r6, r7, 0x7
    srwi r6, r6, 3
    mtctr r6
    cmpwi r7, 0x0
    ble lbl_EXISync_000019F4
lbl_EXISync_00001950:
    subfic r6, r3, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x0(r4)
    addi r6, r3, 0x1
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x1(r4)
    addi r6, r3, 0x2
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x2(r4)
    neg r6, r3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x3(r4)
    addi r6, r3, 0x4
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x4(r4)
    addi r6, r3, 0x5
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x5(r4)
    addi r6, r3, 0x6
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x6(r4)
    addi r6, r3, 0x7
    subfic r6, r6, 0x3
    slwi r6, r6, 3
    srw r6, r0, r6
    stb r6, 0x7(r4)
    addi r4, r4, 0x8
    addi r3, r3, 0x8
    bdnz lbl_EXISync_00001950
lbl_EXISync_000019F4:
    subf r6, r3, r5
    mtctr r6
    cmpw r3, r5
    bge lbl_EXISync_00001A20
lbl_EXISync_00001A04:
    subfic r5, r3, 0x3
    slwi r5, r5, 3
    srw r5, r0, r5
    stb r5, 0x0(r4)
    addi r4, r4, 0x1
    addi r3, r3, 0x1
    bdnz lbl_EXISync_00001A04
lbl_EXISync_00001A20:
    lwz r0, 0xc(r31)
    clrrwi r0, r0, 2
    stw r0, 0xc(r31)
lbl_EXISync_00001A2C:
    bl fn_805EBFB0
    cmplwi r3, 0xff
    bne lbl_EXISync_00001AAC
    bl OSGetConsoleType
    clrrwi r3, r3, 28
    subis r0, r3, 0x2000
    cmplwi r0, 0x0
    beq lbl_EXISync_00001AAC
    lwz r0, 0x10(r31)
    cmpwi r0, 0x4
    bne lbl_EXISync_00001AAC
    lis r0, 0xcd00
    add r4, r0, r30
    lwz r0, 0x6800(r4)
    rlwinm. r0, r0, 0, 25, 27
    bne lbl_EXISync_00001AAC
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x101
    cmplwi r0, 0x0
    beq lbl_EXISync_00001A9C
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x507
    cmplwi r0, 0x0
    beq lbl_EXISync_00001A9C
    lwz r3, 0x6810(r4)
    subis r0, r3, 0x422
    cmplwi r0, 0x1
    bne lbl_EXISync_00001AAC
lbl_EXISync_00001A9C:
    lis r3, 0x8000
    lhz r0, 0x30e6(r3)
    cmplwi r0, 0x8200
    bne lbl_EXISync_00001AB0
lbl_EXISync_00001AAC:
    li r29, 0x1
lbl_EXISync_00001AB0:
    mr r3, r28
    bl OSRestoreInterrupts
    b lbl_EXISync_00001AC8
lbl_EXISync_00001ABC:
    lwz r0, 0xc(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_EXISync_000018B0
lbl_EXISync_00001AC8:
    mr r3, r29
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
