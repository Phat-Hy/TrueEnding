#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __div2u(void);
extern void __mod2u(void);
extern void dtor_80084684(void);
extern void fn_8006F420(void);
extern void fn_8006F72C(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800A5218(void);
extern void fn_800DBF68(void);
extern void fn_800DC500(void);
extern void fn_800DD3FC(void);
extern void fn_804AE3BC(void);
extern void fn_805089E4(void);
extern void fn_8050B7F0(void);
extern void fn_8050BA6C(void);
extern void fn_8050D7F0(void);
extern void fn_80686A48(void);
extern void fn_80686A64(void);
extern void fn_80686A80(void);
extern void fn_80686AF0(void);
extern void fn_8069641C(void);
extern void fn_806A8E40(void);
extern void fn_806ABCF0(void);
extern void fn_806ABF40(void);
extern void fn_806ABF80(void);
extern void fn_806AC0A0(void);
extern void fn_806B0E30(void);
extern void fn_806CF2F0(void);
extern void fn_806CFAC0(void);
extern void fn_806CFB00(void);
extern void fn_806CFE90(void);
extern void fn_806CFEA0(void);
extern void fn_806D0030(void);
extern void fn_806D01C0(void);
extern void fn_806D0260(void);
extern void fn_806D04E0(void);
extern void fn_806D05A0(void);
extern void fn_806D0810(void);

/* External data declarations */
extern u8 lbl_8075B1D4[];
extern u8 lbl_8075B1F8[];
extern u8 lbl_8075B238[];
extern u8 lbl_807931B4[];

/* Small data declarations */
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087E468;
extern u32 lbl_8087E46C;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F600;
extern u32 lbl_8087F628;
extern u32 lbl_8087F880;
extern u32 lbl_808877C0;

/* Function declarations */
void fn_8050DB78(void);
void fn_8050DBD0(void);
void fn_8050DBEC(void);
void fn_8050DBF8(void);
void fn_8050DC50(void);
void fn_8050DC5C(void);
void fn_8050DDE0(void);
void fn_8050DE38(void);
void fn_8050DE60(void);
void fn_8050DEAC(void);
void fn_8050E098(void);
void fn_8050E414(void);
void fn_8050E514(void);
void fn_8050E534(void);
void fn_8050E59C(void);
void fn_8050E61C(void);
void fn_8050E630(void);
void fn_8050E680(void);
void fn_8050E6D0(void);
void fn_8050E6F8(void);
void fn_8050E7E0(void);
void fn_8050E8CC(void);
void fn_8050E998(void);
void fn_8050EAE8(void);
void fn_8050EAEC(void);
void fn_8050EB30(void);
void fn_8050EB8C(void);
void fn_8050EBCC(void);
void fn_8050EF18(void);
void fn_8050EFD0(void);
void fn_8050F19C(void);
void fn_8050F2F4(void);
void fn_8050F408(void);
void fn_8050F468(void);
void fn_8050F474(void);

asm void fn_8050DB78(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x440
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x20
    bl memset
    lwz r12, 0x460(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050DBD0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x4(r3)
    li r4, 0x0
    li r5, 0x440
    stw r0, 0x0(r3)
    addi r3, r3, 0x20
    b memset
}

asm void fn_8050DBEC(void)
{
    nofralloc
    lwz r0, lbl_8087E46C
    stw r0, 0x0(r3)
    blr
}

asm void fn_8050DBF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x440
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x4(r3)
    stw r0, 0x0(r3)
    addi r3, r3, 0x20
    bl memset
    lwz r12, 0x460(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050DC50(void)
{
    nofralloc
    lwz r0, lbl_8087E468
    stw r0, 0x0(r3)
    blr
}

asm void fn_8050DC5C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r22, 0x18(r1)
    lis r22, lbl_8075B1D4@ha
    mr r26, r3
    mr r27, r4
    mr r28, r5
    addi r22, r22, lbl_8075B1D4@l
    addi r31, r3, 0x8
    addi r25, r1, 0x10
    li r30, 0x0
    li r23, 0x0
    lwz r24, 0xc(r3)
    li r3, 0x0
    b lbl_fn_8050DC5C_00000240
lbl_fn_8050DC5C_00000124:
    cmpwi r27, 0x0
    bne lbl_fn_8050DC5C_00000134
    addi r29, r24, 0x40
    b lbl_fn_8050DC5C_00000138
lbl_fn_8050DC5C_00000134:
    addi r29, r24, 0x4c0
lbl_fn_8050DC5C_00000138:
    lbz r0, 0x20(r24)
    cmplwi r0, 0x1
    bne lbl_fn_8050DC5C_00000238
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8050DC5C_00000238
    cmpwi r28, -0x1
    beq lbl_fn_8050DC5C_00000164
    lwz r0, 0x24(r24)
    cmplw r28, r0
    bne lbl_fn_8050DC5C_00000238
lbl_fn_8050DC5C_00000164:
    cmpwi r3, 0x1
    beq lbl_fn_8050DC5C_00000170
    li r3, 0x2
lbl_fn_8050DC5C_00000170:
    lwz r4, 0x0(r29)
    subic. r0, r4, 0x1
    stw r0, 0x0(r29)
    bgt lbl_fn_8050DC5C_00000238
    lwz r4, 0x4(r29)
    mr r3, r29
    addi r0, r4, 0x1
    stw r0, 0x8(r1)
    lwz r12, 0x460(r29)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r3, 0x10(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8050DC5C_000001C8
    addi r5, r29, 0x20
    addi r6, r1, 0x8
    li r4, 0x0
    bl fn_805089E4
    lwz r3, 0x10(r26)
    lwz r4, 0x8(r3)
    b lbl_fn_8050DC5C_000001CC
lbl_fn_8050DC5C_000001C8:
    addi r4, r29, 0x20
lbl_fn_8050DC5C_000001CC:
    lwz r0, 0x24(r24)
    mr r7, r27
    lwz r3, lbl_8087F628
    lwz r5, 0x8(r1)
    clrlwi r6, r0, 24
    bl fn_8050B7F0
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x4(r29)
    clrlwi r6, r3, 24
    mr r3, r26
    addi r5, r22, 0xb
    add r4, r29, r0
    lbz r0, 0x20(r4)
    extsb r0, r0
    subf r0, r0, r6
    cntlzw r0, r0
    srwi r4, r0, 5
    crclr 6
    bl fn_8050E630
    stb r30, 0x0(r25)
    li r3, 0x1
    addi r25, r25, 0x1
    stw r23, 0x4(r29)
lbl_fn_8050DC5C_00000238:
    lwz r24, 0x4(r24)
    addi r30, r30, 0x1
lbl_fn_8050DC5C_00000240:
    subf r4, r24, r31
    subf r0, r31, r24
    or r0, r4, r0
    srwi. r0, r0, 31
    bne lbl_fn_8050DC5C_00000124
    lmw r22, 0x18(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8050DDE0(void)
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
lbl_fn_8050DDE0_0000028C:
    mr r3, r29
    mr r4, r31
    mr r5, r30
    bl fn_8050DC5C
    cmpwi r3, 0x0
    bne lbl_fn_8050DDE0_0000028C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050DE38(void)
{
    nofralloc
    lwz r4, 0xc(r3)
    addi r3, r3, 0x8
    li r0, 0x0
    b lbl_fn_8050DE38_000002DC
lbl_fn_8050DE38_000002D0:
    stw r0, 0x4c4(r4)
    stw r0, 0x44(r4)
    lwz r4, 0x4(r4)
lbl_fn_8050DE38_000002DC:
    cmplw r4, r3
    bne lbl_fn_8050DE38_000002D0
    blr
}

asm void fn_8050DE60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_8050DEAC
    mr r3, r31
    li r4, 0x0
    li r5, -0x1
    bl fn_8050DC5C
    mr r3, r31
    li r4, 0x1
    li r5, -0x1
    bl fn_8050DC5C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050DEAC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r26, r3
    addi r3, r1, 0x8
    bl fn_8050BA6C
    mr r31, r3
    li r29, 0x0
    b lbl_fn_8050DEAC_00000414
lbl_fn_8050DEAC_0000035C:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050DEAC_00000390
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050DEAC_00000384
    li r0, 0x0
    b lbl_fn_8050DEAC_000003AC
lbl_fn_8050DEAC_00000384:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050DEAC_000003AC
lbl_fn_8050DEAC_00000390:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050DEAC_000003A4
    li r3, 0x0
    b lbl_fn_8050DEAC_000003A8
lbl_fn_8050DEAC_000003A4:
    bl fn_806A8E40
lbl_fn_8050DEAC_000003A8:
    clrlwi r0, r3, 24
lbl_fn_8050DEAC_000003AC:
    lwz r7, 0x8(r1)
    clrlwi r0, r0, 24
    lbzx r4, r7, r29
    cmplw r4, r0
    beq lbl_fn_8050DEAC_00000410
    lwz r6, 0xc(r26)
    addi r5, r26, 0x8
    li r8, 0x0
    b lbl_fn_8050DEAC_000003F8
lbl_fn_8050DEAC_000003D0:
    lbz r0, 0x20(r6)
    cmplwi r0, 0x1
    bne lbl_fn_8050DEAC_000003F4
    lbzx r3, r7, r29
    lwz r0, 0x24(r6)
    cmplw r3, r0
    bne lbl_fn_8050DEAC_000003F4
    li r8, 0x1
    b lbl_fn_8050DEAC_00000400
lbl_fn_8050DEAC_000003F4:
    lwz r6, 0x4(r6)
lbl_fn_8050DEAC_000003F8:
    cmplw r6, r5
    bne lbl_fn_8050DEAC_000003D0
lbl_fn_8050DEAC_00000400:
    cmpwi r8, 0x0
    bne lbl_fn_8050DEAC_00000410
    mr r3, r26
    bl fn_8050D7F0
lbl_fn_8050DEAC_00000410:
    addi r29, r29, 0x1
lbl_fn_8050DEAC_00000414:
    cmpw r29, r31
    blt lbl_fn_8050DEAC_0000035C
    lwz r29, 0xc(r26)
    addi r30, r26, 0x8
    li r25, 0x0
    b lbl_fn_8050DEAC_00000504
lbl_fn_8050DEAC_0000042C:
    lbz r0, 0x20(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8050DEAC_00000500
    li r28, 0x0
    li r27, 0x0
    b lbl_fn_8050DEAC_000004C0
lbl_fn_8050DEAC_00000444:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050DEAC_00000478
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050DEAC_0000046C
    li r0, 0x0
    b lbl_fn_8050DEAC_00000494
lbl_fn_8050DEAC_0000046C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_8050DEAC_00000494
lbl_fn_8050DEAC_00000478:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8050DEAC_0000048C
    li r3, 0x0
    b lbl_fn_8050DEAC_00000490
lbl_fn_8050DEAC_0000048C:
    bl fn_806A8E40
lbl_fn_8050DEAC_00000490:
    clrlwi r0, r3, 24
lbl_fn_8050DEAC_00000494:
    lwz r3, 0x8(r1)
    clrlwi r0, r0, 24
    lbzx r3, r3, r27
    cmplw r3, r0
    beq lbl_fn_8050DEAC_000004BC
    lwz r0, 0x24(r29)
    cmplw r3, r0
    bne lbl_fn_8050DEAC_000004BC
    li r28, 0x1
    b lbl_fn_8050DEAC_000004C8
lbl_fn_8050DEAC_000004BC:
    addi r27, r27, 0x1
lbl_fn_8050DEAC_000004C0:
    cmpw r27, r31
    blt lbl_fn_8050DEAC_00000444
lbl_fn_8050DEAC_000004C8:
    cmpwi r28, 0x0
    bne lbl_fn_8050DEAC_00000500
    lwz r3, 0x24(r29)
    addi r4, r26, 0x8
    lwz r5, 0xc(r26)
    b lbl_fn_8050DEAC_000004F8
lbl_fn_8050DEAC_000004E0:
    lwz r0, 0x24(r5)
    cmplw r3, r0
    bne lbl_fn_8050DEAC_000004F4
    stb r25, 0x20(r5)
    b lbl_fn_8050DEAC_00000500
lbl_fn_8050DEAC_000004F4:
    lwz r5, 0x4(r5)
lbl_fn_8050DEAC_000004F8:
    cmplw r5, r4
    bne lbl_fn_8050DEAC_000004E0
lbl_fn_8050DEAC_00000500:
    lwz r29, 0x4(r29)
lbl_fn_8050DEAC_00000504:
    cmplw r29, r30
    bne lbl_fn_8050DEAC_0000042C
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050E098(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r14, 0x18(r1)
    mr r16, r4
    mr r15, r3
    mr r4, r5
    mr r17, r6
    mr r18, r7
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r15)
    mr r0, r3
    mr r3, r15
    lwz r12, 0x18(r12)
    clrlwi r4, r0, 24
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r20, r3
    bne lbl_fn_8050E098_00000584
    li r3, 0x0
    b lbl_fn_8050E098_00000888
lbl_fn_8050E098_00000584:
    lwz r22, 0xc(r15)
    addi r14, r15, 0x8
    b lbl_fn_8050E098_0000087C
lbl_fn_8050E098_00000590:
    lbz r0, 0x20(r22)
    cmplwi r0, 0x1
    bne lbl_fn_8050E098_00000878
    cmpwi r16, -0x1
    beq lbl_fn_8050E098_000005B0
    lwz r0, 0x24(r22)
    cmplw r16, r0
    bne lbl_fn_8050E098_00000878
lbl_fn_8050E098_000005B0:
    cmpwi r18, 0x0
    bne lbl_fn_8050E098_000005C0
    addi r29, r22, 0x40
    b lbl_fn_8050E098_000005C4
lbl_fn_8050E098_000005C0:
    addi r29, r22, 0x4c0
lbl_fn_8050E098_000005C4:
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r4, 0x28(r22)
    clrlslwi r3, r3, 24, 1
    li r23, -0x1
    lhzx r30, r4, r3
    addi r0, r30, 0x1
    sthx r0, r4, r3
    lwz r19, 0x4(r29)
    cmpwi r19, 0x0
    beq lbl_fn_8050E098_0000077C
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplwi r3, 0x1
    bne lbl_fn_8050E098_0000077C
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r28, 0x4(r29)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r31, r29, 0x20
    stw r31, 0x8(r1)
    clrlwi r23, r3, 24
    li r24, 0x0
lbl_fn_8050E098_00000640:
    lwz r21, 0x8(r1)
    subf r0, r31, r21
    cmpw r0, r28
    bge lbl_fn_8050E098_00000754
    bl fn_804AE3BC
    lwz r4, 0x8(r1)
    mr r26, r3
    lwz r12, 0x0(r3)
    lbz r25, 0x0(r4)
    lwz r12, 0x18(r12)
    mr r4, r25
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_8050E098_0000069C
    lwz r12, 0x0(r26)
    mr r3, r26
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r25, r3
    b lbl_fn_8050E098_000006FC
lbl_fn_8050E098_0000069C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_8050E098_000006CC
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_8050E098_000006CC:
    lwz r5, 0x8(r1)
    mr r3, r27
    addi r6, r1, 0x8
    lwz r4, lbl_8087F600
    addi r0, r5, 0x4
    stw r0, 0x8(r1)
    li r5, 0x1000
    li r7, 0x0
    lwz r12, 0x0(r27)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_8050E098_000006FC:
    bl fn_804AE3BC
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    clrlwi r0, r25, 24
    cmplw r0, r3
    beq lbl_fn_8050E098_00000754
    cmpw r0, r23
    bne lbl_fn_8050E098_00000640
    lwz r12, 0x0(r20)
    mr r3, r20
    mr r4, r21
    mr r5, r17
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmplwi r3, 0x1
    bne lbl_fn_8050E098_00000640
    li r24, 0x1
    stw r21, 0x8(r1)
lbl_fn_8050E098_00000754:
    cmpwi r24, 0x0
    bne lbl_fn_8050E098_00000764
    li r23, -0x1
    b lbl_fn_8050E098_00000770
lbl_fn_8050E098_00000764:
    lwz r0, 0x8(r1)
    addi r3, r29, 0x20
    subf r23, r3, r0
lbl_fn_8050E098_00000770:
    cmpwi r23, -0x1
    beq lbl_fn_8050E098_0000077C
    mr r19, r23
lbl_fn_8050E098_0000077C:
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    add r4, r19, r3
    mr r21, r3
    addi r0, r4, 0x5
    cmpwi r0, 0x3df
    blt lbl_fn_8050E098_000007EC
    lwz r19, 0x24(r22)
lbl_fn_8050E098_000007D0:
    mr r3, r15
    mr r4, r18
    mr r5, r19
    bl fn_8050DC5C
    cmpwi r3, 0x0
    bne lbl_fn_8050E098_000007D0
    li r19, 0x0
lbl_fn_8050E098_000007EC:
    lwz r12, 0x0(r20)
    add r4, r29, r19
    mr r3, r20
    lwz r12, 0x8(r12)
    addi r19, r4, 0x20
    mtctr r12
    bctrl
    clrlwi r4, r3, 24
    mr r3, r19
    li r5, 0x1
    bl memset
    mr r4, r30
    addi r3, r19, 0x2
    li r5, 0x2
    bl memset
    lwz r12, 0x0(r20)
    mr r3, r20
    mr r5, r17
    addi r4, r19, 0x4
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r23, -0x1
    bne lbl_fn_8050E098_00000878
    lwz r0, 0x4(r29)
    mr r3, r15
    add r4, r21, r0
    addi r0, r4, 0x4
    stw r0, 0x4(r29)
    lwz r12, 0x0(r15)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    add r4, r19, r21
    stb r3, 0x4(r4)
lbl_fn_8050E098_00000878:
    lwz r22, 0x4(r22)
lbl_fn_8050E098_0000087C:
    cmplw r22, r14
    bne lbl_fn_8050E098_00000590
    li r3, 0x1
lbl_fn_8050E098_00000888:
    lmw r14, 0x18(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8050E414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    lwz r6, 0x0(r4)
    lwz r12, 0x0(r3)
    lbz r31, 0x0(r6)
    lwz r12, 0x18(r12)
    mr r4, r31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8050E414_000008F8
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_8050E414_00000988
lbl_fn_8050E414_000008F8:
    cmplwi r29, 0x1
    bne lbl_fn_8050E414_00000924
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8050E414_00000924:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_8050E414_00000954
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_8050E414_00000954:
    lwz r5, 0x0(r28)
    mr r3, r30
    lwz r4, lbl_8087F600
    mr r6, r28
    addi r0, r5, 0x4
    mr r7, r29
    stw r0, 0x0(r28)
    li r5, 0x1000
    lwz r12, 0x0(r30)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    mr r3, r31
lbl_fn_8050E414_00000988:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050E514(void)
{
    nofralloc
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050E514_000009B0
    li r3, 0x1
    blr
lbl_fn_8050E514_000009B0:
    stw r4, 0x10(r3)
    li r3, 0x1
    blr
}

asm void fn_8050E534(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r5, 0x8(r1)
    lwz r3, 0x10(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8050E534_000009E8
    li r3, 0x0
    b lbl_fn_8050E534_00000A10
lbl_fn_8050E534_000009E8:
    mr r5, r4
    addi r6, r1, 0x8
    li r4, 0x1
    bl fn_805089E4
    cmpwi r3, 0x0
    bne lbl_fn_8050E534_00000A08
    li r3, 0x0
    b lbl_fn_8050E534_00000A10
lbl_fn_8050E534_00000A08:
    lwz r3, 0x10(r31)
    lwz r3, 0xc(r3)
lbl_fn_8050E534_00000A10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050E59C(void)
{
    nofralloc
    lwz r6, 0xc(r3)
    addi r3, r3, 0x8
    b lbl_fn_8050E59C_00000A94
lbl_fn_8050E59C_00000A30:
    lbz r0, 0x20(r6)
    cmplwi r0, 0x1
    bne lbl_fn_8050E59C_00000A90
    lwz r0, 0x24(r6)
    cmplw r4, r0
    bne lbl_fn_8050E59C_00000A90
    lbz r0, 0x0(r5)
    lwz r7, 0x2c(r6)
    slwi r6, r0, 1
    lhz r5, 0x2(r5)
    lhzx r0, r7, r6
    cmplw r0, r5
    bgt lbl_fn_8050E59C_00000A6C
    sthx r5, r7, r6
    b lbl_fn_8050E59C_00000A9C
lbl_fn_8050E59C_00000A6C:
    lis r3, 0x1
    subf r4, r5, r0
    addi r0, r3, -0x8000
    cmpw r4, r0
    blt lbl_fn_8050E59C_00000A88
    sthx r5, r7, r6
    b lbl_fn_8050E59C_00000A9C
lbl_fn_8050E59C_00000A88:
    li r3, 0x1
    blr
lbl_fn_8050E59C_00000A90:
    lwz r6, 0x4(r6)
lbl_fn_8050E59C_00000A94:
    cmplw r6, r3
    bne lbl_fn_8050E59C_00000A30
lbl_fn_8050E59C_00000A9C:
    li r3, 0x0
    blr
}

asm void fn_8050E61C(void)
{
    nofralloc
    cmpwi r3, -0x1
    beq lbl_fn_8050E61C_00000AB0
    stw r3, lbl_8087E46C
lbl_fn_8050E61C_00000AB0:
    lwz r3, lbl_8087E46C
    blr
}

asm void fn_8050E630(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    bne cr1, lbl_fn_8050E630_00000AE0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_8050E630_00000AE0:
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    addi r1, r1, 0x70
    blr
}

asm void fn_8050E680(void)
{
    nofralloc
    lis r4, 0x8000
    li r0, 0x0
    lwz r4, 0xf8(r4)
    srwi r4, r4, 2
    stw r4, 0x0(r3)
    stw r0, 0xc(r3)
    stw r0, 0x8(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    blr
}

asm void fn_8050E6D0(void)
{
    nofralloc
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r5, r5, 0x4dd3
    srwi r0, r0, 2
    mulhwu r0, r5, r0
    srwi r0, r0, 6
    mullw r0, r4, r0
    stw r0, 0x0(r3)
    blr
}

asm void fn_8050E6F8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSGetTime
    lwz r5, 0xc(r31)
    lwz r0, 0x8(r31)
    subfc r7, r5, r4
    lwz r5, 0x0(r31)
    subfe r6, r0, r3
    srawi r0, r5, 31
    xoris r0, r0, 0x8000
    xoris r6, r6, 0x8000
    subfc r5, r7, r5
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_fn_8050E6F8_00000C54
    lwz r5, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r5, 0x18(r31)
    cmpw r5, r0
    ble lbl_fn_8050E6F8_00000BE4
    stw r5, 0x14(r31)
lbl_fn_8050E6F8_00000BE4:
    lwz r5, 0x30(r31)
    li r6, 0x0
    lwz r0, 0x34(r31)
    stw r6, 0x10(r31)
    cmpw r5, r0
    stw r5, 0x38(r31)
    ble lbl_fn_8050E6F8_00000C04
    stw r5, 0x34(r31)
lbl_fn_8050E6F8_00000C04:
    lwz r5, 0x20(r31)
    li r6, 0x0
    lwz r0, 0x24(r31)
    stw r6, 0x30(r31)
    cmpw r5, r0
    stw r5, 0x28(r31)
    ble lbl_fn_8050E6F8_00000C24
    stw r5, 0x24(r31)
lbl_fn_8050E6F8_00000C24:
    lwz r5, 0x40(r31)
    li r6, 0x0
    lwz r0, 0x44(r31)
    stw r6, 0x20(r31)
    cmpw r5, r0
    stw r5, 0x48(r31)
    ble lbl_fn_8050E6F8_00000C44
    stw r5, 0x44(r31)
lbl_fn_8050E6F8_00000C44:
    li r0, 0x0
    stw r0, 0x40(r31)
    stw r4, 0xc(r31)
    stw r3, 0x8(r31)
lbl_fn_8050E6F8_00000C54:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050E7E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x10(r1)
    psq_st f31, 0x18(r1), 0, 0
    fmr f31, f1
    cmpwi r4, 0x0
    lfs f0, lbl_808877C0
    beq lbl_fn_8050E7E0_00000CA8
    cmpwi r4, 0x1
    beq lbl_fn_8050E7E0_00000CB0
    cmpwi r4, 0x2
    beq lbl_fn_8050E7E0_00000CDC
    cmpwi r4, 0x3
    beq lbl_fn_8050E7E0_00000D14
    b lbl_fn_8050E7E0_00000D38
lbl_fn_8050E7E0_00000CA8:
    fmr f0, f31
    b lbl_fn_8050E7E0_00000D38
lbl_fn_8050E7E0_00000CB0:
    lwz r4, 0x0(r3)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_8075B1F8@ha
    xoris r0, r4, 0x8000
    lfd f2, lbl_8075B1F8@l(r3)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    fsubs f0, f0, f2
    fdivs f0, f1, f0
    b lbl_fn_8050E7E0_00000D38
lbl_fn_8050E7E0_00000CDC:
    lis r5, 0x8000
    lwz r4, 0x0(r3)
    lwz r0, 0xf8(r5)
    lis r3, 0x1062
    addi r5, r3, 0x4dd3
    srwi r0, r0, 2
    srawi r3, r4, 31
    mulhwu r0, r5, r0
    li r5, 0x0
    srwi r6, r0, 6
    bl __div2i
    bl fn_8069641C
    fdivs f0, f31, f1
    b lbl_fn_8050E7E0_00000D38
lbl_fn_8050E7E0_00000D14:
    lis r5, 0x8000
    lwz r4, 0x0(r3)
    lwz r0, 0xf8(r5)
    li r5, 0x0
    srawi r3, r4, 31
    srwi r6, r0, 2
    bl __div2i
    bl fn_8069641C
    fdivs f0, f31, f1
lbl_fn_8050E7E0_00000D38:
    psq_l f31, 0x18(r1), 0, 0
    fmr f1, f0
    lfd f31, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050E8CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x1
    li r5, 0x1e0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    stw r4, 0x1e0(r3)
    li r4, 0x0
    stw r0, 0x1e4(r3)
    stw r0, 0x1e8(r3)
    stw r0, 0x1ec(r3)
    stw r0, 0x9fc(r3)
    stw r0, 0x9f8(r3)
    stw r0, 0xa04(r3)
    sth r0, 0x1c0(r3)
    addi r3, r3, 0x7f0
    bl memset
    addi r3, r28, 0x1f0
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r28, 0x5f0
    li r4, 0x0
    li r5, 0x200
    bl memset
    addi r30, r28, 0x1f0
    li r29, 0x0
    lis r31, lbl_807931B4@ha
lbl_fn_8050E8CC_00000DD8:
    mr r3, r30
    addi r4, r31, lbl_807931B4@l
    addi r5, r29, 0x1
    crclr 6
    bl fn_800DD3FC
    addi r29, r29, 0x1
    addi r30, r30, 0x20
    cmpwi r29, 0x20
    blt lbl_fn_8050E8CC_00000DD8
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

asm void fn_8050E998(void)
{
    nofralloc
    stwu r1, -0x350(r1)
    mflr r0
    stw r0, 0x354(r1)
    stmw r24, 0x330(r1)
    mr r24, r3
    bl fn_806CFB00
    mr r3, r24
    bl fn_806D0810
    addi r3, r24, 0x40
    li r4, 0x0
    li r5, 0x180
    bl memset
    addi r26, r24, 0x40
    addi r25, r1, 0x12
    addi r28, r1, 0x10
    li r30, 0x0
    li r31, 0x0
lbl_fn_8050E998_00000E64:
    mr r3, r26
    bl fn_806CFAC0
    cmpwi r3, 0x0
    beq lbl_fn_8050E998_00000F20
    stb r31, 0x220(r1)
    mr r3, r24
    mr r4, r26
    addi r5, r1, 0x220
    li r6, 0x0
    bl fn_8050F2F4
    stw r31, 0x10(r1)
    mr r29, r3
    stw r31, 0x14(r1)
    stw r31, 0x18(r1)
    bl fn_80686A48
    mr r27, r3
    mr r3, r28
    mr r4, r27
    bl fn_800DBF68
    lbz r3, 0xc(r1)
    slwi r0, r27, 1
    stb r3, 0x8(r1)
    mr r3, r28
    mr r6, r29
    add r7, r29, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x10(r1)
    addi r4, r1, 0x20
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_8050E998_00000EF4
    mr r5, r25
    b lbl_fn_8050E998_00000EF8
lbl_fn_8050E998_00000EF4:
    lwz r5, 0x18(r1)
lbl_fn_8050E998_00000EF8:
    li r6, 0x200
    bl fn_8006F420
    mr r3, r24
    mr r4, r26
    bl fn_806D05A0
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8050E998_00000F20
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8050E998_00000F20:
    addi r30, r30, 0x1
    addi r26, r26, 0xc
    cmpwi r30, 0x20
    blt lbl_fn_8050E998_00000E64
    lis r4, lbl_807931B4@ha
    addi r3, r24, 0x1c0
    addi r4, r4, lbl_807931B4@l
    li r5, 0x10
    addi r4, r4, 0x18
    bl fn_80686A80
    addi r3, r24, 0x7f0
    li r4, 0x0
    li r5, 0x1e0
    bl memset
    lmw r24, 0x330(r1)
    li r3, 0x1
    lwz r0, 0x354(r1)
    mtlr r0
    addi r1, r1, 0x350
    blr
}

asm void fn_8050EAE8(void)
{
    nofralloc
    b fn_806CFE90
}

asm void fn_8050EAEC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    addi r0, r3, 0x9d0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x1e0(r3)
    subf r4, r3, r0
    bl fn_800DC500
    stw r3, 0x9d0(r31)
    li r3, 0x1
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050EB30(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x1e0(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8050EB30_00000FFC
    addi r0, r3, 0x9d0
    subf r4, r3, r0
    bl fn_800DC500
    lwz r0, 0x9d0(r31)
    subf r4, r0, r3
    subf r0, r3, r0
    or r0, r4, r0
    srwi r3, r0, 31
    b lbl_fn_8050EB30_00001000
lbl_fn_8050EB30_00000FFC:
    li r3, 0x0
lbl_fn_8050EB30_00001000:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050EB8C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806D01C0
    or r0, r4, r3
    stw r4, 0x9fc(r31)
    subic r4, r0, 0x1
    stw r3, 0x9f8(r31)
    subfe r3, r4, r0
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050EBCC(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    stw r0, 0x254(r1)
    stmw r27, 0x23c(r1)
    mr r29, r3
    mr r30, r7
    addi r3, r1, 0x18
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    bl fn_8050F474
    lwz r0, 0x18(r1)
    addi r4, r1, 0x30
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    bne lbl_fn_8050EBCC_00001098
    addi r5, r1, 0x1a
    b lbl_fn_8050EBCC_0000109C
lbl_fn_8050EBCC_00001098:
    lwz r5, 0x20(r1)
lbl_fn_8050EBCC_0000109C:
    li r6, 0x200
    bl fn_8006F420
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8050EBCC_000010B8
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8050EBCC_000010B8:
    lwz r5, 0x8(r1)
    lwz r0, 0x9f8(r29)
    lwz r6, 0xc(r1)
    lwz r3, 0x9fc(r29)
    xor r0, r5, r0
    xor r3, r6, r3
    or. r0, r3, r0
    bne lbl_fn_8050EBCC_000010F0
    or. r0, r6, r5
    beq lbl_fn_8050EBCC_000010F0
    li r0, 0x1
    stw r0, 0xa04(r29)
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_000010F0:
    or. r0, r6, r5
    beq lbl_fn_8050EBCC_00001108
    mr r3, r29
    bl fn_806CF2F0
    cmpwi r3, 0x0
    bne lbl_fn_8050EBCC_00001118
lbl_fn_8050EBCC_00001108:
    li r0, 0x3
    stw r0, 0xa04(r29)
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_00001118:
    addi r31, r29, 0x40
    li r0, 0x0
    stw r0, lbl_8087F880
    mr r27, r31
    li r28, 0x0
lbl_fn_8050EBCC_0000112C:
    lwz r4, lbl_8087F880
    mr r3, r27
    addi r0, r4, 0x1
    stw r0, lbl_8087F880
    bl fn_806CFAC0
    cmpwi r3, 0x0
    beq lbl_fn_8050EBCC_0000114C
    b lbl_fn_8050EBCC_00001214
lbl_fn_8050EBCC_0000114C:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmplwi r28, 0x20
    blt lbl_fn_8050EBCC_0000112C
    li r28, -0x1
    b lbl_fn_8050EBCC_00001214
lbl_fn_8050EBCC_00001164:
    mulli r0, r28, 0xc
    add r3, r29, r0
    addi r3, r3, 0x40
    bl fn_806D0030
    or. r0, r4, r3
    stw r4, 0x14(r1)
    stw r3, 0x10(r1)
    bne lbl_fn_8050EBCC_0000119C
    slwi r0, r28, 4
    addi r3, r1, 0x10
    add r4, r29, r0
    li r5, 0x8
    addi r4, r4, 0x5f0
    bl memcpy
lbl_fn_8050EBCC_0000119C:
    lwz r4, 0x8(r1)
    lwz r0, 0x10(r1)
    lwz r5, 0xc(r1)
    lwz r3, 0x14(r1)
    xor r0, r4, r0
    xor r3, r5, r3
    or. r0, r3, r0
    bne lbl_fn_8050EBCC_000011CC
    li r0, 0x2
    stw r0, 0xa04(r29)
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_000011CC:
    lwz r28, lbl_8087F880
    mulli r0, r28, 0xc
    add r3, r29, r0
    addi r27, r3, 0x40
    b lbl_fn_8050EBCC_00001208
lbl_fn_8050EBCC_000011E0:
    lwz r4, lbl_8087F880
    mr r3, r27
    addi r0, r4, 0x1
    stw r0, lbl_8087F880
    bl fn_806CFAC0
    cmpwi r3, 0x0
    beq lbl_fn_8050EBCC_00001200
    b lbl_fn_8050EBCC_00001214
lbl_fn_8050EBCC_00001200:
    addi r27, r27, 0xc
    addi r28, r28, 0x1
lbl_fn_8050EBCC_00001208:
    cmplwi r28, 0x20
    blt lbl_fn_8050EBCC_000011E0
    li r28, -0x1
lbl_fn_8050EBCC_00001214:
    cmpwi r28, -0x1
    bne lbl_fn_8050EBCC_00001164
    mr r27, r31
    li r28, 0x0
lbl_fn_8050EBCC_00001224:
    mr r3, r27
    bl fn_806CFAC0
    cmpwi r3, 0x0
    bne lbl_fn_8050EBCC_00001238
    b lbl_fn_8050EBCC_0000124C
lbl_fn_8050EBCC_00001238:
    addi r28, r28, 0x1
    addi r27, r27, 0xc
    cmpwi r28, 0x20
    blt lbl_fn_8050EBCC_00001224
    li r28, -0x1
lbl_fn_8050EBCC_0000124C:
    cmpwi r28, -0x1
    bne lbl_fn_8050EBCC_00001264
    li r0, 0x4
    stw r0, 0xa04(r29)
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_00001264:
    bl fn_806ABF40
    cmpwi r3, 0x0
    bne lbl_fn_8050EBCC_00001280
    li r0, 0x5
    stw r0, 0xa04(r29)
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_00001280:
    lwz r5, 0x8(r1)
    addi r3, r1, 0x24
    lwz r6, 0xc(r1)
    bl fn_806D0260
    li r27, 0x0
lbl_fn_8050EBCC_00001294:
    mr r3, r31
    addi r4, r1, 0x24
    bl fn_806D04E0
    cmpwi r3, 0x0
    beq lbl_fn_8050EBCC_000012B0
    li r0, 0x1
    b lbl_fn_8050EBCC_000012C4
lbl_fn_8050EBCC_000012B0:
    addi r27, r27, 0x1
    addi r31, r31, 0xc
    cmpwi r27, 0x20
    blt lbl_fn_8050EBCC_00001294
    li r0, 0x0
lbl_fn_8050EBCC_000012C4:
    cmpwi r0, 0x0
    beq lbl_fn_8050EBCC_000012D4
    li r3, 0x0
    b lbl_fn_8050EBCC_0000138C
lbl_fn_8050EBCC_000012D4:
    mulli r5, r28, 0xc
    slwi r0, r28, 5
    lis r4, lbl_807931B4@ha
    lwz r6, 0x28(r1)
    add r3, r29, r0
    lwz r0, 0x24(r1)
    add r7, r29, r5
    addi r4, r4, lbl_807931B4@l
    stw r0, 0x40(r7)
    addi r5, r4, 0x18
    addi r3, r3, 0x1f0
    addi r4, r4, 0x1a
    stw r6, 0x44(r7)
    lwz r0, 0x2c(r1)
    stw r0, 0x48(r7)
    crclr 6
    bl fn_800DD3FC
    slwi r0, r28, 4
    addi r4, r1, 0x8
    add r3, r29, r0
    li r5, 0x8
    addi r3, r3, 0x5f0
    bl memcpy
    cmpwi r30, 0x0
    beq lbl_fn_8050EBCC_00001380
    mr r3, r29
    bl fn_806CFE90
    cmpwi r3, 0x0
    beq lbl_fn_8050EBCC_00001368
    mr r3, r29
    bl fn_806CFEA0
    lis r3, lbl_8075B238@ha
    mr r5, r29
    addi r3, r3, lbl_8075B238@l
    li r4, 0x0
    li r6, 0x40
    bl fn_800A5218
lbl_fn_8050EBCC_00001368:
    lis r3, lbl_8075B238@ha
    addi r5, r29, 0x40
    addi r3, r3, lbl_8075B238@l
    li r4, 0x40
    li r6, 0x9b0
    bl fn_800A5218
lbl_fn_8050EBCC_00001380:
    li r0, 0x0
    stw r0, 0xa04(r29)
    li r3, 0x1
lbl_fn_8050EBCC_0000138C:
    lmw r27, 0x23c(r1)
    lwz r0, 0x254(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_8050EF18(void)
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
    bl fn_806ABF40
    cmpwi r3, 0x0
    bne lbl_fn_8050EF18_000013D8
    li r3, 0x0
    b lbl_fn_8050EF18_0000143C
lbl_fn_8050EF18_000013D8:
    mulli r0, r30, 0xc
    add r3, r29, r0
    addi r3, r3, 0x40
    bl fn_806ABF80
    cmpwi r31, 0x0
    beq lbl_fn_8050EF18_00001438
    mr r3, r29
    bl fn_806CFE90
    cmpwi r3, 0x0
    beq lbl_fn_8050EF18_00001420
    mr r3, r29
    bl fn_806CFEA0
    lis r3, lbl_8075B238@ha
    mr r5, r29
    addi r3, r3, lbl_8075B238@l
    li r4, 0x0
    li r6, 0x40
    bl fn_800A5218
lbl_fn_8050EF18_00001420:
    lis r3, lbl_8075B238@ha
    addi r5, r29, 0x40
    addi r3, r3, lbl_8075B238@l
    li r4, 0x40
    li r6, 0x9b0
    bl fn_800A5218
lbl_fn_8050EF18_00001438:
    li r3, 0x1
lbl_fn_8050EF18_0000143C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050EFD0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    stw r31, 0x13c(r1)
    stw r30, 0x138(r1)
    mr r30, r4
    stw r29, 0x134(r1)
    mr r29, r5
    stw r28, 0x130(r1)
    mr r28, r3
    addi r3, r3, 0x1c0
    bl fn_80686AF0
    cmpwi r3, 0x0
    beq lbl_fn_8050EFD0_00001604
    mr r4, r30
    addi r3, r28, 0x1c0
    bl fn_80686A64
    cmpwi r29, 0x0
    beq lbl_fn_8050EFD0_000014EC
    mr r3, r28
    bl fn_806CFE90
    cmpwi r3, 0x0
    beq lbl_fn_8050EFD0_000014D4
    mr r3, r28
    bl fn_806CFEA0
    lis r3, lbl_8075B238@ha
    mr r5, r28
    addi r3, r3, lbl_8075B238@l
    li r4, 0x0
    li r6, 0x40
    bl fn_800A5218
lbl_fn_8050EFD0_000014D4:
    lis r3, lbl_8075B238@ha
    addi r5, r28, 0x40
    addi r3, r3, lbl_8075B238@l
    li r4, 0x40
    li r6, 0x9b0
    bl fn_800A5218
lbl_fn_8050EFD0_000014EC:
    lis r3, lbl_807931B4@ha
    li r0, 0x0
    addi r3, r3, lbl_807931B4@l
    stw r0, 0x18(r1)
    addi r30, r3, 0x22
    addi r31, r1, 0x18
    stw r0, 0x1c(r1)
    mr r3, r30
    stw r0, 0x20(r1)
    bl fn_80686A48
    mr r29, r3
    mr r3, r31
    mr r4, r29
    bl fn_800DBF68
    lbz r3, 0x8(r1)
    slwi r0, r29, 1
    stb r3, 0xc(r1)
    mr r3, r31
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8050EFD0_00001564
    lbz r0, 0x18(r1)
    clrlwi r29, r0, 25
    b lbl_fn_8050EFD0_00001568
lbl_fn_8050EFD0_00001564:
    lwz r29, 0x1c(r1)
lbl_fn_8050EFD0_00001568:
    lbz r0, 0x10(r1)
    addi r3, r28, 0x1c0
    stb r0, 0x14(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    add r5, r28, r0
    addi r3, r1, 0x18
    addi r7, r5, 0x1c0
    addi r6, r28, 0x1c0
    addi r8, r1, 0x14
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8050EFD0_000015BC
    lbz r0, 0x18(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8050EFD0_000015C0
lbl_fn_8050EFD0_000015BC:
    lwz r0, 0x1c(r1)
lbl_fn_8050EFD0_000015C0:
    cmpwi r3, 0x0
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x28
    beq lbl_fn_8050EFD0_000015D8
    addi r5, r1, 0x1a
    b lbl_fn_8050EFD0_000015DC
lbl_fn_8050EFD0_000015D8:
    lwz r5, 0x20(r1)
lbl_fn_8050EFD0_000015DC:
    slwi r6, r0, 1
    bl fn_8006F420
    addi r3, r1, 0x28
    li r4, 0x0
    bl fn_806AC0A0
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8050EFD0_00001604
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8050EFD0_00001604:
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8050F19C(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lis r4, lbl_807931B4@ha
    stw r0, 0x144(r1)
    addi r4, r4, lbl_807931B4@l
    li r0, 0x0
    stw r31, 0x13c(r1)
    addi r31, r4, 0x22
    stw r30, 0x138(r1)
    addi r30, r1, 0x18
    stw r29, 0x134(r1)
    stw r28, 0x130(r1)
    mr r28, r3
    mr r3, r31
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_80686A48
    mr r29, r3
    mr r3, r30
    mr r4, r29
    bl fn_800DBF68
    lbz r3, 0x14(r1)
    slwi r0, r29, 1
    stb r3, 0x10(r1)
    mr r3, r30
    mr r6, r31
    add r7, r31, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8050F19C_000016BC
    lbz r0, 0x18(r1)
    clrlwi r29, r0, 25
    b lbl_fn_8050F19C_000016C0
lbl_fn_8050F19C_000016BC:
    lwz r29, 0x1c(r1)
lbl_fn_8050F19C_000016C0:
    lbz r0, 0xc(r1)
    addi r3, r28, 0x1c0
    stb r0, 0x8(r1)
    bl fn_80686A48
    slwi r0, r3, 1
    mr r4, r29
    add r5, r28, r0
    addi r3, r1, 0x18
    addi r7, r5, 0x1c0
    addi r6, r28, 0x1c0
    addi r8, r1, 0x8
    li r5, 0x0
    bl fn_8006F72C
    lwz r0, 0x18(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r3, r0, 5
    beq lbl_fn_8050F19C_00001714
    lbz r0, 0x18(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8050F19C_00001718
lbl_fn_8050F19C_00001714:
    lwz r0, 0x1c(r1)
lbl_fn_8050F19C_00001718:
    cmpwi r3, 0x0
    lwz r3, lbl_8087EEC8
    addi r4, r1, 0x28
    beq lbl_fn_8050F19C_00001730
    addi r5, r1, 0x1a
    b lbl_fn_8050F19C_00001734
lbl_fn_8050F19C_00001730:
    lwz r5, 0x20(r1)
lbl_fn_8050F19C_00001734:
    slwi r6, r0, 1
    bl fn_8006F420
    addi r3, r1, 0x28
    li r4, 0x0
    bl fn_806AC0A0
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8050F19C_0000175C
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_8050F19C_0000175C:
    lwz r0, 0x144(r1)
    lwz r31, 0x13c(r1)
    lwz r30, 0x138(r1)
    lwz r29, 0x134(r1)
    lwz r28, 0x130(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_8050F2F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    beq lbl_fn_8050F2F4_000017A0
    li r0, 0x0
    stb r0, 0x0(r5)
lbl_fn_8050F2F4_000017A0:
    cmpwi r4, 0x0
    bne lbl_fn_8050F2F4_000017B0
    li r3, 0x0
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_000017B0:
    mr r3, r4
    mr r4, r5
    bl fn_806ABCF0
    cmpwi r31, 0x0
    beq lbl_fn_8050F2F4_000017CC
    clrlwi r0, r3, 24
    stw r0, 0x0(r31)
lbl_fn_8050F2F4_000017CC:
    clrlwi. r0, r3, 24
    beq lbl_fn_8050F2F4_00001808
    cmpwi r0, 0x1
    beq lbl_fn_8050F2F4_00001818
    cmpwi r0, 0x2
    beq lbl_fn_8050F2F4_00001828
    cmpwi r0, 0x3
    beq lbl_fn_8050F2F4_00001838
    cmpwi r0, 0x4
    beq lbl_fn_8050F2F4_00001848
    cmpwi r0, 0x6
    beq lbl_fn_8050F2F4_00001858
    cmpwi r0, 0x5
    beq lbl_fn_8050F2F4_00001868
    b lbl_fn_8050F2F4_00001878
lbl_fn_8050F2F4_00001808:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x30
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001818:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x40
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001828:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x4e
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001838:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x5e
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001848:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x7a
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001858:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0x94
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001868:
    lis r3, lbl_807931B4@ha
    addi r3, r3, lbl_807931B4@l
    addi r3, r3, 0xae
    b lbl_fn_8050F2F4_0000187C
lbl_fn_8050F2F4_00001878:
    li r3, 0x0
lbl_fn_8050F2F4_0000187C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050F408(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    addi r31, r3, 0x40
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_8050F408_000018AC:
    mr r3, r31
    bl fn_806CFAC0
    cmpwi r3, 0x0
    bne lbl_fn_8050F408_000018C4
    mr r3, r30
    b lbl_fn_8050F408_000018D8
lbl_fn_8050F408_000018C4:
    addi r30, r30, 0x1
    addi r31, r31, 0xc
    cmpwi r30, 0x20
    blt lbl_fn_8050F408_000018AC
    li r3, -0x1
lbl_fn_8050F408_000018D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050F468(void)
{
    nofralloc
    lwz r5, 0x9f8(r4)
    lwz r6, 0x9fc(r4)
    b fn_8050F474
}

asm void fn_8050F474(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    or. r0, r6, r5
    stmw r27, 0x21c(r1)
    mr r27, r3
    mr r30, r5
    mr r31, r6
    beq lbl_fn_8050F474_000019B4
    mr r3, r30
    mr r4, r31
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    mr r28, r4
    mr r29, r3
    mr r3, r30
    mr r4, r31
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    mr r30, r4
    mr r3, r29
    mr r4, r28
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    mr r31, r4
    mr r3, r29
    mr r4, r28
    li r6, 0x2710
    li r5, 0x0
    bl __div2u
    li r6, 0x2710
    li r5, 0x0
    bl __mod2u
    lis r8, lbl_807931B4@ha
    mr r5, r4
    addi r8, r8, lbl_807931B4@l
    mr r6, r31
    mr r7, r30
    addi r3, r1, 0x10
    addi r4, r8, 0xc8
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8050F474_000019CC
lbl_fn_8050F474_000019B4:
    lis r4, lbl_807931B4@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_807931B4@l
    addi r4, r4, 0xe6
    crclr 6
    bl fn_800DD3FC
lbl_fn_8050F474_000019CC:
    li r0, 0x0
    stw r0, 0x0(r27)
    addi r3, r1, 0x10
    stw r0, 0x4(r27)
    stw r0, 0x8(r27)
    bl fn_80686A48
    mr r30, r3
    mr r3, r27
    mr r4, r30
    bl fn_800DBF68
    addi r6, r1, 0x10
    lbz r3, 0xc(r1)
    stb r3, 0x8(r1)
    mr r7, r6
    slwi r0, r30, 1
    mr r3, r27
    add r7, r7, r0
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    lmw r27, 0x21c(r1)
    lwz r0, 0x234(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
