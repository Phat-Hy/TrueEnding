#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void __register_global_object(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_8016F3D0(void);
extern void fn_80178668(void);
extern void fn_80178864(void);
extern void fn_80219E6C(void);
extern void fn_804AE3BC(void);
extern void fn_804D818C(void);
extern void fn_804E82C8(void);
extern void fn_804EAA88(void);
extern void fn_804F50E0(void);
extern void fn_805011D0(void);
extern void fn_8050128C(void);
extern void fn_8050A7F8(void);
extern void fn_8050A8A8(void);
extern void fn_8050A994(void);
extern void fn_8050E098(void);
extern void fn_8054D798(void);
extern void fn_806A8E40(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 lbl_807C8AE8[];

/* Small data declarations */
extern u32 lbl_8087E1AC;
extern u32 lbl_8087E1B0;
extern u32 lbl_8087E1C4;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5F8;
extern u32 lbl_8087F5FC;
extern u32 lbl_8087F600;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A8;

/* Function declarations */
void fn_804F2ED0(void);
void fn_804F2F94(void);
void fn_804F3024(void);
void fn_804F30B4(void);
void fn_804F3174(void);
void fn_804F325C(void);
void fn_804F34B8(void);
void fn_804F36F8(void);
void fn_804F36FC(void);
void fn_804F3884(void);
void fn_804F39D8(void);
void fn_804F3AF4(void);
void fn_804F3BB0(void);
void fn_804F3D84(void);
void fn_804F3E54(void);
void fn_804F3EF0(void);
void fn_804F472C(void);
void fn_804F4800(void);

asm void fn_804F2ED0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F2ED0_000000B0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F2ED0_000000B0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2ED0_00000060
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2ED0_00000060:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2ED0_00000070
    b lbl_fn_804F2ED0_000000B0
lbl_fn_804F2ED0_00000070:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2ED0_000000A4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2ED0_000000A4:
    lwz r4, lbl_8087F600
    mr r3, r31
    bl fn_8050A994
lbl_fn_804F2ED0_000000B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F2F94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F2F94_00000140
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F2F94_00000140
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2F94_00000124
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F2F94_00000124:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F2F94_00000134
    b lbl_fn_804F2F94_00000140
lbl_fn_804F2F94_00000134:
    mr r3, r31
    li r4, 0x0
    bl fn_8050A7F8
lbl_fn_804F2F94_00000140:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3024(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F3024_000001D0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F3024_000001D0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3024_000001B4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3024_000001B4:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3024_000001C4
    b lbl_fn_804F3024_000001D0
lbl_fn_804F3024_000001C4:
    mr r3, r31
    li r4, 0x0
    bl fn_8050A8A8
lbl_fn_804F3024_000001D0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F30B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F30B4_00000294
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F30B4_00000294
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F30B4_0000023C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F30B4_0000023C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F30B4_0000024C
    b lbl_fn_804F30B4_00000294
lbl_fn_804F30B4_0000024C:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F30B4_00000280
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F30B4_00000280:
    lwz r4, lbl_8087F600
    lwz r3, lbl_8087F610
    lbz r0, 0x0(r4)
    extsb r0, r0
    stw r0, 0x5a0(r3)
lbl_fn_804F30B4_00000294:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3174(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F3174_00000378
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F3174_00000378
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3174_00000300
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3174_00000300:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3174_00000310
    b lbl_fn_804F3174_00000378
lbl_fn_804F3174_00000310:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3174_00000344
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3174_00000344:
    lwz r3, lbl_8087F610
    li r5, 0x8
    lwz r31, lbl_8087F600
    addis r3, r3, 0x1
    mr r4, r31
    subi r3, r3, 0x667c
    bl memcpy
    lwz r3, lbl_8087F610
    addi r4, r31, 0x8
    li r5, 0x8
    addis r3, r3, 0x1
    subi r3, r3, 0x6674
    bl memcpy
lbl_fn_804F3174_00000378:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F325C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_000005D8
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F325C_000005D8
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F325C_000003E4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F325C_000003E4:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F325C_000003F4
    b lbl_fn_804F325C_000005D8
lbl_fn_804F325C_000003F4:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F325C_00000428
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F325C_00000428:
    lwz r7, lbl_8087F600
    li r0, 0x4
    lwz r6, lbl_8087F610
    li r4, 0x0
    lbz r3, 0x0(r7)
    mr r5, r6
    mtctr r0
lbl_fn_804F325C_00000444:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_0000046C
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_0000046C
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_0000046C:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_00000498
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_00000498
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_00000498:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_000004C4
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_000004C4
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_000004C4:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_000004F0
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_000004F0
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_000004F0:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_0000051C
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_0000051C
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_0000051C:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_00000548
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_00000548
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_00000548:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_00000574
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_00000574
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_00000574:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F325C_000005A0
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804F325C_000005A0
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r4, r3, 0x48
    b lbl_fn_804F325C_000005B0
lbl_fn_804F325C_000005A0:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804F325C_00000444
    li r4, 0x0
lbl_fn_804F325C_000005B0:
    cmpwi r4, 0x0
    beq lbl_fn_804F325C_000005D8
    li r0, 0x1
    stw r0, 0x4(r4)
    li r0, 0x12c
    addi r3, r4, 0xc
    stw r0, 0x8(r4)
    addi r4, r7, 0x1
    li r5, 0x8
    bl memcpy
lbl_fn_804F325C_000005D8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F34B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F34B8_00000808
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F34B8_00000808
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F34B8_00000658
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F34B8_00000658:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F34B8_00000668
    b lbl_fn_804F34B8_00000808
lbl_fn_804F34B8_00000668:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F34B8_0000069C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F34B8_00000690
    li r29, 0x0
    b lbl_fn_804F34B8_000006B8
lbl_fn_804F34B8_00000690:
    bl fn_806B0E30
    clrlwi r29, r3, 24
    b lbl_fn_804F34B8_000006B8
lbl_fn_804F34B8_0000069C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F34B8_000006B0
    li r3, 0x0
    b lbl_fn_804F34B8_000006B4
lbl_fn_804F34B8_000006B0:
    bl fn_806A8E40
lbl_fn_804F34B8_000006B4:
    clrlwi r29, r3, 24
lbl_fn_804F34B8_000006B8:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F34B8_000006EC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F34B8_000006E0
    li r0, 0x0
    b lbl_fn_804F34B8_000006F0
lbl_fn_804F34B8_000006E0:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804F34B8_000006F0
lbl_fn_804F34B8_000006EC:
    li r0, 0x0
lbl_fn_804F34B8_000006F0:
    clrlwi r3, r29, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804F34B8_00000808
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F34B8_00000734
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F34B8_00000734:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1035
    sth r4, 0x8(r1)
    extsb. r0, r0
    lwz r29, lbl_8087F600
    sth r3, 0xa(r1)
    bne lbl_fn_804F34B8_00000774
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804F34B8_00000774:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    cmpwi r30, 0x0
    addi r28, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0x0(r29)
    stb r0, 0xc(r1)
    lbz r4, 0x1(r29)
    bne lbl_fn_804F34B8_000007A4
    li r4, 0x0
    b lbl_fn_804F34B8_000007C4
lbl_fn_804F34B8_000007A4:
    lwz r3, 0xd0(r30)
    extrwi r0, r3, 4, 6
    cmplw r0, r4
    bne lbl_fn_804F34B8_000007BC
    li r4, 0x0
    b lbl_fn_804F34B8_000007C4
lbl_fn_804F34B8_000007BC:
    rlwimi r3, r4, 22, 6, 9
    stw r3, 0xd0(r30)
lbl_fn_804F34B8_000007C4:
    stw r4, 0xd(r1)
    bl fn_804AE3BC
    mr r4, r31
    mr r6, r28
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6650(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r31, -0x664f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stw r0, -0x664c(r3)
lbl_fn_804F34B8_00000808:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804F36F8(void)
{
    nofralloc
    blr
}

asm void fn_804F36FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r4, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x6664(r3)
    cmplwi r0, 0x1
    beq lbl_fn_804F36FC_0000099C
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F36FC_0000099C
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F36FC_0000099C
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F36FC_000008A4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F36FC_000008A4:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F36FC_000008B4
    b lbl_fn_804F36FC_0000099C
lbl_fn_804F36FC_000008B4:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F36FC_000008E8
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F36FC_000008DC
    li r30, 0x0
    b lbl_fn_804F36FC_00000904
lbl_fn_804F36FC_000008DC:
    bl fn_806B0E30
    clrlwi r30, r3, 24
    b lbl_fn_804F36FC_00000904
lbl_fn_804F36FC_000008E8:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F36FC_000008FC
    li r3, 0x0
    b lbl_fn_804F36FC_00000900
lbl_fn_804F36FC_000008FC:
    bl fn_806A8E40
lbl_fn_804F36FC_00000900:
    clrlwi r30, r3, 24
lbl_fn_804F36FC_00000904:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F36FC_00000938
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F36FC_0000092C
    li r0, 0x0
    b lbl_fn_804F36FC_0000093C
lbl_fn_804F36FC_0000092C:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804F36FC_0000093C
lbl_fn_804F36FC_00000938:
    li r0, 0x0
lbl_fn_804F36FC_0000093C:
    clrlwi r3, r30, 24
    clrlwi r0, r0, 24
    cmplw r3, r0
    bne lbl_fn_804F36FC_0000099C
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F36FC_00000980
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F36FC_00000980:
    lwz r3, lbl_8087F600
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0xb0(r31)
    lbz r0, 0x0(r3)
    extsb r0, r0
    stw r0, 0xd8(r31)
lbl_fn_804F36FC_0000099C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3884(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F3884_00000AF0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3884_00000A0C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3884_00000A0C:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r6, lbl_8087F600
    lwz r0, 0x5e8(r5)
    lbz r4, 0x0(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F3884_00000A5C
lbl_fn_804F3884_00000A2C:
    lwz r0, 0x5e4(r5)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3884_00000A54
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804F3884_00000A54
    b lbl_fn_804F3884_00000A60
lbl_fn_804F3884_00000A54:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3884_00000A2C
lbl_fn_804F3884_00000A5C:
    li r31, 0x0
lbl_fn_804F3884_00000A60:
    cmpwi r31, 0x0
    lbz r3, 0x1(r6)
    beq lbl_fn_804F3884_00000AF0
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F3884_00000AF0
    cmpwi r3, 0x0
    beq lbl_fn_804F3884_00000AC0
    lwz r0, 0xd4c(r31)
    ori r0, r0, 0xc00
    stw r0, 0xd4c(r31)
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804F3884_00000AF0
    li r3, 0x4fc1
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x0(r31)
    mr r7, r30
    li r5, 0x0
    li r6, 0x270f
    li r8, 0x0
    bl fn_80178668
    b lbl_fn_804F3884_00000AF0
lbl_fn_804F3884_00000AC0:
    lwz r0, 0xd4c(r31)
    rlwinm r0, r0, 0, 22, 19
    stw r0, 0xd4c(r31)
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_804F3884_00000AF0
    li r3, 0x4fc1
    bl fn_80219E6C
    mr r4, r3
    lwz r3, 0x0(r31)
    mr r5, r30
    bl fn_80178864
lbl_fn_804F3884_00000AF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F39D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F39D8_00000C10
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F39D8_00000B5C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F39D8_00000B5C:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r6, lbl_8087F600
    lwz r0, 0x5e8(r5)
    lbz r4, 0x0(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F39D8_00000BAC
lbl_fn_804F39D8_00000B7C:
    lwz r0, 0x5e4(r5)
    add r31, r0, r3
    lwz r0, 0xd0(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F39D8_00000BA4
    lbz r0, 0xcc(r31)
    cmplw r4, r0
    bne lbl_fn_804F39D8_00000BA4
    b lbl_fn_804F39D8_00000BB0
lbl_fn_804F39D8_00000BA4:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F39D8_00000B7C
lbl_fn_804F39D8_00000BAC:
    li r31, 0x0
lbl_fn_804F39D8_00000BB0:
    cmpwi r31, 0x0
    beq lbl_fn_804F39D8_00000C10
    lbz r0, 0x1(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804F39D8_00000BEC
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804F39D8_00000C10
    lbz r0, 0x2(r6)
    stw r0, 0x9f8(r3)
    lwz r3, 0x0(r31)
    lwz r0, 0x7e0(r3)
    ori r0, r0, 0x20
    stw r0, 0x7e0(r3)
    b lbl_fn_804F39D8_00000C10
lbl_fn_804F39D8_00000BEC:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F39D8_00000C10
    mr r3, r31
    bl fn_805011D0
    lwz r3, 0x0(r31)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 27, 25
    stw r0, 0x7e0(r3)
lbl_fn_804F39D8_00000C10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3AF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F3AF4_00000CD0
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F3AF4_00000CD0
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3AF4_00000C7C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3AF4_00000C7C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3AF4_00000C8C
    b lbl_fn_804F3AF4_00000CD0
lbl_fn_804F3AF4_00000C8C:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3AF4_00000CC0
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3AF4_00000CC0:
    lwz r4, lbl_8087F600
    lwz r3, lbl_8087F610
    lbz r0, 0x0(r4)
    stw r0, 0x5a8(r3)
lbl_fn_804F3AF4_00000CD0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3BB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F3BB0_00000E94
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_804F3BB0_00000E84
lbl_fn_804F3BB0_00000D18:
    cmpwi r29, 0x0
    lwz r3, lbl_8087F610
    blt lbl_fn_804F3BB0_00000D3C
    lwz r0, 0x5e8(r3)
    cmpw r29, r0
    bge lbl_fn_804F3BB0_00000D3C
    lwz r0, 0x5e4(r3)
    add r31, r0, r28
    b lbl_fn_804F3BB0_00000D40
lbl_fn_804F3BB0_00000D3C:
    li r31, 0x0
lbl_fn_804F3BB0_00000D40:
    lwz r3, 0xd0(r31)
    srwi. r0, r3, 31
    beq lbl_fn_804F3BB0_00000E7C
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F3BB0_00000E7C
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_804F3BB0_00000E68
    lwz r4, lbl_8087F628
    lwz r30, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F3BB0_00000D9C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3BB0_00000D90
    li r0, 0x0
    b lbl_fn_804F3BB0_00000DB8
lbl_fn_804F3BB0_00000D90:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F3BB0_00000DB8
lbl_fn_804F3BB0_00000D9C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3BB0_00000DB0
    li r3, 0x0
    b lbl_fn_804F3BB0_00000DB4
lbl_fn_804F3BB0_00000DB0:
    bl fn_806A8E40
lbl_fn_804F3BB0_00000DB4:
    clrlwi r0, r3, 24
lbl_fn_804F3BB0_00000DB8:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F3BB0_00000E00
lbl_fn_804F3BB0_00000DD0:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3BB0_00000DF8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F3BB0_00000DF8
    b lbl_fn_804F3BB0_00000E04
lbl_fn_804F3BB0_00000DF8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3BB0_00000DD0
lbl_fn_804F3BB0_00000E00:
    li r5, 0x0
lbl_fn_804F3BB0_00000E04:
    cmpwi r5, 0x0
    beq lbl_fn_804F3BB0_00000E40
    cmpwi r31, 0x0
    beq lbl_fn_804F3BB0_00000E40
    beq lbl_fn_804F3BB0_00000E34
    lbz r0, 0xcc(r31)
    cmplwi r0, 0xff
    beq lbl_fn_804F3BB0_00000E34
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804F3BB0_00000E34
    li r0, 0x1
    b lbl_fn_804F3BB0_00000E38
lbl_fn_804F3BB0_00000E34:
    li r0, 0x0
lbl_fn_804F3BB0_00000E38:
    cmpwi r0, 0x0
    bne lbl_fn_804F3BB0_00000E48
lbl_fn_804F3BB0_00000E40:
    li r0, 0x0
    b lbl_fn_804F3BB0_00000E60
lbl_fn_804F3BB0_00000E48:
    lbz r0, 0xcc(r31)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804F3BB0_00000E60:
    cmpwi r0, 0x0
    beq lbl_fn_804F3BB0_00000E7C
lbl_fn_804F3BB0_00000E68:
    lwz r3, lbl_8087F610
    li r5, 0x1
    lwz r4, 0x0(r31)
    li r6, 0x0
    bl fn_804EAA88
lbl_fn_804F3BB0_00000E7C:
    addi r29, r29, 0x1
    addi r28, r28, 0xd5c
lbl_fn_804F3BB0_00000E84:
    lwz r3, lbl_8087F610
    lwz r0, 0x5e8(r3)
    cmpw r29, r0
    blt lbl_fn_804F3BB0_00000D18
lbl_fn_804F3BB0_00000E94:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804F3D84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F3D84_00000F70
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F3D84_00000F70
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3D84_00000F14
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3D84_00000F14:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3D84_00000F24
    b lbl_fn_804F3D84_00000F70
lbl_fn_804F3D84_00000F24:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3D84_00000F58
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3D84_00000F58:
    lwz r6, lbl_8087F600
    mr r4, r31
    lwz r3, lbl_8087F610
    lhz r5, 0x0(r6)
    lhz r6, 0x2(r6)
    bl fn_804F50E0
lbl_fn_804F3D84_00000F70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3E54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F3E54_00001010
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3E54_00000FD4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3E54_00000FD4:
    lwz r3, lbl_8087F600
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    blt lbl_fn_804F3E54_00001010
    lwz r3, lbl_8087F610
    lwz r0, 0x5f4(r3)
    cmpw r0, r4
    bgt lbl_fn_804F3E54_00000FF8
    b lbl_fn_804F3E54_00001010
lbl_fn_804F3E54_00000FF8:
    mulli r0, r4, 0xb4
    lwz r3, 0x5f0(r3)
    lwzux r0, r3, r0
    cmpwi r0, 0x0
    beq lbl_fn_804F3E54_00001010
    bl fn_805011D0
lbl_fn_804F3E54_00001010:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F3EF0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r26, 0x38(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_00001848
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F3EF0_00001848
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_0000107C
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3EF0_0000107C:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_0000108C
    b lbl_fn_804F3EF0_00001848
lbl_fn_804F3EF0_0000108C:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_000010C0
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F3EF0_000010C0:
    lwz r5, lbl_8087F610
    li r3, 0x0
    lwz r7, lbl_8087F600
    lwz r6, 0x5e8(r5)
    lbz r4, 0x0(r7)
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804F3EF0_00001110
lbl_fn_804F3EF0_000010E0:
    lwz r0, 0x5e4(r5)
    add r29, r0, r3
    lwz r0, 0xd0(r29)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_00001108
    lbz r0, 0xcc(r29)
    cmplw r4, r0
    bne lbl_fn_804F3EF0_00001108
    b lbl_fn_804F3EF0_00001114
lbl_fn_804F3EF0_00001108:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3EF0_000010E0
lbl_fn_804F3EF0_00001110:
    li r29, 0x0
lbl_fn_804F3EF0_00001114:
    lbz r4, 0x1(r7)
    li r3, 0x0
    lwz r5, lbl_8087F610
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804F3EF0_0000115C
lbl_fn_804F3EF0_0000112C:
    lwz r0, 0x5e4(r5)
    add r30, r0, r3
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_00001154
    lbz r0, 0xcc(r30)
    cmplw r4, r0
    bne lbl_fn_804F3EF0_00001154
    b lbl_fn_804F3EF0_00001160
lbl_fn_804F3EF0_00001154:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3EF0_0000112C
lbl_fn_804F3EF0_0000115C:
    li r30, 0x0
lbl_fn_804F3EF0_00001160:
    cmpwi r29, 0x0
    beq lbl_fn_804F3EF0_00001848
    cmpwi r30, 0x0
    beq lbl_fn_804F3EF0_00001848
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804F3EF0_00001848
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_804F3EF0_00001848
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    bne lbl_fn_804F3EF0_00001848
    cmpwi r30, 0x0
    li r26, 0xa
    beq lbl_fn_804F3EF0_000011C0
    lbz r0, 0xcc(r30)
    cmplwi r0, 0xff
    beq lbl_fn_804F3EF0_000011C0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804F3EF0_000011C0
    li r0, 0x1
    b lbl_fn_804F3EF0_000011C4
lbl_fn_804F3EF0_000011C0:
    li r0, 0x0
lbl_fn_804F3EF0_000011C4:
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_000011D4
    li r0, 0xa
    srawi r26, r0, 1
lbl_fn_804F3EF0_000011D4:
    lwz r31, lbl_8087F610
    lwz r0, 0x564(r31)
    cmpwi r0, 0x0
    blt lbl_fn_804F3EF0_00001218
    bl OSGetTime
    lwz r6, 0x5bc(r31)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r31)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r31)
    subf r0, r4, r0
    b lbl_fn_804F3EF0_0000121C
lbl_fn_804F3EF0_00001218:
    li r0, -0x1
lbl_fn_804F3EF0_0000121C:
    srwi r0, r0, 31
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_00001284
    lwz r0, 0x564(r31)
    cmpwi r0, 0x0
    blt lbl_fn_804F3EF0_0000126C
    bl OSGetTime
    lwz r6, 0x5bc(r31)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r31)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r31)
    subf r0, r4, r0
    b lbl_fn_804F3EF0_00001270
lbl_fn_804F3EF0_0000126C:
    li r0, -0x1
lbl_fn_804F3EF0_00001270:
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804F3EF0_00001284:
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_00001290
    slwi r26, r26, 1
lbl_fn_804F3EF0_00001290:
    lwz r5, lbl_8087F610
    lwz r0, 0x0(r30)
    lwz r3, 0x540(r5)
    cmpwi r3, 0x0
    bne lbl_fn_804F3EF0_000012AC
    li r9, 0x1
    b lbl_fn_804F3EF0_00001358
lbl_fn_804F3EF0_000012AC:
    lwz r10, 0x5e8(r5)
    li r4, 0x0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_804F3EF0_000012F0
lbl_fn_804F3EF0_000012C0:
    lwz r6, 0x5e4(r5)
    add r7, r6, r4
    lwz r6, 0xd0(r7)
    srwi r6, r6, 31
    cmplwi r6, 0x1
    bne lbl_fn_804F3EF0_000012E8
    lwz r6, 0x0(r7)
    cmplw r6, r0
    bne lbl_fn_804F3EF0_000012E8
    b lbl_fn_804F3EF0_000012F4
lbl_fn_804F3EF0_000012E8:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804F3EF0_000012C0
lbl_fn_804F3EF0_000012F0:
    li r7, 0x0
lbl_fn_804F3EF0_000012F4:
    cmpwi r7, 0x0
    bne lbl_fn_804F3EF0_00001304
    li r9, 0x0
    b lbl_fn_804F3EF0_00001358
lbl_fn_804F3EF0_00001304:
    lwz r6, 0xd0(r7)
    li r9, 0x0
    li r4, 0x0
    extrwi r8, r6, 4, 6
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_804F3EF0_00001358
lbl_fn_804F3EF0_00001320:
    lwz r6, 0x5e4(r5)
    add r10, r6, r4
    lwz r7, 0xd0(r10)
    srwi. r6, r7, 31
    beq lbl_fn_804F3EF0_00001350
    lwz r6, 0x0(r10)
    cmpwi r6, 0x0
    beq lbl_fn_804F3EF0_00001350
    extrwi r6, r7, 4, 6
    cmplw r6, r8
    bne lbl_fn_804F3EF0_00001350
    addi r9, r9, 0x1
lbl_fn_804F3EF0_00001350:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804F3EF0_00001320
lbl_fn_804F3EF0_00001358:
    lwz r6, 0x540(r5)
    lwz r4, 0x0(r29)
    cmpwi r6, 0x0
    bne lbl_fn_804F3EF0_00001370
    li r10, 0x1
    b lbl_fn_804F3EF0_0000141C
lbl_fn_804F3EF0_00001370:
    lwz r12, 0x5e8(r5)
    li r6, 0x0
    mtctr r12
    cmpwi r12, 0x0
    ble lbl_fn_804F3EF0_000013B4
lbl_fn_804F3EF0_00001384:
    lwz r7, 0x5e4(r5)
    add r8, r7, r6
    lwz r7, 0xd0(r8)
    srwi r7, r7, 31
    cmplwi r7, 0x1
    bne lbl_fn_804F3EF0_000013AC
    lwz r7, 0x0(r8)
    cmplw r7, r4
    bne lbl_fn_804F3EF0_000013AC
    b lbl_fn_804F3EF0_000013B8
lbl_fn_804F3EF0_000013AC:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804F3EF0_00001384
lbl_fn_804F3EF0_000013B4:
    li r8, 0x0
lbl_fn_804F3EF0_000013B8:
    cmpwi r8, 0x0
    bne lbl_fn_804F3EF0_000013C8
    li r10, 0x0
    b lbl_fn_804F3EF0_0000141C
lbl_fn_804F3EF0_000013C8:
    lwz r7, 0xd0(r8)
    li r10, 0x0
    li r6, 0x0
    extrwi r11, r7, 4, 6
    mtctr r12
    cmpwi r12, 0x0
    ble lbl_fn_804F3EF0_0000141C
lbl_fn_804F3EF0_000013E4:
    lwz r7, 0x5e4(r5)
    add r12, r7, r6
    lwz r8, 0xd0(r12)
    srwi. r7, r8, 31
    beq lbl_fn_804F3EF0_00001414
    lwz r7, 0x0(r12)
    cmpwi r7, 0x0
    beq lbl_fn_804F3EF0_00001414
    extrwi r7, r8, 4, 6
    cmplw r7, r11
    bne lbl_fn_804F3EF0_00001414
    addi r10, r10, 0x1
lbl_fn_804F3EF0_00001414:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804F3EF0_000013E4
lbl_fn_804F3EF0_0000141C:
    subf. r5, r10, r9
    ble lbl_fn_804F3EF0_000015AC
    cmpwi r3, 0x0
    lwz r3, lbl_8087F610
    bne lbl_fn_804F3EF0_00001438
    li r7, 0x1
    b lbl_fn_804F3EF0_000014E4
lbl_fn_804F3EF0_00001438:
    lwz r9, 0x5e8(r3)
    li r5, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804F3EF0_0000147C
lbl_fn_804F3EF0_0000144C:
    lwz r6, 0x5e4(r3)
    add r7, r6, r5
    lwz r6, 0xd0(r7)
    srwi r6, r6, 31
    cmplwi r6, 0x1
    bne lbl_fn_804F3EF0_00001474
    lwz r6, 0x0(r7)
    cmplw r6, r0
    bne lbl_fn_804F3EF0_00001474
    b lbl_fn_804F3EF0_00001480
lbl_fn_804F3EF0_00001474:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804F3EF0_0000144C
lbl_fn_804F3EF0_0000147C:
    li r7, 0x0
lbl_fn_804F3EF0_00001480:
    cmpwi r7, 0x0
    bne lbl_fn_804F3EF0_00001490
    li r7, 0x0
    b lbl_fn_804F3EF0_000014E4
lbl_fn_804F3EF0_00001490:
    lwz r0, 0xd0(r7)
    li r7, 0x0
    li r5, 0x0
    extrwi r8, r0, 4, 6
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_804F3EF0_000014E4
lbl_fn_804F3EF0_000014AC:
    lwz r0, 0x5e4(r3)
    add r9, r0, r5
    lwz r6, 0xd0(r9)
    srwi. r0, r6, 31
    beq lbl_fn_804F3EF0_000014DC
    lwz r0, 0x0(r9)
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_000014DC
    extrwi r0, r6, 4, 6
    cmplw r0, r8
    bne lbl_fn_804F3EF0_000014DC
    addi r7, r7, 0x1
lbl_fn_804F3EF0_000014DC:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804F3EF0_000014AC
lbl_fn_804F3EF0_000014E4:
    lwz r0, 0x540(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_000014F8
    li r8, 0x1
    b lbl_fn_804F3EF0_000015A4
lbl_fn_804F3EF0_000014F8:
    lwz r10, 0x5e8(r3)
    li r5, 0x0
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_804F3EF0_0000153C
lbl_fn_804F3EF0_0000150C:
    lwz r0, 0x5e4(r3)
    add r6, r0, r5
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_00001534
    lwz r0, 0x0(r6)
    cmplw r0, r4
    bne lbl_fn_804F3EF0_00001534
    b lbl_fn_804F3EF0_00001540
lbl_fn_804F3EF0_00001534:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804F3EF0_0000150C
lbl_fn_804F3EF0_0000153C:
    li r6, 0x0
lbl_fn_804F3EF0_00001540:
    cmpwi r6, 0x0
    bne lbl_fn_804F3EF0_00001550
    li r8, 0x0
    b lbl_fn_804F3EF0_000015A4
lbl_fn_804F3EF0_00001550:
    lwz r0, 0xd0(r6)
    li r8, 0x0
    li r5, 0x0
    extrwi r9, r0, 4, 6
    mtctr r10
    cmpwi r10, 0x0
    ble lbl_fn_804F3EF0_000015A4
lbl_fn_804F3EF0_0000156C:
    lwz r0, 0x5e4(r3)
    add r10, r0, r5
    lwz r6, 0xd0(r10)
    srwi. r0, r6, 31
    beq lbl_fn_804F3EF0_0000159C
    lwz r0, 0x0(r10)
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_0000159C
    extrwi r0, r6, 4, 6
    cmplw r0, r9
    bne lbl_fn_804F3EF0_0000159C
    addi r8, r8, 0x1
lbl_fn_804F3EF0_0000159C:
    addi r5, r5, 0xd5c
    bdnz lbl_fn_804F3EF0_0000156C
lbl_fn_804F3EF0_000015A4:
    subf r3, r8, r7
    b lbl_fn_804F3EF0_000015B0
lbl_fn_804F3EF0_000015AC:
    li r3, 0x0
lbl_fn_804F3EF0_000015B0:
    lwz r27, lbl_8087F610
    slwi r0, r3, 2
    add r3, r0, r3
    lwz r31, 0xdc(r29)
    lwz r0, 0x50c(r27)
    add r26, r26, r3
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_00001774
    lwz r0, 0x5e8(r27)
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804F3EF0_00001614
lbl_fn_804F3EF0_000015E4:
    lwz r0, 0x5e4(r27)
    add r28, r0, r3
    lwz r0, 0xd0(r28)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_0000160C
    lwz r0, 0x0(r28)
    cmplw r0, r4
    bne lbl_fn_804F3EF0_0000160C
    b lbl_fn_804F3EF0_00001618
lbl_fn_804F3EF0_0000160C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3EF0_000015E4
lbl_fn_804F3EF0_00001614:
    li r28, 0x0
lbl_fn_804F3EF0_00001618:
    cmpwi r28, 0x0
    beq lbl_fn_804F3EF0_00001774
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_804F3EF0_00001774
    lwz r0, 0xdc(r28)
    addi r3, r28, 0xdc
    lwz r30, 0xdc(r28)
    add r4, r0, r26
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r4, r4, r0
    bl fn_8050128C
    lwz r0, 0x540(r27)
    cmpwi r0, 0x2
    beq lbl_fn_804F3EF0_00001774
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_00001690
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3EF0_00001684
    li r0, 0x0
    b lbl_fn_804F3EF0_000016AC
lbl_fn_804F3EF0_00001684:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F3EF0_000016AC
lbl_fn_804F3EF0_00001690:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3EF0_000016A4
    li r3, 0x0
    b lbl_fn_804F3EF0_000016A8
lbl_fn_804F3EF0_000016A4:
    bl fn_806A8E40
lbl_fn_804F3EF0_000016A8:
    clrlwi r0, r3, 24
lbl_fn_804F3EF0_000016AC:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F3EF0_000016F4
lbl_fn_804F3EF0_000016C4:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_000016EC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F3EF0_000016EC
    b lbl_fn_804F3EF0_000016F8
lbl_fn_804F3EF0_000016EC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3EF0_000016C4
lbl_fn_804F3EF0_000016F4:
    li r5, 0x0
lbl_fn_804F3EF0_000016F8:
    cmplw r28, r5
    bne lbl_fn_804F3EF0_00001774
    lwz r26, 0xdc(r28)
    cmpw r30, r26
    beq lbl_fn_804F3EF0_00001774
    lwz r27, lbl_8087F8A8
    cmpwi r27, 0x0
    beq lbl_fn_804F3EF0_00001774
    lwz r4, 0x0(r28)
    addi r3, r1, 0x20
    lwz r12, 0x0(r4)
    lwz r12, 0x58(r12)
    mtctr r12
    bctrl
    li r3, 0x0
    stw r3, 0x8(r1)
    li r4, 0x1
    li r0, -0x1
    stw r3, 0xc(r1)
    mr r3, r27
    addi r6, r1, 0x20
    subf r7, r30, r26
    stw r4, 0x10(r1)
    li r4, 0x8
    la r5, lbl_8087E1C4
    li r8, 0x0
    stw r0, 0x14(r1)
    li r9, 0x1
    li r10, 0x0
    stw r0, 0x18(r1)
    bl fn_8054D798
lbl_fn_804F3EF0_00001774:
    lwz r0, 0xdc(r29)
    cmpw r31, r0
    bge lbl_fn_804F3EF0_0000178C
    lwz r3, 0xe0(r29)
    addi r0, r3, 0x1
    stw r0, 0xe0(r29)
lbl_fn_804F3EF0_0000178C:
    lwz r4, lbl_8087F628
    lwz r27, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F3EF0_000017C4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3EF0_000017B8
    li r0, 0x0
    b lbl_fn_804F3EF0_000017E0
lbl_fn_804F3EF0_000017B8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F3EF0_000017E0
lbl_fn_804F3EF0_000017C4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F3EF0_000017D8
    li r3, 0x0
    b lbl_fn_804F3EF0_000017DC
lbl_fn_804F3EF0_000017D8:
    bl fn_806A8E40
lbl_fn_804F3EF0_000017DC:
    clrlwi r0, r3, 24
lbl_fn_804F3EF0_000017E0:
    lwz r5, 0x5e8(r27)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F3EF0_00001828
lbl_fn_804F3EF0_000017F8:
    lwz r0, 0x5e4(r27)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F3EF0_00001820
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F3EF0_00001820
    b lbl_fn_804F3EF0_0000182C
lbl_fn_804F3EF0_00001820:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F3EF0_000017F8
lbl_fn_804F3EF0_00001828:
    li r5, 0x0
lbl_fn_804F3EF0_0000182C:
    cmplw r29, r5
    bne lbl_fn_804F3EF0_00001848
    lwz r4, lbl_8087F628
    lwz r3, lbl_8087F610
    lbz r4, 0xcdb(r4)
    extsb r4, r4
    bl fn_804E82C8
lbl_fn_804F3EF0_00001848:
    lmw r26, 0x38(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804F472C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F472C_00001920
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F472C_00001920
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F472C_000018B4
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F472C_000018B4:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F472C_000018C4
    b lbl_fn_804F472C_00001920
lbl_fn_804F472C_000018C4:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F472C_000018F8
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F472C_000018F8:
    lwz r4, lbl_8087F600
    lwz r0, 0x0(r4)
    cmplwi r0, 0x7
    bgt lbl_fn_804F472C_00001920
    lwz r3, lbl_8087F610
    slwi r0, r0, 2
    lwz r4, 0x4(r4)
    addis r3, r3, 0x1
    add r3, r3, r0
    stw r4, -0x696c(r3)
lbl_fn_804F472C_00001920:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804F4800(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r28, 0x20(r1)
    lwz r0, lbl_8087F628
    cmpwi r0, 0x0
    beq lbl_fn_804F4800_00001DCC
    bl fn_804AE3BC
    cmpwi r3, 0x0
    beq lbl_fn_804F4800_00001DCC
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_000019A0
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4800_000019A0:
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_000019B0
    b lbl_fn_804F4800_00001DCC
lbl_fn_804F4800_000019B0:
    lwz r3, lbl_8087F610
    lwz r0, 0x4fc(r3)
    cmpwi r0, 0x1e
    bne lbl_fn_804F4800_000019CC
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_00001DCC
lbl_fn_804F4800_000019CC:
    bl fn_804AE3BC
    lwz r0, lbl_8087F600
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_00001A00
    bl fn_800827E0
    li r4, 0x1000
    li r5, 0x4
    li r6, 0x5
    la r7, lbl_8087E1B0
    la r8, lbl_8087E1AC
    li r9, 0x0
    bl fn_800838B8
    stw r3, lbl_8087F600
lbl_fn_804F4800_00001A00:
    lwz r31, lbl_8087F600
    li r7, 0x0
    li r3, 0x0
    mr r6, r31
    b lbl_fn_804F4800_00001A64
lbl_fn_804F4800_00001A14:
    cmpwi r7, 0x0
    lwz r4, lbl_8087F610
    blt lbl_fn_804F4800_00001A38
    lwz r0, 0x5e8(r4)
    cmpw r7, r0
    bge lbl_fn_804F4800_00001A38
    lwz r0, 0x5e4(r4)
    add r5, r0, r3
    b lbl_fn_804F4800_00001A3C
lbl_fn_804F4800_00001A38:
    li r5, 0x0
lbl_fn_804F4800_00001A3C:
    lwz r0, 0x42(r6)
    add r4, r31, r7
    stw r0, 0xd8(r5)
    addi r6, r6, 0x4
    addi r7, r7, 0x1
    addi r3, r3, 0xd5c
    lbz r4, 0x39(r4)
    lwz r0, 0xd4(r5)
    rlwimi r0, r4, 22, 6, 9
    stw r0, 0xd4(r5)
lbl_fn_804F4800_00001A64:
    lwz r4, lbl_8087F610
    lwz r0, 0x5e8(r4)
    cmpw r7, r0
    blt lbl_fn_804F4800_00001A14
    lbz r0, 0x6c(r31)
    cmplwi r0, 0x2
    beq lbl_fn_804F4800_00001A88
    lwz r0, 0x0(r31)
    stw r0, 0x55c(r4)
lbl_fn_804F4800_00001A88:
    lwz r3, lbl_8087F610
    lwz r0, 0x4(r31)
    stw r0, 0x564(r3)
    lbz r0, 0x66(r31)
    lwz r3, lbl_8087F610
    extsb r0, r0
    stw r0, 0x5a0(r3)
    lwz r3, lbl_8087F610
    lbz r0, 0x67(r31)
    stw r0, 0x5a8(r3)
    lwz r3, lbl_8087F610
    lbz r0, 0x6a(r31)
    stw r0, 0x540(r3)
    lbz r0, 0x6b(r31)
    lwz r3, lbl_8087F610
    cmpwi r0, 0x6
    stw r0, 0x5a4(r3)
    ble lbl_fn_804F4800_00001AD8
    li r0, 0x6
    stw r0, 0x5a4(r3)
lbl_fn_804F4800_00001AD8:
    lwz r3, lbl_8087F610
    lbz r0, 0x8(r31)
    stw r0, 0x5b0(r3)
    lwz r3, lbl_8087F610
    lha r0, 0x64(r31)
    sth r0, 0x508(r3)
    lwz r0, 0x25(r31)
    lwz r3, 0xd0(r29)
    rlwimi r3, r0, 0, 3, 3
    stw r3, 0xd0(r29)
    lbz r28, 0xcc(r29)
    lwz r0, 0x25(r31)
    rlwimi r3, r0, 0, 22, 25
    stw r3, 0xd0(r29)
    lwz r0, 0x25(r31)
    rlwimi r3, r0, 0, 26, 29
    stw r3, 0xd0(r29)
    lwz r0, 0x25(r31)
    rlwimi r3, r0, 0, 30, 30
    stw r3, 0xd0(r29)
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_00001B5C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F4800_00001B50
    li r0, 0x0
    b lbl_fn_804F4800_00001B60
lbl_fn_804F4800_00001B50:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804F4800_00001B60
lbl_fn_804F4800_00001B5C:
    li r0, 0x0
lbl_fn_804F4800_00001B60:
    clrlwi r0, r0, 24
    subf r0, r28, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804F4800_00001BCC
    lwz r0, 0x9(r31)
    stw r0, 0xb0(r29)
    lwz r3, 0xd0(r29)
    lwz r4, 0xd(r31)
    lwz r0, 0x11(r31)
    stw r0, 0xb8(r29)
    stw r4, 0xb4(r29)
    lwz r0, 0x15(r31)
    stw r0, 0xbc(r29)
    lwz r4, 0x19(r31)
    lwz r0, 0x1d(r31)
    stw r0, 0xc4(r29)
    stw r4, 0xc0(r29)
    lwz r0, 0x21(r31)
    stw r0, 0xc8(r29)
    lwz r0, 0x25(r31)
    rlwimi r3, r0, 0, 6, 9
    stw r3, 0xd0(r29)
    lwz r0, 0x25(r31)
    rlwimi r3, r0, 0, 20, 21
    stw r3, 0xd0(r29)
lbl_fn_804F4800_00001BCC:
    lwz r4, lbl_8087F628
    lwz r28, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804F4800_00001C04
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F4800_00001BF8
    li r0, 0x0
    b lbl_fn_804F4800_00001C20
lbl_fn_804F4800_00001BF8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804F4800_00001C20
lbl_fn_804F4800_00001C04:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804F4800_00001C18
    li r3, 0x0
    b lbl_fn_804F4800_00001C1C
lbl_fn_804F4800_00001C18:
    bl fn_806A8E40
lbl_fn_804F4800_00001C1C:
    clrlwi r0, r3, 24
lbl_fn_804F4800_00001C20:
    lwz r5, 0x5e8(r28)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804F4800_00001C68
lbl_fn_804F4800_00001C38:
    lwz r0, 0x5e4(r28)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804F4800_00001C60
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804F4800_00001C60
    b lbl_fn_804F4800_00001C6C
lbl_fn_804F4800_00001C60:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804F4800_00001C38
lbl_fn_804F4800_00001C68:
    li r5, 0x0
lbl_fn_804F4800_00001C6C:
    cmpwi r5, 0x0
    beq lbl_fn_804F4800_00001CE8
    li r6, 0x0
    li r3, 0x0
    b lbl_fn_804F4800_00001CD8
lbl_fn_804F4800_00001C80:
    cmpwi r6, 0x0
    lwz r4, lbl_8087F610
    blt lbl_fn_804F4800_00001CA4
    lwz r0, 0x5e8(r4)
    cmpw r6, r0
    bge lbl_fn_804F4800_00001CA4
    lwz r0, 0x5e4(r4)
    add r5, r0, r3
    b lbl_fn_804F4800_00001CA8
lbl_fn_804F4800_00001CA4:
    li r5, 0x0
lbl_fn_804F4800_00001CA8:
    cmpwi r5, 0x0
    beq lbl_fn_804F4800_00001CD0
    add r7, r31, r6
    lwz r0, 0xd0(r5)
    lbz r4, 0x29(r7)
    rlwimi r0, r4, 22, 6, 9
    stw r0, 0xd0(r5)
    lbz r0, 0x31(r7)
    extsb r0, r0
    stw r0, 0xb0(r5)
lbl_fn_804F4800_00001CD0:
    addi r6, r6, 0x1
    addi r3, r3, 0xd5c
lbl_fn_804F4800_00001CD8:
    lwz r4, lbl_8087F610
    lwz r0, 0x5e8(r4)
    cmpw r6, r0
    blt lbl_fn_804F4800_00001C80
lbl_fn_804F4800_00001CE8:
    lwz r3, lbl_8087F610
    lbz r0, 0x69(r31)
    stb r0, 0x5b4(r3)
    lbz r0, 0x6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804F4800_00001D0C
    cmpwi r0, 0x1
    beq lbl_fn_804F4800_00001DBC
    b lbl_fn_804F4800_00001DCC
lbl_fn_804F4800_00001D0C:
    lbz r0, lbl_8087F5F8
    li r4, 0x2
    li r3, 0x1035
    sth r4, 0x8(r1)
    extsb. r0, r0
    sth r3, 0xa(r1)
    bne lbl_fn_804F4800_00001D48
    lis r4, fn_804D818C@ha
    lis r5, lbl_807C8AE8@ha
    addi r4, r4, fn_804D818C@l
    la r3, lbl_8087F5FC
    addi r5, r5, lbl_807C8AE8@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F5F8
lbl_fn_804F4800_00001D48:
    li r3, 0x0
    li r0, 0xb
    stw r3, lbl_8087F5FC
    addi r28, r1, 0xc
    sth r0, 0x8(r1)
    lbz r0, 0x68(r31)
    stb r0, 0xc(r1)
    bl fn_804AE3BC
    mr r4, r30
    mr r6, r28
    li r5, 0x1035
    li r7, 0x1
    bl fn_8050E098
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x6650(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stb r30, -0x664f(r3)
    lwz r3, lbl_8087F610
    addis r3, r3, 0x1
    stw r0, -0x664c(r3)
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804F4800_00001DCC
    li r0, 0x2
    stw r0, 0xf90(r3)
    b lbl_fn_804F4800_00001DCC
lbl_fn_804F4800_00001DBC:
    lwz r3, lbl_8087F610
    li r0, 0x1
    addis r3, r3, 0x1
    stb r0, -0x658c(r3)
lbl_fn_804F4800_00001DCC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
