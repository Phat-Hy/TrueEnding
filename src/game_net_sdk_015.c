#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_19(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_806809C0(void);
extern void fn_806A4260(void);
extern void fn_806A475C(void);
extern void fn_806A6CA0(void);
extern void fn_806A7130(void);
extern void fn_806A7400(void);
extern void fn_806A76B0(void);
extern void fn_806A9CA0(void);
extern void fn_806AB920(void);
extern void fn_806AB980(void);
extern void fn_806ABB70(void);
extern void fn_806ACCF0(void);
extern void fn_806ACE00(void);
extern void fn_806B0E30(void);
extern void fn_806B0F80(void);
extern void fn_806B1230(void);
extern void fn_806B12F0(void);
extern void fn_806B1680(void);
extern void fn_806B1A00(void);
extern void fn_806C10C0(void);
extern void fn_806C3ED0(void);
extern void fn_806C5EB0(void);
extern void fn_806CA020(void);
extern void fn_806CA040(void);
extern void fn_806CE750(void);
extern void fn_806DB310(void);
extern void fn_806DB690(void);
extern void fn_806EAC30(void);
extern void fn_806EACC0(void);
extern void fn_806EAD00(void);
extern void fn_806EEDC0(void);
extern void fn_806FBDB0(void);
extern void fn_806FC5D0(void);
extern void fn_806FC900(void);
extern void fn_806FFA10(void);
extern void fn_806FFBD0(void);
extern void fn_806FFCA0(void);
extern void fn_806FFD10(void);
extern void fn_806FFE10(void);
extern void fn_806FFF50(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807BE9D0[];
extern u8 lbl_807BEAE8[];
extern u8 lbl_807BF6BC[];
extern u8 lbl_807C16F0[];
extern u8 lbl_80860140[];
extern u8 lbl_80860158[];
extern u8 lbl_80860890[];
extern u8 lbl_80860898[];

/* Small data declarations */

/* Function declarations */
void pad_03_806BAC78_text(void);
void fn_806BAC80(void);
void fn_806BAE10(void);
void fn_806BB3F0(void);
void fn_806BB440(void);
void fn_806BB5E0(void);
void fn_806BB6A0(void);
void fn_806BB6C0(void);
void fn_806BBBA0(void);
void fn_806BBCA0(void);
void fn_806BC010(void);
void fn_806BC4C0(void);
void fn_806BC860(void);

asm void pad_03_806BAC78_text(void)
{
    nofralloc
    opword 0x00000000
    opword 0x00000000
}

asm void fn_806BAC80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r8, 0x0(r3)
    stw r0, 0x24(r1)
    lwz r9, 0x4(r3)
    rlwinm r7, r8, 24, 8, 15
    stw r31, 0x1c(r1)
    extlwi r6, r8, 8, 8
    lwz r10, 0x8(r3)
    rlwinm r5, r9, 24, 8, 15
    stw r30, 0x18(r1)
    extlwi r4, r9, 8, 8
    lis r31, lbl_807BE9D0@ha
    rlwinm r3, r10, 24, 8, 15
    stw r29, 0x14(r1)
    rlwimi r7, r8, 24, 24, 31
    rlwimi r6, r8, 8, 16, 23
    extlwi r0, r10, 8, 8
    or r6, r7, r6
    rlwimi r5, r9, 24, 24, 31
    rlwimi r4, r9, 8, 16, 23
    rlwimi r3, r10, 24, 24, 31
    rlwimi r0, r10, 8, 16, 23
    stw r28, 0x10(r1)
    or r0, r3, r0
    or r5, r5, r4
    addi r31, r31, lbl_807BE9D0@l
    rotlwi r29, r6, 16
    rotlwi r30, r5, 16
    lis r3, 0x1
    addi r4, r31, 0xbdc
    mr r5, r29
    rotlwi r28, r0, 16
    mr r6, r30
    crclr 6
    bl fn_806A76B0
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BAC80_000000B8
    addi r4, r31, 0xc08
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BAC80_00000170
lbl_fn_806BAC80_000000B8:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r0, 0x8f8(r3)
    cmplw r28, r0
    beq lbl_fn_806BAC80_000000E4
    mr r5, r28
    addi r4, r31, 0xc20
    li r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BAC80_00000170
lbl_fn_806BAC80_000000E4:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    blt lbl_fn_806BAC80_000000F8
    addi r3, r3, 0x60
    b lbl_fn_806BAC80_000000FC
lbl_fn_806BAC80_000000F8:
    li r3, 0x0
lbl_fn_806BAC80_000000FC:
    cmpwi r3, 0x0
    beq lbl_fn_806BAC80_00000110
    lwz r0, 0x0(r3)
    cmplw r0, r29
    beq lbl_fn_806BAC80_00000124
lbl_fn_806BAC80_00000110:
    addi r4, r31, 0xc40
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BAC80_00000170
lbl_fn_806BAC80_00000124:
    bl fn_806B0F80
    xor r0, r3, r30
    and. r29, r3, r0
    beq lbl_fn_806BAC80_00000170
    mr r5, r29
    addi r4, r31, 0xc64
    lis r3, 0x1
    crclr 6
    bl fn_806A76B0
    li r30, 0x0
    li r31, 0x1
lbl_fn_806BAC80_00000150:
    clrlwi r3, r30, 24
    slw r0, r31, r3
    and. r0, r29, r0
    beq lbl_fn_806BAC80_00000164
    bl fn_806B1A00
lbl_fn_806BAC80_00000164:
    addi r30, r30, 0x1
    cmplwi r30, 0x20
    blt lbl_fn_806BAC80_00000150
lbl_fn_806BAC80_00000170:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806BAE10(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_26
    lis r31, lbl_807BE9D0@ha
    mr r30, r3
    mr r26, r4
    addi r31, r31, lbl_807BE9D0@l
    bl fn_806B1230
    cmpwi r3, 0x4
    beq lbl_fn_806BAE10_000001D0
    li r3, 0x0
    b lbl_fn_806BAE10_0000075C
lbl_fn_806BAE10_000001D0:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x14(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BAE10_000001FC
    addi r4, r31, 0xc90
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    b lbl_fn_806BAE10_0000075C
lbl_fn_806BAE10_000001FC:
    cmpwi cr6, r30, 0x0
    beq cr6, lbl_fn_806BAE10_000003EC
    cmpwi r3, 0x0
    beq lbl_fn_806BAE10_000003E4
    beq cr6, lbl_fn_806BAE10_000003E4
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    subis r4, r26, 0x1
    li r0, 0x0
    mr r3, r30
    stb r0, 0x751(r5)
    subi r4, r4, 0x3880
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x14
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BAE10_00000298
    cmpwi r6, 0x0
    bne lbl_fn_806BAE10_00000298
    li r6, 0x1
lbl_fn_806BAE10_00000298:
    addi r3, r1, 0x14
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x14
    addi r5, r31, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x68
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BAE10_00000308
    li r4, 0x0
    b lbl_fn_806BAE10_00000354
lbl_fn_806BAE10_00000308:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BAE10_00000350
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BAE10_0000033C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BAE10_0000033C
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BAE10_00000350
lbl_fn_806BAE10_0000033C:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BAE10_00000350
    li r4, 0x1
    b lbl_fn_806BAE10_00000354
lbl_fn_806BAE10_00000350:
    li r4, 0x0
lbl_fn_806BAE10_00000354:
    neg r0, r4
    addi r3, r1, 0x14
    or r0, r0, r4
    addi r5, r31, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x6c
    addi r4, r1, 0x14
    addi r5, r1, 0x48
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x48
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
    mr r3, r30
    subi r0, r4, 0x2
    mr r5, r26
    cntlzw r0, r0
    lwz r8, 0x8a4(r27)
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
lbl_fn_806BAE10_000003E4:
    li r3, 0x1
    b lbl_fn_806BAE10_0000075C
lbl_fn_806BAE10_000003EC:
    lbz r0, 0x752(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BAE10_00000404
    lbz r0, 0x751(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BAE10_0000040C
lbl_fn_806BAE10_00000404:
    li r3, 0x1
    b lbl_fn_806BAE10_0000075C
lbl_fn_806BAE10_0000040C:
    lwz r3, 0x740(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806BAE10_00000428
    bl fn_806FC900
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x740(r3)
lbl_fn_806BAE10_00000428:
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x58(r3)
    cmpwi r0, 0x1
    ble lbl_fn_806BAE10_00000464
    lbz r0, 0x751(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BAE10_00000758
    li r0, 0x2
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    b lbl_fn_806BAE10_00000758
lbl_fn_806BAE10_00000464:
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    bne lbl_fn_806BAE10_00000650
    cmpwi r3, 0x0
    beq lbl_fn_806BAE10_00000758
    li r0, 0x1
    stb r0, 0x751(r3)
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAC30
    lwz r5, lbl_80860898@l(r28)
    li r0, 0x0
    lis r4, 0xffff
    li r3, 0x19
    stb r0, 0x751(r5)
    subi r4, r4, 0x3a2e
    bl fn_806A7130
    lwz r6, lbl_80860898@l(r28)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BAE10_00000500
    cmpwi r6, 0x0
    bne lbl_fn_806BAE10_00000500
    li r6, 0x1
lbl_fn_806BAE10_00000500:
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x20
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
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BAE10_00000570
    li r4, 0x0
    b lbl_fn_806BAE10_000005BC
lbl_fn_806BAE10_00000570:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BAE10_000005B8
    lwz r3, lbl_80860898@l(r28)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BAE10_000005A4
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BAE10_000005A4
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BAE10_000005B8
lbl_fn_806BAE10_000005A4:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BAE10_000005B8
    li r4, 0x1
    b lbl_fn_806BAE10_000005BC
lbl_fn_806BAE10_000005B8:
    li r4, 0x0
lbl_fn_806BAE10_000005BC:
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
    addi r5, r1, 0x20
    li r6, 0x2f
    bl fn_806AB980
    addi r4, r1, 0x20
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
    li r3, 0x19
    srwi r6, r0, 5
    li r4, 0x0
    mtctr r12
    bctrl
    bl fn_806BBCA0
    b lbl_fn_806BAE10_00000758
lbl_fn_806BAE10_00000650:
    lwz r0, 0x744(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806BAE10_00000740
    addi r4, r31, 0xcb4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, lbl_80860898@l(r28)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x15
    beq lbl_fn_806BAE10_0000071C
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
    lwz r8, 0x54(r3)
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
lbl_fn_806BAE10_0000071C:
    lis r30, lbl_80860898@ha
    li r0, 0x15
    lwz r3, lbl_80860898@l(r30)
    stw r0, 0x744(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r30)
    stw r4, 0x79c(r5)
    stw r3, 0x798(r5)
    b lbl_fn_806BAE10_00000758
lbl_fn_806BAE10_00000740:
    addi r4, r31, 0xccc
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r3, 0x1
    bl fn_806C3ED0
lbl_fn_806BAE10_00000758:
    li r3, 0x1
lbl_fn_806BAE10_0000075C:
    addi r11, r1, 0x90
    bl _restgpr_26
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806BB3F0(void)
{
    nofralloc
    lis r4, lbl_80860898@ha
    lwz r5, lbl_80860898@l(r4)
    lbz r0, 0x751(r5)
    cmplwi r0, 0x1
    beqlr
    lbz r0, 0x15(r5)
    li r4, 0x2
    cmpwi r0, 0x0
    beq lbl_fn_806BB3F0_000007A8
    lbz r0, 0x15(r5)
    cmplwi r0, 0x1
    bne lbl_fn_806BB3F0_000007B8
lbl_fn_806BB3F0_000007A8:
    lbz r0, 0xd(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806BB3F0_000007B8
    li r4, 0x1
lbl_fn_806BB3F0_000007B8:
    b fn_806C10C0
    blr
}

asm void fn_806BB440(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    stw r30, 0x48(r1)
    lis r30, lbl_80860898@ha
    stw r29, 0x44(r1)
    lis r29, lbl_807BE9D0@ha
    addi r29, r29, lbl_807BE9D0@l
    lwz r4, lbl_80860898@l(r30)
    addi r5, r29, 0x5c
    lbz r6, 0x17(r4)
    li r4, 0xc
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r29, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BB440_00000844
    cmpwi r6, 0x0
    bne lbl_fn_806BB440_00000844
    li r6, 0x1
lbl_fn_806BB440_00000844:
    addi r3, r1, 0x8
    addi r5, r29, 0x5c
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r29, 0x64
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    addi r3, r1, 0x8
    addi r5, r29, 0x5c
    li r4, 0xc
    li r6, 0x5a
    crclr 6
    bl fn_806809C0
    addi r3, r29, 0x68
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BB440_000008B4
    li r4, 0x0
    b lbl_fn_806BB440_00000900
lbl_fn_806BB440_000008B4:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BB440_000008FC
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BB440_000008E8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BB440_000008E8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BB440_000008FC
lbl_fn_806BB440_000008E8:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BB440_000008FC
    li r4, 0x1
    b lbl_fn_806BB440_00000900
lbl_fn_806BB440_000008FC:
    li r4, 0x0
lbl_fn_806BB440_00000900:
    neg r0, r4
    addi r3, r1, 0x8
    or r0, r0, r4
    addi r5, r29, 0x5c
    srwi r6, r0, 31
    li r4, 0xc
    crclr 6
    bl fn_806809C0
    addi r3, r29, 0x6c
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB980
    mr r3, r31
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_806ACE00
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_806BB5E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_80860898@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    lis r30, lbl_80860140@ha
    addi r30, r30, lbl_80860140@l
    stw r29, 0x14(r1)
    stw r31, lbl_80860898@l(r3)
    bl OSGetTime
    lwz r0, 0x0(r30)
    addi r5, r30, 0x750
    stw r4, 0x4(r5)
    cmpwi r0, 0x0
    stw r3, 0x750(r30)
    beq lbl_fn_806BB5E0_000009C4
    mr r4, r0
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    stw r31, 0x0(r30)
lbl_fn_806BB5E0_000009C4:
    addi r29, r30, 0x18
    li r31, 0x0
lbl_fn_806BB5E0_000009CC:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_806BB5E0_000009E4
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806BB5E0_000009E4:
    addi r31, r31, 0x1
    addi r29, r29, 0xc
    cmpwi r31, 0x9a
    blt lbl_fn_806BB5E0_000009CC
    addi r3, r30, 0x18
    li r4, 0x0
    li r5, 0x738
    bl memset
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806BB6A0(void)
{
    nofralloc
    lis r3, lbl_80860898@ha
    lwz r0, lbl_80860898@l(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_806BB6C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80860898@ha
    mr r29, r3
    lwz r4, lbl_80860898@l(r31)
    li r30, 0x0
    lis r3, 0x1
    stb r30, 0xc(r4)
    lwz r4, lbl_80860898@l(r31)
    stb r30, 0x720(r4)
    lwz r27, lbl_80860898@l(r31)
    bl fn_806ABB70
    sth r3, 0x722(r27)
    li r4, 0x0
    li r5, 0x98
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x724(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x72c(r3)
    stw r30, 0x728(r3)
    stw r30, 0x734(r3)
    stw r30, 0x730(r3)
    stb r30, 0x748(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x752(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x753(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x754(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x755(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x750(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x751(r3)
    lwz r3, lbl_80860898@l(r31)
    sth r30, 0x75a(r3)
    lwz r6, lbl_80860898@l(r31)
    stw r30, 0x78c(r6)
    addi r3, r6, 0x808
    stw r30, 0x788(r6)
    stw r30, 0x79c(r6)
    stw r30, 0x798(r6)
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x30
    stw r30, 0x6c0(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x6c4(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x6c8
    bl memset
    cmpwi r29, 0x2
    bne lbl_fn_806BB6C0_00000CEC
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x16(r3)
    cmpwi r0, 0x2
    bne lbl_fn_806BB6C0_00000C04
    lwz r31, 0x744(r3)
    cmpwi r31, 0xd
    beq lbl_fn_806BB6C0_00000BF0
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r28, lbl_80860890@l(r30)
    lwz r27, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r27, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r28, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x34(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BB6C0_00000BF0:
    lis r3, lbl_80860898@ha
    li r0, 0xd
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BB6C0_00000F10
lbl_fn_806BB6C0_00000C04:
    lbz r0, 0x16(r3)
    cmpwi r0, 0x1
    bne lbl_fn_806BB6C0_00000CD4
    lwz r31, 0x744(r3)
    cmpwi r31, 0x1
    beq lbl_fn_806BB6C0_00000CC0
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x4(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BB6C0_00000CC0:
    lis r3, lbl_80860898@ha
    li r0, 0x1
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BB6C0_00000F10
lbl_fn_806BB6C0_00000CD4:
    lis r4, lbl_807BF6BC@ha
    li r3, 0x8
    addi r4, r4, lbl_807BF6BC@l
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BB6C0_00000F10
lbl_fn_806BB6C0_00000CEC:
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0xc
    stb r30, 0x18(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x700(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x708(r3)
    lwz r3, lbl_80860898@l(r31)
    sth r30, 0x758(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x749(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x760(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x76c(r3)
    stw r30, 0x768(r3)
    stw r30, 0x770(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x77c(r3)
    stw r30, 0x778(r3)
    stw r30, 0x780(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x7ac(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x738
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r0, 0x1
    li r4, 0x0
    li r5, 0x608
    stw r30, 0x8b8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x8bc(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x8c4(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r0, 0x8d8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x8dc(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x16(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0xd(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x8e8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x8f0(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x58
    bl memset
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r3, lbl_80860898@l(r31)
    cmpwi r29, 0x1
    stw r30, 0x690(r3)
    bne lbl_fn_806BB6C0_00000EBC
    lwz r3, lbl_80860898@l(r31)
    lbz r0, 0x15(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BB6C0_00000DF8
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    bne lbl_fn_806BB6C0_00000F10
lbl_fn_806BB6C0_00000DF8:
    lwz r31, 0x744(r3)
    cmpwi r31, 0x16
    beq lbl_fn_806BB6C0_00000EA8
    lis r30, lbl_80860890@ha
    addi r29, r30, lbl_80860890@l
    lwz r27, lbl_80860890@l(r30)
    lwz r28, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r28, r4
    stw r3, lbl_80860890@l(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    addi r3, r3, lbl_807C16F0@l
    slwi r0, r31, 2
    lwz r8, 0x58(r3)
    subi r9, r5, 0x7ae1
    lwzx r5, r3, r0
    srawi r6, r6, 6
    srwi r0, r6, 31
    lis r3, lbl_807BEAE8@ha
    add r6, r6, r0
    subf r7, r6, r4
    addi r4, r3, lbl_807BEAE8@l
    addi r0, r7, 0x32
    li r3, 0x1
    mulhw r0, r9, r0
    srawi r0, r0, 5
    srwi r7, r0, 31
    add r7, r0, r7
    crclr 6
    bl fn_806A76B0
lbl_fn_806BB6C0_00000EA8:
    lis r3, lbl_80860898@ha
    li r0, 0x16
    lwz r3, lbl_80860898@l(r3)
    stw r0, 0x744(r3)
    b lbl_fn_806BB6C0_00000F10
lbl_fn_806BB6C0_00000EBC:
    lwz r3, lbl_80860898@l(r31)
    li r4, 0x0
    li r5, 0x4
    stb r30, 0x14(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x17(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x50(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x7b0(r3)
    lwz r3, lbl_80860898@l(r31)
    stb r30, 0x756(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x7a4(r3)
    stw r30, 0x7a0(r3)
    stw r30, 0x8a8(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x8ac(r3)
    lwz r3, lbl_80860898@l(r31)
    addi r3, r3, 0x8ec
    bl memset
lbl_fn_806BB6C0_00000F10:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806BBBA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    li r3, 0x0
    bl fn_806BB6C0
    lis r6, lbl_80860898@ha
    li r5, 0x0
    lwz r3, lbl_80860898@l(r6)
    li r4, 0xff
    li r0, 0x1
    stb r28, 0x14(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r31, 0x17(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r29, 0x8a0(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r30, 0x8a4(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r5, 0x721(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r4, 0x2c(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r5, 0x30(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r5, 0x16(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r0, 0x8d8(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r5, 0x8dc(r3)
    lwz r3, lbl_80860898@l(r6)
    stb r31, 0x17(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r5, 0x1c(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r5, 0x28(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r5, 0x24(r3)
    stw r5, 0x20(r3)
    stw r5, 0x4c(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r0, 0x8f4(r3)
    lwz r3, lbl_80860898@l(r6)
    stw r5, 0x904(r3)
    stw r5, 0x900(r3)
    stw r5, 0x75c(r3)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806BBCA0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_26
    lis r31, lbl_807BE9D0@ha
    lis r30, lbl_80860140@ha
    addi r31, r31, lbl_807BE9D0@l
    li r3, 0x40
    addi r30, r30, lbl_80860140@l
    addi r4, r31, 0xd14
    crclr 6
    bl fn_806A76B0
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    cmpwi r3, 0x0
    beq lbl_fn_806BBCA0_0000137C
    lwz r3, 0x704(r3)
    cmpwi r3, 0x0
    beq lbl_fn_806BBCA0_000010A0
    lwz r0, 0x4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806BBCA0_00001098
    bl fn_806FFA10
    lwz r3, lbl_80860898@l(r28)
    li r0, 0x0
    stw r0, 0x704(r3)
    b lbl_fn_806BBCA0_000010A0
lbl_fn_806BBCA0_00001098:
    li r0, 0x1
    stw r0, 0x8(r30)
lbl_fn_806BBCA0_000010A0:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r3, 0x740(r3)
    bl fn_806FC900
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806BBCA0_000010C4
    bl fn_806FBDB0
    b lbl_fn_806BBCA0_000010CC
lbl_fn_806BBCA0_000010C4:
    li r0, 0x1
    stw r0, 0x10(r30)
lbl_fn_806BBCA0_000010CC:
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    lwz r28, 0x744(r3)
    cmpwi r28, 0x0
    beq lbl_fn_806BBCA0_0000117C
    addi r29, r30, 0x750
    lwz r27, 0x750(r30)
    lwz r26, 0x4(r29)
    bl OSGetTime
    stw r4, 0x4(r29)
    lis r29, 0x1062
    lis r6, 0x8000
    subfc r4, r26, r4
    stw r3, 0x750(r30)
    addi r7, r29, 0x4dd3
    subfe r3, r27, r3
    li r5, 0x0
    lwz r0, 0xf8(r6)
    srwi r0, r0, 2
    mulhwu r0, r7, r0
    srwi r6, r0, 6
    bl __div2i
    addi r0, r29, 0x4dd3
    lis r3, lbl_807C16F0@ha
    mulhw r6, r0, r4
    lis r5, 0x51ec
    lwz r8, lbl_807C16F0@l(r3)
    slwi r0, r28, 2
    addi r3, r3, lbl_807C16F0@l
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
lbl_fn_806BBCA0_0000117C:
    lis r3, lbl_80860898@ha
    li r29, 0x0
    lwz r3, lbl_80860898@l(r3)
    stw r29, 0x744(r3)
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_806BBCA0_000011A8
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
    stw r29, 0x0(r30)
lbl_fn_806BBCA0_000011A8:
    addi r27, r30, 0x18
    li r26, 0x0
lbl_fn_806BBCA0_000011B0:
    lwz r4, 0x4(r27)
    cmpwi r4, 0x0
    beq lbl_fn_806BBCA0_000011C8
    li r3, 0x4
    li r5, 0x0
    bl fn_806A7400
lbl_fn_806BBCA0_000011C8:
    addi r26, r26, 0x1
    addi r27, r27, 0xc
    cmpwi r26, 0x9a
    blt lbl_fn_806BBCA0_000011B0
    addi r3, r30, 0x18
    li r4, 0x0
    li r5, 0x738
    bl memset
    lis r30, lbl_80860898@ha
    li r29, 0x1
    lwz r3, lbl_80860898@l(r30)
    li r4, 0x0
    li r5, 0x608
    stb r29, 0x50(r3)
    lwz r3, lbl_80860898@l(r30)
    addi r3, r3, 0x58
    bl memset
    lwz r3, lbl_80860898@l(r30)
    li r4, 0x0
    li r5, 0x30
    addi r3, r3, 0x660
    bl memset
    lwz r4, lbl_80860898@l(r30)
    addi r3, r1, 0x8
    addi r5, r31, 0x5c
    stw r29, 0x8f4(r4)
    li r4, 0xc
    lwz r6, lbl_80860898@l(r30)
    lbz r6, 0x17(r6)
    addi r6, r6, 0x1
    crclr 6
    bl fn_806809C0
    addi r3, r31, 0x60
    addi r4, r1, 0x8
    addi r5, r1, 0x14
    li r6, 0x2f
    bl fn_806AB920
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    lwz r6, 0x58(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BBCA0_0000127C
    cmpwi r6, 0x0
    bne lbl_fn_806BBCA0_0000127C
    li r6, 0x1
lbl_fn_806BBCA0_0000127C:
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
    lis r30, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r30)
    lwz r0, 0x908(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BBCA0_000012EC
    li r4, 0x0
    b lbl_fn_806BBCA0_00001338
lbl_fn_806BBCA0_000012EC:
    bl fn_806B12F0
    cmpwi r3, 0x0
    beq lbl_fn_806BBCA0_00001334
    lwz r3, lbl_80860898@l(r30)
    lbz r0, 0x15(r3)
    cmplwi r0, 0x1
    beq lbl_fn_806BBCA0_00001320
    lbz r0, 0x15(r3)
    cmplwi r0, 0x3
    beq lbl_fn_806BBCA0_00001320
    lbz r0, 0x15(r3)
    cmplwi r0, 0x2
    bne lbl_fn_806BBCA0_00001334
lbl_fn_806BBCA0_00001320:
    lwz r0, 0x8f4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806BBCA0_00001334
    li r4, 0x1
    b lbl_fn_806BBCA0_00001338
lbl_fn_806BBCA0_00001334:
    li r4, 0x0
lbl_fn_806BBCA0_00001338:
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
lbl_fn_806BBCA0_0000137C:
    addi r11, r1, 0x60
    bl _restgpr_26
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806BC010(void)
{
    nofralloc
    stwu r1, -0x510(r1)
    mflr r0
    stw r0, 0x514(r1)
    addi r11, r1, 0x510
    bl _savegpr_25
    lis r4, lbl_80860898@ha
    li r12, 0x8
    li r11, 0xa
    li r10, 0x32
    li r9, 0x33
    li r8, 0x34
    li r7, 0x35
    li r6, 0x36
    li r5, 0x37
    li r0, 0x38
    stb r12, 0x20(r1)
    lis r31, lbl_807BE9D0@ha
    lwz r4, lbl_80860898@l(r4)
    mr r28, r3
    stb r11, 0x21(r1)
    addi r31, r31, lbl_807BE9D0@l
    li r29, 0x1
    li r30, 0x9
    stb r10, 0x22(r1)
    stb r9, 0x23(r1)
    stb r8, 0x24(r1)
    stb r7, 0x25(r1)
    stb r6, 0x26(r1)
    stb r5, 0x27(r1)
    stb r0, 0x28(r1)
    lbz r0, 0x15(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_00001428
    lbz r0, 0x15(r4)
    cmplwi r0, 0x1
    bne lbl_fn_806BC010_000014F4
lbl_fn_806BC010_00001428:
    lis r3, lbl_80860158@ha
    li r0, 0x16
    addi r3, r3, lbl_80860158@l
    addi r4, r1, 0x29
    li r5, 0x0
    mtctr r0
lbl_fn_806BC010_00001440:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_00001458
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_00001458:
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_00001470
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_00001470:
    lbz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_00001488
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_00001488:
    lbz r0, 0x24(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_000014A0
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_000014A0:
    lbz r0, 0x30(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_000014B8
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_000014B8:
    lbz r0, 0x3c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_000014D0
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_000014D0:
    lbz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_000014E8
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    addi r30, r30, 0x1
lbl_fn_806BC010_000014E8:
    addi r3, r3, 0x54
    addi r5, r5, 0x6
    bdnz lbl_fn_806BC010_00001440
lbl_fn_806BC010_000014F4:
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r5, 0x744(r4)
    subi r0, r5, 0x9
    cmplwi r0, 0x2
    ble lbl_fn_806BC010_000016E8
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_806BC010_000016BC
    cmpwi r5, 0x2
    beq lbl_fn_806BC010_00001534
    cmpwi r5, 0x16
    beq lbl_fn_806BC010_000016BC
    cmpwi r5, 0xc
    beq lbl_fn_806BC010_0000170C
    b lbl_fn_806BC010_00001740
lbl_fn_806BC010_00001534:
    lwz r25, 0x4(r31)
    cmpwi r25, -0x2
    bne lbl_fn_806BC010_00001560
    lbz r0, 0x8d8(r4)
    li r26, 0x3
    cmplwi r0, 0x1
    bne lbl_fn_806BC010_00001554
    li r26, 0x2
lbl_fn_806BC010_00001554:
    li r0, 0x0
    stb r0, 0x8d8(r4)
    b lbl_fn_806BC010_000015BC
lbl_fn_806BC010_00001560:
    cmpwi r25, -0x1
    bne lbl_fn_806BC010_0000158C
    lbz r0, 0x8d8(r4)
    li r26, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_806BC010_0000157C
    li r26, 0x2
lbl_fn_806BC010_0000157C:
    lbz r0, 0x8d8(r4)
    xori r0, r0, 0x1
    stb r0, 0x8d8(r4)
    b lbl_fn_806BC010_000015BC
lbl_fn_806BC010_0000158C:
    li r3, 0x64
    bl fn_806ABB70
    cmpw r3, r25
    li r26, 0x0
    bge lbl_fn_806BC010_000015A4
    li r26, 0x2
lbl_fn_806BC010_000015A4:
    mr r5, r25
    mr r6, r26
    addi r4, r31, 0xd3c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC010_000015BC:
    lis r3, lbl_80860898@ha
    clrlwi r7, r26, 24
    lwz r3, lbl_80860898@l(r3)
    cmplwi r7, 0x3
    lbz r26, 0x15(r3)
    lbz r27, 0x17(r3)
    lwz r25, 0x7a8(r3)
    bne lbl_fn_806BC010_00001604
    addi r6, r31, 0x1c0
    addi r3, r1, 0xec
    mr r8, r6
    addi r5, r31, 0x1dc
    li r4, 0x1ff
    li r7, 0x0
    li r9, 0x2
    crclr 6
    bl fn_806809C0
    b lbl_fn_806BC010_0000161C
lbl_fn_806BC010_00001604:
    addi r3, r1, 0xec
    addi r5, r31, 0xd68
    addi r6, r31, 0x1c0
    li r4, 0x1ff
    crclr 6
    bl fn_806809C0
lbl_fn_806BC010_0000161C:
    stw r27, 0x8(r1)
    addi r0, r31, 0x190
    addi r4, r31, 0x1d0
    li r28, 0x0
    stw r0, 0xc(r1)
    addi r0, r1, 0xec
    mr r9, r25
    mr r10, r27
    stw r26, 0x10(r1)
    addi r3, r1, 0x2ec
    addi r5, r31, 0x1f4
    addi r6, r31, 0x19c
    stw r4, 0x14(r1)
    addi r8, r31, 0x188
    li r4, 0x1ff
    li r7, 0x5a
    stw r28, 0x18(r1)
    stw r0, 0x1c(r1)
    crclr 6
    bl fn_806809C0
    addi r3, r1, 0x2ec
    bl strlen
    lis r4, lbl_80860140@ha
    mr r0, r3
    lwz r6, lbl_80860140@l(r4)
    cmpwi r6, 0x0
    beq lbl_fn_806BC010_000016A4
    addi r3, r1, 0x2ec
    subfic r4, r0, 0x1ff
    add r3, r3, r0
    addi r5, r31, 0xd70
    crclr 6
    bl fn_806809C0
    stb r28, 0x4ea(r1)
lbl_fn_806BC010_000016A4:
    lis r3, lbl_80860898@ha
    lwz r4, lbl_80860898@l(r3)
    lwz r3, 0x8dc(r4)
    addi r0, r3, 0x1
    stw r0, 0x8dc(r4)
    b lbl_fn_806BC010_00001750
lbl_fn_806BC010_000016BC:
    mr r7, r28
    addi r3, r1, 0x2ec
    addi r5, r31, 0xd68
    addi r6, r31, 0x188
    li r4, 0x1ff
    crclr 6
    bl fn_806809C0
    lis r3, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r3)
    stw r28, 0x7ac(r3)
    b lbl_fn_806BC010_00001750
lbl_fn_806BC010_000016E8:
    mr r7, r28
    addi r3, r1, 0x2ec
    addi r5, r31, 0xd68
    addi r6, r31, 0x188
    li r4, 0x1ff
    crclr 6
    bl fn_806809C0
    li r29, 0x0
    b lbl_fn_806BC010_00001750
lbl_fn_806BC010_0000170C:
    lwz r0, 0x7a8(r4)
    addi r3, r1, 0x2ec
    stw r0, 0x8(r1)
    addi r5, r31, 0xd7c
    addi r6, r31, 0x1b4
    addi r8, r31, 0x1c0
    lwz r7, 0x8c0(r4)
    addi r10, r31, 0x188
    li r4, 0x1ff
    li r9, 0x2
    crclr 6
    bl fn_806809C0
    b lbl_fn_806BC010_00001750
lbl_fn_806BC010_00001740:
    addi r4, r31, 0xda4
    li r3, 0x2
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC010_00001750:
    addi r4, r31, 0xdd0
    addi r5, r1, 0x2ec
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lis r28, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r28)
    lwz r3, 0x704(r3)
    bl fn_806FFE10
    lwz r3, lbl_80860898@l(r28)
    mr r4, r29
    mr r7, r30
    addi r6, r1, 0x20
    lwz r0, 0x744(r3)
    addi r8, r1, 0x2ec
    lwz r3, 0x704(r3)
    li r5, 0x0
    cmpwi r0, 0x16
    li r9, 0x6
    bne lbl_fn_806BC010_000017A4
    li r9, 0x1
lbl_fn_806BC010_000017A4:
    bl fn_806FFBD0
    cmpwi r3, 0x2
    mr r25, r3
    bne lbl_fn_806BC010_000017C4
    addi r4, r31, 0xdec
    li r3, 0x400
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC010_000017C4:
    cmpwi r25, 0x0
    bne lbl_fn_806BC010_00001824
    bl OSGetTime
    lis r5, 0x8000
    lis r6, 0x1062
    lwz r7, 0xf8(r5)
    addi r8, r6, 0x4dd3
    lis r5, lbl_80860898@ha
    li r0, 0x7530
    srwi r7, r7, 2
    lwz r6, lbl_80860898@l(r5)
    mulhwu r7, r8, r7
    addi r5, r31, 0xd28
    srwi r8, r7, 6
    mulhwu r7, r8, r0
    mulli r0, r8, 0x7530
    addc r0, r0, r4
    stw r0, 0x71c(r6)
    adde r0, r7, r3
    addi r4, r31, 0xdf4
    stw r0, 0x718(r6)
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC010_00001824:
    addi r11, r1, 0x510
    mr r3, r25
    bl _restgpr_25
    lwz r0, 0x514(r1)
    mtlr r0
    addi r1, r1, 0x510
    blr
}

asm void fn_806BC4C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lis r26, lbl_80860898@ha
    lis r30, lbl_807BE9D0@ha
    lwz r6, lbl_80860898@l(r26)
    mr r25, r3
    mr r31, r4
    mr r27, r5
    lwz r3, 0x740(r6)
    addi r30, r30, lbl_807BE9D0@l
    li r28, 0x0
    bl fn_806FC900
    cmpwi r25, 0x0
    bne lbl_fn_806BC4C0_00001A98
    lwz r4, lbl_80860898@l(r26)
    lbz r0, 0x17(r27)
    lhz r3, 0x722(r4)
    cmpwi r0, 0x0
    lwz r0, 0x7a8(r4)
    slwi r31, r3, 16
    rlwimi r31, r0, 0, 16, 31
    beq lbl_fn_806BC4C0_00001908
    lwz r3, 0x704(r4)
    bl fn_806FFF50
    lwz r0, 0x4(r27)
    cmplw r0, r3
    bne lbl_fn_806BC4C0_000018EC
    lwz r5, 0x0(r27)
    addi r4, r30, 0xe20
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x8(r27)
    li r29, 0x0
    lhz r0, 0xe(r27)
    stw r3, 0x10(r27)
    sth r0, 0x14(r27)
    b lbl_fn_806BC4C0_000019B0
lbl_fn_806BC4C0_000018EC:
    lwz r5, 0x0(r27)
    addi r4, r30, 0xe48
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r29, 0x1
    b lbl_fn_806BC4C0_000019B0
lbl_fn_806BC4C0_00001908:
    bl fn_806A475C
    bl fn_806A4260
    srwi r4, r3, 24
    extrwi r0, r3, 8, 8
    cmplwi r4, 0xa
    bne lbl_fn_806BC4C0_00001928
    li r0, 0x1
    b lbl_fn_806BC4C0_00001964
lbl_fn_806BC4C0_00001928:
    cmplwi r4, 0xac
    bne lbl_fn_806BC4C0_00001948
    cmplwi r0, 0x10
    blt lbl_fn_806BC4C0_00001948
    cmplwi r0, 0x1f
    bgt lbl_fn_806BC4C0_00001948
    li r0, 0x1
    b lbl_fn_806BC4C0_00001964
lbl_fn_806BC4C0_00001948:
    cmplwi r4, 0xc0
    bne lbl_fn_806BC4C0_00001960
    cmplwi r0, 0xa8
    bne lbl_fn_806BC4C0_00001960
    li r0, 0x1
    b lbl_fn_806BC4C0_00001964
lbl_fn_806BC4C0_00001960:
    li r0, 0x0
lbl_fn_806BC4C0_00001964:
    cmpwi r0, 0x0
    beq lbl_fn_806BC4C0_00001988
    lwz r5, 0x0(r27)
    addi r4, r30, 0xe64
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    li r29, 0x1
    b lbl_fn_806BC4C0_000019B0
lbl_fn_806BC4C0_00001988:
    lwz r5, 0x0(r27)
    addi r4, r30, 0xe98
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    lwz r3, 0x4(r27)
    li r29, 0x0
    lhz r0, 0xc(r27)
    stw r3, 0x10(r27)
    sth r0, 0x14(r27)
lbl_fn_806BC4C0_000019B0:
    cmpwi r29, 0x0
    beq lbl_fn_806BC4C0_000019D8
    lis r26, lbl_80860898@ha
    lis r3, 0x1
    lwz r25, lbl_80860898@l(r26)
    bl fn_806ABB70
    sth r3, 0x722(r25)
    lwz r3, lbl_80860898@l(r26)
    stw r31, 0x740(r3)
    b lbl_fn_806BC4C0_00001A64
lbl_fn_806BC4C0_000019D8:
    bl fn_806A475C
    lis r31, lbl_80860898@ha
    stw r3, 0x8(r1)
    lwz r3, lbl_80860898@l(r31)
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EACC0
    extrwi r6, r3, 8, 16
    clrlslwi r0, r3, 16, 8
    rlwinm r5, r6, 0, 8, 15
    clrlslwi r4, r3, 24, 8
    clrrwi r0, r0, 24
    addi r7, r1, 0x8
    or r5, r6, r5
    li r3, 0x6
    or r0, r4, r0
    li r8, 0x2
    or r0, r5, r0
    srwi r4, r0, 16
    slwi r0, r0, 16
    or r0, r4, r0
    stw r0, 0xc(r1)
    lwz r4, 0x0(r27)
    lwz r5, 0x4(r27)
    lhz r6, 0xc(r27)
    bl fn_806BC860
    lwz r4, lbl_80860898@l(r31)
    li r0, 0x0
    cmpwi r3, 0x0
    stb r0, 0x809(r4)
    beq lbl_fn_806BC4C0_00001A5C
    li r3, 0x2
    b lbl_fn_806BC4C0_00001BC8
lbl_fn_806BC4C0_00001A5C:
    lwz r3, lbl_80860898@l(r31)
    stw r0, 0x740(r3)
lbl_fn_806BC4C0_00001A64:
    lis r4, lbl_80860898@ha
    li r0, 0x0
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x738(r3)
    lwz r3, lbl_80860898@l(r4)
    stb r0, 0x739(r3)
    lwz r3, lbl_80860898@l(r4)
    lhz r0, 0xc(r27)
    sth r0, 0x73a(r3)
    lwz r3, lbl_80860898@l(r4)
    lwz r0, 0x4(r27)
    stw r0, 0x73c(r3)
    b lbl_fn_806BC4C0_00001ACC
lbl_fn_806BC4C0_00001A98:
    lwz r3, lbl_80860898@l(r26)
    li r4, 0x1
    li r0, 0x0
    li r29, 0x1
    stb r4, 0x738(r3)
    lwz r3, lbl_80860898@l(r26)
    stb r0, 0x739(r3)
    lwz r3, lbl_80860898@l(r26)
    sth r0, 0x73a(r3)
    lwz r3, lbl_80860898@l(r26)
    stw r0, 0x73c(r3)
    lwz r3, lbl_80860898@l(r26)
    stw r31, 0x740(r3)
lbl_fn_806BC4C0_00001ACC:
    cmpwi r29, 0x0
    beq lbl_fn_806BC4C0_00001B8C
    lis r3, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r3)
    lbz r0, 0x738(r25)
    addi r26, r25, 0x738
    cmpwi r0, 0x0
    bne lbl_fn_806BC4C0_00001B38
    lwz r3, 0x4(r26)
    li r4, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    mr r4, r3
    lwz r3, 0x704(r25)
    lhz r5, 0x2(r26)
    lwz r6, 0x8(r26)
    bl fn_806FFD10
    bl fn_806C5EB0
    cmpwi r3, 0x0
    beq lbl_fn_806BC4C0_00001B24
    li r28, 0x2
    b lbl_fn_806BC4C0_00001BC4
lbl_fn_806BC4C0_00001B24:
    lwz r5, 0x8(r26)
    addi r4, r30, 0xec4
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC4C0_00001B38:
    lis r3, lbl_80860898@ha
    lis r28, fn_806CA020@ha
    lwz r3, lbl_80860898@l(r3)
    lis r27, fn_806CA040@ha
    lwz r3, 0x4(r3)
    lwz r3, 0x0(r3)
    bl fn_806EAD00
    lwz r4, 0x8(r26)
    mr r8, r26
    lbz r5, 0x0(r26)
    addi r6, r28, fn_806CA020@l
    addi r7, r27, fn_806CA040@l
    bl fn_806FC5D0
    cmpwi r3, 0x3
    mr r28, r3
    bne lbl_fn_806BC4C0_00001BC4
    addi r4, r30, 0xedc
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BC4C0_00001BC4
lbl_fn_806BC4C0_00001B8C:
    lis r27, lbl_80860898@ha
    lwz r25, lbl_80860898@l(r27)
    lwz r3, 0x4(r25)
    lwz r3, 0x0(r3)
    bl fn_806EAD00
    mr r4, r3
    addi r6, r25, 0x738
    li r3, 0x0
    li r5, 0x0
    bl fn_806CA040
    lwz r3, lbl_80860898@l(r27)
    li r0, 0x0
    stw r0, 0x734(r3)
    stw r0, 0x730(r3)
lbl_fn_806BC4C0_00001BC4:
    mr r3, r28
lbl_fn_806BC4C0_00001BC8:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806BC860(void)
{
    nofralloc
    stwu r1, -0x570(r1)
    mflr r0
    stw r0, 0x574(r1)
    addi r11, r1, 0x570
    bl _savegpr_19
    mr r26, r4
    lis r31, lbl_807BE9D0@ha
    mr r25, r3
    mr r27, r5
    mr r28, r6
    mr r29, r7
    mr r30, r8
    mr r3, r26
    addi r31, r31, lbl_807BE9D0@l
    li r4, 0x1
    bl fn_806B1680
    cmpwi r3, 0x0
    bne lbl_fn_806BC860_00001C38
    li r0, 0x0
    b lbl_fn_806BC860_00001C90
lbl_fn_806BC860_00001C38:
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    mr r3, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BC860_00001C80
lbl_fn_806BC860_00001C58:
    lwz r0, 0x60(r3)
    cmpw r26, r0
    bne lbl_fn_806BC860_00001C74
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806BC860_00001C84
lbl_fn_806BC860_00001C74:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BC860_00001C58
lbl_fn_806BC860_00001C80:
    li r3, 0x0
lbl_fn_806BC860_00001C84:
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_806BC860_00001C90:
    cmpwi r0, 0x0
    beq lbl_fn_806BC860_00001DC8
    mr r5, r26
    addi r4, r31, 0xf18
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    lis r3, lbl_80860898@ha
    li r4, 0x0
    lwz r5, lbl_80860898@l(r3)
    lwz r0, 0x58(r5)
    mr r3, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BC860_00001CF8
    nop
lbl_fn_806BC860_00001CD0:
    lwz r0, 0x60(r3)
    cmpw r26, r0
    bne lbl_fn_806BC860_00001CEC
    mulli r0, r4, 0x30
    add r3, r5, r0
    addi r22, r3, 0x60
    b lbl_fn_806BC860_00001CFC
lbl_fn_806BC860_00001CEC:
    addi r3, r3, 0x30
    addi r4, r4, 0x1
    bdnz lbl_fn_806BC860_00001CD0
lbl_fn_806BC860_00001CF8:
    li r22, 0x0
lbl_fn_806BC860_00001CFC:
    cmpwi r29, 0x0
    mr r23, r30
    beq lbl_fn_806BC860_00001D24
    cmpwi r30, 0x0
    beq lbl_fn_806BC860_00001D24
    mr r4, r29
    addi r3, r1, 0xb0
    slwi r5, r30, 2
    bl fn_806A9CA0
    b lbl_fn_806BC860_00001D28
lbl_fn_806BC860_00001D24:
    li r23, 0x0
lbl_fn_806BC860_00001D28:
    addi r3, r1, 0x9c
    addi r4, r31, 0xf30
    bl strcpy
    lis r3, lbl_80860898@ha
    clrlslwi r0, r23, 26, 2
    lis r4, 0x5a00
    stw r4, 0xa0(r1)
    lwz r8, lbl_80860898@l(r3)
    mr r5, r25
    stb r25, 0xa4(r1)
    mr r6, r26
    addi r4, r31, 0xf38
    li r3, 0x40
    stb r0, 0xa5(r1)
    lhz r7, 0x6f8(r8)
    srawi r0, r7, 8
    rlwimi r0, r7, 8, 8, 23
    sth r0, 0xa6(r1)
    lwz r0, 0x6fc(r8)
    stw r0, 0xa8(r1)
    lwz r8, 0x7a8(r8)
    rlwinm r7, r8, 24, 8, 15
    extlwi r0, r8, 8, 8
    rlwimi r7, r8, 24, 24, 31
    rlwimi r0, r8, 8, 16, 23
    or r0, r7, r0
    rotlwi r0, r0, 16
    stw r0, 0xac(r1)
    crclr 6
    bl fn_806A76B0
    bl fn_806B0E30
    lbz r6, 0xa5(r1)
    clrlwi r3, r3, 24
    lbz r4, 0x16(r22)
    addi r5, r1, 0x9c
    addi r6, r6, 0x14
    li r7, 0x0
    bl fn_806CE750
    li r19, 0x0
    b lbl_fn_806BC860_00002024
lbl_fn_806BC860_00001DC8:
    lis r22, lbl_80860898@ha
    mr r4, r26
    lwz r3, lbl_80860898@l(r22)
    lwz r3, 0x0(r3)
    bl fn_806DB310
    cmpwi r3, 0x0
    beq lbl_fn_806BC860_00001EC0
    mr r5, r26
    addi r4, r31, 0xf68
    li r19, 0x0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x0
    beq lbl_fn_806BC860_00001E24
    cmpwi r30, 0x0
    beq lbl_fn_806BC860_00001E24
    mr r3, r29
    slwi r4, r30, 2
    addi r5, r1, 0x330
    li r6, 0x200
    bl fn_806A6CA0
    mr r19, r3
lbl_fn_806BC860_00001E24:
    lis r3, lbl_80860898@ha
    addi r23, r1, 0x330
    li r22, 0x0
    lwz r4, lbl_80860898@l(r3)
    stbx r22, r23, r19
    addi r3, r1, 0x130
    addi r5, r31, 0xf88
    addi r6, r31, 0xf90
    lwz r21, 0x0(r4)
    addi r8, r31, 0xf98
    li r4, 0x200
    li r7, 0x5a
    crclr 6
    bl fn_806809C0
    addi r24, r1, 0x130
    addi r19, r1, 0x131
    stbx r25, r24, r3
    add r19, r19, r3
    mr r3, r23
    stb r22, 0x0(r19)
    bl strlen
    mr r20, r3
    mr r3, r19
    mr r4, r23
    mr r5, r20
    bl fn_806A9CA0
    stbx r22, r19, r20
    mr r3, r21
    mr r4, r26
    mr r5, r24
    bl fn_806DB690
    mr r19, r3
    mr r5, r25
    mr r6, r26
    addi r4, r31, 0xf9c
    li r3, 0x40
    crclr 6
    bl fn_806A76B0
    b lbl_fn_806BC860_00002024
lbl_fn_806BC860_00001EC0:
    cmpwi r27, 0x0
    bne lbl_fn_806BC860_00001F2C
    lwz r5, lbl_80860898@l(r22)
    li r3, 0x0
    lwz r0, 0x58(r5)
    mr r4, r5
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_806BC860_00001F10
    nop
lbl_fn_806BC860_00001EE8:
    lwz r0, 0x60(r4)
    cmpw r26, r0
    bne lbl_fn_806BC860_00001F04
    mulli r0, r3, 0x30
    add r3, r5, r0
    addi r3, r3, 0x60
    b lbl_fn_806BC860_00001F14
lbl_fn_806BC860_00001F04:
    addi r4, r4, 0x30
    addi r3, r3, 0x1
    bdnz lbl_fn_806BC860_00001EE8
lbl_fn_806BC860_00001F10:
    li r3, 0x0
lbl_fn_806BC860_00001F14:
    lwz r27, 0x4(r3)
    addi r4, r31, 0xfd0
    lhz r28, 0xc(r3)
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
lbl_fn_806BC860_00001F2C:
    mr r5, r27
    mr r6, r28
    addi r4, r31, 0xff0
    li r3, 0x4
    crclr 6
    bl fn_806A76B0
    cmpwi r29, 0x0
    mr r20, r30
    beq lbl_fn_806BC860_00001F6C
    cmpwi r30, 0x0
    beq lbl_fn_806BC860_00001F6C
    mr r4, r29
    addi r3, r1, 0x1c
    slwi r5, r30, 2
    bl fn_806A9CA0
    b lbl_fn_806BC860_00001F70
lbl_fn_806BC860_00001F6C:
    li r20, 0x0
lbl_fn_806BC860_00001F70:
    addi r3, r1, 0x8
    addi r4, r31, 0xf30
    bl strcpy
    lis r24, lbl_80860898@ha
    clrlslwi r0, r20, 26, 2
    lis r3, 0x5a00
    stw r3, 0xc(r1)
    lwz r9, lbl_80860898@l(r24)
    mr r5, r25
    stb r25, 0x10(r1)
    mr r6, r27
    mr r7, r28
    addi r4, r31, 0x1014
    stb r0, 0x11(r1)
    li r3, 0x40
    lhz r8, 0x6f8(r9)
    srawi r0, r8, 8
    rlwimi r0, r8, 8, 8, 23
    sth r0, 0x12(r1)
    lwz r0, 0x6fc(r9)
    stw r0, 0x14(r1)
    lwz r9, 0x7a8(r9)
    rlwinm r8, r9, 24, 8, 15
    extlwi r0, r9, 8, 8
    rlwimi r8, r9, 24, 24, 31
    rlwimi r0, r9, 8, 16, 23
    or r0, r8, r0
    rotlwi r0, r0, 16
    stw r0, 0x18(r1)
    crclr 6
    bl fn_806A76B0
    lwz r20, lbl_80860898@l(r24)
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    bl fn_806EEDC0
    lbz r7, 0x11(r1)
    mr r4, r3
    lwz r3, 0x704(r20)
    mr r5, r28
    addi r6, r1, 0x8
    addi r7, r7, 0x14
    bl fn_806FFCA0
    cmpwi r3, 0x2
    mr r19, r3
lbl_fn_806BC860_00002024:
    cmplwi r25, 0x2
    beq lbl_fn_806BC860_00002044
    cmplwi r25, 0x6
    beq lbl_fn_806BC860_00002044
    addi r0, r25, 0xf8
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_806BC860_000020A0
lbl_fn_806BC860_00002044:
    lis r31, lbl_80860898@ha
    lwz r3, lbl_80860898@l(r31)
    stb r25, 0x808(r3)
    lwz r3, lbl_80860898@l(r31)
    sth r28, 0x80a(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r27, 0x80c(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r26, 0x890(r3)
    lwz r3, lbl_80860898@l(r31)
    stw r30, 0x894(r3)
    bl OSGetTime
    lwz r5, lbl_80860898@l(r31)
    cmpwi r29, 0x0
    stw r4, 0x89c(r5)
    stw r3, 0x898(r5)
    beq lbl_fn_806BC860_000020A0
    cmpwi r30, 0x0
    beq lbl_fn_806BC860_000020A0
    addi r3, r5, 0x810
    mr r4, r29
    slwi r5, r30, 2
    bl fn_806A9CA0
lbl_fn_806BC860_000020A0:
    addi r11, r1, 0x570
    mr r3, r19
    bl _restgpr_19
    lwz r0, 0x574(r1)
    mtlr r0
    addi r1, r1, 0x570
    blr
}
