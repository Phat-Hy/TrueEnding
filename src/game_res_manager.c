#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_24(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_24(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_8000DB1C(void);
extern void fn_80012A1C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_80084320(void);
extern void fn_800DC880(void);
extern void fn_800DC980(void);
extern void fn_800F7250(void);
extern void fn_80112F54(void);
extern void fn_801207D4(void);
extern void fn_80139550(void);
extern void fn_80139F2C(void);
extern void fn_8020A780(void);
extern void fn_80218218(void);
extern void fn_8021A4CC(void);
extern void fn_8022051C(void);
extern void fn_8022144C(void);
extern void fn_802214F8(void);
extern void fn_802219CC(void);
extern void fn_80221CAC(void);
extern void fn_80221CBC(void);
extern void fn_80221E00(void);
extern void fn_80222A24(void);
extern void fn_8022526C(void);
extern void fn_805381B0(void);
extern void fn_805392C0(void);
extern void fn_805411E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807428E0[];
extern u8 lbl_807428E8[];
extern u8 lbl_807428F4[];
extern u8 lbl_80742D7C[];
extern u8 lbl_807835F0[];
extern u8 lbl_80783650[];
extern u8 lbl_807836B0[];
extern u8 lbl_807C8088[];

/* Small data declarations */
extern u32 lbl_8087F540;
extern u32 lbl_80882FF0;
extern u32 lbl_80882FF4;
extern u32 lbl_80883014;
extern u32 lbl_80883018;
extern u32 lbl_8088301C;

/* Function declarations */
void fn_802238D0(void);
void fn_802239F8(void);
void fn_80223A00(void);
void fn_80223A08(void);
void fn_80223A10(void);
void fn_80223DDC(void);
void fn_80223DFC(void);
void fn_80223E38(void);
void fn_80223E74(void);
void fn_80223EB0(void);
void fn_80223EB8(void);
void fn_80223EC0(void);
void fn_80223EC8(void);
void fn_80223ED0(void);
void fn_80223ED8(void);
void fn_80223EE0(void);
void fn_80223F50(void);
void fn_80224184(void);
void fn_802245B8(void);
void fn_802245C0(void);
void fn_80224600(void);
void fn_80224608(void);
void fn_80224610(void);
void fn_80224618(void);
void fn_80224620(void);
void fn_80224628(void);
void fn_80224638(void);
void fn_8022492C(void);
void fn_802249E4(void);
void fn_802249EC(void);
void fn_80224A2C(void);
void fn_8022513C(void);
void fn_80225158(void);
void fn_802251C0(void);
void fn_802251DC(void);
void fn_802251F8(void);

asm void fn_802238D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lwz r7, lbl_8087F540
    lwz r9, 0x70(r7)
    cmpwi r9, 0x0
    bne lbl_fn_802238D0_0000001C
    li r3, 0x0
    b lbl_fn_802238D0_00000120
lbl_fn_802238D0_0000001C:
    lwz r0, 0x10(r4)
    lwz r10, 0x14(r4)
    cmpwi r0, 0x0
    subf r7, r0, r10
    bne lbl_fn_802238D0_0000003C
    cmpwi r7, 0x0
    bne lbl_fn_802238D0_0000003C
    li r10, 0x1
lbl_fn_802238D0_0000003C:
    xoris r0, r0, 0x8000
    lis r7, 0x4330
    lis r8, lbl_807428E0@ha
    stw r0, 0xc(r1)
    lfd f1, lbl_807428E0@l(r8)
    stw r7, 0x8(r1)
    lfs f2, 0x198(r9)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    cror eq, lt, eq
    bne lbl_fn_802238D0_0000011C
    xoris r0, r10, 0x8000
    stw r0, 0xc(r1)
    stw r7, 0x8(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_802238D0_0000011C
    cmpwi r6, 0x0
    beq lbl_fn_802238D0_000000A0
    cmpwi r6, 0x1
    beq lbl_fn_802238D0_000000F0
    b lbl_fn_802238D0_0000011C
lbl_fn_802238D0_000000A0:
    lwz r0, 0x20(r3)
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802238D0_000000D4
lbl_fn_802238D0_000000B4:
    lwz r6, 0x1c(r3)
    lwzx r0, r6, r4
    cmplw r5, r0
    bne lbl_fn_802238D0_000000CC
    li r0, 0x1
    b lbl_fn_802238D0_000000D8
lbl_fn_802238D0_000000CC:
    addi r4, r4, 0x14
    bdnz lbl_fn_802238D0_000000B4
lbl_fn_802238D0_000000D4:
    li r0, 0x0
lbl_fn_802238D0_000000D8:
    cmpwi r0, 0x0
    beq lbl_fn_802238D0_000000E8
    li r3, 0x0
    b lbl_fn_802238D0_00000120
lbl_fn_802238D0_000000E8:
    li r3, 0x1
    b lbl_fn_802238D0_00000120
lbl_fn_802238D0_000000F0:
    lwz r0, 0xc(r4)
    cmpwi r0, 0x21
    beq lbl_fn_802238D0_0000010C
    cmpwi r0, 0x25
    beq lbl_fn_802238D0_0000010C
    cmpwi r0, 0x20
    bne lbl_fn_802238D0_00000114
lbl_fn_802238D0_0000010C:
    li r3, 0x1
    b lbl_fn_802238D0_00000120
lbl_fn_802238D0_00000114:
    li r3, 0x0
    b lbl_fn_802238D0_00000120
lbl_fn_802238D0_0000011C:
    li r3, 0x0
lbl_fn_802238D0_00000120:
    addi r1, r1, 0x10
    blr
}

asm void fn_802239F8(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

asm void fn_80223A00(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

asm void fn_80223A08(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_80223A10(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x2a0
    bl _savegpr_21
    mr r31, r3
    bl fn_8000DB1C
    bl fn_80112F54
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80223A10_000004F4
    bl fn_800F7250
    lfs f4, 0xc(r31)
    lis r30, lbl_807428F4@ha
    lfs f0, 0x8(r31)
    addi r30, r30, lbl_807428F4@l
    fmr f5, f4
    lfs f1, 0x4(r31)
    fadds f2, f0, f4
    lfs f3, lbl_80882FF4
    addi r4, r30, 0x301
    li r5, -0x1
    li r6, 0x1
    bl fn_80221CAC
    mr r3, r28
    bl fn_805411E0
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80223A10_000004F4
    bl fn_80221E00
    mr r29, r3
    addi r3, r1, 0x5c
    bl fn_80223DDC
    addi r3, r1, 0x50
    bl fn_8021A4CC
    lwz r0, 0x10(r31)
    cmpw r0, r29
    beq lbl_fn_80223A10_00000258
    stw r29, 0x10(r31)
    mr r3, r27
    bl fn_80222A24
    mr r5, r3
    addi r3, r1, 0x170
    addi r4, r30, 0x317
    crclr 6
    bl sprintf
    addi r3, r1, 0x50
    addi r4, r1, 0x170
    bl fn_8020A780
    addi r3, r1, 0x60
    addi r4, r1, 0x50
    bl fn_801207D4
    addi r3, r1, 0x50
    addi r4, r30, 0x14
    bl fn_8020A780
    li r29, 0x0
lbl_fn_80223A10_00000220:
    addi r3, r1, 0x60
    addi r4, r1, 0x50
    bl fn_801207D4
    addi r29, r29, 0x1
    cmpwi r29, 0x5
    blt lbl_fn_80223A10_00000220
    lis r3, 0xffc1
    li r4, 0x0
    subi r0, r3, 0x3f40
    stw r4, 0x5c(r1)
    addi r3, r31, 0x14
    addi r4, r1, 0x5c
    stw r0, 0x6c(r1)
    bl fn_8022051C
lbl_fn_80223A10_00000258:
    lis r29, lbl_807428F4@ha
    li r26, 0x0
    addi r29, r29, lbl_807428F4@l
    b lbl_fn_80223A10_000004B4
lbl_fn_80223A10_00000268:
    mr r3, r27
    mr r4, r26
    bl fn_80223DFC
    mr r25, r3
    li r24, 0x0
    b lbl_fn_80223A10_000004A0
lbl_fn_80223A10_00000280:
    mr r3, r25
    mr r4, r24
    bl fn_80223E38
    mr r23, r3
    li r22, 0x0
    b lbl_fn_80223A10_0000048C
lbl_fn_80223A10_00000298:
    mr r3, r23
    mr r4, r22
    bl fn_80223E74
    mr r21, r3
    mr r3, r31
    mr r4, r21
    li r6, 0x0
    mr r5, r21
    bl fn_802238D0
    cmpwi r3, 0x0
    beq lbl_fn_80223A10_00000488
    mr r3, r28
    bl fn_80223EB0
    cmpwi r3, 0xa
    bne lbl_fn_80223A10_00000488
    addi r3, r1, 0x60
    bl fn_80223EE0
    mr r3, r21
    bl fn_802239F8
    mr r5, r3
    addi r3, r1, 0x70
    addi r4, r29, 0x326
    crclr 6
    bl sprintf
    addi r3, r1, 0x44
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x44
    bl fn_801207D4
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r21
    bl fn_80223A00
    mr r30, r3
    mr r3, r21
    bl fn_802239F8
    subf r5, r3, r30
    addi r3, r1, 0x70
    addi r4, r29, 0x326
    crclr 6
    bl sprintf
    addi r3, r1, 0x38
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x38
    bl fn_801207D4
    addi r3, r1, 0x38
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r21
    bl fn_80223EB8
    mr r5, r3
    addi r3, r1, 0x70
    addi r4, r29, 0x326
    crclr 6
    bl sprintf
    addi r3, r1, 0x2c
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x2c
    bl fn_801207D4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r21
    bl fn_80223EC0
    mr r5, r3
    addi r3, r1, 0x70
    addi r4, r29, 0x326
    crclr 6
    bl sprintf
    addi r3, r1, 0x20
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x20
    bl fn_801207D4
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r23
    bl fn_80222A24
    mr r30, r3
    mr r3, r25
    bl fn_80222A24
    mr r5, r3
    mr r6, r30
    addi r3, r1, 0x70
    addi r4, r29, 0x329
    crclr 6
    bl sprintf
    addi r3, r1, 0x14
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x14
    bl fn_801207D4
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r21
    bl fn_80222A24
    mr r5, r3
    addi r3, r1, 0x70
    addi r4, r29, 0x32f
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    addi r4, r1, 0x70
    bl fn_8003E4A4
    addi r3, r1, 0x60
    addi r4, r1, 0x8
    bl fn_801207D4
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    stw r21, 0x5c(r1)
    addi r3, r31, 0x14
    addi r4, r1, 0x5c
    bl fn_8022051C
lbl_fn_80223A10_00000488:
    addi r22, r22, 0x1
lbl_fn_80223A10_0000048C:
    mr r3, r23
    bl fn_80223EC8
    cmpw r22, r3
    blt lbl_fn_80223A10_00000298
    addi r24, r24, 0x1
lbl_fn_80223A10_000004A0:
    mr r3, r25
    bl fn_80223ED0
    cmpw r24, r3
    blt lbl_fn_80223A10_00000280
    addi r26, r26, 0x1
lbl_fn_80223A10_000004B4:
    mr r3, r27
    bl fn_80223ED8
    cmpw r26, r3
    blt lbl_fn_80223A10_00000268
    lfs f1, 0x4(r31)
    addi r3, r31, 0x14
    lfs f2, 0x8(r31)
    li r4, 0x3
    lfs f3, 0xc(r31)
    bl fn_802219CC
    addi r3, r1, 0x50
    li r4, -0x1
    bl dtor_80013D60
    addi r3, r1, 0x5c
    li r4, -0x1
    bl fn_8022144C
lbl_fn_80223A10_000004F4:
    addi r11, r1, 0x2a0
    bl _restgpr_21
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_80223DDC(void)
{
    nofralloc
    li r4, 0x0
    li r0, -0x1
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    stw r4, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_80223DFC(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r5, 0x0
    blt lbl_fn_80223DFC_00000548
    lwz r0, 0x40(r3)
    cmpw r4, r0
    bge lbl_fn_80223DFC_00000548
    li r5, 0x1
lbl_fn_80223DFC_00000548:
    cmpwi r5, 0x0
    beq lbl_fn_80223DFC_00000560
    lwz r3, 0x3c(r3)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    blr
lbl_fn_80223DFC_00000560:
    li r3, 0x0
    blr
}

asm void fn_80223E38(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r5, 0x0
    blt lbl_fn_80223E38_00000584
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bge lbl_fn_80223E38_00000584
    li r5, 0x1
lbl_fn_80223E38_00000584:
    cmpwi r5, 0x0
    beq lbl_fn_80223E38_0000059C
    lwz r3, 0x18(r3)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    blr
lbl_fn_80223E38_0000059C:
    li r3, 0x0
    blr
}

asm void fn_80223E74(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r5, 0x0
    blt lbl_fn_80223E74_000005C0
    lwz r0, 0x18(r3)
    cmpw r4, r0
    bge lbl_fn_80223E74_000005C0
    li r5, 0x1
lbl_fn_80223E74_000005C0:
    cmpwi r5, 0x0
    beq lbl_fn_80223E74_000005D8
    lwz r3, 0x14(r3)
    slwi r0, r4, 3
    lwzx r3, r3, r0
    blr
lbl_fn_80223E74_000005D8:
    li r3, 0x0
    blr
}

asm void fn_80223EB0(void)
{
    nofralloc
    lwz r3, 0x194(r3)
    blr
}

asm void fn_80223EB8(void)
{
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

asm void fn_80223EC0(void)
{
    nofralloc
    lwz r3, 0x1c(r3)
    blr
}

asm void fn_80223EC8(void)
{
    nofralloc
    lwz r3, 0x18(r3)
    blr
}

asm void fn_80223ED0(void)
{
    nofralloc
    lwz r3, 0x1c(r3)
    blr
}

asm void fn_80223ED8(void)
{
    nofralloc
    lwz r3, 0x40(r3)
    blr
}

asm void fn_80223EE0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, 0x4(r3)
    lwz r5, 0x0(r3)
    mulli r4, r30, 0xc
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_80223EE0_00000660
lbl_fn_80223EE0_00000640:
    subic. r31, r31, 0xc
    beq lbl_fn_80223EE0_0000065C
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80223EE0_0000065C
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_80223EE0_0000065C:
    subi r30, r30, 0x1
lbl_fn_80223EE0_00000660:
    cmpwi r30, 0x0
    bne lbl_fn_80223EE0_00000640
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80223F50(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0x90
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    bl _savegpr_24
    lfs f0, lbl_80883014
    fmr f31, f1
    mr r24, r3
    mr r25, r4
    fcmpu cr0, f0, f1
    mr r26, r5
    mr r27, r6
    mr r28, r7
    add r30, r4, r8
    li r29, -0x1
    beq lbl_fn_80223F50_000006F8
    lfs f0, lbl_80883018
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_80223F50_000006F0
    lfs f0, lbl_8088301C
    fcmpo cr0, f1, f0
    cror eq, lt, eq
    bne lbl_fn_80223F50_000006F0
    li r29, -0x100
    b lbl_fn_80223F50_00000728
lbl_fn_80223F50_000006F0:
    lis r29, 0xffff
    b lbl_fn_80223F50_00000728
lbl_fn_80223F50_000006F8:
    xoris r3, r6, 0x8000
    lis r0, 0x4330
    lis r4, lbl_807428E0@ha
    stw r3, 0x6c(r1)
    lfd f1, lbl_807428E0@l(r4)
    stw r0, 0x68(r1)
    lfs f2, lbl_80882FF0
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpu cr0, f2, f0
    beq lbl_fn_80223F50_00000728
    lis r29, 0xffff
lbl_fn_80223F50_00000728:
    addi r3, r1, 0x50
    bl fn_80223DDC
    mr r3, r25
    bl fn_802239F8
    lis r31, lbl_807428F4@ha
    mr r5, r3
    addi r31, r31, lbl_807428F4@l
    addi r3, r1, 0x44
    addi r4, r31, 0x326
    crclr 6
    bl fn_800DC980
    addi r3, r1, 0x54
    addi r4, r1, 0x44
    bl fn_801207D4
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r25
    bl fn_805381B0
    bl fn_80222A24
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8003E4A4
    addi r3, r1, 0x54
    addi r4, r1, 0x38
    bl fn_801207D4
    addi r3, r1, 0x38
    li r4, -0x1
    bl dtor_80013D60
    mr r3, r26
    bl fn_80218218
    mr r4, r3
    addi r3, r1, 0x2c
    bl fn_8003E4A4
    addi r3, r1, 0x54
    addi r4, r1, 0x2c
    bl fn_801207D4
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
    fmr f1, f31
    addi r3, r1, 0x20
    addi r4, r31, 0x332
    crset 6
    bl fn_800DC980
    addi r3, r1, 0x54
    addi r4, r1, 0x20
    bl fn_801207D4
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    mr r5, r27
    addi r3, r1, 0x14
    addi r4, r31, 0x326
    crclr 6
    bl fn_800DC980
    addi r3, r1, 0x54
    addi r4, r1, 0x14
    bl fn_801207D4
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    cmpwi r28, 0x0
    addi r3, r1, 0x8
    addi r4, r31, 0x256
    beq lbl_fn_80223F50_00000834
    addi r4, r31, 0x337
lbl_fn_80223F50_00000834:
    bl fn_8003E4A4
    addi r3, r1, 0x54
    addi r4, r1, 0x8
    bl fn_801207D4
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    stw r30, 0x50(r1)
    mr r4, r30
    addi r3, r24, 0x2c
    stw r29, 0x60(r1)
    bl fn_80221CBC
    cmpwi r3, 0x0
    beq lbl_fn_80223F50_0000087C
    addi r3, r24, 0x2c
    addi r4, r1, 0x50
    bl fn_802214F8
    b lbl_fn_80223F50_00000888
lbl_fn_80223F50_0000087C:
    addi r3, r24, 0x2c
    addi r4, r1, 0x50
    bl fn_8022051C
lbl_fn_80223F50_00000888:
    addi r3, r1, 0x50
    li r4, -0x1
    bl fn_8022144C
    addi r11, r1, 0x90
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    bl _restgpr_24
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80224184(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_20
    mr r31, r3
    bl fn_8000DB1C
    bl fn_80112F54
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_80224184_00000CC8
    bl fn_800F7250
    lfs f4, 0xc(r31)
    lis r4, lbl_807428F4@ha
    lfs f0, 0x8(r31)
    addi r29, r4, lbl_807428F4@l
    fmr f5, f4
    lfs f1, 0x4(r31)
    fadds f2, f0, f4
    lfs f3, lbl_80882FF4
    addi r4, r29, 0x339
    li r5, -0x1
    li r6, 0x1
    bl fn_80221CAC
    mr r3, r28
    bl fn_805411E0
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80224184_00000CC8
    bl fn_80221E00
    lwz r0, 0x10(r31)
    cmpw r0, r3
    beq lbl_fn_80224184_000009E0
    stw r3, 0x10(r31)
    addi r3, r1, 0x20
    bl fn_80223DDC
    mr r3, r27
    bl fn_80222A24
    mr r5, r3
    addi r3, r1, 0x14
    addi r4, r29, 0x317
    crclr 6
    bl fn_800DC980
    addi r3, r1, 0x24
    addi r4, r1, 0x14
    bl fn_801207D4
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    li r30, 0x0
lbl_fn_80224184_00000984:
    addi r3, r1, 0x8
    addi r4, r29, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x24
    addi r4, r1, 0x8
    bl fn_801207D4
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    addi r30, r30, 0x1
    cmpwi r30, 0x5
    blt lbl_fn_80224184_00000984
    lis r3, 0xffc1
    li r4, 0x0
    subi r0, r3, 0x3f40
    stw r4, 0x20(r1)
    addi r3, r31, 0x2c
    addi r4, r1, 0x20
    stw r0, 0x30(r1)
    bl fn_8022051C
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_8022144C
lbl_fn_80224184_000009E0:
    lis r3, lbl_807428F4@ha
    li r26, 0x0
    addi r29, r3, lbl_807428F4@l
    b lbl_fn_80224184_00000CA0
lbl_fn_80224184_000009F0:
    mr r3, r27
    mr r4, r26
    bl fn_80223DFC
    mr r25, r3
    li r24, 0x0
    b lbl_fn_80224184_00000C8C
lbl_fn_80224184_00000A08:
    mr r3, r25
    mr r4, r24
    bl fn_80223E38
    mr r23, r3
    li r22, 0x0
    b lbl_fn_80224184_00000C78
lbl_fn_80224184_00000A20:
    mr r3, r23
    mr r4, r22
    bl fn_80223E74
    mr r21, r3
    mr r3, r31
    mr r4, r21
    li r5, 0x0
    li r6, 0x1
    bl fn_802238D0
    cmpwi r3, 0x0
    beq lbl_fn_80224184_00000C74
    mr r3, r21
    bl fn_80223A08
    cmpwi r3, 0x21
    beq lbl_fn_80224184_00000A70
    cmpwi r3, 0x25
    beq lbl_fn_80224184_00000B64
    cmpwi r3, 0x20
    beq lbl_fn_80224184_00000C08
    b lbl_fn_80224184_00000C74
lbl_fn_80224184_00000A70:
    mr r3, r21
    addi r4, r29, 0x34f
    bl fn_802245C0
    bl fn_802245B8
    mr r30, r3
    mr r3, r21
    addi r4, r29, 0x356
    bl fn_802245C0
    bl fn_80224600
    fmr f31, f1
    mr r3, r21
    addi r4, r29, 0x35c
    bl fn_802245C0
    bl fn_80224608
    mr r20, r3
    mr r3, r21
    addi r4, r29, 0x362
    bl fn_802245C0
    bl fn_80224610
    fmr f1, f31
    mr r7, r3
    mr r3, r31
    mr r4, r21
    mr r5, r30
    mr r6, r20
    li r8, 0x0
    bl fn_80223F50
    mr r3, r21
    addi r4, r29, 0x367
    bl fn_802245C0
    bl fn_80224610
    cmpwi r3, 0x0
    beq lbl_fn_80224184_00000C74
    mr r3, r21
    addi r4, r29, 0x370
    bl fn_802245C0
    bl fn_802245B8
    mr r20, r3
    mr r3, r21
    addi r4, r29, 0x377
    bl fn_802245C0
    bl fn_80224600
    fmr f31, f1
    mr r3, r21
    addi r4, r29, 0x380
    bl fn_802245C0
    bl fn_80224608
    mr r30, r3
    mr r3, r21
    addi r4, r29, 0x389
    bl fn_802245C0
    bl fn_80224610
    fmr f1, f31
    mr r7, r3
    mr r3, r31
    mr r4, r21
    mr r5, r20
    mr r6, r30
    li r8, 0x1
    bl fn_80223F50
    b lbl_fn_80224184_00000C74
lbl_fn_80224184_00000B64:
    mr r3, r21
    addi r4, r29, 0x391
    bl fn_802245C0
    cmpwi r3, 0x0
    beq lbl_fn_80224184_00000C74
    bl fn_80224610
    cmpwi r3, 0x0
    beq lbl_fn_80224184_00000C74
    mr r3, r25
    bl fn_80224618
    mr r20, r3
    mr r3, r28
    bl fn_80224620
    mr r4, r20
    bl fn_802249EC
    cmpwi r3, 0x0
    beq lbl_fn_80224184_00000BB4
    bl fn_80012A1C
    mr r30, r3
    b lbl_fn_80224184_00000BB8
lbl_fn_80224184_00000BB4:
    li r30, 0x0
lbl_fn_80224184_00000BB8:
    mr r3, r21
    addi r4, r29, 0x39a
    bl fn_802245C0
    bl fn_802245B8
    cmpwi r30, 0x0
    mr r20, r3
    beq lbl_fn_80224184_00000BE4
    mr r3, r30
    li r4, 0x0
    bl fn_80224628
    b lbl_fn_80224184_00000BE8
lbl_fn_80224184_00000BE4:
    lfs f1, lbl_80882FF0
lbl_fn_80224184_00000BE8:
    mr r3, r31
    mr r4, r21
    mr r5, r20
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80223F50
    b lbl_fn_80224184_00000C74
lbl_fn_80224184_00000C08:
    mr r3, r21
    addi r4, r29, 0x34f
    bl fn_802245C0
    bl fn_802245B8
    mr r20, r3
    mr r3, r21
    addi r4, r29, 0x356
    bl fn_802245C0
    bl fn_80224600
    fmr f31, f1
    mr r3, r21
    addi r4, r29, 0x35c
    bl fn_802245C0
    bl fn_80224608
    mr r30, r3
    mr r3, r21
    addi r4, r29, 0x362
    bl fn_802245C0
    bl fn_80224610
    fmr f1, f31
    mr r7, r3
    mr r3, r31
    mr r4, r21
    mr r5, r20
    mr r6, r30
    li r8, 0x0
    bl fn_80223F50
lbl_fn_80224184_00000C74:
    addi r22, r22, 0x1
lbl_fn_80224184_00000C78:
    mr r3, r23
    bl fn_80223EC8
    cmpw r22, r3
    blt lbl_fn_80224184_00000A20
    addi r24, r24, 0x1
lbl_fn_80224184_00000C8C:
    mr r3, r25
    bl fn_80223ED0
    cmpw r24, r3
    blt lbl_fn_80224184_00000A08
    addi r26, r26, 0x1
lbl_fn_80224184_00000CA0:
    mr r3, r27
    bl fn_80223ED8
    cmpw r26, r3
    blt lbl_fn_80224184_000009F0
    lfs f1, 0x4(r31)
    addi r3, r31, 0x2c
    lfs f2, 0x8(r31)
    li r4, 0x3
    lfs f3, 0xc(r31)
    bl fn_802219CC
lbl_fn_80224184_00000CC8:
    addi r11, r1, 0x70
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    bl _restgpr_20
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_802245B8(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_802245C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    li r4, 0x0
    bl fn_800DC880
    mr r4, r3
    mr r3, r31
    bl fn_805392C0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80224600(void)
{
    nofralloc
    lfs f1, 0x4(r3)
    blr
}

asm void fn_80224608(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80224610(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80224618(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    blr
}

asm void fn_80224620(void)
{
    nofralloc
    addi r3, r3, 0x164
    blr
}

asm void fn_80224628(void)
{
    nofralloc
    mulli r0, r4, 0x30
    add r3, r3, r0
    lfs f1, 0x238(r3)
    blr
}

asm void fn_80224638(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    bl _savegpr_20
    mr r20, r3
    bl fn_8000DB1C
    bl fn_80112F54
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80224638_00001034
    bl fn_800F7250
    lfs f4, 0xc(r20)
    lis r4, lbl_807428F4@ha
    lfs f0, 0x8(r20)
    addi r30, r4, lbl_807428F4@l
    fmr f5, f4
    lfs f1, 0x4(r20)
    fadds f2, f0, f4
    lfs f3, lbl_80882FF4
    addi r4, r30, 0x3a3
    li r5, -0x1
    li r6, 0x1
    bl fn_80221CAC
    mr r3, r26
    bl fn_805411E0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80224638_00001034
    addi r3, r20, 0x44
    bl fn_8022492C
    li r24, 0x0
    lis r31, lbl_807428E8@ha
    b lbl_fn_80224638_0000100C
lbl_fn_80224638_00000E00:
    mr r3, r25
    mr r4, r24
    bl fn_80223DFC
    mr r27, r3
    bl fn_802249E4
    cmpwi r3, 0x3
    bne lbl_fn_80224638_00001008
    mr r3, r27
    bl fn_80224618
    mr r28, r3
    mr r3, r26
    bl fn_80224620
    mr r4, r28
    bl fn_802249EC
    cmpwi r3, 0x0
    beq lbl_fn_80224638_00001008
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_80224638_00001008
    addi r3, r1, 0x50
    bl fn_80223DDC
    mr r3, r27
    bl fn_80222A24
    mr r4, r3
    addi r3, r1, 0x44
    bl fn_8003E4A4
    addi r3, r1, 0x54
    addi r4, r1, 0x44
    bl fn_801207D4
    addi r3, r1, 0x44
    li r4, -0x1
    bl dtor_80013D60
    addi r27, r31, lbl_807428E8@l
    li r22, 0x0
lbl_fn_80224638_00000E8C:
    lwz r4, 0x0(r27)
    mr r3, r23
    bl fn_80139F2C
    lwz r4, 0x0(r27)
    mr r21, r3
    mr r3, r23
    bl fn_80224628
    fmr f31, f1
    lwz r4, 0x0(r27)
    mr r3, r23
    bl fn_80139550
    cmpwi r21, 0x0
    fmr f30, f1
    bge lbl_fn_80224638_00000ECC
    addi r3, r30, 0x14
    b lbl_fn_80224638_00000ED4
lbl_fn_80224638_00000ECC:
    mr r3, r21
    bl fn_80218218
lbl_fn_80224638_00000ED4:
    mr r4, r3
    addi r3, r1, 0x38
    bl fn_8003E4A4
    addi r3, r1, 0x54
    addi r4, r1, 0x38
    bl fn_801207D4
    addi r3, r1, 0x38
    li r4, -0x1
    bl dtor_80013D60
    cmpwi r21, 0x0
    li r29, 0x0
    li r28, 0x0
    bge lbl_fn_80224638_00000F20
    addi r3, r1, 0x2c
    addi r4, r30, 0x14
    bl fn_8003E4A4
    addi r4, r1, 0x2c
    li r29, 0x1
    b lbl_fn_80224638_00000F3C
lbl_fn_80224638_00000F20:
    fmr f1, f31
    addi r3, r1, 0x20
    addi r4, r30, 0x332
    crset 6
    bl fn_800DC980
    li r28, 0x1
    addi r4, r1, 0x20
lbl_fn_80224638_00000F3C:
    addi r3, r1, 0x54
    bl fn_801207D4
    cmpwi r28, 0x0
    beq lbl_fn_80224638_00000F58
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80224638_00000F58:
    cmpwi r29, 0x0
    beq lbl_fn_80224638_00000F6C
    addi r3, r1, 0x2c
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80224638_00000F6C:
    cmpwi r21, 0x0
    li r28, 0x0
    li r29, 0x0
    bge lbl_fn_80224638_00000F94
    addi r3, r1, 0x14
    addi r4, r30, 0x14
    bl fn_8003E4A4
    addi r4, r1, 0x14
    li r28, 0x1
    b lbl_fn_80224638_00000FB0
lbl_fn_80224638_00000F94:
    fmr f1, f30
    addi r3, r1, 0x8
    addi r4, r30, 0x3bb
    crset 6
    bl fn_800DC980
    li r29, 0x1
    addi r4, r1, 0x8
lbl_fn_80224638_00000FB0:
    addi r3, r1, 0x54
    bl fn_801207D4
    cmpwi r29, 0x0
    beq lbl_fn_80224638_00000FCC
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80224638_00000FCC:
    cmpwi r28, 0x0
    beq lbl_fn_80224638_00000FE0
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
lbl_fn_80224638_00000FE0:
    addi r22, r22, 0x1
    addi r27, r27, 0x4
    cmpwi r22, 0x3
    blt lbl_fn_80224638_00000E8C
    addi r3, r20, 0x44
    addi r4, r1, 0x50
    bl fn_8022051C
    addi r3, r1, 0x50
    li r4, -0x1
    bl fn_8022144C
lbl_fn_80224638_00001008:
    addi r24, r24, 0x1
lbl_fn_80224638_0000100C:
    mr r3, r25
    bl fn_80223ED8
    cmpw r24, r3
    blt lbl_fn_80224638_00000E00
    lfs f1, 0x4(r20)
    addi r3, r20, 0x44
    lfs f2, 0x8(r20)
    li r4, 0x3
    lfs f3, 0xc(r20)
    bl fn_802219CC
lbl_fn_80224638_00001034:
    addi r11, r1, 0xa0
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    bl _restgpr_20
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8022492C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    lwz r27, 0xc(r3)
    lwz r5, 0x8(r3)
    mulli r4, r27, 0x14
    subf r0, r27, r27
    stw r0, 0xc(r3)
    add r31, r5, r4
    b lbl_fn_8022492C_000010F8
lbl_fn_8022492C_00001088:
    subic. r31, r31, 0x14
    beq lbl_fn_8022492C_000010F4
    addic. r30, r31, 0x4
    beq lbl_fn_8022492C_000010F4
    beq lbl_fn_8022492C_000010F4
    beq lbl_fn_8022492C_000010F4
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8022492C_000010F4
    lwz r28, 0x4(r30)
    mulli r3, r28, 0xc
    subf r0, r28, r28
    stw r0, 0x4(r30)
    add r29, r4, r3
    b lbl_fn_8022492C_000010E4
lbl_fn_8022492C_000010C4:
    subic. r29, r29, 0xc
    beq lbl_fn_8022492C_000010E0
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_8022492C_000010E0
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_8022492C_000010E0:
    subi r28, r28, 0x1
lbl_fn_8022492C_000010E4:
    cmpwi r28, 0x0
    bne lbl_fn_8022492C_000010C4
    lwz r3, 0x0(r30)
    bl dtor_80084684
lbl_fn_8022492C_000010F4:
    subi r27, r27, 0x1
lbl_fn_8022492C_000010F8:
    cmpwi r27, 0x0
    bne lbl_fn_8022492C_00001088
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802249E4(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    blr
}

asm void fn_802249EC(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r5, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_802249EC_00001154
lbl_fn_802249EC_00001130:
    lwz r0, 0x0(r3)
    add r6, r0, r5
    lwz r0, 0x14(r6)
    cmpw r4, r0
    bne lbl_fn_802249EC_0000114C
    mr r3, r6
    blr
lbl_fn_802249EC_0000114C:
    addi r5, r5, 0x1c0
    bdnz lbl_fn_802249EC_00001130
lbl_fn_802249EC_00001154:
    li r3, 0x0
    blr
}

asm void fn_80224A2C(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stmw r25, 0xc4(r1)
    lis r28, lbl_807835F0@ha
    lis r30, lbl_807428F4@ha
    lis r29, lbl_807C8088@ha
    addi r28, r28, lbl_807835F0@l
    li r31, 0x0
    addi r26, r28, 0x0
    addi r30, r30, lbl_807428F4@l
    addi r27, r30, 0x419
    addi r29, r29, lbl_807C8088@l
    mr r3, r27
    stw r31, 0x0(r26)
    stw r31, 0x4(r26)
    stw r31, 0x8(r26)
    bl strlen
    mr r25, r3
    mr r3, r26
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0xb4(r1)
    mr r3, r26
    stb r0, 0xb0(r1)
    mr r6, r27
    add r7, r27, r25
    addi r8, r1, 0xb0
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x41f
    stw r31, 0x10(r26)
    mr r3, r27
    stw r31, 0x14(r26)
    stw r31, 0x18(r26)
    bl strlen
    mr r25, r3
    addi r3, r26, 0x10
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0xac(r1)
    mr r6, r27
    stb r0, 0xa8(r1)
    addi r3, r26, 0x10
    add r7, r27, r25
    addi r8, r1, 0xa8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x426
    stw r31, 0x20(r26)
    mr r3, r27
    stw r31, 0x24(r26)
    stw r31, 0x28(r26)
    bl strlen
    mr r25, r3
    addi r3, r26, 0x20
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0xa4(r1)
    mr r6, r27
    stb r0, 0xa0(r1)
    addi r3, r26, 0x20
    add r7, r27, r25
    addi r8, r1, 0xa0
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x42d
    stw r31, 0x30(r26)
    mr r3, r27
    stw r31, 0x34(r26)
    stw r31, 0x38(r26)
    bl strlen
    mr r25, r3
    addi r3, r26, 0x30
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x9c(r1)
    mr r6, r27
    stb r0, 0x98(r1)
    addi r3, r26, 0x30
    add r7, r27, r25
    addi r8, r1, 0x98
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x435
    stw r31, 0x40(r26)
    mr r3, r27
    stw r31, 0x44(r26)
    stw r31, 0x48(r26)
    bl strlen
    mr r25, r3
    addi r3, r26, 0x40
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x94(r1)
    mr r6, r27
    stb r0, 0x90(r1)
    addi r3, r26, 0x40
    add r7, r27, r25
    addi r8, r1, 0x90
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r27, r30, 0x43a
    stw r31, 0x50(r26)
    mr r3, r27
    stw r31, 0x54(r26)
    stw r31, 0x58(r26)
    bl strlen
    mr r25, r3
    addi r3, r26, 0x50
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x8c(r1)
    mr r6, r27
    stb r0, 0x88(r1)
    addi r3, r26, 0x50
    add r7, r27, r25
    addi r8, r1, 0x88
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r4, fn_8022513C@ha
    addi r5, r29, 0x0
    addi r4, r4, fn_8022513C@l
    li r3, 0x0
    bl __register_global_object
    addi r27, r28, 0x60
    addi r26, r30, 0x419
    stw r31, 0x0(r27)
    mr r3, r26
    stw r31, 0x4(r27)
    stw r31, 0x8(r27)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x84(r1)
    mr r3, r27
    stb r0, 0x80(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x80
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x43f
    stw r31, 0x10(r27)
    mr r3, r26
    stw r31, 0x14(r27)
    stw r31, 0x18(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x10
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x7c(r1)
    mr r6, r26
    stb r0, 0x78(r1)
    addi r3, r27, 0x10
    add r7, r26, r25
    addi r8, r1, 0x78
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x445
    stw r31, 0x20(r27)
    mr r3, r26
    stw r31, 0x24(r27)
    stw r31, 0x28(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x20
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x74(r1)
    mr r6, r26
    stb r0, 0x70(r1)
    addi r3, r27, 0x20
    add r7, r26, r25
    addi r8, r1, 0x70
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x44c
    stw r31, 0x30(r27)
    mr r3, r26
    stw r31, 0x34(r27)
    stw r31, 0x38(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x30
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x6c(r1)
    mr r6, r26
    stb r0, 0x68(r1)
    addi r3, r27, 0x30
    add r7, r26, r25
    addi r8, r1, 0x68
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x452
    stw r31, 0x40(r27)
    mr r3, r26
    stw r31, 0x44(r27)
    stw r31, 0x48(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x40
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x64(r1)
    mr r6, r26
    stb r0, 0x60(r1)
    addi r3, r27, 0x40
    add r7, r26, r25
    addi r8, r1, 0x60
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x45b
    stw r31, 0x50(r27)
    mr r3, r26
    stw r31, 0x54(r27)
    stw r31, 0x58(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x50
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x5c(r1)
    mr r6, r26
    stb r0, 0x58(r1)
    addi r3, r27, 0x50
    add r7, r26, r25
    addi r8, r1, 0x58
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r4, fn_802251C0@ha
    addi r5, r29, 0xc
    addi r4, r4, fn_802251C0@l
    li r3, 0x0
    bl __register_global_object
    addi r27, r28, 0xc0
    addi r26, r30, 0x43f
    stw r31, 0x0(r27)
    mr r3, r26
    stw r31, 0x4(r27)
    stw r31, 0x8(r27)
    bl strlen
    mr r25, r3
    mr r3, r27
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x54(r1)
    mr r3, r27
    stb r0, 0x50(r1)
    mr r6, r26
    add r7, r26, r25
    addi r8, r1, 0x50
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x460
    stw r31, 0x10(r27)
    mr r3, r26
    stw r31, 0x14(r27)
    stw r31, 0x18(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x10
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x4c(r1)
    mr r6, r26
    stb r0, 0x48(r1)
    addi r3, r27, 0x10
    add r7, r26, r25
    addi r8, r1, 0x48
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x44c
    stw r31, 0x20(r27)
    mr r3, r26
    stw r31, 0x24(r27)
    stw r31, 0x28(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x20
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x44(r1)
    mr r6, r26
    stb r0, 0x40(r1)
    addi r3, r27, 0x20
    add r7, r26, r25
    addi r8, r1, 0x40
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x419
    stw r31, 0x30(r27)
    mr r3, r26
    stw r31, 0x34(r27)
    stw r31, 0x38(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x30
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x3c(r1)
    mr r6, r26
    stb r0, 0x38(r1)
    addi r3, r27, 0x30
    add r7, r26, r25
    addi r8, r1, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x464
    stw r31, 0x40(r27)
    mr r3, r26
    stw r31, 0x44(r27)
    stw r31, 0x48(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x40
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x34(r1)
    mr r6, r26
    stb r0, 0x30(r1)
    addi r3, r27, 0x40
    add r7, r26, r25
    addi r8, r1, 0x30
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x44c
    stw r31, 0x50(r27)
    mr r3, r26
    stw r31, 0x54(r27)
    stw r31, 0x58(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x50
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x2c(r1)
    mr r6, r26
    stb r0, 0x28(r1)
    addi r3, r27, 0x50
    add r7, r26, r25
    addi r8, r1, 0x28
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x419
    stw r31, 0x60(r27)
    mr r3, r26
    stw r31, 0x64(r27)
    stw r31, 0x68(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x60
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r6, r26
    stb r0, 0x20(r1)
    addi r3, r27, 0x60
    add r7, r26, r25
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x46a
    stw r31, 0x70(r27)
    mr r3, r26
    stw r31, 0x74(r27)
    stw r31, 0x78(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x70
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x1c(r1)
    mr r6, r26
    stb r0, 0x18(r1)
    addi r3, r27, 0x70
    add r7, r26, r25
    addi r8, r1, 0x18
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x44c
    stw r31, 0x80(r27)
    mr r3, r26
    stw r31, 0x84(r27)
    stw r31, 0x88(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x80
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r6, r26
    stb r0, 0x10(r1)
    addi r3, r27, 0x80
    add r7, r26, r25
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    addi r26, r30, 0x419
    stw r31, 0x90(r27)
    mr r3, r26
    stw r31, 0x94(r27)
    stw r31, 0x98(r27)
    bl strlen
    mr r25, r3
    addi r3, r27, 0x90
    mr r4, r25
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r6, r26
    stb r0, 0x8(r1)
    addi r3, r27, 0x90
    add r7, r26, r25
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r4, fn_802251DC@ha
    addi r5, r29, 0x18
    addi r4, r4, fn_802251DC@l
    li r3, 0x0
    bl __register_global_object
    lmw r25, 0xc4(r1)
    lwz r0, 0xe4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8022513C(void)
{
    nofralloc
    lis r3, lbl_807835F0@ha
    lis r4, fn_80225158@ha
    addi r3, r3, lbl_807835F0@l
    li r5, 0x10
    addi r4, r4, fn_80225158@l
    li r6, 0x6
    b fn_806959D8
}

asm void fn_80225158(void)
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
    beq lbl_fn_80225158_000018D4
    beq lbl_fn_80225158_000018C4
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_80225158_000018C4
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_80225158_000018C4:
    cmpwi r31, 0x0
    ble lbl_fn_80225158_000018D4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80225158_000018D4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802251C0(void)
{
    nofralloc
    lis r3, lbl_80783650@ha
    lis r4, fn_80225158@ha
    addi r3, r3, lbl_80783650@l
    li r5, 0x10
    addi r4, r4, fn_80225158@l
    li r6, 0x6
    b fn_806959D8
}

asm void fn_802251DC(void)
{
    nofralloc
    lis r3, lbl_807836B0@ha
    lis r4, fn_80225158@ha
    addi r3, r3, lbl_807836B0@l
    li r5, 0x10
    addi r4, r4, fn_80225158@l
    li r6, 0xa
    b fn_806959D8
}

asm void fn_802251F8(void)
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
    beq lbl_fn_802251F8_00001980
    lis r5, lbl_80742D7C@ha
    li r3, 0x1a18
    addi r5, r5, lbl_80742D7C@l
    li r4, 0x4
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_802251F8_00001984
    mr r4, r30
    mr r5, r31
    bl fn_8022526C
    b lbl_fn_802251F8_00001984
lbl_fn_802251F8_00001980:
    li r3, 0x0
lbl_fn_802251F8_00001984:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
