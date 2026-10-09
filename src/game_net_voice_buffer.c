#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800183E0(void);
extern void fn_80018608(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800CB440(void);
extern void fn_800CB518(void);
extern void fn_800CB5C8(void);
extern void fn_8017ABD4(void);
extern void fn_803E5E64(void);
extern void fn_803EBAC8(void);
extern void fn_80444020(void);
extern void fn_804B67E4(void);
extern void fn_804B691C(void);
extern void fn_804BA350(void);
extern void fn_804C2260(void);
extern void fn_804DD3F4(void);
extern void fn_804DF4BC(void);
extern void fn_804E4B48(void);
extern void fn_804FB224(void);
extern void fn_8050128C(void);
extern void fn_80509B24(void);
extern void fn_8050F8B4(void);
extern void fn_8054D798(void);
extern void fn_80680CF8(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80759E48[];
extern u8 lbl_807910A8[];

/* Small data declarations */
extern u32 lbl_8087E1C4;
extern u32 lbl_8087EE68;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F5A8;
extern u32 lbl_8087F5B8;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F8A8;
extern u32 lbl_80887590;
extern u32 lbl_808875AC;

/* Function declarations */
void fn_804D9BF8(void);
void fn_804D9C18(void);
void fn_804DA2D4(void);
void fn_804DA350(void);
void fn_804DA39C(void);
void fn_804DA3F8(void);
void fn_804DA47C(void);
void fn_804DA490(void);
void fn_804DA4A4(void);
void fn_804DA694(void);
void fn_804DB1C8(void);
void fn_804DB3B8(void);
void fn_804DB40C(void);
void fn_804DB478(void);

asm void fn_804D9BF8(void)
{
    nofralloc
    addis r7, r3, 0x1
    li r0, 0x5a
    stw r4, 0x348(r3)
    stw r5, 0x34c(r3)
    stw r6, 0x350(r3)
    li r3, 0x1
    stw r0, -0x6660(r7)
    blr
}

asm void fn_804D9C18(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r16, 0x10(r1)
    li r17, 0x0
    mr r30, r3
    mr r31, r4
    li r26, 0x0
    mr r22, r17
    mr r24, r17
    li r19, -0x3
    li r20, -0x1
    li r21, -0xa2
    li r25, -0x2
    li r23, 0x9e
    li r28, 0x4
    li r27, 0x4
    li r29, 0x4
    b lbl_fn_804D9C18_000006B8
lbl_fn_804D9C18_0000006C:
    lwz r0, 0x5e4(r30)
    add r3, r0, r26
    lwz r0, 0xd0(r3)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804D9C18_000006B0
    lbz r3, 0xcc(r3)
    lbz r0, 0xcc(r31)
    cmplw r0, r3
    beq lbl_fn_804D9C18_000006B0
    clrlslwi r0, r3, 24, 2
    add r3, r30, r0
    addis r18, r3, 0x1
    lwz r6, -0x65ac(r18)
    cmpwi r6, 0x0
    blt lbl_fn_804D9C18_000006B0
    lwz r7, lbl_8087F610
    clrlwi r3, r6, 24
    li r4, 0x0
    mr r5, r7
    mtctr r27
lbl_fn_804D9C18_000000C0:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000000E8
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000000E8
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_000000E8:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000114
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000114
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_00000114:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000140
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000140
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_00000140:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_0000016C
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_0000016C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_0000016C:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000198
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000198
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_00000198:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000001C4
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000001C4
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_000001C4:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000001F0
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000001F0
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_000001F0:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_0000021C
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_0000021C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_0000022C
lbl_fn_804D9C18_0000021C:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D9C18_000000C0
    li r3, 0x0
lbl_fn_804D9C18_0000022C:
    cmpwi r3, 0x0
    bne lbl_fn_804D9C18_0000023C
    li r0, -0x2
    b lbl_fn_804D9C18_00000240
lbl_fn_804D9C18_0000023C:
    lwz r0, 0x4(r3)
lbl_fn_804D9C18_00000240:
    cmpwi r0, -0x2
    bne lbl_fn_804D9C18_000002B0
    stw r19, -0x65ac(r18)
    li r18, 0x9
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D9C18_00000280
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D9C18_00000280
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D9C18_00000280
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D9C18_00000280:
    addis r3, r30, 0x1
    cmplwi r21, 0x1
    stw r20, -0x68b0(r3)
    bgt lbl_fn_804D9C18_00000294
    li r18, 0x9
lbl_fn_804D9C18_00000294:
    addi r3, r30, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r30, 0x1
    stw r23, -0x68ac(r3)
    stw r18, -0x68a8(r3)
    b lbl_fn_804D9C18_000006B0
lbl_fn_804D9C18_000002B0:
    cmpwi r0, -0x1
    bne lbl_fn_804D9C18_000004AC
    lwz r7, lbl_8087F610
    clrlwi r3, r6, 24
    li r4, 0x0
    mr r5, r7
    mtctr r28
lbl_fn_804D9C18_000002CC:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000002F4
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000002F4
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_000002F4:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000320
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000320
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_00000320:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_0000034C
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_0000034C
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_0000034C:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000378
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000378
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_00000378:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000003A4
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000003A4
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_000003A4:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000003D0
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000003D0
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_000003D0:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000003FC
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000003FC
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_000003FC:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000428
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000428
    mulli r0, r4, 0x18
    add r3, r7, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_00000438
lbl_fn_804D9C18_00000428:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D9C18_000002CC
    li r3, 0x0
lbl_fn_804D9C18_00000438:
    cmpwi r3, 0x0
    beq lbl_fn_804D9C18_00000444
    stw r22, 0x0(r3)
lbl_fn_804D9C18_00000444:
    stw r19, -0x65ac(r18)
    li r18, 0x9
    lwz r3, lbl_8087F628
    lwz r0, 0x25c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804D9C18_0000047C
    lwz r3, lbl_8087F5B8
    cmpwi r3, 0x0
    beq lbl_fn_804D9C18_0000047C
    lwz r0, 0x88(r3)
    cmpwi r0, 0x8
    bne lbl_fn_804D9C18_0000047C
    li r4, 0x9
    bl fn_804BA350
lbl_fn_804D9C18_0000047C:
    addis r3, r30, 0x1
    cmplwi r21, 0x1
    stw r20, -0x68b0(r3)
    bgt lbl_fn_804D9C18_00000490
    li r18, 0x9
lbl_fn_804D9C18_00000490:
    addi r3, r30, 0x4fc
    li r4, 0x2b
    bl fn_804FB224
    addis r3, r30, 0x1
    stw r23, -0x68ac(r3)
    stw r18, -0x68a8(r3)
    b lbl_fn_804D9C18_000006B0
lbl_fn_804D9C18_000004AC:
    cmpwi r0, 0x1
    li r16, 0x0
    bne lbl_fn_804D9C18_000004C0
    li r16, 0x1
    b lbl_fn_804D9C18_00000514
lbl_fn_804D9C18_000004C0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804D9C18_000004F0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9C18_000004E8
    li r3, 0x1
    b lbl_fn_804D9C18_00000508
lbl_fn_804D9C18_000004E8:
    bl fn_806B0DE0
    b lbl_fn_804D9C18_00000508
lbl_fn_804D9C18_000004F0:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804D9C18_00000504
    li r3, 0x1
    b lbl_fn_804D9C18_00000508
lbl_fn_804D9C18_00000504:
    bl fn_806A8E70
lbl_fn_804D9C18_00000508:
    cmpwi r3, 0x1
    bgt lbl_fn_804D9C18_00000514
    li r16, 0x1
lbl_fn_804D9C18_00000514:
    cmplwi r16, 0x1
    bne lbl_fn_804D9C18_000006B0
    lwz r0, -0x65ac(r18)
    li r4, 0x0
    lwz r6, lbl_8087F610
    clrlwi r3, r0, 24
    mr r5, r6
    mtctr r29
lbl_fn_804D9C18_00000534:
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_0000055C
    lbz r0, 0x5d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_0000055C
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_0000055C:
    lwz r0, 0x60(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000588
    lbz r0, 0x75(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000588
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_00000588:
    lwz r0, 0x78(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000005B4
    lbz r0, 0x8d(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000005B4
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_000005B4:
    lwz r0, 0x90(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_000005E0
    lbz r0, 0xa5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_000005E0
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_000005E0:
    lwz r0, 0xa8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_0000060C
    lbz r0, 0xbd(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_0000060C
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_0000060C:
    lwz r0, 0xc0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000638
    lbz r0, 0xd5(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000638
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_00000638:
    lwz r0, 0xd8(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000664
    lbz r0, 0xed(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000664
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_00000664:
    lwz r0, 0xf0(r5)
    addi r4, r4, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804D9C18_00000690
    lbz r0, 0x105(r5)
    cmplw r3, r0
    bne lbl_fn_804D9C18_00000690
    mulli r0, r4, 0x18
    add r3, r6, r0
    addi r3, r3, 0x48
    b lbl_fn_804D9C18_000006A0
lbl_fn_804D9C18_00000690:
    addi r5, r5, 0xc0
    addi r4, r4, 0x1
    bdnz lbl_fn_804D9C18_00000534
    li r3, 0x0
lbl_fn_804D9C18_000006A0:
    cmpwi r3, 0x0
    beq lbl_fn_804D9C18_000006AC
    stw r24, 0x0(r3)
lbl_fn_804D9C18_000006AC:
    stw r25, -0x65ac(r18)
lbl_fn_804D9C18_000006B0:
    addi r17, r17, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804D9C18_000006B8:
    lwz r0, 0x5e8(r30)
    cmplw r17, r0
    blt lbl_fn_804D9C18_0000006C
    lmw r16, 0x10(r1)
    li r3, 0x1
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804DA2D4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r5, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, -0x6660(r5)
    subic. r0, r3, 0x1
    stw r0, -0x6660(r5)
    bge lbl_fn_804DA2D4_0000071C
    cmpwi r4, 0x0
    li r0, 0x0
    stw r0, -0x6660(r5)
    bne lbl_fn_804DA2D4_0000071C
    li r3, 0x1
    b lbl_fn_804DA2D4_00000744
lbl_fn_804DA2D4_0000071C:
    lwz r3, lbl_8087F5C4
    cmpwi r3, 0x0
    beq lbl_fn_804DA2D4_00000734
    addis r4, r31, 0x1
    lwz r4, -0x6660(r4)
    bl fn_804C2260
lbl_fn_804DA2D4_00000734:
    addis r3, r31, 0x1
    lwz r0, -0x6660(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
lbl_fn_804DA2D4_00000744:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DA350(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804DA350_00000794
    lwz r4, lbl_808875AC
    addi r3, r1, 0x8
    lfs f1, lbl_80887590
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_804DA350_00000794:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DA39C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804DA39C_000007EC
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_804DA39C_000007DC
    li r4, 0xf
    li r5, 0x0
    bl fn_803EBAC8
lbl_fn_804DA39C_000007DC:
    addi r3, r31, 0x2b74
    li r4, 0xf
    li r5, 0x0
    bl fn_800CB5C8
lbl_fn_804DA39C_000007EC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DA3F8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0xf
    li r5, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r3, 0x2b78
    bl fn_800CB5C8
    bl fn_80680CF8
    lis r4, lbl_807910A8@ha
    clrlslwi r0, r3, 31, 2
    addi r4, r4, lbl_807910A8@l
    lfs f1, lbl_80887590
    lwzx r4, r4, r0
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r31, 0x2b78
    addi r4, r1, 0x8
    bl fn_800CB440
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r31, 0x2b78
    li r4, 0x2d
    bl fn_800CB518
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DA47C(void)
{
    nofralloc
    lwz r3, lbl_8087F5A8
    cmpwi r3, 0x0
    beqlr
    b fn_804B691C
    blr
}

asm void fn_804DA490(void)
{
    nofralloc
    lwz r3, lbl_8087F5A8
    cmpwi r3, 0x0
    beqlr
    b fn_804B67E4
    blr
}

asm void fn_804DA4A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    li r26, 0x0
    b lbl_fn_804DA4A4_00000A7C
lbl_fn_804DA4A4_000008D0:
    lwz r0, 0x5e4(r27)
    add r31, r0, r26
    lwz r0, 0xd0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_804DA4A4_00000A74
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_804DA4A4_00000A74
    lwz r4, lbl_8087F628
    lwz r30, lbl_8087F610
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA4A4_00000928
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA4A4_0000091C
    li r0, 0x0
    b lbl_fn_804DA4A4_00000944
lbl_fn_804DA4A4_0000091C:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA4A4_00000944
lbl_fn_804DA4A4_00000928:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA4A4_0000093C
    li r3, 0x0
    b lbl_fn_804DA4A4_00000940
lbl_fn_804DA4A4_0000093C:
    bl fn_806A8E40
lbl_fn_804DA4A4_00000940:
    clrlwi r0, r3, 24
lbl_fn_804DA4A4_00000944:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA4A4_0000098C
lbl_fn_804DA4A4_0000095C:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA4A4_00000984
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DA4A4_00000984
    b lbl_fn_804DA4A4_00000990
lbl_fn_804DA4A4_00000984:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA4A4_0000095C
lbl_fn_804DA4A4_0000098C:
    li r5, 0x0
lbl_fn_804DA4A4_00000990:
    cmpwi r5, 0x0
    beq lbl_fn_804DA4A4_000009CC
    cmpwi r31, 0x0
    beq lbl_fn_804DA4A4_000009CC
    beq lbl_fn_804DA4A4_000009C0
    lbz r0, 0xcc(r31)
    cmplwi r0, 0xff
    beq lbl_fn_804DA4A4_000009C0
    rlwinm. r0, r0, 0, 24, 27
    beq lbl_fn_804DA4A4_000009C0
    li r0, 0x1
    b lbl_fn_804DA4A4_000009C4
lbl_fn_804DA4A4_000009C0:
    li r0, 0x0
lbl_fn_804DA4A4_000009C4:
    cmpwi r0, 0x0
    bne lbl_fn_804DA4A4_000009D4
lbl_fn_804DA4A4_000009CC:
    li r0, 0x0
    b lbl_fn_804DA4A4_000009EC
lbl_fn_804DA4A4_000009D4:
    lbz r0, 0xcc(r31)
    lbz r3, 0xcc(r5)
    clrlwi r0, r0, 28
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
lbl_fn_804DA4A4_000009EC:
    cmpwi r0, 0x0
    beq lbl_fn_804DA4A4_00000A74
    lwz r30, 0x0(r31)
    mr r3, r27
    bl fn_804DD3F4
    cmplw r30, r3
    beq lbl_fn_804DA4A4_00000A74
    cmpwi r28, 0x0
    beq lbl_fn_804DA4A4_00000A58
    bl fn_80680CF8
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    lwz r3, 0x0(r31)
    subf r0, r4, r0
    cntlzw r0, r0
    extrwi r0, r0, 1, 26
    neg r4, r0
    addi r4, r4, 0x27e6
    bl fn_8017ABD4
    lwz r4, 0x0(r31)
    li r6, 0x0
    lwz r3, lbl_8087EE68
    li r7, 0x0
    mr r5, r4
    bl fn_800183E0
    b lbl_fn_804DA4A4_00000A74
lbl_fn_804DA4A4_00000A58:
    mr r3, r30
    li r4, 0x0
    bl fn_8017ABD4
    lwz r3, lbl_8087EE68
    li r5, 0x0
    lwz r4, 0x0(r31)
    bl fn_80018608
lbl_fn_804DA4A4_00000A74:
    addi r29, r29, 0x1
    addi r26, r26, 0xd5c
lbl_fn_804DA4A4_00000A7C:
    lwz r0, 0x5e8(r27)
    cmpw r29, r0
    blt lbl_fn_804DA4A4_000008D0
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804DA694(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_000015B4
    lwz r0, lbl_8087F4F0
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_000015B4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00000B04
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000AF8
    li r0, 0x0
    b lbl_fn_804DA694_00000B20
lbl_fn_804DA694_00000AF8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00000B20
lbl_fn_804DA694_00000B04:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000B18
    li r3, 0x0
    b lbl_fn_804DA694_00000B1C
lbl_fn_804DA694_00000B18:
    bl fn_806A8E40
lbl_fn_804DA694_00000B1C:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00000B20:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA694_00000B68
lbl_fn_804DA694_00000B38:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_00000B60
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DA694_00000B60
    b lbl_fn_804DA694_00000B6C
lbl_fn_804DA694_00000B60:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00000B38
lbl_fn_804DA694_00000B68:
    li r5, 0x0
lbl_fn_804DA694_00000B6C:
    cmpwi r5, 0x0
    bne lbl_fn_804DA694_00000B78
    b lbl_fn_804DA694_000015B4
lbl_fn_804DA694_00000B78:
    mr r3, r30
    bl fn_804DF4BC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00000BB4
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000BA8
    li r0, 0x0
    b lbl_fn_804DA694_00000BD0
lbl_fn_804DA694_00000BA8:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00000BD0
lbl_fn_804DA694_00000BB4:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000BC8
    li r3, 0x0
    b lbl_fn_804DA694_00000BCC
lbl_fn_804DA694_00000BC8:
    bl fn_806A8E40
lbl_fn_804DA694_00000BCC:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00000BD0:
    lwz r4, 0x5e8(r30)
    clrlwi r5, r0, 24
    li r3, 0x0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_804DA694_00000C18
lbl_fn_804DA694_00000BE8:
    lwz r0, 0x5e4(r30)
    add r4, r0, r3
    lwz r0, 0xd0(r4)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_00000C10
    lbz r0, 0xcc(r4)
    cmplw r5, r0
    bne lbl_fn_804DA694_00000C10
    b lbl_fn_804DA694_00000C1C
lbl_fn_804DA694_00000C10:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00000BE8
lbl_fn_804DA694_00000C18:
    li r4, 0x0
lbl_fn_804DA694_00000C1C:
    mr r3, r30
    bl fn_804E4B48
    li r0, 0x0
    stw r0, 0x18(r1)
    mr r31, r3
    stw r0, 0x14(r1)
    lwz r29, 0x564(r30)
    cmpwi r29, 0x0
    blt lbl_fn_804DA694_00000C74
    bl OSGetTime
    lwz r6, 0x5bc(r30)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r30)
    lwz r29, 0x564(r30)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    subf r0, r4, r29
    b lbl_fn_804DA694_00000C78
lbl_fn_804DA694_00000C74:
    li r0, -0x1
lbl_fn_804DA694_00000C78:
    srwi r0, r0, 31
    xori r0, r0, 0x1
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_00000CDC
    cmpwi r29, 0x0
    blt lbl_fn_804DA694_00000CC4
    bl OSGetTime
    lwz r6, 0x5bc(r30)
    lis r5, 0x8000
    lwz r0, 0xf8(r5)
    li r5, 0x0
    subfc r4, r6, r4
    lwz r7, 0x5b8(r30)
    srwi r6, r0, 2
    subfe r3, r7, r3
    bl __div2i
    lwz r0, 0x564(r30)
    subf r0, r4, r0
    b lbl_fn_804DA694_00000CC8
lbl_fn_804DA694_00000CC4:
    li r0, -0x1
lbl_fn_804DA694_00000CC8:
    xori r0, r0, 0x3c
    srawi r3, r0, 1
    rlwinm r0, r0, 0, 26, 29
    subf r0, r0, r3
    srwi r0, r0, 31
lbl_fn_804DA694_00000CDC:
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00000DD0
    cmpwi r31, 0x0
    blt lbl_fn_804DA694_00000D20
    cmpwi r31, 0x2
    bge lbl_fn_804DA694_00000D20
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e79
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
lbl_fn_804DA694_00000D20:
    cmpwi r31, 0x2
    blt lbl_fn_804DA694_00000D60
    cmpwi r31, 0x4
    bge lbl_fn_804DA694_00000D60
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7a
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
    b lbl_fn_804DA694_00000EB8
lbl_fn_804DA694_00000D60:
    cmpwi r31, 0x4
    bne lbl_fn_804DA694_00000D98
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7b
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
    b lbl_fn_804DA694_00000EB8
lbl_fn_804DA694_00000D98:
    cmpwi r31, 0x5
    blt lbl_fn_804DA694_00000EB8
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7c
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
    b lbl_fn_804DA694_00000EB8
lbl_fn_804DA694_00000DD0:
    cmpwi r31, 0x0
    blt lbl_fn_804DA694_00000E0C
    cmpwi r31, 0x2
    bge lbl_fn_804DA694_00000E0C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7d
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
lbl_fn_804DA694_00000E0C:
    cmpwi r31, 0x2
    blt lbl_fn_804DA694_00000E4C
    cmpwi r31, 0x4
    bge lbl_fn_804DA694_00000E4C
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7e
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
    b lbl_fn_804DA694_00000EB8
lbl_fn_804DA694_00000E4C:
    cmpwi r31, 0x4
    bne lbl_fn_804DA694_00000E84
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e7f
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
    b lbl_fn_804DA694_00000EB8
lbl_fn_804DA694_00000E84:
    cmpwi r31, 0x5
    blt lbl_fn_804DA694_00000EB8
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r9, r1, 0x18
    addi r10, r1, 0x14
    lwz r3, lbl_8087F4F0
    li r4, 0x1e80
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x1
    bl fn_80444020
lbl_fn_804DA694_00000EB8:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_00000F10
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_00000F10
    lis r4, lbl_80759E48@ha
    lfs f1, lbl_80887590
    addi r4, r4, lbl_80759E48@l
    addi r3, r1, 0x10
    addi r4, r4, 0x18e
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    li r6, 0x1
    lwz r4, 0x18(r1)
    lwz r5, 0x14(r1)
    bl fn_803E5E64
lbl_fn_804DA694_00000F10:
    lwz r0, 0x540(r30)
    cmpwi r0, 0x1
    bne lbl_fn_804DA694_000015B4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00000F50
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000F44
    li r0, 0x0
    b lbl_fn_804DA694_00000F6C
lbl_fn_804DA694_00000F44:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00000F6C
lbl_fn_804DA694_00000F50:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00000F64
    li r3, 0x0
    b lbl_fn_804DA694_00000F68
lbl_fn_804DA694_00000F64:
    bl fn_806A8E40
lbl_fn_804DA694_00000F68:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00000F6C:
    lwz r6, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804DA694_00000FB4
lbl_fn_804DA694_00000F84:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_00000FAC
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DA694_00000FAC
    b lbl_fn_804DA694_00000FB8
lbl_fn_804DA694_00000FAC:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00000F84
lbl_fn_804DA694_00000FB4:
    li r5, 0x0
lbl_fn_804DA694_00000FB8:
    cmpwi r5, 0x0
    beq lbl_fn_804DA694_00000FCC
    lwz r0, 0xd0(r5)
    extrwi r5, r0, 4, 6
    b lbl_fn_804DA694_00000FD0
lbl_fn_804DA694_00000FCC:
    li r5, 0x3
lbl_fn_804DA694_00000FD0:
    li r31, 0x0
    li r3, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_804DA694_0000101C
lbl_fn_804DA694_00000FE4:
    lwz r0, 0x5e4(r30)
    add r6, r0, r3
    lwz r4, 0xd0(r6)
    srwi. r0, r4, 31
    beq lbl_fn_804DA694_00001014
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_00001014
    extrwi r0, r4, 4, 6
    cmplw r0, r5
    bne lbl_fn_804DA694_00001014
    addi r31, r31, 0x1
lbl_fn_804DA694_00001014:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00000FE4
lbl_fn_804DA694_0000101C:
    lwz r0, 0x540(r30)
    cmpwi r0, 0x1
    beq lbl_fn_804DA694_000010E0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_0000105C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001050
    li r3, 0x0
    b lbl_fn_804DA694_00001078
lbl_fn_804DA694_00001050:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804DA694_00001078
lbl_fn_804DA694_0000105C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001070
    li r3, 0x0
    b lbl_fn_804DA694_00001074
lbl_fn_804DA694_00001070:
    bl fn_806A8E40
lbl_fn_804DA694_00001074:
    clrlwi r3, r3, 24
lbl_fn_804DA694_00001078:
    lwz r0, 0x5e8(r30)
    clrlwi r5, r3, 24
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_000010C0
lbl_fn_804DA694_00001090:
    lwz r4, 0x5e4(r30)
    add r6, r4, r3
    lwz r4, 0xd0(r6)
    srwi r4, r4, 31
    cmplwi r4, 0x1
    bne lbl_fn_804DA694_000010B8
    lbz r4, 0xcc(r6)
    cmplw r5, r4
    bne lbl_fn_804DA694_000010B8
    b lbl_fn_804DA694_000010C4
lbl_fn_804DA694_000010B8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00001090
lbl_fn_804DA694_000010C0:
    li r6, 0x0
lbl_fn_804DA694_000010C4:
    cmpwi r6, 0x0
    beq lbl_fn_804DA694_000010D8
    lwz r3, 0xd0(r6)
    extrwi r8, r3, 4, 6
    b lbl_fn_804DA694_000011DC
lbl_fn_804DA694_000010D8:
    li r8, 0x3
    b lbl_fn_804DA694_000011DC
lbl_fn_804DA694_000010E0:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00001114
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001108
    li r3, 0x0
    b lbl_fn_804DA694_00001130
lbl_fn_804DA694_00001108:
    bl fn_806B0E30
    clrlwi r3, r3, 24
    b lbl_fn_804DA694_00001130
lbl_fn_804DA694_00001114:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001128
    li r3, 0x0
    b lbl_fn_804DA694_0000112C
lbl_fn_804DA694_00001128:
    bl fn_806A8E40
lbl_fn_804DA694_0000112C:
    clrlwi r3, r3, 24
lbl_fn_804DA694_00001130:
    lwz r0, 0x5e8(r30)
    clrlwi r5, r3, 24
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_00001178
lbl_fn_804DA694_00001148:
    lwz r4, 0x5e4(r30)
    add r7, r4, r3
    lwz r4, 0xd0(r7)
    srwi r4, r4, 31
    cmplwi r4, 0x1
    bne lbl_fn_804DA694_00001170
    lbz r4, 0xcc(r7)
    cmplw r5, r4
    bne lbl_fn_804DA694_00001170
    b lbl_fn_804DA694_0000117C
lbl_fn_804DA694_00001170:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00001148
lbl_fn_804DA694_00001178:
    li r7, 0x0
lbl_fn_804DA694_0000117C:
    cmpwi r7, 0x0
    beq lbl_fn_804DA694_000011D8
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_000011D8
lbl_fn_804DA694_00001194:
    lwz r4, 0x5e4(r30)
    add r6, r4, r3
    lwz r5, 0xd0(r6)
    srwi r4, r5, 31
    cmplwi r4, 0x1
    bne lbl_fn_804DA694_000011D0
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_804DA694_000011D0
    lwz r4, 0xd0(r7)
    extrwi r8, r5, 4, 6
    extrwi r4, r4, 4, 6
    cmplw r8, r4
    beq lbl_fn_804DA694_000011D0
    b lbl_fn_804DA694_000011DC
lbl_fn_804DA694_000011D0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00001194
lbl_fn_804DA694_000011D8:
    li r8, 0x3
lbl_fn_804DA694_000011DC:
    li r5, 0x0
    li r3, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DA694_00001228
lbl_fn_804DA694_000011F0:
    lwz r0, 0x5e4(r30)
    add r6, r0, r3
    lwz r4, 0xd0(r6)
    srwi. r0, r4, 31
    beq lbl_fn_804DA694_00001220
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_00001220
    extrwi r0, r4, 4, 6
    cmplw r0, r8
    bne lbl_fn_804DA694_00001220
    addi r5, r5, 0x1
lbl_fn_804DA694_00001220:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_000011F0
lbl_fn_804DA694_00001228:
    cmpw r31, r5
    bge lbl_fn_804DA694_000015B4
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00001264
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001258
    li r0, 0x0
    b lbl_fn_804DA694_00001280
lbl_fn_804DA694_00001258:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00001280
lbl_fn_804DA694_00001264:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001278
    li r3, 0x0
    b lbl_fn_804DA694_0000127C
lbl_fn_804DA694_00001278:
    bl fn_806A8E40
lbl_fn_804DA694_0000127C:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00001280:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA694_000012C8
lbl_fn_804DA694_00001298:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_000012C0
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DA694_000012C0
    b lbl_fn_804DA694_000012CC
lbl_fn_804DA694_000012C0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00001298
lbl_fn_804DA694_000012C8:
    li r5, 0x0
lbl_fn_804DA694_000012CC:
    cmpwi r5, 0x0
    beq lbl_fn_804DA694_000012E0
    lwz r0, 0xd0(r5)
    extrwi r31, r0, 4, 6
    b lbl_fn_804DA694_000012E4
lbl_fn_804DA694_000012E0:
    li r31, 0x3
lbl_fn_804DA694_000012E4:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r7, r30, 0x2b8c
    addi r4, r1, 0x28
    li r6, 0x0
    b lbl_fn_804DA694_00001324
lbl_fn_804DA694_00001304:
    lwz r3, 0xd0(r7)
    addi r6, r6, 0x1
    lwz r0, 0xdc(r7)
    addi r7, r7, 0xd5c
    rlwinm r5, r3, 12, 26, 29
    lwzx r3, r4, r5
    add r0, r3, r0
    stwx r0, r4, r5
lbl_fn_804DA694_00001324:
    lwz r0, 0x2b88(r30)
    cmplw r6, r0
    blt lbl_fn_804DA694_00001304
    lwz r0, 0x540(r30)
    slwi r4, r31, 2
    addi r3, r1, 0x28
    cmpwi r0, 0x1
    lwzx r31, r3, r4
    beq lbl_fn_804DA694_00001400
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_0000137C
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001370
    li r0, 0x0
    b lbl_fn_804DA694_00001398
lbl_fn_804DA694_00001370:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00001398
lbl_fn_804DA694_0000137C:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001390
    li r3, 0x0
    b lbl_fn_804DA694_00001394
lbl_fn_804DA694_00001390:
    bl fn_806A8E40
lbl_fn_804DA694_00001394:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00001398:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA694_000013E0
lbl_fn_804DA694_000013B0:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_000013D8
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DA694_000013D8
    b lbl_fn_804DA694_000013E4
lbl_fn_804DA694_000013D8:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_000013B0
lbl_fn_804DA694_000013E0:
    li r5, 0x0
lbl_fn_804DA694_000013E4:
    cmpwi r5, 0x0
    beq lbl_fn_804DA694_000013F8
    lwz r0, 0xd0(r5)
    extrwi r29, r0, 4, 6
    b lbl_fn_804DA694_000014FC
lbl_fn_804DA694_000013F8:
    li r29, 0x3
    b lbl_fn_804DA694_000014FC
lbl_fn_804DA694_00001400:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DA694_00001434
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001428
    li r0, 0x0
    b lbl_fn_804DA694_00001450
lbl_fn_804DA694_00001428:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DA694_00001450
lbl_fn_804DA694_00001434:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DA694_00001448
    li r3, 0x0
    b lbl_fn_804DA694_0000144C
lbl_fn_804DA694_00001448:
    bl fn_806A8E40
lbl_fn_804DA694_0000144C:
    clrlwi r0, r3, 24
lbl_fn_804DA694_00001450:
    lwz r5, 0x5e8(r30)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA694_00001498
lbl_fn_804DA694_00001468:
    lwz r0, 0x5e4(r30)
    add r6, r0, r3
    lwz r0, 0xd0(r6)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_00001490
    lbz r0, 0xcc(r6)
    cmplw r4, r0
    bne lbl_fn_804DA694_00001490
    b lbl_fn_804DA694_0000149C
lbl_fn_804DA694_00001490:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_00001468
lbl_fn_804DA694_00001498:
    li r6, 0x0
lbl_fn_804DA694_0000149C:
    cmpwi r6, 0x0
    beq lbl_fn_804DA694_000014F8
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DA694_000014F8
lbl_fn_804DA694_000014B4:
    lwz r0, 0x5e4(r30)
    add r5, r0, r3
    lwz r4, 0xd0(r5)
    srwi r0, r4, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DA694_000014F0
    lwz r0, 0x0(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804DA694_000014F0
    lwz r0, 0xd0(r6)
    extrwi r29, r4, 4, 6
    extrwi r0, r0, 4, 6
    cmplw r29, r0
    beq lbl_fn_804DA694_000014F0
    b lbl_fn_804DA694_000014FC
lbl_fn_804DA694_000014F0:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DA694_000014B4
lbl_fn_804DA694_000014F8:
    li r29, 0x3
lbl_fn_804DA694_000014FC:
    addi r3, r1, 0x1c
    li r4, 0x0
    li r5, 0xc
    bl memset
    addi r7, r30, 0x2b8c
    addi r4, r1, 0x1c
    li r6, 0x0
    b lbl_fn_804DA694_0000153C
lbl_fn_804DA694_0000151C:
    lwz r3, 0xd0(r7)
    addi r6, r6, 0x1
    lwz r0, 0xdc(r7)
    addi r7, r7, 0xd5c
    rlwinm r5, r3, 12, 26, 29
    lwzx r3, r4, r5
    add r0, r3, r0
    stwx r0, r4, r5
lbl_fn_804DA694_0000153C:
    lwz r0, 0x2b88(r30)
    cmplw r6, r0
    blt lbl_fn_804DA694_0000151C
    slwi r0, r29, 2
    addi r3, r1, 0x1c
    lwzx r0, r3, r0
    subf r0, r31, r0
    cmpwi r0, 0x28
    blt lbl_fn_804DA694_000015B4
    li r30, 0x0
    stw r30, 0x8(r1)
    li r4, 0x1c23
    li r5, 0x0
    lwz r3, lbl_8087F4F0
    li r6, -0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80444020
    stw r30, 0x8(r1)
    li r4, 0x1c26
    li r5, 0x0
    li r6, -0x1
    lwz r3, lbl_8087F4F0
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80444020
lbl_fn_804DA694_000015B4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_804DB1C8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r28, 0x30(r1)
    lwz r0, 0x50c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DB1C8_000017A0
    lwz r0, 0x5e8(r3)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804DB1C8_00001640
lbl_fn_804DB1C8_00001610:
    lwz r0, 0x5e4(r3)
    add r30, r0, r6
    lwz r0, 0xd0(r30)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DB1C8_00001638
    lwz r0, 0x0(r30)
    cmplw r0, r4
    bne lbl_fn_804DB1C8_00001638
    b lbl_fn_804DB1C8_00001644
lbl_fn_804DB1C8_00001638:
    addi r6, r6, 0xd5c
    bdnz lbl_fn_804DB1C8_00001610
lbl_fn_804DB1C8_00001640:
    li r30, 0x0
lbl_fn_804DB1C8_00001644:
    cmpwi r30, 0x0
    beq lbl_fn_804DB1C8_000017A0
    lwz r0, 0x0(r30)
    cmpwi r0, 0x0
    beq lbl_fn_804DB1C8_000017A0
    lwz r0, 0xdc(r30)
    addi r3, r30, 0xdc
    lwz r31, 0xdc(r30)
    add r4, r0, r5
    neg r0, r4
    andc r0, r0, r4
    srawi r0, r0, 31
    and r4, r4, r0
    bl fn_8050128C
    lwz r0, 0x540(r29)
    cmpwi r0, 0x2
    beq lbl_fn_804DB1C8_000017A0
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804DB1C8_000016BC
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DB1C8_000016B0
    li r0, 0x0
    b lbl_fn_804DB1C8_000016D8
lbl_fn_804DB1C8_000016B0:
    bl fn_806B0E30
    clrlwi r0, r3, 24
    b lbl_fn_804DB1C8_000016D8
lbl_fn_804DB1C8_000016BC:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804DB1C8_000016D0
    li r3, 0x0
    b lbl_fn_804DB1C8_000016D4
lbl_fn_804DB1C8_000016D0:
    bl fn_806A8E40
lbl_fn_804DB1C8_000016D4:
    clrlwi r0, r3, 24
lbl_fn_804DB1C8_000016D8:
    lwz r5, 0x5e8(r29)
    clrlwi r4, r0, 24
    li r3, 0x0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_804DB1C8_00001720
lbl_fn_804DB1C8_000016F0:
    lwz r0, 0x5e4(r29)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804DB1C8_00001718
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804DB1C8_00001718
    b lbl_fn_804DB1C8_00001724
lbl_fn_804DB1C8_00001718:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804DB1C8_000016F0
lbl_fn_804DB1C8_00001720:
    li r5, 0x0
lbl_fn_804DB1C8_00001724:
    cmplw r30, r5
    bne lbl_fn_804DB1C8_000017A0
    lwz r29, 0xdc(r30)
    cmpw r31, r29
    beq lbl_fn_804DB1C8_000017A0
    lwz r28, lbl_8087F8A8
    cmpwi r28, 0x0
    beq lbl_fn_804DB1C8_000017A0
    lwz r4, 0x0(r30)
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
    mr r3, r28
    addi r6, r1, 0x20
    subf r7, r31, r29
    stw r4, 0x10(r1)
    li r4, 0x8
    la r5, lbl_8087E1C4
    li r8, 0x0
    stw r0, 0x14(r1)
    li r9, 0x1
    li r10, 0x0
    stw r0, 0x18(r1)
    bl fn_8054D798
lbl_fn_804DB1C8_000017A0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_804DB3B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
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
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DB40C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x564(r3)
    stw r31, 0xc(r1)
    mr r31, r3
    cmpwi r0, 0x0
    blt lbl_fn_804DB40C_00001868
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
    subf r3, r4, r0
    b lbl_fn_804DB40C_0000186C
lbl_fn_804DB40C_00001868:
    li r3, -0x1
lbl_fn_804DB40C_0000186C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804DB478(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x124(r1)
    stmw r24, 0x100(r1)
    li r28, 0x0
    mr r29, r3
    lwz r5, lbl_8087F628
    stw r28, 0xe4(r5)
    addi r31, r5, 0x430
    stw r28, 0x108(r5)
    stw r28, 0x12c(r5)
    stw r28, 0x150(r5)
    stw r28, 0x174(r5)
    stw r28, 0x198(r5)
    stw r28, 0x1bc(r5)
    stw r28, 0x1e0(r5)
    lwz r26, 0x540(r3)
    mr r3, r31
    bl fn_8050F8B4
    stw r28, 0xd4(r1)
    mr r27, r3
    lwz r30, lbl_8087F628
    addi r25, r1, 0xd4
    stw r28, 0xd8(r1)
    stw r28, 0xdc(r1)
    bl strlen
    mr r24, r3
    mr r3, r25
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x54(r1)
    mr r3, r25
    stb r0, 0x50(r1)
    mr r6, r27
    add r7, r27, r24
    addi r8, r1, 0x50
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    li r0, 0x2
    stw r0, 0xe0(r1)
    stw r28, 0xe4(r1)
    stw r28, 0xe8(r1)
    stw r28, 0xec(r1)
    stw r26, 0xf0(r1)
    stw r28, 0xf4(r1)
    lwz r0, 0xd8(r30)
    srwi. r4, r0, 31
    bne lbl_fn_804DB478_0000196C
    lwz r3, 0xd4(r1)
    srwi. r0, r3, 31
    bne lbl_fn_804DB478_0000196C
    lwz r0, 0xd8(r1)
    stw r3, 0xd8(r30)
    stw r0, 0xdc(r30)
    lwz r0, 0xdc(r1)
    stw r0, 0xe0(r30)
    b lbl_fn_804DB478_000019C4
lbl_fn_804DB478_0000196C:
    cmpwi r4, 0x0
    beq lbl_fn_804DB478_0000197C
    lwz r5, 0xdc(r30)
    b lbl_fn_804DB478_00001984
lbl_fn_804DB478_0000197C:
    lbz r0, 0xd8(r30)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001984:
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_000019A0
    lbz r0, 0xd4(r1)
    addi r6, r1, 0xd5
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_000019A8
lbl_fn_804DB478_000019A0:
    lwz r6, 0xdc(r1)
    lwz r4, 0xd8(r1)
lbl_fn_804DB478_000019A8:
    lbz r0, 0x64(r1)
    add r7, r6, r4
    stb r0, 0x60(r1)
    addi r3, r30, 0xd8
    addi r8, r1, 0x60
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_000019C4:
    lwz r0, 0xe0(r1)
    addi r3, r30, 0xe8
    stw r0, 0xe4(r30)
    lwz r0, 0xe8(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001A00
    lwz r4, 0xe4(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001A00
    lwz r0, 0xe8(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xec(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001A54
lbl_fn_804DB478_00001A00:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001A10
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001A18
lbl_fn_804DB478_00001A10:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001A18:
    lwz r0, 0xe4(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001A34
    lbz r0, 0xe4(r1)
    addi r6, r1, 0xe5
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001A3C
lbl_fn_804DB478_00001A34:
    lwz r6, 0xec(r1)
    lwz r4, 0xe8(r1)
lbl_fn_804DB478_00001A3C:
    lbz r0, 0x5c(r1)
    add r7, r6, r4
    stb r0, 0x58(r1)
    addi r8, r1, 0x58
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001A54:
    lwz r0, 0xf0(r1)
    addi r26, r1, 0xd4
    stw r0, 0xf4(r30)
    addic. r0, r26, 0x10
    lwz r0, 0xf4(r1)
    stw r0, 0xf8(r30)
    beq lbl_fn_804DB478_00001A84
    lwz r0, 0xe4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001A84
    lwz r3, 0xec(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001A84:
    cmpwi r26, 0x0
    beq lbl_fn_804DB478_00001AA0
    lwz r0, 0xd4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001AA0
    lwz r3, 0xdc(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001AA0:
    lwz r26, 0x54c(r29)
    mr r3, r31
    li r4, 0x1
    bl fn_8050F8B4
    li r28, 0x0
    stw r28, 0xb0(r1)
    lwz r30, lbl_8087F628
    mr r25, r3
    stw r28, 0xb4(r1)
    addi r27, r1, 0xb0
    stw r28, 0xb8(r1)
    bl strlen
    mr r24, r3
    mr r3, r27
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x3c(r1)
    mr r3, r27
    stb r0, 0x38(r1)
    mr r6, r25
    add r7, r25, r24
    addi r8, r1, 0x38
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    li r0, 0x2
    stw r0, 0xbc(r1)
    addi r3, r30, 0xfc
    stw r28, 0xc0(r1)
    stw r28, 0xc4(r1)
    stw r28, 0xc8(r1)
    stw r26, 0xcc(r1)
    stw r28, 0xd0(r1)
    lwz r0, 0xfc(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001B54
    lwz r4, 0xb0(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001B54
    lwz r0, 0xb4(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xb8(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001BA8
lbl_fn_804DB478_00001B54:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001B64
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001B6C
lbl_fn_804DB478_00001B64:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001B6C:
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001B88
    lbz r0, 0xb0(r1)
    addi r6, r1, 0xb1
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001B90
lbl_fn_804DB478_00001B88:
    lwz r6, 0xb8(r1)
    lwz r4, 0xb4(r1)
lbl_fn_804DB478_00001B90:
    lbz r0, 0x4c(r1)
    add r7, r6, r4
    stb r0, 0x48(r1)
    addi r8, r1, 0x48
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001BA8:
    lwz r0, 0xbc(r1)
    addi r3, r30, 0x10c
    stw r0, 0x108(r30)
    lwz r0, 0x10c(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001BE4
    lwz r4, 0xc0(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001BE4
    lwz r0, 0xc4(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xc8(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001C38
lbl_fn_804DB478_00001BE4:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001BF4
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001BFC
lbl_fn_804DB478_00001BF4:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001BFC:
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001C18
    lbz r0, 0xc0(r1)
    addi r6, r1, 0xc1
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001C20
lbl_fn_804DB478_00001C18:
    lwz r6, 0xc8(r1)
    lwz r4, 0xc4(r1)
lbl_fn_804DB478_00001C20:
    lbz r0, 0x44(r1)
    add r7, r6, r4
    stb r0, 0x40(r1)
    addi r8, r1, 0x40
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001C38:
    lwz r0, 0xcc(r1)
    addi r25, r1, 0xb0
    stw r0, 0x118(r30)
    addic. r0, r25, 0x10
    lwz r0, 0xd0(r1)
    stw r0, 0x11c(r30)
    beq lbl_fn_804DB478_00001C68
    lwz r0, 0xc0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001C68
    lwz r3, 0xc8(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001C68:
    cmpwi r25, 0x0
    beq lbl_fn_804DB478_00001C84
    lwz r0, 0xb0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001C84
    lwz r3, 0xb8(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001C84:
    lwz r26, 0x550(r29)
    mr r3, r31
    li r4, 0x2
    bl fn_8050F8B4
    li r28, 0x0
    stw r28, 0x8c(r1)
    lwz r30, lbl_8087F628
    mr r25, r3
    stw r28, 0x90(r1)
    addi r27, r1, 0x8c
    stw r28, 0x94(r1)
    bl strlen
    mr r24, r3
    mr r3, r27
    mr r4, r24
    bl fn_80013DC4
    lbz r0, 0x24(r1)
    mr r3, r27
    stb r0, 0x20(r1)
    mr r6, r25
    add r7, r25, r24
    addi r8, r1, 0x20
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x98(r1)
    addi r3, r30, 0x120
    stw r28, 0x9c(r1)
    stw r28, 0xa0(r1)
    stw r28, 0xa4(r1)
    stw r26, 0xa8(r1)
    stw r0, 0xac(r1)
    lwz r0, 0x120(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001D3C
    lwz r4, 0x8c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001D3C
    lwz r0, 0x90(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x94(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001D90
lbl_fn_804DB478_00001D3C:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001D4C
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001D54
lbl_fn_804DB478_00001D4C:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001D54:
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001D70
    lbz r0, 0x8c(r1)
    addi r6, r1, 0x8d
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001D78
lbl_fn_804DB478_00001D70:
    lwz r6, 0x94(r1)
    lwz r4, 0x90(r1)
lbl_fn_804DB478_00001D78:
    lbz r0, 0x34(r1)
    add r7, r6, r4
    stb r0, 0x30(r1)
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001D90:
    lwz r0, 0x98(r1)
    addi r3, r30, 0x130
    stw r0, 0x12c(r30)
    lwz r0, 0x130(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001DCC
    lwz r4, 0x9c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001DCC
    lwz r0, 0xa0(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0xa4(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001E20
lbl_fn_804DB478_00001DCC:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001DDC
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001DE4
lbl_fn_804DB478_00001DDC:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001DE4:
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001E00
    lbz r0, 0x9c(r1)
    addi r6, r1, 0x9d
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001E08
lbl_fn_804DB478_00001E00:
    lwz r6, 0xa4(r1)
    lwz r4, 0xa0(r1)
lbl_fn_804DB478_00001E08:
    lbz r0, 0x2c(r1)
    add r7, r6, r4
    stb r0, 0x28(r1)
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001E20:
    lwz r0, 0xa8(r1)
    addi r25, r1, 0x8c
    stw r0, 0x13c(r30)
    addic. r0, r25, 0x10
    lwz r0, 0xac(r1)
    stw r0, 0x140(r30)
    beq lbl_fn_804DB478_00001E50
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001E50
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001E50:
    cmpwi r25, 0x0
    beq lbl_fn_804DB478_00001E6C
    lwz r0, 0x8c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00001E6C
    lwz r3, 0x94(r1)
    bl dtor_80084684
lbl_fn_804DB478_00001E6C:
    lwz r24, 0x1e8(r31)
    mr r3, r31
    li r4, 0x3
    bl fn_8050F8B4
    li r31, 0x0
    stw r31, 0x68(r1)
    lwz r30, lbl_8087F628
    mr r25, r3
    stw r31, 0x6c(r1)
    addi r26, r1, 0x68
    stw r31, 0x70(r1)
    bl strlen
    mr r27, r3
    mr r3, r26
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r26
    stb r0, 0x8(r1)
    mr r6, r25
    add r7, r25, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x74(r1)
    addi r3, r30, 0x144
    stw r31, 0x78(r1)
    stw r31, 0x7c(r1)
    stw r31, 0x80(r1)
    stw r24, 0x84(r1)
    stw r0, 0x88(r1)
    lwz r0, 0x144(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001F24
    lwz r4, 0x68(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001F24
    lwz r0, 0x6c(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x70(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00001F78
lbl_fn_804DB478_00001F24:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001F34
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001F3C
lbl_fn_804DB478_00001F34:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001F3C:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001F58
    lbz r0, 0x68(r1)
    addi r6, r1, 0x69
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001F60
lbl_fn_804DB478_00001F58:
    lwz r6, 0x70(r1)
    lwz r4, 0x6c(r1)
lbl_fn_804DB478_00001F60:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00001F78:
    lwz r0, 0x74(r1)
    addi r3, r30, 0x154
    stw r0, 0x150(r30)
    lwz r0, 0x154(r30)
    srwi. r5, r0, 31
    bne lbl_fn_804DB478_00001FB4
    lwz r4, 0x78(r1)
    srwi. r0, r4, 31
    bne lbl_fn_804DB478_00001FB4
    lwz r0, 0x7c(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x80(r1)
    stw r0, 0x8(r3)
    b lbl_fn_804DB478_00002008
lbl_fn_804DB478_00001FB4:
    cmpwi r5, 0x0
    beq lbl_fn_804DB478_00001FC4
    lwz r5, 0x4(r3)
    b lbl_fn_804DB478_00001FCC
lbl_fn_804DB478_00001FC4:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_804DB478_00001FCC:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    bne lbl_fn_804DB478_00001FE8
    lbz r0, 0x78(r1)
    addi r6, r1, 0x79
    clrlwi r4, r0, 25
    b lbl_fn_804DB478_00001FF0
lbl_fn_804DB478_00001FE8:
    lwz r6, 0x80(r1)
    lwz r4, 0x7c(r1)
lbl_fn_804DB478_00001FF0:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_804DB478_00002008:
    lwz r0, 0x84(r1)
    addi r25, r1, 0x68
    stw r0, 0x160(r30)
    addic. r0, r25, 0x10
    lwz r0, 0x88(r1)
    stw r0, 0x164(r30)
    beq lbl_fn_804DB478_00002038
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00002038
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_804DB478_00002038:
    cmpwi r25, 0x0
    beq lbl_fn_804DB478_00002054
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_804DB478_00002054
    lwz r3, 0x70(r1)
    bl dtor_80084684
lbl_fn_804DB478_00002054:
    lwz r3, lbl_8087F628
    li r6, 0x0
    li r5, 0x0
    bl fn_80509B24
    mr r24, r3
    addi r3, r29, 0x4fc
    li r4, 0xb
    bl fn_804FB224
    mr r3, r24
    lmw r24, 0x100(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
