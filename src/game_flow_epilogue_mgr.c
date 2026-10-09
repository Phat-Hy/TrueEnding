#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_14(void);
extern void _restgpr_24(void);
extern void _savegpr_14(void);
extern void _savegpr_24(void);
extern void fn_8003EFB0(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB58C(void);
extern void fn_801765D8(void);
extern void fn_803E9B7C(void);
extern void fn_803EBA54(void);
extern void fn_803FC65C(void);
extern void fn_804AE3BC(void);
extern void fn_804C54FC(void);
extern void fn_804D818C(void);
extern void fn_804E9C68(void);
extern void fn_804F50E0(void);
extern void fn_8050128C(void);
extern void fn_8050E098(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_80759CC8[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8AE8[];
extern u8 lbl_807C8F48[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087EE90;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5D8;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_80887570;
extern u32 lbl_80887588;
extern u32 lbl_80887590;

/* Function declarations */
void fn_804E8094(void);
void fn_804E80A4(void);
void fn_804E80AC(void);
void fn_804E80BC(void);
void fn_804E80C4(void);
void fn_804E80CC(void);
void fn_804E81C8(void);
void fn_804E81D0(void);
void fn_804E8244(void);
void fn_804E824C(void);
void fn_804E82C0(void);
void fn_804E82C8(void);
void fn_804E8A84(void);
void fn_804E8BF8(void);
void fn_804E9364(void);

asm void fn_804E8094(void)
{
    nofralloc
    mulli r0, r4, 0xc
    add r3, r3, r0
    addi r3, r3, 0x13b8
    blr
}

asm void fn_804E80A4(void)
{
    nofralloc
    lwz r3, 0xc4c(r3)
    blr
}

asm void fn_804E80AC(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    lfs f1, 0x13d0(r3)
    blr
}

asm void fn_804E80BC(void)
{
    nofralloc
    lwz r3, 0x524(r3)
    blr
}

asm void fn_804E80C4(void)
{
    nofralloc
    lfs f1, 0x588(r3)
    blr
}

asm void fn_804E80CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lfs f0, 0x0(r4)
    stfs f0, 0x10(r1)
    lwz r6, 0x10(r1)
    cmpwi r6, 0x0
    bne lbl_fn_804E80CC_00000058
    li r0, 0x0
    b lbl_fn_804E80CC_00000088
lbl_fn_804E80CC_00000058:
    extrwi r5, r6, 8, 1
    subic. r5, r5, 0x70
    bge lbl_fn_804E80CC_0000006C
    li r0, 0x0
    b lbl_fn_804E80CC_00000088
lbl_fn_804E80CC_0000006C:
    cmpwi r5, 0x1f
    ble lbl_fn_804E80CC_00000078
    li r5, 0x1f
lbl_fn_804E80CC_00000078:
    rlwinm r0, r6, 16, 16, 16
    rlwimi r0, r5, 10, 17, 21
    rlwimi r0, r6, 19, 22, 31
    extsh r0, r0
lbl_fn_804E80CC_00000088:
    lfs f0, 0x4(r4)
    stfs f0, 0xc(r1)
    lwz r6, 0xc(r1)
    sth r0, 0x0(r3)
    cmpwi r6, 0x0
    bne lbl_fn_804E80CC_000000A8
    li r0, 0x0
    b lbl_fn_804E80CC_000000D8
lbl_fn_804E80CC_000000A8:
    extrwi r5, r6, 8, 1
    subic. r5, r5, 0x70
    bge lbl_fn_804E80CC_000000BC
    li r0, 0x0
    b lbl_fn_804E80CC_000000D8
lbl_fn_804E80CC_000000BC:
    cmpwi r5, 0x1f
    ble lbl_fn_804E80CC_000000C8
    li r5, 0x1f
lbl_fn_804E80CC_000000C8:
    rlwinm r0, r6, 16, 16, 16
    rlwimi r0, r5, 10, 17, 21
    rlwimi r0, r6, 19, 22, 31
    extsh r0, r0
lbl_fn_804E80CC_000000D8:
    lfs f0, 0x8(r4)
    stfs f0, 0x8(r1)
    lwz r5, 0x8(r1)
    sth r0, 0x2(r3)
    cmpwi r5, 0x0
    bne lbl_fn_804E80CC_000000F8
    li r0, 0x0
    b lbl_fn_804E80CC_00000128
lbl_fn_804E80CC_000000F8:
    extrwi r4, r5, 8, 1
    subic. r4, r4, 0x70
    bge lbl_fn_804E80CC_0000010C
    li r0, 0x0
    b lbl_fn_804E80CC_00000128
lbl_fn_804E80CC_0000010C:
    cmpwi r4, 0x1f
    ble lbl_fn_804E80CC_00000118
    li r4, 0x1f
lbl_fn_804E80CC_00000118:
    rlwinm r0, r5, 16, 16, 16
    rlwimi r0, r4, 10, 17, 21
    rlwimi r0, r5, 19, 22, 31
    extsh r0, r0
lbl_fn_804E80CC_00000128:
    sth r0, 0x4(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_804E81C8(void)
{
    nofralloc
    addi r3, r3, 0xfa4
    blr
}

asm void fn_804E81D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    sth r0, 0x0(r3)
    sth r4, 0x2(r3)
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804E81D0_00000188
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E81D0_00000188:
    li r0, 0x0
    stw r0, lbl_8087F5FC
    li r0, 0x37
    mr r3, r31
    sth r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E8244(void)
{
    nofralloc
    addi r3, r3, 0x4
    blr
}

asm void fn_804E824C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x2
    stw r31, 0xc(r1)
    mr r31, r3
    sth r0, 0x0(r3)
    sth r4, 0x2(r3)
    lbz r0, lbl_8087F5F8
    extsb. r0, r0
    bne lbl_fn_804E824C_00000204
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E824C_00000204:
    li r0, 0x0
    stw r0, lbl_8087F5FC
    li r0, 0x3c
    mr r3, r31
    sth r0, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804E82C0(void)
{
    nofralloc
    addi r3, r3, 0x4
    blr
}

asm void fn_804E82C8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_24
    cmpwi r4, 0x0
    mr r25, r3
    mr r24, r4
    blt lbl_fn_804E82C8_00000260
    cmpwi r4, 0xa
    blt lbl_fn_804E82C8_00000268
lbl_fn_804E82C8_00000260:
    li r3, 0x0
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_00000268:
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_804E82C8_00000280
    lwz r0, lbl_8087F498
    cmpwi r0, 0x0
    bne lbl_fn_804E82C8_00000288
lbl_fn_804E82C8_00000280:
    li r3, 0x0
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_00000288:
    addi r3, r3, 0x2b70
    bl fn_800CB58C
    cmpwi r3, 0x0
    beq lbl_fn_804E82C8_000002A0
    li r3, 0x0
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_000002A0:
    lwz r3, lbl_8087F498
    bl fn_803EBA54
    cmpwi r3, 0x0
    bne lbl_fn_804E82C8_000002B8
    li r3, 0x0
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_000002B8:
    lwz r0, lbl_8087F5D8
    lwz r3, lbl_8087F628
    mulli r0, r0, 0xa
    add r0, r24, r0
    slwi r0, r0, 2
    add r3, r3, r0
    lha r30, 0xc38(r3)
    lha r29, 0xc3a(r3)
    cmpwi r30, 0x0
    mr r5, r29
    blt lbl_fn_804E82C8_000002EC
    cmpwi r30, 0x15
    ble lbl_fn_804E82C8_000002F4
lbl_fn_804E82C8_000002EC:
    li r28, 0x0
    b lbl_fn_804E82C8_00000420
lbl_fn_804E82C8_000002F4:
    bge lbl_fn_804E82C8_0000032C
    cmpwi r29, 0x0
    blt lbl_fn_804E82C8_00000314
    mulli r0, r30, 0xc
    add r3, r25, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r29
    bgt lbl_fn_804E82C8_0000031C
lbl_fn_804E82C8_00000314:
    li r28, 0x0
    b lbl_fn_804E82C8_00000420
lbl_fn_804E82C8_0000031C:
    mulli r0, r29, 0x1c
    lwz r3, 0x2a58(r3)
    add r28, r3, r0
    b lbl_fn_804E82C8_00000420
lbl_fn_804E82C8_0000032C:
    cmpwi r29, 0x0
    bge lbl_fn_804E82C8_0000033C
    li r28, 0x0
    b lbl_fn_804E82C8_00000420
lbl_fn_804E82C8_0000033C:
    mr r4, r25
    li r3, 0x0
    b lbl_fn_804E82C8_00000354
lbl_fn_804E82C8_00000348:
    subf r5, r0, r5
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_804E82C8_00000354:
    cmpwi r3, 0x14
    bge lbl_fn_804E82C8_00000368
    lwz r0, 0x2a50(r4)
    cmplw r0, r5
    ble lbl_fn_804E82C8_00000348
lbl_fn_804E82C8_00000368:
    cmpwi r3, 0x14
    bge lbl_fn_804E82C8_0000041C
    cmpwi r3, 0x0
    blt lbl_fn_804E82C8_00000380
    cmpwi r3, 0x15
    ble lbl_fn_804E82C8_00000388
lbl_fn_804E82C8_00000380:
    li r3, 0x0
    b lbl_fn_804E82C8_00000414
lbl_fn_804E82C8_00000388:
    bge lbl_fn_804E82C8_000003C0
    cmpwi r5, 0x0
    blt lbl_fn_804E82C8_000003A8
    mulli r0, r3, 0xc
    add r3, r25, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r5
    bgt lbl_fn_804E82C8_000003B0
lbl_fn_804E82C8_000003A8:
    li r3, 0x0
    b lbl_fn_804E82C8_00000414
lbl_fn_804E82C8_000003B0:
    mulli r0, r5, 0x1c
    lwz r3, 0x2a58(r3)
    add r3, r3, r0
    b lbl_fn_804E82C8_00000414
lbl_fn_804E82C8_000003C0:
    cmpwi r5, 0x0
    bge lbl_fn_804E82C8_000003D0
    li r3, 0x0
    b lbl_fn_804E82C8_00000414
lbl_fn_804E82C8_000003D0:
    mr r3, r25
    li r4, 0x0
    b lbl_fn_804E82C8_000003E8
lbl_fn_804E82C8_000003DC:
    subf r5, r0, r5
    addi r3, r3, 0xc
    addi r4, r4, 0x1
lbl_fn_804E82C8_000003E8:
    cmpwi r4, 0x14
    bge lbl_fn_804E82C8_000003FC
    lwz r0, 0x2a50(r3)
    cmplw r0, r5
    ble lbl_fn_804E82C8_000003DC
lbl_fn_804E82C8_000003FC:
    cmpwi r4, 0x14
    bge lbl_fn_804E82C8_00000410
    addi r3, r25, 0x2a50
    bl fn_804C54FC
    b lbl_fn_804E82C8_00000414
lbl_fn_804E82C8_00000410:
    li r3, 0x0
lbl_fn_804E82C8_00000414:
    mr r28, r3
    b lbl_fn_804E82C8_00000420
lbl_fn_804E82C8_0000041C:
    li r28, 0x0
lbl_fn_804E82C8_00000420:
    cmpwi r30, 0x14
    bne lbl_fn_804E82C8_00000758
    lis r3, lbl_80759CC8@ha
    li r0, 0xd
    addi r3, r3, lbl_80759CC8@l
    addi r5, r1, 0x24
    subi r4, r3, 0x4
    mtctr r0
lbl_fn_804E82C8_00000440:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_804E82C8_00000440
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E82C8_00000488
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_0000047C
    li r0, 0x0
    b lbl_fn_804E82C8_000004A4
lbl_fn_804E82C8_0000047C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E82C8_000004A4
lbl_fn_804E82C8_00000488:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_0000049C
    li r3, 0x0
    b lbl_fn_804E82C8_000004A0
lbl_fn_804E82C8_0000049C:
    bl fn_806A8E40
lbl_fn_804E82C8_000004A0:
    clrlwi r0, r3, 24
lbl_fn_804E82C8_000004A4:
    lwz r5, 0x5e8(r25)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E82C8_000004EC
lbl_fn_804E82C8_000004BC:
    lwz r0, 0x5e4(r25)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E82C8_000004E4
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E82C8_000004E4
    b lbl_fn_804E82C8_000004F0
lbl_fn_804E82C8_000004E4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E82C8_000004BC
lbl_fn_804E82C8_000004EC:
    li r5, 0x0
lbl_fn_804E82C8_000004F0:
    cmpwi r5, 0x0
    beq lbl_fn_804E82C8_00000758
    lwz r0, 0xb0(r5)
    addi r3, r1, 0x28
    li r27, 0x0
    li r26, 0x0
    slwi r0, r0, 2
    li r24, 0x0
    lwzx r30, r3, r0
    mulli r0, r30, 0xc
    add r31, r25, r0
    b lbl_fn_804E82C8_0000068C
lbl_fn_804E82C8_00000520:
    cmpwi r30, 0x0
    mr r5, r26
    blt lbl_fn_804E82C8_00000534
    cmpwi r30, 0x15
    ble lbl_fn_804E82C8_0000053C
lbl_fn_804E82C8_00000534:
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_0000053C:
    bge lbl_fn_804E82C8_00000568
    cmpwi r26, 0x0
    blt lbl_fn_804E82C8_00000554
    lwz r0, 0x2a50(r31)
    cmpw r0, r26
    bgt lbl_fn_804E82C8_0000055C
lbl_fn_804E82C8_00000554:
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_0000055C:
    lwz r0, 0x2a58(r31)
    add r3, r0, r24
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_00000568:
    cmpwi r26, 0x0
    bge lbl_fn_804E82C8_00000578
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_00000578:
    mr r4, r25
    li r3, 0x0
    b lbl_fn_804E82C8_00000590
lbl_fn_804E82C8_00000584:
    subf r5, r0, r5
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_804E82C8_00000590:
    cmpwi r3, 0x14
    bge lbl_fn_804E82C8_000005A4
    lwz r0, 0x2a50(r4)
    cmplw r0, r5
    ble lbl_fn_804E82C8_00000584
lbl_fn_804E82C8_000005A4:
    cmpwi r3, 0x14
    bge lbl_fn_804E82C8_00000654
    cmpwi r3, 0x0
    blt lbl_fn_804E82C8_000005BC
    cmpwi r3, 0x15
    ble lbl_fn_804E82C8_000005C4
lbl_fn_804E82C8_000005BC:
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_000005C4:
    bge lbl_fn_804E82C8_000005FC
    cmpwi r5, 0x0
    blt lbl_fn_804E82C8_000005E4
    mulli r0, r3, 0xc
    add r3, r25, r0
    lwz r0, 0x2a50(r3)
    cmpw r0, r5
    bgt lbl_fn_804E82C8_000005EC
lbl_fn_804E82C8_000005E4:
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_000005EC:
    mulli r0, r5, 0x1c
    lwz r3, 0x2a58(r3)
    add r3, r3, r0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_000005FC:
    cmpwi r5, 0x0
    bge lbl_fn_804E82C8_0000060C
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_0000060C:
    mr r3, r25
    li r4, 0x0
    b lbl_fn_804E82C8_00000624
lbl_fn_804E82C8_00000618:
    subf r5, r0, r5
    addi r3, r3, 0xc
    addi r4, r4, 0x1
lbl_fn_804E82C8_00000624:
    cmpwi r4, 0x14
    bge lbl_fn_804E82C8_00000638
    lwz r0, 0x2a50(r3)
    cmplw r0, r5
    ble lbl_fn_804E82C8_00000618
lbl_fn_804E82C8_00000638:
    cmpwi r4, 0x14
    bge lbl_fn_804E82C8_0000064C
    addi r3, r25, 0x2a50
    bl fn_804C54FC
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_0000064C:
    li r3, 0x0
    b lbl_fn_804E82C8_00000658
lbl_fn_804E82C8_00000654:
    li r3, 0x0
lbl_fn_804E82C8_00000658:
    cmpwi r3, 0x0
    beq lbl_fn_804E82C8_00000684
    lwz r4, 0x4(r3)
    lwz r0, 0x4(r28)
    clrlwi r4, r4, 24
    clrlwi r0, r0, 24
    cmplw r4, r0
    bne lbl_fn_804E82C8_00000684
    mr r27, r3
    mr r29, r26
    b lbl_fn_804E82C8_00000754
lbl_fn_804E82C8_00000684:
    addi r26, r26, 0x1
    addi r24, r24, 0x1c
lbl_fn_804E82C8_0000068C:
    cmpwi r30, 0x0
    blt lbl_fn_804E82C8_0000069C
    cmpwi r30, 0x15
    ble lbl_fn_804E82C8_000006A4
lbl_fn_804E82C8_0000069C:
    li r0, 0x0
    b lbl_fn_804E82C8_0000074C
lbl_fn_804E82C8_000006A4:
    bge lbl_fn_804E82C8_000006B0
    lwz r0, 0x2a50(r31)
    b lbl_fn_804E82C8_0000074C
lbl_fn_804E82C8_000006B0:
    lwz r4, 0x2a50(r25)
    lwz r3, 0x2a5c(r25)
    lwz r0, 0x2a68(r25)
    add r5, r4, r3
    lwz r3, 0x2a74(r25)
    add r5, r5, r0
    lwz r0, 0x2a80(r25)
    add r5, r5, r3
    lwz r4, 0x2a8c(r25)
    add r5, r5, r0
    lwz r3, 0x2a98(r25)
    add r5, r5, r4
    lwz r0, 0x2aa4(r25)
    add r5, r5, r3
    lwz r3, 0x2ab0(r25)
    add r5, r5, r0
    lwz r0, 0x2abc(r25)
    add r5, r5, r3
    lwz r4, 0x2ac8(r25)
    add r5, r5, r0
    lwz r3, 0x2ad4(r25)
    add r5, r5, r4
    lwz r0, 0x2ae0(r25)
    add r5, r5, r3
    lwz r3, 0x2aec(r25)
    add r5, r5, r0
    lwz r0, 0x2af8(r25)
    add r5, r5, r3
    lwz r4, 0x2b04(r25)
    add r5, r5, r0
    lwz r3, 0x2b10(r25)
    add r5, r5, r4
    lwz r0, 0x2b1c(r25)
    add r5, r5, r3
    lwz r3, 0x2b28(r25)
    add r5, r5, r0
    lwz r0, 0x2b34(r25)
    add r5, r5, r3
    add r0, r5, r0
lbl_fn_804E82C8_0000074C:
    cmplw r26, r0
    blt lbl_fn_804E82C8_00000520
lbl_fn_804E82C8_00000754:
    mr r28, r27
lbl_fn_804E82C8_00000758:
    cmpwi r28, 0x0
    bne lbl_fn_804E82C8_00000768
    li r3, 0x0
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_00000768:
    lwz r4, lbl_8087F498
    addi r3, r1, 0x8
    lwz r5, 0x0(r28)
    li r6, 0x0
    lfs f1, lbl_80887590
    li r7, 0x1
    bl fn_803E9B7C
    addi r3, r25, 0x2b70
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E82C8_000007D0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_000007C4
    li r0, 0x0
    b lbl_fn_804E82C8_000007EC
lbl_fn_804E82C8_000007C4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E82C8_000007EC
lbl_fn_804E82C8_000007D0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_000007E4
    li r3, 0x0
    b lbl_fn_804E82C8_000007E8
lbl_fn_804E82C8_000007E4:
    bl fn_806A8E40
lbl_fn_804E82C8_000007E8:
    clrlwi r0, r3, 24
lbl_fn_804E82C8_000007EC:
    lwz r5, 0x5e8(r25)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E82C8_00000834
lbl_fn_804E82C8_00000804:
    lwz r0, 0x5e4(r25)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E82C8_0000082C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E82C8_0000082C
    b lbl_fn_804E82C8_00000838
lbl_fn_804E82C8_0000082C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E82C8_00000804
lbl_fn_804E82C8_00000834:
    li r5, 0x0
lbl_fn_804E82C8_00000838:
    cmpwi r5, 0x0
    bne lbl_fn_804E82C8_00000848
    li r3, 0x1
    b lbl_fn_804E82C8_000009D8
lbl_fn_804E82C8_00000848:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1030
    sth r4, 0x18(r1)
    extsb. r0, r0
    sth r3, 0x1a(r1)
    bne lbl_fn_804E82C8_00000884
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E82C8_00000884:
    li r24, 0x0
    li r0, 0xa
    stw r24, lbl_8087F5FC
    addi r26, r1, 0x1c
    sth r0, 0x18(r1)
    lwz r0, 0x0(r28)
    stw r0, 0x1c(r1)
    stw r24, 0x20(r1)
    bl fn_804AE3BC
    mr r6, r26
    li r4, -0x1
    li r5, 0x1030
    li r7, 0x0
    bl fn_8050E098
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E82C8_000008EC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_000008E0
    b lbl_fn_804E82C8_00000908
lbl_fn_804E82C8_000008E0:
    bl fn_806B0E30
    clrlwi r24, r3, 24
    b lbl_fn_804E82C8_00000908
lbl_fn_804E82C8_000008EC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E82C8_000008FC
    b lbl_fn_804E82C8_00000904
lbl_fn_804E82C8_000008FC:
    bl fn_806A8E40
    mr r24, r3
lbl_fn_804E82C8_00000904:
    clrlwi r24, r24, 24
lbl_fn_804E82C8_00000908:
    lwz r0, 0x5e8(r25)
    clrlwi r5, r24, 24
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E82C8_00000950
lbl_fn_804E82C8_00000920:
    lwz r0, 0x5e4(r25)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E82C8_00000948
    lbz r0, 0xcc(r4)
    cmplw r5, r0
    bne lbl_fn_804E82C8_00000948
    b lbl_fn_804E82C8_00000954
lbl_fn_804E82C8_00000948:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E82C8_00000920
lbl_fn_804E82C8_00000950:
    li r4, 0x0
lbl_fn_804E82C8_00000954:
    mr r3, r25
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    bl fn_804F50E0
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x103e
    sth r4, 0x10(r1)
    extsb. r0, r0
    sth r3, 0x12(r1)
    bne lbl_fn_804E82C8_000009A0
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E82C8_000009A0:
    li r3, 0x0
    li r0, 0x6
    stw r3, lbl_8087F5FC
    addi r24, r1, 0x14
    sth r0, 0x10(r1)
    sth r30, 0x14(r1)
    sth r29, 0x16(r1)
    bl fn_804AE3BC
    mr r6, r24
    li r4, -0x1
    li r5, 0x103e
    li r7, 0x0
    bl fn_8050E098
    li r3, 0x1
lbl_fn_804E82C8_000009D8:
    addi r11, r1, 0xb0
    bl _restgpr_24
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_804E8A84(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r5, lbl_8087F628
    addis r3, r5, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E8A84_00000A40
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8A84_00000A34
    li r0, 0x0
    b lbl_fn_804E8A84_00000A5C
lbl_fn_804E8A84_00000A34:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E8A84_00000A5C
lbl_fn_804E8A84_00000A40:
    lwz r0, 0x1f8(r5)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8A84_00000A54
    li r3, 0x0
    b lbl_fn_804E8A84_00000A58
lbl_fn_804E8A84_00000A54:
    bl fn_806A8E40
lbl_fn_804E8A84_00000A58:
    clrlwi r0, r3, 24
lbl_fn_804E8A84_00000A5C:
    lwz r4, 0x5e8(r30)
    clrlwi r5, r0, 24
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_804E8A84_00000AA4
lbl_fn_804E8A84_00000A74:
    lwz r0, 0x5e4(r30)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8A84_00000A9C
    lbz r0, 0xcc(r4)
    cmplw r5, r0
    bne lbl_fn_804E8A84_00000A9C
    b lbl_fn_804E8A84_00000AA8
lbl_fn_804E8A84_00000A9C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E8A84_00000A74
lbl_fn_804E8A84_00000AA4:
    li r4, 0x0
lbl_fn_804E8A84_00000AA8:
    lis r5, 0x1
    mr r3, r30
    subi r0, r5, 0x1
    clrlwi r6, r31, 16
    clrlwi r5, r0, 16
    bl fn_804F50E0
    cmpwi r3, 0x0
    bne lbl_fn_804E8A84_00000AD0
    li r3, 0x0
    b lbl_fn_804E8A84_00000B4C
lbl_fn_804E8A84_00000AD0:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x103e
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804E8A84_00000B0C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E8A84_00000B0C:
    lis r3, 0x1
    li r4, 0x0
    subi r0, r3, 0x1
    stw r4, lbl_8087F5FC
    li r3, 0x6
    addi r30, r1, 0xc
    sth r3, 0x8(r1)
    sth r0, 0xc(r1)
    sth r31, 0xe(r1)
    bl fn_804AE3BC
    mr r6, r30
    li r4, -0x1
    li r5, 0x103e
    li r7, 0x0
    bl fn_8050E098
    li r3, 0x1
lbl_fn_804E8A84_00000B4C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804E8BF8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r6, 0x0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r31, r4
    li r28, 0x0
    li r27, 0x0
    lwz r0, 0x5e8(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000BC8
lbl_fn_804E8BF8_00000B98:
    lwz r7, 0x5e4(r3)
    add r8, r7, r6
    lwz r7, 0xd0(r8)
    srwi r7, r7, 31
    cmplwi r7, 0x1
    bne lbl_fn_804E8BF8_00000BC0
    lwz r7, 0x0(r8)
    cmplw r7, r4
    bne lbl_fn_804E8BF8_00000BC0
    b lbl_fn_804E8BF8_00000BCC
lbl_fn_804E8BF8_00000BC0:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804E8BF8_00000B98
lbl_fn_804E8BF8_00000BC8:
    li r8, 0x0
lbl_fn_804E8BF8_00000BCC:
    cmpwi r8, 0x0
    beq lbl_fn_804E8BF8_00000EE4
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000C14
lbl_fn_804E8BF8_00000BE4:
    lwz r7, 0x5e4(r3)
    add r31, r7, r6
    lwz r7, 0xd0(r31)
    srwi r7, r7, 31
    cmplwi r7, 0x1
    bne lbl_fn_804E8BF8_00000C0C
    lwz r7, 0x0(r31)
    cmplw r7, r4
    bne lbl_fn_804E8BF8_00000C0C
    b lbl_fn_804E8BF8_00000C18
lbl_fn_804E8BF8_00000C0C:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804E8BF8_00000BE4
lbl_fn_804E8BF8_00000C14:
    li r31, 0x0
lbl_fn_804E8BF8_00000C18:
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000C58
lbl_fn_804E8BF8_00000C28:
    lwz r6, 0x5e4(r3)
    add r7, r6, r4
    lwz r6, 0xd0(r7)
    srwi r6, r6, 31
    cmplwi r6, 0x1
    bne lbl_fn_804E8BF8_00000C50
    lwz r6, 0x0(r7)
    cmplw r6, r5
    bne lbl_fn_804E8BF8_00000C50
    b lbl_fn_804E8BF8_00000C5C
lbl_fn_804E8BF8_00000C50:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804E8BF8_00000C28
lbl_fn_804E8BF8_00000C58:
    li r7, 0x0
lbl_fn_804E8BF8_00000C5C:
    cmpwi r7, 0x0
    beq lbl_fn_804E8BF8_00000DD0
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000CA4
lbl_fn_804E8BF8_00000C74:
    lwz r0, 0x5e4(r3)
    add r30, r0, r4
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_00000C9C
    lwz r0, 0x0(r30)
    cmplw r0, r5
    bne lbl_fn_804E8BF8_00000C9C
    b lbl_fn_804E8BF8_00000CA8
lbl_fn_804E8BF8_00000C9C:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804E8BF8_00000C74
lbl_fn_804E8BF8_00000CA4:
    li r30, 0x0
lbl_fn_804E8BF8_00000CA8:
    lwz r0, 0xd0(r30)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804E8BF8_00000DBC
    lwz r4, lbl_8087F628
    lwz r29, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E8BF8_00000CF0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_00000CE4
    li r0, 0x0
    b lbl_fn_804E8BF8_00000D0C
lbl_fn_804E8BF8_00000CE4:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E8BF8_00000D0C
lbl_fn_804E8BF8_00000CF0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_00000D04
    li r3, 0x0
    b lbl_fn_804E8BF8_00000D08
lbl_fn_804E8BF8_00000D04:
    bl fn_806A8E40
lbl_fn_804E8BF8_00000D08:
    clrlwi r0, r3, 24
lbl_fn_804E8BF8_00000D0C:
    lwz r5, 0x5e8(r29)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E8BF8_00000D54
lbl_fn_804E8BF8_00000D24:
    lwz r0, 0x5e4(r29)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_00000D4C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E8BF8_00000D4C
    b lbl_fn_804E8BF8_00000D58
lbl_fn_804E8BF8_00000D4C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E8BF8_00000D24
lbl_fn_804E8BF8_00000D54:
    li r5, 0x0
lbl_fn_804E8BF8_00000D58:
    cmpwi r5, 0x0
    beq lbl_fn_804E8BF8_00000D94
    cmpwi r30, 0x0
    beq lbl_fn_804E8BF8_00000D94
    beq lbl_fn_804E8BF8_00000D88
    lbz r0, 0xcc(r30)
    cmplwi r0, 0xff
    beq lbl_fn_804E8BF8_00000D88
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E8BF8_00000D88
    li r0, 0x1
    b lbl_fn_804E8BF8_00000D8C
lbl_fn_804E8BF8_00000D88:
    li r0, 0x0
lbl_fn_804E8BF8_00000D8C:
    cmpwi r0, 0x0
    bne lbl_fn_804E8BF8_00000D9C
lbl_fn_804E8BF8_00000D94:
    li r0, 0x0
    b lbl_fn_804E8BF8_00000DB4
lbl_fn_804E8BF8_00000D9C:
    lbz r0, 0xcc(r30)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804E8BF8_00000DB4:
    cmpwi r0, 0x0
    beq lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00000DBC:
    lbz r0, 0xcc(r31)
    li r28, 0x16
    lbz r27, 0xcc(r30)
    rlwimi r27, r0, 8, 16, 23
    b lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00000DD0:
    lwz r8, 0x5f4(r3)
    li r7, 0x0
    li r4, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_804E8BF8_00000E08
lbl_fn_804E8BF8_00000DE8:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r4
    cmplw r0, r5
    bne lbl_fn_804E8BF8_00000DFC
    b lbl_fn_804E8BF8_00000E0C
lbl_fn_804E8BF8_00000DFC:
    addi r7, r7, 0x1
    addi r4, r4, 0xb4
    bdnz lbl_fn_804E8BF8_00000DE8
lbl_fn_804E8BF8_00000E08:
    li r7, -0x1
lbl_fn_804E8BF8_00000E0C:
    cmpwi r7, 0x0
    blt lbl_fn_804E8BF8_00000E24
    mulli r0, r7, 0xb4
    lwz r4, 0x5f0(r3)
    add r0, r4, r0
    b lbl_fn_804E8BF8_00000E28
lbl_fn_804E8BF8_00000E24:
    li r0, 0x0
lbl_fn_804E8BF8_00000E28:
    cmpwi r0, 0x0
    beq lbl_fn_804E8BF8_00001188
    li r7, 0x0
    li r4, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_804E8BF8_00000E64
lbl_fn_804E8BF8_00000E44:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r4
    cmplw r0, r5
    bne lbl_fn_804E8BF8_00000E58
    b lbl_fn_804E8BF8_00000E68
lbl_fn_804E8BF8_00000E58:
    addi r7, r7, 0x1
    addi r4, r4, 0xb4
    bdnz lbl_fn_804E8BF8_00000E44
lbl_fn_804E8BF8_00000E64:
    li r7, -0x1
lbl_fn_804E8BF8_00000E68:
    cmpwi r7, 0x0
    blt lbl_fn_804E8BF8_00000E80
    mulli r0, r7, 0xb4
    lwz r4, 0x5f0(r3)
    add r4, r4, r0
    b lbl_fn_804E8BF8_00000E84
lbl_fn_804E8BF8_00000E80:
    li r4, 0x0
lbl_fn_804E8BF8_00000E84:
    lwz r0, 0xb0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_00001188
    li r7, 0x0
    li r4, 0x0
    mtctr r8
    cmpwi r8, 0x0
    ble lbl_fn_804E8BF8_00000EC8
lbl_fn_804E8BF8_00000EA8:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r4
    cmplw r0, r5
    bne lbl_fn_804E8BF8_00000EBC
    b lbl_fn_804E8BF8_00000ECC
lbl_fn_804E8BF8_00000EBC:
    addi r7, r7, 0x1
    addi r4, r4, 0xb4
    bdnz lbl_fn_804E8BF8_00000EA8
lbl_fn_804E8BF8_00000EC8:
    li r7, -0x1
lbl_fn_804E8BF8_00000ECC:
    lbz r0, 0xcc(r31)
    li r28, 0x17
    slwi r0, r0, 8
    or r0, r0, r7
    clrlwi r27, r0, 16
    b lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00000EE4:
    lwz r9, 0x5f4(r3)
    li r8, 0x0
    li r6, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804E8BF8_00000F1C
lbl_fn_804E8BF8_00000EFC:
    lwz r7, 0x5f0(r3)
    lwzx r7, r7, r6
    cmplw r7, r4
    bne lbl_fn_804E8BF8_00000F10
    b lbl_fn_804E8BF8_00000F20
lbl_fn_804E8BF8_00000F10:
    addi r8, r8, 0x1
    addi r6, r6, 0xb4
    bdnz lbl_fn_804E8BF8_00000EFC
lbl_fn_804E8BF8_00000F1C:
    li r8, -0x1
lbl_fn_804E8BF8_00000F20:
    cmpwi r8, 0x0
    blt lbl_fn_804E8BF8_00000F38
    mulli r6, r8, 0xb4
    lwz r7, 0x5f0(r3)
    add r6, r7, r6
    b lbl_fn_804E8BF8_00000F3C
lbl_fn_804E8BF8_00000F38:
    li r6, 0x0
lbl_fn_804E8BF8_00000F3C:
    cmpwi r6, 0x0
    beq lbl_fn_804E8BF8_00001188
    li r6, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804E8BF8_00000F6C
lbl_fn_804E8BF8_00000F54:
    lwz r7, 0x5f0(r3)
    lwzx r7, r7, r6
    cmplw r7, r4
    beq lbl_fn_804E8BF8_00000F6C
    addi r6, r6, 0xb4
    bdnz lbl_fn_804E8BF8_00000F54
lbl_fn_804E8BF8_00000F6C:
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000FAC
lbl_fn_804E8BF8_00000F7C:
    lwz r6, 0x5e4(r3)
    add r7, r6, r4
    lwz r6, 0xd0(r7)
    srwi r6, r6, 31
    cmplwi r6, 0x1
    bne lbl_fn_804E8BF8_00000FA4
    lwz r6, 0x0(r7)
    cmplw r6, r5
    bne lbl_fn_804E8BF8_00000FA4
    b lbl_fn_804E8BF8_00000FB0
lbl_fn_804E8BF8_00000FA4:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804E8BF8_00000F7C
lbl_fn_804E8BF8_00000FAC:
    li r7, 0x0
lbl_fn_804E8BF8_00000FB0:
    cmpwi r7, 0x0
    beq lbl_fn_804E8BF8_00001160
    li r4, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00000FF8
lbl_fn_804E8BF8_00000FC8:
    lwz r0, 0x5e4(r3)
    add r29, r0, r4
    lwz r0, 0xd0(r29)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_00000FF0
    lwz r0, 0x0(r29)
    cmplw r0, r5
    bne lbl_fn_804E8BF8_00000FF0
    b lbl_fn_804E8BF8_00000FFC
lbl_fn_804E8BF8_00000FF0:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804E8BF8_00000FC8
lbl_fn_804E8BF8_00000FF8:
    li r29, 0x0
lbl_fn_804E8BF8_00000FFC:
    lwz r0, 0xd0(r29)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804E8BF8_00001110
    lwz r4, lbl_8087F628
    lwz r30, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E8BF8_00001044
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_00001038
    li r0, 0x0
    b lbl_fn_804E8BF8_00001060
lbl_fn_804E8BF8_00001038:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E8BF8_00001060
lbl_fn_804E8BF8_00001044:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_00001058
    li r3, 0x0
    b lbl_fn_804E8BF8_0000105C
lbl_fn_804E8BF8_00001058:
    bl fn_806A8E40
lbl_fn_804E8BF8_0000105C:
    clrlwi r0, r3, 24
lbl_fn_804E8BF8_00001060:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804E8BF8_000010A8
lbl_fn_804E8BF8_00001078:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_000010A0
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804E8BF8_000010A0
    b lbl_fn_804E8BF8_000010AC
lbl_fn_804E8BF8_000010A0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E8BF8_00001078
lbl_fn_804E8BF8_000010A8:
    li r5, 0x0
lbl_fn_804E8BF8_000010AC:
    cmpwi r5, 0x0
    beq lbl_fn_804E8BF8_000010E8
    cmpwi r29, 0x0
    beq lbl_fn_804E8BF8_000010E8
    beq lbl_fn_804E8BF8_000010DC
    lbz r0, 0xcc(r29)
    cmplwi r0, 0xff
    beq lbl_fn_804E8BF8_000010DC
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E8BF8_000010DC
    li r0, 0x1
    b lbl_fn_804E8BF8_000010E0
lbl_fn_804E8BF8_000010DC:
    li r0, 0x0
lbl_fn_804E8BF8_000010E0:
    cmpwi r0, 0x0
    bne lbl_fn_804E8BF8_000010F0
lbl_fn_804E8BF8_000010E8:
    li r0, 0x0
    b lbl_fn_804E8BF8_00001108
lbl_fn_804E8BF8_000010F0:
    lbz r0, 0xcc(r29)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804E8BF8_00001108:
    cmpwi r0, 0x0
    beq lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00001110:
    lwz r0, 0x5f4(r26)
    li r5, 0x0
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804E8BF8_00001148
lbl_fn_804E8BF8_00001128:
    lwz r4, 0x5f0(r26)
    lwzx r0, r4, r3
    cmplw r0, r31
    bne lbl_fn_804E8BF8_0000113C
    b lbl_fn_804E8BF8_0000114C
lbl_fn_804E8BF8_0000113C:
    addi r5, r5, 0x1
    addi r3, r3, 0xb4
    bdnz lbl_fn_804E8BF8_00001128
lbl_fn_804E8BF8_00001148:
    li r5, -0x1
lbl_fn_804E8BF8_0000114C:
    lbz r0, 0xcc(r29)
    rlwimi r0, r5, 8, 0, 23
    li r28, 0x18
    clrlwi r27, r0, 16
    b lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00001160:
    li r4, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804E8BF8_00001188
lbl_fn_804E8BF8_00001170:
    lwz r6, 0x5f0(r3)
    lwzx r0, r6, r4
    cmplw r0, r5
    beq lbl_fn_804E8BF8_00001188
    addi r4, r4, 0xb4
    bdnz lbl_fn_804E8BF8_00001170
lbl_fn_804E8BF8_00001188:
    cmpwi r28, 0x0
    beq lbl_fn_804E8BF8_000012B8
    lwz r4, lbl_8087F628
    lwz r29, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E8BF8_000011C8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_000011BC
    li r0, 0x0
    b lbl_fn_804E8BF8_000011E4
lbl_fn_804E8BF8_000011BC:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804E8BF8_000011E4
lbl_fn_804E8BF8_000011C8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E8BF8_000011DC
    li r3, 0x0
    b lbl_fn_804E8BF8_000011E0
lbl_fn_804E8BF8_000011DC:
    bl fn_806A8E40
lbl_fn_804E8BF8_000011E0:
    clrlwi r0, r3, 24
lbl_fn_804E8BF8_000011E4:
    lwz r4, 0x5e8(r29)
    clrlwi r5, r0, 24
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_804E8BF8_0000122C
lbl_fn_804E8BF8_000011FC:
    lwz r0, 0x5e4(r29)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E8BF8_00001224
    lbz r0, 0xcc(r4)
    cmplw r5, r0
    bne lbl_fn_804E8BF8_00001224
    b lbl_fn_804E8BF8_00001230
lbl_fn_804E8BF8_00001224:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804E8BF8_000011FC
lbl_fn_804E8BF8_0000122C:
    li r4, 0x0
lbl_fn_804E8BF8_00001230:
    mr r3, r26
    mr r5, r28
    clrlwi r6, r27, 16
    bl fn_804F50E0
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x103e
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804E8BF8_0000127C
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804E8BF8_0000127C:
    li r3, 0x0
    li r0, 0x6
    stw r3, lbl_8087F5FC
    addi r26, r1, 0xc
    sth r0, 0x8(r1)
    sth r28, 0xc(r1)
    sth r27, 0xe(r1)
    bl fn_804AE3BC
    mr r6, r26
    li r4, -0x1
    li r5, 0x103e
    li r7, 0x0
    bl fn_8050E098
    li r3, 0x1
    b lbl_fn_804E8BF8_000012BC
lbl_fn_804E8BF8_000012B8:
    li r3, 0x0
lbl_fn_804E8BF8_000012BC:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804E9364(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    addi r11, r1, 0x130
    stfd f31, 0x140(r1)
    psq_st f31, 0x148(r1), 0, 0
    stfd f30, 0x130(r1)
    psq_st f30, 0x138(r1), 0, 0
    bl _savegpr_14
    li r0, 0x0
    lis r16, lbl_807C6BB8@ha
    stb r0, 0xd0(r1)
    mr r18, r0
    lfs f31, lbl_80887570
    mr r17, r0
    lfs f30, lbl_80887588
    mr r22, r0
    stw r3, 0x8(r1)
    mr r23, r0
    mr r24, r0
    mr r25, r0
    mr r26, r0
    mr r27, r0
    mr r28, r0
    stw r0, 0xd4(r1)
    li r0, 0x0
    addi r16, r16, lbl_807C6BB8@l
    stw r0, 0xd8(r1)
    li r30, 0x0
    li r19, 0x1
    lis r20, fn_8003EFB0@ha
    lis r21, lbl_807C8F48@ha
    li r14, 0xff
    b lbl_fn_804E9364_000017B0
lbl_fn_804E9364_00001358:
    lwz r3, 0x8(r1)
    lwz r0, 0xd8(r1)
    lwz r3, 0x5e4(r3)
    add. r31, r3, r0
    beq lbl_fn_804E9364_00001388
    lbz r0, 0xcc(r31)
    cmplwi r0, 0xff
    beq lbl_fn_804E9364_00001388
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804E9364_00001388
    li r0, 0x1
    b lbl_fn_804E9364_0000138C
lbl_fn_804E9364_00001388:
    li r0, 0x0
lbl_fn_804E9364_0000138C:
    cmpwi r0, 0x1
    bne lbl_fn_804E9364_000013A0
    lbz r0, 0xcc(r31)
    clrlwi r0, r0, 28
    b lbl_fn_804E9364_000013A4
lbl_fn_804E9364_000013A0:
    lbz r0, 0xcc(r31)
lbl_fn_804E9364_000013A4:
    lwz r3, lbl_8087F628
    clrlwi r4, r0, 24
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804E9364_000013D0
    lwz r0, 0xc(r3)
    srwi. r0, r0, 31
    bne lbl_fn_804E9364_00001794
lbl_fn_804E9364_000013D0:
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804E9364_00001444
    stb r14, 0xcc(r31)
    addi r3, r31, 0xdc
    li r4, 0x0
    bl fn_8050128C
    lwz r0, 0xd4(r1)
    li r3, 0x0
    stw r0, 0xb0(r31)
    li r0, 0x2
    rlwimi r3, r0, 10, 20, 21
    li r0, 0x1
    stb r0, 0xd0(r1)
    lwz r0, 0xd4(r1)
    stw r0, 0xd48(r31)
    li r0, -0x1
    sth r0, 0xd50(r31)
    lwz r0, 0xd4(r1)
    stw r0, 0xd4c(r31)
    stb r0, 0xd53(r31)
    li r0, -0x1
    stw r0, 0xd54(r31)
    lwz r0, 0xd4(r1)
    stw r0, 0xd58(r31)
    stw r0, 0xd8(r31)
    stw r0, 0xd4(r31)
    stw r3, 0xd0(r31)
lbl_fn_804E9364_00001444:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804E9364_000017A0
    lwz r4, 0x38(r3)
    rlwinm r0, r4, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_804E9364_000017A0
    rlwinm r0, r4, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_804E9364_00001470
    bl fn_801765D8
lbl_fn_804E9364_00001470:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_000014A4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9364_00001498
    li r15, 0x0
    b lbl_fn_804E9364_000014C0
lbl_fn_804E9364_00001498:
    bl fn_806B0E30
    clrlwi r15, r3, 24
    b lbl_fn_804E9364_000014C0
lbl_fn_804E9364_000014A4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9364_000014B8
    li r3, 0x0
    b lbl_fn_804E9364_000014BC
lbl_fn_804E9364_000014B8:
    bl fn_806A8E40
lbl_fn_804E9364_000014BC:
    clrlwi r15, r3, 24
lbl_fn_804E9364_000014C0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_000014F4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9364_000014E8
    li r0, 0x0
    b lbl_fn_804E9364_000014F8
lbl_fn_804E9364_000014E8:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804E9364_000014F8
lbl_fn_804E9364_000014F4:
    li r0, 0x0
lbl_fn_804E9364_000014F8:
    clrlwi r3, r15, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_804E9364_000017A0
    lwz r3, lbl_8087F4A0
    lwz r29, 0x48(r3)
    b lbl_fn_804E9364_00001788
lbl_fn_804E9364_0000151C:
    lwz r0, 0x50(r29)
    cmpwi r0, 0x7
    bne lbl_fn_804E9364_00001644
    lbz r0, 0x520(r29)
    cmpw r30, r0
    bne lbl_fn_804E9364_00001784
    li r0, 0x3
    stw r17, 0xb4(r1)
    addi r3, r1, 0xc4
    stw r17, 0xb8(r1)
    stw r17, 0xbc(r1)
    stw r17, 0xc0(r1)
    stfs f31, 0xc4(r1)
    stfs f31, 0xc8(r1)
    stfs f31, 0xcc(r1)
    stw r0, 0xb0(r1)
    lwz r0, 0x0(r31)
    stw r0, 0xc0(r1)
    stw r17, 0xb8(r1)
    lfs f2, 0x74(r29)
    psq_l f1, 0x6c(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f0, 0xc8(r1)
    stfs f2, 0xcc(r1)
    fadds f0, f0, f30
    stw r19, 0xbc(r1)
    stfs f0, 0xc8(r1)
    stb r14, 0x520(r29)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_000015BC
    stw r18, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r18, 0x4(r16)
    stw r18, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_000015BC:
    lbz r0, lbl_8087EE74
    lwz r15, 0xc(r16)
    extsb. r0, r0
    bne lbl_fn_804E9364_000015F0
    stw r22, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r22, 0x4(r16)
    stw r22, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_000015F0:
    stw r19, 0xc(r16)
    mr r3, r29
    addi r4, r1, 0xb0
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_0000163C
    stw r23, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r23, 0x4(r16)
    stw r23, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_0000163C:
    stw r15, 0xc(r16)
    b lbl_fn_804E9364_00001784
lbl_fn_804E9364_00001644:
    cmpwi r0, 0x8
    bne lbl_fn_804E9364_00001784
    lwz r3, 0xf4(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804E9364_00001784
    lbz r0, 0x29c(r3)
    cmpw r30, r0
    bne lbl_fn_804E9364_00001784
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_00001694
    stw r24, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r24, 0x4(r16)
    stw r24, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_00001694:
    lbz r0, lbl_8087EE74
    lwz r15, 0xc(r16)
    extsb. r0, r0
    bne lbl_fn_804E9364_000016C8
    stw r25, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r25, 0x4(r16)
    stw r25, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_000016C8:
    li r0, 0x6
    stw r19, 0xc(r16)
    addi r4, r1, 0x90
    stw r0, 0x90(r1)
    stw r26, 0x94(r1)
    stw r26, 0x98(r1)
    stw r26, 0x9c(r1)
    stw r26, 0xa0(r1)
    stfs f31, 0xa4(r1)
    stfs f31, 0xa8(r1)
    stfs f31, 0xac(r1)
    lwz r3, 0xf4(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r5, 0xf4(r29)
    mr r3, r29
    addi r4, r1, 0x70
    stb r14, 0x29c(r5)
    stw r19, 0x70(r1)
    stw r27, 0x74(r1)
    stw r27, 0x78(r1)
    stw r27, 0x7c(r1)
    stw r27, 0x80(r1)
    stfs f31, 0x84(r1)
    stfs f31, 0x88(r1)
    stfs f31, 0x8c(r1)
    lwz r12, 0x0(r29)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    mr r3, r29
    bl fn_803FC65C
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_00001780
    stw r28, 0x0(r16)
    mr r3, r16
    addi r4, r20, fn_8003EFB0@l
    addi r5, r21, lbl_807C8F48@l
    stw r28, 0x4(r16)
    stw r28, 0x8(r16)
    stw r19, 0xc(r16)
    bl __register_global_object
    stb r19, lbl_8087EE74
lbl_fn_804E9364_00001780:
    stw r15, 0xc(r16)
lbl_fn_804E9364_00001784:
    lwz r29, 0x5c(r29)
lbl_fn_804E9364_00001788:
    cmpwi r29, 0x0
    bne lbl_fn_804E9364_0000151C
    b lbl_fn_804E9364_000017A0
lbl_fn_804E9364_00001794:
    lwz r0, 0xd0(r31)
    oris r0, r0, 0x8000
    stw r0, 0xd0(r31)
lbl_fn_804E9364_000017A0:
    lwz r3, 0xd8(r1)
    addi r30, r30, 0x1
    addi r3, r3, 0xd5c
    stw r3, 0xd8(r1)
lbl_fn_804E9364_000017B0:
    lwz r3, 0x8(r1)
    lwz r0, 0x5e8(r3)
    cmpw r30, r0
    blt lbl_fn_804E9364_00001358
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804E9364_00001AF8
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_00001AF8
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_0000180C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804E9364_00001800
    li r20, 0x0
    b lbl_fn_804E9364_00001810
lbl_fn_804E9364_00001800:
    bl fn_806B1250
    clrlwi r20, r3, 24
    b lbl_fn_804E9364_00001810
lbl_fn_804E9364_0000180C:
    li r20, 0x0
lbl_fn_804E9364_00001810:
    lwz r3, 0x8(r1)
    clrlwi r4, r20, 24
    addis r3, r3, 0x1
    lbz r0, -0x6686(r3)
    cmplw r4, r0
    beq lbl_fn_804E9364_00001AEC
    lwz r3, lbl_8087F4A0
    lis r22, lbl_807C6BB8@ha
    lfs f30, lbl_80887570
    addi r22, r22, lbl_807C6BB8@l
    lwz r23, 0x48(r3)
    addi r21, r1, 0x64
    lfs f31, lbl_80887588
    li r17, 0x0
    li r16, 0x1
    lis r15, fn_8003EFB0@ha
    lis r14, lbl_807C8F48@ha
    li r19, 0x3
    li r18, 0xff
    li r24, 0x6
    b lbl_fn_804E9364_00001AE4
lbl_fn_804E9364_00001864:
    lwz r0, 0x50(r23)
    cmpwi r0, 0x7
    bne lbl_fn_804E9364_0000198C
    lbz r0, 0x520(r23)
    cmplwi r0, 0xff
    beq lbl_fn_804E9364_00001AE0
    lwz r0, 0x54(r23)
    cmpwi r0, 0x1
    beq lbl_fn_804E9364_00001890
    cmpwi r0, 0x4
    bne lbl_fn_804E9364_00001AE0
lbl_fn_804E9364_00001890:
    stw r17, 0x54(r1)
    stw r17, 0x5c(r1)
    stfs f30, 0x64(r1)
    stfs f30, 0x68(r1)
    stfs f30, 0x6c(r1)
    stw r19, 0x50(r1)
    stw r17, 0x60(r1)
    stw r17, 0x58(r1)
    lfs f2, 0x74(r23)
    psq_l f1, 0x6c(r23), 0, 0
    psq_st f1, 0x0(r21), 0, 0
    lfs f0, 0x68(r1)
    stfs f2, 0x6c(r1)
    fadds f0, f0, f31
    stw r16, 0x5c(r1)
    stfs f0, 0x68(r1)
    stb r18, 0x520(r23)
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_00001904
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_00001904:
    lbz r0, lbl_8087EE74
    lwz r25, 0xc(r22)
    extsb. r0, r0
    bne lbl_fn_804E9364_00001938
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_00001938:
    stw r16, 0xc(r22)
    mr r3, r23
    addi r4, r1, 0x50
    lwz r12, 0x0(r23)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_00001984
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_00001984:
    stw r25, 0xc(r22)
    b lbl_fn_804E9364_00001AE0
lbl_fn_804E9364_0000198C:
    cmpwi r0, 0x8
    bne lbl_fn_804E9364_00001AE0
    mr r3, r23
    bl fn_803FC65C
    lwz r3, 0xf4(r23)
    cmpwi r3, 0x0
    beq lbl_fn_804E9364_00001AE0
    lbz r0, 0x29c(r3)
    cmplwi r0, 0xff
    beq lbl_fn_804E9364_00001AE0
    lwz r0, 0x54(r23)
    cmpwi r0, 0x2
    bne lbl_fn_804E9364_00001AE0
    lwz r0, 0x54(r3)
    cmpwi r0, 0x5
    blt lbl_fn_804E9364_00001AE0
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_000019FC
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_000019FC:
    lbz r0, lbl_8087EE74
    lwz r25, 0xc(r22)
    extsb. r0, r0
    bne lbl_fn_804E9364_00001A30
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_00001A30:
    stw r16, 0xc(r22)
    addi r4, r1, 0x30
    stw r24, 0x30(r1)
    stw r17, 0x34(r1)
    stw r17, 0x38(r1)
    stw r17, 0x3c(r1)
    stw r17, 0x40(r1)
    stfs f30, 0x44(r1)
    stfs f30, 0x48(r1)
    stfs f30, 0x4c(r1)
    lwz r3, 0xf4(r23)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r5, 0xf4(r23)
    mr r3, r23
    addi r4, r1, 0x10
    stb r18, 0x29c(r5)
    stw r16, 0x10(r1)
    stw r17, 0x14(r1)
    stw r17, 0x18(r1)
    stw r17, 0x1c(r1)
    stw r17, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f30, 0x28(r1)
    stfs f30, 0x2c(r1)
    lwz r12, 0x0(r23)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_804E9364_00001ADC
    stw r17, 0x0(r22)
    mr r3, r22
    addi r4, r15, fn_8003EFB0@l
    addi r5, r14, lbl_807C8F48@l
    stw r17, 0x4(r22)
    stw r17, 0x8(r22)
    stw r16, 0xc(r22)
    bl __register_global_object
    stb r16, lbl_8087EE74
lbl_fn_804E9364_00001ADC:
    stw r25, 0xc(r22)
lbl_fn_804E9364_00001AE0:
    lwz r23, 0x5c(r23)
lbl_fn_804E9364_00001AE4:
    cmpwi r23, 0x0
    bne lbl_fn_804E9364_00001864
lbl_fn_804E9364_00001AEC:
    lwz r3, 0x8(r1)
    addis r3, r3, 0x1
    stb r20, -0x6686(r3)
lbl_fn_804E9364_00001AF8:
    lbz r0, 0xd0(r1)
    cmpwi r0, 0x0
    beq lbl_fn_804E9364_00001BAC
    lwz r3, 0x8(r1)
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0xc
    bne lbl_fn_804E9364_00001B8C
    lwz r0, 0x540(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804E9364_00001B8C
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_00001B8C
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804E9364_00001B8C
    lwz r0, 0xd88(r3)
    cmpwi r0, 0x7
    bge lbl_fn_804E9364_00001B8C
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_804E9364_00001B7C
lbl_fn_804E9364_00001B54:
    lwz r3, 0x8(r1)
    lwz r0, 0x5e4(r3)
    add r5, r0, r4
    lwz r3, 0xd0(r5)
    srwi. r0, r3, 31
    beq lbl_fn_804E9364_00001B74
    rlwinm r0, r3, 0, 10, 5
    stw r0, 0xd0(r5)
lbl_fn_804E9364_00001B74:
    addi r6, r6, 0x1
    addi r4, r4, 0xd5c
lbl_fn_804E9364_00001B7C:
    lwz r3, 0x8(r1)
    lwz r0, 0x5e8(r3)
    cmpw r6, r0
    blt lbl_fn_804E9364_00001B54
lbl_fn_804E9364_00001B8C:
    lwz r3, 0x8(r1)
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804E9364_00001BAC
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804E9364_00001BAC
    bl fn_804E9C68
lbl_fn_804E9364_00001BAC:
    addi r11, r1, 0x130
    psq_l f31, 0x148(r1), 0, 0
    lfd f31, 0x140(r1)
    psq_l f30, 0x138(r1), 0, 0
    lfd f30, 0x130(r1)
    bl _restgpr_14
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
