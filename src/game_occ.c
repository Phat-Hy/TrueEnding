#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void DCFlushRange(void);
extern void DCInvalidateRange(void);
extern void __register_global_object(void);
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8006945C(void);
extern void fn_80071E04(void);
extern void fn_80075DEC(void);
extern void fn_80075F58(void);
extern void fn_800763FC(void);
extern void fn_800BDB58(void);
extern void fn_800BFB70(void);
extern void fn_800C0FBC(void);
extern void fn_800D5808(void);
extern void fn_800D6BE0(void);
extern void fn_800DC6B4(void);
extern void fn_80478198(void);
extern void fn_80613960(void);
extern void fn_80613BB0(void);
extern void fn_80613C60(void);
extern void fn_806140C0(void);
extern void fn_80614190(void);
extern void fn_80614CC0(void);
extern void fn_80614D30(void);
extern void fn_80615560(void);
extern void fn_80615D20(void);
extern void fn_80615E00(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_80616400(void);
extern void fn_806167B0(void);
extern void fn_80617200(void);
extern void fn_80617220(void);
extern void fn_806173E0(void);
extern void fn_80617420(void);
extern void fn_80617460(void);
extern void fn_806174C0(void);
extern void fn_806175F0(void);
extern void fn_80617650(void);
extern void fn_806176A0(void);
extern void fn_806176F0(void);
extern void fn_80617730(void);
extern void fn_80617880(void);
extern void fn_806179E0(void);
extern void fn_80617D50(void);
extern void fn_80617E00(void);

/* External data declarations */
extern u8 lbl_80734740[];
extern u8 lbl_80779758[];
extern u8 lbl_807C77E8[];
extern u8 lbl_807C77F4[];

/* Small data declarations */
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F000;
extern u32 lbl_80881208;
extern u32 lbl_8088120C;
extern u32 lbl_80881210;
extern u32 lbl_80881218;

/* Function declarations */
void fn_800D6E48(void);
void fn_800D71A4(void);
void fn_800D71D4(void);
void fn_800D7254(void);
void fn_800D7278(void);
void fn_800D775C(void);
void fn_800D7D00(void);
void fn_800D7F18(void);
void fn_800D8100(void);
void fn_800D8104(void);
void fn_800D810C(void);
void fn_800D814C(void);
void fn_800D818C(void);
void fn_800D81CC(void);
void fn_800D82BC(void);
void fn_800D8448(void);
void fn_800D8458(void);
void fn_800D8568(void);

asm void fn_800D6E48(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r7, 0x0
    stw r0, 0x54(r1)
    stmw r16, 0x10(r1)
    mr r24, r3
    mr r25, r4
    mr r26, r5
    clrlwi r3, r5, 16
    mr r27, r6
    clrlwi r4, r6, 16
    li r5, 0x6
    li r6, 0x0
    bl fn_80615E00
    mr r31, r3
    clrlwi r3, r26, 16
    clrlwi r4, r27, 16
    li r5, 0xe
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    lwz r4, lbl_8087EF8C
    li r0, 0x0
    lis r16, lbl_80734740@ha
    mr r30, r3
    stw r0, 0x54(r4)
    mr r4, r31
    addi r7, r16, lbl_80734740@l
    li r5, 0x20
    lwz r3, lbl_8087EF8C
    li r6, 0x6
    lwzu r12, 0x48(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r29, r3
    mr r4, r31
    bl DCInvalidateRange
    lwz r3, lbl_8087EF8C
    addi r6, r16, lbl_80734740@l
    lwzu r12, 0x48(r3)
    addi r7, r6, 0xf
    mr r4, r30
    li r5, 0x20
    lwz r12, 0xc(r12)
    li r6, 0x6
    mtctr r12
    bctrl
    mr r28, r3
    mr r4, r30
    bl DCInvalidateRange
    bl fn_806167B0
    mullw r4, r26, r27
    li r20, 0x0
    cmpwi cr1, r4, 0x0
    ble cr1, lbl_fn_800D6E48_000002E8
    cmpwi r4, 0x8
    subi r5, r4, 0x8
    ble lbl_fn_800D6E48_000002A4
    li r6, 0x0
    blt cr1, lbl_fn_800D6E48_00000108
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r4, r0
    bgt lbl_fn_800D6E48_00000108
    li r6, 0x1
lbl_fn_800D6E48_00000108:
    cmpwi r6, 0x0
    beq lbl_fn_800D6E48_000002A4
    addi r0, r5, 0x7
    li r19, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmpwi r5, 0x0
    ble lbl_fn_800D6E48_000002A4
lbl_fn_800D6E48_00000128:
    add r3, r24, r19
    addi r0, r20, 0x1
    lbzx r9, r24, r19
    slwi r7, r0, 2
    lbz r10, 0x2(r3)
    addi r0, r20, 0x2
    lbz r11, 0x3(r3)
    slwi r5, r0, 2
    lbz r3, 0x1(r3)
    add r8, r29, r19
    stbx r3, r29, r19
    addi r0, r20, 0x3
    slwi r6, r0, 2
    addi r3, r20, 0x5
    stb r10, 0x1(r8)
    addi r0, r20, 0x4
    slwi r10, r0, 2
    slwi r18, r3, 2
    stb r11, 0x2(r8)
    addi r0, r20, 0x6
    add r11, r24, r7
    addi r3, r20, 0x7
    stb r9, 0x3(r8)
    slwi r0, r0, 2
    add r23, r29, r7
    add r8, r24, r5
    lbzx r22, r24, r7
    add r12, r29, r5
    lbz r9, 0x2(r11)
    add r17, r24, r0
    lbz r21, 0x3(r11)
    add r16, r29, r0
    lbz r5, 0x1(r11)
    add r7, r24, r6
    stb r5, 0x0(r23)
    add r11, r29, r6
    add r6, r24, r10
    add r5, r24, r18
    stb r9, 0x1(r23)
    add r9, r29, r18
    slwi r3, r3, 2
    addi r19, r19, 0x20
    stb r21, 0x2(r23)
    add r18, r24, r3
    addi r20, r20, 0x8
    stb r22, 0x3(r23)
    lbz r21, 0x0(r8)
    lbz r22, 0x2(r8)
    lbz r23, 0x3(r8)
    lbz r0, 0x1(r8)
    stb r0, 0x0(r12)
    stb r22, 0x1(r12)
    stb r23, 0x2(r12)
    stb r21, 0x3(r12)
    lbz r8, 0x0(r7)
    lbz r12, 0x2(r7)
    lbz r21, 0x3(r7)
    lbz r0, 0x1(r7)
    stb r0, 0x0(r11)
    stb r12, 0x1(r11)
    stb r21, 0x2(r11)
    stb r8, 0x3(r11)
    lbzx r7, r24, r10
    lbz r8, 0x2(r6)
    lbz r11, 0x3(r6)
    lbz r0, 0x1(r6)
    stbux r0, r10, r29
    stb r8, 0x1(r10)
    stb r11, 0x2(r10)
    stb r7, 0x3(r10)
    lbz r6, 0x0(r5)
    lbz r7, 0x2(r5)
    lbz r8, 0x3(r5)
    lbz r0, 0x1(r5)
    stb r0, 0x0(r9)
    stb r7, 0x1(r9)
    stb r8, 0x2(r9)
    stb r6, 0x3(r9)
    lbz r5, 0x0(r17)
    lbz r6, 0x2(r17)
    lbz r7, 0x3(r17)
    lbz r0, 0x1(r17)
    stb r0, 0x0(r16)
    stb r6, 0x1(r16)
    stb r7, 0x2(r16)
    stb r5, 0x3(r16)
    lbzx r5, r24, r3
    lbz r6, 0x2(r18)
    lbz r7, 0x3(r18)
    lbz r0, 0x1(r18)
    stbux r0, r3, r29
    stb r6, 0x1(r3)
    stb r7, 0x2(r3)
    stb r5, 0x3(r3)
    bdnz lbl_fn_800D6E48_00000128
lbl_fn_800D6E48_000002A4:
    subf r0, r20, r4
    slwi r3, r20, 2
    mtctr r0
    cmpw r20, r4
    bge lbl_fn_800D6E48_000002E8
lbl_fn_800D6E48_000002B8:
    add r4, r24, r3
    lbzx r6, r24, r3
    lbz r7, 0x2(r4)
    add r5, r29, r3
    lbz r8, 0x3(r4)
    lbz r0, 0x1(r4)
    stbx r0, r29, r3
    addi r3, r3, 0x4
    stb r7, 0x1(r5)
    stb r8, 0x2(r5)
    stb r6, 0x3(r5)
    bdnz lbl_fn_800D6E48_000002B8
lbl_fn_800D6E48_000002E8:
    mr r3, r29
    mr r4, r26
    mr r5, r27
    mr r6, r28
    bl fn_8006945C
    mr r3, r29
    mr r5, r31
    li r4, 0x0
    bl memset
    mr r3, r25
    mr r4, r28
    mr r5, r26
    mr r6, r27
    bl fn_800D6BE0
    mr r3, r28
    mr r5, r30
    li r4, 0x0
    bl memset
    lwz r5, lbl_8087EF8C
    li r0, 0x0
    mr r3, r25
    mr r4, r30
    stw r0, 0x54(r5)
    bl DCFlushRange
    lmw r16, 0x10(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800D71A4(void)
{
    nofralloc
    lis r5, lbl_80779758@ha
    li r0, 0x0
    addi r5, r5, lbl_80779758@l
    li r4, 0x1
    stw r5, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    blr
}

asm void fn_800D71D4(void)
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
    beq lbl_fn_800D71D4_000003F0
    addic. r4, r3, 0x14
    beq lbl_fn_800D71D4_000003E0
    beq lbl_fn_800D71D4_000003E0
    beq lbl_fn_800D71D4_000003E0
    beq lbl_fn_800D71D4_000003E0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800D71D4_000003E0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800D71D4_000003E0:
    cmpwi r31, 0x0
    ble lbl_fn_800D71D4_000003F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800D71D4_000003F0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D7254(void)
{
    nofralloc
    stw r5, 0x8(r3)
    li r0, 0x0
    lfs f1, lbl_80881208
    li r5, 0x1
    stw r4, 0xc(r3)
    mr r4, r3
    stw r0, 0x4(r3)
    lwz r3, lbl_8087EFB4
    b fn_800BDB58
}

asm void fn_800D7278(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r14, 0x48(r1)
    mr r15, r3
    mr r14, r4
    lwz r3, lbl_8087EEE0
    bl fn_80071E04
    lwz r3, 0xc(r15)
    lwz r0, 0x28(r3)
    lwz r25, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800D7278_00000470
    lbz r31, 0x2f(r3)
    extsb r31, r31
    b lbl_fn_800D7278_0000047C
lbl_fn_800D7278_00000470:
    addi r3, r3, 0x20
    bl fn_80478198
    mr r31, r3
lbl_fn_800D7278_0000047C:
    lwz r3, 0xc(r15)
    bl fn_806163C0
    clrlwi r24, r3, 16
    lwz r3, 0xc(r15)
    bl fn_806163E0
    lwz r26, 0x8(r15)
    mr r22, r25
    clrlwi r23, r3, 16
    cmpwi r26, -0x1
    bne lbl_fn_800D7278_000004A8
    li r26, 0x6
lbl_fn_800D7278_000004A8:
    lwz r3, 0xc(r15)
    bl fn_80616400
    mr r21, r3
    lwz r3, 0xc(r15)
    bl fn_80616400
    subf r0, r26, r3
    cmpwi r26, 0x20
    cntlzw r0, r0
    srwi r20, r0, 5
    bne lbl_fn_800D7278_000004E8
    lwz r3, 0xc(r15)
    bl fn_80616400
    cmpwi r3, 0x0
    bne lbl_fn_800D7278_000004E8
    li r20, 0x1
    b lbl_fn_800D7278_00000504
lbl_fn_800D7278_000004E8:
    cmpwi r26, 0x28
    bne lbl_fn_800D7278_00000504
    lwz r3, 0xc(r15)
    bl fn_80616400
    cmpwi r3, 0x1
    bne lbl_fn_800D7278_00000504
    li r20, 0x1
lbl_fn_800D7278_00000504:
    lwz r4, lbl_8087EEE0
    li r5, 0x13
    lwz r19, 0x79c(r14)
    li r6, 0x0
    lwz r3, 0x3c(r4)
    li r7, 0x0
    lwz r0, 0x40(r4)
    clrlwi r3, r3, 16
    clrlwi r4, r0, 16
    bl fn_80615E00
    mr r18, r3
    mr r3, r19
    mr r5, r18
    li r4, 0x0
    bl memset
    mr r3, r19
    mr r4, r18
    bl DCInvalidateRange
    addi r30, r1, 0x8
    li r17, 0x0
    b lbl_fn_800D7278_000006CC
lbl_fn_800D7278_00000558:
    cmpwi r20, 0x0
    bne lbl_fn_800D7278_000005A4
    clrlwi r3, r24, 16
    clrlwi r4, r23, 16
    li r21, 0x6
    li r5, 0x6
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    addi r0, r3, 0x1f
    stw r19, 0x0(r30)
    srawi r0, r0, 5
    mr r22, r19
    addze r0, r0
    mr r4, r3
    slwi r0, r0, 5
    mr r3, r22
    add r19, r19, r0
    bl DCInvalidateRange
lbl_fn_800D7278_000005A4:
    slwi r28, r23, 1
    slwi r27, r24, 1
    li r16, 0x0
    li r29, 0x0
    b lbl_fn_800D7278_0000061C
lbl_fn_800D7278_000005B8:
    bl fn_806167B0
    bl fn_80614190
    cmpwi r17, 0x0
    bne lbl_fn_800D7278_000005E4
    lwz r3, lbl_8087EEE0
    mr r6, r24
    mr r7, r23
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
    b lbl_fn_800D7278_000005FC
lbl_fn_800D7278_000005E4:
    lwz r3, lbl_8087EEE0
    mr r6, r27
    mr r7, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_80075F58
lbl_fn_800D7278_000005FC:
    lwz r3, 0x14(r15)
    lwzx r3, r3, r29
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x4
    addi r16, r16, 0x1
lbl_fn_800D7278_0000061C:
    lwz r0, 0x18(r15)
    cmplw r16, r0
    blt lbl_fn_800D7278_000005B8
    cmpwi r17, 0x0
    bne lbl_fn_800D7278_0000065C
    clrlwi r5, r24, 16
    clrlwi r6, r23, 16
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r26
    clrlwi r3, r24, 16
    clrlwi r4, r23, 16
    li r6, 0x0
    bl fn_80614D30
    b lbl_fn_800D7278_00000684
lbl_fn_800D7278_0000065C:
    clrlslwi r5, r24, 17, 1
    clrlslwi r6, r23, 17, 1
    li r3, 0x0
    li r4, 0x0
    bl fn_80614CC0
    mr r5, r26
    clrlwi r3, r24, 16
    clrlwi r4, r23, 16
    li r6, 0x1
    bl fn_80614D30
lbl_fn_800D7278_00000684:
    mr r3, r22
    li r4, 0x1
    bl fn_80615560
    bl fn_806167B0
    bl fn_80614190
    bl fn_80613C60
    bl fn_806140C0
    mr r5, r21
    clrlwi r3, r24, 16
    clrlwi r4, r23, 16
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    srawi r24, r24, 1
    add r22, r22, r3
    srawi r23, r23, 1
    addi r30, r30, 0x4
    addi r17, r17, 0x1
lbl_fn_800D7278_000006CC:
    cmpw r17, r31
    blt lbl_fn_800D7278_00000558
    cmpwi r20, 0x0
    bne lbl_fn_800D7278_00000884
    lwz r3, 0xc(r15)
    bl fn_806163C0
    clrlwi r20, r3, 16
    lwz r3, 0xc(r15)
    bl fn_806163E0
    clrlwi r22, r3, 16
    addi r17, r1, 0x8
    li r23, 0x0
    li r24, 0x0
    b lbl_fn_800D7278_0000087C
lbl_fn_800D7278_00000704:
    lwz r19, 0x0(r17)
    mr r5, r21
    clrlwi r3, r20, 16
    clrlwi r4, r22, 16
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    lwz r3, 0xc(r15)
    bl fn_80616400
    mr r5, r3
    clrlwi r3, r20, 16
    clrlwi r4, r22, 16
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    mr r16, r3
    mr r3, r19
    mr r5, r20
    mr r6, r22
    li r4, 0x6
    bl fn_800C0FBC
    lwz r3, 0x10(r15)
    cmpwi r3, 0x0
    beq lbl_fn_800D7278_00000854
    bl fn_806163C0
    clrlwi r0, r3, 16
    lwz r3, 0x10(r15)
    sraw r26, r0, r24
    bl fn_806163E0
    clrlwi r0, r3, 16
    lwz r3, 0x10(r15)
    sraw r28, r0, r24
    bl fn_80616400
    mr r5, r3
    clrlwi r3, r26, 16
    clrlwi r4, r28, 16
    li r6, 0x0
    li r7, 0x0
    bl fn_80615E00
    lwz r4, 0x10(r15)
    lwz r27, 0x28(r4)
    add r27, r27, r23
    add r23, r23, r3
    mr r3, r4
    bl fn_80616400
    mr r4, r3
    mr r3, r27
    mr r5, r26
    mr r6, r28
    bl fn_800C0FBC
    srwi r0, r26, 31
    slwi r9, r20, 2
    add r0, r0, r26
    li r11, 0x0
    srawi r10, r0, 1
    li r5, 0x0
    li r6, 0x0
    b lbl_fn_800D7278_0000084C
lbl_fn_800D7278_000007EC:
    add r8, r27, r6
    add r3, r19, r5
    li r12, 0x0
    li r7, 0x0
    mtctr r20
    cmpwi r20, 0x0
    ble lbl_fn_800D7278_00000840
lbl_fn_800D7278_00000808:
    clrlwi. r0, r12, 31
    srwi r4, r12, 31
    add r0, r4, r12
    srawi r0, r0, 1
    lbzx r0, r8, r0
    bne lbl_fn_800D7278_00000824
    srawi r0, r0, 4
lbl_fn_800D7278_00000824:
    clrlwi r0, r0, 28
    addi r7, r7, 0x4
    rlwimi r0, r0, 4, 24, 27
    stb r0, 0x0(r3)
    addi r3, r3, 0x4
    addi r12, r12, 0x1
    bdnz lbl_fn_800D7278_00000808
lbl_fn_800D7278_00000840:
    add r5, r5, r9
    add r6, r6, r10
    addi r11, r11, 0x1
lbl_fn_800D7278_0000084C:
    cmpw r11, r22
    blt lbl_fn_800D7278_000007EC
lbl_fn_800D7278_00000854:
    mr r3, r19
    mr r4, r25
    mr r5, r20
    mr r6, r22
    bl fn_800D6E48
    srawi r20, r20, 1
    add r25, r25, r16
    srawi r22, r22, 1
    addi r17, r17, 0x4
    addi r24, r24, 0x1
lbl_fn_800D7278_0000087C:
    cmpw r24, r31
    blt lbl_fn_800D7278_00000704
lbl_fn_800D7278_00000884:
    lwz r3, 0x79c(r14)
    mr r5, r18
    li r4, 0x0
    bl memset
    lwz r3, 0x79c(r14)
    mr r4, r18
    bl DCFlushRange
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    li r16, 0x0
    li r14, 0x0
    b lbl_fn_800D7278_000008E0
lbl_fn_800D7278_000008B4:
    lwz r3, 0x14(r15)
    lwzx r3, r3, r14
    cmpwi r3, 0x0
    beq lbl_fn_800D7278_000008D8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_800D7278_000008D8:
    addi r14, r14, 0x4
    addi r16, r16, 0x1
lbl_fn_800D7278_000008E0:
    lwz r0, 0x18(r15)
    cmplw r16, r0
    blt lbl_fn_800D7278_000008B4
    lwz r3, 0x18(r15)
    li r0, 0x1
    stw r0, 0x4(r15)
    subf r0, r3, r3
    stw r0, 0x18(r15)
    lmw r14, 0x48(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_800D775C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r3
    li r3, 0x3
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x5
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x8(r31)
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r3, lbl_8087EEE0
    li r5, 0x1
    lwz r4, 0x4(r31)
    bl fn_800763FC
    li r3, 0x1
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lwz r3, lbl_8087EEE0
    li r5, 0x2
    lwz r4, 0xc(r31)
    bl fn_800763FC
    li r3, 0x2
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f1, 0x1c(r31)
    addi r4, r1, 0x14
    lfs f3, lbl_80881210
    li r3, 0x0
    lfs f0, 0x18(r31)
    fmuls f4, f1, f3
    lfs f2, 0x14(r31)
    fmuls f5, f0, f3
    lfs f1, 0x10(r31)
    fmuls f2, f2, f3
    lfs f0, lbl_8088120C
    fmuls f6, f1, f3
    stfs f2, 0x1c(r1)
    fmuls f1, f0, f5
    fmuls f2, f0, f2
    stfs f6, 0x18(r1)
    fmuls f3, f0, f6
    fmuls f0, f0, f4
    stfs f5, 0x20(r1)
    fctiwz f2, f2
    fctiwz f3, f3
    stfs f4, 0x24(r1)
    fctiwz f1, f1
    fctiwz f0, f0
    stfd f2, 0x30(r1)
    stfd f3, 0x28(r1)
    lwz r6, 0x34(r1)
    stfd f1, 0x38(r1)
    lwz r7, 0x2c(r1)
    stfd f0, 0x40(r1)
    lwz r5, 0x3c(r1)
    lwz r0, 0x44(r1)
    stb r7, 0xc(r1)
    stb r6, 0xd(r1)
    stb r5, 0xe(r1)
    stb r0, 0xf(r1)
    lwz r0, 0xc(r1)
    stw r0, 0x14(r1)
    bl fn_806175F0
    lfs f4, lbl_8088120C
    addi r4, r1, 0x10
    lfs f0, 0x20(r31)
    li r3, 0x1
    lfs f2, 0x24(r31)
    fmuls f3, f4, f0
    lfs f1, 0x28(r31)
    lfs f0, 0x2c(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x48(r1)
    fctiwz f0, f0
    stfd f2, 0x50(r1)
    lwz r7, 0x4c(r1)
    stfd f1, 0x58(r1)
    lwz r6, 0x54(r1)
    stfd f0, 0x60(r1)
    lwz r5, 0x5c(r1)
    lwz r0, 0x64(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0x10(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    bl fn_80617730
    li r3, 0x2
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl fn_80617730
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0x2
    li r7, 0x2
    bl fn_80617730
    li r3, 0x0
    li r4, 0x1
    li r5, 0x1
    bl fn_806176F0
    li r3, 0x0
    li r4, 0x11
    bl fn_80617650
    li r3, 0x0
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x11
    bl fn_806176A0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x7
    li r5, 0x6
    li r6, 0x4
    li r7, 0x7
    bl fn_80617420
    li r3, 0x1
    li r4, 0x2
    li r5, 0x2
    bl fn_806176F0
    li r3, 0x1
    li r4, 0x15
    bl fn_80617650
    li r3, 0x1
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x1
    bl fn_80617220
    li r3, 0x1
    li r4, 0x15
    bl fn_806176A0
    li r3, 0x1
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x1
    li r4, 0x7
    li r5, 0x6
    li r6, 0x4
    li r7, 0x0
    bl fn_80617420
    li r3, 0x2
    li r4, 0x3
    li r5, 0x3
    bl fn_806176F0
    li r3, 0x2
    li r4, 0x19
    bl fn_80617650
    li r3, 0x2
    li r4, 0xf
    li r5, 0xe
    li r6, 0x8
    li r7, 0x0
    bl fn_806173E0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x2
    bl fn_80617220
    li r3, 0x2
    li r4, 0x19
    bl fn_806176A0
    li r3, 0x2
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x2
    li r4, 0x7
    li r5, 0x6
    li r6, 0x4
    li r7, 0x0
    bl fn_80617420
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x3
    li r4, 0xf
    li r5, 0x8
    li r6, 0x0
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x3
    li r4, 0x2
    li r5, 0x2
    li r6, 0xff
    bl fn_80617880
    li r3, 0x3
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x3
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    li r3, 0x3
    bl fn_80617220
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x4
    li r4, 0xc
    bl fn_80617650
    li r3, 0x4
    li r4, 0xf
    li r5, 0xe
    li r6, 0x0
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x2
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x4
    li r4, 0xff
    li r5, 0xff
    li r6, 0xff
    bl fn_80617880
    li r3, 0x4
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x4
    li r4, 0x7
    li r5, 0x7
    li r6, 0x7
    li r7, 0x0
    bl fn_80617420
    li r3, 0x4
    bl fn_80617220
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x1
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800D7D00(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x1
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x2
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    li r3, 0x3
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x4(r31)
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f4, lbl_8088120C
    addi r4, r1, 0xc
    lfs f0, 0x8(r31)
    li r3, 0x0
    lfs f2, 0xc(r31)
    fmuls f3, f4, f0
    lfs f1, 0x10(r31)
    lfs f0, 0x14(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x10(r1)
    fctiwz f0, f0
    stfd f2, 0x18(r1)
    lwz r7, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r6, 0x1c(r1)
    stfd f0, 0x28(r1)
    lwz r5, 0x24(r1)
    lwz r0, 0x2c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D7F18(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    li r3, 0x1
    bl fn_80613BB0
    li r3, 0x0
    bl fn_80615D20
    li r3, 0x1
    bl fn_806179E0
    li r3, 0x0
    bl fn_80617200
    li r3, 0x0
    li r4, 0x3
    li r5, 0x3
    li r6, 0x3
    li r7, 0x3
    bl fn_80617730
    lwz r3, lbl_8087EEE0
    li r5, 0x0
    lwz r4, 0x4(r31)
    bl fn_800763FC
    li r3, 0x0
    li r4, 0x1
    li r5, 0x4
    li r6, 0x3c
    li r7, 0x0
    li r8, 0x7d
    bl fn_80613960
    lfs f4, lbl_8088120C
    addi r4, r1, 0xc
    lfs f0, 0x8(r31)
    li r3, 0x0
    lfs f2, 0xc(r31)
    fmuls f3, f4, f0
    lfs f1, 0x10(r31)
    lfs f0, 0x14(r31)
    fmuls f2, f4, f2
    fmuls f1, f4, f1
    fmuls f0, f4, f0
    fctiwz f3, f3
    fctiwz f2, f2
    fctiwz f1, f1
    stfd f3, 0x10(r1)
    fctiwz f0, f0
    stfd f2, 0x18(r1)
    lwz r7, 0x14(r1)
    stfd f1, 0x20(r1)
    lwz r6, 0x1c(r1)
    stfd f0, 0x28(r1)
    lwz r5, 0x24(r1)
    lwz r0, 0x2c(r1)
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    lwz r0, 0x8(r1)
    stw r0, 0xc(r1)
    bl fn_806175F0
    li r3, 0x0
    li r4, 0xc
    bl fn_80617650
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_806176F0
    li r3, 0x0
    li r4, 0xf
    li r5, 0x8
    li r6, 0xe
    li r7, 0xf
    bl fn_806173E0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_80617460
    li r3, 0x0
    li r4, 0x7
    li r5, 0x4
    li r6, 0x6
    li r7, 0x7
    bl fn_80617420
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r7, 0x1
    li r8, 0x0
    bl fn_806174C0
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0xff
    bl fn_80617880
    li r3, 0x0
    bl fn_80617220
    li r3, 0x0
    li r4, 0x3
    li r5, 0x0
    bl fn_80617E00
    li r3, 0x0
    li r4, 0x4
    li r5, 0x5
    li r6, 0x3
    bl fn_80617D50
    lwz r3, lbl_8087EFB4
    bl fn_800BFB70
    li r3, 0x0
    li r4, 0x0
    li r5, 0x1
    li r6, 0x2
    li r7, 0x3
    bl fn_80617730
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800D8100(void)
{
    nofralloc
    blr
}

asm void fn_800D8104(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800D810C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D810C_000012EC
    cmpwi r4, 0x0
    ble lbl_fn_800D810C_000012EC
    bl dtor_80084684
lbl_fn_800D810C_000012EC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D814C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D814C_0000132C
    cmpwi r4, 0x0
    ble lbl_fn_800D814C_0000132C
    bl dtor_80084684
lbl_fn_800D814C_0000132C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D818C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D818C_0000136C
    cmpwi r4, 0x0
    ble lbl_fn_800D818C_0000136C
    bl dtor_80084684
lbl_fn_800D818C_0000136C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D81CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r3, r4
    mr r28, r5
    mr r29, r6
    bl fn_800DC6B4
    stw r3, 0x0(r27)
    mr r31, r27
    li r30, 0x0
    stw r29, 0x4(r27)
    b lbl_fn_800D81CC_00001450
lbl_fn_800D81CC_000013C0:
    lwz r3, 0x0(r28)
    bl fn_800DC6B4
    stw r3, 0x8(r31)
    addi r30, r30, 0x1
    lfs f0, 0x4(r28)
    stfs f0, 0xc(r31)
    lfs f0, 0x8(r28)
    stfs f0, 0x10(r31)
    lfs f0, 0xc(r28)
    stfs f0, 0x14(r31)
    lfs f0, 0x10(r28)
    stfs f0, 0x18(r31)
    lwz r0, 0x34(r28)
    stw r0, 0x3c(r31)
    lfs f0, 0x14(r28)
    stfs f0, 0x1c(r31)
    lfs f0, 0x18(r28)
    stfs f0, 0x20(r31)
    lfs f0, 0x1c(r28)
    stfs f0, 0x24(r31)
    lfs f0, 0x20(r28)
    stfs f0, 0x28(r31)
    lwz r0, 0x38(r28)
    stw r0, 0x40(r31)
    lfs f0, 0x24(r28)
    stfs f0, 0x2c(r31)
    lfs f0, 0x28(r28)
    stfs f0, 0x30(r31)
    lfs f0, 0x2c(r28)
    stfs f0, 0x34(r31)
    lfs f0, 0x30(r28)
    lwz r0, 0x3c(r28)
    addi r28, r28, 0x40
    stfs f0, 0x38(r31)
    stw r0, 0x44(r31)
    addi r31, r31, 0x40
lbl_fn_800D81CC_00001450:
    cmpw r30, r29
    blt lbl_fn_800D81CC_000013C0
    addi r11, r1, 0x20
    mr r3, r27
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D82BC(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    lwz r0, 0x0(r4)
    stwu r1, -0x10(r1)
    cmplw r5, r0
    stw r31, 0xc(r1)
    bne lbl_fn_800D82BC_000015F0
    lwz r7, 0x4(r3)
    lwz r0, 0x4(r4)
    cmpw r7, r0
    bne lbl_fn_800D82BC_000015F0
    lfs f2, lbl_80881218
    li r12, 0x1
    li r31, 0x0
    li r0, 0x3
    b lbl_fn_800D82BC_000015E0
lbl_fn_800D82BC_000014B0:
    cmpwi r12, 0x0
    li r12, 0x0
    beq lbl_fn_800D82BC_000014D0
    lwz r6, 0x8(r3)
    lwz r5, 0x8(r4)
    cmplw r6, r5
    bne lbl_fn_800D82BC_000014D0
    li r12, 0x1
lbl_fn_800D82BC_000014D0:
    mr r8, r4
    mr r9, r3
    mr r10, r4
    mr r11, r3
    mtctr r0
lbl_fn_800D82BC_000014E4:
    cmpwi r12, 0x0
    li r12, 0x0
    beq lbl_fn_800D82BC_00001504
    lwz r6, 0x3c(r9)
    lwz r5, 0x3c(r8)
    cmpw r6, r5
    bne lbl_fn_800D82BC_00001504
    li r12, 0x1
lbl_fn_800D82BC_00001504:
    lwz r5, 0x3c(r8)
    cmpwi r5, 0x0
    beq lbl_fn_800D82BC_000015C0
    cmpwi r12, 0x0
    li r5, 0x0
    beq lbl_fn_800D82BC_0000153C
    lfs f1, 0xc(r11)
    lfs f0, 0xc(r10)
    fsubs f0, f1, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f2
    bge lbl_fn_800D82BC_0000153C
    li r5, 0x1
lbl_fn_800D82BC_0000153C:
    cmpwi r5, 0x0
    li r5, 0x0
    beq lbl_fn_800D82BC_00001568
    lfs f1, 0x10(r11)
    lfs f0, 0x10(r10)
    fsubs f0, f1, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f2
    bge lbl_fn_800D82BC_00001568
    li r5, 0x1
lbl_fn_800D82BC_00001568:
    cmpwi r5, 0x0
    li r5, 0x0
    beq lbl_fn_800D82BC_00001594
    lfs f1, 0x14(r11)
    lfs f0, 0x14(r10)
    fsubs f0, f1, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f2
    bge lbl_fn_800D82BC_00001594
    li r5, 0x1
lbl_fn_800D82BC_00001594:
    cmpwi r5, 0x0
    li r12, 0x0
    beq lbl_fn_800D82BC_000015C0
    lfs f1, 0x18(r11)
    lfs f0, 0x18(r10)
    fsubs f0, f1, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f2
    bge lbl_fn_800D82BC_000015C0
    li r12, 0x1
lbl_fn_800D82BC_000015C0:
    addi r8, r8, 0x4
    addi r9, r9, 0x4
    addi r10, r10, 0x10
    addi r11, r11, 0x10
    bdnz lbl_fn_800D82BC_000014E4
    addi r4, r4, 0x40
    addi r3, r3, 0x40
    addi r31, r31, 0x1
lbl_fn_800D82BC_000015E0:
    cmpw r31, r7
    blt lbl_fn_800D82BC_000014B0
    mr r3, r12
    b lbl_fn_800D82BC_000015F4
lbl_fn_800D82BC_000015F0:
    li r3, 0x0
lbl_fn_800D82BC_000015F4:
    lwz r31, 0xc(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_800D8448(void)
{
    nofralloc
    lwz r4, 0x0(r3)
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    blr
}

asm void fn_800D8458(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x0(r3)
    subic. r0, r0, 0x1
    stw r0, 0x0(r3)
    bne lbl_fn_800D8458_00001700
    lbz r0, lbl_8087F000
    extsb. r0, r0
    bne lbl_fn_800D8458_00001680
    lis r3, lbl_807C77F4@ha
    lis r4, fn_800D8568@ha
    addi r3, r3, lbl_807C77F4@l
    li r0, 0x0
    addi r6, r3, 0x4
    lis r5, lbl_807C77E8@ha
    stw r0, 0x0(r3)
    addi r4, r4, fn_800D8568@l
    addi r5, r5, lbl_807C77E8@l
    stw r6, 0x4(r6)
    stw r6, 0x0(r6)
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087F000
lbl_fn_800D8458_00001680:
    lis r29, lbl_807C77F4@ha
    addi r29, r29, lbl_807C77F4@l
    lwz r30, 0x8(r29)
    addi r31, r29, 0x4
    b lbl_fn_800D8458_000016F8
lbl_fn_800D8458_00001694:
    lwz r28, 0x8(r30)
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_800D8458_000016F4
    cmpwi r28, 0x0
    beq lbl_fn_800D8458_000016C0
    addi r3, r28, 0x18c
    li r4, -0x1
    bl fn_800D5808
    mr r3, r28
    bl dtor_80084684
lbl_fn_800D8458_000016C0:
    lwz r4, 0x0(r30)
    mr r3, r30
    lwz r28, 0x4(r30)
    stw r28, 0x4(r4)
    lwz r4, 0x4(r30)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r4)
    bl dtor_80084684
    lwz r3, 0x0(r29)
    mr r30, r28
    subi r0, r3, 0x1
    stw r0, 0x0(r29)
    b lbl_fn_800D8458_000016F8
lbl_fn_800D8458_000016F4:
    lwz r30, 0x4(r30)
lbl_fn_800D8458_000016F8:
    cmplw r30, r31
    bne lbl_fn_800D8458_00001694
lbl_fn_800D8458_00001700:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D8568(void)
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
    beq lbl_fn_800D8568_000017B8
    beq lbl_fn_800D8568_000017A8
    beq lbl_fn_800D8568_000017A8
    beq lbl_fn_800D8568_000017A8
    lwz r30, 0x8(r3)
    addi r31, r3, 0x4
    cmplw r30, r31
    beq lbl_fn_800D8568_000017A8
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r30)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r3, 0x4(r4)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r3)
    b lbl_fn_800D8568_000017A0
lbl_fn_800D8568_00001788:
    mr r3, r30
    lwz r30, 0x4(r30)
    bl dtor_80084684
    lwz r3, 0x0(r28)
    subi r0, r3, 0x1
    stw r0, 0x0(r28)
lbl_fn_800D8568_000017A0:
    cmplw r30, r31
    bne lbl_fn_800D8568_00001788
lbl_fn_800D8568_000017A8:
    cmpwi r29, 0x0
    ble lbl_fn_800D8568_000017B8
    mr r3, r28
    bl dtor_80084684
lbl_fn_800D8568_000017B8:
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
