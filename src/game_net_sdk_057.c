#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80046784(void);
extern void fn_8059E378(void);
extern void fn_805A03A4(void);
extern void fn_805F30F0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);
extern void fn_80682428(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_80709AD0(void);
extern void fn_8070A050(void);
extern void fn_8070AF70(void);
extern void fn_8070AF90(void);
extern void fn_8070AFB0(void);
extern void fn_8070AFC0(void);
extern void fn_8070C650(void);
extern void fn_8070C780(void);
extern void fn_8070C8B0(void);
extern void fn_8070CEB0(void);
extern void fn_8070CED0(void);
extern void fn_8070CF70(void);
extern void fn_8070D180(void);
extern void fn_8070D360(void);
extern void fn_8070D380(void);
extern void fn_8070D490(void);
extern void fn_8070D630(void);
extern void fn_8070D720(void);
extern void fn_8070D850(void);
extern void fn_8070D900(void);
extern void fn_8070D9D0(void);
extern void fn_8070EE90(void);
extern void fn_8070F0D0(void);
extern void fn_8070F130(void);
extern void fn_807157D0(void);
extern void fn_80717EA0(void);
extern void fn_807187D0(void);
extern void fn_80721120(void);
extern void fn_80725170(void);
extern void fn_80725200(void);
extern void fn_807252A0(void);
extern void fn_807252D0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807C62D0[];
extern u8 lbl_807C6308[];
extern u8 lbl_807C6328[];
extern u8 lbl_808632A8[];
extern u8 lbl_808632C0[];
extern u8 lbl_808632D0[];

/* Small data declarations */
extern u32 lbl_808804E0;
extern u32 lbl_80889250;
extern u32 lbl_80889254;
extern u32 lbl_80889258;
extern u32 lbl_8088925C;
extern u32 lbl_80889260;
extern u32 lbl_80889264;

/* Function declarations */
void pad_03_80715D5C_text(void);
void fn_80715D60(void);
void fn_80715D70(void);
void fn_80715D80(void);
void fn_80715D90(void);
void fn_80715DF0(void);
void fn_80715E50(void);
void fn_80715E90(void);
void fn_80715EA0(void);
void fn_80715EF0(void);
void fn_80715F30(void);
void fn_80715F70(void);
void fn_80715FE0(void);
void fn_80716000(void);
void fn_80716030(void);
void fn_80716040(void);
void fn_80716050(void);
void fn_80716060(void);
void fn_80716070(void);
void fn_80716130(void);
void fn_807161E0(void);
void fn_80716200(void);
void fn_80716220(void);
void fn_80716260(void);
void fn_80716280(void);
void fn_807162B0(void);
void fn_80716360(void);
void fn_80716410(void);
void fn_80716420(void);
void fn_80716510(void);
void fn_80716640(void);
void fn_80716750(void);
void fn_80716840(void);
void fn_80716950(void);
void fn_80716A30(void);
void fn_80716AE0(void);
void fn_80716BA0(void);
void fn_80716CB0(void);
void fn_80716DF0(void);
void fn_80716E80(void);
void fn_80716EC0(void);
void fn_80716F10(void);
void fn_80717020(void);
void fn_807170E0(void);
void fn_80717120(void);
void fn_80717220(void);
void fn_80717340(void);
void fn_80717490(void);
void fn_80717590(void);
void fn_807175E0(void);
void fn_80717630(void);
void fn_80717680(void);
void fn_807176D0(void);
void fn_80717740(void);
void fn_80717750(void);
void fn_80717760(void);
void fn_807177D0(void);
void fn_80717840(void);
void fn_807178A0(void);
void fn_80717920(void);
void fn_80717990(void);
void fn_80717A20(void);
void fn_80717A40(void);
void fn_80717AA0(void);
void fn_80717B80(void);
void fn_80717C00(void);
void fn_80717C10(void);
void fn_80717D10(void);

asm void pad_03_80715D5C_text(void)
{
    nofralloc
    opword 0x00000000
}

asm void fn_80715D60(void)
{
    nofralloc
    stfs f1, 0x48(r3)
    blr
}

asm void fn_80715D70(void)
{
    nofralloc
    stfs f1, 0x4c(r3)
    blr
}

asm void fn_80715D80(void)
{
    nofralloc
    stfs f1, 0x50(r3)
    blr
}

asm void fn_80715D90(void)
{
    nofralloc
    lis r7, lbl_807C62D0@ha
    li r5, 0x0
    addi r7, r7, lbl_807C62D0@l
    lfs f1, lbl_80889250
    addi r8, r3, 0x10
    lfs f0, lbl_80889254
    lis r4, lbl_808632A8@ha
    addi r6, r7, 0x18
    addi r4, r4, lbl_808632A8@l
    li r0, 0x20
    stw r7, 0x0(r3)
    stw r6, 0x4(r3)
    stw r5, 0x8(r3)
    stw r5, 0xc(r3)
    stw r8, 0x10(r3)
    stw r8, 0x14(r3)
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f0, 0x24(r3)
    stw r5, 0x28(r3)
    blr
}

asm void fn_80715DF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x34(r1)
    addi r4, r1, 0x8
    stw r31, 0x2c(r1)
    li r31, 0x0
    bl fn_8059E378
    cmpwi r3, 0x0
    beq lbl_fn_80715DF0_000000D0
    lwz r4, 0x8(r1)
    lwz r3, 0x10(r1)
    lwz r0, 0x1c(r1)
    add r31, r4, r3
    add r31, r31, r0
lbl_fn_80715DF0_000000D0:
    mulli r3, r31, 0x28
    lwz r31, 0x2c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80715E50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r4, r5
    mr r5, r6
    stw r0, 0x14(r1)
    li r6, 0x28
    addi r3, r3, 0x8
    bl fn_8070EE90
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80715E90(void)
{
    nofralloc
    stw r4, 0x18(r3)
    blr
}

asm void fn_80715EA0(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    mr r12, r3
    mr r9, r4
    mr r11, r5
    cmpwi r0, 0x0
    mr r10, r6
    mr r8, r7
    beqlr
    mr r3, r0
    mr r4, r12
    lwz r12, 0x0(r3)
    mr r5, r9
    mr r6, r11
    mr r7, r10
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80715EF0(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    mr r8, r3
    mr r7, r4
    mr r6, r5
    cmpwi r0, 0x0
    li r3, 0x0
    beqlr
    mr r3, r0
    mr r4, r8
    lwz r12, 0x0(r3)
    mr r5, r7
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80715F30(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    mr r8, r3
    mr r7, r4
    mr r6, r5
    cmpwi r0, 0x0
    li r3, 0x1
    beqlr
    mr r3, r0
    mr r4, r8
    lwz r12, 0x0(r3)
    mr r5, r7
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
    blr
}

asm void fn_80715F70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r4, 0x28
    stw r0, 0x14(r1)
    beq lbl_fn_80715F70_00000230
    li r3, 0x0
    b lbl_fn_80715F70_00000270
lbl_fn_80715F70_00000230:
    addi r3, r3, 0x8
    bl fn_8070F0D0
    cmpwi r3, 0x0
    bne lbl_fn_80715F70_00000248
    li r3, 0x0
    b lbl_fn_80715F70_00000270
lbl_fn_80715F70_00000248:
    beq lbl_fn_80715F70_00000270
    li r5, 0x0
    stw r5, 0x18(r3)
    li r4, 0x1
    li r0, 0x80
    stb r4, 0x1c(r3)
    stb r0, 0x1d(r3)
    stb r5, 0x1e(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
lbl_fn_80715F70_00000270:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80715FE0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beqlr
    addi r3, r3, 0x8
    b fn_8070F130
    blr
}

asm void fn_80716000(void)
{
    nofralloc
    li r5, 0x0
    li r4, 0x1
    li r0, 0x80
    stw r5, 0x18(r3)
    stb r4, 0x1c(r3)
    stb r0, 0x1d(r3)
    stb r5, 0x1e(r3)
    stw r5, 0x20(r3)
    stw r5, 0x24(r3)
    blr
}

asm void fn_80716030(void)
{
    nofralloc
    lis r3, lbl_808632A8@ha
    addi r3, r3, lbl_808632A8@l
    b fn_807157D0
}

asm void fn_80716040(void)
{
    nofralloc
    subi r3, r3, 0x4
    b fn_80715FE0
}

asm void fn_80716050(void)
{
    nofralloc
    subi r3, r3, 0x4
    b fn_80715F70
}

asm void fn_80716060(void)
{
    nofralloc
    subi r3, r3, 0x4
    b fn_80046784
}

asm void fn_80716070(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_807C6308@ha
    lis r5, fn_8070CED0@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_807C6308@l
    addi r5, r5, fn_8070CED0@l
    li r7, 0x4
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    stw r6, 0x0(r3)
    lis r6, fn_8070CEB0@ha
    stw r4, 0x4(r3)
    addi r4, r6, fn_8070CEB0@l
    li r6, 0x10
    addi r3, r3, 0x8
    bl fn_806958E0
    lfs f1, lbl_80889258
    li r29, 0x0
    lfs f0, lbl_8088925C
    li r30, 0x0
    stfs f1, 0x48(r28)
    lis r31, 0x8000
    stfs f1, 0x4c(r28)
    stfs f0, 0x50(r28)
lbl_fn_80716070_00000384:
    cmpwi r29, 0x0
    add r3, r28, r30
    addi r3, r3, 0x8
    li r4, 0x1
    bne lbl_fn_80716070_0000039C
    subi r4, r31, 0x1
lbl_fn_80716070_0000039C:
    bl fn_8070D180
    addi r29, r29, 0x1
    addi r30, r30, 0x10
    cmpwi r29, 0x4
    blt lbl_fn_80716070_00000384
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

asm void fn_80716130(void)
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
    beq lbl_fn_80716130_0000045C
    lis r4, lbl_807C6308@ha
    li r30, 0x0
    addi r4, r4, lbl_807C6308@l
    stw r4, 0x0(r3)
    li r31, 0x0
lbl_fn_80716130_00000414:
    add r3, r28, r31
    mr r4, r28
    addi r3, r3, 0x8
    bl fn_8070CF70
    addi r30, r30, 0x1
    addi r31, r31, 0x10
    cmpwi r30, 0x4
    blt lbl_fn_80716130_00000414
    lis r4, fn_8070CED0@ha
    addi r3, r28, 0x8
    addi r4, r4, fn_8070CED0@l
    li r5, 0x10
    li r6, 0x4
    bl fn_806959D8
    cmpwi r29, 0x0
    ble lbl_fn_80716130_0000045C
    mr r3, r28
    bl dtor_80084684
lbl_fn_80716130_0000045C:
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

asm void fn_807161E0(void)
{
    nofralloc
    mr r8, r7
    mr r7, r3
    lwz r3, 0x4(r3)
    mr r9, r6
    lbz r8, 0x0(r8)
    li r6, 0x0
    b fn_805A03A4
}

asm void fn_80716200(void)
{
    nofralloc
    mr r0, r3
    lwz r3, 0x4(r3)
    mr r9, r6
    mr r6, r7
    lbz r8, 0x0(r8)
    mr r7, r0
    b fn_805A03A4
}

asm void fn_80716220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stb r6, 0x8(r1)
    mr r6, r7
    addi r7, r1, 0x8
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80716260(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    lwz r12, 0x8(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctr
}

asm void fn_80716280(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    blr
}

asm void fn_807162B0(void)
{
    nofralloc
    lwz r5, 0x0(r4)
    stwu r1, -0x10(r1)
    subis r0, r5, 0x5253
    cmplwi r0, 0x4152
    stw r31, 0xc(r1)
    beq lbl_fn_807162B0_00000574
    li r0, 0x0
    b lbl_fn_807162B0_000005A0
lbl_fn_807162B0_00000574:
    lhz r6, 0x6(r4)
    cmplwi r6, 0x100
    bge lbl_fn_807162B0_00000588
    li r0, 0x0
    b lbl_fn_807162B0_000005A0
lbl_fn_807162B0_00000588:
    subfic r0, r6, 0x104
    li r5, 0x104
    orc r5, r5, r6
    srwi r0, r0, 1
    subf r0, r0, r5
    srwi r0, r0, 31
lbl_fn_807162B0_000005A0:
    cmpwi r0, 0x0
    beq lbl_fn_807162B0_000005F8
    lwz r31, 0x0(r4)
    lwz r12, 0x4(r4)
    lwz r11, 0x8(r4)
    lwz r10, 0xc(r4)
    lwz r9, 0x10(r4)
    lwz r8, 0x14(r4)
    lwz r7, 0x18(r4)
    lwz r6, 0x1c(r4)
    lwz r5, 0x20(r4)
    lwz r0, 0x24(r4)
    stw r31, 0x0(r3)
    stw r12, 0x4(r3)
    stw r11, 0x8(r3)
    stw r10, 0xc(r3)
    stw r9, 0x10(r3)
    stw r8, 0x14(r3)
    stw r7, 0x18(r3)
    stw r6, 0x1c(r3)
    stw r5, 0x20(r3)
    stw r0, 0x24(r3)
lbl_fn_807162B0_000005F8:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_80716360(void)
{
    nofralloc
    addi r5, r4, 0x8
    stw r5, 0x2c(r3)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80716360_00000620
    li r0, 0x0
    b lbl_fn_80716360_00000624
lbl_fn_80716360_00000620:
    add r0, r0, r5
lbl_fn_80716360_00000624:
    stw r0, 0x30(r3)
    lwz r0, 0x2c(r3)
    lwz r4, 0x4(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80716360_00000640
    li r0, 0x0
    b lbl_fn_80716360_00000644
lbl_fn_80716360_00000640:
    add r0, r4, r0
lbl_fn_80716360_00000644:
    stw r0, 0x34(r3)
    lwz r0, 0x2c(r3)
    lwz r4, 0x8(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80716360_00000660
    li r0, 0x0
    b lbl_fn_80716360_00000664
lbl_fn_80716360_00000660:
    add r0, r4, r0
lbl_fn_80716360_00000664:
    stw r0, 0x38(r3)
    lwz r0, 0x2c(r3)
    lwz r4, 0xc(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80716360_00000680
    li r0, 0x0
    b lbl_fn_80716360_00000684
lbl_fn_80716360_00000680:
    add r0, r4, r0
lbl_fn_80716360_00000684:
    stw r0, 0x3c(r3)
    lwz r0, 0x2c(r3)
    lwz r4, 0x10(r5)
    cmpwi r4, 0x0
    bne lbl_fn_80716360_000006A0
    li r0, 0x0
    b lbl_fn_80716360_000006A4
lbl_fn_80716360_000006A0:
    add r0, r4, r0
lbl_fn_80716360_000006A4:
    stw r0, 0x40(r3)
    blr
}

asm void fn_80716410(void)
{
    nofralloc
    addi r0, r4, 0x8
    stw r0, 0x28(r3)
    blr
}

asm void fn_80716420(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r3, 0x0(r5)
    lwz r4, 0x4(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716420_00000700
    li r3, 0x0
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000700:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    blt lbl_fn_80716420_00000714
    li r3, 0x0
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000714:
    lhz r0, 0x6(r30)
    cmplwi r0, 0x101
    blt lbl_fn_80716420_00000750
    slwi r0, r31, 3
    lwz r5, 0x28(r30)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716420_00000748
    li r3, 0x0
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000748:
    lbz r0, 0x16(r3)
    b lbl_fn_80716420_0000075C
lbl_fn_80716420_00000750:
    slwi r0, r31, 3
    add r3, r3, r0
    lbz r0, 0x5(r3)
lbl_fn_80716420_0000075C:
    cmpwi r0, 0x1
    beq lbl_fn_80716420_00000778
    cmpwi r0, 0x2
    beq lbl_fn_80716420_00000780
    cmpwi r0, 0x3
    beq lbl_fn_80716420_00000788
    b lbl_fn_80716420_00000790
lbl_fn_80716420_00000778:
    li r3, 0x1
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000780:
    li r3, 0x2
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000788:
    li r3, 0x3
    b lbl_fn_80716420_00000794
lbl_fn_80716420_00000790:
    li r3, 0x0
lbl_fn_80716420_00000794:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80716510(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x0(r6)
    lwz r4, 0x4(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716510_000007FC
    li r3, 0x0
    b lbl_fn_80716510_0000084C
lbl_fn_80716510_000007FC:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716510_00000810
    li r3, 0x0
    b lbl_fn_80716510_0000084C
lbl_fn_80716510_00000810:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x101
    blt lbl_fn_80716510_00000838
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    b lbl_fn_80716510_0000084C
lbl_fn_80716510_00000838:
    slwi r4, r30, 3
    lwz r0, 0x28(r29)
    add r3, r3, r4
    lwz r3, 0x8(r3)
    add r3, r3, r0
lbl_fn_80716510_0000084C:
    cmpwi r3, 0x0
    bne lbl_fn_80716510_0000085C
    li r3, 0x0
    b lbl_fn_80716510_000008C0
lbl_fn_80716510_0000085C:
    lwz r0, 0x4(r3)
    stw r0, 0x0(r31)
    lhz r0, 0x6(r29)
    lwz r4, 0x8(r3)
    stw r4, 0x4(r31)
    cmplwi r0, 0x102
    lbz r0, 0x2a(r3)
    stw r0, 0x8(r31)
    lbz r0, 0x15(r3)
    stw r0, 0xc(r31)
    lbz r0, 0x14(r3)
    stw r0, 0x10(r31)
    lbz r0, 0x17(r3)
    stw r0, 0x14(r31)
    blt lbl_fn_80716510_000008AC
    lbz r0, 0x28(r3)
    stw r0, 0x18(r31)
    lbz r0, 0x29(r3)
    stw r0, 0x1c(r31)
    b lbl_fn_80716510_000008BC
lbl_fn_80716510_000008AC:
    li r3, 0x1
    li r0, 0x0
    stw r3, 0x18(r31)
    stw r0, 0x1c(r31)
lbl_fn_80716510_000008BC:
    li r3, 0x1
lbl_fn_80716510_000008C0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716640(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x0(r6)
    lwz r4, 0x4(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716640_0000092C
    li r4, 0x0
    b lbl_fn_80716640_00000980
lbl_fn_80716640_0000092C:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716640_00000940
    li r4, 0x0
    b lbl_fn_80716640_00000980
lbl_fn_80716640_00000940:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x101
    blt lbl_fn_80716640_0000096C
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    mr r4, r3
    b lbl_fn_80716640_00000980
lbl_fn_80716640_0000096C:
    slwi r4, r30, 3
    lwz r0, 0x28(r29)
    add r3, r3, r4
    lwz r3, 0x8(r3)
    add r4, r3, r0
lbl_fn_80716640_00000980:
    cmpwi r4, 0x0
    bne lbl_fn_80716640_00000990
    li r3, 0x0
    b lbl_fn_80716640_000009D4
lbl_fn_80716640_00000990:
    lbz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    lwz r5, 0x28(r29)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716640_000009B0
    li r3, 0x0
    b lbl_fn_80716640_000009D4
lbl_fn_80716640_000009B0:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lbz r0, 0x4(r3)
    stb r0, 0x4(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x5(r31)
    lbz r0, 0x6(r3)
    li r3, 0x1
    stb r0, 0x6(r31)
lbl_fn_80716640_000009D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716750(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80716420
    cmpwi r3, 0x1
    beq lbl_fn_80716750_00000A2C
    li r3, 0x0
    b lbl_fn_80716750_00000A5C
lbl_fn_80716750_00000A2C:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80717490
    cmpwi r3, 0x0
    bne lbl_fn_80716750_00000A4C
    li r3, 0x0
    b lbl_fn_80716750_00000A5C
lbl_fn_80716750_00000A4C:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl fn_80721120
lbl_fn_80716750_00000A5C:
    cmpwi r3, 0x0
    bne lbl_fn_80716750_00000A6C
    li r3, 0x0
    b lbl_fn_80716750_00000ABC
lbl_fn_80716750_00000A6C:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
    lbz r0, 0xc(r3)
    stw r0, 0xc(r31)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r31)
    lhz r0, 0x6(r29)
    cmplwi r0, 0x103
    blt lbl_fn_80716750_00000AB0
    lbz r3, 0xd(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x10(r31)
    b lbl_fn_80716750_00000AB8
lbl_fn_80716750_00000AB0:
    li r0, 0x0
    stb r0, 0x10(r31)
lbl_fn_80716750_00000AB8:
    li r3, 0x1
lbl_fn_80716750_00000ABC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716840(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80716420
    cmpwi r3, 0x2
    beq lbl_fn_80716840_00000B1C
    li r3, 0x0
    b lbl_fn_80716840_00000B4C
lbl_fn_80716840_00000B1C:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80717490
    cmpwi r3, 0x0
    bne lbl_fn_80716840_00000B3C
    li r3, 0x0
    b lbl_fn_80716840_00000B4C
lbl_fn_80716840_00000B3C:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl fn_80721120
lbl_fn_80716840_00000B4C:
    cmpwi r3, 0x0
    bne lbl_fn_80716840_00000B5C
    li r3, 0x0
    b lbl_fn_80716840_00000BCC
lbl_fn_80716840_00000B5C:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lhz r0, 0x6(r3)
    sth r0, 0x6(r31)
    lhz r0, 0x6(r29)
    cmplwi r0, 0x104
    blt lbl_fn_80716840_00000B84
    lhz r0, 0x4(r3)
    sth r0, 0x4(r31)
    b lbl_fn_80716840_00000BC8
lbl_fn_80716840_00000B84:
    li r0, 0x0
    sth r0, 0x4(r31)
    lhz r4, 0x4(r3)
    b lbl_fn_80716840_00000BC0
lbl_fn_80716840_00000B94:
    clrlwi. r0, r4, 31
    beq lbl_fn_80716840_00000BAC
    lhz r3, 0x4(r31)
    addi r0, r3, 0x1
    sth r0, 0x4(r31)
    b lbl_fn_80716840_00000BBC
lbl_fn_80716840_00000BAC:
    clrlwi. r0, r4, 16
    beq lbl_fn_80716840_00000BBC
    li r3, 0x0
    b lbl_fn_80716840_00000BCC
lbl_fn_80716840_00000BBC:
    extrwi r4, r4, 15, 16
lbl_fn_80716840_00000BC0:
    clrlwi. r0, r4, 16
    bne lbl_fn_80716840_00000B94
lbl_fn_80716840_00000BC8:
    li r3, 0x1
lbl_fn_80716840_00000BCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716950(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_80716420
    cmpwi r3, 0x3
    beq lbl_fn_80716950_00000C2C
    li r3, 0x0
    b lbl_fn_80716950_00000C5C
lbl_fn_80716950_00000C2C:
    mr r3, r29
    mr r4, r30
    addi r5, r1, 0x8
    bl fn_80717490
    cmpwi r3, 0x0
    bne lbl_fn_80716950_00000C4C
    li r3, 0x0
    b lbl_fn_80716950_00000C5C
lbl_fn_80716950_00000C4C:
    lbz r3, 0x8(r1)
    lwz r4, 0xc(r1)
    lwz r5, 0x28(r29)
    bl fn_80721120
lbl_fn_80716950_00000C5C:
    cmpwi r3, 0x0
    bne lbl_fn_80716950_00000C6C
    li r3, 0x0
    b lbl_fn_80716950_00000CAC
lbl_fn_80716950_00000C6C:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lbz r0, 0x8(r3)
    stw r0, 0x4(r31)
    lhz r0, 0x6(r29)
    cmplwi r0, 0x103
    blt lbl_fn_80716950_00000CA0
    lbz r3, 0x9(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
    stb r0, 0x8(r31)
    b lbl_fn_80716950_00000CA8
lbl_fn_80716950_00000CA0:
    li r0, 0x0
    stb r0, 0x8(r31)
lbl_fn_80716950_00000CA8:
    li r3, 0x1
lbl_fn_80716950_00000CAC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716A30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x8(r6)
    lwz r4, 0xc(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716A30_00000D1C
    li r3, 0x0
    b lbl_fn_80716A30_00000D48
lbl_fn_80716A30_00000D1C:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716A30_00000D30
    li r3, 0x0
    b lbl_fn_80716A30_00000D48
lbl_fn_80716A30_00000D30:
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
lbl_fn_80716A30_00000D48:
    cmpwi r3, 0x0
    bne lbl_fn_80716A30_00000D58
    li r3, 0x0
    b lbl_fn_80716A30_00000D64
lbl_fn_80716A30_00000D58:
    lwz r0, 0x4(r3)
    li r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_80716A30_00000D64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716AE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x10(r6)
    lwz r4, 0x14(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716AE0_00000DCC
    li r4, 0x0
    b lbl_fn_80716AE0_00000DFC
lbl_fn_80716AE0_00000DCC:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716AE0_00000DE0
    li r4, 0x0
    b lbl_fn_80716AE0_00000DFC
lbl_fn_80716AE0_00000DE0:
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    mr r4, r3
lbl_fn_80716AE0_00000DFC:
    cmpwi r4, 0x0
    bne lbl_fn_80716AE0_00000E0C
    li r3, 0x0
    b lbl_fn_80716AE0_00000E20
lbl_fn_80716AE0_00000E0C:
    lbz r0, 0x4(r4)
    li r3, 0x1
    stw r0, 0x0(r31)
    lwz r0, 0x8(r4)
    stw r0, 0x4(r31)
lbl_fn_80716AE0_00000E20:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716BA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    mr r5, r6
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r3, 0x20(r6)
    lwz r4, 0x24(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716BA0_00000E90
    li r30, 0x0
    b lbl_fn_80716BA0_00000EC0
lbl_fn_80716BA0_00000E90:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716BA0_00000EA4
    li r30, 0x0
    b lbl_fn_80716BA0_00000EC0
lbl_fn_80716BA0_00000EA4:
    slwi r0, r30, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    mr r30, r3
lbl_fn_80716BA0_00000EC0:
    cmpwi r30, 0x0
    bne lbl_fn_80716BA0_00000ED0
    li r3, 0x0
    b lbl_fn_80716BA0_00000F34
lbl_fn_80716BA0_00000ED0:
    lbz r3, 0x20(r30)
    lwz r4, 0x24(r30)
    lwz r5, 0x28(r28)
    bl fn_80721120
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80716BA0_00000EF4
    li r3, 0x0
    b lbl_fn_80716BA0_00000F34
lbl_fn_80716BA0_00000EF4:
    lbz r3, 0x8(r30)
    lwz r4, 0xc(r30)
    lwz r5, 0x28(r28)
    bl fn_80721120
    stw r3, 0x4(r29)
    li r3, 0x1
    lwz r0, 0x10(r30)
    stw r0, 0x8(r29)
    lwz r0, 0x14(r30)
    stw r0, 0xc(r29)
    lwz r0, 0x18(r30)
    stw r0, 0x10(r29)
    lwz r0, 0x1c(r30)
    stw r0, 0x14(r29)
    lwz r0, 0x0(r31)
    stw r0, 0x0(r29)
lbl_fn_80716BA0_00000F34:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716CB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    mr r5, r7
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r3, 0x20(r7)
    lwz r4, 0x24(r7)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716CB0_00000FA4
    li r4, 0x0
    b lbl_fn_80716CB0_00000FD4
lbl_fn_80716CB0_00000FA4:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_fn_80716CB0_00000FB8
    li r4, 0x0
    b lbl_fn_80716CB0_00000FD4
lbl_fn_80716CB0_00000FB8:
    slwi r0, r29, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    mr r4, r3
lbl_fn_80716CB0_00000FD4:
    cmpwi r4, 0x0
    bne lbl_fn_80716CB0_00000FE4
    li r3, 0x0
    b lbl_fn_80716CB0_0000106C
lbl_fn_80716CB0_00000FE4:
    lbz r3, 0x20(r4)
    lwz r4, 0x24(r4)
    lwz r5, 0x28(r28)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716CB0_00001004
    li r3, 0x0
    b lbl_fn_80716CB0_0000106C
lbl_fn_80716CB0_00001004:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80716CB0_00001018
    li r3, 0x0
    b lbl_fn_80716CB0_0000106C
lbl_fn_80716CB0_00001018:
    slwi r0, r30, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716CB0_00001040
    li r3, 0x0
    b lbl_fn_80716CB0_0000106C
lbl_fn_80716CB0_00001040:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r31)
    lwz r0, 0xc(r3)
    stw r0, 0xc(r31)
    lwz r0, 0x10(r3)
    li r3, 0x1
    stw r0, 0x10(r31)
lbl_fn_80716CB0_0000106C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80716DF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lbz r3, 0x28(r5)
    lwz r4, 0x2c(r5)
    bl fn_80721120
    cmpwi r31, 0x0
    bne lbl_fn_80716DF0_000010C8
    li r3, 0x0
    b lbl_fn_80716DF0_00001104
lbl_fn_80716DF0_000010C8:
    lhz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lhz r0, 0x2(r3)
    stw r0, 0x4(r31)
    lhz r0, 0x4(r3)
    stw r0, 0x8(r31)
    lhz r0, 0x6(r3)
    stw r0, 0xc(r31)
    lhz r0, 0x8(r3)
    stw r0, 0x10(r31)
    lhz r0, 0xa(r3)
    stw r0, 0x14(r31)
    lhz r0, 0xc(r3)
    li r3, 0x1
    stw r0, 0x18(r31)
lbl_fn_80716DF0_00001104:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80716E80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    lbz r3, 0x10(r5)
    lwz r4, 0x14(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716E80_00001150
    li r3, 0x0
    b lbl_fn_80716E80_00001154
lbl_fn_80716E80_00001150:
    lwz r3, 0x0(r3)
lbl_fn_80716E80_00001154:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80716EC0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    lbz r3, 0x20(r5)
    lwz r4, 0x24(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716EC0_00001190
    li r3, 0x0
    b lbl_fn_80716EC0_00001198
lbl_fn_80716EC0_00001190:
    lwz r3, 0x0(r3)
    subi r3, r3, 0x1
lbl_fn_80716EC0_00001198:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80716F10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r3, 0x0(r5)
    lwz r4, 0x4(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80716F10_000011F0
    li r3, 0x0
    b lbl_fn_80716F10_00001240
lbl_fn_80716F10_000011F0:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    blt lbl_fn_80716F10_00001204
    li r3, 0x0
    b lbl_fn_80716F10_00001240
lbl_fn_80716F10_00001204:
    lhz r0, 0x6(r30)
    cmplwi r0, 0x101
    blt lbl_fn_80716F10_0000122C
    slwi r0, r31, 3
    lwz r5, 0x28(r30)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    b lbl_fn_80716F10_00001240
lbl_fn_80716F10_0000122C:
    slwi r4, r31, 3
    lwz r0, 0x28(r30)
    add r3, r3, r4
    lwz r3, 0x8(r3)
    add r3, r3, r0
lbl_fn_80716F10_00001240:
    cmpwi r3, 0x0
    bne lbl_fn_80716F10_00001250
    li r3, -0x1
    b lbl_fn_80716F10_00001254
lbl_fn_80716F10_00001250:
    lwz r3, 0x0(r3)
lbl_fn_80716F10_00001254:
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_80716F10_00001268
    li r3, 0x0
    b lbl_fn_80716F10_000012A0
lbl_fn_80716F10_00001268:
    lwz r5, 0x30(r30)
    cmpwi r5, 0x0
    bne lbl_fn_80716F10_0000127C
    li r3, 0x0
    b lbl_fn_80716F10_000012A0
lbl_fn_80716F10_0000127C:
    slwi r0, r3, 2
    lwz r4, 0x2c(r30)
    add r3, r5, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80716F10_0000129C
    li r3, 0x0
    b lbl_fn_80716F10_000012A0
lbl_fn_80716F10_0000129C:
    add r3, r0, r4
lbl_fn_80716F10_000012A0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717020(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r3, 0x0(r5)
    lwz r4, 0x4(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717020_00001300
    li r3, 0x0
    b lbl_fn_80717020_00001350
lbl_fn_80717020_00001300:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    blt lbl_fn_80717020_00001314
    li r3, 0x0
    b lbl_fn_80717020_00001350
lbl_fn_80717020_00001314:
    lhz r0, 0x6(r30)
    cmplwi r0, 0x101
    blt lbl_fn_80717020_0000133C
    slwi r0, r31, 3
    lwz r5, 0x28(r30)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    b lbl_fn_80717020_00001350
lbl_fn_80717020_0000133C:
    slwi r4, r31, 3
    lwz r0, 0x28(r30)
    add r3, r3, r4
    lwz r3, 0x8(r3)
    add r3, r3, r0
lbl_fn_80717020_00001350:
    cmpwi r3, 0x0
    bne lbl_fn_80717020_00001360
    li r3, 0x0
    b lbl_fn_80717020_00001364
lbl_fn_80717020_00001360:
    lwz r3, 0x20(r3)
lbl_fn_80717020_00001364:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807170E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r5, 0x28(r3)
    stw r0, 0x14(r1)
    lbz r3, 0x18(r5)
    lwz r4, 0x1c(r5)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_807170E0_000013B0
    li r3, 0x0
    b lbl_fn_807170E0_000013B4
lbl_fn_807170E0_000013B0:
    lwz r3, 0x0(r3)
lbl_fn_807170E0_000013B4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r5
    mr r5, r6
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r3, 0x18(r6)
    lwz r4, 0x1c(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717120_00001410
    li r3, 0x0
    b lbl_fn_80717120_000014A4
lbl_fn_80717120_00001410:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80717120_00001424
    li r3, 0x0
    b lbl_fn_80717120_000014A4
lbl_fn_80717120_00001424:
    slwi r0, r30, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_80717120_00001450
    li r3, 0x0
    b lbl_fn_80717120_000014A4
lbl_fn_80717120_00001450:
    lbz r3, 0x14(r3)
    lwz r4, 0x18(r30)
    lwz r5, 0x28(r28)
    bl fn_80721120
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80717120_00001474
    li r3, 0x0
    b lbl_fn_80717120_000014A4
lbl_fn_80717120_00001474:
    lwz r0, 0x0(r30)
    stw r0, 0x0(r29)
    lwz r5, 0x28(r28)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r29)
    lbz r3, 0xc(r30)
    lwz r4, 0x10(r30)
    bl fn_80721120
    stw r3, 0x8(r29)
    li r3, 0x1
    lwz r0, 0x0(r31)
    stw r0, 0xc(r29)
lbl_fn_80717120_000014A4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717220(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r7, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    mr r5, r7
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lbz r3, 0x18(r7)
    lwz r4, 0x1c(r7)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717220_00001514
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_00001514:
    lwz r0, 0x0(r3)
    cmplw r29, r0
    blt lbl_fn_80717220_00001528
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_00001528:
    slwi r0, r29, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    mr r4, r3
    bne lbl_fn_80717220_00001554
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_00001554:
    lbz r3, 0x14(r3)
    lwz r4, 0x18(r4)
    lwz r5, 0x28(r28)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717220_00001574
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_00001574:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80717220_00001588
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_00001588:
    slwi r0, r30, 3
    lwz r5, 0x28(r28)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717220_000015B0
    li r3, 0x0
    b lbl_fn_80717220_000015C4
lbl_fn_80717220_000015B0:
    lwz r0, 0x0(r3)
    stw r0, 0x0(r31)
    lwz r0, 0x4(r3)
    li r3, 0x1
    stw r0, 0x4(r31)
lbl_fn_80717220_000015C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717340(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bne lbl_fn_80717340_0000161C
    li r3, -0x1
    b lbl_fn_80717340_00001710
lbl_fn_80717340_0000161C:
    lwz r3, 0x0(r4)
    lwz r0, 0x4(r4)
    cmplw r3, r0
    blt lbl_fn_80717340_00001634
    li r3, -0x1
    b lbl_fn_80717340_00001710
lbl_fn_80717340_00001634:
    mulli r0, r3, 0x14
    mr r3, r30
    add r4, r4, r0
    addi r31, r4, 0x8
    bl strlen
    li r5, 0x1
    b lbl_fn_80717340_00001698
    nop
lbl_fn_80717340_00001654:
    lhz r0, 0x2(r31)
    srawi r4, r0, 3
    clrlwi r6, r0, 29
    cmpw r4, r3
    bge lbl_fn_80717340_00001688
    lbzx r0, r30, r4
    subfic r4, r6, 0x7
    slw r4, r5, r4
    extsb r0, r0
    and. r0, r4, r0
    beq lbl_fn_80717340_00001688
    lwz r0, 0x8(r31)
    b lbl_fn_80717340_0000168C
lbl_fn_80717340_00001688:
    lwz r0, 0x4(r31)
lbl_fn_80717340_0000168C:
    mulli r0, r0, 0x14
    add r4, r29, r0
    addi r31, r4, 0x8
lbl_fn_80717340_00001698:
    lhz r0, 0x0(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_80717340_00001654
    lwz r3, 0xc(r31)
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_80717340_000016BC
    li r4, 0x0
    b lbl_fn_80717340_000016F4
lbl_fn_80717340_000016BC:
    lwz r5, 0x30(r28)
    cmpwi r5, 0x0
    bne lbl_fn_80717340_000016D0
    li r4, 0x0
    b lbl_fn_80717340_000016F4
lbl_fn_80717340_000016D0:
    slwi r0, r3, 2
    lwz r4, 0x2c(r28)
    add r3, r5, r0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80717340_000016F0
    li r4, 0x0
    b lbl_fn_80717340_000016F4
lbl_fn_80717340_000016F0:
    add r4, r0, r4
lbl_fn_80717340_000016F4:
    mr r3, r30
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80717340_0000170C
    lwz r3, 0x10(r31)
    b lbl_fn_80717340_00001710
lbl_fn_80717340_0000170C:
    li r3, -0x1
lbl_fn_80717340_00001710:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717490(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x28(r3)
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    mr r5, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r3, 0x0(r6)
    lwz r4, 0x4(r6)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717490_0000177C
    li r3, 0x0
    b lbl_fn_80717490_00001818
lbl_fn_80717490_0000177C:
    lwz r0, 0x0(r3)
    cmplw r30, r0
    blt lbl_fn_80717490_00001790
    li r3, 0x0
    b lbl_fn_80717490_00001818
lbl_fn_80717490_00001790:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x101
    blt lbl_fn_80717490_000017EC
    slwi r0, r30, 3
    lwz r5, 0x28(r29)
    add r4, r3, r0
    lbz r3, 0x4(r4)
    lwz r4, 0x8(r4)
    bl fn_80721120
    cmpwi r3, 0x0
    bne lbl_fn_80717490_000017C4
    li r3, 0x0
    b lbl_fn_80717490_00001818
lbl_fn_80717490_000017C4:
    lbz r0, 0x18(r3)
    stb r0, 0x0(r31)
    lbz r0, 0x19(r3)
    stb r0, 0x1(r31)
    lhz r0, 0x1a(r3)
    sth r0, 0x2(r31)
    lwz r0, 0x1c(r3)
    li r3, 0x1
    stw r0, 0x4(r31)
    b lbl_fn_80717490_00001818
lbl_fn_80717490_000017EC:
    slwi r0, r30, 3
    add r6, r3, r0
    li r3, 0x1
    lwz r4, 0x8(r6)
    lbz r5, 0x5(r6)
    lbz r0, 0x4(r6)
    addi r4, r4, 0x1c
    stb r0, 0x0(r31)
    stb r5, 0x1(r31)
    sth r7, 0x2(r31)
    stw r4, 0x4(r31)
lbl_fn_80717490_00001818:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    mr r3, r4
    bl fn_8070AF90
    cmpwi r3, 0x0
    beq lbl_fn_80717590_00001864
    lwz r3, 0x0(r31)
    bl fn_8070AFC0
lbl_fn_80717590_00001864:
    lwz r3, 0x0(r31)
    stw r31, 0xc(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807175E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    mr r3, r4
    bl fn_8070AF70
    cmpwi r3, 0x0
    beq lbl_fn_807175E0_000018B4
    lwz r3, 0x0(r31)
    bl fn_8070AFB0
lbl_fn_807175E0_000018B4:
    lwz r3, 0x0(r31)
    stw r31, 0x8(r3)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717630(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80717630_0000190C
    lwz r0, 0x8(r4)
    cmplw r0, r3
    bne lbl_fn_80717630_000018F4
    li r0, 0x0
    stw r0, 0x8(r4)
lbl_fn_80717630_000018F4:
    lwz r4, 0x0(r3)
    lwz r0, 0xc(r4)
    cmplw r0, r3
    bne lbl_fn_80717630_0000190C
    li r0, 0x0
    stw r0, 0xc(r4)
lbl_fn_80717630_0000190C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_80717680(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6328@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_807C6328@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    addi r3, r3, 0x1c
    bl fn_8070D360
    addi r3, r31, 0x4
    bl fn_805F30F0
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807176D0(void)
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
    beq lbl_fn_807176D0_000019C8
    lis r4, lbl_807C6328@ha
    addi r4, r4, lbl_807C6328@l
    stw r4, 0x0(r3)
    addi r3, r3, 0x1c
    bl fn_8070D630
    addi r3, r30, 0x1c
    li r4, -0x1
    bl fn_8070D380
    cmpwi r31, 0x0
    ble lbl_fn_807176D0_000019C8
    mr r3, r30
    bl dtor_80084684
lbl_fn_807176D0_000019C8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717740(void)
{
    nofralloc
    addi r3, r3, 0x1c
    b fn_8070D490
}

asm void fn_80717750(void)
{
    nofralloc
    addi r3, r3, 0x1c
    b fn_8070D630
}

asm void fn_80717760(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r31
    bl fn_805F3130
    lis r5, fn_80717920@ha
    mr r4, r30
    addi r3, r29, 0x1c
    li r6, 0x0
    addi r5, r5, fn_80717920@l
    bl fn_8070D850
    mr r30, r3
    mr r3, r31
    bl fn_805F3210
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_807177D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    addi r3, r30, 0x1c
    bl fn_8070D720
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717840(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    bl fn_805F3130
    addi r3, r30, 0x1c
    bl fn_8070D900
    mr r30, r3
    mr r3, r31
    bl fn_805F3210
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_807178A0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, 0x4
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    mr r3, r31
    bl fn_805F3130
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    mr r4, r30
    addi r3, r29, 0x1c
    bl fn_8070D9D0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    mr r3, r31
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717920(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8070C650
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8070C780
    bl fn_8070C650
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_8070C8B0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717990(void)
{
    nofralloc
    lfs f1, lbl_80889260
    lis r4, 0x8000
    lfs f0, lbl_80889264
    li r6, 0x0
    addi r7, r3, 0x4
    addi r8, r3, 0x10
    addi r9, r3, 0x1c
    li r5, 0x1
    subi r0, r4, 0x1
    stw r6, 0x0(r3)
    stw r7, 0x4(r3)
    stw r7, 0x8(r3)
    stw r6, 0xc(r3)
    stw r8, 0x10(r3)
    stw r8, 0x14(r3)
    stw r6, 0x18(r3)
    stw r9, 0x1c(r3)
    stw r9, 0x20(r3)
    stw r5, 0x24(r3)
    stw r0, 0x28(r3)
    stfs f1, 0x2c(r3)
    stfs f0, 0x30(r3)
    stw r5, 0x34(r3)
    stfs f1, 0x38(r3)
    stw r6, 0x3c(r3)
    stfs f0, 0x40(r3)
    stfs f0, 0x54(r3)
    stfs f1, 0x44(r3)
    stfs f1, 0x48(r3)
    stfs f1, 0x4c(r3)
    stfs f1, 0x50(r3)
    stfs f0, 0x58(r3)
    stfs f0, 0x5c(r3)
    stfs f0, 0x60(r3)
    blr
}

asm void fn_80717A20(void)
{
    nofralloc
    addi r4, r3, 0x4
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r4, 0x4(r3)
    stw r4, 0x8(r3)
    blr
}

asm void fn_80717A40(void)
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
    beq lbl_fn_80717A40_00001D20
    li r4, 0x0
    bl fn_80725170
    cmpwi r31, 0x0
    ble lbl_fn_80717A40_00001D20
    mr r3, r30
    bl dtor_80084684
lbl_fn_80717A40_00001D20:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80717AA0(void)
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
    beq lbl_fn_80717AA0_00001DF4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0x4(r28)
    addi r30, r28, 0x4
    b lbl_fn_80717AA0_00001D9C
lbl_fn_80717AA0_00001D88:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xf8
    li r4, 0x0
    bl fn_80709AD0
lbl_fn_80717AA0_00001D9C:
    cmplw r31, r30
    bne lbl_fn_80717AA0_00001D88
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    addic. r3, r28, 0x18
    beq lbl_fn_80717AA0_00001DC0
    li r4, 0x0
    bl fn_80725170
lbl_fn_80717AA0_00001DC0:
    addic. r3, r28, 0xc
    beq lbl_fn_80717AA0_00001DD0
    li r4, 0x0
    bl fn_80725170
lbl_fn_80717AA0_00001DD0:
    cmpwi r28, 0x0
    beq lbl_fn_80717AA0_00001DE4
    mr r3, r28
    li r4, 0x0
    bl fn_80725170
lbl_fn_80717AA0_00001DE4:
    cmpwi r29, 0x0
    ble lbl_fn_80717AA0_00001DF4
    mr r3, r28
    bl dtor_80084684
lbl_fn_80717AA0_00001DF4:
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

asm void fn_80717B80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r31, 0x4(r29)
    addi r30, r29, 0x4
    b lbl_fn_80717B80_00001E68
lbl_fn_80717B80_00001E58:
    mr r3, r31
    lwz r31, 0x0(r31)
    subi r3, r3, 0xf8
    bl fn_8070A050
lbl_fn_80717B80_00001E68:
    cmplw r31, r30
    bne lbl_fn_80717B80_00001E58
    mr r3, r29
    bl fn_80717D10
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717C00(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x44(r3)
    blr
}

asm void fn_80717C10(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    addi r31, r30, 0x100
    addi r3, r29, 0xc
    mr r4, r31
    bl fn_807252D0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r3, 0x10(r29)
    addi r0, r29, 0x10
    b lbl_fn_80717C10_00001F68
lbl_fn_80717C10_00001F14:
    lbz r5, -0x68(r3)
    lwz r4, -0xb0(r3)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_80717C10_00001F30
    li r6, 0x7f
    b lbl_fn_80717C10_00001F38
lbl_fn_80717C10_00001F30:
    srawi r4, r5, 31
    andc r6, r5, r4
lbl_fn_80717C10_00001F38:
    lbz r5, 0x98(r30)
    lwz r4, 0x50(r30)
    add r5, r5, r4
    cmpwi r5, 0x7f
    ble lbl_fn_80717C10_00001F54
    li r4, 0x7f
    b lbl_fn_80717C10_00001F5C
lbl_fn_80717C10_00001F54:
    srawi r4, r5, 31
    andc r4, r5, r4
lbl_fn_80717C10_00001F5C:
    cmpw r4, r6
    blt lbl_fn_80717C10_00001F70
    lwz r3, 0x0(r3)
lbl_fn_80717C10_00001F68:
    cmplw r3, r0
    bne lbl_fn_80717C10_00001F14
lbl_fn_80717C10_00001F70:
    stw r3, 0x8(r1)
    mr r5, r31
    addi r3, r29, 0xc
    addi r4, r1, 0x8
    bl fn_807252A0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80717D10(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3130
    lwz r0, 0xc(r31)
    cmplwi r0, 0x2
    bge lbl_fn_80717D10_00001FF4
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
    b lbl_fn_80717D10_00002120
lbl_fn_80717D10_00001FF4:
    lbz r0, lbl_808804E0
    extsb. r0, r0
    bne lbl_fn_80717D10_00002044
    lis r3, lbl_808632D0@ha
    lis r4, fn_80717A20@ha
    lis r5, fn_80717A40@ha
    li r6, 0xc
    addi r3, r3, lbl_808632D0@l
    addi r4, r4, fn_80717A20@l
    addi r5, r5, fn_80717A40@l
    li r7, 0x80
    bl fn_806958E0
    lis r4, fn_80717EA0@ha
    lis r5, lbl_808632C0@ha
    addi r4, r4, fn_80717EA0@l
    li r3, 0x0
    addi r5, r5, lbl_808632C0@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808804E0
lbl_fn_80717D10_00002044:
    lis r30, lbl_808632D0@ha
    addi r30, r30, lbl_808632D0@l
    b lbl_fn_80717D10_000020A4
lbl_fn_80717D10_00002050:
    lwz r29, 0x10(r31)
    addi r3, r31, 0xc
    stw r29, 0x14(r1)
    addi r4, r1, 0x14
    bl fn_80725200
    lbz r3, -0x68(r29)
    lwz r0, -0xb0(r29)
    add r3, r3, r0
    cmpwi r3, 0x7f
    ble lbl_fn_80717D10_00002080
    li r0, 0x7f
    b lbl_fn_80717D10_00002088
lbl_fn_80717D10_00002080:
    srawi r0, r3, 31
    andc r0, r3, r0
lbl_fn_80717D10_00002088:
    mulli r0, r0, 0xc
    mr r5, r29
    addi r4, r1, 0x10
    add r3, r30, r0
    addi r0, r3, 0x4
    stw r0, 0x10(r1)
    bl fn_807252A0
lbl_fn_80717D10_000020A4:
    lwz r0, 0xc(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80717D10_00002050
    lis r29, lbl_808632D0@ha
    addi r30, r31, 0x10
    addi r29, r29, lbl_808632D0@l
    li r27, 0x0
lbl_fn_80717D10_000020C0:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80717D10_00002104
    b lbl_fn_80717D10_000020F8
lbl_fn_80717D10_000020D0:
    lwz r28, 0x4(r29)
    mr r3, r29
    stw r28, 0xc(r1)
    addi r4, r1, 0xc
    bl fn_80725200
    stw r30, 0x8(r1)
    mr r5, r28
    addi r3, r31, 0xc
    addi r4, r1, 0x8
    bl fn_807252A0
lbl_fn_80717D10_000020F8:
    lwz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_80717D10_000020D0
lbl_fn_80717D10_00002104:
    addi r27, r27, 0x1
    addi r29, r29, 0xc
    cmpwi r27, 0x80
    blt lbl_fn_80717D10_000020C0
    bl fn_807187D0
    addi r3, r3, 0x354
    bl fn_805F3210
lbl_fn_80717D10_00002120:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
