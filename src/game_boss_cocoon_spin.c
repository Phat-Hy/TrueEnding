#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8006A950(void);
extern void fn_8006B404(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_8046C3FC(void);
extern void fn_8046D1EC(void);
extern void fn_8046F5CC(void);
extern void fn_8046F834(void);
extern void fn_80472FAC(void);
extern void fn_804730D4(void);
extern void fn_80473104(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806952C4(void);
extern void fn_80695AD0(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80755C18[];
extern u8 lbl_80766768[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FBE0[];

/* Small data declarations */

/* Function declarations */
void fn_80470604(void);
void fn_804707D4(void);
void fn_804708AC(void);
void fn_80470A54(void);
void fn_80470C20(void);
void fn_80470CC0(void);
void fn_80470FA4(void);
void fn_80471078(void);
void fn_804711B0(void);
void fn_8047123C(void);
void fn_804714A4(void);
void fn_804714B0(void);
void fn_804716B8(void);
void fn_80471FD0(void);

asm void fn_80470604(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r3
    addi r3, r1, 0x10
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    stw r28, 0x110(r1)
    mr r28, r5
    bl fn_8046D1EC
    addi r3, r1, 0x10
    bl fn_8006A950
    addi r3, r1, 0x10
    bl fn_8006B404
    addi r3, r1, 0x10
    bl fn_800DC6B4
    cmpwi r28, 0x0
    mr r5, r3
    li r29, 0x0
    beq lbl_fn_80470604_000000AC
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80470604_00000064
lbl_fn_80470604_00000060:
    lwz r4, 0x4(r4)
lbl_fn_80470604_00000064:
    cmplw r4, r0
    beq lbl_fn_80470604_0000007C
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80470604_00000060
lbl_fn_80470604_0000007C:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80470604_0000009C
    lwz r29, 0x8(r4)
    lbz r0, 0x5(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80470604_0000009C
    b lbl_fn_80470604_000000AC
lbl_fn_80470604_0000009C:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r29, r3
lbl_fn_80470604_000000AC:
    cmpwi r29, 0x0
    bne lbl_fn_80470604_000001A4
    lis r5, lbl_80755C18@ha
    li r3, 0x5c
    addi r5, r5, lbl_80755C18@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_80470604_000000E8
    addi r4, r1, 0x10
    bl fn_80472FAC
    mr r29, r3
lbl_fn_80470604_000000E8:
    mr r3, r31
    mr r4, r29
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80470604_00000188
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80470604_00000134
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80470604_00000134:
    addic. r3, r30, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    beq lbl_fn_80470604_0000014C
    stw r29, 0x0(r3)
lbl_fn_80470604_0000014C:
    lwz r3, 0x0(r28)
    li r4, 0x0
    lwz r5, 0xc(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r5)
    stw r5, 0x0(r28)
    stw r28, 0x4(r5)
    lwz r3, 0x3ecc(r31)
    stw r4, 0xc(r1)
    addi r0, r3, 0x1
    stw r0, 0x3ecc(r31)
    b lbl_fn_80470604_000001AC
    bl dtor_80084684
    b lbl_fn_80470604_000001AC
lbl_fn_80470604_00000188:
    mr r3, r29
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r29
    bl fn_8046F5CC
    b lbl_fn_80470604_000001AC
lbl_fn_80470604_000001A4:
    mr r3, r29
    bl fn_804730D4
lbl_fn_80470604_000001AC:
    lwz r31, 0x11c(r1)
    mr r3, r29
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_804707D4(void)
{
    nofralloc
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804707D4_000001E4
    li r7, 0x0
    b lbl_fn_804707D4_00000200
lbl_fn_804707D4_000001E4:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804707D4_000001FC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804707D4_000001FC:
    add r7, r6, r4
lbl_fn_804707D4_00000200:
    lwz r8, 0x18(r5)
    li r9, 0x0
    li r4, 0x1
    addi r6, r5, 0x20
    slw r0, r4, r9
    stw r7, 0x10(r5)
    and. r0, r8, r0
    stw r6, 0x1c(r5)
    beq lbl_fn_804707D4_00000228
    li r9, 0x3
lbl_fn_804707D4_00000228:
    li r0, 0x1
    slw r0, r4, r0
    and. r0, r8, r0
    beq lbl_fn_804707D4_0000023C
    addi r9, r9, 0x3
lbl_fn_804707D4_0000023C:
    li r0, 0x2
    slw r0, r4, r0
    and. r0, r8, r0
    beq lbl_fn_804707D4_00000250
    addi r9, r9, 0x3
lbl_fn_804707D4_00000250:
    li r4, 0x0
    mtctr r9
    cmpwi r9, 0x0
    blelr
lbl_fn_804707D4_00000260:
    lwz r0, 0x1c(r5)
    add r8, r0, r4
    lwz r6, 0x8(r8)
    cmpwi r6, 0x0
    bne lbl_fn_804707D4_0000027C
    li r0, 0x0
    b lbl_fn_804707D4_00000298
lbl_fn_804707D4_0000027C:
    lwz r7, 0x0(r3)
    add r0, r7, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804707D4_00000294
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804707D4_00000294:
    add r0, r7, r6
lbl_fn_804707D4_00000298:
    stw r0, 0x8(r8)
    addi r4, r4, 0xc
    bdnz lbl_fn_804707D4_00000260
    blr
}

asm void fn_804708AC(void)
{
    nofralloc
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804708AC_000002BC
    li r0, 0x0
    b lbl_fn_804708AC_000002D8
lbl_fn_804708AC_000002BC:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_000002D4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804708AC_000002D4:
    add r0, r6, r4
lbl_fn_804708AC_000002D8:
    stw r0, 0x14(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_804708AC_00000328
lbl_fn_804708AC_000002E8:
    lwz r4, 0x14(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_804708AC_00000300
    li r0, 0x0
    b lbl_fn_804708AC_0000031C
lbl_fn_804708AC_00000300:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_00000318
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804708AC_00000318:
    add r0, r8, r6
lbl_fn_804708AC_0000031C:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_804708AC_00000328:
    lwz r0, 0x10(r5)
    cmpw r9, r0
    blt lbl_fn_804708AC_000002E8
    lwz r4, 0x1c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804708AC_00000348
    li r0, 0x0
    b lbl_fn_804708AC_00000364
lbl_fn_804708AC_00000348:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_00000360
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804708AC_00000360:
    add r0, r6, r4
lbl_fn_804708AC_00000364:
    stw r0, 0x1c(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_804708AC_000003B4
lbl_fn_804708AC_00000374:
    lwz r4, 0x1c(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_804708AC_0000038C
    li r0, 0x0
    b lbl_fn_804708AC_000003A8
lbl_fn_804708AC_0000038C:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_000003A4
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804708AC_000003A4:
    add r0, r8, r6
lbl_fn_804708AC_000003A8:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_804708AC_000003B4:
    lwz r0, 0x18(r5)
    cmpw r9, r0
    blt lbl_fn_804708AC_00000374
    lwz r4, 0x24(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804708AC_000003D4
    li r0, 0x0
    b lbl_fn_804708AC_000003F0
lbl_fn_804708AC_000003D4:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_000003EC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804708AC_000003EC:
    add r0, r6, r4
lbl_fn_804708AC_000003F0:
    stw r0, 0x24(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_804708AC_00000440
lbl_fn_804708AC_00000400:
    lwz r4, 0x24(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_804708AC_00000418
    li r0, 0x0
    b lbl_fn_804708AC_00000434
lbl_fn_804708AC_00000418:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804708AC_00000430
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804708AC_00000430:
    add r0, r8, r6
lbl_fn_804708AC_00000434:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_804708AC_00000440:
    lwz r0, 0x20(r5)
    cmpw r9, r0
    blt lbl_fn_804708AC_00000400
    blr
}

asm void fn_80470A54(void)
{
    nofralloc
    lwz r8, 0x10(r5)
    lis r6, 0x6c6f
    lwz r7, 0x0(r4)
    addi r4, r6, 0x6373
    cmpwi r8, 0x0
    addi r0, r5, 0x1c
    subf r4, r4, r7
    stw r0, 0x18(r5)
    cntlzw r0, r4
    srwi r4, r0, 5
    bne lbl_fn_80470A54_00000484
    li r0, 0x0
    b lbl_fn_80470A54_0000048C
lbl_fn_80470A54_00000484:
    lwz r0, 0x0(r3)
    add r0, r0, r8
lbl_fn_80470A54_0000048C:
    cmpwi r4, 0x0
    stw r0, 0x10(r5)
    beq lbl_fn_80470A54_00000548
    li r11, 0x0
    li r9, 0x0
    b lbl_fn_80470A54_00000538
lbl_fn_80470A54_000004A4:
    lwz r0, 0x18(r5)
    lwzx r4, r9, r0
    add r8, r0, r9
    cmpwi r4, 0x0
    bne lbl_fn_80470A54_000004C0
    li r0, 0x0
    b lbl_fn_80470A54_000004C8
lbl_fn_80470A54_000004C0:
    lwz r0, 0x0(r3)
    add r0, r0, r4
lbl_fn_80470A54_000004C8:
    stw r0, 0x0(r8)
    lwz r4, 0x2c(r8)
    cmpwi r4, 0x0
    bne lbl_fn_80470A54_000004E0
    li r0, 0x0
    b lbl_fn_80470A54_000004E8
lbl_fn_80470A54_000004E0:
    lwz r0, 0x0(r3)
    add r0, r0, r4
lbl_fn_80470A54_000004E8:
    stw r0, 0x2c(r8)
    li r7, 0x0
    li r10, 0x0
    b lbl_fn_80470A54_00000524
lbl_fn_80470A54_000004F8:
    lwz r4, 0x2c(r8)
    lwzx r6, r4, r10
    cmpwi r6, 0x0
    bne lbl_fn_80470A54_00000510
    li r0, 0x0
    b lbl_fn_80470A54_00000518
lbl_fn_80470A54_00000510:
    lwz r0, 0x0(r3)
    add r0, r0, r6
lbl_fn_80470A54_00000518:
    stwx r0, r4, r10
    addi r10, r10, 0x10
    addi r7, r7, 0x1
lbl_fn_80470A54_00000524:
    lwz r0, 0x28(r8)
    cmpw r7, r0
    blt lbl_fn_80470A54_000004F8
    addi r9, r9, 0x3c
    addi r11, r11, 0x1
lbl_fn_80470A54_00000538:
    lwz r0, 0x14(r5)
    cmpw r11, r0
    blt lbl_fn_80470A54_000004A4
    blr
lbl_fn_80470A54_00000548:
    li r12, 0x0
    li r9, 0x0
    li r10, 0x0
    b lbl_fn_80470A54_0000060C
lbl_fn_80470A54_00000558:
    lwz r4, 0x0(r5)
    subis r0, r4, 0x6c6f
    cmplwi r0, 0x6373
    bne lbl_fn_80470A54_00000574
    lwz r0, 0x18(r5)
    add r8, r0, r9
    b lbl_fn_80470A54_0000057C
lbl_fn_80470A54_00000574:
    lwz r0, 0x18(r5)
    add r8, r0, r10
lbl_fn_80470A54_0000057C:
    lwz r4, 0x0(r8)
    cmpwi r4, 0x0
    bne lbl_fn_80470A54_00000590
    li r0, 0x0
    b lbl_fn_80470A54_00000598
lbl_fn_80470A54_00000590:
    lwz r0, 0x0(r3)
    add r0, r0, r4
lbl_fn_80470A54_00000598:
    stw r0, 0x0(r8)
    lwz r4, 0x2c(r8)
    cmpwi r4, 0x0
    bne lbl_fn_80470A54_000005B0
    li r0, 0x0
    b lbl_fn_80470A54_000005B8
lbl_fn_80470A54_000005B0:
    lwz r0, 0x0(r3)
    add r0, r0, r4
lbl_fn_80470A54_000005B8:
    stw r0, 0x2c(r8)
    li r7, 0x0
    li r11, 0x0
    b lbl_fn_80470A54_000005F4
lbl_fn_80470A54_000005C8:
    lwz r4, 0x2c(r8)
    lwzx r6, r4, r11
    cmpwi r6, 0x0
    bne lbl_fn_80470A54_000005E0
    li r0, 0x0
    b lbl_fn_80470A54_000005E8
lbl_fn_80470A54_000005E0:
    lwz r0, 0x0(r3)
    add r0, r0, r6
lbl_fn_80470A54_000005E8:
    stwx r0, r4, r11
    addi r11, r11, 0x10
    addi r7, r7, 0x1
lbl_fn_80470A54_000005F4:
    lwz r0, 0x28(r8)
    cmpw r7, r0
    blt lbl_fn_80470A54_000005C8
    addi r9, r9, 0x3c
    addi r10, r10, 0x30
    addi r12, r12, 0x1
lbl_fn_80470A54_0000060C:
    lwz r0, 0x14(r5)
    cmpw r12, r0
    blt lbl_fn_80470A54_00000558
    blr
}

asm void fn_80470C20(void)
{
    nofralloc
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470C20_00000630
    li r0, 0x0
    b lbl_fn_80470C20_0000064C
lbl_fn_80470C20_00000630:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470C20_00000648
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470C20_00000648:
    add r0, r6, r4
lbl_fn_80470C20_0000064C:
    lwz r4, 0x1c(r5)
    stw r0, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470C20_00000664
    li r0, 0x0
    b lbl_fn_80470C20_00000680
lbl_fn_80470C20_00000664:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470C20_0000067C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470C20_0000067C:
    add r0, r6, r4
lbl_fn_80470C20_00000680:
    lwz r4, 0x28(r5)
    stw r0, 0x1c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470C20_00000698
    li r0, 0x0
    b lbl_fn_80470C20_000006B4
lbl_fn_80470C20_00000698:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470C20_000006B0
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470C20_000006B0:
    add r0, r3, r4
lbl_fn_80470C20_000006B4:
    stw r0, 0x28(r5)
    blr
}

asm void fn_80470CC0(void)
{
    nofralloc
    lwz r4, 0x2c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_000006D0
    li r0, 0x0
    b lbl_fn_80470CC0_000006EC
lbl_fn_80470CC0_000006D0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_000006E8
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_000006E8:
    add r0, r6, r4
lbl_fn_80470CC0_000006EC:
    stw r0, 0x2c(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_80470CC0_0000073C
lbl_fn_80470CC0_000006FC:
    lwz r4, 0x2c(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_80470CC0_00000714
    li r0, 0x0
    b lbl_fn_80470CC0_00000730
lbl_fn_80470CC0_00000714:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_0000072C
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_80470CC0_0000072C:
    add r0, r8, r6
lbl_fn_80470CC0_00000730:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_80470CC0_0000073C:
    lwz r0, 0x28(r5)
    cmpw r9, r0
    blt lbl_fn_80470CC0_000006FC
    lwz r4, 0x34(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_0000075C
    li r0, 0x0
    b lbl_fn_80470CC0_00000778
lbl_fn_80470CC0_0000075C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_00000774
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_00000774:
    add r0, r6, r4
lbl_fn_80470CC0_00000778:
    cmpwi r0, 0x0
    stw r0, 0x34(r5)
    beq lbl_fn_80470CC0_000007DC
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_80470CC0_000007D0
lbl_fn_80470CC0_00000790:
    lwz r4, 0x34(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_80470CC0_000007A8
    li r0, 0x0
    b lbl_fn_80470CC0_000007C4
lbl_fn_80470CC0_000007A8:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_000007C0
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_80470CC0_000007C0:
    add r0, r8, r6
lbl_fn_80470CC0_000007C4:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_80470CC0_000007D0:
    lwz r0, 0x30(r5)
    cmpw r9, r0
    blt lbl_fn_80470CC0_00000790
lbl_fn_80470CC0_000007DC:
    mr r6, r5
    li r7, 0x0
    b lbl_fn_80470CC0_00000810
lbl_fn_80470CC0_000007E8:
    lwz r4, 0x50(r6)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_000007FC
    li r0, 0x0
    b lbl_fn_80470CC0_00000804
lbl_fn_80470CC0_000007FC:
    lwz r0, 0x0(r3)
    add r0, r0, r4
lbl_fn_80470CC0_00000804:
    stw r0, 0x50(r6)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
lbl_fn_80470CC0_00000810:
    lwz r0, 0x30(r5)
    cmpw r7, r0
    blt lbl_fn_80470CC0_000007E8
    lwz r4, 0x38(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_00000830
    li r0, 0x0
    b lbl_fn_80470CC0_0000084C
lbl_fn_80470CC0_00000830:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_00000848
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_00000848:
    add r0, r6, r4
lbl_fn_80470CC0_0000084C:
    lwz r4, 0x40(r5)
    stw r0, 0x38(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_00000864
    li r0, 0x0
    b lbl_fn_80470CC0_00000880
lbl_fn_80470CC0_00000864:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_0000087C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_0000087C:
    add r0, r6, r4
lbl_fn_80470CC0_00000880:
    stw r0, 0x40(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_80470CC0_000008D0
lbl_fn_80470CC0_00000890:
    lwz r4, 0x40(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_80470CC0_000008A8
    li r0, 0x0
    b lbl_fn_80470CC0_000008C4
lbl_fn_80470CC0_000008A8:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_000008C0
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_80470CC0_000008C0:
    add r0, r8, r6
lbl_fn_80470CC0_000008C4:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_80470CC0_000008D0:
    lwz r0, 0x3c(r5)
    cmpw r9, r0
    blt lbl_fn_80470CC0_00000890
    lwz r4, 0x48(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_000008F0
    li r0, 0x0
    b lbl_fn_80470CC0_0000090C
lbl_fn_80470CC0_000008F0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_00000908
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_00000908:
    add r0, r6, r4
lbl_fn_80470CC0_0000090C:
    lwz r4, 0x4c(r5)
    stw r0, 0x48(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470CC0_00000924
    li r0, 0x0
    b lbl_fn_80470CC0_00000940
lbl_fn_80470CC0_00000924:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_0000093C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470CC0_0000093C:
    add r0, r6, r4
lbl_fn_80470CC0_00000940:
    stw r0, 0x4c(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_80470CC0_00000990
lbl_fn_80470CC0_00000950:
    lwz r4, 0x48(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_80470CC0_00000968
    li r0, 0x0
    b lbl_fn_80470CC0_00000984
lbl_fn_80470CC0_00000968:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_80470CC0_00000980
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_80470CC0_00000980:
    add r0, r8, r6
lbl_fn_80470CC0_00000984:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_80470CC0_00000990:
    lwz r0, 0x44(r5)
    cmpw r9, r0
    blt lbl_fn_80470CC0_00000950
    blr
}

asm void fn_80470FA4(void)
{
    nofralloc
    lwz r4, 0x18(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470FA4_000009B4
    li r0, 0x0
    b lbl_fn_80470FA4_000009D0
lbl_fn_80470FA4_000009B4:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470FA4_000009CC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470FA4_000009CC:
    add r0, r6, r4
lbl_fn_80470FA4_000009D0:
    lwz r4, 0x20(r5)
    stw r0, 0x18(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470FA4_000009E8
    li r0, 0x0
    b lbl_fn_80470FA4_00000A04
lbl_fn_80470FA4_000009E8:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470FA4_00000A00
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470FA4_00000A00:
    add r0, r6, r4
lbl_fn_80470FA4_00000A04:
    lwz r4, 0x28(r5)
    stw r0, 0x20(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470FA4_00000A1C
    li r0, 0x0
    b lbl_fn_80470FA4_00000A38
lbl_fn_80470FA4_00000A1C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470FA4_00000A34
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470FA4_00000A34:
    add r0, r6, r4
lbl_fn_80470FA4_00000A38:
    lwz r4, 0x30(r5)
    stw r0, 0x28(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80470FA4_00000A50
    li r0, 0x0
    b lbl_fn_80470FA4_00000A6C
lbl_fn_80470FA4_00000A50:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80470FA4_00000A68
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80470FA4_00000A68:
    add r0, r3, r4
lbl_fn_80470FA4_00000A6C:
    stw r0, 0x30(r5)
    blr
}

asm void fn_80471078(void)
{
    nofralloc
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80471078_00000A88
    li r0, 0x0
    b lbl_fn_80471078_00000AA4
lbl_fn_80471078_00000A88:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80471078_00000AA0
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80471078_00000AA0:
    add r0, r6, r4
lbl_fn_80471078_00000AA4:
    lwz r4, 0x18(r5)
    stw r0, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80471078_00000ABC
    li r0, 0x0
    b lbl_fn_80471078_00000AD8
lbl_fn_80471078_00000ABC:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80471078_00000AD4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80471078_00000AD4:
    add r0, r6, r4
lbl_fn_80471078_00000AD8:
    lwz r4, 0x50(r5)
    stw r0, 0x18(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80471078_00000AF0
    li r0, 0x0
    b lbl_fn_80471078_00000B0C
lbl_fn_80471078_00000AF0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80471078_00000B08
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80471078_00000B08:
    add r0, r6, r4
lbl_fn_80471078_00000B0C:
    stw r0, 0x50(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_80471078_00000B5C
lbl_fn_80471078_00000B1C:
    lwz r4, 0x50(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_80471078_00000B34
    li r0, 0x0
    b lbl_fn_80471078_00000B50
lbl_fn_80471078_00000B34:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_80471078_00000B4C
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_80471078_00000B4C:
    add r0, r8, r6
lbl_fn_80471078_00000B50:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_80471078_00000B5C:
    lwz r0, 0x4c(r5)
    cmpw r9, r0
    blt lbl_fn_80471078_00000B1C
    lwz r0, 0x4(r5)
    cmplwi r0, 0x2
    bltlr
    lwz r4, 0x54(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80471078_00000B88
    li r0, 0x0
    b lbl_fn_80471078_00000BA4
lbl_fn_80471078_00000B88:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_80471078_00000BA0
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_80471078_00000BA0:
    add r0, r3, r4
lbl_fn_80471078_00000BA4:
    stw r0, 0x54(r5)
    blr
}

asm void fn_804711B0(void)
{
    nofralloc
    addi r6, r5, 0x14
    li r8, 0x0
    b lbl_fn_804711B0_00000C28
lbl_fn_804711B0_00000BB8:
    lwz r4, 0x4(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804711B0_00000BCC
    li r0, 0x0
    b lbl_fn_804711B0_00000BE8
lbl_fn_804711B0_00000BCC:
    lwz r7, 0x0(r3)
    add r0, r7, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804711B0_00000BE4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804711B0_00000BE4:
    add r0, r7, r4
lbl_fn_804711B0_00000BE8:
    stw r0, 0x4(r6)
    lwz r4, 0x10(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804711B0_00000C00
    li r0, 0x0
    b lbl_fn_804711B0_00000C1C
lbl_fn_804711B0_00000C00:
    lwz r7, 0x0(r3)
    add r0, r7, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804711B0_00000C18
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804711B0_00000C18:
    add r0, r7, r4
lbl_fn_804711B0_00000C1C:
    stw r0, 0x10(r6)
    addi r6, r6, 0x14
    addi r8, r8, 0x1
lbl_fn_804711B0_00000C28:
    lwz r0, 0x10(r5)
    cmpw r8, r0
    blt lbl_fn_804711B0_00000BB8
    blr
}

asm void fn_8047123C(void)
{
    nofralloc
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_8047123C_00000C4C
    li r0, 0x0
    b lbl_fn_8047123C_00000C68
lbl_fn_8047123C_00000C4C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000C64
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_8047123C_00000C64:
    add r0, r6, r4
lbl_fn_8047123C_00000C68:
    lwz r4, 0xe8(r5)
    stw r0, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_8047123C_00000C80
    li r0, 0x0
    b lbl_fn_8047123C_00000C9C
lbl_fn_8047123C_00000C80:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000C98
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_8047123C_00000C98:
    add r0, r6, r4
lbl_fn_8047123C_00000C9C:
    stw r0, 0xe8(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8047123C_00000CEC
lbl_fn_8047123C_00000CAC:
    lwz r4, 0xe8(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_8047123C_00000CC4
    li r0, 0x0
    b lbl_fn_8047123C_00000CE0
lbl_fn_8047123C_00000CC4:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000CDC
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_8047123C_00000CDC:
    add r0, r8, r6
lbl_fn_8047123C_00000CE0:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_8047123C_00000CEC:
    lwz r0, 0xe4(r5)
    cmpw r9, r0
    blt lbl_fn_8047123C_00000CAC
    lwz r4, 0xf0(r5)
    cmpwi r4, 0x0
    bne lbl_fn_8047123C_00000D0C
    li r0, 0x0
    b lbl_fn_8047123C_00000D28
lbl_fn_8047123C_00000D0C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000D24
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_8047123C_00000D24:
    add r0, r6, r4
lbl_fn_8047123C_00000D28:
    stw r0, 0xf0(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8047123C_00000D78
lbl_fn_8047123C_00000D38:
    lwz r4, 0xf0(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_8047123C_00000D50
    li r0, 0x0
    b lbl_fn_8047123C_00000D6C
lbl_fn_8047123C_00000D50:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000D68
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_8047123C_00000D68:
    add r0, r8, r6
lbl_fn_8047123C_00000D6C:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_8047123C_00000D78:
    lwz r0, 0xec(r5)
    cmpw r9, r0
    blt lbl_fn_8047123C_00000D38
    lwz r4, 0xf8(r5)
    cmpwi r4, 0x0
    bne lbl_fn_8047123C_00000D98
    li r0, 0x0
    b lbl_fn_8047123C_00000DB4
lbl_fn_8047123C_00000D98:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000DB0
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_8047123C_00000DB0:
    add r0, r6, r4
lbl_fn_8047123C_00000DB4:
    stw r0, 0xf8(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8047123C_00000E04
lbl_fn_8047123C_00000DC4:
    lwz r4, 0xf8(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_8047123C_00000DDC
    li r0, 0x0
    b lbl_fn_8047123C_00000DF8
lbl_fn_8047123C_00000DDC:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000DF4
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_8047123C_00000DF4:
    add r0, r8, r6
lbl_fn_8047123C_00000DF8:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_8047123C_00000E04:
    lwz r0, 0xf4(r5)
    cmpw r9, r0
    blt lbl_fn_8047123C_00000DC4
    lwz r4, 0xa4c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_8047123C_00000E24
    li r0, 0x0
    b lbl_fn_8047123C_00000E40
lbl_fn_8047123C_00000E24:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000E3C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_8047123C_00000E3C:
    add r0, r6, r4
lbl_fn_8047123C_00000E40:
    stw r0, 0xa4c(r5)
    li r9, 0x0
    li r7, 0x0
    b lbl_fn_8047123C_00000E90
lbl_fn_8047123C_00000E50:
    lwz r4, 0xa4c(r5)
    lwzx r6, r4, r7
    cmpwi r6, 0x0
    bne lbl_fn_8047123C_00000E68
    li r0, 0x0
    b lbl_fn_8047123C_00000E84
lbl_fn_8047123C_00000E68:
    lwz r8, 0x0(r3)
    add r0, r8, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_8047123C_00000E80
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_8047123C_00000E80:
    add r0, r8, r6
lbl_fn_8047123C_00000E84:
    stwx r0, r4, r7
    addi r7, r7, 0x4
    addi r9, r9, 0x1
lbl_fn_8047123C_00000E90:
    lwz r0, 0xa48(r5)
    cmpw r9, r0
    blt lbl_fn_8047123C_00000E50
    blr
}

asm void fn_804714A4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_804714B0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r14, 0x48(r1)
    mr r15, r3
    mr r14, r4
    mr r16, r6
    mr r17, r7
    stw r4, 0x0(r3)
    lwz r3, 0x0(r4)
    subis r0, r3, 0x6669
    cmplwi r0, 0x7864
    beq lbl_fn_804714B0_000010A0
    lis r23, lbl_8078FBE0@ha
    lis r22, lbl_80766768@ha
    lis r24, lbl_80775B60@ha
    lis r30, lbl_80775B98@ha
    lis r31, lbl_80775B30@ha
    add r20, r4, r5
    addi r19, r4, 0x10
    addi r23, r23, lbl_8078FBE0@l
    addi r22, r22, lbl_80766768@l
    addi r24, r24, lbl_80775B60@l
    addi r28, r1, 0x8
    addi r30, r30, lbl_80775B98@l
    addi r31, r31, lbl_80775B30@l
    addi r21, r1, 0x18
    li r25, 0x0
    lis r26, lbl_80775BC8@ha
    li r29, 0x1
    b lbl_fn_804714B0_0000108C
lbl_fn_804714B0_00000F28:
    clrlwi. r0, r19, 28
    beq lbl_fn_804714B0_00000F3C
    subfic r0, r19, 0x10
    clrlwi r0, r0, 28
    add r19, r19, r0
lbl_fn_804714B0_00000F3C:
    mr r3, r15
    mr r4, r19
    mr r5, r19
    bl fn_804716B8
    lwz r0, 0x0(r16)
    mr r18, r3
    cmpwi r0, 0x0
    bne lbl_fn_804714B0_00000F78
    lwz r4, 0x0(r22)
    lwz r3, 0x4(r22)
    lwz r0, 0x8(r22)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
    b lbl_fn_804714B0_00000F90
lbl_fn_804714B0_00000F78:
    lwz r4, 0x0(r23)
    lwz r3, 0x4(r23)
    lwz r0, 0x8(r23)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r0, 0x38(r1)
lbl_fn_804714B0_00000F90:
    lwz r5, 0x30(r1)
    addi r3, r1, 0x24
    lwz r4, 0x34(r1)
    lwz r0, 0x38(r1)
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80695AD0
    cmpwi r3, 0x0
    beq lbl_fn_804714B0_00001088
    lwz r0, 0x0(r16)
    cmpwi r0, 0x0
    bne lbl_fn_804714B0_00001068
    stw r24, 0x18(r1)
    addi r3, r26, lbl_80775BC8@l
    stb r25, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r27, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r28, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_804714B0_00001014
    stw r29, 0x4(r3)
    stw r29, 0x8(r3)
    stw r30, 0x0(r3)
    stw r27, 0xc(r3)
lbl_fn_804714B0_00001014:
    cmpwi r25, 0x0
    stw r3, 0x20(r1)
    stw r25, 0x10(r1)
    beq lbl_fn_804714B0_0000102C
    li r3, 0x0
    bl fn_80084C24
lbl_fn_804714B0_0000102C:
    lwz r3, 0x1c(r1)
    addi r4, r26, lbl_80775BC8@l
    bl strcpy
    stw r31, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r21, 0x0
    beq lbl_fn_804714B0_00001068
    addic. r3, r21, 0x4
    beq lbl_fn_804714B0_00001068
    beq lbl_fn_804714B0_00001068
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_804714B0_00001068
    bl fn_806952C4
lbl_fn_804714B0_00001068:
    lwz r3, 0x0(r16)
    mr r4, r17
    mr r5, r19
    mr r6, r19
    lwz r12, 0x4(r3)
    addi r3, r16, 0x4
    mtctr r12
    bctrl
lbl_fn_804714B0_00001088:
    mr r19, r18
lbl_fn_804714B0_0000108C:
    cmplw r19, r20
    blt lbl_fn_804714B0_00000F28
    lis r3, 0x6669
    addi r0, r3, 0x7864
    stw r0, 0x0(r14)
lbl_fn_804714B0_000010A0:
    lmw r14, 0x48(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_804716B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, 0x6d74
    stw r0, 0x14(r1)
    addi r6, r6, 0x7278
    lwz r0, 0x0(r4)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpw r0, r6
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_804716B8_00001380
    bge lbl_fn_804716B8_000011C8
    lis r8, 0x6c69
    addi r6, r8, 0x7461
    cmpw r0, r6
    beq lbl_fn_804716B8_000016A8
    bge lbl_fn_804716B8_0000115C
    lis r6, 0x6361
    addi r6, r6, 0x6d72
    cmpw r0, r6
    beq lbl_fn_804716B8_000015B8
    bge lbl_fn_804716B8_00001134
    lis r6, 0x616e
    addi r7, r6, 0x6d6e
    cmpw r0, r7
    beq lbl_fn_804716B8_000015B0
    bge lbl_fn_804716B8_000019AC
    addi r4, r6, 0x696d
    cmpw r0, r4
    beq lbl_fn_804716B8_00001520
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001134:
    lis r6, 0x646c
    addi r6, r6, 0x7374
    cmpw r0, r6
    beq lbl_fn_804716B8_000014E8
    bge lbl_fn_804716B8_000019AC
    lis r6, 0x6461
    addi r6, r6, 0x7461
    cmpw r0, r6
    beq lbl_fn_804716B8_000014A0
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_0000115C:
    lis r6, 0x6d61
    addi r6, r6, 0x7472
    cmpw r0, r6
    beq lbl_fn_804716B8_000014A8
    bge lbl_fn_804716B8_000011A0
    lis r6, 0x6c6f
    addi r7, r6, 0x6373
    cmpw r0, r7
    bge lbl_fn_804716B8_00001190
    addi r4, r8, 0x7465
    cmpw r0, r4
    beq lbl_fn_804716B8_000017B0
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001190:
    addi r6, r6, 0x6375
    cmpw r0, r6
    bge lbl_fn_804716B8_000019AC
    b lbl_fn_804716B8_000018A4
lbl_fn_804716B8_000011A0:
    lis r6, 0x6d6f
    addi r6, r6, 0x646c
    cmpw r0, r6
    beq lbl_fn_804716B8_000012A0
    bge lbl_fn_804716B8_000019AC
    lis r6, 0x6d65
    addi r6, r6, 0x7368
    cmpw r0, r6
    beq lbl_fn_804716B8_00001388
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000011C8:
    lis r6, 0x7363
    addi r6, r6, 0x656e
    cmpw r0, r6
    beq lbl_fn_804716B8_00001830
    bge lbl_fn_804716B8_0000123C
    lis r6, 0x6f63
    addi r7, r6, 0x6374
    cmpw r0, r7
    beq lbl_fn_804716B8_000019A8
    bge lbl_fn_804716B8_00001214
    addi r4, r6, 0x636c
    cmpw r0, r4
    beq lbl_fn_804716B8_0000193C
    bge lbl_fn_804716B8_000019AC
    lis r4, 0x6e6f
    addi r4, r4, 0x6465
    cmpw r0, r4
    beq lbl_fn_804716B8_00001400
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001214:
    lis r4, 0x7072
    addi r4, r4, 0x696d
    cmpw r0, r4
    beq lbl_fn_804716B8_000013C8
    bge lbl_fn_804716B8_000019AC
    lis r4, 0x6f6d
    addi r4, r4, 0x646c
    cmpw r0, r4
    beq lbl_fn_804716B8_000018AC
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_0000123C:
    lis r4, 0x7375
    addi r4, r4, 0x626d
    cmpw r0, r4
    beq lbl_fn_804716B8_00001390
    bge lbl_fn_804716B8_00001278
    lis r4, 0x7374
    addi r4, r4, 0x726d
    cmpw r0, r4
    beq lbl_fn_804716B8_000012A8
    bge lbl_fn_804716B8_000019AC
    lis r4, 0x7364
    addi r4, r4, 0x7363
    cmpw r0, r4
    beq lbl_fn_804716B8_00001348
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001278:
    lis r4, 0x746d
    addi r4, r4, 0x6170
    cmpw r0, r4
    beq lbl_fn_804716B8_000014B0
    bge lbl_fn_804716B8_000019AC
    lis r4, 0x7465
    addi r4, r4, 0x7874
    cmpw r0, r4
    beq lbl_fn_804716B8_00001838
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000012A0:
    bl fn_80470CC0
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000012A8:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000012BC
    li r0, 0x0
    b lbl_fn_804716B8_000012D8
lbl_fn_804716B8_000012BC:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000012D4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000012D4:
    add r0, r6, r4
lbl_fn_804716B8_000012D8:
    lwz r4, 0x14(r5)
    stw r0, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000012F0
    li r0, 0x0
    b lbl_fn_804716B8_0000130C
lbl_fn_804716B8_000012F0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001308
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001308:
    add r0, r6, r4
lbl_fn_804716B8_0000130C:
    lwz r4, 0x1c(r5)
    stw r0, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001324
    li r0, 0x0
    b lbl_fn_804716B8_00001340
lbl_fn_804716B8_00001324:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000133C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000133C:
    add r0, r3, r4
lbl_fn_804716B8_00001340:
    stw r0, 0x1c(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001348:
    lwz r4, 0x1c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_0000135C
    li r0, 0x0
    b lbl_fn_804716B8_00001378
lbl_fn_804716B8_0000135C:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001374
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001374:
    add r0, r3, r4
lbl_fn_804716B8_00001378:
    stw r0, 0x1c(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001380:
    bl fn_80470FA4
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001388:
    bl fn_80471078
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001390:
    lwz r4, 0x38(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000013A4
    li r0, 0x0
    b lbl_fn_804716B8_000013C0
lbl_fn_804716B8_000013A4:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000013BC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000013BC:
    add r0, r3, r4
lbl_fn_804716B8_000013C0:
    stw r0, 0x38(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000013C8:
    lwz r4, 0x18(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000013DC
    li r0, 0x0
    b lbl_fn_804716B8_000013F8
lbl_fn_804716B8_000013DC:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000013F4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000013F4:
    add r0, r3, r4
lbl_fn_804716B8_000013F8:
    stw r0, 0x18(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001400:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001414
    li r0, 0x0
    b lbl_fn_804716B8_00001430
lbl_fn_804716B8_00001414:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000142C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000142C:
    add r0, r6, r4
lbl_fn_804716B8_00001430:
    lwz r4, 0x74(r5)
    stw r0, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001448
    li r0, 0x0
    b lbl_fn_804716B8_00001464
lbl_fn_804716B8_00001448:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001460
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001460:
    add r0, r6, r4
lbl_fn_804716B8_00001464:
    lwz r4, 0x78(r5)
    stw r0, 0x74(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_0000147C
    li r0, 0x0
    b lbl_fn_804716B8_00001498
lbl_fn_804716B8_0000147C:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001494
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001494:
    add r0, r3, r4
lbl_fn_804716B8_00001498:
    stw r0, 0x78(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000014A0:
    bl fn_804711B0
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000014A8:
    bl fn_8047123C
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000014B0:
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000014C4
    li r0, 0x0
    b lbl_fn_804716B8_000014E0
lbl_fn_804716B8_000014C4:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000014DC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000014DC:
    add r0, r3, r4
lbl_fn_804716B8_000014E0:
    stw r0, 0x14(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000014E8:
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000014FC
    li r0, 0x0
    b lbl_fn_804716B8_00001518
lbl_fn_804716B8_000014FC:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001514
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001514:
    add r0, r3, r4
lbl_fn_804716B8_00001518:
    stw r0, 0x14(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001520:
    lwz r4, 0x18(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001534
    li r0, 0x0
    b lbl_fn_804716B8_00001550
lbl_fn_804716B8_00001534:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000154C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000154C:
    add r0, r6, r4
lbl_fn_804716B8_00001550:
    stw r0, 0x18(r5)
    li r7, 0x0
    li r8, 0x0
    b lbl_fn_804716B8_000015A0
lbl_fn_804716B8_00001560:
    lwz r4, 0x18(r5)
    lwzx r6, r4, r8
    cmpwi r6, 0x0
    bne lbl_fn_804716B8_00001578
    li r0, 0x0
    b lbl_fn_804716B8_00001594
lbl_fn_804716B8_00001578:
    lwz r9, 0x0(r3)
    add r0, r9, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001590
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804716B8_00001590:
    add r0, r9, r6
lbl_fn_804716B8_00001594:
    stwx r0, r4, r8
    addi r8, r8, 0x4
    addi r7, r7, 0x1
lbl_fn_804716B8_000015A0:
    lwz r0, 0x14(r5)
    cmpw r7, r0
    blt lbl_fn_804716B8_00001560
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000015B0:
    bl fn_804707D4
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000015B8:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000015CC
    li r4, 0x0
    b lbl_fn_804716B8_000015E8
lbl_fn_804716B8_000015CC:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000015E4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000015E4:
    add r4, r6, r4
lbl_fn_804716B8_000015E8:
    li r0, 0x5
    stw r4, 0x10(r5)
    addi r6, r5, 0x20
    li r5, 0x0
    mtctr r0
lbl_fn_804716B8_000015FC:
    lwz r4, 0x8(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001610
    li r0, 0x0
    b lbl_fn_804716B8_0000162C
lbl_fn_804716B8_00001610:
    lwz r7, 0x0(r3)
    add r0, r7, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001628
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001628:
    add r0, r7, r4
lbl_fn_804716B8_0000162C:
    stw r0, 0x8(r6)
    lwz r4, 0x14(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001644
    li r0, 0x0
    b lbl_fn_804716B8_00001660
lbl_fn_804716B8_00001644:
    lwz r7, 0x0(r3)
    add r0, r7, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000165C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000165C:
    add r0, r7, r4
lbl_fn_804716B8_00001660:
    stw r0, 0x14(r6)
    lwz r4, 0x20(r6)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001678
    li r0, 0x0
    b lbl_fn_804716B8_00001694
lbl_fn_804716B8_00001678:
    lwz r7, 0x0(r3)
    add r0, r7, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001690
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001690:
    add r0, r7, r4
lbl_fn_804716B8_00001694:
    stw r0, 0x20(r6)
    addi r6, r6, 0x24
    addi r5, r5, 0x2
    bdnz lbl_fn_804716B8_000015FC
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000016A8:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000016BC
    li r0, 0x0
    b lbl_fn_804716B8_000016D8
lbl_fn_804716B8_000016BC:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000016D4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000016D4:
    add r0, r6, r4
lbl_fn_804716B8_000016D8:
    stw r0, 0x10(r5)
    lwz r4, 0x20(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000016F0
    li r0, 0x0
    b lbl_fn_804716B8_0000170C
lbl_fn_804716B8_000016F0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001708
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001708:
    add r0, r6, r4
lbl_fn_804716B8_0000170C:
    stw r0, 0x20(r5)
    lwz r4, 0x2c(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001724
    li r0, 0x0
    b lbl_fn_804716B8_00001740
lbl_fn_804716B8_00001724:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000173C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000173C:
    add r0, r6, r4
lbl_fn_804716B8_00001740:
    stw r0, 0x2c(r5)
    lwz r4, 0x38(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001758
    li r0, 0x0
    b lbl_fn_804716B8_00001774
lbl_fn_804716B8_00001758:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001770
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001770:
    add r0, r6, r4
lbl_fn_804716B8_00001774:
    stw r0, 0x38(r5)
    lwz r4, 0x44(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_0000178C
    li r0, 0x0
    b lbl_fn_804716B8_000017A8
lbl_fn_804716B8_0000178C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000017A4
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000017A4:
    add r0, r6, r4
lbl_fn_804716B8_000017A8:
    stw r0, 0x44(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000017B0:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000017C4
    li r4, 0x0
    b lbl_fn_804716B8_000017E0
lbl_fn_804716B8_000017C4:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000017DC
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000017DC:
    add r4, r6, r4
lbl_fn_804716B8_000017E0:
    li r0, 0x11
    stw r4, 0x10(r5)
    addi r5, r5, 0x28
    mtctr r0
lbl_fn_804716B8_000017F0:
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001804
    li r0, 0x0
    b lbl_fn_804716B8_00001820
lbl_fn_804716B8_00001804:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000181C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000181C:
    add r0, r6, r4
lbl_fn_804716B8_00001820:
    stw r0, 0x8(r5)
    addi r5, r5, 0xc
    bdnz lbl_fn_804716B8_000017F0
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001830:
    bl fn_804708AC
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_00001838:
    lwz r4, 0x20(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_0000184C
    li r0, 0x0
    b lbl_fn_804716B8_00001868
lbl_fn_804716B8_0000184C:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001864
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001864:
    add r0, r6, r4
lbl_fn_804716B8_00001868:
    lwz r4, 0x24(r5)
    stw r0, 0x20(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001880
    li r0, 0x0
    b lbl_fn_804716B8_0000189C
lbl_fn_804716B8_00001880:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001898
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001898:
    add r0, r3, r4
lbl_fn_804716B8_0000189C:
    stw r0, 0x24(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000018A4:
    bl fn_80470A54
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000018AC:
    lwz r4, 0x14(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_000018C0
    li r0, 0x0
    b lbl_fn_804716B8_000018DC
lbl_fn_804716B8_000018C0:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_000018D8
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_000018D8:
    add r0, r6, r4
lbl_fn_804716B8_000018DC:
    stw r0, 0x14(r5)
    li r7, 0x0
    li r8, 0x0
    b lbl_fn_804716B8_0000192C
lbl_fn_804716B8_000018EC:
    lwz r4, 0x14(r5)
    lwzx r6, r4, r8
    cmpwi r6, 0x0
    bne lbl_fn_804716B8_00001904
    li r0, 0x0
    b lbl_fn_804716B8_00001920
lbl_fn_804716B8_00001904:
    lwz r9, 0x0(r3)
    add r0, r9, r6
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000191C
    subfic r0, r0, 0x4
    add r6, r6, r0
lbl_fn_804716B8_0000191C:
    add r0, r9, r6
lbl_fn_804716B8_00001920:
    stwx r0, r4, r8
    addi r8, r8, 0x4
    addi r7, r7, 0x1
lbl_fn_804716B8_0000192C:
    lwz r0, 0x10(r5)
    cmpw r7, r0
    blt lbl_fn_804716B8_000018EC
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_0000193C:
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001950
    li r0, 0x0
    b lbl_fn_804716B8_0000196C
lbl_fn_804716B8_00001950:
    lwz r6, 0x0(r3)
    add r0, r6, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_00001968
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_00001968:
    add r0, r6, r4
lbl_fn_804716B8_0000196C:
    lwz r4, 0x20(r5)
    stw r0, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_804716B8_00001984
    li r0, 0x0
    b lbl_fn_804716B8_000019A0
lbl_fn_804716B8_00001984:
    lwz r3, 0x0(r3)
    add r0, r3, r4
    clrlwi. r0, r0, 30
    beq lbl_fn_804716B8_0000199C
    subfic r0, r0, 0x4
    add r4, r4, r0
lbl_fn_804716B8_0000199C:
    add r0, r3, r4
lbl_fn_804716B8_000019A0:
    stw r0, 0x20(r5)
    b lbl_fn_804716B8_000019AC
lbl_fn_804716B8_000019A8:
    bl fn_80470C20
lbl_fn_804716B8_000019AC:
    lwz r0, 0xc(r30)
    add r3, r31, r0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80471FD0(void)
{
    nofralloc
    fres f11, f2
    psq_l f4, 0x0(r5), 0, 0
    psq_l f5, 0x8(r5), 0, 0
    fmul f12, f1, f11
    psq_l f6, 0x10(r5), 0, 0
    psq_l f7, 0x18(r5), 0, 0
    fmul f11, f12, f12
    ps_merge10 f8, f4, f12
    ps_merge10 f10, f4, f2
    ps_merge00 f9, f11, f11
    ps_mul f9, f9, f8
    psq_l f0, 0x0(r3), 0, 6
    psq_l f3, 0x0(r4), 0, 6
    ps_madds1 f11, f4, f9, f8
    ps_muls1 f12, f6, f9
    ps_madds0 f11, f5, f9, f11
    ps_madds0 f12, f7, f9, f12
    ps_mul f11, f0, f11
    ps_mul f12, f3, f12
    ps_add f11, f12, f11
    ps_mul f11, f11, f10
    ps_sum0 f1, f11, f11, f11
    blr
}
