#include "revolution/types.h"

/* External function declarations */
extern void ISFS_Open(void);
extern void ISFS_OpenAsync(void);
extern void OSDisableInterrupts(void);
extern void OSReport(const char* msg, ...);
extern void OSRestoreInterrupts(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void fn_8061A880(void);
extern void fn_8061A980(void);
extern void fn_8061ABE0(void);
extern void fn_8061AD30(void);
extern void fn_8061AE90(void);
extern void fn_8061AFD0(void);
extern void fn_8061B0B0(void);
extern void fn_8061B180(void);
extern void fn_8061B290(void);
extern void fn_8061B4D0(void);
extern void fn_8061B5D0(void);
extern void fn_8061B930(void);
extern void fn_8061B940(void);
extern void fn_8061B9D0(void);
extern void fn_8061B9F0(void);
extern void fn_8061BAA0(void);
extern void fn_8061BAC0(void);
extern void fn_8061BB70(void);
extern void fn_8061BB80(void);
extern void fn_80621610(void);
extern void fn_8068236C(void);
extern void fn_80682428(void);
extern void nandConvertErrorCode(void);
extern void nandGenerateAbsPath(void);
extern void nandIsInitialized(void);
extern void nandIsPrivatePath(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807B0F98[];
extern u8 lbl_807B0F68[];
extern u8 lbl_807B0F74[];
extern u8 lbl_807B0F80[];

/* Small data declarations */
extern u32 lbl_8087E8E0;
extern u32 lbl_8087E8E8;
extern u32 lbl_8087E8F0;
extern u32 lbl_8087E8FC;
static const char lbl_8087E900[] = "";
extern u32 lbl_80880118;
extern u32 lbl_8088011C;

/* Function declarations */
void fn_8061FC80(void);
void fn_80620030(void);
void fn_80620040(void);
void fn_80620220(void);
void fn_80620250(void);
void fn_806203C0(void);
void fn_80620790(void);
void fn_80620830(void);
void fn_80620840(void);
void fn_80620940(void);
void fn_80620B10(void);
void fn_80620B70(void);
void fn_80620BD0(void);
void fn_80620C60(void);
void fn_80620EF0(void);
void fn_80620FD0(void);
void fn_806210B0(void);

asm void fn_8061FC80(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x90
    bl _savegpr_25
    mr r25, r3
    mr r28, r4
    mr r27, r5
    mr r29, r6
    mr r30, r7
    mr r26, r8
    mr r31, r9
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_8061FC80_00000044
    li r3, -0x80
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000044:
    cmpwi r31, 0x0
    beq lbl_fn_8061FC80_0000005C
    clrlwi. r0, r30, 18
    beq lbl_fn_8061FC80_0000005C
    li r3, -0x8
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_0000005C:
    li r0, 0x0
    stb r27, 0x88(r28)
    mr r4, r25
    addi r3, r28, 0x8
    stb r0, 0x89(r28)
    bl nandGenerateAbsPath
    cmpwi r26, 0x0
    bne lbl_fn_8061FC80_00000094
    addi r3, r28, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_00000094
    li r3, -0x1
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000094:
    cmplwi r27, 0x1
    bne lbl_fn_8061FC80_000000E8
    addi r3, r28, 0x8
    li r4, 0x1
    bl ISFS_Open
    cmpwi r3, 0x0
    blt lbl_fn_8061FC80_000000E0
    cmpwi r31, 0x0
    li r0, 0x2
    stw r3, 0x0(r28)
    stb r0, 0x89(r28)
    bne lbl_fn_8061FC80_000000D0
    li r0, 0x3
    stb r0, 0x8a(r28)
    b lbl_fn_8061FC80_000000D8
lbl_fn_8061FC80_000000D0:
    li r0, 0x5
    stb r0, 0x8a(r28)
lbl_fn_8061FC80_000000D8:
    li r3, 0x0
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_000000E0:
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_000000E8:
    addi r0, r27, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_8061FC80_0000038C
    li r0, 0x0
    lis r3, lbl_807B0F68@ha
    stw r0, 0x20(r1)
    addi r3, r3, lbl_807B0F68@l
    li r26, -0x1
    li r4, 0x0
    stw r0, 0x24(r1)
    li r5, 0x3
    li r6, 0x3
    li r7, 0x3
    stw r0, 0x28(r1)
    stb r0, 0x2c(r1)
    bl fn_8061A880
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_00000144
    cmpwi r3, -0x69
    beq lbl_fn_8061FC80_00000144
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000144:
    li r0, 0x1
    stb r0, 0x89(r28)
    addi r3, r28, 0x8
    addi r4, r1, 0x1c
    addi r5, r1, 0x8
    addi r6, r1, 0x18
    addi r7, r1, 0x14
    addi r8, r1, 0x10
    addi r9, r1, 0xc
    bl fn_8061AD30
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_0000017C
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_0000017C:
    addi r3, r28, 0x8
    li r4, 0x1
    bl ISFS_Open
    cmpwi r3, 0x0
    stw r3, 0x4(r28)
    bge lbl_fn_8061FC80_0000019C
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_0000019C:
    cmpwi r31, 0x0
    li r0, 0x2
    stb r0, 0x89(r28)
    bne lbl_fn_8061FC80_0000020C
    bl OSDisableInterrupts
    lwz r26, lbl_80880118
    addi r0, r26, 0x1
    stw r0, lbl_80880118
    bl OSRestoreInterrupts
    lis r5, lbl_807B0F68@ha
    mr r6, r26
    addi r3, r1, 0x30
    la r4, lbl_8087E8E0
    addi r5, r5, lbl_807B0F68@l
    crclr 6
    bl sprintf
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x3
    li r6, 0x0
    li r7, 0x0
    bl fn_8061A880
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_00000204
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000204:
    li r0, 0x3
    stb r0, 0x89(r28)
lbl_fn_8061FC80_0000020C:
    addi r3, r1, 0x20
    addi r4, r28, 0x8
    bl fn_806210B0
    cmpwi r31, 0x0
    bne lbl_fn_8061FC80_00000248
    lis r4, lbl_807B0F74@ha
    lis r5, lbl_807B0F68@ha
    mr r6, r26
    addi r3, r28, 0x48
    addi r4, r4, lbl_807B0F74@l
    addi r5, r5, lbl_807B0F68@l
    addi r7, r1, 0x20
    crclr 6
    bl sprintf
    b lbl_fn_8061FC80_00000264
lbl_fn_8061FC80_00000248:
    lis r5, lbl_807B0F68@ha
    addi r3, r28, 0x48
    addi r5, r5, lbl_807B0F68@l
    addi r6, r1, 0x20
    la r4, lbl_8087E8E8
    crclr 6
    bl sprintf
lbl_fn_8061FC80_00000264:
    lwz r4, 0x18(r1)
    addi r3, r28, 0x48
    lwz r5, 0x14(r1)
    lwz r6, 0x10(r1)
    lwz r7, 0xc(r1)
    bl fn_8061B4D0
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_0000028C
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_0000028C:
    cmplwi r27, 0x2
    li r0, 0x4
    stb r0, 0x89(r28)
    bne lbl_fn_8061FC80_000002B0
    addi r3, r28, 0x48
    li r4, 0x2
    bl ISFS_Open
    stw r3, 0x0(r28)
    b lbl_fn_8061FC80_000002C8
lbl_fn_8061FC80_000002B0:
    cmplwi r27, 0x3
    bne lbl_fn_8061FC80_000002C8
    addi r3, r28, 0x48
    li r4, 0x3
    bl ISFS_Open
    stw r3, 0x0(r28)
lbl_fn_8061FC80_000002C8:
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    bge lbl_fn_8061FC80_000002DC
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_000002DC:
    li r0, 0x5
    stb r0, 0x89(r28)
    lwz r26, 0x4(r28)
    mr r27, r3
lbl_fn_8061FC80_000002EC:
    mr r3, r26
    mr r4, r29
    mr r5, r30
    bl fn_8061B9D0
    cmpwi r3, 0x0
    mr r5, r3
    bne lbl_fn_8061FC80_00000310
    li r5, 0x0
    b lbl_fn_8061FC80_00000330
lbl_fn_8061FC80_00000310:
    bge lbl_fn_8061FC80_00000318
    b lbl_fn_8061FC80_00000330
lbl_fn_8061FC80_00000318:
    mr r3, r27
    mr r4, r29
    bl fn_8061BAA0
    cmpwi r3, 0x0
    bge lbl_fn_8061FC80_000002EC
    mr r5, r3
lbl_fn_8061FC80_00000330:
    cmpwi r5, 0x0
    beq lbl_fn_8061FC80_00000344
    mr r3, r5
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000344:
    lwz r3, 0x0(r28)
    li r4, 0x0
    li r5, 0x0
    bl fn_8061B930
    cmpwi r3, 0x0
    beq lbl_fn_8061FC80_00000364
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_00000364:
    cmpwi r31, 0x0
    beq lbl_fn_8061FC80_00000378
    li r0, 0x5
    stb r0, 0x8a(r28)
    b lbl_fn_8061FC80_00000380
lbl_fn_8061FC80_00000378:
    li r0, 0x3
    stb r0, 0x8a(r28)
lbl_fn_8061FC80_00000380:
    li r3, 0x0
    bl nandConvertErrorCode
    b lbl_fn_8061FC80_00000390
lbl_fn_8061FC80_0000038C:
    li r3, -0x8
lbl_fn_8061FC80_00000390:
    addi r11, r1, 0x90
    bl _restgpr_25
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80620030(void)
{
    nofralloc
    li r4, 0x1
    b fn_80620040
}

asm void fn_80620040(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_80620040_00000438
    li r3, -0x80
    b lbl_fn_80620040_00000578
lbl_fn_80620040_00000438:
    lbz r0, 0x8a(r29)
    cmplwi r0, 0x3
    bne lbl_fn_80620040_0000044C
    cmpwi r30, 0x0
    beq lbl_fn_80620040_00000464
lbl_fn_80620040_0000044C:
    cmplwi r0, 0x5
    bne lbl_fn_80620040_0000045C
    cmpwi r30, 0x0
    bne lbl_fn_80620040_00000464
lbl_fn_80620040_0000045C:
    li r3, -0x8
    b lbl_fn_80620040_00000578
lbl_fn_80620040_00000464:
    lbz r3, 0x88(r29)
    cmplwi r3, 0x1
    bne lbl_fn_80620040_000004AC
    lwz r3, 0x0(r29)
    bl fn_8061BB70
    cmpwi r3, 0x0
    bne lbl_fn_80620040_000004A4
    cmpwi r30, 0x0
    li r0, 0x7
    stb r0, 0x89(r29)
    bne lbl_fn_80620040_0000049C
    li r0, 0x4
    stb r0, 0x8a(r29)
    b lbl_fn_80620040_000004A4
lbl_fn_80620040_0000049C:
    li r0, 0x6
    stb r0, 0x8a(r29)
lbl_fn_80620040_000004A4:
    bl nandConvertErrorCode
    b lbl_fn_80620040_00000578
lbl_fn_80620040_000004AC:
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80620040_00000564
    lwz r3, 0x0(r29)
    bl fn_8061BB70
    cmpwi r3, 0x0
    beq lbl_fn_80620040_000004D4
    bl nandConvertErrorCode
    b lbl_fn_80620040_00000578
lbl_fn_80620040_000004D4:
    li r31, 0x6
    stb r31, 0x89(r29)
    lwz r3, 0x4(r29)
    bl fn_8061BB70
    cmpwi r3, 0x0
    beq lbl_fn_80620040_000004F4
    bl nandConvertErrorCode
    b lbl_fn_80620040_00000578
lbl_fn_80620040_000004F4:
    li r0, 0x7
    stb r0, 0x89(r29)
    addi r3, r29, 0x48
    addi r4, r29, 0x8
    bl fn_8061B180
    cmpwi r3, 0x0
    beq lbl_fn_80620040_00000518
    bl nandConvertErrorCode
    b lbl_fn_80620040_00000578
lbl_fn_80620040_00000518:
    cmpwi r30, 0x0
    li r0, 0x8
    stb r0, 0x89(r29)
    bne lbl_fn_80620040_00000558
    addi r3, r1, 0x8
    addi r4, r29, 0x48
    bl fn_80621610
    addi r3, r1, 0x8
    bl fn_8061AFD0
    cmpwi r3, 0x0
    bne lbl_fn_80620040_0000055C
    li r4, 0x9
    li r0, 0x4
    stb r4, 0x89(r29)
    stb r0, 0x8a(r29)
    b lbl_fn_80620040_0000055C
lbl_fn_80620040_00000558:
    stb r31, 0x8a(r29)
lbl_fn_80620040_0000055C:
    bl nandConvertErrorCode
    b lbl_fn_80620040_00000578
lbl_fn_80620040_00000564:
    lis r3, lbl_807B0F80@ha
    addi r3, r3, lbl_807B0F80@l
    crclr 6
    bl OSReport
    li r3, -0x8
lbl_fn_80620040_00000578:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80620220(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r10, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r0, 0x8(r1)
    bl fn_80620250
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80620250(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    lwz r31, 0x38(r1)
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    mr r30, r10
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_80620250_0000061C
    li r3, -0x80
    b lbl_fn_80620250_00000720
lbl_fn_80620250_0000061C:
    cmpwi r31, 0x0
    beq lbl_fn_80620250_00000634
    clrlwi. r0, r27, 18
    beq lbl_fn_80620250_00000634
    li r3, -0x8
    b lbl_fn_80620250_00000720
lbl_fn_80620250_00000634:
    li r0, 0x0
    stb r25, 0x88(r24)
    mr r4, r23
    addi r3, r24, 0x8
    stb r0, 0x89(r24)
    stw r31, 0xb8(r29)
    bl nandGenerateAbsPath
    cmpwi r30, 0x0
    bne lbl_fn_80620250_00000670
    addi r3, r24, 0x8
    bl nandIsPrivatePath
    cmpwi r3, 0x0
    beq lbl_fn_80620250_00000670
    li r3, -0x1
    b lbl_fn_80620250_00000720
lbl_fn_80620250_00000670:
    cmplwi r25, 0x1
    bne lbl_fn_80620250_000006B0
    lis r5, fn_80620790@ha
    stw r24, 0x8(r29)
    mr r6, r29
    addi r3, r24, 0x8
    stw r28, 0x4(r29)
    addi r5, r5, fn_80620790@l
    li r4, 0x1
    bl ISFS_OpenAsync
    cmpwi r3, 0x0
    bne lbl_fn_80620250_000006A8
    li r3, 0x0
    b lbl_fn_80620250_00000720
lbl_fn_80620250_000006A8:
    bl nandConvertErrorCode
    b lbl_fn_80620250_00000720
lbl_fn_80620250_000006B0:
    addi r0, r25, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80620250_0000071C
    li r31, 0x0
    lis r3, lbl_807B0F68@ha
    lis r8, fn_806203C0@ha
    stw r24, 0x8(r29)
    mr r9, r29
    addi r3, r3, lbl_807B0F68@l
    stw r28, 0x4(r29)
    addi r8, r8, fn_806203C0@l
    li r4, 0x0
    li r5, 0x3
    stw r31, 0x7c(r29)
    li r6, 0x3
    li r7, 0x3
    stw r26, 0x80(r29)
    stw r27, 0x84(r29)
    bl fn_8061A980
    cmpwi r3, 0x0
    bne lbl_fn_80620250_0000070C
    b lbl_fn_80620250_00000714
lbl_fn_80620250_0000070C:
    bl nandConvertErrorCode
    mr r31, r3
lbl_fn_80620250_00000714:
    mr r3, r31
    b lbl_fn_80620250_00000720
lbl_fn_80620250_0000071C:
    li r3, -0x8
lbl_fn_80620250_00000720:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806203C0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    cmpwi r3, 0x0
    mr r5, r3
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    mr r30, r4
    bge lbl_fn_806203C0_00000778
    cmpwi r3, -0x69
    bne lbl_fn_806203C0_00000AE0
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806203C0_00000AE0
lbl_fn_806203C0_00000778:
    lwz r0, 0x7c(r4)
    li r7, -0x75
    lwz r31, 0x8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806203C0_00000794
    li r0, 0x1
    stb r0, 0x89(r31)
lbl_fn_806203C0_00000794:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0x2
    bne lbl_fn_806203C0_000007AC
    stw r3, 0x4(r31)
    li r0, 0x2
    stb r0, 0x89(r31)
lbl_fn_806203C0_000007AC:
    lwz r6, 0x7c(r4)
    cmpwi r6, 0x2
    bne lbl_fn_806203C0_000007D0
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806203C0_000007D0
    addi r0, r6, 0x2
    stw r0, 0x7c(r4)
    b lbl_fn_806203C0_000007DC
lbl_fn_806203C0_000007D0:
    lwz r6, 0x7c(r4)
    addi r0, r6, 0x1
    stw r0, 0x7c(r4)
lbl_fn_806203C0_000007DC:
    lwz r0, 0x7c(r4)
    cmplwi r0, 0x9
    bgt lbl_fn_806203C0_00000ABC
    lis r6, jumptable_807B0F98@ha
    slwi r0, r0, 2
    addi r6, r6, jumptable_807B0F98@l
    lwzx r6, r6, r0
    mtctr r6
    bctr
    lis r10, fn_806203C0@ha
    stw r4, 0x8(r1)
    addi r3, r31, 0x8
    addi r5, r4, 0x1c
    addi r6, r4, 0x20
    addi r7, r4, 0x24
    addi r8, r4, 0x28
    addi r9, r4, 0x2c
    addi r10, r10, fn_806203C0@l
    addi r4, r4, 0x18
    bl fn_8061AE90
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    lis r5, fn_806203C0@ha
    mr r6, r30
    addi r3, r31, 0x8
    li r4, 0x1
    addi r5, r5, fn_806203C0@l
    bl ISFS_OpenAsync
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    bl OSDisableInterrupts
    lwz r31, lbl_80880118
    addi r0, r31, 0x1
    stw r0, lbl_80880118
    bl OSRestoreInterrupts
    lis r5, lbl_807B0F68@ha
    stw r31, 0x8c(r30)
    mr r6, r31
    addi r3, r1, 0x20
    addi r5, r5, lbl_807B0F68@l
    la r4, lbl_8087E8E0
    crclr 6
    bl sprintf
    lis r8, fn_806203C0@ha
    mr r9, r30
    addi r3, r1, 0x20
    li r4, 0x0
    addi r8, r8, fn_806203C0@l
    li r5, 0x3
    li r6, 0x0
    li r7, 0x0
    bl fn_8061A980
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    addi r3, r1, 0x10
    addi r4, r31, 0x8
    bl fn_806210B0
    lwz r0, 0xb8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806203C0_000008FC
    li r0, 0x3
    stb r0, 0x89(r31)
    lis r4, lbl_807B0F74@ha
    lis r5, lbl_807B0F68@ha
    lwz r6, 0x8c(r30)
    addi r3, r31, 0x48
    addi r4, r4, lbl_807B0F74@l
    addi r5, r5, lbl_807B0F68@l
    addi r7, r1, 0x10
    crclr 6
    bl sprintf
    b lbl_fn_806203C0_00000918
lbl_fn_806203C0_000008FC:
    lis r5, lbl_807B0F68@ha
    addi r3, r31, 0x48
    addi r5, r5, lbl_807B0F68@l
    addi r6, r1, 0x10
    la r4, lbl_8087E8E8
    crclr 6
    bl sprintf
lbl_fn_806203C0_00000918:
    lis r8, fn_806203C0@ha
    lwz r4, 0x20(r30)
    lwz r5, 0x24(r30)
    mr r9, r30
    lwz r6, 0x28(r30)
    addi r3, r31, 0x48
    lwz r7, 0x2c(r30)
    addi r8, r8, fn_806203C0@l
    bl fn_8061B5D0
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    li r0, 0x4
    stb r0, 0x89(r31)
    lbz r0, 0x88(r31)
    cmplwi r0, 0x2
    bne lbl_fn_806203C0_00000978
    lis r5, fn_806203C0@ha
    mr r6, r30
    addi r3, r31, 0x48
    li r4, 0x2
    addi r5, r5, fn_806203C0@l
    bl ISFS_OpenAsync
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
lbl_fn_806203C0_00000978:
    cmplwi r0, 0x3
    bne lbl_fn_806203C0_000009A0
    lis r5, fn_806203C0@ha
    mr r6, r30
    addi r3, r31, 0x48
    li r4, 0x3
    addi r5, r5, fn_806203C0@l
    bl ISFS_OpenAsync
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
lbl_fn_806203C0_000009A0:
    li r7, -0x75
    b lbl_fn_806203C0_00000ABC
    stw r3, 0x0(r31)
    li r3, 0x5
    lis r6, fn_806203C0@ha
    li r0, 0x7
    stb r3, 0x89(r31)
    mr r7, r30
    addi r6, r6, fn_806203C0@l
    stw r0, 0x7c(r4)
    lwz r4, 0x80(r4)
    lwz r3, 0x4(r31)
    lwz r5, 0x84(r30)
    bl fn_8061B9F0
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    lis r6, fn_806203C0@ha
    lwz r3, 0x4(r31)
    lwz r4, 0x80(r4)
    mr r7, r30
    lwz r5, 0x84(r30)
    addi r6, r6, fn_806203C0@l
    bl fn_8061B9F0
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    cmpwi r3, 0x0
    ble lbl_fn_806203C0_00000A34
    li r0, 0x6
    stw r0, 0x7c(r4)
    lis r6, fn_806203C0@ha
    lwz r4, 0x80(r4)
    lwz r3, 0x0(r31)
    mr r7, r30
    addi r6, r6, fn_806203C0@l
    bl fn_8061BAC0
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
lbl_fn_806203C0_00000A34:
    bne lbl_fn_806203C0_00000ABC
    lis r6, fn_806203C0@ha
    lwz r3, 0x0(r31)
    mr r7, r30
    li r4, 0x0
    addi r6, r6, fn_806203C0@l
    li r5, 0x0
    bl fn_8061B940
    mr r7, r3
    b lbl_fn_806203C0_00000ABC
    cmpwi r3, 0x0
    bne lbl_fn_806203C0_00000AA0
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_806203C0_00000A7C
    li r0, 0x3
    stb r0, 0x8a(r31)
    b lbl_fn_806203C0_00000A84
lbl_fn_806203C0_00000A7C:
    li r0, 0x5
    stb r0, 0x8a(r31)
lbl_fn_806203C0_00000A84:
    li r3, 0x0
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_fn_806203C0_00000AF8
lbl_fn_806203C0_00000AA0:
    mr r3, r5
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_fn_806203C0_00000AF8
lbl_fn_806203C0_00000ABC:
    cmpwi r7, 0x0
    beq lbl_fn_806203C0_00000AF8
    mr r3, r7
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_fn_806203C0_00000AF8
lbl_fn_806203C0_00000AE0:
    mr r3, r5
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_806203C0_00000AF8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80620790(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    blt lbl_fn_80620790_00000B80
    lwz r5, 0x8(r4)
    li r0, 0x2
    stw r3, 0x0(r5)
    lwz r3, 0x8(r4)
    stb r0, 0x89(r3)
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80620790_00000B5C
    lwz r3, 0x8(r4)
    li r0, 0x3
    stb r0, 0x8a(r3)
    b lbl_fn_80620790_00000B68
lbl_fn_80620790_00000B5C:
    lwz r3, 0x8(r4)
    li r0, 0x5
    stb r0, 0x8a(r3)
lbl_fn_80620790_00000B68:
    lwz r12, 0x4(r31)
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80620790_00000B94
lbl_fn_80620790_00000B80:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_80620790_00000B94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80620830(void)
{
    nofralloc
    li r6, 0x1
    b fn_80620840
}

asm void fn_80620840(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_80620840_00000C00
    li r3, -0x80
    b lbl_fn_80620840_00000C9C
lbl_fn_80620840_00000C00:
    lbz r0, 0x8a(r28)
    cmplwi r0, 0x3
    bne lbl_fn_80620840_00000C14
    cmpwi r31, 0x0
    beq lbl_fn_80620840_00000C2C
lbl_fn_80620840_00000C14:
    cmplwi r0, 0x5
    bne lbl_fn_80620840_00000C24
    cmpwi r31, 0x0
    bne lbl_fn_80620840_00000C2C
lbl_fn_80620840_00000C24:
    li r3, -0x8
    b lbl_fn_80620840_00000C9C
lbl_fn_80620840_00000C2C:
    stw r31, 0xb8(r30)
    lbz r3, 0x88(r28)
    cmplwi r3, 0x1
    bne lbl_fn_80620840_00000C5C
    stw r28, 0x8(r30)
    lis r4, fn_80620B10@ha
    mr r5, r30
    stw r29, 0x4(r30)
    addi r4, r4, fn_80620B10@l
    lwz r3, 0x0(r28)
    bl fn_8061BB80
    b lbl_fn_80620840_00000C98
lbl_fn_80620840_00000C5C:
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80620840_00000C94
    li r0, 0xa
    stw r28, 0x8(r30)
    lis r4, fn_80620940@ha
    mr r5, r30
    stw r29, 0x4(r30)
    addi r4, r4, fn_80620940@l
    stw r0, 0x7c(r30)
    lwz r3, 0x0(r28)
    bl fn_8061BB80
    b lbl_fn_80620840_00000C98
lbl_fn_80620840_00000C94:
    li r3, -0x65
lbl_fn_80620840_00000C98:
    bl nandConvertErrorCode
lbl_fn_80620840_00000C9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80620940(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    bne lbl_fn_80620940_00000E5C
    lwz r0, 0x7c(r4)
    li r6, -0x75
    lwz r7, 0x8(r4)
    cmpwi r0, 0xc
    bne lbl_fn_80620940_00000CF8
    li r0, 0x8
    stb r0, 0x89(r7)
lbl_fn_80620940_00000CF8:
    lwz r5, 0x7c(r4)
    cmpwi r5, 0xc
    bne lbl_fn_80620940_00000D1C
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80620940_00000D1C
    addi r0, r5, 0x2
    stw r0, 0x7c(r4)
    b lbl_fn_80620940_00000D28
lbl_fn_80620940_00000D1C:
    lwz r5, 0x7c(r4)
    addi r0, r5, 0x1
    stw r0, 0x7c(r4)
lbl_fn_80620940_00000D28:
    lwz r0, 0x7c(r4)
    cmpwi r0, 0xb
    bne lbl_fn_80620940_00000D58
    li r0, 0x6
    stb r0, 0x89(r7)
    lis r4, fn_80620940@ha
    mr r5, r31
    lwz r3, 0x4(r7)
    addi r4, r4, fn_80620940@l
    bl fn_8061BB80
    mr r6, r3
    b lbl_fn_80620940_00000E38
lbl_fn_80620940_00000D58:
    cmpwi r0, 0xc
    bne lbl_fn_80620940_00000D88
    li r0, 0x7
    lis r5, fn_80620940@ha
    stb r0, 0x89(r7)
    mr r6, r31
    addi r3, r7, 0x48
    addi r4, r7, 0x8
    addi r5, r5, fn_80620940@l
    bl fn_8061B290
    mr r6, r3
    b lbl_fn_80620940_00000E38
lbl_fn_80620940_00000D88:
    cmpwi r0, 0xd
    bne lbl_fn_80620940_00000DFC
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r7, 0x48
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_80621610
    lis r4, fn_80620940@ha
    mr r5, r31
    addi r3, r1, 0x8
    addi r4, r4, fn_80620940@l
    bl fn_8061B0B0
    mr r6, r3
    b lbl_fn_80620940_00000E38
lbl_fn_80620940_00000DFC:
    cmpwi r0, 0xe
    bne lbl_fn_80620940_00000E38
    lwz r0, 0xb8(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80620940_00000E18
    li r0, 0x9
    stb r0, 0x89(r7)
lbl_fn_80620940_00000E18:
    li r0, 0x4
    stb r0, 0x8a(r7)
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80620940_00000E70
lbl_fn_80620940_00000E38:
    cmpwi r6, 0x0
    beq lbl_fn_80620940_00000E70
    mr r3, r6
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    b lbl_fn_80620940_00000E70
lbl_fn_80620940_00000E5C:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
lbl_fn_80620940_00000E70:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80620B10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_80620B10_00000EC4
    lwz r5, 0x8(r4)
    li r6, 0x7
    li r0, 0x4
    stb r6, 0x89(r5)
    lwz r4, 0x8(r4)
    stb r0, 0x8a(r4)
lbl_fn_80620B10_00000EC4:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80620B70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    bne lbl_fn_80620B70_00000F24
    lwz r5, 0x8(r4)
    li r6, 0x7
    li r0, 0x2
    stb r6, 0x89(r5)
    lwz r4, 0x8(r4)
    stb r0, 0x8a(r4)
lbl_fn_80620B70_00000F24:
    bl nandConvertErrorCode
    lwz r12, 0x4(r31)
    mr r4, r31
    mtctr r12
    bctrl
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80620BD0(void)
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
    bl nandIsInitialized
    cmpwi r3, 0x0
    bne lbl_fn_80620BD0_00000F88
    li r3, -0x80
    b lbl_fn_80620BD0_00000FB8
lbl_fn_80620BD0_00000F88:
    li r0, 0x40
    lis r6, fn_80620C60@ha
    stw r29, 0x8(r31)
    mr r7, r31
    addi r6, r6, fn_80620C60@l
    la r3, lbl_8087E8F0
    stw r30, 0x4(r31)
    li r4, 0x0
    la r5, lbl_8088011C
    stb r0, 0x1e(r31)
    bl fn_8061ABE0
    bl nandConvertErrorCode
lbl_fn_80620BD0_00000FB8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80620C60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r31, 0x8(r4)
    bge lbl_fn_80620C60_00001018
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_00001018:
    lbz r0, 0x1e(r30)
    cmplwi r0, 0x40
    beq lbl_fn_80620C60_00001028
    stb r0, 0x89(r31)
lbl_fn_80620C60_00001028:
    lbz r3, 0x88(r31)
    cmplwi r3, 0x1
    bne lbl_fn_80620C60_000010B4
    lbz r0, 0x89(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80620C60_00001058
    lwz r12, 0x4(r30)
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80620C60_00001258
lbl_fn_80620C60_00001058:
    cmplwi r0, 0x2
    bne lbl_fn_80620C60_0000109C
    li r0, 0x0
    stb r0, 0x1e(r30)
    lis r4, fn_80620C60@ha
    mr r5, r30
    lwz r3, 0x0(r31)
    addi r4, r4, fn_80620C60@l
    bl fn_8061BB80
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_00001258
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
    b lbl_fn_80620C60_00001258
lbl_fn_80620C60_0000109C:
    lwz r12, 0x4(r30)
    mr r4, r30
    li r3, -0x8
    mtctr r12
    bctrl
    b lbl_fn_80620C60_00001258
lbl_fn_80620C60_000010B4:
    addi r0, r3, 0xfe
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_80620C60_00001258
    lbz r0, 0x89(r31)
    cmplwi r0, 0x8
    bne lbl_fn_80620C60_000010E4
    lwz r12, 0x4(r30)
    mr r4, r30
    li r3, -0x8
    mtctr r12
    bctrl
lbl_fn_80620C60_000010E4:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x7
    bne lbl_fn_80620C60_00001128
    li r0, 0x0
    lis r4, fn_80620C60@ha
    stb r0, 0x1e(r30)
    mr r5, r30
    addi r3, r31, 0x48
    addi r4, r4, fn_80620C60@l
    bl fn_8061B0B0
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_00001128
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_00001128:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x6
    bne lbl_fn_80620C60_0000116C
    li r0, 0x2
    lis r4, fn_80620C60@ha
    stb r0, 0x1e(r30)
    mr r5, r30
    addi r3, r31, 0x48
    addi r4, r4, fn_80620C60@l
    bl fn_8061B0B0
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_0000116C
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_0000116C:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x5
    bne lbl_fn_80620C60_000011B0
    li r0, 0x4
    stb r0, 0x1e(r30)
    lis r4, fn_80620C60@ha
    mr r5, r30
    lwz r3, 0x0(r31)
    addi r4, r4, fn_80620C60@l
    bl fn_8061BB80
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_000011B0
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_000011B0:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x4
    bne lbl_fn_80620C60_000011F4
    li r0, 0x2
    lis r4, fn_80620C60@ha
    stb r0, 0x1e(r30)
    mr r5, r30
    addi r3, r31, 0x48
    addi r4, r4, fn_80620C60@l
    bl fn_8061B0B0
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_000011F4
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_000011F4:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x2
    bne lbl_fn_80620C60_00001238
    li r0, 0x0
    stb r0, 0x1e(r30)
    lis r4, fn_80620C60@ha
    mr r5, r30
    lwz r3, 0x4(r31)
    addi r4, r4, fn_80620C60@l
    bl fn_8061BB80
    cmpwi r3, 0x0
    beq lbl_fn_80620C60_00001238
    bl nandConvertErrorCode
    lwz r12, 0x4(r30)
    mr r4, r30
    mtctr r12
    bctrl
lbl_fn_80620C60_00001238:
    lbz r0, 0x89(r31)
    cmplwi r0, 0x1
    bgt lbl_fn_80620C60_00001258
    lwz r12, 0x4(r30)
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80620C60_00001258:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80620EF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lbz r0, 0x0(r4)
    stw r31, 0x1c(r1)
    cmpwi r0, 0x2f
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80620EF0_000012BC
    lbz r0, 0x1(r4)
    extsb. r0, r0
    bne lbl_fn_80620EF0_000012BC
    li r4, 0x2f
    li r0, 0x0
    stb r4, 0x0(r3)
    stb r0, 0x1(r3)
    b lbl_fn_80620EF0_00001328
lbl_fn_80620EF0_000012BC:
    mr r3, r30
    bl strlen
    subic. r31, r3, 0x1
    addi r0, r31, 0x1
    add r3, r30, r31
    mtctr r0
    blt lbl_fn_80620EF0_00001328
lbl_fn_80620EF0_000012D8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    bne lbl_fn_80620EF0_0000131C
    cmpwi r31, 0x0
    beq lbl_fn_80620EF0_00001308
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8068236C
    li r0, 0x0
    stbx r0, r29, r31
    b lbl_fn_80620EF0_00001328
lbl_fn_80620EF0_00001308:
    li r3, 0x2f
    li r0, 0x0
    stb r3, 0x0(r29)
    stb r0, 0x1(r29)
    b lbl_fn_80620EF0_00001328
lbl_fn_80620EF0_0000131C:
    subi r31, r31, 0x1
    subi r3, r3, 0x1
    bdnz lbl_fn_80620EF0_000012D8
lbl_fn_80620EF0_00001328:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80620FD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r31, r5
    li r30, 0x0
    b lbl_fn_80620FD0_000013FC
lbl_fn_80620FD0_0000137C:
    lbz r0, 0x0(r31)
    extsb r0, r0
    cmpwi r0, 0x2f
    bne lbl_fn_80620FD0_000013CC
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl fn_8068236C
    add r4, r30, r29
    li r3, 0x0
    lbz r0, 0x1(r4)
    stbx r3, r27, r30
    extsb. r0, r0
    bne lbl_fn_80620FD0_000013BC
    stb r3, 0x0(r28)
    b lbl_fn_80620FD0_0000140C
lbl_fn_80620FD0_000013BC:
    mr r3, r28
    addi r4, r4, 0x1
    bl strcpy
    b lbl_fn_80620FD0_0000140C
lbl_fn_80620FD0_000013CC:
    cmpwi r0, 0x0
    bne lbl_fn_80620FD0_000013F4
    mr r3, r27
    mr r4, r29
    mr r5, r30
    bl fn_8068236C
    li r0, 0x0
    stbx r0, r27, r30
    stb r0, 0x0(r28)
    b lbl_fn_80620FD0_0000140C
lbl_fn_80620FD0_000013F4:
    addi r30, r30, 0x1
    addi r31, r31, 0x1
lbl_fn_80620FD0_000013FC:
    mr r3, r29
    bl strlen
    cmplw r30, r3
    ble lbl_fn_80620FD0_0000137C
lbl_fn_80620FD0_0000140C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806210B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    la r3, lbl_8087E8FC
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_806210B0_0000146C
    mr r3, r30
    la r4, lbl_8087E900
    bl strcpy
    b lbl_fn_806210B0_000014B0
lbl_fn_806210B0_0000146C:
    mr r3, r31
    bl strlen
    subic. r4, r3, 0x1
    addi r0, r4, 0x1
    add r3, r31, r4
    mtctr r0
    blt lbl_fn_806210B0_000014A0
lbl_fn_806210B0_00001488:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x2f
    beq lbl_fn_806210B0_000014A0
    subi r4, r4, 0x1
    subi r3, r3, 0x1
    bdnz lbl_fn_806210B0_00001488
lbl_fn_806210B0_000014A0:
    add r4, r31, r4
    mr r3, r30
    addi r4, r4, 0x1
    bl strcpy
lbl_fn_806210B0_000014B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
