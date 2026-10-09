#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSSleepTicks(void);
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_8006A950(void);
extern void fn_8006B404(void);
extern void fn_80070E14(void);
extern void fn_80076C44(void);
extern void fn_80076F88(void);
extern void fn_8007C144(void);
extern void fn_8007C3F8(void);
extern void fn_8007C46C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800904E0(void);
extern void fn_8009A584(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_8024373C(void);
extern void fn_80243758(void);
extern void fn_802437B4(void);
extern void fn_802437C0(void);
extern void fn_80243814(void);
extern void fn_8046C3FC(void);
extern void fn_8046D1EC(void);
extern void fn_8046F5CC(void);
extern void fn_8046F834(void);
extern void fn_804714A4(void);
extern void fn_804714B0(void);
extern void fn_80472FAC(void);
extern void fn_8047304C(void);
extern void fn_804730D4(void);
extern void fn_804730E4(void);
extern void fn_80473104(void);
extern void fn_80473130(void);
extern void fn_805F8CA0(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80686EA4(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80755D3C[];
extern u8 lbl_80755D68[];
extern u8 lbl_80755D80[];
extern u8 lbl_80775A88[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_80779810[];
extern u8 lbl_8078FD20[];
extern u8 lbl_8078FD70[];
extern u8 lbl_8078FD80[];
extern u8 lbl_8078FDD0[];
extern u8 lbl_8078FDD8[];
extern u8 lbl_807C8A60[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087D7E4;
extern u32 lbl_8087D7E8;
extern u32 lbl_8087D7EC;
extern u32 lbl_8087D7F0;
extern u32 lbl_8087E058;
extern u32 lbl_8087E05C;
extern u32 lbl_8087EE94;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087F518;
extern u32 lbl_8087F520;
extern u32 lbl_80886F00;
extern u32 lbl_80886F04;

/* Function declarations */
void fn_80473B20(void);
void fn_80473BC0(void);
void fn_80473C20(void);
void fn_80473C3C(void);
void fn_80473C88(void);
void fn_80473E74(void);
void fn_80473E8C(void);
void fn_80473EFC(void);
void fn_80473F18(void);
void fn_80473F34(void);
void fn_80473F50(void);
void fn_80473F88(void);
void fn_80473FCC(void);
void fn_804741C0(void);
void fn_80474224(void);
void fn_804742F4(void);
void fn_8047462C(void);
void fn_80474678(void);
void fn_80474860(void);
void fn_8047486C(void);
void fn_80474888(void);
void fn_804749C8(void);
void fn_80474E0C(void);
void fn_80474E4C(void);
void fn_80474E68(void);
void fn_80474F0C(void);

asm void fn_80473B20(void)
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
    beq lbl_fn_80473B20_00000080
    addic. r31, r3, 0x5c
    beq lbl_fn_80473B20_00000064
    mr r3, r31
    bl fn_802437C0
    cmpwi r31, 0x0
    beq lbl_fn_80473B20_00000064
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80473B20_00000058
    lis r4, fn_80243758@ha
    addi r4, r4, fn_80243758@l
    bl fn_80695A50
lbl_fn_80473B20_00000058:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_80473B20_00000064:
    mr r3, r29
    li r4, 0x0
    bl fn_8047304C
    cmpwi r30, 0x0
    ble lbl_fn_80473B20_00000080
    mr r3, r29
    bl dtor_80084684
lbl_fn_80473B20_00000080:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80473BC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_80473BC0_000000EC
    lwz r4, 0x54(r3)
    lwz r5, 0x50(r3)
    addi r3, r3, 0x5c
    bl fn_80243814
    cmpwi r3, 0x0
    bne lbl_fn_80473BC0_000000EC
    mr r3, r31
    li r4, 0x3
    bl fn_80473104
    mr r3, r31
    bl fn_80473130
lbl_fn_80473BC0_000000EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80473C20(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80473C20_00000114
    addi r3, r3, 0x5c
    blr
lbl_fn_80473C20_00000114:
    li r3, 0x0
    blr
}

asm void fn_80473C3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80473C88
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80473C88(void)
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
    li r30, 0x0
    beq lbl_fn_80473C88_00000214
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80473C88_000001CC
lbl_fn_80473C88_000001C8:
    lwz r4, 0x4(r4)
lbl_fn_80473C88_000001CC:
    cmplw r4, r0
    beq lbl_fn_80473C88_000001E4
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80473C88_000001C8
lbl_fn_80473C88_000001E4:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80473C88_00000204
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80473C88_00000204
    b lbl_fn_80473C88_00000214
lbl_fn_80473C88_00000204:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80473C88_00000214:
    cmpwi r30, 0x0
    bne lbl_fn_80473C88_00000328
    lis r5, lbl_80755D3C@ha
    li r3, 0x70
    addi r5, r5, lbl_80755D3C@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80473C88_0000026C
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r4, lbl_8078FD20@ha
    addi r3, r30, 0x5c
    addi r4, r4, lbl_8078FD20@l
    stw r4, 0x0(r30)
    bl fn_8024373C
    addi r3, r30, 0x5c
    addi r4, r30, 0x6
    bl fn_802437B4
lbl_fn_80473C88_0000026C:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80473C88_0000030C
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80473C88_000002B8
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80473C88_000002B8:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80473C88_000002D0
    stw r30, 0x0(r3)
lbl_fn_80473C88_000002D0:
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
    b lbl_fn_80473C88_00000330
    bl dtor_80084684
    b lbl_fn_80473C88_00000330
lbl_fn_80473C88_0000030C:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80473C88_00000330
lbl_fn_80473C88_00000328:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80473C88_00000330:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80473E74(void)
{
    nofralloc
    lis r4, lbl_8078FD70@ha
    li r0, 0x0
    addi r4, r4, lbl_8078FD70@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    blr
}

asm void fn_80473E8C(void)
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
    beq lbl_fn_80473E8C_000003C0
    lwz r0, 0x4(r3)
    lis r4, lbl_8078FD70@ha
    addi r4, r4, lbl_8078FD70@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80473E8C_000003B0
    mr r3, r0
    bl fn_804730E4
lbl_fn_80473E8C_000003B0:
    cmpwi r31, 0x0
    ble lbl_fn_80473E8C_000003C0
    mr r3, r30
    bl dtor_80084684
lbl_fn_80473E8C_000003C0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80473EFC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80473EFC_000003F0
    lbz r3, 0x4(r3)
    blr
lbl_fn_80473EFC_000003F0:
    li r3, 0x0
    blr
}

asm void fn_80473F18(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80473F18_0000040C
    addi r3, r3, 0x6
    blr
lbl_fn_80473F18_0000040C:
    li r3, 0x0
    blr
}

asm void fn_80473F34(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80473F34_00000428
    lwz r3, 0x48(r3)
    blr
lbl_fn_80473F34_00000428:
    li r3, 0x0
    blr
}

asm void fn_80473F50(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80473F50_00000460
    lbz r0, 0x4(r4)
    li r3, 0x1
    cmpwi r0, 0x1
    beqlr
    lbz r0, 0x4(r4)
    cmpwi r0, 0x2
    beqlr
    li r3, 0x0
    blr
lbl_fn_80473F50_00000460:
    li r3, 0x0
    blr
}

asm void fn_80473F88(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80473F88_00000498
    mr r3, r0
    bl fn_804730E4
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_80473F88_00000498:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80473FCC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r16, 0x30(r1)
    mr r20, r3
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x4(r20)
    cmpwi r0, 0x0
    beq lbl_fn_80473FCC_0000068C
    lis r25, lbl_80775B60@ha
    lis r30, lbl_80775B98@ha
    lis r31, lbl_80775B30@ha
    lis r3, 0x1062
    addi r25, r25, lbl_80775B60@l
    addi r28, r1, 0x8
    addi r30, r30, lbl_80775B98@l
    addi r31, r31, lbl_80775B30@l
    addi r24, r1, 0x18
    addi r17, r3, 0x4dd3
    li r26, 0x0
    lis r27, lbl_80775BC8@ha
    li r29, 0x1
    lis r18, 0x8000
lbl_fn_80473FCC_00000514:
    lwz r3, lbl_8087F518
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r21, lbl_8087EE94
    cmpwi r21, 0x0
    beq lbl_fn_80473FCC_00000620
    li r23, 0x0
    li r19, 0x0
    b lbl_fn_80473FCC_00000614
lbl_fn_80473FCC_00000540:
    lwz r0, 0x8(r21)
    add r22, r0, r19
    lwzx r0, r19, r0
    cmpwi r0, 0x0
    bne lbl_fn_80473FCC_000005F8
    stw r25, 0x18(r1)
    addi r3, r27, lbl_80775BC8@l
    stb r26, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r16, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r28, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80473FCC_000005A4
    stw r29, 0x4(r3)
    stw r29, 0x8(r3)
    stw r30, 0x0(r3)
    stw r16, 0xc(r3)
lbl_fn_80473FCC_000005A4:
    cmpwi r26, 0x0
    stw r3, 0x20(r1)
    stw r26, 0x10(r1)
    beq lbl_fn_80473FCC_000005BC
    li r3, 0x0
    bl fn_80084C24
lbl_fn_80473FCC_000005BC:
    lwz r3, 0x1c(r1)
    addi r4, r27, lbl_80775BC8@l
    bl strcpy
    stw r31, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r24, 0x0
    beq lbl_fn_80473FCC_000005F8
    addic. r3, r24, 0x4
    beq lbl_fn_80473FCC_000005F8
    beq lbl_fn_80473FCC_000005F8
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80473FCC_000005F8
    bl fn_806952C4
lbl_fn_80473FCC_000005F8:
    lwz r4, 0x0(r22)
    addi r3, r22, 0x4
    lwz r12, 0x4(r4)
    mtctr r12
    bctrl
    addi r23, r23, 0x1
    addi r19, r19, 0x14
lbl_fn_80473FCC_00000614:
    lwz r0, 0x0(r21)
    cmplw r23, r0
    blt lbl_fn_80473FCC_00000540
lbl_fn_80473FCC_00000620:
    lwz r3, 0x4(r20)
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x4(r20)
    cmpwi r4, 0x0
    beq lbl_fn_80473FCC_00000664
    lbz r3, 0x4(r4)
    li r0, 0x1
    cmpwi r3, 0x1
    beq lbl_fn_80473FCC_00000668
    lbz r3, 0x4(r4)
    cmpwi r3, 0x2
    beq lbl_fn_80473FCC_00000668
    li r0, 0x0
    b lbl_fn_80473FCC_00000668
lbl_fn_80473FCC_00000664:
    li r0, 0x0
lbl_fn_80473FCC_00000668:
    cmpwi r0, 0x0
    beq lbl_fn_80473FCC_0000068C
    lwz r0, 0xf8(r18)
    li r3, 0x0
    srwi r0, r0, 2
    mulhwu r0, r17, r0
    srwi r4, r0, 6
    bl OSSleepTicks
    b lbl_fn_80473FCC_00000514
lbl_fn_80473FCC_0000068C:
    lmw r16, 0x30(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_804741C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804741C0_000006D8
    mr r3, r0
    bl fn_804730E4
    li r0, 0x0
    stw r0, 0x4(r30)
lbl_fn_804741C0_000006D8:
    lwz r3, 0x4(r31)
    stw r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804741C0_000006EC
    bl fn_804730D4
lbl_fn_804741C0_000006EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80474224(void)
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
    beq lbl_fn_80474224_000007B4
    lis r4, lbl_8078FD80@ha
    lwz r31, 0x5c(r3)
    addi r4, r4, lbl_8078FD80@l
    stw r4, 0x0(r3)
    b lbl_fn_80474224_00000750
lbl_fn_80474224_00000740:
    lwz r3, 0x0(r31)
    li r4, 0x1
    bl fn_8007C3F8
    addi r31, r31, 0x4
lbl_fn_80474224_00000750:
    lwz r0, 0x60(r29)
    lwz r3, 0x5c(r29)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r31, r0
    bne lbl_fn_80474224_00000740
    addic. r4, r29, 0x5c
    beq lbl_fn_80474224_00000798
    beq lbl_fn_80474224_00000798
    beq lbl_fn_80474224_00000798
    beq lbl_fn_80474224_00000798
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80474224_00000798
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80474224_00000798:
    mr r3, r29
    li r4, 0x0
    bl fn_8047304C
    cmpwi r30, 0x0
    ble lbl_fn_80474224_000007B4
    mr r3, r29
    bl dtor_80084684
lbl_fn_80474224_000007B4:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804742F4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r16, 0x30(r1)
    mr r30, r3
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804742F4_00000AF8
    lwz r17, 0x54(r3)
    lis r20, lbl_80755D68@ha
    lis r4, __files@ha
    lwz r18, 0x50(r3)
    mr r31, r17
    addi r22, r20, lbl_80755D68@l
    addi r23, r4, __files@l
    addi r19, r1, 0x14
    lis r27, 0xcccd
    lis r21, 0x4000
    li r24, 0x0
    lis r26, 0x1555
    lis r28, 0x2aab
    lis r29, lbl_80775A88@ha
    b lbl_fn_804742F4_00000ACC
lbl_fn_804742F4_00000830:
    addi r5, r20, lbl_80755D68@l
    li r3, 0x54
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r16, r3
    beq lbl_fn_804742F4_00000860
    li r4, 0x0
    bl fn_8007C144
    mr r16, r3
lbl_fn_804742F4_00000860:
    mr r3, r16
    mr r5, r31
    mr r6, r18
    addi r4, r30, 0x6
    bl fn_8007C46C
    mr r31, r3
    lwz r4, 0x60(r30)
    lwz r3, 0x64(r30)
    cmplw r4, r3
    bge lbl_fn_804742F4_000008A4
    addi r4, r4, 0x1
    lwz r3, 0x5c(r30)
    slwi r0, r4, 2
    stw r4, 0x60(r30)
    add r3, r3, r0
    stw r16, -0x4(r3)
    b lbl_fn_804742F4_00000AC0
lbl_fn_804742F4_000008A4:
    subi r0, r21, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_804742F4_000008C8
    addi r4, r22, 0x1
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804742F4_000008C8:
    addi r3, r30, 0x64
    stw r24, 0x14(r1)
    subi r0, r21, 0x1
    stw r24, 0x18(r1)
    stw r24, 0x1c(r1)
    stw r3, 0x20(r1)
    stw r24, 0x24(r1)
    lwz r3, 0x60(r30)
    lwz r25, 0x64(r30)
    addi r3, r3, 0x1
    subf r3, r25, r3
    subf r0, r25, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_804742F4_00000918
    addi r4, r22, 0x1
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804742F4_00000918:
    addi r0, r26, 0x5555
    cmplw r25, r0
    bge lbl_fn_804742F4_00000960
    addi r4, r25, 0x1
    subi r5, r27, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_804742F4_00000954
    addi r3, r1, 0x8
lbl_fn_804742F4_00000954:
    lwz r0, 0x0(r3)
    add r18, r25, r0
    b lbl_fn_804742F4_0000099C
lbl_fn_804742F4_00000960:
    subi r0, r28, 0x5556
    cmplw r25, r0
    bge lbl_fn_804742F4_00000998
    addi r3, r25, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_804742F4_0000098C
    addi r3, r1, 0x8
lbl_fn_804742F4_0000098C:
    lwz r0, 0x0(r3)
    add r18, r25, r0
    b lbl_fn_804742F4_0000099C
lbl_fn_804742F4_00000998:
    subi r18, r21, 0x1
lbl_fn_804742F4_0000099C:
    subi r0, r21, 0x1
    cmplw r18, r0
    ble lbl_fn_804742F4_000009BC
    addi r4, r22, 0x1
    addi r3, r23, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804742F4_000009BC:
    slwi r3, r18, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r25, r3
    bne lbl_fn_804742F4_000009E4
    addi r3, r23, 0xa0
    addi r4, r29, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_804742F4_000009E4:
    lwz r0, 0x18(r1)
    stw r25, 0x14(r1)
    slwi r3, r0, 2
    stw r18, 0x1c(r1)
    lwz r0, 0x60(r30)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r25, r0
    stwx r16, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x60(r30)
    lwz r16, 0x5c(r30)
    slwi r4, r4, 2
    add r5, r16, r4
    subf r5, r16, r5
    mr r4, r16
    srawi r5, r5, 2
    addze r25, r5
    subf r0, r25, r0
    stw r0, 0x24(r1)
    slwi r18, r25, 2
    slwi r0, r0, 2
    mr r5, r18
    add r3, r3, r0
    bl memcpy
    mr r3, r16
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r19, 0x0
    add r0, r0, r25
    stw r0, 0x18(r1)
    stw r24, 0x60(r30)
    lwz r3, 0x64(r30)
    lwz r0, 0x1c(r1)
    stw r0, 0x64(r30)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x5c(r30)
    stw r0, 0x5c(r30)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x60(r30)
    stw r24, 0x18(r1)
    beq lbl_fn_804742F4_00000AC0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_804742F4_00000AC0
    stw r24, 0x18(r1)
    bl dtor_80084684
lbl_fn_804742F4_00000AC0:
    lwz r0, 0x50(r30)
    subf r3, r17, r31
    subf r18, r3, r0
lbl_fn_804742F4_00000ACC:
    cmpwi r31, 0x0
    beq lbl_fn_804742F4_00000AE4
    lwz r0, 0x50(r30)
    subf r3, r17, r31
    cmpw r3, r0
    blt lbl_fn_804742F4_00000830
lbl_fn_804742F4_00000AE4:
    mr r3, r30
    bl fn_80473130
    mr r3, r30
    li r4, 0x3
    bl fn_80473104
lbl_fn_804742F4_00000AF8:
    lmw r16, 0x30(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8047462C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_80473F88
    lwz r3, lbl_8087F518
    mr r4, r31
    li r5, 0x1
    bl fn_80474678
    stw r3, 0x4(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80474678(void)
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
    li r30, 0x0
    beq lbl_fn_80474678_00000C04
    lwz r4, 0x3ed4(r31)
    addi r0, r31, 0x3ed0
    b lbl_fn_80474678_00000BBC
lbl_fn_80474678_00000BB8:
    lwz r4, 0x4(r4)
lbl_fn_80474678_00000BBC:
    cmplw r4, r0
    beq lbl_fn_80474678_00000BD4
    lwz r6, 0x8(r4)
    lwz r6, 0x48(r6)
    cmplw r3, r6
    bne lbl_fn_80474678_00000BB8
lbl_fn_80474678_00000BD4:
    addi r0, r31, 0x3ed0
    cmplw r4, r0
    beq lbl_fn_80474678_00000BF4
    lwz r30, 0x8(r4)
    lbz r0, 0x5(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80474678_00000BF4
    b lbl_fn_80474678_00000C04
lbl_fn_80474678_00000BF4:
    mr r3, r31
    addi r4, r31, 0x48
    bl fn_8046F834
    mr r30, r3
lbl_fn_80474678_00000C04:
    cmpwi r30, 0x0
    bne lbl_fn_80474678_00000D14
    lis r5, lbl_80755D68@ha
    li r3, 0x68
    addi r5, r5, lbl_80755D68@l
    li r4, 0x2
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80474678_00000C58
    addi r4, r1, 0x10
    bl fn_80472FAC
    lis r3, lbl_8078FD80@ha
    li r0, 0x0
    addi r3, r3, lbl_8078FD80@l
    stw r3, 0x0(r30)
    stw r0, 0x5c(r30)
    stw r0, 0x60(r30)
    stw r0, 0x64(r30)
lbl_fn_80474678_00000C58:
    mr r3, r31
    mr r4, r30
    bl fn_8046C3FC
    cmpwi r3, 0x0
    beq lbl_fn_80474678_00000CF8
    addi r28, r31, 0x3ed0
    li r3, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80474678_00000CA4
    lis r3, __files@ha
    lis r4, lbl_80779810@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779810@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80474678_00000CA4:
    addic. r3, r29, 0x8
    addi r0, r31, 0x3ed0
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    beq lbl_fn_80474678_00000CBC
    stw r30, 0x0(r3)
lbl_fn_80474678_00000CBC:
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
    b lbl_fn_80474678_00000D1C
    bl dtor_80084684
    b lbl_fn_80474678_00000D1C
lbl_fn_80474678_00000CF8:
    mr r3, r30
    li r4, 0x4
    bl fn_80473104
    mr r3, r31
    mr r4, r30
    bl fn_8046F5CC
    b lbl_fn_80474678_00000D1C
lbl_fn_80474678_00000D14:
    mr r3, r30
    bl fn_804730D4
lbl_fn_80474678_00000D1C:
    mr r3, r30
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80474860(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    addi r3, r3, 0x5c
    blr
}

asm void fn_8047486C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8047486C_00000D60
    lwz r3, 0x60(r3)
    blr
lbl_fn_8047486C_00000D60:
    li r3, 0x0
    blr
}

asm void fn_80474888(void)
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
    beq lbl_fn_80474888_00000E84
    lis r4, lbl_8078FDD8@ha
    li r30, 0x0
    addi r4, r4, lbl_8078FDD8@l
    stw r4, 0x0(r3)
    li r31, 0x0
    b lbl_fn_80474888_00000DC4
lbl_fn_80474888_00000DAC:
    lwz r4, 0x80(r28)
    lwz r3, lbl_8087EEE0
    lwzx r4, r4, r31
    bl fn_80076F88
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_80474888_00000DC4:
    lwz r0, 0x7c(r28)
    cmplw r30, r0
    blt lbl_fn_80474888_00000DAC
    addic. r0, r28, 0x84
    beq lbl_fn_80474888_00000DF4
    lwz r3, 0x88(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80474888_00000DE8
    bl fn_80084C24
lbl_fn_80474888_00000DE8:
    li r0, 0x0
    stw r0, 0x88(r28)
    stw r0, 0x84(r28)
lbl_fn_80474888_00000DF4:
    addic. r0, r28, 0x7c
    beq lbl_fn_80474888_00000E18
    lwz r3, 0x80(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80474888_00000E0C
    bl fn_80084C24
lbl_fn_80474888_00000E0C:
    li r0, 0x0
    stw r0, 0x80(r28)
    stw r0, 0x7c(r28)
lbl_fn_80474888_00000E18:
    addic. r0, r28, 0x70
    beq lbl_fn_80474888_00000E3C
    lwz r3, 0x74(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80474888_00000E30
    bl fn_80084C24
lbl_fn_80474888_00000E30:
    li r0, 0x0
    stw r0, 0x74(r28)
    stw r0, 0x70(r28)
lbl_fn_80474888_00000E3C:
    addic. r0, r28, 0x68
    beq lbl_fn_80474888_00000E68
    lwz r3, 0x6c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80474888_00000E5C
    beq lbl_fn_80474888_00000E5C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_80474888_00000E5C:
    li r0, 0x0
    stw r0, 0x6c(r28)
    stw r0, 0x68(r28)
lbl_fn_80474888_00000E68:
    mr r3, r28
    li r4, 0x0
    bl fn_8047304C
    cmpwi r29, 0x0
    ble lbl_fn_80474888_00000E84
    mr r3, r28
    bl dtor_80084684
lbl_fn_80474888_00000E84:
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

asm void fn_804749C8(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    stw r29, 0xc4(r1)
    stw r28, 0xc0(r1)
    lbz r0, 0x4(r3)
    cmplwi r0, 0x2
    bne lbl_fn_804749C8_000012CC
    li r4, 0x3
    bl fn_80473104
    lwz r29, 0x54(r30)
    addi r3, r1, 0x8
    bl fn_804714A4
    lbz r0, lbl_8087F520
    li r3, 0x0
    stw r3, 0x20(r1)
    extsb. r0, r0
    bne lbl_fn_804749C8_00000F24
    lis r6, lbl_807C8A60@ha
    lis r4, fn_80474E4C@ha
    lis r3, fn_80474E68@ha
    li r0, 0x1
    addi r3, r3, fn_80474E68@l
    addi r5, r6, lbl_807C8A60@l
    addi r4, r4, fn_80474E4C@l
    stw r4, 0x4(r5)
    stw r3, lbl_807C8A60@l(r6)
    stb r0, lbl_8087F520
lbl_fn_804749C8_00000F24:
    lis r3, lbl_807C8A60@ha
    lwz r12, lbl_807C8A60@l(r3)
    cmpwi r12, 0x0
    beq lbl_fn_804749C8_00000F48
    addi r3, r1, 0x24
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804749C8_00000F48:
    lis r0, fn_80474E0C@ha
    addic. r0, r0, 19980
    beq lbl_fn_804749C8_00000F60
    stw r0, 0x24(r1)
    li r0, 0x1
    b lbl_fn_804749C8_00000F64
lbl_fn_804749C8_00000F60:
    li r0, 0x0
lbl_fn_804749C8_00000F64:
    cmpwi r0, 0x0
    beq lbl_fn_804749C8_00000F7C
    lis r3, lbl_807C8A60@ha
    addi r3, r3, lbl_807C8A60@l
    stw r3, 0x20(r1)
    b lbl_fn_804749C8_00000F84
lbl_fn_804749C8_00000F7C:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_804749C8_00000F84:
    lwz r5, 0x50(r30)
    mr r4, r29
    mr r7, r30
    addi r3, r1, 0x8
    addi r6, r1, 0x20
    bl fn_804714B0
    addic. r3, r1, 0x20
    beq lbl_fn_804749C8_00000FD8
    lwz r4, 0x20(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804749C8_00000FD8
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804749C8_00000FD0
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804749C8_00000FD0:
    li r0, 0x0
    stw r0, 0x20(r1)
lbl_fn_804749C8_00000FD8:
    lwz r31, 0x5c(r30)
    cmpwi r31, 0x0
    beq lbl_fn_804749C8_000012CC
    lwz r3, 0x6c(r30)
    lwz r29, 0x44(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804749C8_00001000
    beq lbl_fn_804749C8_00001000
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_804749C8_00001000:
    cmpwi r29, 0x0
    stw r29, 0x68(r30)
    beq lbl_fn_804749C8_00001044
    mulli r3, r29, 0x30
    li r4, 0x6
    la r5, lbl_8087D7F0
    la r6, lbl_8087D7EC
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    mr r7, r29
    li r4, 0x0
    li r5, 0x0
    li r6, 0x30
    bl fn_80695720
    stw r3, 0x6c(r30)
    b lbl_fn_804749C8_0000104C
lbl_fn_804749C8_00001044:
    li r0, 0x0
    stw r0, 0x6c(r30)
lbl_fn_804749C8_0000104C:
    li r0, 0x0
    stw r0, 0xc(r1)
    mr r4, r31
    addi r3, r1, 0x68
    lwz r5, 0x6c(r30)
    addi r7, r1, 0xc
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    bl fn_800904E0
    addic. r3, r1, 0xc
    beq lbl_fn_804749C8_000010B0
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804749C8_000010B0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804749C8_000010A8
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804749C8_000010A8:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_804749C8_000010B0:
    lfs f1, lbl_80886F00
    addi r3, r1, 0x68
    lfs f0, lbl_80886F04
    addi r4, r1, 0x38
    stfs f1, 0x64(r1)
    stfs f1, 0x5c(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x48(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x3c(r1)
    stfs f0, 0x60(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    bl fn_8009A584
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_804749C8_00001118
lbl_fn_804749C8_00001100:
    lwz r0, 0x6c(r30)
    add r3, r0, r29
    mr r4, r3
    bl fn_805F8CA0
    addi r29, r29, 0x30
    addi r28, r28, 0x1
lbl_fn_804749C8_00001118:
    lwz r0, 0x68(r30)
    cmplw r28, r0
    blt lbl_fn_804749C8_00001100
    lwz r5, 0x5c(r30)
    li r28, 0x0
    li r4, 0x0
    lwz r0, 0x44(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804749C8_00001160
lbl_fn_804749C8_00001140:
    lwz r3, 0x48(r5)
    lwzx r3, r3, r4
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    ble lbl_fn_804749C8_00001158
    addi r28, r28, 0x1
lbl_fn_804749C8_00001158:
    addi r4, r4, 0x4
    bdnz lbl_fn_804749C8_00001140
lbl_fn_804749C8_00001160:
    cmpwi r28, 0x0
    ble lbl_fn_804749C8_000011F4
    lwz r3, 0x74(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804749C8_00001178
    bl fn_80084C24
lbl_fn_804749C8_00001178:
    cmpwi r28, 0x0
    stw r28, 0x70(r30)
    beq lbl_fn_804749C8_000011A4
    slwi r3, r28, 1
    li r4, 0x6
    la r5, lbl_8087D7E8
    la r6, lbl_8087D7E4
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x74(r30)
    b lbl_fn_804749C8_000011AC
lbl_fn_804749C8_000011A4:
    li r0, 0x0
    stw r0, 0x74(r30)
lbl_fn_804749C8_000011AC:
    li r3, 0x0
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_804749C8_000011E4
lbl_fn_804749C8_000011BC:
    lwz r4, 0x48(r4)
    lwzx r4, r4, r5
    lwz r0, 0x70(r4)
    cmpwi r0, 0x0
    ble lbl_fn_804749C8_000011DC
    lwz r4, 0x74(r30)
    sthx r6, r4, r3
    addi r3, r3, 0x2
lbl_fn_804749C8_000011DC:
    addi r5, r5, 0x4
    addi r6, r6, 0x1
lbl_fn_804749C8_000011E4:
    lwz r4, 0x5c(r30)
    lwz r0, 0x44(r4)
    cmpw r6, r0
    blt lbl_fn_804749C8_000011BC
lbl_fn_804749C8_000011F4:
    mr r3, r30
    mr r4, r31
    bl fn_80474F0C
    lwz r5, 0x5c(r30)
    li r4, 0x0
    lwz r0, 0x3c(r5)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804749C8_0000124C
lbl_fn_804749C8_00001218:
    lwz r3, 0x40(r5)
    lwzx r3, r3, r4
    lwz r0, 0x24(r3)
    cmpwi r0, -0x1
    bne lbl_fn_804749C8_00001238
    lwz r0, 0x28(r3)
    cmpwi r0, -0x1
    beq lbl_fn_804749C8_00001244
lbl_fn_804749C8_00001238:
    li r0, 0x1
    stw r0, 0x78(r30)
    b lbl_fn_804749C8_0000124C
lbl_fn_804749C8_00001244:
    addi r4, r4, 0x4
    bdnz lbl_fn_804749C8_00001218
lbl_fn_804749C8_0000124C:
    addic. r3, r1, 0x94
    beq lbl_fn_804749C8_0000128C
    beq lbl_fn_804749C8_0000128C
    lwz r4, 0x94(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804749C8_0000128C
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804749C8_00001284
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804749C8_00001284:
    li r0, 0x0
    stw r0, 0x94(r1)
lbl_fn_804749C8_0000128C:
    addic. r3, r1, 0x80
    beq lbl_fn_804749C8_000012CC
    beq lbl_fn_804749C8_000012CC
    lwz r4, 0x80(r1)
    cmpwi r4, 0x0
    beq lbl_fn_804749C8_000012CC
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_804749C8_000012C4
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_804749C8_000012C4:
    li r0, 0x0
    stw r0, 0x80(r1)
lbl_fn_804749C8_000012CC:
    lwz r0, 0xd4(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    lwz r28, 0xc0(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80474E0C(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    subis r0, r6, 0x6d6f
    cmplwi r0, 0x646c
    bne lbl_fn_80474E0C_00001300
    stw r5, 0x5c(r3)
lbl_fn_80474E0C_00001300:
    lwz r4, 0x0(r4)
    subis r0, r4, 0x6f6d
    cmplwi r0, 0x646c
    bne lbl_fn_80474E0C_00001318
    stw r5, 0x60(r3)
    blr
lbl_fn_80474E0C_00001318:
    subis r0, r4, 0x6f63
    cmplwi r0, 0x6374
    bnelr
    stw r5, 0x64(r3)
    blr
}

asm void fn_80474E4C(void)
{
    nofralloc
    mr r7, r3
    mr r3, r4
    lwz r12, 0x0(r7)
    mr r4, r5
    mr r5, r6
    mtctr r12
    bctr
}

asm void fn_80474E68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    bne lbl_fn_80474E68_0000137C
    lis r3, lbl_8078FDD0@ha
    addi r3, r3, lbl_8078FDD0@l
    stw r3, 0x0(r4)
    b lbl_fn_80474E68_000013D4
lbl_fn_80474E68_0000137C:
    cmpwi r5, 0x0
    bne lbl_fn_80474E68_00001390
    lwz r0, 0x0(r3)
    stw r0, 0x0(r4)
    b lbl_fn_80474E68_000013D4
lbl_fn_80474E68_00001390:
    cmpwi r5, 0x1
    bne lbl_fn_80474E68_000013A4
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_80474E68_000013D4
lbl_fn_80474E68_000013A4:
    lwz r5, 0x0(r4)
    lis r3, lbl_8078FDD0@ha
    lwz r4, lbl_8078FDD0@l(r3)
    lwz r3, 0x0(r5)
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_80474E68_000013CC
    stw r30, 0x0(r31)
    b lbl_fn_80474E68_000013D4
lbl_fn_80474E68_000013CC:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_80474E68_000013D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80474F0C(void)
{
    nofralloc
    stwu r1, -0x780(r1)
    mflr r0
    stw r0, 0x784(r1)
    stmw r14, 0x738(r1)
    lis r15, lbl_80755D80@ha
    mr r23, r3
    mr r24, r4
    addi r15, r15, lbl_80755D80@l
    lwz r0, 0x80(r3)
    lwz r14, 0x3c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80474F0C_00001424
    mr r3, r0
    bl fn_80084C24
lbl_fn_80474F0C_00001424:
    cmpwi r14, 0x0
    stw r14, 0x7c(r23)
    beq lbl_fn_80474F0C_00001450
    slwi r3, r14, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x80(r23)
    b lbl_fn_80474F0C_00001458
lbl_fn_80474F0C_00001450:
    li r0, 0x0
    stw r0, 0x80(r23)
lbl_fn_80474F0C_00001458:
    lwz r3, 0x3c(r24)
    li r0, 0x0
    stw r0, 0x730(r1)
    li r26, 0x0
    cmpwi r3, 0x0
    li r22, 0x0
    ble lbl_fn_80474F0C_000022C4
    addi r8, r15, 0x160
    lwz r0, 0x160(r15)
    stw r0, 0x6e8(r1)
    addi r5, r15, 0xb0
    addi r7, r15, 0x90
    lwz r0, 0x4(r8)
    addi r6, r15, 0xa0
    stw r0, 0x6ec(r1)
    li r0, 0x0
    lwz r28, 0x4(r7)
    stw r0, 0x6e4(r1)
    addi r3, r15, 0xd0
    lwz r0, 0x8(r8)
    addi r25, r15, 0xe0
    stw r0, 0x6f0(r1)
    addi r4, r15, 0xc0
    lwz r0, 0xc(r7)
    lwz r29, 0x8(r7)
    stw r0, 0x6f4(r1)
    lwz r19, 0x4(r6)
    lwz r18, 0x8(r6)
    lwz r16, 0x4(r5)
    lwz r14, 0x8(r5)
    lwz r12, 0xc(r5)
    lwz r7, 0x4(r3)
    lwz r6, 0x8(r3)
    lwz r5, 0xc(r3)
    lwz r3, 0x4(r25)
    lwz r0, 0x8(r25)
    lwz r25, 0xf0(r15)
    stw r25, 0x734(r1)
    addi r25, r15, 0xf0
    lwz r31, 0x4(r25)
    lwz r30, 0x8(r25)
    lwz r25, 0xc(r25)
    stw r25, 0x6f8(r1)
    lwz r21, 0xc(r8)
    lwz r25, 0x100(r15)
    stw r25, 0x6fc(r1)
    addi r25, r15, 0x100
    lwz r25, 0x4(r25)
    stw r25, 0x700(r1)
    addi r25, r15, 0x100
    lwz r25, 0x8(r25)
    stw r25, 0x704(r1)
    addi r25, r15, 0x100
    lwz r25, 0xc(r25)
    stw r25, 0x708(r1)
    lwz r25, 0x110(r15)
    stw r25, 0x70c(r1)
    addi r25, r15, 0x110
    lwz r25, 0x4(r25)
    stw r0, 0x80(r1)
    lwz r0, 0x734(r1)
    stw r25, 0x710(r1)
    addi r25, r15, 0x110
    lwz r25, 0x8(r25)
    stw r0, 0x68(r1)
    lwz r0, 0x6f8(r1)
    stw r0, 0x74(r1)
    lwz r0, 0x6fc(r1)
    stw r25, 0x714(r1)
    lwz r25, 0x120(r15)
    stw r0, 0x58(r1)
    lwz r0, 0x700(r1)
    stw r25, 0x718(r1)
    addi r25, r15, 0x120
    lwz r25, 0x4(r25)
    stw r0, 0x5c(r1)
    lwz r0, 0x704(r1)
    stw r0, 0x60(r1)
    lwz r0, 0x708(r1)
    stw r25, 0x71c(r1)
    addi r25, r15, 0x120
    lwz r25, 0x8(r25)
    stw r0, 0x64(r1)
    lwz r0, 0x70c(r1)
    stw r0, 0x48(r1)
    lwz r0, 0x710(r1)
    stw r25, 0x720(r1)
    addi r25, r15, 0x120
    lwz r25, 0xc(r25)
    stw r0, 0x4c(r1)
    lwz r0, 0x714(r1)
    stw r0, 0x50(r1)
    lwz r0, 0x718(r1)
    stw r25, 0x724(r1)
    lwz r25, 0x6e8(r1)
    stw r0, 0x38(r1)
    lwz r0, 0x71c(r1)
    stw r25, 0x198(r1)
    lwz r25, 0x6ec(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x720(r1)
    lwz r27, 0x90(r15)
    lwz r20, 0xa0(r15)
    lwz r17, 0xb0(r15)
    lwz r11, 0xc0(r15)
    lwz r10, 0x4(r4)
    lwz r9, 0x8(r4)
    lwz r8, 0xd0(r15)
    lwz r4, 0xe0(r15)
    stw r25, 0x19c(r1)
    lwz r25, 0x6f0(r1)
    stw r21, 0x1a4(r1)
    lwz r21, 0x6f4(r1)
    stw r0, 0x40(r1)
    lwz r0, 0x724(r1)
    stw r25, 0x1a0(r1)
    stw r27, 0xc8(r1)
    stw r28, 0xcc(r1)
    stw r29, 0xd0(r1)
    stw r21, 0xd4(r1)
    stw r20, 0xb8(r1)
    stw r19, 0xbc(r1)
    stw r18, 0xc0(r1)
    stw r17, 0xa8(r1)
    stw r16, 0xac(r1)
    stw r14, 0xb0(r1)
    stw r12, 0xb4(r1)
    stw r11, 0x98(r1)
    stw r10, 0x9c(r1)
    stw r9, 0xa0(r1)
    stw r8, 0x88(r1)
    stw r7, 0x8c(r1)
    stw r6, 0x90(r1)
    stw r5, 0x94(r1)
    stw r4, 0x78(r1)
    stw r3, 0x7c(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x70(r1)
    stw r0, 0x44(r1)
    addi r4, r15, 0x130
    addi r3, r15, 0x140
    addi r18, r15, 0x150
    lwz r25, 0x130(r15)
    lwz r12, 0x4(r4)
    addi r21, r15, 0x34
    lwz r11, 0x8(r4)
    addi r16, r15, 0x60
    lwz r10, 0xc(r4)
    mr r17, r22
    lwz r9, 0x140(r15)
    mr r31, r22
    lwz r5, 0x150(r15)
    mr r14, r22
    lwz r8, 0x4(r3)
    li r20, 0xa
    lwz r7, 0x8(r3)
    li r19, 0x9
    lwz r6, 0xc(r3)
    li r30, 0xff
    lwz r4, 0x4(r18)
    lwz r3, 0x8(r18)
    lwz r0, 0xc(r18)
    li r18, 0x1
    lbz r15, 0x1a4(r1)
    stw r22, 0x728(r1)
    stw r22, 0x72c(r1)
    stw r25, 0x28(r1)
    stb r15, 0x6e0(r1)
    stw r12, 0x2c(r1)
    stw r11, 0x30(r1)
    stw r10, 0x34(r1)
    stw r9, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x8(r1)
    stw r4, 0xc(r1)
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
    b lbl_fn_80474F0C_000022B8
lbl_fn_80474F0C_00001728:
    lwz r0, 0x6f4(r1)
    addi r3, r1, 0x2a8
    stw r0, 0x1cc(r1)
    li r0, 0x3
    li r5, 0x0
    stw r27, 0x1c0(r1)
    lbz r4, 0x1cc(r1)
    stw r28, 0x1c4(r1)
    stw r29, 0x1c8(r1)
    mtctr r0
lbl_fn_80474F0C_00001750:
    stw r27, 0x0(r3)
    addi r5, r5, 0x8
    stw r28, 0x4(r3)
    stw r29, 0x8(r3)
    stb r4, 0xc(r3)
    stw r27, 0x10(r3)
    stw r28, 0x14(r3)
    stw r29, 0x18(r3)
    stb r4, 0x1c(r3)
    stw r27, 0x20(r3)
    stw r28, 0x24(r3)
    stw r29, 0x28(r3)
    stb r4, 0x2c(r3)
    stw r27, 0x30(r3)
    stw r28, 0x34(r3)
    stw r29, 0x38(r3)
    stb r4, 0x3c(r3)
    stw r27, 0x40(r3)
    stw r28, 0x44(r3)
    stw r29, 0x48(r3)
    stb r4, 0x4c(r3)
    stw r27, 0x50(r3)
    stw r28, 0x54(r3)
    stw r29, 0x58(r3)
    stb r4, 0x5c(r3)
    stw r27, 0x60(r3)
    stw r28, 0x64(r3)
    stw r29, 0x68(r3)
    stb r4, 0x6c(r3)
    stw r27, 0x70(r3)
    stw r28, 0x74(r3)
    stw r29, 0x78(r3)
    stb r4, 0x7c(r3)
    addi r3, r3, 0x80
    bdnz lbl_fn_80474F0C_00001750
    slwi r0, r5, 4
    addi r3, r1, 0x2a8
    add r3, r3, r0
    lwz r0, 0x1c0(r1)
    stw r0, 0x0(r3)
    stw r28, 0x4(r3)
    stw r29, 0x8(r3)
    stb r4, 0xc(r3)
    stw r0, 0x10(r3)
    stw r28, 0x14(r3)
    stw r29, 0x18(r3)
    stb r4, 0x1c(r3)
    stw r0, 0x20(r3)
    lwz r0, 0x6e4(r1)
    stw r28, 0x24(r3)
    stw r29, 0x28(r3)
    stb r4, 0x2c(r3)
    stw r30, 0x1d0(r1)
    stw r31, 0x1d4(r1)
    stw r30, 0x1d8(r1)
    stw r31, 0x1dc(r1)
    stw r30, 0x1e0(r1)
    stw r31, 0x1e4(r1)
    stw r30, 0x1e8(r1)
    stw r31, 0x1ec(r1)
    stw r30, 0x1f0(r1)
    stw r31, 0x1f4(r1)
    stw r30, 0x1f8(r1)
    stw r31, 0x1fc(r1)
    stw r30, 0x200(r1)
    stw r31, 0x204(r1)
    stw r30, 0x208(r1)
    stw r31, 0x20c(r1)
    stw r30, 0x210(r1)
    stw r31, 0x214(r1)
    stw r30, 0x218(r1)
    stw r31, 0x21c(r1)
    stw r30, 0x220(r1)
    stw r31, 0x224(r1)
    stw r30, 0x228(r1)
    stw r31, 0x22c(r1)
    stw r30, 0x230(r1)
    stw r31, 0x234(r1)
    stw r30, 0x238(r1)
    stw r31, 0x23c(r1)
    stw r30, 0x240(r1)
    stw r31, 0x244(r1)
    stw r30, 0x248(r1)
    stw r31, 0x24c(r1)
    stw r30, 0x250(r1)
    stw r31, 0x254(r1)
    stw r30, 0x258(r1)
    stw r31, 0x25c(r1)
    stw r30, 0x260(r1)
    stw r31, 0x264(r1)
    stw r30, 0x268(r1)
    stw r31, 0x26c(r1)
    stw r30, 0x270(r1)
    stw r31, 0x274(r1)
    stw r30, 0x278(r1)
    stw r31, 0x27c(r1)
    stw r30, 0x280(r1)
    stw r31, 0x284(r1)
    stw r30, 0x288(r1)
    stw r31, 0x28c(r1)
    stw r30, 0x290(r1)
    stw r14, 0x294(r1)
    stw r30, 0x298(r1)
    stw r14, 0x29c(r1)
    stw r30, 0x2a0(r1)
    stw r14, 0x2a4(r1)
    lwz r3, 0x40(r24)
    lwzx r25, r3, r0
    lwz r0, 0x4(r25)
    cmplwi r0, 0x2
    blt lbl_fn_80474F0C_00001AA8
    lwz r0, 0x1c(r25)
    li r5, 0x0
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001938
    lwz r4, 0x2c(r24)
    slwi r0, r0, 2
    lwz r3, 0x54(r25)
    li r5, 0x1
    lwzx r4, r4, r0
    lwz r0, 0x1c(r4)
    stw r0, 0x4(r3)
lbl_fn_80474F0C_00001938:
    lwz r0, 0x20(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001968
    lwz r6, 0x2c(r24)
    slwi r4, r0, 2
    mulli r0, r5, 0xc
    lwz r3, 0x54(r25)
    lwzx r4, r6, r4
    addi r5, r5, 0x1
    add r3, r3, r0
    lwz r0, 0x1c(r4)
    stw r0, 0x4(r3)
lbl_fn_80474F0C_00001968:
    lwz r0, 0x24(r25)
    mulli r6, r5, 0xc
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_0000199C
    lwz r4, 0x2c(r24)
    slwi r3, r0, 2
    lwz r0, 0x54(r25)
    addi r5, r5, 0x1
    lwzx r4, r4, r3
    add r3, r0, r6
    addi r6, r6, 0xc
    lwz r0, 0x1c(r4)
    stw r0, 0x4(r3)
lbl_fn_80474F0C_0000199C:
    lwz r0, 0x28(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_000019C8
    lwz r4, 0x2c(r24)
    slwi r3, r0, 2
    lwz r0, 0x54(r25)
    addi r5, r5, 0x1
    lwzx r4, r4, r3
    add r3, r0, r6
    lwz r0, 0x1c(r4)
    stw r0, 0x4(r3)
lbl_fn_80474F0C_000019C8:
    mulli r4, r5, 0xc
    li r0, 0x2
    mr r3, r25
    li r6, 0x0
    mtctr r0
lbl_fn_80474F0C_000019DC:
    lwz r0, 0x2c(r3)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001A08
    lwz r8, 0x2c(r24)
    slwi r7, r0, 2
    lwz r0, 0x54(r25)
    lwzx r8, r8, r7
    add r7, r0, r4
    addi r4, r4, 0xc
    lwz r0, 0x1c(r8)
    stw r0, 0x4(r7)
lbl_fn_80474F0C_00001A08:
    lwz r0, 0x30(r3)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001A38
    lwz r8, 0x2c(r24)
    slwi r7, r0, 2
    lwz r0, 0x54(r25)
    addi r5, r5, 0x1
    lwzx r8, r8, r7
    add r7, r0, r4
    addi r4, r4, 0xc
    lwz r0, 0x1c(r8)
    stw r0, 0x4(r7)
lbl_fn_80474F0C_00001A38:
    lwz r0, 0x34(r3)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001A68
    lwz r8, 0x2c(r24)
    slwi r7, r0, 2
    lwz r0, 0x54(r25)
    addi r5, r5, 0x1
    lwzx r8, r8, r7
    add r7, r0, r4
    addi r4, r4, 0xc
    lwz r0, 0x1c(r8)
    stw r0, 0x4(r7)
lbl_fn_80474F0C_00001A68:
    lwz r0, 0x38(r3)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001A98
    lwz r8, 0x2c(r24)
    slwi r7, r0, 2
    lwz r0, 0x54(r25)
    addi r5, r5, 0x1
    lwzx r8, r8, r7
    add r7, r0, r4
    addi r4, r4, 0xc
    lwz r0, 0x1c(r8)
    stw r0, 0x4(r7)
lbl_fn_80474F0C_00001A98:
    addi r3, r3, 0x10
    addi r6, r6, 0x3
    bdnz lbl_fn_80474F0C_000019DC
    b lbl_fn_80474F0C_00001E9C
lbl_fn_80474F0C_00001AA8:
    cmpwi r26, 0x0
    bne lbl_fn_80474F0C_00001AF8
    lwz r3, 0x88(r23)
    lwz r15, 0x3c(r24)
    cmpwi r3, 0x0
    beq lbl_fn_80474F0C_00001AC4
    bl fn_80084C24
lbl_fn_80474F0C_00001AC4:
    cmpwi r15, 0x0
    stw r15, 0x84(r23)
    beq lbl_fn_80474F0C_00001AF0
    mulli r3, r15, 0x144
    li r4, 0x6
    la r5, lbl_8087E05C
    la r6, lbl_8087E058
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x88(r23)
    b lbl_fn_80474F0C_00001AF8
lbl_fn_80474F0C_00001AF0:
    lwz r0, 0x728(r1)
    stw r0, 0x88(r23)
lbl_fn_80474F0C_00001AF8:
    lwz r4, 0x88(r23)
    li r8, 0x0
    lwz r0, 0x730(r1)
    lwz r3, 0xb8(r1)
    add r4, r4, r0
    lwz r6, 0xbc(r1)
    lwz r5, 0xc0(r1)
    li r0, 0x3
    mr r7, r4
    stw r3, 0x1b4(r1)
    stw r6, 0x1b8(r1)
    stw r5, 0x1bc(r1)
    mtctr r0
lbl_fn_80474F0C_00001B2C:
    stw r3, 0x0(r7)
    addi r8, r8, 0x8
    stw r6, 0x4(r7)
    stw r5, 0x8(r7)
    stw r3, 0xc(r7)
    stw r6, 0x10(r7)
    stw r5, 0x14(r7)
    stw r3, 0x18(r7)
    stw r6, 0x1c(r7)
    stw r5, 0x20(r7)
    stw r3, 0x24(r7)
    stw r6, 0x28(r7)
    stw r5, 0x2c(r7)
    stw r3, 0x30(r7)
    stw r6, 0x34(r7)
    stw r5, 0x38(r7)
    stw r3, 0x3c(r7)
    stw r6, 0x40(r7)
    stw r5, 0x44(r7)
    stw r3, 0x48(r7)
    stw r6, 0x4c(r7)
    stw r5, 0x50(r7)
    stw r3, 0x54(r7)
    stw r6, 0x58(r7)
    stw r5, 0x5c(r7)
    addi r7, r7, 0x60
    bdnz lbl_fn_80474F0C_00001B2C
    mulli r3, r8, 0xc
    lwz r0, 0x1b4(r1)
    stwux r0, r3, r4
    li r7, 0x0
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r0, 0xc(r3)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    stw r0, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r5, 0x20(r3)
    lwz r0, 0x1c(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001C58
    lwz r3, 0x2c(r24)
    slwi r0, r0, 2
    lwz r5, 0xb4(r1)
    li r7, 0x1
    lwzx r9, r3, r0
    lwz r8, 0xa8(r1)
    lwz r3, 0x14(r9)
    lwz r6, 0xac(r1)
    lwz r3, 0x1c(r3)
    lwz r0, 0x98(r1)
    lwz r10, 0xc(r3)
    lwz r3, 0x14(r3)
    slwi r10, r10, 2
    stw r5, 0x194(r1)
    lwzx r5, r21, r10
    stw r8, 0x2a8(r1)
    lwzx r11, r16, r10
    stw r6, 0x2ac(r1)
    slwi r10, r11, 2
    stw r5, 0x2b0(r1)
    subf r10, r11, r10
    stb r3, 0x2b4(r1)
    lwz r9, 0x1c(r9)
    stw r8, 0x188(r1)
    stw r0, 0x0(r4)
    stw r9, 0x4(r4)
    stw r6, 0x18c(r1)
    stw r5, 0x190(r1)
    stb r3, 0x194(r1)
    stw r0, 0x178(r1)
    stw r9, 0x17c(r1)
    stw r10, 0x180(r1)
    stw r10, 0x8(r4)
lbl_fn_80474F0C_00001C58:
    lwz r0, 0x20(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001CF8
    lwz r5, 0x2c(r24)
    slwi r0, r0, 2
    lwz r3, 0x88(r1)
    slwi r9, r7, 4
    lwzx r8, r5, r0
    addi r5, r1, 0x2a8
    add r5, r5, r9
    lwz r0, 0x8c(r1)
    lwz r10, 0x14(r8)
    mulli r6, r7, 0xc
    lwz r11, 0x78(r1)
    addi r7, r7, 0x1
    lwz r12, 0x1c(r10)
    lwz r9, 0x94(r1)
    lwz r10, 0xc(r12)
    lwz r12, 0x14(r12)
    slwi r10, r10, 2
    stw r9, 0x174(r1)
    lwzx r15, r21, r10
    stw r3, 0x0(r5)
    lwzx r10, r16, r10
    stw r0, 0x4(r5)
    slwi r9, r10, 2
    stw r15, 0x8(r5)
    subf r9, r10, r9
    stb r12, 0xc(r5)
    lwz r5, 0x1c(r8)
    stw r3, 0x168(r1)
    stwux r11, r6, r4
    stw r5, 0x4(r6)
    stw r0, 0x16c(r1)
    stw r15, 0x170(r1)
    stb r12, 0x174(r1)
    stw r11, 0x158(r1)
    stw r5, 0x15c(r1)
    stw r9, 0x160(r1)
    stw r9, 0x8(r6)
lbl_fn_80474F0C_00001CF8:
    mulli r0, r7, 0xc
    slwi r3, r7, 4
    addi r11, r1, 0x2a8
    mr r10, r25
    add r12, r4, r0
    add r11, r11, r3
    li r0, 0x2
    li r3, 0x0
    mtctr r0
lbl_fn_80474F0C_00001D1C:
    lwz r0, 0x24(r10)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001DA8
    lwz r5, 0x2c(r24)
    addi r8, r3, 0xb
    slwi r0, r0, 2
    lwz r9, 0x6c(r1)
    lwzx r5, r5, r0
    addi r7, r7, 0x1
    lwz r0, 0x74(r1)
    lwz r6, 0x14(r5)
    stw r0, 0x154(r1)
    lwz r6, 0x1c(r6)
    stw r9, 0x14c(r1)
    lwz r0, 0x14(r6)
    lwz r6, 0xc(r6)
    stw r8, 0x148(r1)
    slwi r15, r6, 2
    stw r8, 0x0(r11)
    lwzx r6, r21, r15
    stw r9, 0x4(r11)
    lwzx r9, r16, r15
    stw r6, 0x8(r11)
    stb r0, 0xc(r11)
    addi r11, r11, 0x10
    lwz r5, 0x1c(r5)
    stw r6, 0x150(r1)
    stw r8, 0x0(r12)
    stw r5, 0x4(r12)
    stw r9, 0x8(r12)
    addi r12, r12, 0xc
    stb r0, 0x154(r1)
    stw r8, 0x138(r1)
    stw r5, 0x13c(r1)
    stw r9, 0x140(r1)
lbl_fn_80474F0C_00001DA8:
    addi r10, r10, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80474F0C_00001D1C
    mulli r0, r7, 0xc
    slwi r3, r7, 4
    addi r11, r1, 0x2a8
    mr r10, r25
    add r12, r4, r0
    add r11, r11, r3
    li r0, 0x8
    li r3, 0x0
    mtctr r0
lbl_fn_80474F0C_00001DD8:
    lwz r0, 0x2c(r10)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001E68
    lwz r5, 0x2c(r24)
    addi r8, r3, 0xd
    slwi r0, r0, 2
    lwz r9, 0x5c(r1)
    lwzx r5, r5, r0
    addi r7, r7, 0x1
    lwz r0, 0x64(r1)
    lwz r6, 0x14(r5)
    stw r0, 0x134(r1)
    lwz r6, 0x1c(r6)
    stw r9, 0x12c(r1)
    lwz r0, 0x14(r6)
    lwz r6, 0xc(r6)
    stw r8, 0x128(r1)
    slwi r15, r6, 2
    stw r8, 0x0(r11)
    lwzx r6, r21, r15
    stw r9, 0x4(r11)
    lwzx r9, r16, r15
    stw r6, 0x8(r11)
    slwi r9, r9, 1
    stb r0, 0xc(r11)
    addi r11, r11, 0x10
    lwz r5, 0x1c(r5)
    stw r6, 0x130(r1)
    stw r8, 0x0(r12)
    stw r5, 0x4(r12)
    stw r9, 0x8(r12)
    addi r12, r12, 0xc
    stb r0, 0x134(r1)
    stw r8, 0x118(r1)
    stw r5, 0x11c(r1)
    stw r9, 0x120(r1)
lbl_fn_80474F0C_00001E68:
    addi r10, r10, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_80474F0C_00001DD8
    mulli r0, r7, 0xc
    lwz r6, 0x48(r1)
    lwz r5, 0x4c(r1)
    lwz r3, 0x50(r1)
    stwux r6, r4, r0
    stw r5, 0x4(r4)
    stw r6, 0x1a8(r1)
    stw r5, 0x1ac(r1)
    stw r3, 0x1b0(r1)
    stw r3, 0x8(r4)
lbl_fn_80474F0C_00001E9C:
    lwz r6, 0x18(r25)
    addi r4, r1, 0x1d0
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_80474F0C_00001F6C
lbl_fn_80474F0C_00001EB0:
    lwz r0, 0x1c(r6)
    li r8, 0x3
    add r7, r0, r3
    lwz r0, 0xc(r7)
    cmpwi r0, 0x2
    bne lbl_fn_80474F0C_00001ECC
    li r8, 0x2
lbl_fn_80474F0C_00001ECC:
    lwz r0, 0x4(r7)
    cmpwi r0, 0x4
    beq lbl_fn_80474F0C_00001F04
    cmpwi r0, 0x5
    beq lbl_fn_80474F0C_00001F10
    cmpwi r0, 0x0
    beq lbl_fn_80474F0C_00001F24
    cmpwi r0, 0x1
    beq lbl_fn_80474F0C_00001F30
    cmpwi r0, 0x2
    beq lbl_fn_80474F0C_00001F3C
    cmpwi r0, 0x3
    beq lbl_fn_80474F0C_00001F50
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F04:
    stw r17, 0x0(r4)
    stw r18, 0x4(r4)
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F10:
    lwz r7, 0x8(r7)
    addi r0, r7, 0x1
    stw r0, 0x0(r4)
    stw r18, 0x4(r4)
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F24:
    stw r19, 0x0(r4)
    stw r8, 0x4(r4)
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F30:
    stw r20, 0x0(r4)
    stw r8, 0x4(r4)
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F3C:
    lwz r7, 0x8(r7)
    addi r0, r7, 0xd
    stw r0, 0x0(r4)
    stw r8, 0x4(r4)
    b lbl_fn_80474F0C_00001F60
lbl_fn_80474F0C_00001F50:
    lwz r7, 0x8(r7)
    addi r0, r7, 0xb
    stw r0, 0x0(r4)
    stw r8, 0x4(r4)
lbl_fn_80474F0C_00001F60:
    addi r3, r3, 0x1c
    addi r4, r4, 0x8
    addi r5, r5, 0x1
lbl_fn_80474F0C_00001F6C:
    lwz r0, 0x18(r6)
    cmpw r5, r0
    blt lbl_fn_80474F0C_00001EB0
    lwz r0, 0x1c(r25)
    li r4, 0x0
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00001FE0
    lwz r5, 0x2c(r24)
    slwi r3, r0, 2
    lwz r0, 0x44(r1)
    li r4, 0x1
    lwzx r3, r5, r3
    lwz r7, 0x38(r1)
    lwz r3, 0x14(r3)
    lwz r5, 0x3c(r1)
    lwz r8, 0x1c(r3)
    stw r0, 0x114(r1)
    lwz r3, 0xc(r8)
    lwz r0, 0x14(r8)
    slwi r3, r3, 2
    stw r7, 0x108(r1)
    lwzx r3, r21, r3
    stw r5, 0x10c(r1)
    stw r3, 0x110(r1)
    stb r0, 0x114(r1)
    stw r7, 0x2a8(r1)
    stw r5, 0x2ac(r1)
    stw r3, 0x2b0(r1)
    stb r0, 0x2b4(r1)
lbl_fn_80474F0C_00001FE0:
    lwz r0, 0x20(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00002050
    lwz r7, 0x2c(r24)
    slwi r5, r0, 2
    slwi r0, r4, 4
    addi r3, r1, 0x2a8
    lwzx r5, r7, r5
    add r3, r3, r0
    lwz r9, 0x28(r1)
    addi r4, r4, 0x1
    lwz r5, 0x14(r5)
    lwz r8, 0x2c(r1)
    lwz r10, 0x1c(r5)
    lwz r7, 0x34(r1)
    lwz r5, 0xc(r10)
    lwz r0, 0x14(r10)
    slwi r5, r5, 2
    stw r7, 0x104(r1)
    lwzx r5, r21, r5
    stw r9, 0x0(r3)
    stw r8, 0x4(r3)
    stw r5, 0x8(r3)
    stw r9, 0xf8(r1)
    stw r8, 0xfc(r1)
    stw r5, 0x100(r1)
    stb r0, 0x104(r1)
    stb r0, 0xc(r3)
lbl_fn_80474F0C_00002050:
    lwz r7, 0x24(r25)
    slwi r0, r4, 4
    addi r3, r1, 0x2a8
    cmpwi r7, -0x1
    add r3, r3, r0
    beq lbl_fn_80474F0C_000020C4
    lwz r5, 0x2c(r24)
    slwi r0, r7, 2
    li r7, 0xb
    lwz r8, 0x1c(r1)
    lwzx r5, r5, r0
    addi r4, r4, 0x1
    lwz r0, 0x24(r1)
    lwz r5, 0x14(r5)
    stw r0, 0xf4(r1)
    lwz r5, 0x1c(r5)
    stw r8, 0xec(r1)
    lwz r0, 0x14(r5)
    lwz r5, 0xc(r5)
    stw r7, 0xe8(r1)
    slwi r5, r5, 2
    stw r7, 0x0(r3)
    lwzx r5, r21, r5
    stw r8, 0x4(r3)
    stw r5, 0x8(r3)
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    stw r5, 0xf0(r1)
    stb r0, 0xf4(r1)
lbl_fn_80474F0C_000020C4:
    lwz r7, 0x28(r25)
    cmpwi r7, -0x1
    beq lbl_fn_80474F0C_00002128
    lwz r5, 0x2c(r24)
    slwi r0, r7, 2
    li r7, 0xc
    lwz r8, 0x1c(r1)
    lwzx r5, r5, r0
    addi r4, r4, 0x1
    lwz r0, 0x24(r1)
    lwz r5, 0x14(r5)
    stw r0, 0xf4(r1)
    lwz r5, 0x1c(r5)
    stw r8, 0xec(r1)
    lwz r0, 0x14(r5)
    lwz r5, 0xc(r5)
    stw r7, 0xe8(r1)
    slwi r5, r5, 2
    stw r7, 0x0(r3)
    lwzx r5, r21, r5
    stw r8, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xf0(r1)
    stb r0, 0xf4(r1)
    stb r0, 0xc(r3)
lbl_fn_80474F0C_00002128:
    slwi r0, r4, 4
    addi r3, r1, 0x2a8
    add r3, r3, r0
    li r5, 0x0
    li r0, 0x4
    mtctr r0
lbl_fn_80474F0C_00002140:
    lwz r0, 0x2c(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_000021A8
    lwz r7, 0x2c(r24)
    slwi r0, r0, 2
    addi r8, r5, 0xd
    lwz r9, 0xc(r1)
    lwzx r7, r7, r0
    addi r4, r4, 0x1
    lwz r0, 0x14(r1)
    lwz r7, 0x14(r7)
    stw r0, 0xe4(r1)
    lwz r7, 0x1c(r7)
    stw r9, 0xdc(r1)
    lwz r0, 0x14(r7)
    lwz r7, 0xc(r7)
    stw r8, 0xd8(r1)
    slwi r7, r7, 2
    stw r8, 0x0(r3)
    lwzx r7, r21, r7
    stw r9, 0x4(r3)
    stw r7, 0x8(r3)
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    stw r7, 0xe0(r1)
    stb r0, 0xe4(r1)
lbl_fn_80474F0C_000021A8:
    lwz r0, 0x30(r25)
    cmpwi r0, -0x1
    beq lbl_fn_80474F0C_00002210
    lwz r7, 0x2c(r24)
    slwi r0, r0, 2
    addi r8, r5, 0xe
    lwz r9, 0xc(r1)
    lwzx r7, r7, r0
    addi r4, r4, 0x1
    lwz r0, 0x14(r1)
    lwz r7, 0x14(r7)
    stw r0, 0xe4(r1)
    lwz r7, 0x1c(r7)
    stw r9, 0xdc(r1)
    lwz r0, 0x14(r7)
    lwz r7, 0xc(r7)
    stw r8, 0xd8(r1)
    slwi r7, r7, 2
    stw r8, 0x0(r3)
    lwzx r7, r21, r7
    stw r9, 0x4(r3)
    stw r7, 0x8(r3)
    stb r0, 0xc(r3)
    addi r3, r3, 0x10
    stw r7, 0xe0(r1)
    stb r0, 0xe4(r1)
lbl_fn_80474F0C_00002210:
    addi r25, r25, 0x8
    addi r5, r5, 0x2
    bdnz lbl_fn_80474F0C_00002140
    slwi r0, r4, 4
    addi r7, r1, 0x2a8
    add r7, r7, r0
    lwz r0, 0x6e8(r1)
    stw r0, 0x0(r7)
    addi r4, r1, 0x1d0
    lwz r0, 0x6ec(r1)
    addi r3, r1, 0x458
    stw r0, 0x4(r7)
    addi r5, r1, 0x2a8
    lwz r0, 0x6f0(r1)
    stw r0, 0x8(r7)
    lbz r0, 0x6e0(r1)
    stb r0, 0xc(r7)
    mr r7, r4
    lwz r15, lbl_8087EEE0
    lwz r0, 0x18(r6)
    slwi r0, r0, 3
    stwx r30, r7, r0
    lwz r0, 0x18(r6)
    slwi r6, r0, 3
    mr r0, r4
    add r6, r0, r6
    lwz r0, 0x72c(r1)
    stw r0, 0x4(r6)
    lwz r25, 0x80(r23)
    bl fn_80070E14
    mr r4, r3
    mr r3, r15
    bl fn_80076C44
    stwx r3, r25, r22
    addi r26, r26, 0x1
    lwz r3, 0x6e4(r1)
    addi r22, r22, 0x4
    addi r3, r3, 0x4
    stw r3, 0x6e4(r1)
    lwz r3, 0x730(r1)
    addi r3, r3, 0x144
    stw r3, 0x730(r1)
lbl_fn_80474F0C_000022B8:
    lwz r0, 0x3c(r24)
    cmpw r26, r0
    blt lbl_fn_80474F0C_00001728
lbl_fn_80474F0C_000022C4:
    lmw r14, 0x738(r1)
    lwz r0, 0x784(r1)
    mtlr r0
    addi r1, r1, 0x780
    blr
}
