#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetConsoleType(void);
extern void __div2u(void);
extern void __files(void);
extern void __mod2u(void);
extern void __register_atexit(void);
extern void __va_arg(void);
extern void _restgpr_14(void);
extern void _restgpr_15(void);
extern void _restgpr_21(void);
extern void _savegpr_14(void);
extern void _savegpr_15(void);
extern void _savegpr_21(void);
extern void exit(void);
extern void fn_8061A350(void);
extern void fn_8061A3A0(void);
extern void fn_80678668(void);
extern void fn_8067AF64(void);
extern void fn_8068A824(void);
extern void fn_8068AA68(void);
extern void fn_8068AAF0(void);
extern void fn_8068AEB0(void);
extern void fn_8068B0FC(void);
extern void fn_806964D0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807BB068[];
extern u8 jumptable_807BB3C8[];
extern u8 jumptable_807BB5F8[];
extern u8 jumptable_807BB6D8[];
extern u8 jumptable_807BB6F8[];
extern u8 jumptable_807BB718[];
extern u8 jumptable_807BB868[];
extern u8 jumptable_807BB948[];
extern u8 lbl_80765258[];
extern u8 lbl_80765840[];
extern u8 lbl_80765868[];
extern u8 lbl_80765890[];
extern u8 lbl_80765EA0[];
extern u8 lbl_807BB190[];
extern u8 lbl_807BB1D0[];
extern u8 lbl_807BB380[];
extern u8 lbl_807BB4A8[];
extern u8 lbl_807BBA98[];
extern u8 lbl_80808080[];
extern u8 lbl_808327A0[];
extern u8 lbl_8087EC00[];
extern u8 lbl_8087EC04[];
extern u8 lbl_8087EC08[];

/* Small data declarations */
extern u32 __msl_constraint_handler_80880360;
extern u32 __stdio_exit;
extern u32 lbl_8087EBF0;
extern u32 lbl_8087EBF8;
extern u32 lbl_8087EBFC;
extern u32 lbl_8087EC10;
extern u32 lbl_80880348;
extern u32 lbl_80880350;
extern u32 lbl_80880358;
extern u32 lbl_80888A60;
extern u32 lbl_80888A68;
extern u32 lbl_80888A70;
extern u32 lbl_80888A78;
extern u32 lbl_80888A80;
extern u32 lbl_80888A88;
extern u32 lbl_80888A90;
extern u32 lbl_80888AB0;
extern u32 lbl_80888AC0;
extern u32 lbl_80888AC4;
extern u32 lbl_80888AC8;
extern u32 lbl_80888AD0;
extern u32 lbl_80888AD8;
extern u32 lbl_80888AE0;

/* Function declarations */
void __close_all(void);
void fn_8067B510(void);
void fn_8067B594(void);
void fn_8067B600(void);
void fn_8067B6DC(void);
void fn_8067B964(void);
void fn_8067BA50(void);
void fn_8067BD6C(void);
void fn_8067BE50(void);
void fn_8067BF50(void);
void fn_8067C42C(void);
void fn_8067C590(void);
void fn_8067C734(void);
void fn_8067CE80(void);
void __prep_buffer(void);
void fn_8067CEB8(void);
void __flush_buffer(void);
void fn_8067D06C(void);
void fn_8067D19C(void);
void fn_8067D1A0(void);
void fn_8067D27C(void);
void fn_8067D280(void);
void fn_8067D5C0(void);
void __fwrite(void);
void fn_8067D8CC(void);
void fn_8067D988(void);
void fn_8067DABC(void);
void fn_8067DB74(void);
void fn_8067DC64(void);
void fn_8067DD0C(void);
void _fseek(void);
void fn_8067DED4(void);
void fn_8067DED8(void);
void fn_8067DF20(void);
void fn_8067DF38(void);
void fn_8067DF84(void);
void fn_8067DFA0(void);
void wcstombs(void);
void memmove(void);
void memchr(void);
void __memrchr(void);
void fn_8067E23C(void);
void fn_8067E288(void);
void fn_8067E344(void);
void fn_8067E3EC(void);
void fn_8067E4AC(void);
void fn_8067E558(void);
void fn_8067E570(void);
void __stdio_atexit(void);
void parse_format_8067E5FC(void);
void long2str(void);
void longlong2str(void);
void double2hex(void);
void fn_8067F470(void);
void float2str(void);
void __pformatter_8067FD34(void);
void __FileWrite(void);
void __StringWrite(void);
void fn_806806A4(void);
void fn_80680770(void);
void vprintf(void);
void vsnprintf(void);
void fn_8068093C(void);
void fn_806809C0(void);
void sprintf(void);
void fn_80680B88(void);
void fn_80680CF8(void);
void fn_80680D18(void);
void fn_80680D20(void);
void fn_806813B4(void);
void fn_8068204C(void);
void fn_806820D4(void);
void fn_80682204(void);
void strcpy(void);
void fn_8068236C(void);
void fn_806823B0(void);
void fn_806823DC(void);
void fn_80682428(void);
void fn_80682544(void);
void strchr(void);
void fn_806825B4(void);
void fn_806825FC(void);
void fn_806826A0(void);
void fn_806827C4(void);
void fn_80682830(void);
void fn_80683B54(void);
void fn_80683BB0(void);
void fn_80683FC4(void);
void fn_8068446C(void);
void fn_80684514(void);
void fn_80684600(void);
void fn_806846C4(void);
void fn_806846CC(void);
void fn_806846D4(void);
void fn_806846FC(void);
void fn_80684730(void);
void fn_80684CC0(void);
void fn_80684F04(void);
void fn_806851C0(void);
void fn_80685614(void);
void fn_8068573C(void);
void fn_80685ECC(void);
void fn_80686858(void);
void fn_806868C4(void);
void fn_806869BC(void);
void fn_80686A48(void);
void fn_80686A64(void);
void fn_80686A80(void);
void fn_80686AC4(void);
void fn_80686AF0(void);
void fn_80686B24(void);
void fn_80686B64(void);
void fn_80686B90(void);
void fn_80686CF8(void);
void fwide(void);
void fn_80686DD4(void);
void fn_80686EA4(void);
void fn_80686ED8(void);
void __msl_runtime_constraint_violation_s(void);

asm void __close_all(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x3
    stw r29, 0x14(r1)
    lis r29, __files@ha
    addi r29, r29, __files@l
    b lbl___close_all_00000080
lbl___close_all_0000002C:
    lwz r0, 0x4(r29)
    extrwi. r0, r0, 3, 7
    beq lbl___close_all_00000040
    mr r3, r29
    bl fn_8067D8CC
lbl___close_all_00000040:
    mr r3, r29
    lwz r29, 0x4c(r29)
    lbz r0, 0xc(r3)
    cmpwi r0, 0x0
    beq lbl___close_all_0000005C
    bl fn_8067AF64
    b lbl___close_all_00000080
lbl___close_all_0000005C:
    lwz r0, 0x4(r3)
    cmpwi r29, 0x0
    rlwimi r0, r30, 22, 7, 9
    stw r0, 0x4(r3)
    beq lbl___close_all_00000080
    lbz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl___close_all_00000080
    stw r31, 0x4c(r3)
lbl___close_all_00000080:
    cmpwi r29, 0x0
    bne lbl___close_all_0000002C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067B510(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, __files@ha
    addi r30, r30, __files@l
    b lbl_fn_8067B510_00000104
lbl_fn_8067B510_000000C8:
    lwz r3, 0x4(r30)
    extrwi. r0, r3, 3, 7
    beq lbl_fn_8067B510_00000100
    extrwi. r0, r3, 1, 6
    beq lbl_fn_8067B510_00000100
    lwz r0, 0x8(r30)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    bne lbl_fn_8067B510_00000100
    mr r3, r30
    bl fn_8067D988
    cmpwi r3, 0x0
    beq lbl_fn_8067B510_00000100
    li r31, -0x1
lbl_fn_8067B510_00000100:
    lwz r30, 0x4c(r30)
lbl_fn_8067B510_00000104:
    cmpwi r30, 0x0
    bne lbl_fn_8067B510_000000C8
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067B594(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lis r30, __files@ha
    addi r30, r30, __files@l
    b lbl_fn_8067B594_00000170
lbl_fn_8067B594_0000014C:
    lwz r0, 0x4(r30)
    extrwi. r0, r0, 3, 7
    beq lbl_fn_8067B594_0000016C
    mr r3, r30
    bl fn_8067D988
    cmpwi r3, 0x0
    beq lbl_fn_8067B594_0000016C
    li r31, -0x1
lbl_fn_8067B594_0000016C:
    lwz r30, 0x4c(r30)
lbl_fn_8067B594_00000170:
    cmpwi r30, 0x0
    bne lbl_fn_8067B594_0000014C
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067B600(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r3
    stb r0, 0x0(r3)
    stb r0, 0x4(r3)
    b lbl_fn_8067B600_0000020C
lbl_fn_8067B600_000001C8:
    mr r3, r31
    mr r4, r30
    li r6, 0xa
    li r5, 0x0
    bl __mod2u
    lbz r8, 0x4(r29)
    mr r3, r31
    li r6, 0xa
    li r5, 0x0
    add r7, r29, r8
    addi r0, r8, 0x1
    stb r4, 0x5(r7)
    mr r4, r30
    stb r0, 0x4(r29)
    bl __div2u
    mr r30, r4
    mr r31, r3
lbl_fn_8067B600_0000020C:
    or. r0, r30, r31
    bne lbl_fn_8067B600_000001C8
    lbz r0, 0x4(r29)
    addi r4, r29, 0x5
    add r3, r29, r0
    addi r3, r3, 0x5
    b lbl_fn_8067B600_0000023C
lbl_fn_8067B600_00000228:
    lbz r5, 0x0(r4)
    lbz r0, 0x0(r3)
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    stb r5, 0x0(r3)
lbl_fn_8067B600_0000023C:
    subi r3, r3, 0x1
    cmplw r4, r3
    blt lbl_fn_8067B600_00000228
    lbz r3, 0x4(r29)
    subi r0, r3, 0x1
    sth r0, 0x2(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067B6DC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    lis r6, 0xcccd
    lbz r8, 0x4(r4)
    subi r9, r6, 0x3333
    stw r31, 0x5c(r1)
    addi r0, r1, 0x8
    lbz r7, 0x4(r5)
    li r11, 0x0
    stw r30, 0x58(r1)
    add r12, r8, r7
    stw r29, 0x54(r1)
    subi r12, r12, 0x1
    add r6, r0, r12
    addi r6, r6, 0x1
    stb r11, 0x0(r3)
    mr r0, r6
    b lbl_fn_8067B6DC_000003E0
lbl_fn_8067B6DC_000002B4:
    lbz r7, 0x4(r5)
    subi r31, r7, 0x1
    subf r7, r31, r12
    subic. r30, r7, 0x1
    bge lbl_fn_8067B6DC_000002D0
    li r30, 0x0
    subi r31, r12, 0x1
lbl_fn_8067B6DC_000002D0:
    lbz r7, 0x4(r4)
    add r8, r5, r31
    addi r31, r31, 0x1
    add r10, r4, r30
    subf r7, r30, r7
    addi r29, r8, 0x5
    cmpw r31, r7
    addi r30, r10, 0x5
    ble lbl_fn_8067B6DC_000002F8
    mr r31, r7
lbl_fn_8067B6DC_000002F8:
    cmpwi r31, 0x0
    ble lbl_fn_8067B6DC_000003C0
    srwi. r7, r31, 3
    mtctr r7
    beq lbl_fn_8067B6DC_000003A0
lbl_fn_8067B6DC_0000030C:
    lbz r10, 0x0(r30)
    lbz r8, 0x0(r29)
    mullw r7, r10, r8
    lbz r10, 0x1(r30)
    lbz r8, -0x1(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x2(r30)
    lbz r8, -0x2(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x3(r30)
    lbz r8, -0x3(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x4(r30)
    lbz r8, -0x4(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x5(r30)
    lbz r8, -0x5(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x6(r30)
    lbz r8, -0x6(r29)
    add r11, r11, r7
    mullw r7, r10, r8
    lbz r10, 0x7(r30)
    lbz r8, -0x7(r29)
    addi r30, r30, 0x8
    subi r29, r29, 0x8
    add r11, r11, r7
    mullw r7, r10, r8
    add r11, r11, r7
    bdnz lbl_fn_8067B6DC_0000030C
    andi. r31, r31, 0x7
    beq lbl_fn_8067B6DC_000003C0
lbl_fn_8067B6DC_000003A0:
    mtctr r31
lbl_fn_8067B6DC_000003A4:
    lbz r10, 0x0(r30)
    addi r30, r30, 0x1
    lbz r8, 0x0(r29)
    subi r29, r29, 0x1
    mullw r7, r10, r8
    add r11, r11, r7
    bdnz lbl_fn_8067B6DC_000003A4
lbl_fn_8067B6DC_000003C0:
    mulhwu r8, r9, r11
    subi r12, r12, 0x1
    mr r7, r8
    srwi r8, r8, 3
    mulli r8, r8, 0xa
    subf r8, r8, r11
    stbu r8, -0x1(r6)
    srwi r11, r7, 3
lbl_fn_8067B6DC_000003E0:
    cmpwi r12, 0x0
    bgt lbl_fn_8067B6DC_000002B4
    lha r7, 0x2(r4)
    cmpwi r11, 0x0
    lha r4, 0x2(r5)
    add r4, r7, r4
    sth r4, 0x2(r3)
    beq lbl_fn_8067B6DC_00000410
    stbu r11, -0x1(r6)
    extsh r4, r4
    addi r4, r4, 0x1
    sth r4, 0x2(r3)
lbl_fn_8067B6DC_00000410:
    li r7, 0x0
    b lbl_fn_8067B6DC_0000042C
lbl_fn_8067B6DC_00000418:
    add r4, r3, r7
    lbz r5, 0x0(r6)
    stb r5, 0x5(r4)
    addi r7, r7, 0x1
    addi r6, r6, 0x1
lbl_fn_8067B6DC_0000042C:
    cmpwi r7, 0x24
    bge lbl_fn_8067B6DC_0000043C
    cmplw r6, r0
    blt lbl_fn_8067B6DC_00000418
lbl_fn_8067B6DC_0000043C:
    cmplw r6, r0
    stb r7, 0x4(r3)
    bge lbl_fn_8067B6DC_000004E4
    lbz r4, 0x0(r6)
    cmplwi r4, 0x5
    blt lbl_fn_8067B6DC_000004E4
    bne lbl_fn_8067B6DC_0000048C
    addi r5, r6, 0x1
    subf r4, r5, r0
    mtctr r4
    cmplw r5, r0
    bge lbl_fn_8067B6DC_00000480
lbl_fn_8067B6DC_0000046C:
    lbz r0, 0x0(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8067B6DC_0000048C
    addi r5, r5, 0x1
    bdnz lbl_fn_8067B6DC_0000046C
lbl_fn_8067B6DC_00000480:
    lbz r0, -0x1(r6)
    clrlwi. r0, r0, 31
    beq lbl_fn_8067B6DC_000004E4
lbl_fn_8067B6DC_0000048C:
    lbz r4, 0x4(r3)
    addi r6, r3, 0x5
    li r0, 0x0
    add r5, r6, r4
    subi r5, r5, 0x1
lbl_fn_8067B6DC_000004A0:
    lbz r4, 0x0(r5)
    cmplwi r4, 0x9
    bge lbl_fn_8067B6DC_000004B8
    addi r0, r4, 0x1
    stb r0, 0x0(r5)
    b lbl_fn_8067B6DC_000004E4
lbl_fn_8067B6DC_000004B8:
    cmplw r5, r6
    bne lbl_fn_8067B6DC_000004D8
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r4, 0x2(r3)
    addi r0, r4, 0x1
    sth r0, 0x2(r3)
    b lbl_fn_8067B6DC_000004E4
lbl_fn_8067B6DC_000004D8:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_fn_8067B6DC_000004A0
lbl_fn_8067B6DC_000004E4:
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    addi r1, r1, 0x60
    blr
}

asm void fn_8067B964(void)
{
    nofralloc
    li r0, 0x0
    sth r5, 0x2(r3)
    li r7, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_8067B964_00000524
lbl_fn_8067B964_0000050C:
    lbz r6, 0x0(r4)
    add r5, r3, r7
    addi r4, r4, 0x1
    addi r7, r7, 0x1
    subi r0, r6, 0x30
    stb r0, 0x5(r5)
lbl_fn_8067B964_00000524:
    cmpwi r7, 0x24
    bge lbl_fn_8067B964_00000538
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_8067B964_0000050C
lbl_fn_8067B964_00000538:
    lbz r0, 0x0(r4)
    stb r7, 0x4(r3)
    extsb. r0, r0
    beqlr
    cmpwi r0, 0x5
    bltlr
    bgt lbl_fn_8067B964_00000588
    addi r5, r4, 0x1
    b lbl_fn_8067B964_0000056C
lbl_fn_8067B964_0000055C:
    extsb r0, r4
    cmpwi r0, 0x30
    bne lbl_fn_8067B964_00000588
    addi r5, r5, 0x1
lbl_fn_8067B964_0000056C:
    lbz r4, 0x0(r5)
    extsb. r0, r4
    bne lbl_fn_8067B964_0000055C
    add r4, r7, r3
    lbz r0, 0x4(r4)
    clrlwi. r0, r0, 31
    beqlr
lbl_fn_8067B964_00000588:
    lbz r4, 0x4(r3)
    addi r6, r3, 0x5
    li r0, 0x0
    add r5, r6, r4
    subi r5, r5, 0x1
lbl_fn_8067B964_0000059C:
    lbz r4, 0x0(r5)
    cmplwi r4, 0x9
    bge lbl_fn_8067B964_000005B4
    addi r0, r4, 0x1
    stb r0, 0x0(r5)
    blr
lbl_fn_8067B964_000005B4:
    cmplw r5, r6
    bne lbl_fn_8067B964_000005D4
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r4, 0x2(r3)
    addi r0, r4, 0x1
    sth r0, 0x2(r3)
    blr
lbl_fn_8067B964_000005D4:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_fn_8067B964_0000059C
    blr
}

asm void fn_8067BA50(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r0, r4, 0x40
    cmplwi r0, 0x48
    stw r31, 0x6c(r1)
    mr r31, r3
    stw r30, 0x68(r1)
    mr r30, r4
    bgt lbl_fn_8067BA50_00000818
    lis r5, jumptable_807BB068@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_807BB068@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lis r4, lbl_80765258@ha
    li r5, -0x14
    addi r4, r4, lbl_80765258@l
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x10
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x2e
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0xa
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x55
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x5
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x6d
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x3
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x7a
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x3
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x81
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x2
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x87
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x2
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x8d
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x2
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x92
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x96
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x9a
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, -0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x9d
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x0
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0x9f
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x0
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xa1
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x0
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xa3
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x0
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xa5
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xa7
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xaa
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x1
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xad
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x2
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xb0
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
    lis r4, lbl_80765258@ha
    li r5, 0x2
    addi r4, r4, lbl_80765258@l
    addi r4, r4, 0xb4
    bl fn_8067B964
    b lbl_fn_8067BA50_000008E8
lbl_fn_8067BA50_00000818:
    srwi r0, r4, 31
    addi r3, r1, 0x34
    add r0, r0, r4
    srawi r4, r0, 1
    bl fn_8067BA50
    addi r4, r1, 0x34
    mr r3, r31
    mr r5, r4
    bl fn_8067B6DC
    clrlwi. r0, r30, 31
    beq lbl_fn_8067BA50_000008E8
    lwz r3, 0x0(r31)
    cmpwi r30, 0x0
    lwz r0, 0x4(r31)
    stw r0, 0xc(r1)
    stw r3, 0x8(r1)
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    stw r0, 0x14(r1)
    stw r3, 0x10(r1)
    lwz r3, 0x10(r31)
    lwz r0, 0x14(r31)
    stw r0, 0x1c(r1)
    stw r3, 0x18(r1)
    lwz r3, 0x18(r31)
    lwz r0, 0x1c(r31)
    stw r0, 0x24(r1)
    stw r3, 0x20(r1)
    lwz r3, 0x20(r31)
    lwz r0, 0x24(r31)
    stw r0, 0x2c(r1)
    stw r3, 0x28(r1)
    lhz r0, 0x28(r31)
    sth r0, 0x30(r1)
    ble lbl_fn_8067BA50_000008C0
    lis r4, lbl_80765258@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_80765258@l
    li r5, 0x0
    addi r4, r4, 0xa1
    bl fn_8067B964
    b lbl_fn_8067BA50_000008D8
lbl_fn_8067BA50_000008C0:
    lis r4, lbl_80765258@ha
    addi r3, r1, 0x34
    addi r4, r4, lbl_80765258@l
    li r5, -0x1
    addi r4, r4, 0x9d
    bl fn_8067B964
lbl_fn_8067BA50_000008D8:
    mr r3, r31
    addi r4, r1, 0x8
    addi r5, r1, 0x34
    bl fn_8067B6DC
lbl_fn_8067BA50_000008E8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8067BD6C(void)
{
    nofralloc
    lbz r5, 0x5(r3)
    cmpwi r5, 0x0
    bne lbl_fn_8067BD6C_0000091C
    lbz r0, 0x5(r4)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8067BD6C_0000091C:
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8067BD6C_00000934
    cntlzw r0, r5
    srwi r3, r0, 5
    blr
lbl_fn_8067BD6C_00000934:
    lha r5, 0x2(r3)
    lha r0, 0x2(r4)
    cmpw r5, r0
    bne lbl_fn_8067BD6C_000009DC
    lbz r7, 0x4(r3)
    lbz r0, 0x4(r4)
    mr r9, r7
    cmpw r7, r0
    ble lbl_fn_8067BD6C_0000095C
    mr r9, r0
lbl_fn_8067BD6C_0000095C:
    li r8, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8067BD6C_00000994
lbl_fn_8067BD6C_0000096C:
    add r6, r3, r8
    add r5, r4, r8
    lbz r6, 0x5(r6)
    lbz r0, 0x5(r5)
    cmplw r6, r0
    beq lbl_fn_8067BD6C_0000098C
    li r3, 0x0
    blr
lbl_fn_8067BD6C_0000098C:
    addi r8, r8, 0x1
    bdnz lbl_fn_8067BD6C_0000096C
lbl_fn_8067BD6C_00000994:
    cmpw r9, r7
    bne lbl_fn_8067BD6C_000009A0
    mr r3, r4
lbl_fn_8067BD6C_000009A0:
    lbz r4, 0x4(r3)
    subf r0, r8, r4
    mtctr r0
    cmpw r8, r4
    bge lbl_fn_8067BD6C_000009D4
lbl_fn_8067BD6C_000009B4:
    add r4, r3, r8
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8067BD6C_000009CC
    li r3, 0x0
    blr
lbl_fn_8067BD6C_000009CC:
    addi r8, r8, 0x1
    bdnz lbl_fn_8067BD6C_000009B4
lbl_fn_8067BD6C_000009D4:
    li r3, 0x1
    blr
lbl_fn_8067BD6C_000009DC:
    li r3, 0x0
    blr
}

asm void fn_8067BE50(void)
{
    nofralloc
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8067BE50_00000A04
    lbz r3, 0x5(r4)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
lbl_fn_8067BE50_00000A04:
    lbz r0, 0x5(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8067BE50_00000A18
    li r3, 0x0
    blr
lbl_fn_8067BE50_00000A18:
    lha r5, 0x2(r4)
    lha r0, 0x2(r3)
    cmpw r0, r5
    bne lbl_fn_8067BE50_00000ACC
    lbz r7, 0x4(r3)
    lbz r0, 0x4(r4)
    mr r9, r7
    cmpw r7, r0
    ble lbl_fn_8067BE50_00000A40
    mr r9, r0
lbl_fn_8067BE50_00000A40:
    li r8, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_8067BE50_00000A88
lbl_fn_8067BE50_00000A50:
    add r6, r4, r8
    add r5, r3, r8
    lbz r6, 0x5(r6)
    lbz r0, 0x5(r5)
    cmplw r0, r6
    bge lbl_fn_8067BE50_00000A70
    li r3, 0x1
    blr
lbl_fn_8067BE50_00000A70:
    cmplw r6, r0
    bge lbl_fn_8067BE50_00000A80
    li r3, 0x0
    blr
lbl_fn_8067BE50_00000A80:
    addi r8, r8, 0x1
    bdnz lbl_fn_8067BE50_00000A50
lbl_fn_8067BE50_00000A88:
    cmpw r9, r7
    bne lbl_fn_8067BE50_00000AC4
    lbz r3, 0x4(r4)
    subf r0, r8, r3
    mtctr r0
    cmpw r8, r3
    bge lbl_fn_8067BE50_00000AC4
lbl_fn_8067BE50_00000AA4:
    add r3, r4, r8
    lbz r0, 0x5(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8067BE50_00000ABC
    li r3, 0x1
    blr
lbl_fn_8067BE50_00000ABC:
    addi r8, r8, 0x1
    bdnz lbl_fn_8067BE50_00000AA4
lbl_fn_8067BE50_00000AC4:
    li r3, 0x0
    blr
lbl_fn_8067BE50_00000ACC:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_8067BF50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lwz r12, 0xc(r4)
    stw r31, 0x1c(r1)
    lwz r31, 0x8(r4)
    stw r30, 0x18(r1)
    lwz r30, 0x4(r4)
    stw r29, 0x14(r1)
    lwz r29, 0x0(r4)
    lwz r11, 0x10(r4)
    lwz r10, 0x14(r4)
    lwz r9, 0x18(r4)
    lwz r8, 0x1c(r4)
    lwz r7, 0x20(r4)
    lwz r6, 0x24(r4)
    lhz r0, 0x28(r4)
    stw r29, 0x0(r3)
    stw r30, 0x4(r3)
    stw r31, 0x8(r3)
    stw r12, 0xc(r3)
    stw r11, 0x10(r3)
    stw r10, 0x14(r3)
    stw r9, 0x18(r3)
    stw r8, 0x1c(r3)
    stw r7, 0x20(r3)
    stw r6, 0x24(r3)
    sth r0, 0x28(r3)
    lbz r0, 0x5(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8067BF50_00000FAC
    lbz r8, 0x4(r3)
    lbz r0, 0x4(r5)
    cmpw r8, r0
    bge lbl_fn_8067BF50_00000B6C
    mr r8, r0
lbl_fn_8067BF50_00000B6C:
    lha r4, 0x2(r5)
    lha r0, 0x2(r3)
    subf r0, r4, r0
    add r8, r8, r0
    cmpwi r8, 0x24
    ble lbl_fn_8067BF50_00000B88
    li r8, 0x24
lbl_fn_8067BF50_00000B88:
    li r7, 0x0
    b lbl_fn_8067BF50_00000BA4
lbl_fn_8067BF50_00000B90:
    lbz r6, 0x4(r3)
    add r4, r3, r6
    addi r6, r6, 0x1
    stb r7, 0x5(r4)
    stb r6, 0x4(r3)
lbl_fn_8067BF50_00000BA4:
    lbz r4, 0x4(r3)
    cmpw r4, r8
    blt lbl_fn_8067BF50_00000B90
    lbz r7, 0x4(r5)
    addi r4, r3, 0x5
    add r6, r4, r8
    add r7, r7, r0
    cmpw r7, r8
    bge lbl_fn_8067BF50_00000BCC
    add r6, r4, r7
lbl_fn_8067BF50_00000BCC:
    subf r7, r4, r6
    addi r9, r5, 0x5
    subf r7, r0, r7
    add r10, r9, r7
    mr r11, r10
    b lbl_fn_8067BF50_00000D04
lbl_fn_8067BF50_00000BE4:
    lbzu r8, -0x1(r6)
    lbzu r7, -0x1(r10)
    cmplw r8, r7
    bge lbl_fn_8067BF50_00000CF4
    subi r12, r6, 0x1
    b lbl_fn_8067BF50_00000C00
lbl_fn_8067BF50_00000BFC:
    subi r12, r12, 0x1
lbl_fn_8067BF50_00000C00:
    lbz r7, 0x0(r12)
    cmpwi r7, 0x0
    beq lbl_fn_8067BF50_00000BFC
    cmplw r12, r6
    subf r8, r12, r6
    beq lbl_fn_8067BF50_00000CF4
    srwi. r7, r8, 3
    mtctr r7
    beq lbl_fn_8067BF50_00000CD4
lbl_fn_8067BF50_00000C24:
    lbz r7, 0x0(r12)
    subi r7, r7, 0x1
    stb r7, 0x0(r12)
    lbz r7, 0x1(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x1(r12)
    lbz r7, 0x2(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x2(r12)
    lbz r7, 0x3(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x3(r12)
    lbz r7, 0x4(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x4(r12)
    lbz r7, 0x5(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x5(r12)
    lbz r7, 0x6(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x6(r12)
    lbz r7, 0x7(r12)
    addi r7, r7, 0xa
    clrlwi r7, r7, 24
    subi r7, r7, 0x1
    stb r7, 0x7(r12)
    lbz r7, 0x8(r12)
    addi r7, r7, 0xa
    stbu r7, 0x8(r12)
    bdnz lbl_fn_8067BF50_00000C24
    andi. r8, r8, 0x7
    beq lbl_fn_8067BF50_00000CF4
lbl_fn_8067BF50_00000CD4:
    mtctr r8
lbl_fn_8067BF50_00000CD8:
    lbz r7, 0x0(r12)
    subi r7, r7, 0x1
    stb r7, 0x0(r12)
    lbz r7, 0x1(r12)
    addi r7, r7, 0xa
    stbu r7, 0x1(r12)
    bdnz lbl_fn_8067BF50_00000CD8
lbl_fn_8067BF50_00000CF4:
    lbz r8, 0x0(r10)
    lbz r7, 0x0(r6)
    subf r7, r8, r7
    stb r7, 0x0(r6)
lbl_fn_8067BF50_00000D04:
    cmplw r6, r4
    ble lbl_fn_8067BF50_00000D14
    cmplw r10, r9
    bgt lbl_fn_8067BF50_00000BE4
lbl_fn_8067BF50_00000D14:
    lbz r8, 0x4(r5)
    subf r9, r9, r11
    cmpw r9, r8
    bge lbl_fn_8067BF50_00000EA8
    lbz r7, 0x0(r11)
    li r10, 0x0
    cmplwi r7, 0x5
    bge lbl_fn_8067BF50_00000D3C
    li r10, 0x1
    b lbl_fn_8067BF50_00000D88
lbl_fn_8067BF50_00000D3C:
    bne lbl_fn_8067BF50_00000D88
    add r5, r5, r8
    addi r6, r11, 0x1
    addi r7, r5, 0x5
    subf r5, r6, r7
    mtctr r5
    cmplw r6, r7
    bge lbl_fn_8067BF50_00000D70
lbl_fn_8067BF50_00000D5C:
    lbz r5, 0x0(r6)
    cmpwi r5, 0x0
    bne lbl_fn_8067BF50_00000EA8
    addi r6, r6, 0x1
    bdnz lbl_fn_8067BF50_00000D5C
lbl_fn_8067BF50_00000D70:
    add r5, r4, r9
    add r6, r0, r5
    lbzu r0, -0x1(r6)
    clrlwi. r0, r0, 31
    beq lbl_fn_8067BF50_00000D88
    li r10, 0x1
lbl_fn_8067BF50_00000D88:
    cmpwi r10, 0x0
    beq lbl_fn_8067BF50_00000EA8
    lbz r0, 0x0(r6)
    cmplwi r0, 0x1
    bge lbl_fn_8067BF50_00000E9C
    subi r8, r6, 0x1
    b lbl_fn_8067BF50_00000DA8
lbl_fn_8067BF50_00000DA4:
    subi r8, r8, 0x1
lbl_fn_8067BF50_00000DA8:
    lbz r0, 0x0(r8)
    cmpwi r0, 0x0
    beq lbl_fn_8067BF50_00000DA4
    cmplw r8, r6
    subf r5, r8, r6
    beq lbl_fn_8067BF50_00000E9C
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8067BF50_00000E7C
lbl_fn_8067BF50_00000DCC:
    lbz r7, 0x0(r8)
    subi r0, r7, 0x1
    stb r0, 0x0(r8)
    lbz r7, 0x1(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x1(r8)
    lbz r7, 0x2(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x2(r8)
    lbz r7, 0x3(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x3(r8)
    lbz r7, 0x4(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x4(r8)
    lbz r7, 0x5(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x5(r8)
    lbz r7, 0x6(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x6(r8)
    lbz r7, 0x7(r8)
    addi r0, r7, 0xa
    clrlwi r7, r0, 24
    subi r0, r7, 0x1
    stb r0, 0x7(r8)
    lbz r7, 0x8(r8)
    addi r0, r7, 0xa
    stbu r0, 0x8(r8)
    bdnz lbl_fn_8067BF50_00000DCC
    andi. r5, r5, 0x7
    beq lbl_fn_8067BF50_00000E9C
lbl_fn_8067BF50_00000E7C:
    mtctr r5
lbl_fn_8067BF50_00000E80:
    lbz r7, 0x0(r8)
    subi r0, r7, 0x1
    stb r0, 0x0(r8)
    lbz r7, 0x1(r8)
    addi r0, r7, 0xa
    stbu r0, 0x1(r8)
    bdnz lbl_fn_8067BF50_00000E80
lbl_fn_8067BF50_00000E9C:
    lbz r5, 0x0(r6)
    subi r0, r5, 0x1
    stb r0, 0x0(r6)
lbl_fn_8067BF50_00000EA8:
    mr r7, r4
    b lbl_fn_8067BF50_00000EB4
lbl_fn_8067BF50_00000EB0:
    addi r7, r7, 0x1
lbl_fn_8067BF50_00000EB4:
    lbz r0, 0x0(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8067BF50_00000EB0
    cmplw r7, r4
    ble lbl_fn_8067BF50_00000F74
    lbz r0, 0x4(r3)
    subf r6, r4, r7
    clrlwi r8, r6, 24
    lha r5, 0x2(r3)
    add r6, r4, r0
    cmplw r7, r6
    subf r0, r8, r5
    sth r0, 0x2(r3)
    subf r5, r7, r6
    bge lbl_fn_8067BF50_00000F68
    srwi. r0, r5, 3
    mtctr r0
    beq lbl_fn_8067BF50_00000F50
lbl_fn_8067BF50_00000EFC:
    lbz r0, 0x0(r7)
    stb r0, 0x0(r4)
    lbz r0, 0x1(r7)
    stb r0, 0x1(r4)
    lbz r0, 0x2(r7)
    stb r0, 0x2(r4)
    lbz r0, 0x3(r7)
    stb r0, 0x3(r4)
    lbz r0, 0x4(r7)
    stb r0, 0x4(r4)
    lbz r0, 0x5(r7)
    stb r0, 0x5(r4)
    lbz r0, 0x6(r7)
    stb r0, 0x6(r4)
    lbz r0, 0x7(r7)
    addi r7, r7, 0x8
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8067BF50_00000EFC
    andi. r5, r5, 0x7
    beq lbl_fn_8067BF50_00000F68
lbl_fn_8067BF50_00000F50:
    mtctr r5
lbl_fn_8067BF50_00000F54:
    lbz r0, 0x0(r7)
    addi r7, r7, 0x1
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_8067BF50_00000F54
lbl_fn_8067BF50_00000F68:
    lbz r0, 0x4(r3)
    subf r0, r8, r0
    stb r0, 0x4(r3)
lbl_fn_8067BF50_00000F74:
    lbz r0, 0x4(r3)
    addi r4, r3, 0x5
    add r5, r4, r0
    subf r0, r4, r5
    mtctr r0
    cmplw r5, r4
    ble lbl_fn_8067BF50_00000FA0
lbl_fn_8067BF50_00000F90:
    lbzu r0, -0x1(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8067BF50_00000FA0
    bdnz lbl_fn_8067BF50_00000F90
lbl_fn_8067BF50_00000FA0:
    subf r4, r4, r5
    addi r0, r4, 0x1
    stb r0, 0x4(r3)
lbl_fn_8067BF50_00000FAC:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8067C42C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stfd f31, 0x88(r1)
    fmr f31, f1
    stw r31, 0x84(r1)
    stw r30, 0x80(r1)
    mr r30, r3
    stw r29, 0x7c(r1)
    bl fn_8067E558
    lfd f0, lbl_80888A60
    neg r0, r3
    or r0, r0, r3
    fcmpu cr0, f0, f31
    srwi r0, r0, 31
    extsb r31, r0
    bne lbl_fn_8067C42C_00001020
    li r3, 0x0
    li r0, 0x1
    stb r31, 0x0(r30)
    sth r3, 0x2(r30)
    stb r0, 0x4(r30)
    stb r3, 0x5(r30)
    b lbl_fn_8067C42C_00001104
lbl_fn_8067C42C_00001020:
    fmr f1, f31
    bl fn_8067E570
    cmpwi r3, 0x2
    bgt lbl_fn_8067C42C_00001064
    fmr f1, f31
    li r3, 0x0
    li r0, 0x1
    stb r31, 0x0(r30)
    sth r3, 0x2(r30)
    stb r0, 0x4(r30)
    bl fn_8067E570
    cmpwi r3, 0x1
    li r0, 0x49
    bne lbl_fn_8067C42C_0000105C
    li r0, 0x4e
lbl_fn_8067C42C_0000105C:
    stb r0, 0x5(r30)
    b lbl_fn_8067C42C_00001104
lbl_fn_8067C42C_00001064:
    cmpwi r31, 0x0
    beq lbl_fn_8067C42C_00001070
    fneg f31, f31
lbl_fn_8067C42C_00001070:
    fmr f1, f31
    addi r3, r1, 0x8
    bl fn_8068AA68
    stfd f1, 0x10(r1)
    fmr f31, f1
    lwz r4, 0x14(r1)
    lwz r3, 0x10(r1)
    subi r0, r4, 0x1
    cmpwi r4, 0x0
    andc r0, r0, r4
    oris r3, r3, 0x10
    cntlzw r0, r0
    subfic r4, r0, 0x20
    bne lbl_fn_8067C42C_000010BC
    subi r0, r3, 0x1
    andc r0, r0, r3
    cntlzw r0, r0
    subfic r3, r0, 0x20
    addi r4, r3, 0x20
lbl_fn_8067C42C_000010BC:
    lwz r0, 0x8(r1)
    subfic r29, r4, 0x35
    addi r3, r1, 0x18
    subf r4, r29, r0
    bl fn_8067BA50
    fmr f1, f31
    mr r3, r29
    bl fn_8068AAF0
    bl fn_806964D0
    mr r5, r3
    mr r6, r4
    addi r3, r1, 0x44
    bl fn_8067B600
    mr r3, r30
    addi r4, r1, 0x44
    addi r5, r1, 0x18
    bl fn_8067B6DC
    stb r31, 0x0(r30)
lbl_fn_8067C42C_00001104:
    lwz r0, 0x94(r1)
    lfd f31, 0x88(r1)
    lwz r31, 0x84(r1)
    lwz r30, 0x80(r1)
    lwz r29, 0x7c(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8067C590(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lha r31, 0x2(r3)
    stw r30, 0x8(r1)
    mr r30, r4
    mr r3, r30
    bl fn_8067C42C
    lbz r0, 0x5(r30)
    cmplwi r0, 0x9
    bgt lbl_fn_8067C590_000012B0
    cmpwi r31, 0x24
    ble lbl_fn_8067C590_00001160
    li r31, 0x24
lbl_fn_8067C590_00001160:
    cmpwi r31, 0x0
    ble lbl_fn_8067C590_0000124C
    lbz r0, 0x4(r30)
    cmpw r31, r0
    bge lbl_fn_8067C590_0000124C
    addi r4, r30, 0x5
    lbzx r0, r4, r31
    add r3, r4, r31
    cmplwi r0, 0x5
    ble lbl_fn_8067C590_00001190
    li r4, 0x1
    b lbl_fn_8067C590_000011EC
lbl_fn_8067C590_00001190:
    bge lbl_fn_8067C590_0000119C
    li r4, -0x1
    b lbl_fn_8067C590_000011EC
lbl_fn_8067C590_0000119C:
    lbz r0, 0x4(r30)
    addi r3, r3, 0x1
    add r4, r4, r0
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_8067C590_000011D4
lbl_fn_8067C590_000011B8:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8067C590_000011CC
    li r4, 0x1
    b lbl_fn_8067C590_000011EC
lbl_fn_8067C590_000011CC:
    addi r3, r3, 0x1
    bdnz lbl_fn_8067C590_000011B8
lbl_fn_8067C590_000011D4:
    add r3, r31, r30
    li r4, -0x1
    lbz r0, 0x4(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8067C590_000011EC
    li r4, 0x1
lbl_fn_8067C590_000011EC:
    cmpwi r4, 0x0
    stb r31, 0x4(r30)
    blt lbl_fn_8067C590_0000124C
    addi r4, r30, 0x5
    li r0, 0x0
    add r5, r4, r31
    subi r5, r5, 0x1
lbl_fn_8067C590_00001208:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x9
    bge lbl_fn_8067C590_00001220
    addi r0, r3, 0x1
    stb r0, 0x0(r5)
    b lbl_fn_8067C590_0000124C
lbl_fn_8067C590_00001220:
    cmplw r5, r4
    bne lbl_fn_8067C590_00001240
    li r0, 0x1
    stb r0, 0x0(r5)
    lha r3, 0x2(r30)
    addi r0, r3, 0x1
    sth r0, 0x2(r30)
    b lbl_fn_8067C590_0000124C
lbl_fn_8067C590_00001240:
    stb r0, 0x0(r5)
    subi r5, r5, 0x1
    b lbl_fn_8067C590_00001208
lbl_fn_8067C590_0000124C:
    li r5, 0x0
    b lbl_fn_8067C590_00001268
lbl_fn_8067C590_00001254:
    lbz r4, 0x4(r30)
    add r3, r30, r4
    addi r0, r4, 0x1
    stb r5, 0x5(r3)
    stb r0, 0x4(r30)
lbl_fn_8067C590_00001268:
    lbz r3, 0x4(r30)
    cmpw r3, r31
    blt lbl_fn_8067C590_00001254
    subi r3, r3, 0x1
    lha r0, 0x2(r30)
    extsh r3, r3
    li r5, 0x0
    subf r0, r3, r0
    sth r0, 0x2(r30)
    b lbl_fn_8067C590_000012A4
lbl_fn_8067C590_00001290:
    add r4, r30, r5
    addi r5, r5, 0x1
    lbz r3, 0x5(r4)
    addi r0, r3, 0x30
    stb r0, 0x5(r4)
lbl_fn_8067C590_000012A4:
    lbz r0, 0x4(r30)
    cmpw r5, r0
    blt lbl_fn_8067C590_00001290
lbl_fn_8067C590_000012B0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067C734(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x170
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    bl _savegpr_21
    lbz r0, 0x4(r3)
    lis r4, 0x4330
    stw r4, 0x128(r1)
    mr r27, r3
    cmpwi r0, 0x0
    stw r4, 0x130(r1)
    bne lbl_fn_8067C734_00001324
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8067C734_00001314
    lfd f2, lbl_80888A68
    b lbl_fn_8067C734_00001318
lbl_fn_8067C734_00001314:
    lfd f2, lbl_80888A70
lbl_fn_8067C734_00001318:
    lfd f1, lbl_80888A60
    bl fn_8068A824
    b lbl_fn_8067C734_000019F4
lbl_fn_8067C734_00001324:
    lbz r0, 0x5(r3)
    cmpwi r0, 0x30
    beq lbl_fn_8067C734_00001344
    cmpwi r0, 0x49
    beq lbl_fn_8067C734_00001368
    cmpwi r0, 0x4e
    beq lbl_fn_8067C734_00001390
    b lbl_fn_8067C734_000013D0
lbl_fn_8067C734_00001344:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8067C734_00001358
    lfd f2, lbl_80888A68
    b lbl_fn_8067C734_0000135C
lbl_fn_8067C734_00001358:
    lfd f2, lbl_80888A70
lbl_fn_8067C734_0000135C:
    lfd f1, lbl_80888A60
    bl fn_8068A824
    b lbl_fn_8067C734_000019F4
lbl_fn_8067C734_00001368:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_8067C734_0000137C
    lfd f2, lbl_80888A68
    b lbl_fn_8067C734_00001380
lbl_fn_8067C734_0000137C:
    lfd f2, lbl_80888A70
lbl_fn_8067C734_00001380:
    lis r3, lbl_8087EC04@ha
    lfs f1, lbl_8087EC04@l(r3)
    bl fn_8068A824
    b lbl_fn_8067C734_000019F4
lbl_fn_8067C734_00001390:
    lbz r0, 0x0(r3)
    li r4, 0x0
    lis r3, 0x7ff0
    stw r4, 0x1c(r1)
    extsb. r0, r0
    stw r3, 0x18(r1)
    beq lbl_fn_8067C734_000013BC
    lis r0, 0x8000
    stw r4, 0x1c(r1)
    oris r0, r0, 0x7ff0
    stw r0, 0x18(r1)
lbl_fn_8067C734_000013BC:
    lwz r0, 0x18(r1)
    oris r0, r0, 0x8
    stw r0, 0x18(r1)
    lfd f1, 0x18(r1)
    b lbl_fn_8067C734_000019F4
lbl_fn_8067C734_000013D0:
    lwz r0, 0x4(r3)
    addi r4, r1, 0x101
    stw r0, 0x100(r1)
    lwz r21, 0x0(r3)
    lbz r0, 0x100(r1)
    lwz r12, 0x8(r3)
    add r28, r4, r0
    lwz r11, 0xc(r3)
    lwz r10, 0x10(r3)
    cmplw cr1, r4, r28
    lwz r9, 0x14(r3)
    lwz r8, 0x18(r3)
    lwz r7, 0x1c(r3)
    lwz r6, 0x20(r3)
    lwz r5, 0x24(r3)
    lhz r0, 0x28(r3)
    stw r21, 0xfc(r1)
    stw r12, 0x104(r1)
    stw r11, 0x108(r1)
    stw r10, 0x10c(r1)
    stw r9, 0x110(r1)
    stw r8, 0x114(r1)
    stw r7, 0x118(r1)
    stw r6, 0x11c(r1)
    stw r5, 0x120(r1)
    sth r0, 0x124(r1)
    bge cr1, lbl_fn_8067C734_000014F4
    subf r0, r4, r28
    subi r3, r28, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_8067C734_000014D0
    bgt cr1, lbl_fn_8067C734_000014D0
    addi r0, r3, 0x7
    subf r0, r4, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_8067C734_000014D0
lbl_fn_8067C734_00001468:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    lbz r3, 0x1(r4)
    subi r0, r3, 0x30
    stb r0, 0x1(r4)
    lbz r3, 0x2(r4)
    subi r0, r3, 0x30
    stb r0, 0x2(r4)
    lbz r3, 0x3(r4)
    subi r0, r3, 0x30
    stb r0, 0x3(r4)
    lbz r3, 0x4(r4)
    subi r0, r3, 0x30
    stb r0, 0x4(r4)
    lbz r3, 0x5(r4)
    subi r0, r3, 0x30
    stb r0, 0x5(r4)
    lbz r3, 0x6(r4)
    subi r0, r3, 0x30
    stb r0, 0x6(r4)
    lbz r3, 0x7(r4)
    subi r0, r3, 0x30
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_8067C734_00001468
lbl_fn_8067C734_000014D0:
    subf r0, r4, r28
    mtctr r0
    cmplw r4, r28
    bge lbl_fn_8067C734_000014F4
lbl_fn_8067C734_000014E0:
    lbz r3, 0x0(r4)
    subi r0, r3, 0x30
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_8067C734_000014E0
lbl_fn_8067C734_000014F4:
    lbz r3, 0x100(r1)
    lis r4, lbl_80765258@ha
    addi r4, r4, lbl_80765258@l
    lha r5, 0xfe(r1)
    subi r0, r3, 0x1
    addi r3, r1, 0xd0
    extsh r0, r0
    addi r4, r4, 0xb8
    add r0, r5, r0
    sth r0, 0xfe(r1)
    extsh r29, r0
    li r5, 0x134
    bl fn_8067B964
    addi r3, r1, 0xd0
    addi r4, r1, 0xfc
    bl fn_8067BE50
    cmpwi r3, 0x0
    beq lbl_fn_8067C734_00001564
    lbz r0, 0x0(r27)
    extsb. r0, r0
    bne lbl_fn_8067C734_00001550
    lfd f2, lbl_80888A68
    b lbl_fn_8067C734_00001554
lbl_fn_8067C734_00001550:
    lfd f2, lbl_80888A70
lbl_fn_8067C734_00001554:
    lis r3, lbl_8087EC04@ha
    lfs f1, lbl_8087EC04@l(r3)
    bl fn_8068A824
    b lbl_fn_8067C734_000019F4
lbl_fn_8067C734_00001564:
    lbz r0, 0x101(r1)
    lis r7, lbl_807BB190@ha
    stw r0, 0x12c(r1)
    addi r4, r1, 0x102
    lfd f2, lbl_80888A88
    addi r7, r7, lbl_807BB190@l
    lfd f0, 0x128(r1)
    lis r3, 0x8000
    fsub f31, f0, f2
    b lbl_fn_8067C734_000016C8
lbl_fn_8067C734_0000158C:
    subf r5, r4, r28
    li r10, 0x0
    slwi r0, r5, 29
    srwi r5, r5, 31
    subf r0, r5, r0
    rotlwi r0, r0, 3
    add. r6, r0, r5
    bne lbl_fn_8067C734_000015B0
    li r6, 0x8
lbl_fn_8067C734_000015B0:
    cmpwi cr1, r6, 0x0
    li r5, 0x0
    ble cr1, lbl_fn_8067C734_00001690
    cmpwi r6, 0x8
    subi r8, r6, 0x8
    ble lbl_fn_8067C734_00001668
    li r9, 0x0
    blt cr1, lbl_fn_8067C734_000015E0
    subi r0, r3, 0x2
    cmpw r6, r0
    bgt lbl_fn_8067C734_000015E0
    li r9, 0x1
lbl_fn_8067C734_000015E0:
    cmpwi r9, 0x0
    beq lbl_fn_8067C734_00001668
    addi r0, r8, 0x7
    srwi r0, r0, 3
    mtctr r0
    cmpwi r8, 0x0
    ble lbl_fn_8067C734_00001668
lbl_fn_8067C734_000015FC:
    mulli r0, r10, 0xa
    lbz r9, 0x0(r4)
    lbz r8, 0x1(r4)
    addi r5, r5, 0x8
    lbz r21, 0x2(r4)
    add r0, r9, r0
    mulli r0, r0, 0xa
    lbz r12, 0x3(r4)
    lbz r11, 0x4(r4)
    lbz r10, 0x5(r4)
    add r0, r8, r0
    lbz r9, 0x6(r4)
    mulli r0, r0, 0xa
    lbz r8, 0x7(r4)
    addi r4, r4, 0x8
    add r0, r21, r0
    mulli r0, r0, 0xa
    add r0, r12, r0
    mulli r0, r0, 0xa
    add r0, r11, r0
    mulli r0, r0, 0xa
    add r0, r10, r0
    mulli r0, r0, 0xa
    add r0, r9, r0
    mulli r0, r0, 0xa
    add r10, r8, r0
    bdnz lbl_fn_8067C734_000015FC
lbl_fn_8067C734_00001668:
    subf r0, r5, r6
    mtctr r0
    cmpw r5, r6
    bge lbl_fn_8067C734_00001690
lbl_fn_8067C734_00001678:
    mulli r0, r10, 0xa
    lbz r8, 0x0(r4)
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    add r10, r8, r0
    bdnz lbl_fn_8067C734_00001678
lbl_fn_8067C734_00001690:
    slwi r0, r6, 3
    stw r10, 0x134(r1)
    add r5, r7, r0
    cmpwi r10, 0x0
    lfd f1, -0x8(r5)
    lfd f0, 0x130(r1)
    fmul f1, f31, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    beq lbl_fn_8067C734_000016C0
    fcmpu cr0, f1, f0
    beq lbl_fn_8067C734_000016D0
lbl_fn_8067C734_000016C0:
    fmr f31, f0
    subf r29, r6, r29
lbl_fn_8067C734_000016C8:
    cmplw r4, r28
    blt lbl_fn_8067C734_0000158C
lbl_fn_8067C734_000016D0:
    cmpwi r29, 0x0
    bge lbl_fn_8067C734_00001700
    neg r0, r29
    lfd f2, lbl_80888A90
    xoris r0, r0, 0x8000
    stw r0, 0x12c(r1)
    lfd f1, lbl_80888A78
    lfd f0, 0x128(r1)
    fsub f2, f0, f2
    bl fn_8068AEB0
    fdiv f31, f31, f1
    b lbl_fn_8067C734_00001720
lbl_fn_8067C734_00001700:
    xoris r0, r29, 0x8000
    stw r0, 0x134(r1)
    lfd f2, lbl_80888A90
    lfd f0, 0x130(r1)
    lfd f1, lbl_80888A78
    fsub f2, f0, f2
    bl fn_8068AEB0
    fmul f31, f31, f1
lbl_fn_8067C734_00001720:
    fmr f1, f31
    mr r3, r29
    bl fn_8068AAF0
    fmr f31, f1
    stfd f1, 0x10(r1)
    bl fn_8067E570
    cmpwi r3, 0x2
    bne lbl_fn_8067C734_00001748
    lfd f31, lbl_80888A80
    stfd f31, 0x10(r1)
lbl_fn_8067C734_00001748:
    fmr f1, f31
    addi r3, r1, 0xa4
    li r27, 0x0
    bl fn_8067C42C
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl fn_8067BD6C
    cmpwi r3, 0x0
    bne lbl_fn_8067C734_000019E0
    addi r3, r1, 0xa4
    addi r4, r1, 0xfc
    bl fn_8067BE50
    cmpwi r3, 0x0
    beq lbl_fn_8067C734_00001784
    li r27, 0x1
lbl_fn_8067C734_00001784:
    cntlzw r0, r27
    stfd f31, 0x8(r1)
    srwi r28, r0, 5
    li r29, 0x1
    li r30, 0x0
    li r31, -0x1
lbl_fn_8067C734_0000179C:
    cmpwi r28, 0x0
    bne lbl_fn_8067C734_000017D0
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r29
    stw r0, 0xc(r1)
    adde r0, r3, r30
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    bl fn_8067E570
    cmpwi r3, 0x2
    beq lbl_fn_8067C734_000019E0
    b lbl_fn_8067C734_000017E8
lbl_fn_8067C734_000017D0:
    lwz r0, 0xc(r1)
    lwz r3, 0x8(r1)
    addc r0, r0, r31
    stw r0, 0xc(r1)
    adde r0, r3, r31
    stw r0, 0x8(r1)
lbl_fn_8067C734_000017E8:
    lfd f1, 0x8(r1)
    addi r3, r1, 0x78
    bl fn_8067C42C
    cmpwi r27, 0x0
    beq lbl_fn_8067C734_00001810
    addi r3, r1, 0x78
    addi r4, r1, 0xfc
    bl fn_8067BE50
    cmpwi r3, 0x0
    beq lbl_fn_8067C734_00001980
lbl_fn_8067C734_00001810:
    cmpwi r27, 0x0
    bne lbl_fn_8067C734_0000191C
    addi r3, r1, 0xfc
    addi r4, r1, 0x78
    bl fn_8067BE50
    cmpwi r3, 0x0
    bne lbl_fn_8067C734_0000191C
    fmr f0, f31
    lfd f31, 0x8(r1)
    lwz r21, 0xa4(r1)
    lwz r12, 0x78(r1)
    lwz r22, 0xa8(r1)
    lwz r11, 0x7c(r1)
    lwz r23, 0xac(r1)
    lwz r10, 0x80(r1)
    lwz r24, 0xb0(r1)
    lwz r9, 0x84(r1)
    lwz r25, 0xb4(r1)
    lwz r8, 0x88(r1)
    lwz r26, 0xb8(r1)
    lwz r7, 0x8c(r1)
    lwz r31, 0xbc(r1)
    lwz r6, 0x90(r1)
    lwz r30, 0xc0(r1)
    lwz r5, 0x94(r1)
    lwz r29, 0xc4(r1)
    lwz r4, 0x98(r1)
    lwz r28, 0xc8(r1)
    lwz r3, 0x9c(r1)
    lhz r27, 0xcc(r1)
    lhz r0, 0xa0(r1)
    stw r21, 0x4c(r1)
    stw r22, 0x50(r1)
    stw r23, 0x54(r1)
    stw r24, 0x58(r1)
    stw r25, 0x5c(r1)
    stw r26, 0x60(r1)
    stw r31, 0x64(r1)
    stw r30, 0x68(r1)
    stw r29, 0x6c(r1)
    stw r28, 0x70(r1)
    sth r27, 0x74(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stw r21, 0x78(r1)
    stw r22, 0x7c(r1)
    stw r23, 0x80(r1)
    stw r24, 0x84(r1)
    stw r25, 0x88(r1)
    stw r26, 0x8c(r1)
    stw r31, 0x90(r1)
    stw r30, 0x94(r1)
    stw r29, 0x98(r1)
    stw r28, 0x9c(r1)
    sth r27, 0xa0(r1)
    stfd f31, 0x10(r1)
    stfd f0, 0x8(r1)
    b lbl_fn_8067C734_00001980
lbl_fn_8067C734_0000191C:
    lwz r12, 0x78(r1)
    lwz r11, 0x7c(r1)
    lwz r10, 0x80(r1)
    lwz r9, 0x84(r1)
    lwz r8, 0x88(r1)
    lwz r7, 0x8c(r1)
    lwz r6, 0x90(r1)
    lwz r5, 0x94(r1)
    lwz r4, 0x98(r1)
    lwz r3, 0x9c(r1)
    lhz r0, 0xa0(r1)
    lfd f31, 0x8(r1)
    stw r12, 0xa4(r1)
    stw r11, 0xa8(r1)
    stw r10, 0xac(r1)
    stw r9, 0xb0(r1)
    stw r8, 0xb4(r1)
    stw r7, 0xb8(r1)
    stw r6, 0xbc(r1)
    stw r5, 0xc0(r1)
    stw r4, 0xc4(r1)
    stw r3, 0xc8(r1)
    sth r0, 0xcc(r1)
    stfd f31, 0x10(r1)
    b lbl_fn_8067C734_0000179C
lbl_fn_8067C734_00001980:
    addi r3, r1, 0x4c
    addi r4, r1, 0xfc
    addi r5, r1, 0xa4
    bl fn_8067BF50
    addi r3, r1, 0x20
    addi r4, r1, 0x78
    addi r5, r1, 0xfc
    bl fn_8067BF50
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl fn_8067BD6C
    cmpwi r3, 0x0
    beq lbl_fn_8067C734_000019C8
    lwz r0, 0x14(r1)
    clrlwi. r0, r0, 31
    beq lbl_fn_8067C734_000019E0
    lfd f31, 0x8(r1)
    b lbl_fn_8067C734_000019E0
lbl_fn_8067C734_000019C8:
    addi r3, r1, 0x4c
    addi r4, r1, 0x20
    bl fn_8067BE50
    cmpwi r3, 0x0
    bne lbl_fn_8067C734_000019E0
    lfd f31, 0x8(r1)
lbl_fn_8067C734_000019E0:
    lbz r0, 0xfc(r1)
    extsb. r0, r0
    beq lbl_fn_8067C734_000019F0
    fneg f31, f31
lbl_fn_8067C734_000019F0:
    fmr f1, f31
lbl_fn_8067C734_000019F4:
    addi r11, r1, 0x170
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    bl _restgpr_21
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_8067CE80(void)
{
    nofralloc
    srawi r4, r3, 31
    xor r0, r4, r3
    subf r3, r4, r0
    blr
}

asm void __prep_buffer(void)
{
    nofralloc
    lwz r4, 0x18(r3)
    lwz r0, 0x2c(r3)
    lwz r6, 0x1c(r3)
    lwz r5, 0x20(r3)
    and r0, r4, r0
    stw r6, 0x24(r3)
    subf r0, r0, r5
    stw r0, 0x28(r3)
    stw r4, 0x34(r3)
    blr
}

asm void fn_8067CEB8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r6, 0x18(r3)
    lwz r0, 0x2c(r3)
    lwz r5, 0x1c(r3)
    lwz r4, 0x20(r3)
    and r0, r6, r0
    stw r5, 0x24(r3)
    subf r0, r0, r4
    stw r0, 0x28(r3)
    stw r6, 0x34(r3)
    bne lbl_fn_8067CEB8_00001A98
    stw r4, 0x28(r3)
lbl_fn_8067CEB8_00001A98:
    lwz r12, 0x3c(r31)
    addi r5, r31, 0x28
    lwz r3, 0x0(r3)
    lwz r4, 0x1c(r31)
    lwz r6, 0x48(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x2
    bne lbl_fn_8067CEB8_00001AC4
    li r0, 0x0
    stw r0, 0x28(r31)
lbl_fn_8067CEB8_00001AC4:
    cmpwi r30, 0x0
    beq lbl_fn_8067CEB8_00001AD4
    lwz r0, 0x28(r31)
    stw r0, 0x0(r30)
lbl_fn_8067CEB8_00001AD4:
    cmpwi r3, 0x0
    beq lbl_fn_8067CEB8_00001AE0
    b lbl_fn_8067CEB8_00001B30
lbl_fn_8067CEB8_00001AE0:
    lwz r0, 0x4(r31)
    lwz r4, 0x18(r31)
    extrwi. r0, r0, 1, 12
    lwz r3, 0x28(r31)
    add r0, r4, r3
    stw r0, 0x18(r31)
    bne lbl_fn_8067CEB8_00001B2C
    lwz r4, 0x1c(r31)
    mtctr r3
    cmpwi r3, 0x0
    beq lbl_fn_8067CEB8_00001B2C
lbl_fn_8067CEB8_00001B0C:
    lbz r0, 0x0(r4)
    addi r4, r4, 0x1
    cmplwi r0, 0xa
    bne lbl_fn_8067CEB8_00001B28
    lwz r3, 0x18(r31)
    addi r0, r3, 0x1
    stw r0, 0x18(r31)
lbl_fn_8067CEB8_00001B28:
    bdnz lbl_fn_8067CEB8_00001B0C
lbl_fn_8067CEB8_00001B2C:
    li r3, 0x0
lbl_fn_8067CEB8_00001B30:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __flush_buffer(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x1c(r3)
    lwz r0, 0x24(r3)
    subf. r0, r5, r0
    beq lbl___flush_buffer_00001BC0
    lwz r12, 0x40(r30)
    mr r4, r5
    stw r0, 0x28(r3)
    addi r5, r30, 0x28
    lwz r3, 0x0(r3)
    lwz r6, 0x48(r30)
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    beq lbl___flush_buffer_00001BA4
    lwz r0, 0x28(r30)
    stw r0, 0x0(r31)
lbl___flush_buffer_00001BA4:
    cmpwi r3, 0x0
    beq lbl___flush_buffer_00001BB0
    b lbl___flush_buffer_00001BE8
lbl___flush_buffer_00001BB0:
    lwz r3, 0x18(r30)
    lwz r0, 0x28(r30)
    add r0, r3, r0
    stw r0, 0x18(r30)
lbl___flush_buffer_00001BC0:
    lwz r4, 0x18(r30)
    li r3, 0x0
    lwz r0, 0x2c(r30)
    lwz r6, 0x1c(r30)
    lwz r5, 0x20(r30)
    and r0, r4, r0
    stw r6, 0x24(r30)
    subf r0, r0, r5
    stw r0, 0x28(r30)
    stw r4, 0x34(r30)
lbl___flush_buffer_00001BE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067D06C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0xa(r3)
    stw r4, 0x28(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8067D06C_00001C34
    lwz r5, 0x4(r3)
    extrwi. r0, r5, 3, 7
    bne lbl_fn_8067D06C_00001C3C
lbl_fn_8067D06C_00001C34:
    li r3, -0x1
    b lbl_fn_8067D06C_00001D1C
lbl_fn_8067D06C_00001C3C:
    lwz r4, 0x8(r3)
    srwi r6, r4, 29
    cmpwi r6, 0x1
    beq lbl_fn_8067D06C_00001C54
    extrwi. r0, r5, 1, 4
    bne lbl_fn_8067D06C_00001C6C
lbl_fn_8067D06C_00001C54:
    li r4, 0x1
    li r0, 0x0
    stb r4, 0xa(r3)
    stw r0, 0x28(r3)
    li r3, -0x1
    b lbl_fn_8067D06C_00001D1C
lbl_fn_8067D06C_00001C6C:
    cmpwi r6, 0x3
    blt lbl_fn_8067D06C_00001C98
    subi r0, r6, 0x1
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r3)
    bne lbl_fn_8067D06C_00001C8C
    lwz r0, 0x30(r3)
    stw r0, 0x28(r3)
lbl_fn_8067D06C_00001C8C:
    add r3, r6, r3
    lbz r3, 0xc(r3)
    b lbl_fn_8067D06C_00001D1C
lbl_fn_8067D06C_00001C98:
    li r0, 0x2
    li r5, 0x0
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r3)
    li r4, 0x0
    bl fn_8067CEB8
    cmpwi r3, 0x0
    bne lbl_fn_8067D06C_00001CC4
    lwz r4, 0x28(r31)
    cmpwi r4, 0x0
    bne lbl_fn_8067D06C_00001D04
lbl_fn_8067D06C_00001CC4:
    cmpwi r3, 0x1
    bne lbl_fn_8067D06C_00001CE0
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r31)
    stw r0, 0x28(r31)
    b lbl_fn_8067D06C_00001CFC
lbl_fn_8067D06C_00001CE0:
    lwz r3, 0x8(r31)
    li r0, 0x0
    stw r0, 0x28(r31)
    li r0, 0x1
    clrlwi r3, r3, 3
    stw r3, 0x8(r31)
    stb r0, 0x9(r31)
lbl_fn_8067D06C_00001CFC:
    li r3, -0x1
    b lbl_fn_8067D06C_00001D1C
lbl_fn_8067D06C_00001D04:
    lwz r3, 0x24(r31)
    subi r0, r4, 0x1
    stw r0, 0x28(r31)
    addi r0, r3, 0x1
    stw r0, 0x24(r31)
    lbz r3, 0x0(r3)
lbl_fn_8067D06C_00001D1C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067D19C(void)
{
    nofralloc
    b fn_8067D1A0
}

asm void fn_8067D1A0(void)
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
    mr r3, r30
    lwz r0, 0x8(r4)
    li r4, -0x1
    srwi r31, r0, 29
    bl fwide
    cmpwi r3, 0x0
    blt lbl_fn_8067D1A0_00001D78
    li r3, -0x1
    b lbl_fn_8067D1A0_00001DF4
lbl_fn_8067D1A0_00001D78:
    cmpwi r31, 0x1
    beq lbl_fn_8067D1A0_00001D90
    cmpwi r31, 0x4
    beq lbl_fn_8067D1A0_00001D90
    cmpwi r29, -0x1
    bne lbl_fn_8067D1A0_00001D98
lbl_fn_8067D1A0_00001D90:
    li r3, -0x1
    b lbl_fn_8067D1A0_00001DF4
lbl_fn_8067D1A0_00001D98:
    cmpwi r31, 0x3
    bge lbl_fn_8067D1A0_00001DC8
    lwz r5, 0x28(r30)
    li r4, 0x0
    lwz r0, 0x8(r30)
    li r3, 0x3
    rlwimi r0, r3, 29, 0, 2
    stw r5, 0x30(r30)
    srwi r3, r0, 29
    stw r4, 0x28(r30)
    stw r0, 0x8(r30)
    b lbl_fn_8067D1A0_00001DE0
lbl_fn_8067D1A0_00001DC8:
    lwz r4, 0x8(r30)
    srwi r3, r4, 29
    addi r0, r3, 0x1
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r30)
    srwi r3, r4, 29
lbl_fn_8067D1A0_00001DE0:
    add r3, r3, r30
    li r0, 0x0
    stb r29, 0xc(r3)
    clrlwi r3, r29, 24
    stb r0, 0x9(r30)
lbl_fn_8067D1A0_00001DF4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067D27C(void)
{
    nofralloc
    b fn_8067D280
}

asm void fn_8067D280(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r4
    mr r28, r6
    mr r26, r3
    mr r25, r5
    li r4, 0x0
    mr r3, r28
    bl fwide
    cmpwi r3, 0x0
    bne lbl_fn_8067D280_00001E54
    mr r3, r28
    li r4, -0x1
    bl fwide
lbl_fn_8067D280_00001E54:
    mullw. r30, r27, r25
    beq lbl_fn_8067D280_00001E74
    lbz r0, 0xa(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8067D280_00001E74
    lwz r3, 0x4(r28)
    extrwi. r0, r3, 3, 7
    bne lbl_fn_8067D280_00001E7C
lbl_fn_8067D280_00001E74:
    li r3, 0x0
    b lbl_fn_8067D280_00002140
lbl_fn_8067D280_00001E7C:
    extrwi. r0, r3, 1, 12
    li r31, 0x1
    beq lbl_fn_8067D280_00001E98
    extrwi r0, r3, 2, 5
    cmplwi r0, 0x2
    beq lbl_fn_8067D280_00001E98
    li r31, 0x0
lbl_fn_8067D280_00001E98:
    lwz r3, 0x8(r28)
    srwi. r0, r3, 29
    bne lbl_fn_8067D280_00001EC4
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 1, 4
    beq lbl_fn_8067D280_00001EC4
    li r0, 0x2
    rlwimi r3, r0, 29, 0, 2
    stw r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_fn_8067D280_00001EC4:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bge lbl_fn_8067D280_00001EEC
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl_fn_8067D280_00002140
lbl_fn_8067D280_00001EEC:
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 1, 6
    beq lbl_fn_8067D280_00001F1C
    bl fn_8067B510
    cmpwi r3, 0x0
    beq lbl_fn_8067D280_00001F1C
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl_fn_8067D280_00002140
lbl_fn_8067D280_00001F1C:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl_fn_8067D280_00001FD0
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x3
    blt lbl_fn_8067D280_00001FD0
lbl_fn_8067D280_00001F38:
    mr r3, r28
    li r4, 0x0
    bl fwide
    cmpwi r3, 0x1
    bne lbl_fn_8067D280_00001F70
    lwz r0, 0x8(r28)
    addi r29, r29, 0x2
    subi r30, r30, 0x2
    rlwinm r0, r0, 4, 28, 30
    add r3, r28, r0
    lhz r0, 0xc(r3)
    sth r0, 0x0(r26)
    addi r26, r26, 0x2
    b lbl_fn_8067D280_00001F90
lbl_fn_8067D280_00001F70:
    lwz r0, 0x8(r28)
    addi r29, r29, 0x1
    subi r30, r30, 0x1
    srwi r0, r0, 29
    add r3, r28, r0
    lbz r0, 0xc(r3)
    stb r0, 0x0(r26)
    addi r26, r26, 0x1
lbl_fn_8067D280_00001F90:
    lwz r4, 0x8(r28)
    cmpwi r30, 0x0
    srwi r3, r4, 29
    subi r0, r3, 0x1
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r28)
    beq lbl_fn_8067D280_00001FB8
    srwi r0, r4, 29
    cmplwi r0, 0x3
    bge lbl_fn_8067D280_00001F38
lbl_fn_8067D280_00001FB8:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bne lbl_fn_8067D280_00001FD0
    lwz r0, 0x30(r28)
    stw r0, 0x28(r28)
lbl_fn_8067D280_00001FD0:
    cmpwi r30, 0x0
    beq lbl_fn_8067D280_000020AC
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8067D280_00001FEC
    cmpwi r31, 0x0
    beq lbl_fn_8067D280_000020AC
lbl_fn_8067D280_00001FEC:
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    bne lbl_fn_8067D280_00002050
    mr r3, r28
    li r4, 0x0
    li r5, 0x0
    bl fn_8067CEB8
    cmpwi r3, 0x0
    beq lbl_fn_8067D280_00002050
    cmpwi r3, 0x1
    bne lbl_fn_8067D280_0000202C
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl_fn_8067D280_00002048
lbl_fn_8067D280_0000202C:
    lwz r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
    li r0, 0x1
    clrlwi r3, r3, 3
    stw r3, 0x8(r28)
    stb r0, 0x9(r28)
lbl_fn_8067D280_00002048:
    li r30, 0x0
    b lbl_fn_8067D280_000020AC
lbl_fn_8067D280_00002050:
    lwz r5, 0x28(r28)
    stw r5, 0x8(r1)
    cmplw r5, r30
    ble lbl_fn_8067D280_00002068
    mr r5, r30
    stw r30, 0x8(r1)
lbl_fn_8067D280_00002068:
    lwz r4, 0x24(r28)
    mr r3, r26
    bl memcpy
    lwz r4, 0x8(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    subf. r30, r4, r30
    add r3, r3, r4
    stw r3, 0x24(r28)
    add r26, r26, r4
    add r29, r29, r4
    lwz r3, 0x8(r1)
    subf r0, r3, r0
    stw r0, 0x28(r28)
    beq lbl_fn_8067D280_000020AC
    cmpwi r31, 0x0
    bne lbl_fn_8067D280_00001FEC
lbl_fn_8067D280_000020AC:
    cmpwi r30, 0x0
    beq lbl_fn_8067D280_0000213C
    cmpwi r31, 0x0
    bne lbl_fn_8067D280_0000213C
    lwz r31, 0x1c(r28)
    mr r3, r28
    lwz r25, 0x20(r28)
    addi r4, r1, 0x8
    stw r26, 0x1c(r28)
    li r5, 0x1
    stw r30, 0x20(r28)
    bl fn_8067CEB8
    cmpwi r3, 0x0
    beq lbl_fn_8067D280_0000211C
    cmpwi r3, 0x1
    bne lbl_fn_8067D280_00002100
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl_fn_8067D280_0000211C
lbl_fn_8067D280_00002100:
    lwz r3, 0x8(r28)
    li r0, 0x0
    stw r0, 0x28(r28)
    li r0, 0x1
    clrlwi r3, r3, 3
    stw r3, 0x8(r28)
    stb r0, 0x9(r28)
lbl_fn_8067D280_0000211C:
    lwz r0, 0x8(r1)
    mr r3, r28
    stw r31, 0x1c(r28)
    add r29, r29, r0
    stw r25, 0x20(r28)
    bl __prep_buffer
    li r0, 0x0
    stw r0, 0x28(r28)
lbl_fn_8067D280_0000213C:
    divwu r3, r29, r27
lbl_fn_8067D280_00002140:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8067D5C0(void)
{
    nofralloc
    b __fwrite
}

asm void __fwrite(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r27, r4
    mr r28, r6
    mr r26, r3
    mr r25, r5
    li r4, 0x0
    mr r3, r28
    bl fwide
    cmpwi r3, 0x0
    bne lbl___fwrite_00002198
    mr r3, r28
    li r4, -0x1
    bl fwide
lbl___fwrite_00002198:
    mullw. r30, r27, r25
    beq lbl___fwrite_000021B8
    lbz r0, 0xa(r28)
    cmpwi r0, 0x0
    bne lbl___fwrite_000021B8
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 3, 7
    bne lbl___fwrite_000021C0
lbl___fwrite_000021B8:
    li r3, 0x0
    b lbl___fwrite_0000244C
lbl___fwrite_000021C0:
    cmplwi r0, 0x2
    bne lbl___fwrite_000021CC
    bl __stdio_atexit
lbl___fwrite_000021CC:
    lwz r3, 0x4(r28)
    li r31, 0x1
    li r4, 0x0
    extrwi. r0, r3, 1, 12
    beq lbl___fwrite_000021EC
    extrwi r0, r3, 2, 5
    cmplwi r0, 0x2
    bne lbl___fwrite_000021F0
lbl___fwrite_000021EC:
    li r4, 0x1
lbl___fwrite_000021F0:
    cmpwi r4, 0x0
    bne lbl___fwrite_0000220C
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x1
    beq lbl___fwrite_0000220C
    li r31, 0x0
lbl___fwrite_0000220C:
    lwz r0, 0x8(r28)
    srwi. r0, r0, 29
    bne lbl___fwrite_00002268
    lwz r3, 0x4(r28)
    rlwinm. r0, r3, 5, 30, 30
    extrwi r0, r3, 3, 2
    beq lbl___fwrite_00002268
    rlwinm. r0, r0, 0, 29, 29
    beq lbl___fwrite_00002250
    mr r3, r28
    li r4, 0x0
    li r5, 0x2
    bl _fseek
    cmpwi r3, 0x0
    beq lbl___fwrite_00002250
    li r3, 0x0
    b lbl___fwrite_0000244C
lbl___fwrite_00002250:
    lwz r0, 0x8(r28)
    li r3, 0x1
    rlwimi r0, r3, 29, 0, 2
    stw r0, 0x8(r28)
    mr r3, r28
    bl __prep_buffer
lbl___fwrite_00002268:
    lwz r0, 0x8(r28)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    beq lbl___fwrite_00002290
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r3, 0x0
    stw r0, 0x28(r28)
    b lbl___fwrite_0000244C
lbl___fwrite_00002290:
    cmpwi r30, 0x0
    li r29, 0x0
    beq lbl___fwrite_000023C0
    lwz r3, 0x1c(r28)
    lwz r4, 0x24(r28)
    cmplw r4, r3
    bne lbl___fwrite_000022B4
    cmpwi r31, 0x0
    beq lbl___fwrite_000023C0
lbl___fwrite_000022B4:
    lwz r0, 0x20(r28)
    subf r3, r3, r4
    subf r0, r3, r0
    stw r0, 0x28(r28)
lbl___fwrite_000022C4:
    lwz r5, 0x28(r28)
    li r25, 0x0
    stw r5, 0x8(r1)
    cmplw r5, r30
    ble lbl___fwrite_000022E0
    mr r5, r30
    stw r30, 0x8(r1)
lbl___fwrite_000022E0:
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x1
    bne lbl___fwrite_0000231C
    cmpwi r5, 0x0
    beq lbl___fwrite_0000231C
    mr r3, r26
    li r4, 0xa
    bl __memrchr
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl___fwrite_0000231C
    addi r0, r3, 0x1
    subf r5, r26, r0
    stw r5, 0x8(r1)
lbl___fwrite_0000231C:
    lwz r5, 0x8(r1)
    cmpwi r5, 0x0
    beq lbl___fwrite_0000235C
    lwz r3, 0x24(r28)
    mr r4, r26
    bl memcpy
    lwz r4, 0x8(r1)
    lwz r3, 0x24(r28)
    lwz r0, 0x28(r28)
    add r26, r26, r4
    add r3, r3, r4
    stw r3, 0x24(r28)
    subf r30, r4, r30
    lwz r3, 0x8(r1)
    subf r0, r3, r0
    stw r0, 0x28(r28)
lbl___fwrite_0000235C:
    lwz r0, 0x28(r28)
    cmpwi r0, 0x0
    beq lbl___fwrite_0000237C
    cmpwi r25, 0x0
    bne lbl___fwrite_0000237C
    lwz r0, 0x4(r28)
    extrwi. r0, r0, 2, 5
    bne lbl___fwrite_000023A8
lbl___fwrite_0000237C:
    mr r3, r28
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl___fwrite_000023A8
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    li r30, 0x0
    stw r0, 0x28(r28)
    b lbl___fwrite_000023C0
lbl___fwrite_000023A8:
    lwz r0, 0x8(r1)
    cmpwi r30, 0x0
    add r29, r29, r0
    beq lbl___fwrite_000023C0
    cmpwi r31, 0x0
    bne lbl___fwrite_000022C4
lbl___fwrite_000023C0:
    cmpwi r30, 0x0
    beq lbl___fwrite_00002430
    cmpwi r31, 0x0
    bne lbl___fwrite_00002430
    lwz r25, 0x1c(r28)
    add r0, r26, r30
    lwz r31, 0x20(r28)
    mr r3, r28
    stw r26, 0x1c(r28)
    addi r4, r1, 0x8
    stw r30, 0x20(r28)
    stw r0, 0x24(r28)
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl___fwrite_00002410
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r28)
    stw r0, 0x28(r28)
    b lbl___fwrite_00002418
lbl___fwrite_00002410:
    lwz r0, 0x8(r1)
    add r29, r29, r0
lbl___fwrite_00002418:
    stw r25, 0x1c(r28)
    mr r3, r28
    stw r31, 0x20(r28)
    bl __prep_buffer
    li r0, 0x0
    stw r0, 0x28(r28)
lbl___fwrite_00002430:
    lwz r0, 0x4(r28)
    extrwi r0, r0, 2, 5
    cmplwi r0, 0x2
    beq lbl___fwrite_00002448
    li r0, 0x0
    stw r0, 0x28(r28)
lbl___fwrite_00002448:
    divwu r3, r29, r27
lbl___fwrite_0000244C:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8067D8CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_8067D8CC_0000248C
    li r3, -0x1
    b lbl_fn_8067D8CC_00002500
lbl_fn_8067D8CC_0000248C:
    lwz r0, 0x4(r3)
    extrwi. r0, r0, 3, 7
    bne lbl_fn_8067D8CC_000024A0
    li r3, 0x0
    b lbl_fn_8067D8CC_00002500
lbl_fn_8067D8CC_000024A0:
    bl fn_8067D988
    lwz r12, 0x44(r29)
    mr r30, r3
    lwz r3, 0x0(r29)
    mtctr r12
    bctrl
    lwz r0, 0x8(r29)
    li r5, 0x0
    lwz r4, 0x4(r29)
    mr r31, r3
    extrwi. r0, r0, 1, 3
    stw r5, 0x0(r29)
    rlwinm r4, r4, 0, 10, 6
    stw r4, 0x4(r29)
    beq lbl_fn_8067D8CC_000024E4
    lwz r3, 0x1c(r29)
    bl fn_8067AF64
lbl_fn_8067D8CC_000024E4:
    cmpwi r30, 0x0
    li r0, 0x0
    bne lbl_fn_8067D8CC_000024F8
    cmpwi r31, 0x0
    beq lbl_fn_8067D8CC_000024FC
lbl_fn_8067D8CC_000024F8:
    li r0, 0x1
lbl_fn_8067D8CC_000024FC:
    neg r3, r0
lbl_fn_8067D8CC_00002500:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067D988(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bne lbl_fn_8067D988_00002544
    bl fn_8067B594
    b lbl_fn_8067D988_00002638
lbl_fn_8067D988_00002544:
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8067D988_0000255C
    lwz r4, 0x4(r3)
    extrwi. r0, r4, 3, 7
    bne lbl_fn_8067D988_00002564
lbl_fn_8067D988_0000255C:
    li r3, -0x1
    b lbl_fn_8067D988_00002638
lbl_fn_8067D988_00002564:
    extrwi r0, r4, 3, 2
    cmplwi r0, 0x1
    bne lbl_fn_8067D988_00002578
    li r3, 0x0
    b lbl_fn_8067D988_00002638
lbl_fn_8067D988_00002578:
    lwz r4, 0x8(r3)
    srwi r0, r4, 29
    cmplwi r0, 0x3
    blt lbl_fn_8067D988_00002594
    li r0, 0x2
    rlwimi r4, r0, 29, 0, 2
    stw r4, 0x8(r3)
lbl_fn_8067D988_00002594:
    lwz r0, 0x8(r3)
    srwi r0, r0, 29
    cmplwi r0, 0x2
    bne lbl_fn_8067D988_000025AC
    li r0, 0x0
    stw r0, 0x28(r3)
lbl_fn_8067D988_000025AC:
    lwz r4, 0x8(r3)
    srwi r0, r4, 29
    cmplwi r0, 0x1
    beq lbl_fn_8067D988_000025CC
    clrlwi r0, r4, 3
    stw r0, 0x8(r3)
    li r3, 0x0
    b lbl_fn_8067D988_00002638
lbl_fn_8067D988_000025CC:
    lwz r0, 0x4(r3)
    extrwi r0, r0, 3, 7
    cmplwi r0, 0x1
    beq lbl_fn_8067D988_000025E4
    li r30, 0x0
    b lbl_fn_8067D988_000025F0
lbl_fn_8067D988_000025E4:
    mr r3, r31
    bl fn_8067DD0C
    mr r30, r3
lbl_fn_8067D988_000025F0:
    mr r3, r31
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl_fn_8067D988_0000261C
    li r3, 0x1
    li r0, 0x0
    stb r3, 0xa(r31)
    li r3, -0x1
    stw r0, 0x28(r31)
    b lbl_fn_8067D988_00002638
lbl_fn_8067D988_0000261C:
    lwz r0, 0x8(r31)
    li r4, 0x0
    stw r30, 0x18(r31)
    li r3, 0x0
    clrlwi r0, r0, 3
    stw r0, 0x8(r31)
    stw r4, 0x28(r31)
lbl_fn_8067D988_00002638:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067DABC(void)
{
    nofralloc
    lis r6, lbl_807BB380@ha
    addi r6, r6, lbl_807BB380@l
    lwz r6, 0x38(r6)
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_8067DABC_00002700
lbl_fn_8067DABC_00002668:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_fn_8067DABC_00002684
    li r5, 0x0
lbl_fn_8067DABC_00002684:
    cmpwi r5, 0x0
    beq lbl_fn_8067DABC_00002690
    b lbl_fn_8067DABC_00002698
lbl_fn_8067DABC_00002690:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_fn_8067DABC_00002698:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_8067DABC_000026B8
    li r5, 0x0
lbl_fn_8067DABC_000026B8:
    cmpwi r5, 0x0
    beq lbl_fn_8067DABC_000026C4
    b lbl_fn_8067DABC_000026CC
lbl_fn_8067DABC_000026C4:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_fn_8067DABC_000026CC:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_fn_8067DABC_000026E0
    li r3, -0x1
    blr
lbl_fn_8067DABC_000026E0:
    ble lbl_fn_8067DABC_000026EC
    li r3, 0x1
    blr
lbl_fn_8067DABC_000026EC:
    cmpwi r7, 0x0
    bne lbl_fn_8067DABC_000026FC
    li r3, 0x0
    blr
lbl_fn_8067DABC_000026FC:
    bdnz lbl_fn_8067DABC_00002668
lbl_fn_8067DABC_00002700:
    li r3, 0x0
    blr
}

asm void fn_8067DB74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    li r7, 0x0
    stw r0, 0x14(r1)
    li r8, 0x0
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    bge lbl_fn_8067DB74_00002738
    neg r3, r3
    li r7, 0x1
lbl_fn_8067DB74_00002738:
    mr r6, r4
lbl_fn_8067DB74_0000273C:
    divwu r0, r3, r5
    mullw r0, r0, r5
    subf r9, r0, r3
    cmpwi r9, 0x9
    ble lbl_fn_8067DB74_00002764
    addi r0, r9, 0x37
    stb r0, 0x0(r6)
    addi r8, r8, 0x1
    addi r6, r6, 0x1
    b lbl_fn_8067DB74_00002774
lbl_fn_8067DB74_00002764:
    addi r0, r9, 0x30
    stb r0, 0x0(r6)
    addi r8, r8, 0x1
    addi r6, r6, 0x1
lbl_fn_8067DB74_00002774:
    divwu. r3, r3, r5
    bne lbl_fn_8067DB74_0000273C
    cmpwi r7, 0x0
    beq lbl_fn_8067DB74_00002790
    li r0, 0x2d
    stbx r0, r4, r8
    addi r8, r8, 0x1
lbl_fn_8067DB74_00002790:
    li r0, 0x0
    stbx r0, r4, r8
    mr r3, r30
    li r31, 0x0
    bl strlen
    subi r6, r3, 0x1
    mr r3, r30
    add r4, r30, r6
    b lbl_fn_8067DB74_000027D4
lbl_fn_8067DB74_000027B4:
    lbz r5, 0x0(r3)
    addi r31, r31, 0x1
    lbz r0, 0x0(r4)
    subi r6, r6, 0x1
    stb r0, 0x0(r3)
    addi r3, r3, 0x1
    stb r5, 0x0(r4)
    subi r4, r4, 0x1
lbl_fn_8067DB74_000027D4:
    cmpw r31, r6
    blt lbl_fn_8067DB74_000027B4
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067DC64(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    li r6, 0x0
    extrwi r4, r0, 3, 7
    addi r0, r4, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    bgt lbl_fn_8067DC64_00002820
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8067DC64_00002830
lbl_fn_8067DC64_00002820:
    li r0, 0x28
    stw r0, lbl_80880348
    li r3, -0x1
    blr
lbl_fn_8067DC64_00002830:
    lwz r0, 0x8(r3)
    srwi. r5, r0, 29
    bne lbl_fn_8067DC64_00002844
    lwz r3, 0x18(r3)
    blr
lbl_fn_8067DC64_00002844:
    lwz r8, 0x1c(r3)
    cmplwi r5, 0x3
    lwz r4, 0x24(r3)
    lwz r0, 0x34(r3)
    subf r4, r8, r4
    add r7, r0, r4
    blt lbl_fn_8067DC64_00002868
    subi r6, r5, 0x2
    subf r7, r6, r7
lbl_fn_8067DC64_00002868:
    lwz r0, 0x4(r3)
    extrwi. r0, r0, 1, 12
    bne lbl_fn_8067DC64_00002898
    subf. r0, r6, r4
    mtctr r0
    beq lbl_fn_8067DC64_00002898
lbl_fn_8067DC64_00002880:
    lbz r0, 0x0(r8)
    addi r8, r8, 0x1
    cmplwi r0, 0xa
    bne lbl_fn_8067DC64_00002894
    addi r7, r7, 0x1
lbl_fn_8067DC64_00002894:
    bdnz lbl_fn_8067DC64_00002880
lbl_fn_8067DC64_00002898:
    mr r3, r7
    blr
}

asm void fn_8067DD0C(void)
{
    nofralloc
    b fn_8067DC64
}

asm void _fseek(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    lwz r0, 0x4(r3)
    extrwi r0, r0, 3, 7
    cmplwi r0, 0x1
    bne lbl__fseek_000028E0
    lbz r0, 0xa(r3)
    cmpwi r0, 0x0
    beq lbl__fseek_000028F0
lbl__fseek_000028E0:
    li r0, 0x28
    stw r0, lbl_80880348
    li r3, -0x1
    b lbl__fseek_00002A50
lbl__fseek_000028F0:
    lwz r0, 0x8(r3)
    srwi r0, r0, 29
    cmplwi r0, 0x1
    bne lbl__fseek_00002930
    li r4, 0x0
    bl __flush_buffer
    cmpwi r3, 0x0
    beq lbl__fseek_00002930
    li r4, 0x0
    stw r4, 0x28(r30)
    li r0, 0x1
    li r3, -0x1
    stb r0, 0xa(r30)
    li r0, 0x28
    stw r0, lbl_80880348
    b lbl__fseek_00002A50
lbl__fseek_00002930:
    cmpwi r31, 0x1
    bne lbl__fseek_00002950
    mr r3, r30
    li r31, 0x0
    bl fn_8067DC64
    lwz r0, 0x8(r1)
    add r0, r0, r3
    stw r0, 0x8(r1)
lbl__fseek_00002950:
    cmpwi r31, 0x2
    beq lbl__fseek_000029D4
    lwz r0, 0x4(r30)
    extrwi r0, r0, 3, 2
    cmplwi r0, 0x3
    beq lbl__fseek_000029D4
    lwz r6, 0x8(r30)
    srwi r3, r6, 29
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl__fseek_000029D4
    lwz r0, 0x8(r1)
    lwz r5, 0x18(r30)
    cmplw r0, r5
    bge lbl__fseek_00002998
    lwz r3, 0x34(r30)
    cmplw r0, r3
    bge lbl__fseek_000029A8
lbl__fseek_00002998:
    lwz r0, 0x8(r30)
    clrlwi r0, r0, 3
    stw r0, 0x8(r30)
    b lbl__fseek_000029E0
lbl__fseek_000029A8:
    lwz r4, 0x1c(r30)
    subf r3, r3, r0
    li r0, 0x2
    add r3, r4, r3
    stw r3, 0x24(r30)
    rlwimi r6, r0, 29, 0, 2
    lwz r0, 0x8(r1)
    subf r0, r0, r5
    stw r0, 0x28(r30)
    stw r6, 0x8(r30)
    b lbl__fseek_000029E0
lbl__fseek_000029D4:
    lwz r0, 0x8(r30)
    clrlwi r0, r0, 3
    stw r0, 0x8(r30)
lbl__fseek_000029E0:
    lwz r0, 0x8(r30)
    srwi. r0, r0, 29
    bne lbl__fseek_00002A4C
    lwz r12, 0x38(r30)
    cmpwi r12, 0x0
    beq lbl__fseek_00002A38
    mr r5, r31
    addi r4, r1, 0x8
    lwz r3, 0x0(r30)
    lwz r6, 0x48(r30)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl__fseek_00002A38
    li r4, 0x0
    stw r4, 0x28(r30)
    li r0, 0x1
    li r3, -0x1
    stb r0, 0xa(r30)
    li r0, 0x28
    stw r0, lbl_80880348
    b lbl__fseek_00002A50
lbl__fseek_00002A38:
    li r3, 0x0
    stb r3, 0x9(r30)
    lwz r0, 0x8(r1)
    stw r0, 0x18(r30)
    stw r3, 0x28(r30)
lbl__fseek_00002A4C:
    li r3, 0x0
lbl__fseek_00002A50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8067DED4(void)
{
    nofralloc
    b _fseek
}

asm void fn_8067DED8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stb r31, 0xa(r3)
    bl _fseek
    stb r31, 0xa(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8067DF20(void)
{
    nofralloc
    lis r6, lbl_807BB380@ha
    addi r6, r6, lbl_807BB380@l
    lwz r6, 0x38(r6)
    lwz r12, 0x20(r6)
    mtctr r12
    bctr
}

asm void fn_8067DF38(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8067DF38_00002ADC
    li r3, 0x0
    blr
lbl_fn_8067DF38_00002ADC:
    cmpwi r5, 0x0
    bne lbl_fn_8067DF38_00002AEC
    li r3, -0x1
    blr
lbl_fn_8067DF38_00002AEC:
    cmpwi r3, 0x0
    beq lbl_fn_8067DF38_00002AFC
    lbz r0, 0x0(r4)
    sth r0, 0x0(r3)
lbl_fn_8067DF38_00002AFC:
    lbz r0, 0x0(r4)
    extsb. r0, r0
    bne lbl_fn_8067DF38_00002B10
    li r3, 0x0
    blr
lbl_fn_8067DF38_00002B10:
    li r3, 0x1
    blr
}

asm void fn_8067DF84(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_8067DF84_00002B28
    li r3, 0x0
    blr
lbl_fn_8067DF84_00002B28:
    stb r4, 0x0(r3)
    li r3, 0x1
    blr
}

asm void fn_8067DFA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r27, r4
    mr r26, r3
    mr r28, r5
    mr r3, r27
    bl strlen
    cmpwi r26, 0x0
    mr r29, r3
    beq lbl_fn_8067DFA0_00002BD8
    lis r31, lbl_807BB380@ha
    li r30, 0x0
    addi r31, r31, lbl_807BB380@l
    b lbl_fn_8067DFA0_00002BCC
lbl_fn_8067DFA0_00002B74:
    lbz r0, 0x0(r27)
    extsb. r0, r0
    beq lbl_fn_8067DFA0_00002BBC
    lwz r6, 0x38(r31)
    mr r3, r26
    mr r4, r27
    mr r5, r29
    lwz r12, 0x20(r6)
    mtctr r12
    addi r26, r26, 0x2
    bctrl
    cmpwi r3, 0x0
    ble lbl_fn_8067DFA0_00002BB4
    add r27, r27, r3
    subf r29, r3, r29
    b lbl_fn_8067DFA0_00002BC8
lbl_fn_8067DFA0_00002BB4:
    li r3, -0x1
    b lbl_fn_8067DFA0_00002BE0
lbl_fn_8067DFA0_00002BBC:
    li r0, 0x0
    sth r0, 0x0(r26)
    b lbl_fn_8067DFA0_00002BDC
lbl_fn_8067DFA0_00002BC8:
    addi r30, r30, 0x1
lbl_fn_8067DFA0_00002BCC:
    cmplw r30, r28
    blt lbl_fn_8067DFA0_00002B74
    b lbl_fn_8067DFA0_00002BDC
lbl_fn_8067DFA0_00002BD8:
    li r30, 0x0
lbl_fn_8067DFA0_00002BDC:
    mr r3, r30
lbl_fn_8067DFA0_00002BE0:
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void wcstombs(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stmw r26, 0x18(r1)
    mr r26, r3
    mr r27, r5
    li r29, 0x0
    beq lbl_wcstombs_00002C20
    cmpwi r4, 0x0
    bne lbl_wcstombs_00002C28
lbl_wcstombs_00002C20:
    li r3, 0x0
    b lbl_wcstombs_00002C98
lbl_wcstombs_00002C28:
    lis r31, lbl_807BB380@ha
    mr r28, r4
    addi r31, r31, lbl_807BB380@l
    b lbl_wcstombs_00002C8C
lbl_wcstombs_00002C38:
    lhz r4, 0x0(r28)
    cmpwi r4, 0x0
    bne lbl_wcstombs_00002C50
    li r0, 0x0
    stbx r0, r26, r29
    b lbl_wcstombs_00002C94
lbl_wcstombs_00002C50:
    lwz r5, 0x38(r31)
    addi r3, r1, 0x8
    lwz r12, 0x24(r5)
    mtctr r12
    addi r28, r28, 0x2
    bctrl
    add r0, r29, r3
    mr r30, r3
    cmplw r0, r27
    bgt lbl_wcstombs_00002C94
    mr r5, r30
    add r3, r26, r29
    addi r4, r1, 0x8
    bl fn_8068236C
    add r29, r29, r30
lbl_wcstombs_00002C8C:
    cmplw r29, r27
    ble lbl_wcstombs_00002C38
lbl_wcstombs_00002C94:
    mr r3, r29
lbl_wcstombs_00002C98:
    lmw r26, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void memmove(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    xor r6, r3, r4
    cmplwi r5, 0x20
    stw r0, 0x14(r1)
    cntlzw r0, r6
    slw r0, r3, r0
    stw r31, 0xc(r1)
    mr r31, r3
    srwi r7, r0, 31
    blt lbl_memmove_00002D14
    clrlwi. r0, r6, 30
    beq lbl_memmove_00002CF8
    cmpwi r7, 0x0
    bne lbl_memmove_00002CF0
    bl fn_8067E3EC
    b lbl_memmove_00002D0C
lbl_memmove_00002CF0:
    bl fn_8067E4AC
    b lbl_memmove_00002D0C
lbl_memmove_00002CF8:
    cmpwi r7, 0x0
    bne lbl_memmove_00002D08
    bl fn_8067E288
    b lbl_memmove_00002D0C
lbl_memmove_00002D08:
    bl fn_8067E344
lbl_memmove_00002D0C:
    mr r3, r31
    b lbl_memmove_00002D64
lbl_memmove_00002D14:
    cmpwi r7, 0x0
    bne lbl_memmove_00002D40
    subi r4, r4, 0x1
    subi r3, r3, 0x1
    addi r5, r5, 0x1
    b lbl_memmove_00002D34
lbl_memmove_00002D2C:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r3)
lbl_memmove_00002D34:
    subic. r5, r5, 0x1
    bne lbl_memmove_00002D2C
    b lbl_memmove_00002D60
lbl_memmove_00002D40:
    add r4, r4, r5
    add r3, r3, r5
    addi r5, r5, 0x1
    b lbl_memmove_00002D58
lbl_memmove_00002D50:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r3)
lbl_memmove_00002D58:
    subic. r5, r5, 0x1
    bne lbl_memmove_00002D50
lbl_memmove_00002D60:
    mr r3, r31
lbl_memmove_00002D64:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void memchr(void)
{
    nofralloc
    clrlwi r4, r4, 24
    subi r3, r3, 0x1
    addi r5, r5, 0x1
    b lbl_memchr_00002D94
lbl_memchr_00002D88:
    lbzu r0, 0x1(r3)
    cmplw r0, r4
    beqlr
lbl_memchr_00002D94:
    subic. r5, r5, 0x1
    bne lbl_memchr_00002D88
    li r3, 0x0
    blr
}

asm void __memrchr(void)
{
    nofralloc
    add r3, r3, r5
    clrlwi r4, r4, 24
    addi r5, r5, 0x1
    b lbl___memrchr_00002DC0
lbl___memrchr_00002DB4:
    lbzu r0, -0x1(r3)
    cmplw r0, r4
    beqlr
lbl___memrchr_00002DC0:
    subic. r5, r5, 0x1
    bne lbl___memrchr_00002DB4
    li r3, 0x0
    blr
}

asm void fn_8067E23C(void)
{
    nofralloc
    subi r7, r4, 0x1
    subi r6, r3, 0x1
    addi r4, r5, 0x1
    b lbl_fn_8067E23C_00002E0C
lbl_fn_8067E23C_00002DE0:
    lbzu r3, 0x1(r6)
    lbzu r0, 0x1(r7)
    cmplw r3, r0
    beq lbl_fn_8067E23C_00002E0C
    lbz r4, 0x0(r6)
    li r3, 0x1
    lbz r0, 0x0(r7)
    cmplw r4, r0
    bgelr
    li r3, -0x1
    blr
lbl_fn_8067E23C_00002E0C:
    subic. r4, r4, 0x1
    bne lbl_fn_8067E23C_00002DE0
    li r3, 0x0
    blr
}

asm void fn_8067E288(void)
{
    nofralloc
    neg r0, r3
    subi r7, r4, 0x1
    clrlwi. r6, r0, 30
    subi r3, r3, 0x1
    beq lbl_fn_8067E288_00002E44
    subf r5, r6, r5
lbl_fn_8067E288_00002E34:
    lbzu r0, 0x1(r7)
    subic. r6, r6, 0x1
    stbu r0, 0x1(r3)
    bne lbl_fn_8067E288_00002E34
lbl_fn_8067E288_00002E44:
    srwi. r4, r5, 5
    subi r6, r7, 0x3
    subi r3, r3, 0x3
    beq lbl_fn_8067E288_00002E9C
lbl_fn_8067E288_00002E54:
    lwz r0, 0x4(r6)
    subic. r4, r4, 0x1
    stw r0, 0x4(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r3)
    lwz r0, 0x18(r6)
    stw r0, 0x18(r3)
    lwz r0, 0x1c(r6)
    stw r0, 0x1c(r3)
    lwzu r0, 0x20(r6)
    stwu r0, 0x20(r3)
    bne lbl_fn_8067E288_00002E54
lbl_fn_8067E288_00002E9C:
    extrwi. r4, r5, 3, 27
    beq lbl_fn_8067E288_00002EB4
lbl_fn_8067E288_00002EA4:
    lwzu r0, 0x4(r6)
    subic. r4, r4, 0x1
    stwu r0, 0x4(r3)
    bne lbl_fn_8067E288_00002EA4
lbl_fn_8067E288_00002EB4:
    clrlwi. r5, r5, 30
    addi r4, r6, 0x3
    addi r3, r3, 0x3
    beqlr
lbl_fn_8067E288_00002EC4:
    lbzu r0, 0x1(r4)
    subic. r5, r5, 0x1
    stbu r0, 0x1(r3)
    bne lbl_fn_8067E288_00002EC4
    blr
}

asm void fn_8067E344(void)
{
    nofralloc
    add r6, r3, r5
    add r4, r4, r5
    clrlwi. r3, r6, 30
    beq lbl_fn_8067E344_00002EFC
    subf r5, r3, r5
lbl_fn_8067E344_00002EEC:
    lbzu r0, -0x1(r4)
    subic. r3, r3, 0x1
    stbu r0, -0x1(r6)
    bne lbl_fn_8067E344_00002EEC
lbl_fn_8067E344_00002EFC:
    srwi. r3, r5, 5
    beq lbl_fn_8067E344_00002F4C
lbl_fn_8067E344_00002F04:
    lwz r0, -0x4(r4)
    subic. r3, r3, 0x1
    stw r0, -0x4(r6)
    lwz r0, -0x8(r4)
    stw r0, -0x8(r6)
    lwz r0, -0xc(r4)
    stw r0, -0xc(r6)
    lwz r0, -0x10(r4)
    stw r0, -0x10(r6)
    lwz r0, -0x14(r4)
    stw r0, -0x14(r6)
    lwz r0, -0x18(r4)
    stw r0, -0x18(r6)
    lwz r0, -0x1c(r4)
    stw r0, -0x1c(r6)
    lwzu r0, -0x20(r4)
    stwu r0, -0x20(r6)
    bne lbl_fn_8067E344_00002F04
lbl_fn_8067E344_00002F4C:
    extrwi. r3, r5, 3, 27
    beq lbl_fn_8067E344_00002F64
lbl_fn_8067E344_00002F54:
    lwzu r0, -0x4(r4)
    subic. r3, r3, 0x1
    stwu r0, -0x4(r6)
    bne lbl_fn_8067E344_00002F54
lbl_fn_8067E344_00002F64:
    clrlwi. r5, r5, 30
    beqlr
lbl_fn_8067E344_00002F6C:
    lbzu r0, -0x1(r4)
    subic. r5, r5, 0x1
    stbu r0, -0x1(r6)
    bne lbl_fn_8067E344_00002F6C
    blr
}

asm void fn_8067E3EC(void)
{
    nofralloc
    neg r0, r3
    subi r7, r4, 0x1
    clrlwi. r6, r0, 30
    subi r3, r3, 0x1
    beq lbl_fn_8067E3EC_00002FA8
    subf r5, r6, r5
lbl_fn_8067E3EC_00002F98:
    lbzu r0, 0x1(r7)
    subic. r6, r6, 0x1
    stbu r0, 0x1(r3)
    bne lbl_fn_8067E3EC_00002F98
lbl_fn_8067E3EC_00002FA8:
    addi r0, r7, 0x1
    subi r4, r3, 0x3
    clrlwi r10, r0, 30
    srwi r6, r5, 3
    subf r7, r10, r7
    clrlslwi r11, r0, 30, 3
    lwzu r8, 0x1(r7)
    subfic r12, r11, 0x20
lbl_fn_8067E3EC_00002FC8:
    lwz r9, 0x4(r7)
    slw r3, r8, r11
    subic. r6, r6, 0x1
    srw r0, r9, r12
    or r0, r3, r0
    stw r0, 0x4(r4)
    slw r3, r9, r11
    lwzu r8, 0x8(r7)
    srw r0, r8, r12
    or r0, r3, r0
    stwu r0, 0x8(r4)
    bne lbl_fn_8067E3EC_00002FC8
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_fn_8067E3EC_00003014
    lwzu r0, 0x4(r7)
    slw r3, r8, r11
    srw r0, r0, r12
    or r0, r3, r0
    stwu r0, 0x4(r4)
lbl_fn_8067E3EC_00003014:
    clrlwi. r5, r5, 30
    addi r6, r7, 0x3
    addi r3, r4, 0x3
    beqlr
    subfic r0, r10, 0x4
    subf r6, r0, r6
lbl_fn_8067E3EC_0000302C:
    lbzu r0, 0x1(r6)
    subic. r5, r5, 0x1
    stbu r0, 0x1(r3)
    bne lbl_fn_8067E3EC_0000302C
    blr
}

asm void fn_8067E4AC(void)
{
    nofralloc
    add r12, r3, r5
    add r4, r4, r5
    clrlwi. r3, r12, 30
    beq lbl_fn_8067E4AC_00003064
    subf r5, r3, r5
lbl_fn_8067E4AC_00003054:
    lbzu r0, -0x1(r4)
    subic. r3, r3, 0x1
    stbu r0, -0x1(r12)
    bne lbl_fn_8067E4AC_00003054
lbl_fn_8067E4AC_00003064:
    clrlslwi r10, r4, 30, 3
    clrlwi r9, r4, 30
    subfic r11, r10, 0x20
    srwi r6, r5, 3
    subfic r0, r9, 0x4
    add r4, r4, r0
    lwzu r7, -0x4(r4)
lbl_fn_8067E4AC_00003080:
    lwz r8, -0x4(r4)
    srw r0, r7, r11
    subic. r6, r6, 0x1
    slw r3, r8, r10
    or r0, r3, r0
    stw r0, -0x4(r12)
    srw r0, r8, r11
    lwzu r7, -0x8(r4)
    slw r3, r7, r10
    or r0, r3, r0
    stwu r0, -0x8(r12)
    bne lbl_fn_8067E4AC_00003080
    rlwinm. r0, r5, 0, 29, 29
    beq lbl_fn_8067E4AC_000030CC
    lwzu r3, -0x4(r4)
    srw r0, r7, r11
    slw r3, r3, r10
    or r0, r3, r0
    stwu r0, -0x4(r12)
lbl_fn_8067E4AC_000030CC:
    clrlwi. r5, r5, 30
    beqlr
    add r3, r4, r9
lbl_fn_8067E4AC_000030D8:
    lbzu r0, -0x1(r3)
    subic. r5, r5, 0x1
    stbu r0, -0x1(r12)
    bne lbl_fn_8067E4AC_000030D8
    blr
}

asm void fn_8067E558(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r0, 0x8(r1)
    clrrwi r3, r0, 31
    addi r1, r1, 0x10
    blr
}

asm void fn_8067E570(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    rlwinm r4, r3, 0, 1, 11
    subis r0, r4, 0x7ff0
    cmplwi r0, 0x0
    beq lbl_fn_8067E570_0000312C
    cmpwi r4, 0x0
    beq lbl_fn_8067E570_00003150
    b lbl_fn_8067E570_00003174
lbl_fn_8067E570_0000312C:
    clrlwi. r0, r3, 12
    bne lbl_fn_8067E570_00003140
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8067E570_00003148
lbl_fn_8067E570_00003140:
    li r3, 0x1
    b lbl_fn_8067E570_00003178
lbl_fn_8067E570_00003148:
    li r3, 0x2
    b lbl_fn_8067E570_00003178
lbl_fn_8067E570_00003150:
    clrlwi. r0, r3, 12
    bne lbl_fn_8067E570_00003164
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8067E570_0000316C
lbl_fn_8067E570_00003164:
    li r3, 0x5
    b lbl_fn_8067E570_00003178
lbl_fn_8067E570_0000316C:
    li r3, 0x3
    b lbl_fn_8067E570_00003178
lbl_fn_8067E570_00003174:
    li r3, 0x4
lbl_fn_8067E570_00003178:
    addi r1, r1, 0x10
    blr
}

asm void __stdio_atexit(void)
{
    nofralloc
    lis r3, __close_all@ha
    addi r3, r3, __close_all@l
    stw r3, __stdio_exit
    blr
}

asm void parse_format_8067E5FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r7, 0x0
    lbz r6, 0x1(r3)
    stw r0, 0x34(r1)
    li r8, 0x1
    extsb r6, r6
    stw r31, 0x2c(r1)
    cmpwi r6, 0x25
    addi r31, r3, 0x1
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stb r8, 0x8(r1)
    stb r7, 0x9(r1)
    stb r7, 0xa(r1)
    stb r7, 0xb(r1)
    stb r7, 0xc(r1)
    stw r7, 0x10(r1)
    stw r7, 0x14(r1)
    bne lbl_parse_format_8067E5FC_0000320C
    stb r6, 0xd(r1)
    addi r3, r31, 0x1
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stw r7, 0x8(r5)
    stw r7, 0xc(r5)
    b lbl_parse_format_8067E5FC_00003730
lbl_parse_format_8067E5FC_0000320C:
    li r0, 0x2
lbl_parse_format_8067E5FC_00003210:
    cmpwi r6, 0x2d
    li r4, 0x1
    beq lbl_parse_format_8067E5FC_00003240
    cmpwi r6, 0x2b
    beq lbl_parse_format_8067E5FC_00003248
    cmpwi r6, 0x20
    beq lbl_parse_format_8067E5FC_00003250
    cmpwi r6, 0x23
    beq lbl_parse_format_8067E5FC_00003264
    cmpwi r6, 0x30
    beq lbl_parse_format_8067E5FC_0000326C
    b lbl_parse_format_8067E5FC_00003280
lbl_parse_format_8067E5FC_00003240:
    stb r7, 0x8(r1)
    b lbl_parse_format_8067E5FC_00003284
lbl_parse_format_8067E5FC_00003248:
    stb r8, 0x9(r1)
    b lbl_parse_format_8067E5FC_00003284
lbl_parse_format_8067E5FC_00003250:
    lbz r3, 0x9(r1)
    cmplwi r3, 0x1
    beq lbl_parse_format_8067E5FC_00003284
    stb r0, 0x9(r1)
    b lbl_parse_format_8067E5FC_00003284
lbl_parse_format_8067E5FC_00003264:
    stb r8, 0xb(r1)
    b lbl_parse_format_8067E5FC_00003284
lbl_parse_format_8067E5FC_0000326C:
    lbz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_parse_format_8067E5FC_00003284
    stb r0, 0x8(r1)
    b lbl_parse_format_8067E5FC_00003284
lbl_parse_format_8067E5FC_00003280:
    li r4, 0x0
lbl_parse_format_8067E5FC_00003284:
    cmpwi r4, 0x0
    beq lbl_parse_format_8067E5FC_00003298
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_parse_format_8067E5FC_00003210
lbl_parse_format_8067E5FC_00003298:
    cmpwi r6, 0x2a
    bne lbl_parse_format_8067E5FC_000032D8
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x10(r1)
    cmpwi r0, 0x0
    bge lbl_parse_format_8067E5FC_000032CC
    neg r0, r0
    li r3, 0x0
    stb r3, 0x8(r1)
    stw r0, 0x10(r1)
lbl_parse_format_8067E5FC_000032CC:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_parse_format_8067E5FC_0000333C
lbl_parse_format_8067E5FC_000032D8:
    lis r3, lbl_807BB380@ha
    addi r3, r3, lbl_807BB380@l
    lwz r4, 0x38(r3)
    b lbl_parse_format_8067E5FC_00003304
lbl_parse_format_8067E5FC_000032E8:
    lwz r0, 0x10(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x10(r1)
    extsb r6, r6
lbl_parse_format_8067E5FC_00003304:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_parse_format_8067E5FC_00003314
    li r0, 0x0
lbl_parse_format_8067E5FC_00003314:
    cmpwi r0, 0x0
    beq lbl_parse_format_8067E5FC_00003324
    li r0, 0x0
    b lbl_parse_format_8067E5FC_00003334
lbl_parse_format_8067E5FC_00003324:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_parse_format_8067E5FC_00003334:
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_000032E8
lbl_parse_format_8067E5FC_0000333C:
    lwz r7, 0x10(r1)
    cmpwi r7, 0x1fd
    ble lbl_parse_format_8067E5FC_00003374
    li r0, 0xff
    stb r0, 0xd(r1)
    lwz r5, 0x8(r1)
    addi r3, r31, 0x1
    lwz r4, 0xc(r1)
    lwz r0, 0x14(r1)
    stw r5, 0x0(r30)
    stw r4, 0x4(r30)
    stw r7, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_parse_format_8067E5FC_00003730
lbl_parse_format_8067E5FC_00003374:
    cmpwi r6, 0x2e
    bne lbl_parse_format_8067E5FC_00003428
    lbzu r6, 0x1(r31)
    li r0, 0x1
    stb r0, 0xa(r1)
    extsb r6, r6
    cmpwi r6, 0x2a
    bne lbl_parse_format_8067E5FC_000033C4
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r0, 0x0
    bge lbl_parse_format_8067E5FC_000033B8
    li r0, 0x0
    stb r0, 0xa(r1)
lbl_parse_format_8067E5FC_000033B8:
    lbzu r6, 0x1(r31)
    extsb r6, r6
    b lbl_parse_format_8067E5FC_00003428
lbl_parse_format_8067E5FC_000033C4:
    lis r3, lbl_807BB380@ha
    addi r3, r3, lbl_807BB380@l
    lwz r4, 0x38(r3)
    b lbl_parse_format_8067E5FC_000033F0
lbl_parse_format_8067E5FC_000033D4:
    lwz r0, 0x14(r1)
    mulli r0, r0, 0xa
    add r3, r6, r0
    lbzu r6, 0x1(r31)
    subi r0, r3, 0x30
    stw r0, 0x14(r1)
    extsb r6, r6
lbl_parse_format_8067E5FC_000033F0:
    cmplwi r6, 0xff
    li r0, 0x1
    bgt lbl_parse_format_8067E5FC_00003400
    li r0, 0x0
lbl_parse_format_8067E5FC_00003400:
    cmpwi r0, 0x0
    beq lbl_parse_format_8067E5FC_00003410
    li r0, 0x0
    b lbl_parse_format_8067E5FC_00003420
lbl_parse_format_8067E5FC_00003410:
    lwz r3, 0x8(r4)
    slwi r0, r6, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_parse_format_8067E5FC_00003420:
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_000033D4
lbl_parse_format_8067E5FC_00003428:
    cmpwi r6, 0x68
    li r4, 0x1
    beq lbl_parse_format_8067E5FC_00003460
    cmpwi r6, 0x6c
    beq lbl_parse_format_8067E5FC_0000348C
    cmpwi r6, 0x4c
    beq lbl_parse_format_8067E5FC_000034B8
    cmpwi r6, 0x6a
    beq lbl_parse_format_8067E5FC_000034C4
    cmpwi r6, 0x74
    beq lbl_parse_format_8067E5FC_000034D0
    cmpwi r6, 0x7a
    beq lbl_parse_format_8067E5FC_000034DC
    b lbl_parse_format_8067E5FC_000034E8
lbl_parse_format_8067E5FC_00003460:
    lbz r0, 0x1(r31)
    li r3, 0x2
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x68
    bne lbl_parse_format_8067E5FC_000034EC
    li r0, 0x1
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_0000348C:
    lbz r0, 0x1(r31)
    li r3, 0x3
    stb r3, 0xc(r1)
    extsb r3, r0
    cmpwi r3, 0x6c
    bne lbl_parse_format_8067E5FC_000034EC
    li r0, 0x4
    stb r0, 0xc(r1)
    mr r6, r3
    addi r31, r31, 0x1
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_000034B8:
    li r0, 0x9
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_000034C4:
    li r0, 0x6
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_000034D0:
    li r0, 0x8
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_000034DC:
    li r0, 0x7
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_000034EC
lbl_parse_format_8067E5FC_000034E8:
    li r4, 0x0
lbl_parse_format_8067E5FC_000034EC:
    cmpwi r4, 0x0
    beq lbl_parse_format_8067E5FC_000034FC
    lbzu r6, 0x1(r31)
    extsb r6, r6
lbl_parse_format_8067E5FC_000034FC:
    subi r0, r6, 0x41
    stb r6, 0xd(r1)
    cmplwi r0, 0x37
    bgt lbl_parse_format_8067E5FC_00003704
    lis r3, jumptable_807BB3C8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BB3C8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_parse_format_8067E5FC_0000353C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_0000353C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_00003554
    li r0, 0x1
    stw r0, 0x14(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_00003554:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_parse_format_8067E5FC_0000370C
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_parse_format_8067E5FC_00003590
    cmplwi r3, 0x2
    beq lbl_parse_format_8067E5FC_00003590
    cmplwi r3, 0x4
    bne lbl_parse_format_8067E5FC_0000359C
lbl_parse_format_8067E5FC_00003590:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_0000359C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_0000370C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_000035C8
    li r0, 0xd
    stw r0, 0x14(r1)
lbl_parse_format_8067E5FC_000035C8:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_parse_format_8067E5FC_000035F4
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_parse_format_8067E5FC_000035F4
    cmplwi r3, 0x4
    bne lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_000035F4:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_00003614
    li r0, 0x1
    stw r0, 0x14(r1)
lbl_parse_format_8067E5FC_00003614:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_parse_format_8067E5FC_00003640
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_parse_format_8067E5FC_00003640
    cmplwi r3, 0x4
    bne lbl_parse_format_8067E5FC_0000364C
lbl_parse_format_8067E5FC_00003640:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_0000364C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_0000370C
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_parse_format_8067E5FC_0000370C
    li r5, 0x78
    li r4, 0x1
    li r3, 0x3
    li r0, 0x8
    stb r5, 0xd(r1)
    stb r4, 0xb(r1)
    stb r3, 0xc(r1)
    stw r0, 0x14(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lbz r3, 0xc(r1)
    cmplwi r3, 0x3
    bne lbl_parse_format_8067E5FC_000036A0
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_000036A0:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_parse_format_8067E5FC_000036B4
    cmpwi r3, 0x0
    beq lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_000036B4:
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bne lbl_parse_format_8067E5FC_000036D8
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_000036D8:
    cmpwi r0, 0x0
    beq lbl_parse_format_8067E5FC_0000370C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_parse_format_8067E5FC_0000370C
    li r0, 0xff
    stb r0, 0xd(r1)
    b lbl_parse_format_8067E5FC_0000370C
lbl_parse_format_8067E5FC_00003704:
    li r0, 0xff
    stb r0, 0xd(r1)
lbl_parse_format_8067E5FC_0000370C:
    lwz r6, 0x8(r1)
    addi r3, r31, 0x1
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    stw r4, 0x8(r30)
    stw r0, 0xc(r30)
lbl_parse_format_8067E5FC_00003730:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void long2str(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r8, 0x0
    stb r8, -0x1(r4)
    subi r6, r4, 0x1
    li r7, 0x0
    bne lbl_long2str_00003790
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    bne lbl_long2str_00003790
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_long2str_00003788
    lbz r0, 0x5(r5)
    cmplwi r0, 0x6f
    beq lbl_long2str_00003790
lbl_long2str_00003788:
    mr r3, r6
    blr
lbl_long2str_00003790:
    lbz r9, 0x5(r5)
    cmpwi r9, 0x64
    beq lbl_long2str_000037C8
    cmpwi r9, 0x69
    beq lbl_long2str_000037C8
    cmpwi r9, 0x6f
    beq lbl_long2str_000037F4
    cmpwi r9, 0x75
    beq lbl_long2str_00003804
    cmpwi r9, 0x78
    beq lbl_long2str_00003814
    cmpwi r9, 0x58
    beq lbl_long2str_00003814
    b lbl_long2str_00003820
lbl_long2str_000037C8:
    cmpwi r3, 0x0
    li r0, 0xa
    bge lbl_long2str_00003820
    srawi r9, r3, 31
    lis r8, 0x8000
    xor r8, r9, r8
    or. r8, r3, r8
    beq lbl_long2str_000037EC
    neg r3, r3
lbl_long2str_000037EC:
    li r8, 0x1
    b lbl_long2str_00003820
lbl_long2str_000037F4:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x8
    b lbl_long2str_00003820
lbl_long2str_00003804:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0xa
    b lbl_long2str_00003820
lbl_long2str_00003814:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x10
lbl_long2str_00003820:
    divwu r9, r3, r0
    mullw r9, r9, r0
    subf r11, r9, r3
    divwu r3, r3, r0
    cmpwi r11, 0xa
    bge lbl_long2str_00003840
    addi r11, r11, 0x30
    b lbl_long2str_00003858
lbl_long2str_00003840:
    lbz r9, 0x5(r5)
    addi r10, r11, 0x37
    cmplwi r9, 0x78
    bne lbl_long2str_00003854
    addi r10, r11, 0x57
lbl_long2str_00003854:
    mr r11, r10
lbl_long2str_00003858:
    cmpwi r3, 0x0
    stb r11, -0x1(r6)
    subi r6, r6, 0x1
    addi r7, r7, 0x1
    bne lbl_long2str_00003820
    cmplwi r0, 0x8
    bne lbl_long2str_00003898
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_long2str_00003898
    lbz r3, 0x0(r6)
    cmpwi r3, 0x30
    beq lbl_long2str_00003898
    li r3, 0x30
    stbu r3, -0x1(r6)
    addi r7, r7, 0x1
lbl_long2str_00003898:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x2
    bne lbl_long2str_000038EC
    lwz r3, 0x8(r5)
    cmpwi r8, 0x0
    stw r3, 0xc(r5)
    bne lbl_long2str_000038C0
    lbz r3, 0x1(r5)
    cmpwi r3, 0x0
    beq lbl_long2str_000038CC
lbl_long2str_000038C0:
    lwz r3, 0xc(r5)
    subi r3, r3, 0x1
    stw r3, 0xc(r5)
lbl_long2str_000038CC:
    cmplwi r0, 0x10
    bne lbl_long2str_000038EC
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_long2str_000038EC
    lwz r3, 0xc(r5)
    subi r3, r3, 0x2
    stw r3, 0xc(r5)
lbl_long2str_000038EC:
    lwz r9, 0xc(r5)
    subf r3, r6, r4
    add r3, r9, r3
    cmpwi r3, 0x1fd
    ble lbl_long2str_00003908
    li r3, 0x0
    blr
lbl_long2str_00003908:
    li r4, 0x30
    b lbl_long2str_00003918
lbl_long2str_00003910:
    stbu r4, -0x1(r6)
    addi r7, r7, 0x1
lbl_long2str_00003918:
    lwz r3, 0xc(r5)
    cmpw r7, r3
    blt lbl_long2str_00003910
    cmplwi r0, 0x10
    bne lbl_long2str_00003948
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_long2str_00003948
    lbz r3, 0x5(r5)
    li r0, 0x30
    stb r3, -0x1(r6)
    stbu r0, -0x2(r6)
lbl_long2str_00003948:
    cmpwi r8, 0x0
    beq lbl_long2str_0000395C
    li r0, 0x2d
    stbu r0, -0x1(r6)
    b lbl_long2str_00003984
lbl_long2str_0000395C:
    lbz r0, 0x1(r5)
    cmplwi r0, 0x1
    bne lbl_long2str_00003974
    li r0, 0x2b
    stbu r0, -0x1(r6)
    b lbl_long2str_00003984
lbl_long2str_00003974:
    cmplwi r0, 0x2
    bne lbl_long2str_00003984
    li r0, 0x20
    stbu r0, -0x1(r6)
lbl_long2str_00003984:
    mr r3, r6
    blr
}

asm void longlong2str(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    or. r0, r4, r3
    stmw r22, 0x8(r1)
    li r25, 0x0
    mr r31, r3
    mr r30, r4
    mr r23, r5
    mr r24, r6
    subi r27, r5, 0x1
    li r26, 0x0
    stb r25, -0x1(r5)
    bne lbl_longlong2str_000039F0
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    bne lbl_longlong2str_000039F0
    lbz r0, 0x3(r6)
    cmpwi r0, 0x0
    beq lbl_longlong2str_000039E8
    lbz r0, 0x5(r6)
    cmplwi r0, 0x6f
    beq lbl_longlong2str_000039F0
lbl_longlong2str_000039E8:
    mr r3, r27
    b lbl_longlong2str_00003C28
lbl_longlong2str_000039F0:
    lbz r0, 0x5(r6)
    cmpwi r0, 0x64
    beq lbl_longlong2str_00003A28
    cmpwi r0, 0x69
    beq lbl_longlong2str_00003A28
    cmpwi r0, 0x6f
    beq lbl_longlong2str_00003A6C
    cmpwi r0, 0x75
    beq lbl_longlong2str_00003A7C
    cmpwi r0, 0x78
    beq lbl_longlong2str_00003A8C
    cmpwi r0, 0x58
    beq lbl_longlong2str_00003A8C
    b lbl_longlong2str_00003A98
lbl_longlong2str_00003A28:
    li r29, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r29, 0x8000
    li r28, 0xa
    subfc r5, r29, r4
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_longlong2str_00003A98
    lis r0, 0x8000
    xor r0, r3, r0
    or. r0, r4, r0
    beq lbl_longlong2str_00003A64
    subfic r30, r4, 0x0
    subfze r31, r3
lbl_longlong2str_00003A64:
    li r25, 0x1
    b lbl_longlong2str_00003A98
lbl_longlong2str_00003A6C:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x8
    b lbl_longlong2str_00003A98
lbl_longlong2str_00003A7C:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0xa
    b lbl_longlong2str_00003A98
lbl_longlong2str_00003A8C:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x10
lbl_longlong2str_00003A98:
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __mod2u
    mr r22, r4
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __div2u
    cmpwi r22, 0xa
    mr r30, r4
    mr r31, r3
    bge lbl_longlong2str_00003ADC
    addi r5, r22, 0x30
    b lbl_longlong2str_00003AF0
lbl_longlong2str_00003ADC:
    lbz r0, 0x5(r24)
    addi r5, r22, 0x37
    cmplwi r0, 0x78
    bne lbl_longlong2str_00003AF0
    addi r5, r22, 0x57
lbl_longlong2str_00003AF0:
    or. r0, r4, r3
    stbu r5, -0x1(r27)
    addi r26, r26, 0x1
    bne lbl_longlong2str_00003A98
    xori r0, r28, 0x8
    or. r0, r0, r29
    bne lbl_longlong2str_00003B30
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_longlong2str_00003B30
    lbz r0, 0x0(r27)
    cmpwi r0, 0x30
    beq lbl_longlong2str_00003B30
    li r0, 0x30
    stbu r0, -0x1(r27)
    addi r26, r26, 0x1
lbl_longlong2str_00003B30:
    lbz r0, 0x0(r24)
    cmplwi r0, 0x2
    bne lbl_longlong2str_00003B88
    lwz r0, 0x8(r24)
    cmpwi r25, 0x0
    stw r0, 0xc(r24)
    bne lbl_longlong2str_00003B58
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    beq lbl_longlong2str_00003B64
lbl_longlong2str_00003B58:
    lwz r3, 0xc(r24)
    subi r0, r3, 0x1
    stw r0, 0xc(r24)
lbl_longlong2str_00003B64:
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_longlong2str_00003B88
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_longlong2str_00003B88
    lwz r3, 0xc(r24)
    subi r0, r3, 0x2
    stw r0, 0xc(r24)
lbl_longlong2str_00003B88:
    lwz r3, 0xc(r24)
    subf r0, r27, r23
    add r0, r3, r0
    cmpwi r0, 0x1fd
    ble lbl_longlong2str_00003BA4
    li r3, 0x0
    b lbl_longlong2str_00003C28
lbl_longlong2str_00003BA4:
    li r3, 0x30
    b lbl_longlong2str_00003BB4
lbl_longlong2str_00003BAC:
    stbu r3, -0x1(r27)
    addi r26, r26, 0x1
lbl_longlong2str_00003BB4:
    lwz r0, 0xc(r24)
    cmpw r26, r0
    blt lbl_longlong2str_00003BAC
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_longlong2str_00003BE8
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_longlong2str_00003BE8
    lbz r3, 0x5(r24)
    li r0, 0x30
    stb r3, -0x1(r27)
    stbu r0, -0x2(r27)
lbl_longlong2str_00003BE8:
    cmpwi r25, 0x0
    beq lbl_longlong2str_00003BFC
    li r0, 0x2d
    stbu r0, -0x1(r27)
    b lbl_longlong2str_00003C24
lbl_longlong2str_00003BFC:
    lbz r0, 0x1(r24)
    cmplwi r0, 0x1
    bne lbl_longlong2str_00003C14
    li r0, 0x2b
    stbu r0, -0x1(r27)
    b lbl_longlong2str_00003C24
lbl_longlong2str_00003C14:
    cmplwi r0, 0x2
    bne lbl_longlong2str_00003C24
    li r0, 0x20
    stbu r0, -0x1(r27)
lbl_longlong2str_00003C24:
    mr r3, r27
lbl_longlong2str_00003C28:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void double2hex(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r5, lbl_807BB1D0@ha
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f1
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r4
    stw r29, 0x74(r1)
    mr r29, r3
    stw r28, 0x70(r1)
    lwz r0, 0xc(r4)
    lwz r5, lbl_807BB1D0@l(r5)
    cmpwi r0, 0x1fd
    stfd f1, 0x8(r1)
    lbz r31, 0x0(r5)
    ble lbl_double2hex_00003C90
    li r3, 0x0
    b lbl_double2hex_00003FDC
lbl_double2hex_00003C90:
    li r28, 0x0
    li r0, 0x20
    stb r28, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x38
    sth r0, 0x12(r1)
    bl fn_8067C590
    lbz r0, 0x3d(r1)
    cmpwi r0, 0x30
    beq lbl_double2hex_00003CCC
    cmpwi r0, 0x49
    beq lbl_double2hex_00003CD4
    cmpwi r0, 0x4e
    beq lbl_double2hex_00003D60
    b lbl_double2hex_00003DF0
lbl_double2hex_00003CCC:
    sth r28, 0x3a(r1)
    b lbl_double2hex_00003DF0
lbl_double2hex_00003CD4:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_double2hex_00003D1C
    lbz r0, 0x5(r30)
    subi r28, r29, 0x5
    cmplwi r0, 0x41
    bne lbl_double2hex_00003D04
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    bl strcpy
    b lbl_double2hex_00003D58
lbl_double2hex_00003D04:
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x5
    bl strcpy
    b lbl_double2hex_00003D58
lbl_double2hex_00003D1C:
    lbz r0, 0x5(r30)
    subi r28, r29, 0x4
    cmplwi r0, 0x41
    bne lbl_double2hex_00003D44
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0xa
    bl strcpy
    b lbl_double2hex_00003D58
lbl_double2hex_00003D44:
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0xe
    bl strcpy
lbl_double2hex_00003D58:
    mr r3, r28
    b lbl_double2hex_00003FDC
lbl_double2hex_00003D60:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_double2hex_00003DAC
    lbz r0, 0x5(r30)
    subi r28, r29, 0x5
    cmplwi r0, 0x41
    bne lbl_double2hex_00003D94
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x12
    bl strcpy
    b lbl_double2hex_00003DE8
lbl_double2hex_00003D94:
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x17
    bl strcpy
    b lbl_double2hex_00003DE8
lbl_double2hex_00003DAC:
    lbz r0, 0x5(r30)
    subi r28, r29, 0x4
    cmplwi r0, 0x41
    bne lbl_double2hex_00003DD4
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x1c
    bl strcpy
    b lbl_double2hex_00003DE8
lbl_double2hex_00003DD4:
    lis r4, lbl_80765840@ha
    mr r3, r28
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x20
    bl strcpy
lbl_double2hex_00003DE8:
    mr r3, r28
    b lbl_double2hex_00003FDC
lbl_double2hex_00003DF0:
    lbz r0, 0x9(r1)
    li r8, 0x0
    lbz r3, 0x8(r1)
    li r9, 0x1
    slwi r0, r0, 17
    li r7, 0x64
    rlwimi r0, r3, 25, 0, 6
    stb r9, 0x28(r1)
    srwi r5, r0, 21
    mr r4, r29
    neg r0, r5
    stb r9, 0x29(r1)
    or r3, r0, r5
    subi r0, r5, 0x3ff
    stb r8, 0x2a(r1)
    srawi r3, r3, 31
    addi r5, r1, 0x18
    stb r8, 0x2b(r1)
    and r3, r0, r3
    lwz r6, 0x28(r1)
    stb r8, 0x2c(r1)
    stb r7, 0x2d(r1)
    lwz r0, 0x2c(r1)
    stw r8, 0x30(r1)
    stw r9, 0x34(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r8, 0x20(r1)
    stw r9, 0x24(r1)
    bl long2str
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_double2hex_00003E80
    li r0, 0x70
    stbu r0, -0x1(r3)
    b lbl_double2hex_00003E88
lbl_double2hex_00003E80:
    li r0, 0x50
    stbu r0, -0x1(r3)
lbl_double2hex_00003E88:
    lwz r0, 0xc(r30)
    addi r8, r1, 0x8
    slwi r4, r0, 2
    addi r9, r4, 0xb
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_double2hex_00003F34
lbl_double2hex_00003EA4:
    cmpwi r9, 0x40
    bge lbl_double2hex_00003F24
    srawi r4, r9, 3
    subi r0, r9, 0x4
    add r7, r8, r4
    clrlwi r6, r9, 29
    clrrwi r4, r9, 3
    clrrwi r0, r0, 3
    lbz r5, 0x0(r7)
    subfic r6, r6, 0x7
    cmpw r4, r0
    sraw r0, r5, r6
    clrlwi r4, r0, 24
    beq lbl_double2hex_00003EF4
    lbz r0, -0x1(r7)
    slwi r0, r0, 8
    sraw r0, r0, r6
    clrlwi r0, r0, 24
    or r0, r4, r0
    clrlwi r4, r0, 24
lbl_double2hex_00003EF4:
    clrlwi r4, r4, 28
    cmplwi r4, 0xa
    bge lbl_double2hex_00003F08
    addi r4, r4, 0x30
    b lbl_double2hex_00003F28
lbl_double2hex_00003F08:
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_double2hex_00003F1C
    addi r4, r4, 0x57
    b lbl_double2hex_00003F28
lbl_double2hex_00003F1C:
    addi r4, r4, 0x37
    b lbl_double2hex_00003F28
lbl_double2hex_00003F24:
    li r4, 0x30
lbl_double2hex_00003F28:
    stbu r4, -0x1(r3)
    subi r9, r9, 0x4
    bdnz lbl_double2hex_00003EA4
lbl_double2hex_00003F34:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_double2hex_00003F4C
    lbz r0, 0x3(r30)
    cmpwi r0, 0x0
    beq lbl_double2hex_00003F50
lbl_double2hex_00003F4C:
    stbu r31, -0x1(r3)
lbl_double2hex_00003F50:
    fabs f1, f31
    lfd f0, lbl_80888AB0
    fcmpu cr0, f0, f1
    beq lbl_double2hex_00003F6C
    li r0, 0x31
    stbu r0, -0x1(r3)
    b lbl_double2hex_00003F74
lbl_double2hex_00003F6C:
    li r0, 0x30
    stbu r0, -0x1(r3)
lbl_double2hex_00003F74:
    lbz r0, 0x5(r30)
    cmplwi r0, 0x61
    bne lbl_double2hex_00003F8C
    li r0, 0x78
    stbu r0, -0x1(r3)
    b lbl_double2hex_00003F94
lbl_double2hex_00003F8C:
    li r0, 0x58
    stbu r0, -0x1(r3)
lbl_double2hex_00003F94:
    li r0, 0x30
    stbu r0, -0x1(r3)
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_double2hex_00003FB4
    li r0, 0x2d
    stbu r0, -0x1(r3)
    b lbl_double2hex_00003FDC
lbl_double2hex_00003FB4:
    lbz r0, 0x1(r30)
    cmplwi r0, 0x1
    bne lbl_double2hex_00003FCC
    li r0, 0x2b
    stbu r0, -0x1(r3)
    b lbl_double2hex_00003FDC
lbl_double2hex_00003FCC:
    cmplwi r0, 0x2
    bne lbl_double2hex_00003FDC
    li r0, 0x20
    stbu r0, -0x1(r3)
lbl_double2hex_00003FDC:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8067F470(void)
{
    nofralloc
    cmpwi r4, 0x0
    bge lbl_fn_8067F470_00004028
lbl_fn_8067F470_0000400C:
    li r5, 0x0
    li r4, 0x1
    li r0, 0x30
    sth r5, 0x2(r3)
    stb r4, 0x4(r3)
    stb r0, 0x5(r3)
    blr
lbl_fn_8067F470_00004028:
    lbz r7, 0x4(r3)
    cmpw r4, r7
    bgelr
    add r6, r3, r4
    lbz r5, 0x5(r6)
    addi r8, r6, 0x5
    subi r0, r5, 0x30
    extsb r6, r0
    cmpwi r6, 0x5
    bne lbl_fn_8067F470_0000408C
    add r5, r3, r7
    addi r5, r5, 0x5
lbl_fn_8067F470_00004058:
    subi r5, r5, 0x1
    cmplw r5, r8
    ble lbl_fn_8067F470_00004070
    lbz r0, 0x0(r5)
    cmpwi r0, 0x30
    beq lbl_fn_8067F470_00004058
lbl_fn_8067F470_00004070:
    cmplw r5, r8
    bne lbl_fn_8067F470_00004084
    lbz r0, -0x1(r8)
    clrlwi r5, r0, 31
    b lbl_fn_8067F470_000040A0
lbl_fn_8067F470_00004084:
    li r5, 0x1
    b lbl_fn_8067F470_000040A0
lbl_fn_8067F470_0000408C:
    xori r0, r6, 0x5
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r5, r0, 31
lbl_fn_8067F470_000040A0:
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_fn_8067F470_000040F4
lbl_fn_8067F470_000040AC:
    lbzu r0, -0x1(r8)
    add r5, r0, r5
    subi r0, r5, 0x30
    extsb r6, r0
    xori r0, r6, 0x9
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi. r5, r0, 31
    bne lbl_fn_8067F470_000040DC
    cmpwi r6, 0x0
    bne lbl_fn_8067F470_000040E4
lbl_fn_8067F470_000040DC:
    subi r4, r4, 0x1
    b lbl_fn_8067F470_000040F0
lbl_fn_8067F470_000040E4:
    addi r0, r6, 0x30
    stb r0, 0x0(r8)
    b lbl_fn_8067F470_000040F4
lbl_fn_8067F470_000040F0:
    bdnz lbl_fn_8067F470_000040AC
lbl_fn_8067F470_000040F4:
    cmpwi r5, 0x0
    beq lbl_fn_8067F470_0000411C
    lha r5, 0x2(r3)
    li r4, 0x1
    li r0, 0x31
    stb r4, 0x4(r3)
    addi r4, r5, 0x1
    sth r4, 0x2(r3)
    stb r0, 0x5(r3)
    blr
lbl_fn_8067F470_0000411C:
    cmpwi r4, 0x0
    beq lbl_fn_8067F470_0000400C
    stb r4, 0x4(r3)
    blr
}

asm void float2str(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r5, lbl_807BB1D0@ha
    stw r0, 0x54(r1)
    stfd f31, 0x48(r1)
    fmr f31, f1
    stw r31, 0x44(r1)
    stw r30, 0x40(r1)
    stw r29, 0x3c(r1)
    mr r29, r4
    stw r28, 0x38(r1)
    mr r28, r3
    lwz r0, 0xc(r4)
    lwz r5, lbl_807BB1D0@l(r5)
    cmpwi r0, 0x1fd
    lbz r30, 0x0(r5)
    ble lbl_float2str_00004178
    li r3, 0x0
    b lbl_float2str_000048A4
lbl_float2str_00004178:
    li r3, 0x0
    li r0, 0x20
    stb r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    sth r0, 0xa(r1)
    bl fn_8067C590
    lbz r0, 0x10(r1)
    addi r5, r1, 0x11
    add r5, r5, r0
    b lbl_float2str_000041BC
lbl_float2str_000041A4:
    lbz r4, 0x10(r1)
    lha r3, 0xe(r1)
    subi r0, r4, 0x1
    stb r0, 0x10(r1)
    addi r0, r3, 0x1
    sth r0, 0xe(r1)
lbl_float2str_000041BC:
    lbz r0, 0x10(r1)
    cmplwi r0, 0x1
    ble lbl_float2str_000041D4
    lbzu r0, -0x1(r5)
    cmpwi r0, 0x30
    beq lbl_float2str_000041A4
lbl_float2str_000041D4:
    lbz r0, 0x11(r1)
    cmpwi r0, 0x30
    beq lbl_float2str_000041F4
    cmpwi r0, 0x49
    beq lbl_float2str_00004200
    cmpwi r0, 0x4e
    beq lbl_float2str_00004304
    b lbl_float2str_0000440C
lbl_float2str_000041F4:
    li r0, 0x0
    sth r0, 0xe(r1)
    b lbl_float2str_0000440C
lbl_float2str_00004200:
    lfd f0, lbl_80888AB0
    fcmpo cr0, f31, f0
    bge lbl_float2str_00004284
    lbz r0, 0x5(r29)
    subi r31, r28, 0x5
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_float2str_00004224
    li r3, 0x0
lbl_float2str_00004224:
    cmpwi r3, 0x0
    beq lbl_float2str_00004234
    li r0, 0x0
    b lbl_float2str_00004250
lbl_float2str_00004234:
    lis r3, lbl_807BB380@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_float2str_00004250:
    cmpwi r0, 0x0
    beq lbl_float2str_0000426C
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    bl strcpy
    b lbl_float2str_000042FC
lbl_float2str_0000426C:
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x5
    bl strcpy
    b lbl_float2str_000042FC
lbl_float2str_00004284:
    lbz r0, 0x5(r29)
    subi r31, r28, 0x4
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_float2str_0000429C
    li r3, 0x0
lbl_float2str_0000429C:
    cmpwi r3, 0x0
    beq lbl_float2str_000042AC
    li r0, 0x0
    b lbl_float2str_000042C8
lbl_float2str_000042AC:
    lis r3, lbl_807BB380@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_float2str_000042C8:
    cmpwi r0, 0x0
    beq lbl_float2str_000042E8
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0xa
    bl strcpy
    b lbl_float2str_000042FC
lbl_float2str_000042E8:
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0xe
    bl strcpy
lbl_float2str_000042FC:
    mr r3, r31
    b lbl_float2str_000048A4
lbl_float2str_00004304:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_float2str_0000438C
    lbz r0, 0x5(r29)
    subi r31, r28, 0x5
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_float2str_00004328
    li r3, 0x0
lbl_float2str_00004328:
    cmpwi r3, 0x0
    beq lbl_float2str_00004338
    li r0, 0x0
    b lbl_float2str_00004354
lbl_float2str_00004338:
    lis r3, lbl_807BB380@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_float2str_00004354:
    cmpwi r0, 0x0
    beq lbl_float2str_00004374
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x12
    bl strcpy
    b lbl_float2str_00004404
lbl_float2str_00004374:
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x17
    bl strcpy
    b lbl_float2str_00004404
lbl_float2str_0000438C:
    lbz r0, 0x5(r29)
    subi r31, r28, 0x4
    li r3, 0x1
    cmplwi r0, 0xff
    bgt lbl_float2str_000043A4
    li r3, 0x0
lbl_float2str_000043A4:
    cmpwi r3, 0x0
    beq lbl_float2str_000043B4
    li r0, 0x0
    b lbl_float2str_000043D0
lbl_float2str_000043B4:
    lis r3, lbl_807BB380@ha
    slwi r0, r0, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_float2str_000043D0:
    cmpwi r0, 0x0
    beq lbl_float2str_000043F0
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x1c
    bl strcpy
    b lbl_float2str_00004404
lbl_float2str_000043F0:
    lis r4, lbl_80765840@ha
    mr r3, r31
    addi r4, r4, lbl_80765840@l
    addi r4, r4, 0x20
    bl strcpy
lbl_float2str_00004404:
    mr r3, r31
    b lbl_float2str_000048A4
lbl_float2str_0000440C:
    lbz r3, 0x10(r1)
    li r0, 0x0
    lha r4, 0xe(r1)
    subi r31, r28, 0x1
    subi r3, r3, 0x1
    extsh r3, r3
    add r3, r4, r3
    sth r3, 0xe(r1)
    stb r0, -0x1(r28)
    lbz r0, 0x5(r29)
    cmpwi r0, 0x67
    beq lbl_float2str_00004468
    cmpwi r0, 0x47
    beq lbl_float2str_00004468
    cmpwi r0, 0x65
    beq lbl_float2str_00004520
    cmpwi r0, 0x45
    beq lbl_float2str_00004520
    cmpwi r0, 0x66
    beq lbl_float2str_00004684
    cmpwi r0, 0x46
    beq lbl_float2str_00004684
    b lbl_float2str_000048A0
lbl_float2str_00004468:
    lwz r4, 0xc(r29)
    lbz r0, 0x10(r1)
    cmpw r0, r4
    ble lbl_float2str_00004480
    addi r3, r1, 0xc
    bl fn_8067F470
lbl_float2str_00004480:
    lha r4, 0xe(r1)
    cmpwi r4, -0x4
    blt lbl_float2str_00004498
    lwz r3, 0xc(r29)
    cmpw r4, r3
    blt lbl_float2str_000044E4
lbl_float2str_00004498:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_float2str_000044B4
    lwz r3, 0xc(r29)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_float2str_000044C0
lbl_float2str_000044B4:
    lbz r3, 0x10(r1)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
lbl_float2str_000044C0:
    lbz r0, 0x5(r29)
    cmplwi r0, 0x67
    bne lbl_float2str_000044D8
    li r0, 0x65
    stb r0, 0x5(r29)
    b lbl_float2str_00004520
lbl_float2str_000044D8:
    li r0, 0x45
    stb r0, 0x5(r29)
    b lbl_float2str_00004520
lbl_float2str_000044E4:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_float2str_00004500
    addi r0, r4, 0x1
    subf r0, r0, r3
    stw r0, 0xc(r29)
    b lbl_float2str_00004684
lbl_float2str_00004500:
    lbz r0, 0x10(r1)
    addi r3, r4, 0x1
    subf. r0, r3, r0
    stw r0, 0xc(r29)
    bge lbl_float2str_00004684
    li r0, 0x0
    stw r0, 0xc(r29)
    b lbl_float2str_00004684
lbl_float2str_00004520:
    lwz r3, 0xc(r29)
    lbz r0, 0x10(r1)
    addi r4, r3, 0x1
    cmpw r0, r4
    ble lbl_float2str_0000453C
    addi r3, r1, 0xc
    bl fn_8067F470
lbl_float2str_0000453C:
    lha r6, 0xe(r1)
    li r8, 0x2b
    cmpwi r6, 0x0
    bge lbl_float2str_00004554
    neg r6, r6
    li r8, 0x2d
lbl_float2str_00004554:
    lis r3, 0x6666
    li r7, 0x0
    addi r5, r3, 0x6667
    b lbl_float2str_00004598
lbl_float2str_00004564:
    mulhw r0, r5, r6
    addi r7, r7, 0x1
    srawi r3, r0, 2
    srwi r4, r3, 31
    srawi r0, r0, 2
    add r3, r3, r4
    mulli r4, r3, 0xa
    srwi r3, r0, 31
    subf r4, r4, r6
    add r6, r0, r3
    addi r0, r4, 0x30
    stb r0, -0x1(r31)
    subi r31, r31, 0x1
lbl_float2str_00004598:
    cmpwi r6, 0x0
    bne lbl_float2str_00004564
    cmpwi r7, 0x2
    blt lbl_float2str_00004564
    stb r8, -0x1(r31)
    lbz r0, 0x5(r29)
    stbu r0, -0x2(r31)
    lwz r3, 0xc(r29)
    subf r0, r31, r28
    add r0, r3, r0
    cmpwi r0, 0x1fd
    ble lbl_float2str_000045D0
    li r3, 0x0
    b lbl_float2str_000048A4
lbl_float2str_000045D0:
    lbz r4, 0x10(r1)
    addi r0, r3, 0x1
    cmpw r4, r0
    bge lbl_float2str_000045FC
    addi r3, r3, 0x2
    li r0, 0x30
    subf r3, r4, r3
    b lbl_float2str_000045F4
lbl_float2str_000045F0:
    stbu r0, -0x1(r31)
lbl_float2str_000045F4:
    subic. r3, r3, 0x1
    bne lbl_float2str_000045F0
lbl_float2str_000045FC:
    lbz r3, 0x10(r1)
    addi r4, r1, 0x11
    add r4, r4, r3
    b lbl_float2str_00004614
lbl_float2str_0000460C:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r31)
lbl_float2str_00004614:
    subic. r3, r3, 0x1
    bne lbl_float2str_0000460C
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_float2str_00004634
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_float2str_00004638
lbl_float2str_00004634:
    stbu r30, -0x1(r31)
lbl_float2str_00004638:
    lbz r0, 0x11(r1)
    stbu r0, -0x1(r31)
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_float2str_00004658
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_float2str_000048A0
lbl_float2str_00004658:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_float2str_00004670
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_float2str_000048A0
lbl_float2str_00004670:
    cmplwi r0, 0x2
    bne lbl_float2str_000048A0
    li r0, 0x20
    stbu r0, -0x1(r31)
    b lbl_float2str_000048A0
lbl_float2str_00004684:
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_float2str_0000469C
    li r8, 0x0
lbl_float2str_0000469C:
    lwz r0, 0xc(r29)
    cmpw r8, r0
    ble lbl_float2str_000046D0
    subf r0, r0, r8
    addi r3, r1, 0xc
    subf r4, r0, r4
    bl fn_8067F470
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_float2str_000046D0
    li r8, 0x0
lbl_float2str_000046D0:
    addic. r7, r5, 0x1
    bge lbl_float2str_000046DC
    li r7, 0x0
lbl_float2str_000046DC:
    add r0, r7, r8
    cmpwi r0, 0x1fd
    ble lbl_float2str_000046F0
    li r3, 0x0
    b lbl_float2str_000048A4
lbl_float2str_000046F0:
    addi r6, r1, 0x11
    li r5, 0x0
    add r6, r6, r4
    li r3, 0x30
    b lbl_float2str_0000470C
lbl_float2str_00004704:
    stbu r3, -0x1(r31)
    addi r5, r5, 0x1
lbl_float2str_0000470C:
    lwz r0, 0xc(r29)
    subf r0, r8, r0
    cmpw r5, r0
    blt lbl_float2str_00004704
    li r3, 0x0
    b lbl_float2str_00004730
lbl_float2str_00004724:
    lbzu r0, -0x1(r6)
    addi r3, r3, 0x1
    stbu r0, -0x1(r31)
lbl_float2str_00004730:
    cmpw r3, r8
    bge lbl_float2str_00004744
    lbz r0, 0x10(r1)
    cmpw r3, r0
    blt lbl_float2str_00004724
lbl_float2str_00004744:
    cmpw r3, r8
    subf r3, r3, r8
    li r4, 0x30
    bge lbl_float2str_00004798
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_float2str_0000478C
lbl_float2str_00004760:
    stb r4, -0x1(r31)
    stb r4, -0x2(r31)
    stb r4, -0x3(r31)
    stb r4, -0x4(r31)
    stb r4, -0x5(r31)
    stb r4, -0x6(r31)
    stb r4, -0x7(r31)
    stbu r4, -0x8(r31)
    bdnz lbl_float2str_00004760
    andi. r3, r3, 0x7
    beq lbl_float2str_00004798
lbl_float2str_0000478C:
    mtctr r3
lbl_float2str_00004790:
    stbu r4, -0x1(r31)
    bdnz lbl_float2str_00004790
lbl_float2str_00004798:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_float2str_000047B0
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_float2str_000047B4
lbl_float2str_000047B0:
    stbu r30, -0x1(r31)
lbl_float2str_000047B4:
    cmpwi r7, 0x0
    beq lbl_float2str_00004858
    li r4, 0x0
    li r3, 0x30
    b lbl_float2str_000047D0
lbl_float2str_000047C8:
    stbu r3, -0x1(r31)
    addi r4, r4, 0x1
lbl_float2str_000047D0:
    lbz r0, 0x10(r1)
    subf r0, r0, r7
    cmpw r4, r0
    blt lbl_float2str_000047C8
    cmpw r4, r7
    subf r3, r4, r7
    bge lbl_float2str_00004860
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_float2str_00004844
lbl_float2str_000047F8:
    lbz r0, -0x1(r6)
    stb r0, -0x1(r31)
    lbz r0, -0x2(r6)
    stb r0, -0x2(r31)
    lbz r0, -0x3(r6)
    stb r0, -0x3(r31)
    lbz r0, -0x4(r6)
    stb r0, -0x4(r31)
    lbz r0, -0x5(r6)
    stb r0, -0x5(r31)
    lbz r0, -0x6(r6)
    stb r0, -0x6(r31)
    lbz r0, -0x7(r6)
    stb r0, -0x7(r31)
    lbzu r0, -0x8(r6)
    stbu r0, -0x8(r31)
    bdnz lbl_float2str_000047F8
    andi. r3, r3, 0x7
    beq lbl_float2str_00004860
lbl_float2str_00004844:
    mtctr r3
lbl_float2str_00004848:
    lbzu r0, -0x1(r6)
    stbu r0, -0x1(r31)
    bdnz lbl_float2str_00004848
    b lbl_float2str_00004860
lbl_float2str_00004858:
    li r0, 0x30
    stbu r0, -0x1(r31)
lbl_float2str_00004860:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_float2str_00004878
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_float2str_000048A0
lbl_float2str_00004878:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_float2str_00004890
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_float2str_000048A0
lbl_float2str_00004890:
    cmplwi r0, 0x2
    bne lbl_float2str_000048A0
    li r0, 0x20
    stbu r0, -0x1(r31)
lbl_float2str_000048A0:
    mr r3, r31
lbl_float2str_000048A4:
    lwz r0, 0x54(r1)
    lfd f31, 0x48(r1)
    lwz r31, 0x44(r1)
    lwz r30, 0x40(r1)
    lwz r29, 0x3c(r1)
    lwz r28, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void __pformatter_8067FD34(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stmw r15, 0x28c(r1)
    li r24, 0x20
    lis r22, lbl_80765840@ha
    mr r25, r3
    mr r26, r4
    mr r15, r5
    mr r27, r6
    mr r28, r7
    addi r22, r22, lbl_80765840@l
    addi r21, r1, 0x27f
    li r17, 0x0
    lis r20, lbl_807BB4A8@ha
    li r23, 0x25
    stb r24, 0x9(r1)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004910:
    mr r3, r15
    li r4, 0x25
    bl strchr
    cmpwi r3, 0x0
    mr r16, r3
    bne lbl___pformatter_8067FD34_00004964
    mr r3, r15
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl___pformatter_8067FD34_0000515C
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_0000515C
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004964:
    subf. r5, r15, r3
    add r17, r17, r5
    beq lbl___pformatter_8067FD34_00004994
    mr r12, r25
    mr r3, r26
    mr r4, r15
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_00004994
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004994:
    mr r3, r16
    mr r4, r27
    addi r5, r1, 0x70
    bl parse_format_8067E5FC
    lbz r4, 0x75(r1)
    mr r15, r3
    subi r0, r4, 0x25
    cmplwi r0, 0x53
    bgt lbl___pformatter_8067FD34_00004F70
    addi r3, r20, lbl_807BB4A8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl___pformatter_8067FD34_000049EC
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004A74
lbl___pformatter_8067FD34_000049EC:
    cmplwi r0, 0x4
    bne lbl___pformatter_8067FD34_00004A0C
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl___pformatter_8067FD34_00004A74
lbl___pformatter_8067FD34_00004A0C:
    cmplwi r0, 0x6
    bne lbl___pformatter_8067FD34_00004A2C
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl___pformatter_8067FD34_00004A74
lbl___pformatter_8067FD34_00004A2C:
    cmplwi r0, 0x7
    bne lbl___pformatter_8067FD34_00004A48
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004A74
lbl___pformatter_8067FD34_00004A48:
    cmplwi r0, 0x8
    bne lbl___pformatter_8067FD34_00004A64
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004A74
lbl___pformatter_8067FD34_00004A64:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl___pformatter_8067FD34_00004A74:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl___pformatter_8067FD34_00004A84
    extsh r31, r31
lbl___pformatter_8067FD34_00004A84:
    cmplwi r0, 0x1
    bne lbl___pformatter_8067FD34_00004A90
    extsb r31, r31
lbl___pformatter_8067FD34_00004A90:
    cmplwi r0, 0x4
    beq lbl___pformatter_8067FD34_00004AA0
    cmplwi r0, 0x6
    bne lbl___pformatter_8067FD34_00004AE4
lbl___pformatter_8067FD34_00004AA0:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x60
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r0, 0x6c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
    b lbl___pformatter_8067FD34_00004B20
lbl___pformatter_8067FD34_00004AE4:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x50
    lwz r0, 0x7c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r0, 0x5c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
lbl___pformatter_8067FD34_00004B20:
    subf r19, r18, r21
    b lbl___pformatter_8067FD34_00004FB4
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl___pformatter_8067FD34_00004B48
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004BD0
lbl___pformatter_8067FD34_00004B48:
    cmplwi r0, 0x4
    bne lbl___pformatter_8067FD34_00004B68
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl___pformatter_8067FD34_00004BD0
lbl___pformatter_8067FD34_00004B68:
    cmplwi r0, 0x6
    bne lbl___pformatter_8067FD34_00004B88
    mr r3, r27
    li r4, 0x2
    bl __va_arg
    lwz r30, 0x0(r3)
    lwz r29, 0x4(r3)
    b lbl___pformatter_8067FD34_00004BD0
lbl___pformatter_8067FD34_00004B88:
    cmplwi r0, 0x7
    bne lbl___pformatter_8067FD34_00004BA4
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004BD0
lbl___pformatter_8067FD34_00004BA4:
    cmplwi r0, 0x8
    bne lbl___pformatter_8067FD34_00004BC0
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
    b lbl___pformatter_8067FD34_00004BD0
lbl___pformatter_8067FD34_00004BC0:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r31, 0x0(r3)
lbl___pformatter_8067FD34_00004BD0:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl___pformatter_8067FD34_00004BE0
    clrlwi r31, r31, 16
lbl___pformatter_8067FD34_00004BE0:
    cmplwi r0, 0x1
    bne lbl___pformatter_8067FD34_00004BEC
    clrlwi r31, r31, 24
lbl___pformatter_8067FD34_00004BEC:
    cmplwi r0, 0x4
    beq lbl___pformatter_8067FD34_00004BFC
    cmplwi r0, 0x6
    bne lbl___pformatter_8067FD34_00004C40
lbl___pformatter_8067FD34_00004BFC:
    lwz r9, 0x70(r1)
    mr r4, r29
    lwz r8, 0x74(r1)
    mr r3, r30
    lwz r7, 0x78(r1)
    addi r5, r1, 0x280
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x40
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r0, 0x4c(r1)
    bl longlong2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
    b lbl___pformatter_8067FD34_00004C7C
lbl___pformatter_8067FD34_00004C40:
    lwz r8, 0x70(r1)
    mr r3, r31
    lwz r7, 0x74(r1)
    addi r4, r1, 0x280
    lwz r6, 0x78(r1)
    addi r5, r1, 0x30
    lwz r0, 0x7c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r0, 0x3c(r1)
    bl long2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
lbl___pformatter_8067FD34_00004C7C:
    subf r19, r18, r21
    b lbl___pformatter_8067FD34_00004FB4
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl___pformatter_8067FD34_00004CA4
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl___pformatter_8067FD34_00004CB4
lbl___pformatter_8067FD34_00004CA4:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl___pformatter_8067FD34_00004CB4:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x20
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl float2str
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
    subf r19, r3, r21
    b lbl___pformatter_8067FD34_00004FB4
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl___pformatter_8067FD34_00004D14
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl___pformatter_8067FD34_00004D24
lbl___pformatter_8067FD34_00004D14:
    mr r3, r27
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl___pformatter_8067FD34_00004D24:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x280
    lwz r6, 0x74(r1)
    addi r4, r1, 0x10
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl double2hex
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl___pformatter_8067FD34_00004F70
    subf r19, r3, r21
    b lbl___pformatter_8067FD34_00004FB4
    lbz r0, 0x74(r1)
    cmplwi r0, 0x5
    bne lbl___pformatter_8067FD34_00004DD0
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r4, 0x0(r3)
    beq lbl___pformatter_8067FD34_00004DA8
    cmpwi r4, 0x0
    bne lbl___pformatter_8067FD34_00004DA8
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004DA8:
    cmpwi r4, 0x0
    bne lbl___pformatter_8067FD34_00004DB4
    addi r4, r13, -0x6ad8
lbl___pformatter_8067FD34_00004DB4:
    addi r3, r1, 0x80
    li r5, 0x200
    bl wcstombs
    cmpwi r3, 0x0
    blt lbl___pformatter_8067FD34_00004F70
    addi r18, r1, 0x80
    b lbl___pformatter_8067FD34_00004DE0
lbl___pformatter_8067FD34_00004DD0:
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    lwz r18, 0x0(r3)
lbl___pformatter_8067FD34_00004DE0:
    cmpwi r28, 0x0
    beq lbl___pformatter_8067FD34_00004E08
    cmpwi r18, 0x0
    bne lbl___pformatter_8067FD34_00004E08
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004E08:
    cmpwi r18, 0x0
    bne lbl___pformatter_8067FD34_00004E14
    addi r18, r22, 0x24
lbl___pformatter_8067FD34_00004E14:
    lbz r0, 0x73(r1)
    cmpwi r0, 0x0
    beq lbl___pformatter_8067FD34_00004E48
    lbz r0, 0x72(r1)
    lbz r19, 0x0(r18)
    addi r18, r18, 0x1
    cmpwi r0, 0x0
    beq lbl___pformatter_8067FD34_00004FB4
    lwz r0, 0x7c(r1)
    cmpw r19, r0
    ble lbl___pformatter_8067FD34_00004FB4
    mr r19, r0
    b lbl___pformatter_8067FD34_00004FB4
lbl___pformatter_8067FD34_00004E48:
    lbz r0, 0x72(r1)
    cmpwi r0, 0x0
    beq lbl___pformatter_8067FD34_00004E78
    lwz r19, 0x7c(r1)
    mr r3, r18
    li r4, 0x0
    mr r5, r19
    bl memchr
    cmpwi r3, 0x0
    beq lbl___pformatter_8067FD34_00004FB4
    subf r19, r18, r3
    b lbl___pformatter_8067FD34_00004FB4
lbl___pformatter_8067FD34_00004E78:
    mr r3, r18
    bl strlen
    mr r19, r3
    b lbl___pformatter_8067FD34_00004FB4
    mr r3, r27
    li r4, 0x1
    bl __va_arg
    cmpwi r28, 0x0
    lwz r3, 0x0(r3)
    beq lbl___pformatter_8067FD34_00004EB8
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004EB8:
    lbz r0, 0x74(r1)
    cmpwi r0, 0x0
    beq lbl___pformatter_8067FD34_00004EF8
    cmpwi r0, 0x2
    beq lbl___pformatter_8067FD34_00004F00
    cmpwi r0, 0x3
    beq lbl___pformatter_8067FD34_00004F08
    cmpwi r0, 0x6
    beq lbl___pformatter_8067FD34_00004F10
    cmpwi r0, 0x7
    beq lbl___pformatter_8067FD34_00004F20
    cmpwi r0, 0x8
    beq lbl___pformatter_8067FD34_00004F28
    cmpwi r0, 0x4
    beq lbl___pformatter_8067FD34_00004F30
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004EF8:
    stw r17, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F00:
    sth r17, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F08:
    stw r17, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F10:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F20:
    stw r17, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F28:
    stw r17, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
lbl___pformatter_8067FD34_00004F30:
    stw r17, 0x4(r3)
    srawi r0, r17, 31
    stw r0, 0x0(r3)
    b lbl___pformatter_8067FD34_00005150
    mr r3, r27
    addi r18, r1, 0x80
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    li r19, 0x1
    stb r0, 0x80(r1)
    b lbl___pformatter_8067FD34_00004FB4
    stb r23, 0x80(r1)
    addi r18, r1, 0x80
    li r19, 0x1
    b lbl___pformatter_8067FD34_00004FB4
lbl___pformatter_8067FD34_00004F70:
    mr r3, r16
    bl strlen
    cmpwi r3, 0x0
    mr r5, r3
    add r17, r17, r3
    beq lbl___pformatter_8067FD34_00004FAC
    mr r12, r25
    mr r3, r26
    mr r4, r16
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_00004FAC
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004FAC:
    mr r3, r17
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00004FB4:
    lbz r0, 0x70(r1)
    mr r16, r19
    cmpwi r0, 0x0
    beq lbl___pformatter_8067FD34_000050D0
    cmplwi r0, 0x2
    li r3, 0x20
    bne lbl___pformatter_8067FD34_00004FD4
    li r3, 0x30
lbl___pformatter_8067FD34_00004FD4:
    stb r3, 0x9(r1)
    lbz r0, 0x0(r18)
    extsb r0, r0
    cmpwi r0, 0x2b
    beq lbl___pformatter_8067FD34_00004FF8
    cmpwi r0, 0x2d
    beq lbl___pformatter_8067FD34_00004FF8
    cmpwi r0, 0x20
    bne lbl___pformatter_8067FD34_00005034
lbl___pformatter_8067FD34_00004FF8:
    extsb r0, r3
    cmpwi r0, 0x30
    bne lbl___pformatter_8067FD34_00005034
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_0000502C
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_0000502C:
    addi r18, r18, 0x1
    subi r19, r19, 0x1
lbl___pformatter_8067FD34_00005034:
    lbz r0, 0x70(r1)
    cmplwi r0, 0x2
    bne lbl___pformatter_8067FD34_000050C4
    lbz r0, 0x75(r1)
    cmplwi r0, 0x61
    beq lbl___pformatter_8067FD34_00005054
    cmplwi r0, 0x41
    bne lbl___pformatter_8067FD34_000050C4
lbl___pformatter_8067FD34_00005054:
    cmpwi r19, 0x2
    bge lbl___pformatter_8067FD34_00005064
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00005064:
    mr r12, r25
    mr r3, r26
    mr r4, r18
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_0000508C
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_0000508C:
    subi r19, r19, 0x2
    addi r18, r18, 0x2
    b lbl___pformatter_8067FD34_000050C4
lbl___pformatter_8067FD34_00005098:
    mr r12, r25
    mr r3, r26
    addi r4, r1, 0x9
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_000050C0
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_000050C0:
    addi r16, r16, 0x1
lbl___pformatter_8067FD34_000050C4:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl___pformatter_8067FD34_00005098
lbl___pformatter_8067FD34_000050D0:
    cmpwi r19, 0x0
    beq lbl___pformatter_8067FD34_00005100
    mr r12, r25
    mr r3, r26
    mr r4, r18
    mr r5, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_00005100
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_00005100:
    lbz r0, 0x70(r1)
    cmpwi r0, 0x0
    bne lbl___pformatter_8067FD34_0000514C
    b lbl___pformatter_8067FD34_00005140
lbl___pformatter_8067FD34_00005110:
    mr r12, r25
    mr r3, r26
    stb r24, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl___pformatter_8067FD34_0000513C
    li r3, -0x1
    b lbl___pformatter_8067FD34_00005160
lbl___pformatter_8067FD34_0000513C:
    addi r16, r16, 0x1
lbl___pformatter_8067FD34_00005140:
    lwz r0, 0x78(r1)
    cmpw r16, r0
    blt lbl___pformatter_8067FD34_00005110
lbl___pformatter_8067FD34_0000514C:
    add r17, r17, r16
lbl___pformatter_8067FD34_00005150:
    lbz r0, 0x0(r15)
    extsb. r0, r0
    bne lbl___pformatter_8067FD34_00004910
lbl___pformatter_8067FD34_0000515C:
    mr r3, r17
lbl___pformatter_8067FD34_00005160:
    lmw r15, 0x28c(r1)
    lwz r0, 0x2d4(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void __FileWrite(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r4
    li r4, 0x1
    mr r6, r30
    bl __fwrite
    cmplw r31, r3
    bne lbl___FileWrite_000051AC
    b lbl___FileWrite_000051B0
lbl___FileWrite_000051AC:
    li r30, 0x0
lbl___FileWrite_000051B0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void __StringWrite(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x8(r3)
    lwz r7, 0x4(r3)
    add r0, r6, r5
    cmplw r0, r7
    subf r31, r6, r7
    bgt lbl___StringWrite_00005200
    mr r31, r5
lbl___StringWrite_00005200:
    lwz r0, 0x0(r3)
    mr r5, r31
    add r3, r0, r6
    bl memcpy
    lwz r0, 0x8(r30)
    li r3, 0x1
    add r0, r0, r31
    stw r0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806806A4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r3
    bne cr1, lbl_fn_806806A4_00005274
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806806A4_00005274:
    lis r31, __files@ha
    stw r4, 0xc(r1)
    addi r31, r31, __files@l
    li r4, -0x1
    stw r3, 0x8(r1)
    addi r3, r31, 0x50
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl fwide
    cmpwi r3, 0x0
    blt lbl_fn_806806A4_000052B8
    li r3, -0x1
    b lbl_fn_806806A4_000052EC
lbl_fn_806806A4_000052B8:
    addi r4, r1, 0x88
    addi r0, r1, 0x8
    lis r5, 0x100
    lis r3, __FileWrite@ha
    stw r5, 0x68(r1)
    addi r6, r1, 0x68
    mr r5, r30
    addi r3, r3, __FileWrite@l
    stw r4, 0x6c(r1)
    addi r4, r31, 0x50
    li r7, 0x0
    stw r0, 0x70(r1)
    bl __pformatter_8067FD34
lbl_fn_806806A4_000052EC:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80680770(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    mr r31, r4
    stw r30, 0x78(r1)
    mr r30, r3
    bne cr1, lbl_fn_80680770_00005344
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_80680770_00005344:
    stw r3, 0x8(r1)
    mr r3, r30
    stw r4, 0xc(r1)
    li r4, -0x1
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    bl fwide
    cmpwi r3, 0x0
    blt lbl_fn_80680770_00005380
    li r3, -0x1
    b lbl_fn_80680770_000053B4
lbl_fn_80680770_00005380:
    addi r7, r1, 0x88
    addi r0, r1, 0x8
    lis r4, 0x200
    lis r3, __FileWrite@ha
    stw r4, 0x68(r1)
    addi r6, r1, 0x68
    mr r4, r30
    mr r5, r31
    stw r7, 0x6c(r1)
    addi r3, r3, __FileWrite@l
    li r7, 0x0
    stw r0, 0x70(r1)
    bl __pformatter_8067FD34
lbl_fn_80680770_000053B4:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void vprintf(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, __files@ha
    addi r31, r31, __files@l
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, -0x1
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x50
    bl fwide
    cmpwi r3, 0x0
    blt lbl_vprintf_00005410
    li r3, -0x1
    b lbl_vprintf_0000542C
lbl_vprintf_00005410:
    lis r3, __FileWrite@ha
    mr r5, r29
    mr r6, r30
    addi r4, r31, 0x50
    addi r3, r3, __FileWrite@l
    li r7, 0x0
    bl __pformatter_8067FD34
lbl_vprintf_0000542C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void vsnprintf(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, __StringWrite@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r3, 0x8(r1)
    addi r3, r7, __StringWrite@l
    li r7, 0x0
    stw r4, 0xc(r1)
    addi r4, r1, 0x8
    stw r31, 0x10(r1)
    bl __pformatter_8067FD34
    cmpwi r29, 0x0
    beq lbl_vsnprintf_000054B4
    cmplw r3, r30
    bge lbl_vsnprintf_000054A4
    stbx r31, r29, r3
    b lbl_vsnprintf_000054B4
lbl_vsnprintf_000054A4:
    cmpwi r30, 0x0
    beq lbl_vsnprintf_000054B4
    add r4, r29, r30
    stb r31, -0x1(r4)
lbl_vsnprintf_000054B4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8068093C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    mr r6, r5
    mr r5, r4
    stw r0, 0x34(r1)
    lis r7, __StringWrite@ha
    addi r4, r1, 0x8
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, -0x1
    stw r29, 0x24(r1)
    mr r29, r3
    stw r3, 0x8(r1)
    addi r3, r7, __StringWrite@l
    li r7, 0x0
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    bl __pformatter_8067FD34
    cmpwi r29, 0x0
    beq lbl_fn_8068093C_00005538
    cmplw r3, r30
    bge lbl_fn_8068093C_00005534
    stbx r31, r29, r3
    b lbl_fn_8068093C_00005538
lbl_fn_8068093C_00005534:
    stb r31, -0x2(r29)
lbl_fn_8068093C_00005538:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806809C0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_fn_806809C0_0000559C
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806809C0_0000559C:
    addi r12, r1, 0x98
    addi r0, r1, 0x8
    lis r30, 0x300
    stw r7, 0x18(r1)
    li r31, 0x0
    addi r7, r1, 0x74
    stw r6, 0x14(r1)
    mr r6, r7
    lis r11, __StringWrite@ha
    li r7, 0x0
    stw r5, 0x10(r1)
    stw r3, 0x8(r1)
    stw r3, 0x68(r1)
    addi r3, r11, __StringWrite@l
    stw r4, 0xc(r1)
    stw r4, 0x6c(r1)
    addi r4, r1, 0x68
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r30, 0x74(r1)
    stw r12, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r31, 0x70(r1)
    bl __pformatter_8067FD34
    cmpwi r28, 0x0
    beq lbl_fn_806809C0_00005628
    cmplw r3, r29
    bge lbl_fn_806809C0_00005618
    stbx r31, r28, r3
    b lbl_fn_806809C0_00005628
lbl_fn_806809C0_00005618:
    cmpwi r29, 0x0
    beq lbl_fn_806809C0_00005628
    add r4, r28, r29
    stb r31, -0x1(r4)
lbl_fn_806809C0_00005628:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void sprintf(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r27, 0x8c(r1)
    mr r27, r3
    bne cr1, lbl_sprintf_00005680
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_sprintf_00005680:
    addi r12, r1, 0xa8
    addi r0, r1, 0x8
    lis r29, 0x200
    stw r5, 0x10(r1)
    li r30, -0x1
    li r31, 0x0
    stw r7, 0x18(r1)
    addi r28, r1, 0x74
    lis r11, __StringWrite@ha
    mr r5, r4
    stw r4, 0xc(r1)
    addi r4, r1, 0x68
    li r7, 0x0
    stw r6, 0x14(r1)
    mr r6, r28
    stw r3, 0x8(r1)
    stw r3, 0x68(r1)
    addi r3, r11, __StringWrite@l
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r29, 0x74(r1)
    stw r12, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r30, 0x6c(r1)
    stw r31, 0x70(r1)
    bl __pformatter_8067FD34
    cmpwi r27, 0x0
    beq lbl_sprintf_00005708
    cmplw r3, r30
    bge lbl_sprintf_00005704
    stbx r31, r27, r3
    b lbl_sprintf_00005708
lbl_sprintf_00005704:
    stb r31, -0x2(r27)
lbl_sprintf_00005708:
    lmw r27, 0x8c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80680B88(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmplwi r4, 0x2
    stw r0, 0x44(r1)
    stmw r19, 0xc(r1)
    mr r27, r3
    mr r28, r5
    mr r29, r6
    blt lbl_fn_80680B88_00005878
    srwi r7, r4, 1
    slwi r0, r5, 1
    addi r31, r7, 0x1
    subi r6, r4, 0x1
    subi r7, r31, 0x1
    mr r30, r4
    mullw r4, r5, r7
    subf r25, r0, r5
    mullw r0, r5, r6
    add r23, r3, r4
    mullw r26, r31, r5
    add r22, r3, r0
lbl_fn_80680B88_00005770:
    cmplwi r31, 0x1
    ble lbl_fn_80680B88_00005788
    subf r26, r28, r26
    subf r23, r28, r23
    subi r31, r31, 0x1
    b lbl_fn_80680B88_000057C4
lbl_fn_80680B88_00005788:
    subi r3, r22, 0x1
    subi r4, r23, 0x1
    addi r5, r28, 0x1
    b lbl_fn_80680B88_000057AC
lbl_fn_80680B88_00005798:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stbu r0, 0x1(r4)
    extsb r6, r6
    stbu r6, 0x1(r3)
lbl_fn_80680B88_000057AC:
    subic. r5, r5, 0x1
    bne lbl_fn_80680B88_00005798
    subi r30, r30, 0x1
    cmplwi r30, 0x1
    beq lbl_fn_80680B88_00005878
    subf r22, r28, r22
lbl_fn_80680B88_000057C4:
    add r0, r26, r25
    mr r24, r31
    add r20, r27, r0
    b lbl_fn_80680B88_00005868
lbl_fn_80680B88_000057D4:
    slwi r24, r24, 1
    mr r21, r20
    subi r0, r24, 0x1
    mullw r0, r28, r0
    cmplw r24, r30
    add r20, r27, r0
    bge lbl_fn_80680B88_00005818
    add r19, r20, r28
    mr r12, r29
    mr r3, r20
    mr r4, r19
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_80680B88_00005818
    mr r20, r19
    addi r24, r24, 0x1
lbl_fn_80680B88_00005818:
    mr r12, r29
    mr r3, r21
    mr r4, r20
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_80680B88_00005770
    subi r3, r20, 0x1
    subi r4, r21, 0x1
    addi r5, r28, 0x1
    b lbl_fn_80680B88_00005860
lbl_fn_80680B88_00005844:
    lbz r6, 0x1(r4)
    lbz r0, 0x1(r3)
    stb r0, 0x1(r4)
    extsb r6, r6
    addi r4, r4, 0x1
    stb r6, 0x1(r3)
    addi r3, r3, 0x1
lbl_fn_80680B88_00005860:
    subic. r5, r5, 0x1
    bne lbl_fn_80680B88_00005844
lbl_fn_80680B88_00005868:
    slwi r0, r24, 1
    cmplw r0, r30
    ble lbl_fn_80680B88_000057D4
    b lbl_fn_80680B88_00005770
lbl_fn_80680B88_00005878:
    lmw r19, 0xc(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80680CF8(void)
{
    nofralloc
    lis r3, 0x41c6
    lwz r4, lbl_8087EBF0
    addi r0, r3, 0x4e6d
    mullw r3, r4, r0
    addi r0, r3, 0x3039
    stw r0, lbl_8087EBF0
    extrwi r3, r0, 15, 1
    blr
}

asm void fn_80680D18(void)
{
    nofralloc
    stw r3, lbl_8087EBF0
    blr
}

asm void fn_80680D20(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lis r6, lbl_80765868@ha
    lwzu r0, lbl_80765868@l(r6)
    stw r31, 0x3c(r1)
    lbzu r5, 0x1(r3)
    stw r30, 0x38(r1)
    extsb r5, r5
    lwz r30, 0x4(r6)
    lwz r31, 0x8(r6)
    cmpwi r5, 0x25
    lwz r12, 0xc(r6)
    lwz r11, 0x10(r6)
    lwz r10, 0x14(r6)
    lwz r9, 0x18(r6)
    lwz r8, 0x1c(r6)
    lwz r7, 0x20(r6)
    lwz r6, 0x24(r6)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    stw r31, 0x10(r1)
    stw r12, 0x14(r1)
    stw r11, 0x18(r1)
    stw r10, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r8, 0x24(r1)
    stw r7, 0x28(r1)
    stw r6, 0x2c(r1)
    bne lbl_fn_80680D20_0000595C
    stb r5, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r30, 0x4(r4)
    stw r31, 0x8(r4)
    stw r12, 0xc(r4)
    stw r11, 0x10(r4)
    stw r10, 0x14(r4)
    stw r9, 0x18(r4)
    stw r8, 0x1c(r4)
    stw r7, 0x20(r4)
    stw r6, 0x24(r4)
    b lbl_fn_80680D20_00005F38
lbl_fn_80680D20_0000595C:
    cmpwi r5, 0x2a
    bne lbl_fn_80680D20_00005974
    lbzu r5, 0x1(r3)
    li r0, 0x1
    stb r0, 0x8(r1)
    extsb r5, r5
lbl_fn_80680D20_00005974:
    cmplwi r5, 0xff
    li r0, 0x1
    bgt lbl_fn_80680D20_00005984
    li r0, 0x0
lbl_fn_80680D20_00005984:
    cmpwi r0, 0x0
    beq lbl_fn_80680D20_00005994
    li r0, 0x0
    b lbl_fn_80680D20_000059B0
lbl_fn_80680D20_00005994:
    lis r6, lbl_807BB380@ha
    slwi r0, r5, 1
    addi r6, r6, lbl_807BB380@l
    lwz r6, 0x38(r6)
    lwz r6, 0x8(r6)
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80680D20_000059B0:
    cmpwi r0, 0x0
    beq lbl_fn_80680D20_00005A90
    lis r6, lbl_807BB380@ha
    li r0, 0x0
    addi r6, r6, lbl_807BB380@l
    stw r0, 0xc(r1)
    lwz r7, 0x38(r6)
lbl_fn_80680D20_000059CC:
    lwz r0, 0xc(r1)
    li r8, 0x1
    mulli r0, r0, 0xa
    add r6, r5, r0
    lbzu r5, 0x1(r3)
    subi r0, r6, 0x30
    stw r0, 0xc(r1)
    extsb r5, r5
    cmplwi r5, 0xff
    bgt lbl_fn_80680D20_000059F8
    li r8, 0x0
lbl_fn_80680D20_000059F8:
    cmpwi r8, 0x0
    beq lbl_fn_80680D20_00005A08
    li r0, 0x0
    b lbl_fn_80680D20_00005A18
lbl_fn_80680D20_00005A08:
    lwz r6, 0x8(r7)
    slwi r0, r5, 1
    lhzx r0, r6, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80680D20_00005A18:
    cmpwi r0, 0x0
    bne lbl_fn_80680D20_000059CC
    lwz r6, 0xc(r1)
    cmpwi r6, 0x0
    bne lbl_fn_80680D20_00005A88
    li r0, 0xff
    stb r0, 0xb(r1)
    addi r3, r3, 0x1
    lwz r0, 0x8(r1)
    stw r0, 0x0(r4)
    stw r6, 0x4(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
    b lbl_fn_80680D20_00005F38
lbl_fn_80680D20_00005A88:
    li r0, 0x1
    stb r0, 0x9(r1)
lbl_fn_80680D20_00005A90:
    cmpwi r5, 0x68
    li r7, 0x1
    beq lbl_fn_80680D20_00005AC8
    cmpwi r5, 0x6c
    beq lbl_fn_80680D20_00005AF4
    cmpwi r5, 0x4c
    beq lbl_fn_80680D20_00005B20
    cmpwi r5, 0x6a
    beq lbl_fn_80680D20_00005B2C
    cmpwi r5, 0x7a
    beq lbl_fn_80680D20_00005B38
    cmpwi r5, 0x74
    beq lbl_fn_80680D20_00005B44
    b lbl_fn_80680D20_00005B50
lbl_fn_80680D20_00005AC8:
    lbz r0, 0x1(r3)
    li r6, 0x2
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x68
    bne lbl_fn_80680D20_00005B54
    li r0, 0x1
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005AF4:
    lbz r0, 0x1(r3)
    li r6, 0x3
    stb r6, 0xa(r1)
    extsb r6, r0
    cmpwi r6, 0x6c
    bne lbl_fn_80680D20_00005B54
    li r0, 0x7
    stb r0, 0xa(r1)
    mr r5, r6
    addi r3, r3, 0x1
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005B20:
    li r0, 0x9
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005B2C:
    li r0, 0x4
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005B38:
    li r0, 0x5
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005B44:
    li r0, 0x6
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005B54
lbl_fn_80680D20_00005B50:
    li r7, 0x0
lbl_fn_80680D20_00005B54:
    cmpwi r7, 0x0
    beq lbl_fn_80680D20_00005B64
    lbzu r5, 0x1(r3)
    extsb r5, r5
lbl_fn_80680D20_00005B64:
    subi r0, r5, 0x41
    stb r5, 0xb(r1)
    cmplwi r0, 0x37
    bgt lbl_fn_80680D20_00005EDC
    lis r5, jumptable_807BB5F8@ha
    slwi r0, r0, 2
    addi r5, r5, jumptable_807BB5F8@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lbz r0, 0xa(r1)
    cmplwi r0, 0x9
    bne lbl_fn_80680D20_00005EE4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_fn_80680D20_00005EE4
    lbz r5, 0xa(r1)
    addi r0, r5, 0xfc
    clrlwi r0, r0, 24
    cmplwi r0, 0x3
    ble lbl_fn_80680D20_00005BD4
    addi r0, r5, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_80680D20_00005BD4
    cmplwi r5, 0x3
    beq lbl_fn_80680D20_00005BE0
    b lbl_fn_80680D20_00005EE4
lbl_fn_80680D20_00005BD4:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_fn_80680D20_00005EE4
lbl_fn_80680D20_00005BE0:
    li r0, 0x8
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005EE4
    li r5, 0x3
    li r0, 0x78
    stb r5, 0xa(r1)
    stb r0, 0xb(r1)
    b lbl_fn_80680D20_00005EE4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80680D20_00005C18
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005EE4
lbl_fn_80680D20_00005C18:
    cmpwi r0, 0x0
    beq lbl_fn_80680D20_00005EE4
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_fn_80680D20_00005EE4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80680D20_00005C44
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005C54
lbl_fn_80680D20_00005C44:
    cmpwi r0, 0x0
    beq lbl_fn_80680D20_00005C54
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_fn_80680D20_00005C54:
    li r6, 0xff
    li r5, 0xc1
    li r0, 0xfe
    stb r6, 0x10(r1)
    stb r6, 0x12(r1)
    stb r6, 0x13(r1)
    stb r6, 0x15(r1)
    stb r6, 0x16(r1)
    stb r6, 0x17(r1)
    stb r6, 0x18(r1)
    stb r6, 0x19(r1)
    stb r6, 0x1a(r1)
    stb r6, 0x1b(r1)
    stb r6, 0x1c(r1)
    stb r6, 0x1d(r1)
    stb r6, 0x1e(r1)
    stb r6, 0x1f(r1)
    stb r6, 0x20(r1)
    stb r6, 0x21(r1)
    stb r6, 0x22(r1)
    stb r6, 0x23(r1)
    stb r6, 0x24(r1)
    stb r6, 0x25(r1)
    stb r6, 0x26(r1)
    stb r6, 0x27(r1)
    stb r6, 0x28(r1)
    stb r6, 0x29(r1)
    stb r6, 0x2a(r1)
    stb r6, 0x2b(r1)
    stb r6, 0x2c(r1)
    stb r6, 0x2d(r1)
    stb r6, 0x2e(r1)
    stb r6, 0x2f(r1)
    stb r5, 0x11(r1)
    stb r0, 0x14(r1)
    b lbl_fn_80680D20_00005EE4
    lbz r0, 0xa(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80680D20_00005CFC
    li r0, 0xa
    stb r0, 0xa(r1)
    b lbl_fn_80680D20_00005D0C
lbl_fn_80680D20_00005CFC:
    cmpwi r0, 0x0
    beq lbl_fn_80680D20_00005D0C
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_fn_80680D20_00005D0C:
    lbzu r10, 0x1(r3)
    li r11, 0x0
    extsb r10, r10
    cmpwi r10, 0x5e
    bne lbl_fn_80680D20_00005D2C
    lbzu r10, 0x1(r3)
    li r11, 0x1
    extsb r10, r10
lbl_fn_80680D20_00005D2C:
    cmpwi r10, 0x5d
    bne lbl_fn_80680D20_00005D48
    lbz r0, 0x1b(r1)
    lbzu r10, 0x1(r3)
    ori r0, r0, 0x20
    stb r0, 0x1b(r1)
    extsb r10, r10
lbl_fn_80680D20_00005D48:
    addi r8, r1, 0x8
    li r5, 0x1
    b lbl_fn_80680D20_00005DDC
lbl_fn_80680D20_00005D54:
    extrwi r6, r10, 5, 24
    lbz r0, 0x1(r3)
    add r9, r8, r6
    clrlwi r6, r10, 29
    extsb r0, r0
    slw r6, r5, r6
    lbz r7, 0x8(r9)
    clrlwi r6, r6, 24
    cmpwi r0, 0x2d
    or r0, r7, r6
    stb r0, 0x8(r9)
    bne lbl_fn_80680D20_00005DD4
    lbz r9, 0x2(r3)
    extsb. r9, r9
    beq lbl_fn_80680D20_00005DD4
    cmpwi r9, 0x5d
    beq lbl_fn_80680D20_00005DD4
    b lbl_fn_80680D20_00005DBC
lbl_fn_80680D20_00005D9C:
    extrwi r6, r10, 5, 24
    clrlwi r0, r10, 29
    add r7, r8, r6
    slw r0, r5, r0
    lbz r6, 0x8(r7)
    clrlwi r0, r0, 24
    or r0, r6, r0
    stb r0, 0x8(r7)
lbl_fn_80680D20_00005DBC:
    addi r10, r10, 0x1
    cmpw r10, r9
    ble lbl_fn_80680D20_00005D9C
    lbzu r10, 0x3(r3)
    extsb r10, r10
    b lbl_fn_80680D20_00005DDC
lbl_fn_80680D20_00005DD4:
    lbzu r10, 0x1(r3)
    extsb r10, r10
lbl_fn_80680D20_00005DDC:
    cmpwi r10, 0x0
    beq lbl_fn_80680D20_00005DF0
    cmpwi r10, 0x5d
    beq lbl_fn_80680D20_00005DFC
    b lbl_fn_80680D20_00005D54
lbl_fn_80680D20_00005DF0:
    li r0, 0xff
    stb r0, 0xb(r1)
    b lbl_fn_80680D20_00005EE4
lbl_fn_80680D20_00005DFC:
    cmpwi r11, 0x0
    beq lbl_fn_80680D20_00005EE4
    li r0, 0x2
    addi r5, r1, 0x10
    mtctr r0
lbl_fn_80680D20_00005E10:
    lbz r0, 0x0(r5)
    nor r0, r0, r0
    stb r0, 0x0(r5)
    lbz r0, 0x1(r5)
    nor r0, r0, r0
    stb r0, 0x1(r5)
    lbz r0, 0x2(r5)
    nor r0, r0, r0
    stb r0, 0x2(r5)
    lbz r0, 0x3(r5)
    nor r0, r0, r0
    stb r0, 0x3(r5)
    lbz r0, 0x4(r5)
    nor r0, r0, r0
    stb r0, 0x4(r5)
    lbz r0, 0x5(r5)
    nor r0, r0, r0
    stb r0, 0x5(r5)
    lbz r0, 0x6(r5)
    nor r0, r0, r0
    stb r0, 0x6(r5)
    lbz r0, 0x7(r5)
    nor r0, r0, r0
    stb r0, 0x7(r5)
    lbz r0, 0x8(r5)
    nor r0, r0, r0
    stb r0, 0x8(r5)
    lbz r0, 0x9(r5)
    nor r0, r0, r0
    stb r0, 0x9(r5)
    lbz r0, 0xa(r5)
    nor r0, r0, r0
    stb r0, 0xa(r5)
    lbz r0, 0xb(r5)
    nor r0, r0, r0
    stb r0, 0xb(r5)
    lbz r0, 0xc(r5)
    nor r0, r0, r0
    stb r0, 0xc(r5)
    lbz r0, 0xd(r5)
    nor r0, r0, r0
    stb r0, 0xd(r5)
    lbz r0, 0xe(r5)
    nor r0, r0, r0
    stb r0, 0xe(r5)
    lbz r0, 0xf(r5)
    nor r0, r0, r0
    stb r0, 0xf(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_80680D20_00005E10
    b lbl_fn_80680D20_00005EE4
lbl_fn_80680D20_00005EDC:
    li r0, 0xff
    stb r0, 0xb(r1)
lbl_fn_80680D20_00005EE4:
    lwz r5, 0x8(r1)
    addi r3, r3, 0x1
    lwz r0, 0xc(r1)
    stw r0, 0x4(r4)
    stw r5, 0x0(r4)
    lwz r5, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0xc(r4)
    stw r5, 0x8(r4)
    lwz r5, 0x18(r1)
    lwz r0, 0x1c(r1)
    stw r0, 0x14(r4)
    stw r5, 0x10(r4)
    lwz r5, 0x20(r1)
    lwz r0, 0x24(r1)
    stw r0, 0x1c(r4)
    stw r5, 0x18(r4)
    lwz r5, 0x28(r1)
    lwz r0, 0x2c(r1)
    stw r0, 0x24(r4)
    stw r5, 0x20(r4)
lbl_fn_80680D20_00005F38:
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    addi r1, r1, 0x40
    blr
}

asm void fn_806813B4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_15
    lis r8, lbl_807BB380@ha
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    mr r26, r3
    mr r27, r4
    stw r6, 0x8(r1)
    mr r17, r5
    mr r28, r7
    addi r25, r1, 0x20
    stw r0, 0x58(r1)
    addi r23, r8, lbl_807BB380@l
    li r29, 0x0
    li r21, 0x0
    li r20, 0x0
    li r19, 0x0
    li r24, 0x1
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00005FA4:
    cmplwi r22, 0xff
    li r0, 0x1
    bgt lbl_fn_806813B4_00005FB4
    li r0, 0x0
lbl_fn_806813B4_00005FB4:
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_00005FC4
    li r0, 0x0
    b lbl_fn_806813B4_00005FD8
lbl_fn_806813B4_00005FC4:
    lwz r3, 0x38(r23)
    slwi r0, r22, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806813B4_00005FD8:
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_000060B0
    lwz r4, 0x38(r23)
lbl_fn_806813B4_00005FE4:
    lbzu r0, 0x1(r17)
    li r3, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_806813B4_00005FFC
    li r3, 0x0
lbl_fn_806813B4_00005FFC:
    cmpwi r3, 0x0
    beq lbl_fn_806813B4_0000600C
    li r0, 0x0
    b lbl_fn_806813B4_0000601C
lbl_fn_806813B4_0000600C:
    lwz r3, 0x8(r4)
    slwi r0, r0, 1
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806813B4_0000601C:
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_00005FE4
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_00006B88
    b lbl_fn_806813B4_00006034
lbl_fn_806813B4_00006030:
    addi r21, r21, 0x1
lbl_fn_806813B4_00006034:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r0, r3
    stb r3, 0xc(r1)
    cmplwi r0, 0xff
    li r4, 0x1
    bgt lbl_fn_806813B4_00006064
    li r4, 0x0
lbl_fn_806813B4_00006064:
    cmpwi r4, 0x0
    beq lbl_fn_806813B4_00006074
    li r0, 0x0
    b lbl_fn_806813B4_00006088
lbl_fn_806813B4_00006074:
    lwz r4, 0x38(r23)
    slwi r0, r0, 1
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806813B4_00006088:
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_00006030
    clrlwi r4, r3, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_000060B0:
    cmpwi r22, 0x25
    beq lbl_fn_806813B4_00006128
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_00006128
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r4, r3
    clrlwi r0, r22, 24
    cmpw r0, r4
    stb r3, 0xc(r1)
    beq lbl_fn_806813B4_0000611C
    clrlwi r4, r3, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    li r29, 0x1
    addi r17, r17, 0x1
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_0000611C:
    addi r21, r21, 0x1
    addi r17, r17, 0x1
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006128:
    mr r3, r17
    addi r4, r1, 0x20
    bl fn_80680D20
    lbz r0, 0x20(r1)
    mr r17, r3
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_00006164
    lbz r0, 0x23(r1)
    cmplwi r0, 0x25
    beq lbl_fn_806813B4_00006164
    lwz r3, 0x8(r1)
    li r4, 0x1
    bl __va_arg
    lwz r22, 0x0(r3)
    b lbl_fn_806813B4_00006168
lbl_fn_806813B4_00006164:
    li r22, 0x0
lbl_fn_806813B4_00006168:
    lbz r0, 0x23(r1)
    cmplwi r0, 0x6e
    beq lbl_fn_806813B4_000061A8
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_000061A8
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_806813B4_000061A8
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    li r29, 0x1
lbl_fn_806813B4_000061A8:
    lbz r3, 0x23(r1)
    subi r0, r3, 0x25
    cmplwi r0, 0x53
    bgt lbl_fn_806813B4_00006B94
    lis r3, jumptable_807BB718@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BB718@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0xa
    b lbl_fn_806813B4_000061DC
    li r3, 0x0
lbl_fn_806813B4_000061DC:
    cmpwi r29, 0x0
    beq lbl_fn_806813B4_000061FC
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    li r16, 0x0
    stw r0, 0x58(r1)
    b lbl_fn_806813B4_000062F0
lbl_fn_806813B4_000061FC:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_fn_806813B4_00006210
    cmplwi r0, 0x4
    bne lbl_fn_806813B4_00006238
lbl_fn_806813B4_00006210:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl fn_80683FC4
    stw r4, 0x54(r1)
    stw r3, 0x50(r1)
    b lbl_fn_806813B4_00006258
lbl_fn_806813B4_00006238:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl fn_80683BB0
    mr r15, r3
lbl_fn_806813B4_00006258:
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    bne lbl_fn_806813B4_00006288
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    li r0, 0x0
    stw r0, 0x5c(r1)
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x58(r1)
    li r16, 0x0
    b lbl_fn_806813B4_000062F0
lbl_fn_806813B4_00006288:
    lbz r0, 0x22(r1)
    add r21, r21, r3
    cmplwi r0, 0x7
    beq lbl_fn_806813B4_000062A0
    cmplwi r0, 0x4
    bne lbl_fn_806813B4_000062DC
lbl_fn_806813B4_000062A0:
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_000062C8
    lwz r0, 0x54(r1)
    subfic r0, r0, 0x0
    stw r0, 0x5c(r1)
    lwz r0, 0x50(r1)
    subfze r0, r0
    stw r0, 0x58(r1)
    b lbl_fn_806813B4_000062F0
lbl_fn_806813B4_000062C8:
    lwz r0, 0x54(r1)
    stw r0, 0x5c(r1)
    lwz r0, 0x50(r1)
    stw r0, 0x58(r1)
    b lbl_fn_806813B4_000062F0
lbl_fn_806813B4_000062DC:
    lwz r0, 0x14(r1)
    mr r16, r15
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_000062F0
    neg r16, r15
lbl_fn_806813B4_000062F0:
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_0000637C
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bgt lbl_fn_806813B4_00006370
    lis r3, jumptable_807BB6F8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BB6F8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    stb r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    sth r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    stw r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x58(r1)
    stw r0, 0x0(r22)
    b lbl_fn_806813B4_00006370
    stw r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    stw r16, 0x0(r22)
    b lbl_fn_806813B4_00006370
    lwz r0, 0x5c(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x58(r1)
    stw r0, 0x0(r22)
lbl_fn_806813B4_00006370:
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_0000637C
    addi r20, r20, 0x1
lbl_fn_806813B4_0000637C:
    addi r19, r19, 0x1
    b lbl_fn_806813B4_00006B88
    li r3, 0x8
    b lbl_fn_806813B4_00006398
    li r3, 0xa
    b lbl_fn_806813B4_00006398
    li r3, 0x10
lbl_fn_806813B4_00006398:
    cmpwi r29, 0x0
    beq lbl_fn_806813B4_000063B8
    li r0, 0x0
    stw r0, 0x54(r1)
    li r0, 0x0
    li r15, 0x0
    stw r0, 0x50(r1)
    b lbl_fn_806813B4_00006488
lbl_fn_806813B4_000063B8:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_fn_806813B4_000063CC
    cmplwi r0, 0x4
    bne lbl_fn_806813B4_000063F4
lbl_fn_806813B4_000063CC:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl fn_80683FC4
    stw r4, 0x54(r1)
    stw r3, 0x50(r1)
    b lbl_fn_806813B4_00006414
lbl_fn_806813B4_000063F4:
    lwz r4, 0x24(r1)
    mr r5, r26
    mr r6, r27
    addi r7, r1, 0x18
    addi r8, r1, 0x14
    addi r9, r1, 0x10
    bl fn_80683BB0
    mr r15, r3
lbl_fn_806813B4_00006414:
    lwz r3, 0x18(r1)
    cmpwi r3, 0x0
    bne lbl_fn_806813B4_00006444
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    li r0, 0x0
    stw r0, 0x54(r1)
    li r0, 0x0
    li r29, 0x1
    stw r0, 0x50(r1)
    li r15, 0x0
    b lbl_fn_806813B4_00006488
lbl_fn_806813B4_00006444:
    lwz r0, 0x14(r1)
    add r21, r21, r3
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_00006488
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bne lbl_fn_806813B4_00006478
    lwz r0, 0x54(r1)
    subfic r0, r0, 0x0
    stw r0, 0x54(r1)
    lwz r0, 0x50(r1)
    subfze r0, r0
    stw r0, 0x50(r1)
lbl_fn_806813B4_00006478:
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    beq lbl_fn_806813B4_00006488
    neg r15, r15
lbl_fn_806813B4_00006488:
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_00006514
    lbz r0, 0x22(r1)
    cmplwi r0, 0x7
    bgt lbl_fn_806813B4_00006508
    lis r3, jumptable_807BB6D8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BB6D8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    stw r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    stb r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    sth r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    stw r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    lwz r0, 0x54(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x50(r1)
    stw r0, 0x0(r22)
    b lbl_fn_806813B4_00006508
    stw r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    stw r15, 0x0(r22)
    b lbl_fn_806813B4_00006508
    lwz r0, 0x54(r1)
    stw r0, 0x4(r22)
    lwz r0, 0x50(r1)
    stw r0, 0x0(r22)
lbl_fn_806813B4_00006508:
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_00006514
    addi r20, r20, 0x1
lbl_fn_806813B4_00006514:
    addi r19, r19, 0x1
    b lbl_fn_806813B4_00006B88
    cmpwi r29, 0x0
    beq lbl_fn_806813B4_00006530
    lis r3, lbl_8087EC00@ha
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_806813B4_00006570
lbl_fn_806813B4_00006530:
    lwz r3, 0x24(r1)
    mr r4, r26
    mr r5, r27
    addi r6, r1, 0x18
    addi r7, r1, 0x10
    bl fn_80682830
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_0000656C
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    lis r3, lbl_8087EC00@ha
    li r29, 0x1
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_806813B4_00006570
lbl_fn_806813B4_0000656C:
    add r21, r21, r0
lbl_fn_806813B4_00006570:
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_000065BC
    lbz r0, 0x22(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_00006598
    cmpwi r0, 0x8
    beq lbl_fn_806813B4_000065A4
    cmpwi r0, 0x9
    beq lbl_fn_806813B4_000065AC
    b lbl_fn_806813B4_000065B0
lbl_fn_806813B4_00006598:
    frsp f0, f1
    stfs f0, 0x0(r22)
    b lbl_fn_806813B4_000065B0
lbl_fn_806813B4_000065A4:
    stfd f1, 0x0(r22)
    b lbl_fn_806813B4_000065B0
lbl_fn_806813B4_000065AC:
    stfd f1, 0x0(r22)
lbl_fn_806813B4_000065B0:
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_000065BC
    addi r20, r20, 0x1
lbl_fn_806813B4_000065BC:
    addi r19, r19, 0x1
    b lbl_fn_806813B4_00006B88
    lbz r0, 0x21(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_000065D4
    stw r24, 0x24(r1)
lbl_fn_806813B4_000065D4:
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_00006704
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_000065F8
    lwz r3, 0x8(r1)
    li r31, 0x1
    li r4, 0x1
    bl __va_arg
    lwz r30, 0x0(r3)
lbl_fn_806813B4_000065F8:
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x18(r1)
    beq lbl_fn_806813B4_0000661C
    cmpwi r30, 0x0
    beq lbl_fn_806813B4_00006B88
    li r0, 0x0
    stb r0, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_0000661C:
    stw r22, 0x4c(r1)
    b lbl_fn_806813B4_00006660
lbl_fn_806813B4_00006624:
    lbz r0, 0x22(r1)
    stb r3, 0xc(r1)
    cmplwi r0, 0xa
    bne lbl_fn_806813B4_0000664C
    mr r3, r22
    addi r4, r1, 0xc
    li r5, 0x1
    bl fn_8067DF20
    addi r22, r22, 0x2
    b lbl_fn_806813B4_00006654
lbl_fn_806813B4_0000664C:
    stb r3, 0x0(r22)
    addi r22, r22, 0x1
lbl_fn_806813B4_00006654:
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_806813B4_00006660:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    stw r3, 0x24(r1)
    beq lbl_fn_806813B4_000066B4
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006690
    xor r0, r30, r0
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r31, r0, 31
    beq lbl_fn_806813B4_000066B4
lbl_fn_806813B4_00006690:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_fn_806813B4_00006624
lbl_fn_806813B4_000066B4:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_000066D4
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_000066F8
    cmpwi r31, 0x0
    bne lbl_fn_806813B4_000066F8
lbl_fn_806813B4_000066D4:
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    cmpwi r30, 0x0
    li r29, 0x1
    beq lbl_fn_806813B4_00006B88
    lwz r3, 0x4c(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_000066F8:
    add r21, r21, r0
    addi r20, r20, 0x1
    b lbl_fn_806813B4_00006768
lbl_fn_806813B4_00006704:
    li r0, 0x0
    stw r0, 0x18(r1)
    b lbl_fn_806813B4_00006720
lbl_fn_806813B4_00006710:
    lwz r4, 0x18(r1)
    stb r3, 0xc(r1)
    addi r0, r4, 0x1
    stw r0, 0x18(r1)
lbl_fn_806813B4_00006720:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x24(r1)
    beq lbl_fn_806813B4_00006758
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_fn_806813B4_00006710
lbl_fn_806813B4_00006758:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_00006B94
lbl_fn_806813B4_00006768:
    addi r19, r19, 0x1
    b lbl_fn_806813B4_00006B88
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_00006B88
    b lbl_fn_806813B4_00006780
lbl_fn_806813B4_0000677C:
    addi r21, r21, 0x1
lbl_fn_806813B4_00006780:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    extsb r0, r3
    stb r3, 0xc(r1)
    cmplwi r0, 0xff
    li r4, 0x1
    bgt lbl_fn_806813B4_000067B0
    li r4, 0x0
lbl_fn_806813B4_000067B0:
    cmpwi r4, 0x0
    beq lbl_fn_806813B4_000067C0
    li r0, 0x0
    b lbl_fn_806813B4_000067D4
lbl_fn_806813B4_000067C0:
    lwz r4, 0x38(r23)
    slwi r0, r0, 1
    lwz r4, 0x8(r4)
    lhzx r0, r4, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806813B4_000067D4:
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_0000677C
    clrlwi r0, r3, 24
    extsb r4, r0
    cmpwi r4, 0x25
    beq lbl_fn_806813B4_00006810
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    li r29, 0x1
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006810:
    addi r21, r21, 0x1
    b lbl_fn_806813B4_00006B88
    cmpwi r29, 0x0
    bne lbl_fn_806813B4_000068BC
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    stb r3, 0xc(r1)
    b lbl_fn_806813B4_00006860
lbl_fn_806813B4_00006840:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r21, r21, 0x1
    bctrl
    stb r3, 0xc(r1)
lbl_fn_806813B4_00006860:
    clrlwi r4, r3, 24
    li r3, 0x1
    extsb r0, r4
    cmplwi r0, 0xff
    bgt lbl_fn_806813B4_00006878
    li r3, 0x0
lbl_fn_806813B4_00006878:
    cmpwi r3, 0x0
    beq lbl_fn_806813B4_00006888
    li r0, 0x0
    b lbl_fn_806813B4_0000689C
lbl_fn_806813B4_00006888:
    lwz r3, 0x38(r23)
    slwi r0, r0, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806813B4_0000689C:
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_00006840
    mr r12, r26
    mr r3, r27
    extsb r4, r4
    li r5, 0x1
    mtctr r12
    bctrl
lbl_fn_806813B4_000068BC:
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_00006A50
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_000068E4
    lwz r3, 0x8(r1)
    li r31, 0x1
    li r4, 0x1
    bl __va_arg
    lwz r3, 0x0(r3)
    subi r30, r3, 0x1
lbl_fn_806813B4_000068E4:
    cmpwi r29, 0x0
    li r0, 0x0
    stw r0, 0x18(r1)
    beq lbl_fn_806813B4_00006908
    cmpwi r30, 0x0
    beq lbl_fn_806813B4_00006B88
    li r0, 0x0
    stb r0, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006908:
    stw r22, 0x48(r1)
    b lbl_fn_806813B4_0000696C
lbl_fn_806813B4_00006910:
    extrwi r0, r3, 5, 24
    clrlwi r5, r3, 29
    add r4, r25, r0
    stb r3, 0xc(r1)
    lbz r0, 0x8(r4)
    slw r4, r24, r5
    clrlwi r3, r3, 24
    and. r0, r4, r0
    beq lbl_fn_806813B4_000069C4
    lbz r0, 0x22(r1)
    cmplwi r0, 0xa
    bne lbl_fn_806813B4_00006958
    mr r3, r22
    addi r4, r1, 0xc
    li r5, 0x1
    bl fn_8067DF20
    addi r22, r22, 0x2
    b lbl_fn_806813B4_00006960
lbl_fn_806813B4_00006958:
    stb r3, 0x0(r22)
    addi r22, r22, 0x1
lbl_fn_806813B4_00006960:
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_806813B4_0000696C:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    stw r3, 0x24(r1)
    beq lbl_fn_806813B4_000069C4
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_000069A0
    subf r4, r0, r30
    orc r3, r30, r0
    srwi r0, r4, 1
    subf r0, r0, r3
    srwi. r31, r0, 31
    beq lbl_fn_806813B4_000069C4
lbl_fn_806813B4_000069A0:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_fn_806813B4_00006910
lbl_fn_806813B4_000069C4:
    lwz r3, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r3, 0x0
    beq lbl_fn_806813B4_000069E4
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006A24
    cmpwi r31, 0x0
    bne lbl_fn_806813B4_00006A24
lbl_fn_806813B4_000069E4:
    clrlwi r4, r18, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    cmpwi r28, 0x0
    beq lbl_fn_806813B4_00006B94
    cmpwi r30, 0x0
    li r29, 0x1
    beq lbl_fn_806813B4_00006B88
    lwz r3, 0x48(r1)
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006A24:
    lbz r0, 0x22(r1)
    add r21, r21, r3
    cmplwi r0, 0xa
    bne lbl_fn_806813B4_00006A40
    li r0, 0x0
    sth r0, 0x0(r22)
    b lbl_fn_806813B4_00006A48
lbl_fn_806813B4_00006A40:
    li r0, 0x0
    stb r0, 0x0(r22)
lbl_fn_806813B4_00006A48:
    addi r20, r20, 0x1
    b lbl_fn_806813B4_00006AF4
lbl_fn_806813B4_00006A50:
    li r0, 0x0
    stw r0, 0x18(r1)
    b lbl_fn_806813B4_00006A88
lbl_fn_806813B4_00006A5C:
    extrwi r0, r3, 5, 24
    clrlwi r5, r3, 29
    add r4, r25, r0
    stb r3, 0xc(r1)
    lbz r0, 0x8(r4)
    slw r3, r24, r5
    and. r0, r3, r0
    beq lbl_fn_806813B4_00006AC0
    lwz r3, 0x18(r1)
    addi r0, r3, 0x1
    stw r0, 0x18(r1)
lbl_fn_806813B4_00006A88:
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x24(r1)
    beq lbl_fn_806813B4_00006AC0
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    mr r18, r3
    bne lbl_fn_806813B4_00006A5C
lbl_fn_806813B4_00006AC0:
    lwz r0, 0x18(r1)
    stb r18, 0xc(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806813B4_00006AF0
    clrlwi r4, r18, 24
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006AF0:
    add r21, r21, r0
lbl_fn_806813B4_00006AF4:
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    blt lbl_fn_806813B4_00006B1C
    lbz r4, 0xc(r1)
    mr r12, r26
    mr r3, r27
    li r5, 0x1
    extsb r4, r4
    mtctr r12
    bctrl
lbl_fn_806813B4_00006B1C:
    addi r19, r19, 0x1
    b lbl_fn_806813B4_00006B88
    cmpwi r22, 0x0
    beq lbl_fn_806813B4_00006B88
    lbz r0, 0x22(r1)
    cmpwi r0, 0x0
    beq lbl_fn_806813B4_00006B5C
    cmpwi r0, 0x2
    beq lbl_fn_806813B4_00006B64
    cmpwi r0, 0x3
    beq lbl_fn_806813B4_00006B6C
    cmpwi r0, 0x1
    beq lbl_fn_806813B4_00006B74
    cmpwi r0, 0x7
    beq lbl_fn_806813B4_00006B7C
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006B5C:
    stw r21, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006B64:
    sth r21, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006B6C:
    stw r21, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006B74:
    stb r21, 0x0(r22)
    b lbl_fn_806813B4_00006B88
lbl_fn_806813B4_00006B7C:
    stw r21, 0x4(r22)
    srawi r0, r21, 31
    stw r0, 0x0(r22)
lbl_fn_806813B4_00006B88:
    lbz r0, 0x0(r17)
    extsb. r22, r0
    bne lbl_fn_806813B4_00005FA4
lbl_fn_806813B4_00006B94:
    mr r12, r26
    mr r3, r27
    li r4, 0x0
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_806813B4_00006BC4
    cmpwi r19, 0x0
    bne lbl_fn_806813B4_00006BC4
    li r3, -0x1
    b lbl_fn_806813B4_00006BC8
lbl_fn_806813B4_00006BC4:
    mr r3, r20
lbl_fn_806813B4_00006BC8:
    addi r11, r1, 0xb0
    bl _restgpr_15
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8068204C(void)
{
    nofralloc
    cmpwi r5, 0x0
    beq lbl_fn_8068204C_00006BFC
    cmpwi r5, 0x1
    beq lbl_fn_8068204C_00006C2C
    cmpwi r5, 0x2
    beq lbl_fn_8068204C_00006C58
    b lbl_fn_8068204C_00006C60
lbl_fn_8068204C_00006BFC:
    lwz r4, 0x0(r3)
    lbz r5, 0x0(r4)
    extsb. r0, r5
    bne lbl_fn_8068204C_00006C1C
    li r0, 0x1
    stw r0, 0x4(r3)
    li r3, -0x1
    blr
lbl_fn_8068204C_00006C1C:
    addi r0, r4, 0x1
    stw r0, 0x0(r3)
    mr r3, r5
    blr
lbl_fn_8068204C_00006C2C:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8068204C_00006C48
    lwz r5, 0x0(r3)
    subi r0, r5, 0x1
    stw r0, 0x0(r3)
    b lbl_fn_8068204C_00006C50
lbl_fn_8068204C_00006C48:
    li r0, 0x0
    stw r0, 0x4(r3)
lbl_fn_8068204C_00006C50:
    mr r3, r4
    blr
lbl_fn_8068204C_00006C58:
    lwz r3, 0x4(r3)
    blr
lbl_fn_8068204C_00006C60:
    li r3, 0x0
    blr
}

asm void fn_806820D4(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    bne cr1, lbl_fn_806820D4_00006C98
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806820D4_00006C98:
    cmpwi r3, 0x0
    addi r11, r1, 0x88
    addi r0, r1, 0x8
    lis r12, 0x200
    stw r3, 0x8(r1)
    stw r4, 0xc(r1)
    stw r5, 0x10(r1)
    stw r6, 0x14(r1)
    stw r7, 0x18(r1)
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r12, 0x70(r1)
    stw r11, 0x74(r1)
    stw r0, 0x78(r1)
    stw r3, 0x68(r1)
    beq lbl_fn_806820D4_00006D5C
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806820D4_00006D5C
    lis r5, lbl_807BB380@ha
    addi r5, r5, lbl_807BB380@l
    lwz r6, 0x38(r5)
    b lbl_fn_806820D4_00006D44
lbl_fn_806820D4_00006CF8:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_806820D4_00006D14
    li r5, 0x0
lbl_fn_806820D4_00006D14:
    cmpwi r5, 0x0
    beq lbl_fn_806820D4_00006D24
    li r0, 0x0
    b lbl_fn_806820D4_00006D34
lbl_fn_806820D4_00006D24:
    lwz r5, 0x8(r6)
    slwi r0, r0, 1
    lhzx r0, r5, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_806820D4_00006D34:
    cmpwi r0, 0x0
    bne lbl_fn_806820D4_00006D44
    li r0, 0x0
    b lbl_fn_806820D4_00006D54
lbl_fn_806820D4_00006D44:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    bne lbl_fn_806820D4_00006CF8
    li r0, 0x1
lbl_fn_806820D4_00006D54:
    cmpwi r0, 0x0
    beq lbl_fn_806820D4_00006D64
lbl_fn_806820D4_00006D5C:
    li r3, -0x1
    b lbl_fn_806820D4_00006D88
lbl_fn_806820D4_00006D64:
    li r0, 0x0
    lis r3, fn_8068204C@ha
    mr r5, r4
    stw r0, 0x6c(r1)
    addi r3, r3, fn_8068204C@l
    addi r4, r1, 0x68
    addi r6, r1, 0x70
    li r7, 0x0
    bl fn_806813B4
lbl_fn_806820D4_00006D88:
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80682204(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x6
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    ble lbl_fn_80682204_00006DC4
    li r3, -0x1
    b lbl_fn_80682204_00006E28
lbl_fn_80682204_00006DC4:
    lis r4, lbl_808327A0@ha
    slwi r5, r0, 2
    addi r4, r4, lbl_808327A0@l
    lwzx r31, r4, r5
    cmplwi r31, 0x1
    beq lbl_fn_80682204_00006DE4
    li r0, 0x0
    stwx r0, r4, r5
lbl_fn_80682204_00006DE4:
    cmplwi r31, 0x1
    beq lbl_fn_80682204_00006DFC
    cmpwi r31, 0x0
    bne lbl_fn_80682204_00006E04
    cmpwi r3, 0x1
    bne lbl_fn_80682204_00006E04
lbl_fn_80682204_00006DFC:
    li r3, 0x0
    b lbl_fn_80682204_00006E28
lbl_fn_80682204_00006E04:
    cmpwi r31, 0x0
    bne lbl_fn_80682204_00006E14
    li r3, 0x0
    bl exit
lbl_fn_80682204_00006E14:
    mr r12, r31
    mr r3, r30
    mtctr r12
    bctrl
    li r3, 0x0
lbl_fn_80682204_00006E28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void strcpy(void)
{
    nofralloc
    clrlwi r0, r3, 30
    clrlwi r5, r4, 30
    cmplw r0, r5
    mr r7, r3
    bne lbl_strcpy_00006EDC
    cmpwi r5, 0x0
    beq lbl_strcpy_00006E98
    lbz r0, 0x0(r4)
    stb r0, 0x0(r3)
    cmpwi r0, 0x0
    beqlr
    subfic r0, r5, 0x3
    mtctr r0
    cmpwi r0, 0x0
    beq lbl_strcpy_00006E90
lbl_strcpy_00006E7C:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r7)
    cmpwi r0, 0x0
    beqlr
    bdnz lbl_strcpy_00006E7C
lbl_strcpy_00006E90:
    addi r7, r7, 0x1
    addi r4, r4, 0x1
lbl_strcpy_00006E98:
    lwz r8, 0x0(r4)
    lis r5, lbl_80808080@ha
    addi r5, r5, lbl_80808080@l
    subis r6, r8, 0x101
    subi r6, r6, 0x101
    andc r6, r6, r8
    and. r0, r6, r5
    bne lbl_strcpy_00006EDC
    subi r7, r7, 0x4
lbl_strcpy_00006EBC:
    stwu r8, 0x4(r7)
    lwzu r8, 0x4(r4)
    subis r6, r8, 0x101
    subi r6, r6, 0x101
    andc r6, r6, r8
    and. r0, r6, r5
    beq lbl_strcpy_00006EBC
    addi r7, r7, 0x4
lbl_strcpy_00006EDC:
    lbz r0, 0x0(r4)
    stb r0, 0x0(r7)
    cmpwi r0, 0x0
    beqlr
lbl_strcpy_00006EEC:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_strcpy_00006EEC
    blr
}

asm void fn_8068236C(void)
{
    nofralloc
    subi r4, r4, 0x1
    subi r6, r3, 0x1
    addi r5, r5, 0x1
    b lbl_fn_8068236C_00006F38
lbl_fn_8068236C_00006F10:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_fn_8068236C_00006F38
    li r0, 0x0
    b lbl_fn_8068236C_00006F2C
lbl_fn_8068236C_00006F28:
    stbu r0, 0x1(r6)
lbl_fn_8068236C_00006F2C:
    subic. r5, r5, 0x1
    bne lbl_fn_8068236C_00006F28
    blr
lbl_fn_8068236C_00006F38:
    subic. r5, r5, 0x1
    bne lbl_fn_8068236C_00006F10
    blr
}

asm void fn_806823B0(void)
{
    nofralloc
    subi r4, r4, 0x1
    subi r5, r3, 0x1
lbl_fn_806823B0_00006F4C:
    lbzu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806823B0_00006F4C
    subi r5, r5, 0x1
lbl_fn_806823B0_00006F5C:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806823B0_00006F5C
    blr
}

asm void fn_806823DC(void)
{
    nofralloc
    subi r4, r4, 0x1
    subi r6, r3, 0x1
lbl_fn_806823DC_00006F78:
    lbzu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806823DC_00006F78
    subi r6, r6, 0x1
    addi r5, r5, 0x1
    b lbl_fn_806823DC_00006FA8
lbl_fn_806823DC_00006F90:
    lbzu r0, 0x1(r4)
    stbu r0, 0x1(r6)
    cmpwi r0, 0x0
    bne lbl_fn_806823DC_00006FA8
    subi r6, r6, 0x1
    b lbl_fn_806823DC_00006FB0
lbl_fn_806823DC_00006FA8:
    subic. r5, r5, 0x1
    bne lbl_fn_806823DC_00006F90
lbl_fn_806823DC_00006FB0:
    li r0, 0x0
    stb r0, 0x1(r6)
    blr
}

asm void fn_80682428(void)
{
    nofralloc
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    subf. r0, r0, r5
    beq lbl_fn_80682428_00006FD4
    mr r3, r0
    blr
lbl_fn_80682428_00006FD4:
    clrlwi r0, r4, 30
    clrlwi r6, r3, 30
    cmplw r0, r6
    bne lbl_fn_80682428_000070A0
    cmpwi r6, 0x0
    beq lbl_fn_80682428_00007040
    cmpwi r5, 0x0
    bne lbl_fn_80682428_00006FFC
    li r3, 0x0
    blr
lbl_fn_80682428_00006FFC:
    subfic r0, r6, 0x3
    mtctr r0
    cmpwi r0, 0x0
    beq lbl_fn_80682428_00007038
lbl_fn_80682428_0000700C:
    lbzu r5, 0x1(r3)
    lbzu r0, 0x1(r4)
    subf. r0, r0, r5
    beq lbl_fn_80682428_00007024
    mr r3, r0
    blr
lbl_fn_80682428_00007024:
    cmpwi r5, 0x0
    bne lbl_fn_80682428_00007034
    li r3, 0x0
    blr
lbl_fn_80682428_00007034:
    bdnz lbl_fn_80682428_0000700C
lbl_fn_80682428_00007038:
    addi r3, r3, 0x1
    addi r4, r4, 0x1
lbl_fn_80682428_00007040:
    lwz r7, 0x0(r3)
    lis r5, lbl_80808080@ha
    addi r6, r5, lbl_80808080@l
    lwz r8, 0x0(r4)
    subis r5, r7, 0x101
    subi r5, r5, 0x101
    andc r5, r5, r7
    and. r0, r5, r6
    bne lbl_fn_80682428_00007088
    b lbl_fn_80682428_00007080
lbl_fn_80682428_00007068:
    lwzu r7, 0x4(r3)
    lwzu r8, 0x4(r4)
    subis r5, r7, 0x101
    subi r0, r5, 0x101
    and. r0, r0, r6
    bne lbl_fn_80682428_00007088
lbl_fn_80682428_00007080:
    cmplw r7, r8
    beq lbl_fn_80682428_00007068
lbl_fn_80682428_00007088:
    lbz r5, 0x0(r3)
    lbz r0, 0x0(r4)
    subf. r0, r0, r5
    beq lbl_fn_80682428_000070A0
    mr r3, r0
    blr
lbl_fn_80682428_000070A0:
    cmpwi r5, 0x0
    bne lbl_fn_80682428_000070B0
    li r3, 0x0
    blr
lbl_fn_80682428_000070B0:
    lbzu r5, 0x1(r3)
    lbzu r0, 0x1(r4)
    subf. r0, r0, r5
    beq lbl_fn_80682428_000070C8
    mr r3, r0
    blr
lbl_fn_80682428_000070C8:
    cmpwi r5, 0x0
    bne lbl_fn_80682428_000070B0
    li r3, 0x0
    blr
}

asm void fn_80682544(void)
{
    nofralloc
    subi r3, r3, 0x1
    subi r4, r4, 0x1
    addi r6, r5, 0x1
    b lbl_fn_80682544_00007108
lbl_fn_80682544_000070E8:
    lbzu r0, 0x1(r3)
    lbzu r5, 0x1(r4)
    cmplw r0, r5
    beq lbl_fn_80682544_00007100
    subf r3, r5, r0
    blr
lbl_fn_80682544_00007100:
    cmpwi r0, 0x0
    beq lbl_fn_80682544_00007110
lbl_fn_80682544_00007108:
    subic. r6, r6, 0x1
    bne lbl_fn_80682544_000070E8
lbl_fn_80682544_00007110:
    li r3, 0x0
    blr
}

asm void strchr(void)
{
    nofralloc
    subi r3, r3, 0x1
    clrlwi r0, r4, 24
    b lbl_strchr_0000712C
lbl_strchr_00007124:
    cmplw r4, r0
    beqlr
lbl_strchr_0000712C:
    lbzu r4, 0x1(r3)
    cmpwi r4, 0x0
    bne lbl_strchr_00007124
    cmpwi r0, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_806825B4(void)
{
    nofralloc
    subi r5, r3, 0x1
    clrlwi r0, r4, 24
    li r3, 0x0
    b lbl_fn_806825B4_00007164
lbl_fn_806825B4_00007158:
    cmplw r4, r0
    bne lbl_fn_806825B4_00007164
    mr r3, r5
lbl_fn_806825B4_00007164:
    lbzu r4, 0x1(r5)
    cmpwi r4, 0x0
    bne lbl_fn_806825B4_00007158
    cmpwi r3, 0x0
    bnelr
    cmpwi r0, 0x0
    beq lbl_fn_806825B4_00007188
    li r3, 0x0
    blr
lbl_fn_806825B4_00007188:
    mr r3, r5
    blr
}

asm void fn_806825FC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    subi r8, r4, 0x1
    li r4, 0x1
    stw r0, 0x8(r1)
    addi r6, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    b lbl_fn_806825FC_000071E4
lbl_fn_806825FC_000071C8:
    extrwi r7, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r7
    clrlwi r0, r0, 24
    or r0, r5, r0
    stbx r0, r6, r7
lbl_fn_806825FC_000071E4:
    lbzu r0, 0x1(r8)
    cmpwi r0, 0x0
    bne lbl_fn_806825FC_000071C8
    subi r7, r3, 0x1
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_fn_806825FC_0000721C
lbl_fn_806825FC_00007200:
    extrwi r5, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_fn_806825FC_00007228
lbl_fn_806825FC_0000721C:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_fn_806825FC_00007200
lbl_fn_806825FC_00007228:
    subf r3, r3, r7
    addi r1, r1, 0x30
    blr
}

asm void fn_806826A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    beq lbl_fn_806826A0_00007268
    stw r3, lbl_8087EBFC
lbl_fn_806826A0_00007268:
    subi r7, r4, 0x1
    addi r5, r1, 0x8
    li r3, 0x1
    b lbl_fn_806826A0_00007294
lbl_fn_806826A0_00007278:
    extrwi r6, r0, 5, 24
    clrlwi r0, r0, 29
    slw r0, r3, r0
    lbzx r4, r5, r6
    clrlwi r0, r0, 24
    or r0, r4, r0
    stbx r0, r5, r6
lbl_fn_806826A0_00007294:
    lbzu r0, 0x1(r7)
    cmpwi r0, 0x0
    bne lbl_fn_806826A0_00007278
    lwz r4, lbl_8087EBFC
    addi r5, r1, 0x8
    li r3, 0x1
    subi r7, r4, 0x1
    b lbl_fn_806826A0_000072D0
lbl_fn_806826A0_000072B4:
    extrwi r4, r6, 5, 24
    clrlwi r0, r6, 29
    slw r0, r3, r0
    lbzx r4, r5, r4
    clrlwi r0, r0, 24
    and. r0, r4, r0
    beq lbl_fn_806826A0_000072DC
lbl_fn_806826A0_000072D0:
    lbzu r6, 0x1(r7)
    cmpwi r6, 0x0
    bne lbl_fn_806826A0_000072B4
lbl_fn_806826A0_000072DC:
    cmpwi r6, 0x0
    bne lbl_fn_806826A0_000072F4
    lwz r0, lbl_8087EBF8
    li r3, 0x0
    stw r0, lbl_8087EBFC
    b lbl_fn_806826A0_00007350
lbl_fn_806826A0_000072F4:
    mr r3, r7
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_fn_806826A0_00007320
lbl_fn_806826A0_00007304:
    extrwi r5, r8, 5, 24
    clrlwi r0, r8, 29
    slw r0, r4, r0
    lbzx r5, r6, r5
    clrlwi r0, r0, 24
    and. r0, r5, r0
    bne lbl_fn_806826A0_0000732C
lbl_fn_806826A0_00007320:
    lbzu r8, 0x1(r7)
    cmpwi r8, 0x0
    bne lbl_fn_806826A0_00007304
lbl_fn_806826A0_0000732C:
    cmpwi r8, 0x0
    bne lbl_fn_806826A0_00007340
    lwz r0, lbl_8087EBF8
    stw r0, lbl_8087EBFC
    b lbl_fn_806826A0_00007350
lbl_fn_806826A0_00007340:
    addi r4, r7, 0x1
    li r0, 0x0
    stw r4, lbl_8087EBFC
    stb r0, 0x0(r7)
lbl_fn_806826A0_00007350:
    addi r1, r1, 0x30
    blr
}

asm void fn_806827C4(void)
{
    nofralloc
    cmpwi r4, 0x0
    subi r5, r3, 0x1
    beqlr
    lbz r6, 0x0(r4)
    cmpwi r6, 0x0
    bne lbl_fn_806827C4_000073B0
    blr
    b lbl_fn_806827C4_000073B0
lbl_fn_806827C4_00007378:
    cmplw r0, r6
    bne lbl_fn_806827C4_000073B0
    subi r7, r5, 0x1
    subi r8, r4, 0x1
lbl_fn_806827C4_00007388:
    lbzu r0, 0x1(r7)
    lbzu r3, 0x1(r8)
    cmplw r0, r3
    bne lbl_fn_806827C4_000073A0
    cmpwi r0, 0x0
    bne lbl_fn_806827C4_00007388
lbl_fn_806827C4_000073A0:
    cmpwi r3, 0x0
    bne lbl_fn_806827C4_000073B0
    mr r3, r5
    blr
lbl_fn_806827C4_000073B0:
    lbzu r0, 0x1(r5)
    cmpwi r0, 0x0
    bne lbl_fn_806827C4_00007378
    li r3, 0x0
    blr
}

asm void fn_80682830(void)
{
    nofralloc
    stwu r1, -0xf0(r1)
    mflr r0
    stw r0, 0xf4(r1)
    addi r11, r1, 0xf0
    bl _savegpr_14
    lis r8, lbl_807BB1D0@ha
    li r31, 0x0
    stw r31, 0x68(r1)
    mr r17, r4
    lwz r8, lbl_807BB1D0@l(r8)
    mr r18, r5
    stw r31, 0x6c(r1)
    li r0, 0x0
    mr r12, r17
    mr r19, r7
    stw r3, 0x8(r1)
    mr r3, r18
    li r16, 0x1
    li r29, 0x0
    stw r0, 0x9c(r1)
    li r0, 0x0
    li r14, 0x0
    li r28, 0x0
    stw r0, 0x98(r1)
    li r0, 0x0
    li r27, 0x0
    li r24, 0x0
    stw r31, 0x70(r1)
    li r22, 0x0
    li r30, 0x1
    li r4, 0x0
    stw r31, 0x74(r1)
    li r5, 0x0
    stw r31, 0x78(r1)
    stw r31, 0x7c(r1)
    stw r31, 0x80(r1)
    stw r31, 0x84(r1)
    stw r31, 0x88(r1)
    stw r31, 0x8c(r1)
    sth r31, 0x90(r1)
    lbz r26, 0x0(r8)
    stw r6, 0xc(r1)
    stw r0, 0x94(r1)
    stw r31, 0x0(r7)
    mtctr r12
    bctrl
    lis r8, lbl_80765890@ha
    lwzu r7, lbl_80765890@l(r8)
    lwz r5, lbl_80888AC0
    mr r4, r3
    lwz r6, 0x4(r8)
    lis r15, lbl_807BB380@ha
    lbz r3, 0x8(r8)
    addi r15, r15, lbl_807BB380@l
    lbz r0, lbl_80888AC4
    stw r7, 0x30(r1)
    stw r6, 0x34(r1)
    stb r3, 0x38(r1)
    stw r5, 0x10(r1)
    stb r0, 0x14(r1)
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000074B8:
    cmpwi r16, 0x80
    beq lbl_fn_80682830_00007C8C
    bge lbl_fn_80682830_0000751C
    cmpwi r16, 0x8
    beq lbl_fn_80682830_00007A7C
    bge lbl_fn_80682830_000074F8
    cmpwi r16, 0x3
    beq lbl_fn_80682830_0000836C
    bge lbl_fn_80682830_000074EC
    cmpwi r16, 0x1
    beq lbl_fn_80682830_0000756C
    bge lbl_fn_80682830_0000795C
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000074EC:
    cmpwi r16, 0x5
    bge lbl_fn_80682830_0000836C
    b lbl_fn_80682830_00007A48
lbl_fn_80682830_000074F8:
    cmpwi r16, 0x20
    beq lbl_fn_80682830_00007B88
    bge lbl_fn_80682830_00007510
    cmpwi r16, 0x10
    beq lbl_fn_80682830_00007B3C
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007510:
    cmpwi r16, 0x40
    beq lbl_fn_80682830_00007C28
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000751C:
    cmpwi r16, 0x2000
    beq lbl_fn_80682830_00007784
    bge lbl_fn_80682830_0000754C
    cmpwi r16, 0x200
    beq lbl_fn_80682830_00007D6C
    bge lbl_fn_80682830_00007540
    cmpwi r16, 0x100
    beq lbl_fn_80682830_00007CF0
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007540:
    cmpwi r16, 0x400
    beq lbl_fn_80682830_00007DA0
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000754C:
    lis r3, 0x1
    addi r0, r3, -0x8000
    cmpw r16, r0
    beq lbl_fn_80682830_00007E24
    bge lbl_fn_80682830_0000836C
    cmpwi r16, 0x4000
    beq lbl_fn_80682830_000076A4
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000756C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_0000757C
    li r0, 0x0
lbl_fn_80682830_0000757C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_0000758C
    li r0, 0x0
    b lbl_fn_80682830_000075A0
lbl_fn_80682830_0000758C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_80682830_000075A0:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000075CC
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r4, r3
    addi r29, r29, 0x1
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000075CC:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_000075DC
    li r0, 0x0
lbl_fn_80682830_000075DC:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000075EC
    mr r0, r4
    b lbl_fn_80682830_000075F8
lbl_fn_80682830_000075EC:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_fn_80682830_000075F8:
    cmpwi r0, 0x2d
    beq lbl_fn_80682830_0000761C
    cmpwi r0, 0x2b
    beq lbl_fn_80682830_00007620
    cmpwi r0, 0x49
    beq lbl_fn_80682830_0000764C
    cmpwi r0, 0x4e
    beq lbl_fn_80682830_00007674
    b lbl_fn_80682830_0000769C
lbl_fn_80682830_0000761C:
    li r14, 0x1
lbl_fn_80682830_00007620:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    li r0, 0x1
    stw r0, 0x98(r1)
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000764C:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    li r16, 0x4000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007674:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    li r16, 0x2000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000769C:
    li r16, 0x2
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000076A4:
    lwz r5, 0x30(r1)
    addi r16, r1, 0x3d
    lwz r3, 0x34(r1)
    li r20, 0x1
    lbz r0, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r3, 0x40(r1)
    stb r0, 0x44(r1)
    b lbl_fn_80682830_000076F0
lbl_fn_80682830_000076C8:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r16, r16, 0x1
    addi r20, r20, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_fn_80682830_000076F0:
    cmpwi r20, 0x8
    bge lbl_fn_80682830_00007734
    cmplwi r4, 0xff
    li r3, 0x1
    bgt lbl_fn_80682830_00007708
    li r3, 0x0
lbl_fn_80682830_00007708:
    lbz r0, 0x0(r16)
    cmpwi r3, 0x0
    extsb r5, r0
    beq lbl_fn_80682830_00007720
    mr r0, r4
    b lbl_fn_80682830_0000772C
lbl_fn_80682830_00007720:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_fn_80682830_0000772C:
    cmpw r5, r0
    beq lbl_fn_80682830_000076C8
lbl_fn_80682830_00007734:
    cmpwi r20, 0x3
    beq lbl_fn_80682830_00007744
    cmpwi r20, 0x8
    bne lbl_fn_80682830_0000777C
lbl_fn_80682830_00007744:
    cmpwi r14, 0x0
    beq lbl_fn_80682830_0000775C
    lis r3, lbl_8087EC04@ha
    lfs f0, lbl_8087EC04@l(r3)
    fneg f1, f0
    b lbl_fn_80682830_00007764
lbl_fn_80682830_0000775C:
    lis r3, lbl_8087EC04@ha
    lfs f1, lbl_8087EC04@l(r3)
lbl_fn_80682830_00007764:
    lwz r0, 0x98(r1)
    lwz r3, 0xc(r1)
    add r0, r0, r29
    add r0, r20, r0
    stw r0, 0x0(r3)
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_0000777C:
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007784:
    lwz r3, 0x10(r1)
    li r20, 0x0
    lbz r0, 0x14(r1)
    addi r16, r1, 0x21
    stw r3, 0x20(r1)
    li r21, 0x1
    stb r0, 0x24(r1)
    stw r20, 0x48(r1)
    stw r20, 0x4c(r1)
    stw r20, 0x50(r1)
    stw r20, 0x54(r1)
    stw r20, 0x58(r1)
    stw r20, 0x5c(r1)
    stw r20, 0x60(r1)
    stw r20, 0x64(r1)
    b lbl_fn_80682830_000077EC
lbl_fn_80682830_000077C4:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r16, r16, 0x1
    addi r21, r21, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_fn_80682830_000077EC:
    cmpwi r21, 0x4
    bge lbl_fn_80682830_00007830
    cmplwi r4, 0xff
    li r3, 0x1
    bgt lbl_fn_80682830_00007804
    li r3, 0x0
lbl_fn_80682830_00007804:
    lbz r0, 0x0(r16)
    cmpwi r3, 0x0
    extsb r5, r0
    beq lbl_fn_80682830_0000781C
    mr r0, r4
    b lbl_fn_80682830_00007828
lbl_fn_80682830_0000781C:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_fn_80682830_00007828:
    cmpw r5, r0
    beq lbl_fn_80682830_000077C4
lbl_fn_80682830_00007830:
    subi r0, r21, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_80682830_00007954
    cmpwi r21, 0x4
    bne lbl_fn_80682830_00007914
    addi r16, r1, 0x48
    b lbl_fn_80682830_00007878
lbl_fn_80682830_0000784C:
    mr r12, r17
    stb r4, 0x0(r16)
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r20, r20, 0x1
    addi r16, r16, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_fn_80682830_00007878:
    cmpwi r20, 0x20
    bge lbl_fn_80682830_00007900
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007890
    li r0, 0x0
lbl_fn_80682830_00007890:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000078A0
    li r0, 0x0
    b lbl_fn_80682830_000078B4
lbl_fn_80682830_000078A0:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_000078B4:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_0000784C
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_000078CC
    li r0, 0x0
lbl_fn_80682830_000078CC:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000078DC
    li r0, 0x0
    b lbl_fn_80682830_000078F0
lbl_fn_80682830_000078DC:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_fn_80682830_000078F0:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_0000784C
    cmpw r4, r26
    beq lbl_fn_80682830_0000784C
lbl_fn_80682830_00007900:
    cmpwi r4, 0x29
    beq lbl_fn_80682830_00007910
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007910:
    addi r20, r20, 0x1
lbl_fn_80682830_00007914:
    cmpwi r14, 0x0
    addi r3, r1, 0x48
    li r0, 0x0
    stbx r0, r3, r20
    beq lbl_fn_80682830_00007934
    bl fn_8068B0FC
    fneg f1, f1
    b lbl_fn_80682830_00007938
lbl_fn_80682830_00007934:
    bl fn_8068B0FC
lbl_fn_80682830_00007938:
    lwz r0, 0x98(r1)
    add r3, r0, r21
    add r0, r20, r29
    add r0, r3, r0
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_00007954:
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000795C:
    cmpw r4, r26
    bne lbl_fn_80682830_0000798C
    mr r12, r17
    mr r3, r18
    li r16, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000798C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_0000799C
    li r0, 0x0
lbl_fn_80682830_0000799C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000079AC
    li r0, 0x0
    b lbl_fn_80682830_000079C0
lbl_fn_80682830_000079AC:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_000079C0:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_000079D0
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000079D0:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007A40
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    cmplwi r3, 0xff
    mr r4, r3
    li r0, 0x1
    bgt lbl_fn_80682830_00007A08
    li r0, 0x0
lbl_fn_80682830_00007A08:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007A14
    b lbl_fn_80682830_00007A20
lbl_fn_80682830_00007A14:
    lwz r5, 0x38(r15)
    lwz r5, 0xc(r5)
    lbzx r3, r5, r3
lbl_fn_80682830_00007A20:
    cmpwi r3, 0x58
    bne lbl_fn_80682830_00007A38
    lis r3, 0x1
    li r31, 0x1
    addi r16, r3, -0x8000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007A38:
    li r16, 0x4
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007A40:
    li r16, 0x8
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007A48:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007A74
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007A74:
    li r16, 0x8
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007A7C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007A8C
    li r0, 0x0
lbl_fn_80682830_00007A8C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007A9C
    li r0, 0x0
    b lbl_fn_80682830_00007AB0
lbl_fn_80682830_00007A9C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00007AB0:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007AF0
    cmpw r4, r26
    bne lbl_fn_80682830_00007AE8
    mr r12, r17
    mr r3, r18
    li r16, 0x20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007AE8:
    li r16, 0x40
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007AF0:
    lbz r5, 0x6c(r1)
    cmplwi r5, 0x14
    bge lbl_fn_80682830_00007B14
    addi r0, r1, 0x68
    add r3, r0, r5
    stb r4, 0x5(r3)
    addi r0, r5, 0x1
    stb r0, 0x6c(r1)
    b lbl_fn_80682830_00007B18
lbl_fn_80682830_00007B14:
    addi r27, r27, 0x1
lbl_fn_80682830_00007B18:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007B3C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007B4C
    li r0, 0x0
lbl_fn_80682830_00007B4C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007B5C
    li r0, 0x0
    b lbl_fn_80682830_00007B70
lbl_fn_80682830_00007B5C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00007B70:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007B80
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007B80:
    li r16, 0x20
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007B88:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007B98
    li r0, 0x0
lbl_fn_80682830_00007B98:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007BA8
    li r0, 0x0
    b lbl_fn_80682830_00007BBC
lbl_fn_80682830_00007BA8:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00007BBC:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007BCC
    li r16, 0x40
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007BCC:
    lbz r0, 0x6c(r1)
    cmplwi r0, 0x14
    bge lbl_fn_80682830_00007C04
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007BE8
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007C00
lbl_fn_80682830_00007BE8:
    lbz r5, 0x6c(r1)
    addi r0, r1, 0x68
    add r3, r0, r5
    addi r0, r5, 0x1
    stb r4, 0x5(r3)
    stb r0, 0x6c(r1)
lbl_fn_80682830_00007C00:
    subi r27, r27, 0x1
lbl_fn_80682830_00007C04:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007C28:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007C38
    li r0, 0x0
lbl_fn_80682830_00007C38:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007C48
    mr r0, r4
    b lbl_fn_80682830_00007C54
lbl_fn_80682830_00007C48:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_fn_80682830_00007C54:
    cmpwi r0, 0x45
    bne lbl_fn_80682830_00007C84
    mr r12, r17
    mr r3, r18
    li r16, 0x80
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007C84:
    li r16, 0x800
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007C8C:
    cmpwi r4, 0x2b
    bne lbl_fn_80682830_00007CB8
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_00007CE8
lbl_fn_80682830_00007CB8:
    cmpwi r4, 0x2d
    bne lbl_fn_80682830_00007CE8
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    li r0, 0x1
    stw r0, 0x9c(r1)
    mr r4, r3
lbl_fn_80682830_00007CE8:
    li r16, 0x100
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007CF0:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007D00
    li r0, 0x0
lbl_fn_80682830_00007D00:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007D10
    li r0, 0x0
    b lbl_fn_80682830_00007D24
lbl_fn_80682830_00007D10:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00007D24:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007D34
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007D34:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007D64
    mr r12, r17
    mr r3, r18
    li r16, 0x200
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007D64:
    li r16, 0x400
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007D6C:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007D98
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007D98:
    li r16, 0x400
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007DA0:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007DB0
    li r0, 0x0
lbl_fn_80682830_00007DB0:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007DC0
    li r0, 0x0
    b lbl_fn_80682830_00007DD4
lbl_fn_80682830_00007DC0:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00007DD4:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007DE4
    li r16, 0x800
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007DE4:
    mulli r0, r28, 0xa
    add r3, r4, r0
    subi r28, r3, 0x30
    cmpwi r28, 0x134
    ble lbl_fn_80682830_00007E00
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_fn_80682830_00007E00:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007E24:
    cmpwi r31, 0x10
    beq lbl_fn_80682830_0000817C
    bge lbl_fn_80682830_00007E60
    cmpwi r31, 0x4
    beq lbl_fn_80682830_00007F08
    bge lbl_fn_80682830_00007E54
    cmpwi r31, 0x2
    beq lbl_fn_80682830_00007ED4
    bge lbl_fn_80682830_0000836C
    cmpwi r31, 0x1
    bge lbl_fn_80682830_00007E90
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007E54:
    cmpwi r31, 0x8
    beq lbl_fn_80682830_0000805C
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007E60:
    cmpwi r31, 0x80
    beq lbl_fn_80682830_000082B8
    bge lbl_fn_80682830_00007E84
    cmpwi r31, 0x40
    beq lbl_fn_80682830_0000823C
    bge lbl_fn_80682830_0000836C
    cmpwi r31, 0x20
    beq lbl_fn_80682830_000081E0
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007E84:
    cmpwi r31, 0x100
    beq lbl_fn_80682830_000082EC
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007E90:
    addi r3, r1, 0x28
    li r4, 0x0
    li r5, 0x8
    bl memset
    mr r12, r17
    mr r3, r18
    addi r25, r1, 0x28
    li r22, 0x0
    li r23, 0x0
    li r31, 0x2
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007ED4:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_00007F00
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007F00:
    li r31, 0x4
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007F08:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_00007F18
    li r0, 0x0
lbl_fn_80682830_00007F18:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00007F28
    li r0, 0x0
    b lbl_fn_80682830_00007F3C
lbl_fn_80682830_00007F28:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 21, 21
lbl_fn_80682830_00007F3C:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00007F7C
    cmpw r4, r26
    bne lbl_fn_80682830_00007F74
    mr r12, r17
    mr r3, r18
    li r31, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007F74:
    li r31, 0x10
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00007F7C:
    li r0, 0xe
    cmplw r22, r0
    bge lbl_fn_80682830_00008038
    srwi r0, r23, 31
    cmplwi r4, 0xff
    add r0, r0, r23
    li r3, 0x1
    srawi r0, r0, 1
    addi r22, r22, 0x1
    lbzx r0, r25, r0
    bgt lbl_fn_80682830_00007FAC
    li r3, 0x0
lbl_fn_80682830_00007FAC:
    cmpwi r3, 0x0
    beq lbl_fn_80682830_00007FB8
    b lbl_fn_80682830_00007FC4
lbl_fn_80682830_00007FB8:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_fn_80682830_00007FC4:
    cmpwi r4, 0x41
    subi r6, r4, 0x30
    blt lbl_fn_80682830_00007FD4
    subi r6, r4, 0x37
lbl_fn_80682830_00007FD4:
    srwi r5, r23, 31
    clrlwi r3, r23, 31
    xor r4, r3, r5
    clrlslwi r3, r6, 28, 4
    subf. r4, r5, r4
    or r3, r0, r3
    clrlwi r4, r6, 24
    clrlwi r5, r3, 24
    beq lbl_fn_80682830_00008000
    or r0, r0, r4
    clrlwi r5, r0, 24
lbl_fn_80682830_00008000:
    srwi r0, r23, 31
    mr r12, r17
    add r0, r0, r23
    mr r3, r18
    srawi r0, r0, 1
    li r4, 0x0
    stbx r5, r25, r0
    li r5, 0x0
    mtctr r12
    addi r23, r23, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00008038:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000805C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_0000806C
    li r0, 0x0
lbl_fn_80682830_0000806C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_0000807C
    li r0, 0x0
    b lbl_fn_80682830_00008090
lbl_fn_80682830_0000807C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 21, 21
lbl_fn_80682830_00008090:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_000080A0
    li r31, 0x10
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000080A0:
    li r0, 0xe
    cmplw r22, r0
    bge lbl_fn_80682830_00008158
    srwi r0, r23, 31
    cmplwi r4, 0xff
    add r0, r0, r23
    li r3, 0x1
    srawi r0, r0, 1
    lbzx r0, r25, r0
    bgt lbl_fn_80682830_000080CC
    li r3, 0x0
lbl_fn_80682830_000080CC:
    cmpwi r3, 0x0
    beq lbl_fn_80682830_000080D8
    b lbl_fn_80682830_000080E4
lbl_fn_80682830_000080D8:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_fn_80682830_000080E4:
    cmpwi r4, 0x41
    subi r6, r4, 0x30
    blt lbl_fn_80682830_000080F4
    subi r6, r4, 0x37
lbl_fn_80682830_000080F4:
    srwi r5, r23, 31
    clrlwi r3, r23, 31
    xor r4, r3, r5
    clrlslwi r3, r6, 28, 4
    subf. r4, r5, r4
    or r3, r0, r3
    clrlwi r4, r6, 24
    clrlwi r5, r3, 24
    beq lbl_fn_80682830_00008120
    or r0, r0, r4
    clrlwi r5, r0, 24
lbl_fn_80682830_00008120:
    srwi r0, r23, 31
    mr r12, r17
    add r0, r0, r23
    mr r3, r18
    srawi r0, r0, 1
    li r4, 0x0
    stbx r5, r25, r0
    li r5, 0x0
    mtctr r12
    addi r23, r23, 0x1
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00008158:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000817C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_0000818C
    li r0, 0x0
lbl_fn_80682830_0000818C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_0000819C
    mr r0, r4
    b lbl_fn_80682830_000081A8
lbl_fn_80682830_0000819C:
    lwz r3, 0x38(r15)
    lwz r3, 0xc(r3)
    lbzx r0, r3, r4
lbl_fn_80682830_000081A8:
    cmpwi r0, 0x50
    bne lbl_fn_80682830_000081D8
    mr r12, r17
    mr r3, r18
    li r31, 0x20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000081D8:
    li r16, 0x800
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000081E0:
    cmpwi r4, 0x2d
    bne lbl_fn_80682830_000081F4
    li r0, 0x1
    stw r0, 0x94(r1)
    b lbl_fn_80682830_00008214
lbl_fn_80682830_000081F4:
    cmpwi r4, 0x2b
    beq lbl_fn_80682830_00008214
    mr r12, r17
    mr r3, r18
    li r5, 0x1
    mtctr r12
    bctrl
    subi r30, r30, 0x1
lbl_fn_80682830_00008214:
    mr r12, r17
    mr r3, r18
    li r31, 0x40
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_0000823C:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_0000824C
    li r0, 0x0
lbl_fn_80682830_0000824C:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_0000825C
    li r0, 0x0
    b lbl_fn_80682830_00008270
lbl_fn_80682830_0000825C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00008270:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00008280
    li r16, 0x1000
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00008280:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_000082B0
    mr r12, r17
    mr r3, r18
    li r31, 0x80
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000082B0:
    li r31, 0x100
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000082B8:
    cmpwi r4, 0x30
    bne lbl_fn_80682830_000082E4
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000082E4:
    li r31, 0x100
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_000082EC:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80682830_000082FC
    li r0, 0x0
lbl_fn_80682830_000082FC:
    cmpwi r0, 0x0
    beq lbl_fn_80682830_0000830C
    li r0, 0x0
    b lbl_fn_80682830_00008320
lbl_fn_80682830_0000830C:
    lwz r3, 0x38(r15)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80682830_00008320:
    cmpwi r0, 0x0
    bne lbl_fn_80682830_00008330
    li r16, 0x800
    b lbl_fn_80682830_0000836C
lbl_fn_80682830_00008330:
    mulli r0, r24, 0xa
    cmpwi r28, 0x7fff
    add r3, r4, r0
    subi r24, r3, 0x30
    ble lbl_fn_80682830_0000834C
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_fn_80682830_0000834C:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r30, r30, 0x1
    bctrl
    mr r4, r3
lbl_fn_80682830_0000836C:
    lwz r0, 0x8(r1)
    cmpw r30, r0
    bgt lbl_fn_80682830_00008388
    cmpwi r4, -0x1
    beq lbl_fn_80682830_00008388
    rlwinm. r0, r16, 0, 19, 20
    beq lbl_fn_80682830_000074B8
lbl_fn_80682830_00008388:
    addis r0, r16, 0x0
    cmplwi r0, 0x8000
    beq lbl_fn_80682830_000083A4
    andi. r0, r16, 0xe2c
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80682830_000083C0
lbl_fn_80682830_000083A4:
    subi r0, r30, 0x1
    li r3, 0x0
    cmpwi r0, 0x2
    ble lbl_fn_80682830_000083BC
    andi. r0, r31, 0x18e
    bne lbl_fn_80682830_000083C0
lbl_fn_80682830_000083BC:
    li r3, 0x1
lbl_fn_80682830_000083C0:
    cmpwi r3, 0x0
    beq lbl_fn_80682830_000083D8
    lwz r3, 0xc(r1)
    li r0, 0x0
    stw r0, 0x0(r3)
    b lbl_fn_80682830_000083E8
lbl_fn_80682830_000083D8:
    add r3, r30, r29
    subi r0, r3, 0x1
    lwz r3, 0xc(r1)
    stw r0, 0x0(r3)
lbl_fn_80682830_000083E8:
    mr r12, r17
    mr r3, r18
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r31, 0x0
    bne lbl_fn_80682830_00008550
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00008414
    neg r28, r28
lbl_fn_80682830_00008414:
    lbz r3, 0x6c(r1)
    addi r4, r1, 0x6d
    add r4, r4, r3
    b lbl_fn_80682830_00008428
lbl_fn_80682830_00008424:
    addi r27, r27, 0x1
lbl_fn_80682830_00008428:
    cmpwi r3, 0x0
    subi r3, r3, 0x1
    beq lbl_fn_80682830_00008440
    lbzu r0, -0x1(r4)
    cmplwi r0, 0x30
    beq lbl_fn_80682830_00008424
lbl_fn_80682830_00008440:
    addi r0, r3, 0x1
    stb r0, 0x6c(r1)
    clrlwi. r4, r0, 24
    bne lbl_fn_80682830_00008464
    addi r3, r1, 0x6d
    li r0, 0x30
    stbx r0, r3, r4
    addi r0, r4, 0x1
    stb r0, 0x6c(r1)
lbl_fn_80682830_00008464:
    addi r0, r28, 0x134
    cmplwi r0, 0x268
    ble lbl_fn_80682830_000084A4
    lwz r0, 0x0(r19)
    cmpwi r0, 0x0
    bne lbl_fn_80682830_0000849C
    lbz r0, 0x6d(r1)
    cmplwi r0, 0x30
    bne lbl_fn_80682830_0000849C
    lbz r0, 0x6e(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80682830_0000849C
    lfd f1, lbl_80888AC8
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_0000849C:
    li r0, 0x1
    stw r0, 0x0(r19)
lbl_fn_80682830_000084A4:
    lwz r0, 0x0(r19)
    add r28, r28, r27
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000084EC
    lwz r0, 0x9c(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80682830_000084C8
    lfd f1, lbl_80888AC8
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_000084C8:
    cmpwi r14, 0x0
    beq lbl_fn_80682830_000084E0
    lis r3, lbl_8087EC08@ha
    lfd f0, lbl_8087EC08@l(r3)
    fneg f1, f0
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_000084E0:
    lis r3, lbl_8087EC08@ha
    lfd f1, lbl_8087EC08@l(r3)
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_000084EC:
    sth r28, 0x6a(r1)
    addi r3, r1, 0x68
    bl fn_8067C734
    lfd f0, lbl_80888AC8
    fcmpu cr0, f0, f1
    beq lbl_fn_80682830_0000851C
    lfd f0, lbl_80888AD0
    fcmpo cr0, f1, f0
    bge lbl_fn_80682830_0000851C
    li r0, 0x1
    stw r0, 0x0(r19)
    b lbl_fn_80682830_00008538
lbl_fn_80682830_0000851C:
    lfd f0, lbl_80888AD8
    fcmpo cr0, f1, f0
    ble lbl_fn_80682830_00008538
    li r0, 0x1
    stw r0, 0x0(r19)
    lis r3, lbl_8087EC08@ha
    lfd f1, lbl_8087EC08@l(r3)
lbl_fn_80682830_00008538:
    cmpwi r14, 0x0
    beq lbl_fn_80682830_000086D0
    andi. r0, r16, 0xe2c
    beq lbl_fn_80682830_000086D0
    fneg f1, f1
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_00008550:
    lwz r0, 0x94(r1)
    addi r3, r1, 0x18
    cmpwi r0, 0x0
    beq lbl_fn_80682830_00008564
    neg r24, r24
lbl_fn_80682830_00008564:
    slwi r0, r22, 2
    lbz r5, 0x28(r1)
    add r24, r24, r0
    li r6, 0x0
    li r4, 0x80
    b lbl_fn_80682830_00008584
lbl_fn_80682830_0000857C:
    addi r6, r6, 0x1
    subi r24, r24, 0x1
lbl_fn_80682830_00008584:
    cmplwi r6, 0x4
    bge lbl_fn_80682830_00008598
    sraw r0, r4, r6
    and. r0, r5, r0
    beq lbl_fn_80682830_0000857C
lbl_fn_80682830_00008598:
    addic. r5, r6, 0x1
    subi r24, r24, 0x1
    beq lbl_fn_80682830_000085EC
    addi r25, r1, 0x2f
    addi r4, r1, 0x28
    cmplw r25, r4
    li r7, 0x0
    blt lbl_fn_80682830_000085EC
    addi r0, r25, 0x1
    subfic r6, r5, 0x8
    subf r0, r4, r0
    mtctr r0
    blt lbl_fn_80682830_000085EC
lbl_fn_80682830_000085CC:
    lbz r0, 0x0(r25)
    slw r4, r0, r5
    sraw r0, r0, r6
    or r4, r7, r4
    stb r4, 0x0(r25)
    clrlwi r7, r0, 24
    subi r25, r25, 0x1
    bdnz lbl_fn_80682830_000085CC
lbl_fn_80682830_000085EC:
    li r4, 0x0
    li r5, 0x8
    bl memset
    li r0, 0x7
    addi r4, r1, 0x28
    addi r3, r1, 0x19
    li r9, 0x0
    li r8, 0xff
    mtctr r0
lbl_fn_80682830_00008610:
    addi r0, r9, 0x8
    lbz r6, 0x0(r4)
    cmplwi r0, 0x34
    addi r5, r9, 0xc
    ble lbl_fn_80682830_00008634
    subfic r0, r9, 0x34
    slw r0, r8, r0
    clrlwi r0, r0, 24
    and r6, r6, r0
lbl_fn_80682830_00008634:
    clrlwi r10, r5, 29
    clrlwi r6, r6, 24
    sraw r0, r6, r10
    lbz r7, 0x0(r3)
    clrlwi r5, r0, 24
    addi r4, r4, 0x1
    or r5, r7, r5
    stb r5, 0x0(r3)
    subfic r0, r10, 0x8
    addi r9, r9, 0x8
    slw r0, r6, r0
    lbzu r5, 0x1(r3)
    clrlwi r0, r0, 24
    or r0, r5, r0
    stb r0, 0x0(r3)
    bdnz lbl_fn_80682830_00008610
    add r3, r28, r24
    addi r24, r3, 0x3ff
    clrrwi. r0, r24, 11
    beq lbl_fn_80682830_00008694
    li r0, 0x1
    stw r0, 0x0(r19)
    lfd f1, lbl_80888AC8
    b lbl_fn_80682830_000086D0
lbl_fn_80682830_00008694:
    slwi r24, r24, 21
    lbz r5, 0x18(r1)
    srwi r4, r24, 25
    lbz r3, 0x19(r1)
    extrwi r0, r24, 8, 7
    cmpwi r14, 0x0
    or r4, r5, r4
    stb r4, 0x18(r1)
    or r0, r3, r0
    stb r0, 0x19(r1)
    beq lbl_fn_80682830_000086CC
    clrlwi r0, r4, 24
    ori r0, r0, 0x80
    stb r0, 0x18(r1)
lbl_fn_80682830_000086CC:
    lfd f1, 0x18(r1)
lbl_fn_80682830_000086D0:
    addi r11, r1, 0xf0
    bl _restgpr_14
    lwz r0, 0xf4(r1)
    mtlr r0
    addi r1, r1, 0xf0
    blr
}

asm void fn_80683B54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, fn_8068204C@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r4, r4, fn_8068204C@l
    addi r5, r1, 0x10
    stw r3, 0x10(r1)
    lis r3, 0x8000
    subi r3, r3, 0x1
    addi r6, r1, 0x8
    stw r0, 0x14(r1)
    addi r7, r1, 0xc
    bl fn_80682830
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80683B54_00008734
    li r0, 0x22
    stw r0, lbl_80880348
lbl_fn_80683B54_00008734:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80683BB0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x54(r1)
    stmw r17, 0x14(r1)
    li r27, 0x0
    mr r17, r3
    mr r18, r4
    mr r19, r5
    mr r20, r6
    mr r21, r7
    mr r22, r8
    mr r23, r9
    li r28, 0x1
    li r26, 0x0
    li r25, 0x0
    li r24, 0x0
    stw r27, 0x0(r9)
    stw r27, 0x0(r8)
    blt lbl_fn_80683BB0_000087AC
    cmpwi r3, 0x1
    beq lbl_fn_80683BB0_000087AC
    cmpwi r3, 0x24
    bgt lbl_fn_80683BB0_000087AC
    cmpwi r4, 0x1
    bge lbl_fn_80683BB0_000087B4
lbl_fn_80683BB0_000087AC:
    li r28, 0x40
    b lbl_fn_80683BB0_000087D4
lbl_fn_80683BB0_000087B4:
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    li r27, 0x1
    bctrl
    mr r4, r3
lbl_fn_80683BB0_000087D4:
    cmpwi r17, 0x0
    beq lbl_fn_80683BB0_000087E4
    li r0, -0x1
    divwu r24, r0, r17
lbl_fn_80683BB0_000087E4:
    lis r3, lbl_807BB380@ha
    li r30, 0x1
    li r31, -0x1
    addi r29, r3, lbl_807BB380@l
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_000087F8:
    cmpwi r28, 0x1
    beq lbl_fn_80683BB0_00008824
    cmpwi r28, 0x2
    beq lbl_fn_80683BB0_000088E4
    cmpwi r28, 0x4
    beq lbl_fn_80683BB0_0000892C
    cmpwi r28, 0x8
    beq lbl_fn_80683BB0_0000897C
    cmpwi r28, 0x10
    beq lbl_fn_80683BB0_0000897C
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008824:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80683BB0_00008834
    li r0, 0x0
lbl_fn_80683BB0_00008834:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008844
    li r0, 0x0
    b lbl_fn_80683BB0_00008858
lbl_fn_80683BB0_00008844:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_80683BB0_00008858:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008884
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r4, r3
    addi r26, r26, 0x1
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008884:
    cmpwi r4, 0x2b
    bne lbl_fn_80683BB0_000088B0
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80683BB0_000088DC
lbl_fn_80683BB0_000088B0:
    cmpwi r4, 0x2d
    bne lbl_fn_80683BB0_000088DC
    mr r12, r19
    mr r3, r20
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    stw r30, 0x0(r22)
lbl_fn_80683BB0_000088DC:
    li r28, 0x2
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_000088E4:
    cmpwi r17, 0x0
    beq lbl_fn_80683BB0_000088F4
    cmpwi r17, 0x10
    bne lbl_fn_80683BB0_00008924
lbl_fn_80683BB0_000088F4:
    cmpwi r4, 0x30
    bne lbl_fn_80683BB0_00008924
    mr r12, r19
    mr r3, r20
    li r28, 0x4
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008924:
    li r28, 0x8
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_0000892C:
    cmpwi r4, 0x58
    beq lbl_fn_80683BB0_0000893C
    cmpwi r4, 0x78
    bne lbl_fn_80683BB0_00008968
lbl_fn_80683BB0_0000893C:
    mr r12, r19
    mr r3, r20
    li r17, 0x10
    li r28, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008968:
    cmpwi r17, 0x0
    bne lbl_fn_80683BB0_00008974
    li r17, 0x8
lbl_fn_80683BB0_00008974:
    li r28, 0x10
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_0000897C:
    cmpwi r17, 0x0
    bne lbl_fn_80683BB0_00008988
    li r17, 0xa
lbl_fn_80683BB0_00008988:
    cmpwi r24, 0x0
    bne lbl_fn_80683BB0_00008994
    divwu r24, r31, r17
lbl_fn_80683BB0_00008994:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80683BB0_000089A4
    li r0, 0x0
lbl_fn_80683BB0_000089A4:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_000089B4
    li r0, 0x0
    b lbl_fn_80683BB0_000089C8
lbl_fn_80683BB0_000089B4:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80683BB0_000089C8:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_000089F4
    subi r4, r4, 0x30
    cmpw r4, r17
    blt lbl_fn_80683BB0_00008AAC
    cmpwi r28, 0x10
    li r28, 0x40
    bne lbl_fn_80683BB0_000089EC
    li r28, 0x20
lbl_fn_80683BB0_000089EC:
    addi r4, r4, 0x30
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_000089F4:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80683BB0_00008A04
    li r0, 0x0
lbl_fn_80683BB0_00008A04:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008A14
    li r0, 0x0
    b lbl_fn_80683BB0_00008A28
lbl_fn_80683BB0_00008A14:
    lwz r3, 0x38(r29)
    slwi r0, r4, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_fn_80683BB0_00008A28:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008A68
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80683BB0_00008A40
    li r0, 0x0
lbl_fn_80683BB0_00008A40:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008A50
    mr r3, r4
    b lbl_fn_80683BB0_00008A5C
lbl_fn_80683BB0_00008A50:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r3, r3, r4
lbl_fn_80683BB0_00008A5C:
    subi r0, r3, 0x37
    cmpw r0, r17
    blt lbl_fn_80683BB0_00008A80
lbl_fn_80683BB0_00008A68:
    cmpwi r28, 0x10
    bne lbl_fn_80683BB0_00008A78
    li r28, 0x20
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008A78:
    li r28, 0x40
    b lbl_fn_80683BB0_00008AF4
lbl_fn_80683BB0_00008A80:
    cmplwi r4, 0xff
    li r0, 0x1
    bgt lbl_fn_80683BB0_00008A90
    li r0, 0x0
lbl_fn_80683BB0_00008A90:
    cmpwi r0, 0x0
    beq lbl_fn_80683BB0_00008A9C
    b lbl_fn_80683BB0_00008AA8
lbl_fn_80683BB0_00008A9C:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r4, r3, r4
lbl_fn_80683BB0_00008AA8:
    subi r4, r4, 0x37
lbl_fn_80683BB0_00008AAC:
    cmplw r25, r24
    ble lbl_fn_80683BB0_00008AB8
    stw r30, 0x0(r23)
lbl_fn_80683BB0_00008AB8:
    mullw r25, r25, r17
    subfic r0, r25, -0x1
    cmplw r4, r0
    ble lbl_fn_80683BB0_00008ACC
    stw r30, 0x0(r23)
lbl_fn_80683BB0_00008ACC:
    mr r12, r19
    add r25, r25, r4
    mr r3, r20
    li r28, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r4, r3
lbl_fn_80683BB0_00008AF4:
    cmpw r27, r18
    bgt lbl_fn_80683BB0_00008B0C
    cmpwi r4, -0x1
    beq lbl_fn_80683BB0_00008B0C
    rlwinm. r0, r28, 0, 25, 26
    beq lbl_fn_80683BB0_000087F8
lbl_fn_80683BB0_00008B0C:
    andi. r0, r28, 0x34
    bne lbl_fn_80683BB0_00008B20
    li r25, 0x0
    stw r25, 0x0(r21)
    b lbl_fn_80683BB0_00008B2C
lbl_fn_80683BB0_00008B20:
    add r3, r27, r26
    subi r0, r3, 0x1
    stw r0, 0x0(r21)
lbl_fn_80683BB0_00008B2C:
    mr r12, r19
    mr r3, r20
    li r5, 0x1
    mtctr r12
    bctrl
    mr r3, r25
    lmw r17, 0x14(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80683FC4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x64(r1)
    stmw r14, 0x18(r1)
    li r27, 0x0
    mr r15, r3
    mr r16, r4
    stw r7, 0x8(r1)
    mr r17, r5
    mr r18, r6
    mr r19, r8
    mr r20, r9
    li r28, 0x1
    li r26, 0x0
    li r24, 0x0
    li r25, 0x0
    li r22, 0x0
    li r23, 0x0
    stw r27, 0x0(r9)
    stw r27, 0x0(r8)
    blt lbl_fn_80683FC4_00008BC8
    cmpwi r3, 0x1
    beq lbl_fn_80683FC4_00008BC8
    cmpwi r3, 0x24
    bgt lbl_fn_80683FC4_00008BC8
    cmpwi r4, 0x1
    bge lbl_fn_80683FC4_00008BD0
lbl_fn_80683FC4_00008BC8:
    li r28, 0x40
    b lbl_fn_80683FC4_00008BF0
lbl_fn_80683FC4_00008BD0:
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    li r27, 0x1
    bctrl
    mr r21, r3
lbl_fn_80683FC4_00008BF0:
    cmpwi r15, 0x0
    beq lbl_fn_80683FC4_00008C14
    mr r6, r15
    srawi r5, r15, 31
    li r3, -0x1
    li r4, -0x1
    bl __div2u
    mr r22, r4
    mr r23, r3
lbl_fn_80683FC4_00008C14:
    lis r3, lbl_807BB380@ha
    li r30, 0x1
    li r14, 0x0
    li r31, -0x1
    addi r29, r3, lbl_807BB380@l
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008C2C:
    cmpwi r28, 0x1
    beq lbl_fn_80683FC4_00008C58
    cmpwi r28, 0x2
    beq lbl_fn_80683FC4_00008D18
    cmpwi r28, 0x4
    beq lbl_fn_80683FC4_00008D60
    cmpwi r28, 0x8
    beq lbl_fn_80683FC4_00008DB0
    cmpwi r28, 0x10
    beq lbl_fn_80683FC4_00008DB0
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008C58:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_fn_80683FC4_00008C68
    li r0, 0x0
lbl_fn_80683FC4_00008C68:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008C78
    li r0, 0x0
    b lbl_fn_80683FC4_00008C8C
lbl_fn_80683FC4_00008C78:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 23, 23
lbl_fn_80683FC4_00008C8C:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008CB8
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    bctrl
    mr r21, r3
    addi r26, r26, 0x1
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008CB8:
    cmpwi r21, 0x2b
    bne lbl_fn_80683FC4_00008CE4
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_fn_80683FC4_00008D10
lbl_fn_80683FC4_00008CE4:
    cmpwi r21, 0x2d
    bne lbl_fn_80683FC4_00008D10
    mr r12, r17
    mr r3, r18
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    stw r30, 0x0(r19)
lbl_fn_80683FC4_00008D10:
    li r28, 0x2
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008D18:
    cmpwi r15, 0x0
    beq lbl_fn_80683FC4_00008D28
    cmpwi r15, 0x10
    bne lbl_fn_80683FC4_00008D58
lbl_fn_80683FC4_00008D28:
    cmpwi r21, 0x30
    bne lbl_fn_80683FC4_00008D58
    mr r12, r17
    mr r3, r18
    li r28, 0x4
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008D58:
    li r28, 0x8
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008D60:
    cmpwi r21, 0x58
    beq lbl_fn_80683FC4_00008D70
    cmpwi r21, 0x78
    bne lbl_fn_80683FC4_00008D9C
lbl_fn_80683FC4_00008D70:
    mr r12, r17
    mr r3, r18
    li r15, 0x10
    li r28, 0x8
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008D9C:
    cmpwi r15, 0x0
    bne lbl_fn_80683FC4_00008DA8
    li r15, 0x8
lbl_fn_80683FC4_00008DA8:
    li r28, 0x10
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008DB0:
    cmpwi r15, 0x0
    bne lbl_fn_80683FC4_00008DBC
    li r15, 0xa
lbl_fn_80683FC4_00008DBC:
    srawi r0, r14, 31
    xor r0, r23, r0
    or. r0, r22, r0
    bne lbl_fn_80683FC4_00008DE8
    mr r6, r15
    srawi r5, r15, 31
    li r3, -0x1
    li r4, -0x1
    bl __div2u
    mr r22, r4
    mr r23, r3
lbl_fn_80683FC4_00008DE8:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_fn_80683FC4_00008DF8
    li r0, 0x0
lbl_fn_80683FC4_00008DF8:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008E08
    li r0, 0x0
    b lbl_fn_80683FC4_00008E1C
lbl_fn_80683FC4_00008E08:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 28, 28
lbl_fn_80683FC4_00008E1C:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008E48
    subi r21, r21, 0x30
    cmpw r21, r15
    blt lbl_fn_80683FC4_00008F00
    cmpwi r28, 0x10
    li r28, 0x40
    bne lbl_fn_80683FC4_00008E40
    li r28, 0x20
lbl_fn_80683FC4_00008E40:
    addi r21, r21, 0x30
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008E48:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_fn_80683FC4_00008E58
    li r0, 0x0
lbl_fn_80683FC4_00008E58:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008E68
    li r0, 0x0
    b lbl_fn_80683FC4_00008E7C
lbl_fn_80683FC4_00008E68:
    lwz r3, 0x38(r29)
    slwi r0, r21, 1
    lwz r3, 0x8(r3)
    lhzx r0, r3, r0
    clrlwi r0, r0, 31
lbl_fn_80683FC4_00008E7C:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008EBC
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_fn_80683FC4_00008E94
    li r0, 0x0
lbl_fn_80683FC4_00008E94:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008EA4
    mr r3, r21
    b lbl_fn_80683FC4_00008EB0
lbl_fn_80683FC4_00008EA4:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r3, r3, r21
lbl_fn_80683FC4_00008EB0:
    subi r0, r3, 0x37
    cmpw r0, r15
    blt lbl_fn_80683FC4_00008ED4
lbl_fn_80683FC4_00008EBC:
    cmpwi r28, 0x10
    bne lbl_fn_80683FC4_00008ECC
    li r28, 0x20
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008ECC:
    li r28, 0x40
    b lbl_fn_80683FC4_00008F88
lbl_fn_80683FC4_00008ED4:
    cmplwi r21, 0xff
    li r0, 0x1
    bgt lbl_fn_80683FC4_00008EE4
    li r0, 0x0
lbl_fn_80683FC4_00008EE4:
    cmpwi r0, 0x0
    beq lbl_fn_80683FC4_00008EF0
    b lbl_fn_80683FC4_00008EFC
lbl_fn_80683FC4_00008EF0:
    lwz r3, 0x38(r29)
    lwz r3, 0xc(r3)
    lbzx r21, r3, r21
lbl_fn_80683FC4_00008EFC:
    subi r21, r21, 0x37
lbl_fn_80683FC4_00008F00:
    subfc r0, r24, r22
    subfe r0, r25, r23
    subfe r0, r22, r22
    neg. r0, r0
    beq lbl_fn_80683FC4_00008F18
    stw r30, 0x0(r20)
lbl_fn_80683FC4_00008F18:
    mulhwu r3, r24, r15
    srawi r5, r15, 31
    srawi r6, r21, 31
    mullw r4, r25, r15
    add r4, r3, r4
    mullw r3, r24, r5
    mullw r0, r24, r15
    add r7, r4, r3
    subfc r5, r0, r31
    subfe r4, r7, r31
    subfc r3, r21, r5
    subfe r3, r6, r4
    subfe r3, r5, r5
    neg. r3, r3
    beq lbl_fn_80683FC4_00008F58
    stw r30, 0x0(r20)
lbl_fn_80683FC4_00008F58:
    srawi r4, r21, 31
    mr r12, r17
    addc r24, r0, r21
    mr r3, r18
    adde r25, r7, r4
    li r28, 0x10
    li r4, 0x0
    li r5, 0x0
    mtctr r12
    addi r27, r27, 0x1
    bctrl
    mr r21, r3
lbl_fn_80683FC4_00008F88:
    cmpw r27, r16
    bgt lbl_fn_80683FC4_00008FA0
    cmpwi r21, -0x1
    beq lbl_fn_80683FC4_00008FA0
    rlwinm. r0, r28, 0, 25, 26
    beq lbl_fn_80683FC4_00008C2C
lbl_fn_80683FC4_00008FA0:
    andi. r0, r28, 0x34
    bne lbl_fn_80683FC4_00008FBC
    lwz r3, 0x8(r1)
    li r24, 0x0
    li r25, 0x0
    stw r24, 0x0(r3)
    b lbl_fn_80683FC4_00008FCC
lbl_fn_80683FC4_00008FBC:
    add r3, r27, r26
    subi r0, r3, 0x1
    lwz r3, 0x8(r1)
    stw r0, 0x0(r3)
lbl_fn_80683FC4_00008FCC:
    mr r12, r17
    mr r3, r18
    mr r4, r21
    li r5, 0x1
    mtctr r12
    bctrl
    mr r4, r24
    mr r3, r25
    lmw r14, 0x18(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8068446C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x8000
    lis r6, fn_8068204C@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    stw r31, 0x2c(r1)
    mr r31, r4
    subi r4, r7, 0x1
    addi r7, r1, 0x10
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r5
    addi r5, r6, fn_8068204C@l
    stw r30, 0x18(r1)
    addi r6, r1, 0x18
    stw r0, 0x1c(r1)
    bl fn_80683BB0
    cmpwi r31, 0x0
    beq lbl_fn_8068446C_00009064
    lwz r0, 0x10(r1)
    add r0, r30, r0
    stw r0, 0x0(r31)
lbl_fn_8068446C_00009064:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8068446C_00009080
    li r0, 0x22
    stw r0, lbl_80880348
    li r3, -0x1
    b lbl_fn_8068446C_00009090
lbl_fn_8068446C_00009080:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8068446C_00009090
    neg r3, r3
lbl_fn_8068446C_00009090:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80684514(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, 0x8000
    lis r6, fn_8068204C@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r8, r1, 0xc
    addi r9, r1, 0x8
    stw r31, 0x2c(r1)
    mr r31, r4
    subi r4, r7, 0x1
    addi r7, r1, 0x10
    stw r30, 0x28(r1)
    mr r30, r3
    mr r3, r5
    addi r5, r6, fn_8068204C@l
    stw r30, 0x18(r1)
    addi r6, r1, 0x18
    stw r0, 0x1c(r1)
    bl fn_80683BB0
    cmpwi r31, 0x0
    beq lbl_fn_80684514_0000910C
    lwz r0, 0x10(r1)
    add r0, r30, r0
    stw r0, 0x0(r31)
lbl_fn_80684514_0000910C:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684514_00009148
    lwz r5, 0xc(r1)
    cmpwi r5, 0x0
    bne lbl_fn_80684514_00009134
    lis r4, 0x8000
    subi r0, r4, 0x1
    cmplw r3, r0
    bgt lbl_fn_80684514_00009148
lbl_fn_80684514_00009134:
    cmpwi r5, 0x0
    beq lbl_fn_80684514_00009170
    lis r0, 0x8000
    cmplw r3, r0
    ble lbl_fn_80684514_00009170
lbl_fn_80684514_00009148:
    lwz r5, 0xc(r1)
    li r0, 0x22
    lis r3, 0x8000
    stw r0, lbl_80880348
    neg r4, r5
    subi r0, r3, 0x1
    or r3, r4, r5
    srwi r3, r3, 31
    add r3, r3, r0
    b lbl_fn_80684514_0000917C
lbl_fn_80684514_00009170:
    cmpwi r5, 0x0
    beq lbl_fn_80684514_0000917C
    neg r3, r3
lbl_fn_80684514_0000917C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80684600(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, fn_8068204C@ha
    stw r0, 0x34(r1)
    li r0, 0x0
    addi r5, r5, fn_8068204C@l
    addi r6, r1, 0x18
    stw r31, 0x2c(r1)
    lis r31, 0x8000
    subi r4, r31, 0x1
    addi r7, r1, 0x8
    stw r3, 0x18(r1)
    addi r8, r1, 0xc
    addi r9, r1, 0x10
    li r3, 0xa
    stw r0, 0x1c(r1)
    bl fn_80683BB0
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684600_00009210
    lwz r4, 0xc(r1)
    cmpwi r4, 0x0
    bne lbl_fn_80684600_000091FC
    subi r0, r31, 0x1
    cmplw r3, r0
    bgt lbl_fn_80684600_00009210
lbl_fn_80684600_000091FC:
    cmpwi r4, 0x0
    beq lbl_fn_80684600_00009238
    lis r0, 0x8000
    cmplw r3, r0
    ble lbl_fn_80684600_00009238
lbl_fn_80684600_00009210:
    lwz r5, 0xc(r1)
    li r0, 0x22
    lis r3, 0x8000
    stw r0, lbl_80880348
    neg r4, r5
    subi r0, r3, 0x1
    or r3, r4, r5
    srwi r3, r3, 31
    add r3, r3, r0
    b lbl_fn_80684600_00009244
lbl_fn_80684600_00009238:
    cmpwi r4, 0x0
    beq lbl_fn_80684600_00009244
    neg r3, r3
lbl_fn_80684600_00009244:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806846C4(void)
{
    nofralloc
    slwi r5, r5, 1
    b memcpy
}

asm void fn_806846CC(void)
{
    nofralloc
    slwi r5, r5, 1
    b memmove
}

asm void fn_806846D4(void)
{
    nofralloc
    mtctr r5
    cmpwi r5, 0x0
    beq lbl_fn_806846D4_00009288
lbl_fn_806846D4_00009274:
    lhz r0, 0x0(r3)
    cmplw r0, r4
    beqlr
    addi r3, r3, 0x2
    bdnz lbl_fn_806846D4_00009274
lbl_fn_806846D4_00009288:
    li r3, 0x0
    blr
}

asm void fn_806846FC(void)
{
    nofralloc
    li r0, 0x0
    mtctr r5
    cmpwi r5, 0x0
    beq lbl_fn_806846FC_000092BC
lbl_fn_806846FC_000092A0:
    lhz r5, 0x0(r4)
    lhz r0, 0x0(r3)
    subf. r0, r5, r0
    bne lbl_fn_806846FC_000092BC
    addi r3, r3, 0x2
    addi r4, r4, 0x2
    bdnz lbl_fn_806846FC_000092A0
lbl_fn_806846FC_000092BC:
    mr r3, r0
    blr
}

asm void fn_80684730(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r6, 0x0
    li r7, 0x1
    stw r0, 0x34(r1)
    lhz r0, 0x2(r3)
    stw r31, 0x2c(r1)
    addi r31, r3, 0x2
    cmplwi r0, 0x25
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stb r7, 0x8(r1)
    stb r6, 0x9(r1)
    stb r6, 0xa(r1)
    stb r6, 0xb(r1)
    stb r6, 0xc(r1)
    stw r6, 0x10(r1)
    stw r6, 0x14(r1)
    bne lbl_fn_80684730_0000933C
    sth r0, 0xe(r1)
    addi r3, r31, 0x2
    lwz r4, 0x8(r1)
    lwz r0, 0xc(r1)
    stw r4, 0x0(r5)
    stw r0, 0x4(r5)
    stw r6, 0x8(r5)
    stw r6, 0xc(r5)
    b lbl_fn_80684730_00009838
lbl_fn_80684730_0000933C:
    li r3, 0x2
lbl_fn_80684730_00009340:
    cmpwi r0, 0x2d
    li r5, 0x1
    beq lbl_fn_80684730_00009370
    cmpwi r0, 0x2b
    beq lbl_fn_80684730_00009378
    cmpwi r0, 0x20
    beq lbl_fn_80684730_00009380
    cmpwi r0, 0x23
    beq lbl_fn_80684730_00009394
    cmpwi r0, 0x30
    beq lbl_fn_80684730_0000939C
    b lbl_fn_80684730_000093B0
lbl_fn_80684730_00009370:
    stb r6, 0x8(r1)
    b lbl_fn_80684730_000093B4
lbl_fn_80684730_00009378:
    stb r7, 0x9(r1)
    b lbl_fn_80684730_000093B4
lbl_fn_80684730_00009380:
    lbz r4, 0x9(r1)
    cmplwi r4, 0x1
    beq lbl_fn_80684730_000093B4
    stb r3, 0x9(r1)
    b lbl_fn_80684730_000093B4
lbl_fn_80684730_00009394:
    stb r7, 0xb(r1)
    b lbl_fn_80684730_000093B4
lbl_fn_80684730_0000939C:
    lbz r4, 0x8(r1)
    cmpwi r4, 0x0
    beq lbl_fn_80684730_000093B4
    stb r3, 0x8(r1)
    b lbl_fn_80684730_000093B4
lbl_fn_80684730_000093B0:
    li r5, 0x0
lbl_fn_80684730_000093B4:
    cmpwi r5, 0x0
    beq lbl_fn_80684730_000093C4
    lhzu r0, 0x2(r31)
    b lbl_fn_80684730_00009340
lbl_fn_80684730_000093C4:
    cmplwi r0, 0x2a
    bne lbl_fn_80684730_00009400
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x10(r1)
    cmpwi r0, 0x0
    bge lbl_fn_80684730_000093F8
    neg r0, r0
    li r3, 0x0
    stb r3, 0x8(r1)
    stw r0, 0x10(r1)
lbl_fn_80684730_000093F8:
    lhzu r0, 0x2(r31)
    b lbl_fn_80684730_00009450
lbl_fn_80684730_00009400:
    lis r3, lbl_807BB380@ha
    addi r3, r3, lbl_807BB380@l
    lwz r5, 0x38(r3)
    b lbl_fn_80684730_00009428
lbl_fn_80684730_00009410:
    lwz r3, 0x10(r1)
    mulli r3, r3, 0xa
    add r3, r0, r3
    lhzu r0, 0x2(r31)
    subi r3, r3, 0x30
    stw r3, 0x10(r1)
lbl_fn_80684730_00009428:
    cmplwi r0, 0x100
    bge lbl_fn_80684730_00009444
    lwz r4, 0x14(r5)
    clrlslwi r3, r0, 16, 1
    lhzx r3, r4, r3
    rlwinm r3, r3, 0, 28, 28
    b lbl_fn_80684730_00009448
lbl_fn_80684730_00009444:
    li r3, 0x0
lbl_fn_80684730_00009448:
    cmpwi r3, 0x0
    bne lbl_fn_80684730_00009410
lbl_fn_80684730_00009450:
    lwz r6, 0x10(r1)
    cmpwi r6, 0x1fd
    ble lbl_fn_80684730_0000948C
    lis r3, 0x1
    lwz r5, 0x8(r1)
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    lwz r0, 0x14(r1)
    addi r3, r31, 0x2
    lwz r4, 0xc(r1)
    stw r5, 0x0(r30)
    stw r4, 0x4(r30)
    stw r6, 0x8(r30)
    stw r0, 0xc(r30)
    b lbl_fn_80684730_00009838
lbl_fn_80684730_0000948C:
    cmplwi r0, 0x2e
    bne lbl_fn_80684730_00009524
    lhzu r0, 0x2(r31)
    li r3, 0x1
    stb r3, 0xa(r1)
    cmplwi r0, 0x2a
    bne lbl_fn_80684730_000094D4
    mr r3, r29
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    stw r0, 0x14(r1)
    cmpwi r0, 0x0
    bge lbl_fn_80684730_000094CC
    li r0, 0x0
    stb r0, 0xa(r1)
lbl_fn_80684730_000094CC:
    lhzu r0, 0x2(r31)
    b lbl_fn_80684730_00009524
lbl_fn_80684730_000094D4:
    lis r3, lbl_807BB380@ha
    addi r3, r3, lbl_807BB380@l
    lwz r5, 0x38(r3)
    b lbl_fn_80684730_000094FC
lbl_fn_80684730_000094E4:
    lwz r3, 0x14(r1)
    mulli r3, r3, 0xa
    add r3, r0, r3
    lhzu r0, 0x2(r31)
    subi r3, r3, 0x30
    stw r3, 0x14(r1)
lbl_fn_80684730_000094FC:
    cmplwi r0, 0x100
    bge lbl_fn_80684730_00009518
    lwz r4, 0x14(r5)
    clrlslwi r3, r0, 16, 1
    lhzx r3, r4, r3
    rlwinm r3, r3, 0, 28, 28
    b lbl_fn_80684730_0000951C
lbl_fn_80684730_00009518:
    li r3, 0x0
lbl_fn_80684730_0000951C:
    cmpwi r3, 0x0
    bne lbl_fn_80684730_000094E4
lbl_fn_80684730_00009524:
    cmpwi r0, 0x68
    li r5, 0x1
    beq lbl_fn_80684730_0000955C
    cmpwi r0, 0x6c
    beq lbl_fn_80684730_00009584
    cmpwi r0, 0x4c
    beq lbl_fn_80684730_000095AC
    cmpwi r0, 0x6a
    beq lbl_fn_80684730_000095B8
    cmpwi r0, 0x74
    beq lbl_fn_80684730_000095C4
    cmpwi r0, 0x7a
    beq lbl_fn_80684730_000095D0
    b lbl_fn_80684730_000095DC
lbl_fn_80684730_0000955C:
    lhz r3, 0x2(r31)
    li r4, 0x2
    stb r4, 0xc(r1)
    cmplwi r3, 0x68
    bne lbl_fn_80684730_000095E0
    li r0, 0x1
    stb r0, 0xc(r1)
    mr r0, r3
    addi r31, r31, 0x2
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_00009584:
    lhz r3, 0x2(r31)
    li r4, 0x3
    stb r4, 0xc(r1)
    cmplwi r3, 0x6c
    bne lbl_fn_80684730_000095E0
    li r0, 0x4
    stb r0, 0xc(r1)
    mr r0, r3
    addi r31, r31, 0x2
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_000095AC:
    li r3, 0x9
    stb r3, 0xc(r1)
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_000095B8:
    li r3, 0x6
    stb r3, 0xc(r1)
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_000095C4:
    li r3, 0x8
    stb r3, 0xc(r1)
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_000095D0:
    li r3, 0x7
    stb r3, 0xc(r1)
    b lbl_fn_80684730_000095E0
lbl_fn_80684730_000095DC:
    li r5, 0x0
lbl_fn_80684730_000095E0:
    cmpwi r5, 0x0
    beq lbl_fn_80684730_000095EC
    lhzu r0, 0x2(r31)
lbl_fn_80684730_000095EC:
    clrlwi r3, r0, 16
    sth r0, 0xe(r1)
    subi r0, r3, 0x41
    cmplwi r0, 0x37
    bgt lbl_fn_80684730_00009808
    lis r3, jumptable_807BB868@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807BB868@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_fn_80684730_0000962C
    li r0, 0x4
    stb r0, 0xc(r1)
lbl_fn_80684730_0000962C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_00009644
    li r0, 0x1
    stw r0, 0x14(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_00009644:
    lbz r0, 0x8(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80684730_00009814
    li r0, 0x1
    stb r0, 0x8(r1)
    b lbl_fn_80684730_00009814
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80684730_00009680
    cmplwi r3, 0x2
    beq lbl_fn_80684730_00009680
    cmplwi r3, 0x4
    bne lbl_fn_80684730_00009690
lbl_fn_80684730_00009680:
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_00009690:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_00009814
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_fn_80684730_00009814
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_000096BC
    li r0, 0xd
    stw r0, 0x14(r1)
lbl_fn_80684730_000096BC:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80684730_000096E8
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_80684730_000096E8
    cmplwi r3, 0x4
    bne lbl_fn_80684730_00009814
lbl_fn_80684730_000096E8:
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    b lbl_fn_80684730_00009814
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_0000970C
    li r0, 0x1
    stw r0, 0x14(r1)
lbl_fn_80684730_0000970C:
    lbz r3, 0xc(r1)
    addi r0, r3, 0xfa
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    ble lbl_fn_80684730_00009738
    addi r0, r3, 0xff
    clrlwi r0, r0, 24
    cmplwi r0, 0x1
    ble lbl_fn_80684730_00009738
    cmplwi r3, 0x4
    bne lbl_fn_80684730_00009748
lbl_fn_80684730_00009738:
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_00009748:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_00009814
    li r0, 0x6
    stw r0, 0x14(r1)
    b lbl_fn_80684730_00009814
    li r5, 0x3
    li r4, 0x1
    li r3, 0x78
    li r0, 0x8
    stb r5, 0xc(r1)
    stb r4, 0xb(r1)
    sth r3, 0xe(r1)
    stw r0, 0x14(r1)
    b lbl_fn_80684730_00009814
    lbz r3, 0xc(r1)
    cmplwi r3, 0x3
    bne lbl_fn_80684730_0000979C
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_0000979C:
    lbz r0, 0xa(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80684730_000097B0
    cmpwi r3, 0x0
    beq lbl_fn_80684730_00009814
lbl_fn_80684730_000097B0:
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    b lbl_fn_80684730_00009814
    lbz r0, 0xc(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80684730_000097D8
    li r0, 0x5
    stb r0, 0xc(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_000097D8:
    cmpwi r0, 0x0
    beq lbl_fn_80684730_00009814
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
    b lbl_fn_80684730_00009814
    lbz r0, 0xc(r1)
    cmplwi r0, 0x9
    bne lbl_fn_80684730_00009814
    li r0, 0x4
    stb r0, 0xc(r1)
    b lbl_fn_80684730_00009814
lbl_fn_80684730_00009808:
    lis r3, 0x1
    subi r0, r3, 0x1
    sth r0, 0xe(r1)
lbl_fn_80684730_00009814:
    lwz r6, 0x8(r1)
    addi r3, r31, 0x2
    lwz r5, 0xc(r1)
    lwz r4, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r6, 0x0(r30)
    stw r5, 0x4(r30)
    stw r4, 0x8(r30)
    stw r0, 0xc(r30)
lbl_fn_80684730_00009838:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80684CC0(void)
{
    nofralloc
    cmpwi r3, 0x0
    li r8, 0x0
    sth r8, -0x2(r4)
    subi r6, r4, 0x2
    li r7, 0x0
    bne lbl_fn_80684CC0_00009898
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80684CC0_00009898
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80684CC0_00009890
    lhz r0, 0x6(r5)
    cmplwi r0, 0x6f
    beq lbl_fn_80684CC0_00009898
lbl_fn_80684CC0_00009890:
    mr r3, r6
    blr
lbl_fn_80684CC0_00009898:
    lhz r9, 0x6(r5)
    cmpwi r9, 0x64
    beq lbl_fn_80684CC0_000098D0
    cmpwi r9, 0x69
    beq lbl_fn_80684CC0_000098D0
    cmpwi r9, 0x6f
    beq lbl_fn_80684CC0_000098F4
    cmpwi r9, 0x75
    beq lbl_fn_80684CC0_00009904
    cmpwi r9, 0x78
    beq lbl_fn_80684CC0_00009914
    cmpwi r9, 0x58
    beq lbl_fn_80684CC0_00009914
    b lbl_fn_80684CC0_00009920
lbl_fn_80684CC0_000098D0:
    cmpwi r3, 0x0
    li r0, 0xa
    bge lbl_fn_80684CC0_00009920
    addis r8, r3, 0x8000
    cmplwi r8, 0x0
    beq lbl_fn_80684CC0_000098EC
    neg r3, r3
lbl_fn_80684CC0_000098EC:
    li r8, 0x1
    b lbl_fn_80684CC0_00009920
lbl_fn_80684CC0_000098F4:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x8
    b lbl_fn_80684CC0_00009920
lbl_fn_80684CC0_00009904:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0xa
    b lbl_fn_80684CC0_00009920
lbl_fn_80684CC0_00009914:
    li r0, 0x0
    stb r0, 0x1(r5)
    li r0, 0x10
lbl_fn_80684CC0_00009920:
    divwu r9, r3, r0
    mullw r9, r9, r0
    subf r11, r9, r3
    divwu r3, r3, r0
    cmpwi r11, 0xa
    bge lbl_fn_80684CC0_00009940
    addi r11, r11, 0x30
    b lbl_fn_80684CC0_00009958
lbl_fn_80684CC0_00009940:
    lhz r9, 0x6(r5)
    addi r10, r11, 0x37
    cmplwi r9, 0x78
    bne lbl_fn_80684CC0_00009954
    addi r10, r11, 0x57
lbl_fn_80684CC0_00009954:
    mr r11, r10
lbl_fn_80684CC0_00009958:
    cmpwi r3, 0x0
    sth r11, -0x2(r6)
    subi r6, r6, 0x2
    addi r7, r7, 0x1
    bne lbl_fn_80684CC0_00009920
    cmplwi r0, 0x8
    bne lbl_fn_80684CC0_00009998
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_fn_80684CC0_00009998
    lhz r3, 0x0(r6)
    cmplwi r3, 0x30
    beq lbl_fn_80684CC0_00009998
    li r3, 0x30
    sthu r3, -0x2(r6)
    addi r7, r7, 0x1
lbl_fn_80684CC0_00009998:
    lbz r3, 0x0(r5)
    cmplwi r3, 0x2
    bne lbl_fn_80684CC0_000099EC
    lwz r3, 0x8(r5)
    cmpwi r8, 0x0
    stw r3, 0xc(r5)
    bne lbl_fn_80684CC0_000099C0
    lbz r3, 0x1(r5)
    cmpwi r3, 0x0
    beq lbl_fn_80684CC0_000099CC
lbl_fn_80684CC0_000099C0:
    lwz r3, 0xc(r5)
    subi r3, r3, 0x1
    stw r3, 0xc(r5)
lbl_fn_80684CC0_000099CC:
    cmplwi r0, 0x10
    bne lbl_fn_80684CC0_000099EC
    lbz r3, 0x3(r5)
    cmpwi r3, 0x0
    beq lbl_fn_80684CC0_000099EC
    lwz r3, 0xc(r5)
    subi r3, r3, 0x2
    stw r3, 0xc(r5)
lbl_fn_80684CC0_000099EC:
    subf r4, r6, r4
    lwz r9, 0xc(r5)
    srwi r3, r4, 31
    add r3, r3, r4
    srawi r3, r3, 1
    add r3, r9, r3
    cmpwi r3, 0x1fd
    ble lbl_fn_80684CC0_00009A14
    li r3, 0x0
    blr
lbl_fn_80684CC0_00009A14:
    li r4, 0x30
    b lbl_fn_80684CC0_00009A24
lbl_fn_80684CC0_00009A1C:
    sthu r4, -0x2(r6)
    addi r7, r7, 0x1
lbl_fn_80684CC0_00009A24:
    lwz r3, 0xc(r5)
    cmpw r7, r3
    blt lbl_fn_80684CC0_00009A1C
    cmplwi r0, 0x10
    bne lbl_fn_80684CC0_00009A54
    lbz r0, 0x3(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80684CC0_00009A54
    lhz r3, 0x6(r5)
    li r0, 0x30
    sth r3, -0x2(r6)
    sthu r0, -0x4(r6)
lbl_fn_80684CC0_00009A54:
    cmpwi r8, 0x0
    beq lbl_fn_80684CC0_00009A68
    li r0, 0x2d
    sthu r0, -0x2(r6)
    b lbl_fn_80684CC0_00009A90
lbl_fn_80684CC0_00009A68:
    lbz r0, 0x1(r5)
    cmplwi r0, 0x1
    bne lbl_fn_80684CC0_00009A80
    li r0, 0x2b
    sthu r0, -0x2(r6)
    b lbl_fn_80684CC0_00009A90
lbl_fn_80684CC0_00009A80:
    cmplwi r0, 0x2
    bne lbl_fn_80684CC0_00009A90
    li r0, 0x20
    sthu r0, -0x2(r6)
lbl_fn_80684CC0_00009A90:
    mr r3, r6
    blr
}

asm void fn_80684F04(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    or. r0, r4, r3
    stmw r22, 0x8(r1)
    li r25, 0x0
    mr r31, r3
    mr r30, r4
    mr r23, r5
    mr r24, r6
    subi r27, r5, 0x2
    li r26, 0x0
    sth r25, -0x2(r5)
    bne lbl_fn_80684F04_00009AFC
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80684F04_00009AFC
    lbz r0, 0x3(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80684F04_00009AF4
    lhz r0, 0x6(r6)
    cmplwi r0, 0x6f
    beq lbl_fn_80684F04_00009AFC
lbl_fn_80684F04_00009AF4:
    mr r3, r27
    b lbl_fn_80684F04_00009D40
lbl_fn_80684F04_00009AFC:
    lhz r0, 0x6(r6)
    cmpwi r0, 0x64
    beq lbl_fn_80684F04_00009B34
    cmpwi r0, 0x69
    beq lbl_fn_80684F04_00009B34
    cmpwi r0, 0x6f
    beq lbl_fn_80684F04_00009B78
    cmpwi r0, 0x75
    beq lbl_fn_80684F04_00009B88
    cmpwi r0, 0x78
    beq lbl_fn_80684F04_00009B98
    cmpwi r0, 0x58
    beq lbl_fn_80684F04_00009B98
    b lbl_fn_80684F04_00009BA4
lbl_fn_80684F04_00009B34:
    li r29, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r29, 0x8000
    li r28, 0xa
    subfc r5, r29, r4
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_fn_80684F04_00009BA4
    lis r0, 0x8000
    xor r0, r3, r0
    or. r0, r4, r0
    beq lbl_fn_80684F04_00009B70
    subfic r30, r4, 0x0
    subfze r31, r3
lbl_fn_80684F04_00009B70:
    li r25, 0x1
    b lbl_fn_80684F04_00009BA4
lbl_fn_80684F04_00009B78:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x8
    b lbl_fn_80684F04_00009BA4
lbl_fn_80684F04_00009B88:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0xa
    b lbl_fn_80684F04_00009BA4
lbl_fn_80684F04_00009B98:
    li r29, 0x0
    stb r29, 0x1(r6)
    li r28, 0x10
lbl_fn_80684F04_00009BA4:
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __mod2u
    mr r22, r4
    mr r3, r31
    mr r4, r30
    mr r5, r29
    mr r6, r28
    bl __div2u
    cmpwi r22, 0xa
    mr r30, r4
    mr r31, r3
    bge lbl_fn_80684F04_00009BE8
    addi r5, r22, 0x30
    b lbl_fn_80684F04_00009BFC
lbl_fn_80684F04_00009BE8:
    lhz r0, 0x6(r24)
    addi r5, r22, 0x37
    cmplwi r0, 0x78
    bne lbl_fn_80684F04_00009BFC
    addi r5, r22, 0x57
lbl_fn_80684F04_00009BFC:
    or. r0, r4, r3
    sthu r5, -0x2(r27)
    addi r26, r26, 0x1
    bne lbl_fn_80684F04_00009BA4
    xori r0, r28, 0x8
    or. r0, r0, r29
    bne lbl_fn_80684F04_00009C3C
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80684F04_00009C3C
    lhz r0, 0x0(r27)
    cmplwi r0, 0x30
    beq lbl_fn_80684F04_00009C3C
    li r0, 0x30
    sthu r0, -0x2(r27)
    addi r26, r26, 0x1
lbl_fn_80684F04_00009C3C:
    lbz r0, 0x0(r24)
    cmplwi r0, 0x2
    bne lbl_fn_80684F04_00009C94
    lwz r0, 0x8(r24)
    cmpwi r25, 0x0
    stw r0, 0xc(r24)
    bne lbl_fn_80684F04_00009C64
    lbz r0, 0x1(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80684F04_00009C70
lbl_fn_80684F04_00009C64:
    lwz r3, 0xc(r24)
    subi r0, r3, 0x1
    stw r0, 0xc(r24)
lbl_fn_80684F04_00009C70:
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_fn_80684F04_00009C94
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80684F04_00009C94
    lwz r3, 0xc(r24)
    subi r0, r3, 0x2
    stw r0, 0xc(r24)
lbl_fn_80684F04_00009C94:
    subf r3, r27, r23
    lwz r4, 0xc(r24)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    add r0, r4, r0
    cmpwi r0, 0x1fd
    ble lbl_fn_80684F04_00009CBC
    li r3, 0x0
    b lbl_fn_80684F04_00009D40
lbl_fn_80684F04_00009CBC:
    li r3, 0x30
    b lbl_fn_80684F04_00009CCC
lbl_fn_80684F04_00009CC4:
    sthu r3, -0x2(r27)
    addi r26, r26, 0x1
lbl_fn_80684F04_00009CCC:
    lwz r0, 0xc(r24)
    cmpw r26, r0
    blt lbl_fn_80684F04_00009CC4
    xori r0, r28, 0x10
    or. r0, r0, r29
    bne lbl_fn_80684F04_00009D00
    lbz r0, 0x3(r24)
    cmpwi r0, 0x0
    beq lbl_fn_80684F04_00009D00
    lhz r3, 0x6(r24)
    li r0, 0x30
    sth r3, -0x2(r27)
    sthu r0, -0x4(r27)
lbl_fn_80684F04_00009D00:
    cmpwi r25, 0x0
    beq lbl_fn_80684F04_00009D14
    li r0, 0x2d
    sthu r0, -0x2(r27)
    b lbl_fn_80684F04_00009D3C
lbl_fn_80684F04_00009D14:
    lbz r0, 0x1(r24)
    cmplwi r0, 0x1
    bne lbl_fn_80684F04_00009D2C
    li r0, 0x2b
    sthu r0, -0x2(r27)
    b lbl_fn_80684F04_00009D3C
lbl_fn_80684F04_00009D2C:
    cmplwi r0, 0x2
    bne lbl_fn_80684F04_00009D3C
    li r0, 0x20
    sthu r0, -0x2(r27)
lbl_fn_80684F04_00009D3C:
    mr r3, r27
lbl_fn_80684F04_00009D40:
    lmw r22, 0x8(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806851C0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    lis r5, lbl_807BB1D0@ha
    stw r0, 0x94(r1)
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    fmr f31, f1
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    mr r30, r4
    stw r29, 0x74(r1)
    mr r29, r3
    stw r28, 0x70(r1)
    lwz r0, 0xc(r4)
    lwz r5, lbl_807BB1D0@l(r5)
    cmpwi r0, 0x1fd
    stfd f1, 0x8(r1)
    lbz r31, 0x0(r5)
    ble lbl_fn_806851C0_00009DA8
    li r3, 0x0
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_00009DA8:
    li r28, 0x0
    li r0, 0x20
    stb r28, 0x10(r1)
    addi r3, r1, 0x10
    addi r4, r1, 0x38
    sth r0, 0x12(r1)
    bl fn_8067C590
    lbz r0, 0x3d(r1)
    cmpwi r0, 0x30
    beq lbl_fn_806851C0_00009DE4
    cmpwi r0, 0x49
    beq lbl_fn_806851C0_00009E74
    cmpwi r0, 0x4e
    beq lbl_fn_806851C0_00009F04
    b lbl_fn_806851C0_00009F94
lbl_fn_806851C0_00009DE4:
    lbz r0, 0x38(r1)
    sth r28, 0x3a(r1)
    extsb. r0, r0
    beq lbl_fn_806851C0_00009E30
    lhz r0, 0x6(r30)
    subi r28, r29, 0xa
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009E18
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    bl fn_80686A64
    b lbl_fn_806851C0_00009E6C
lbl_fn_806851C0_00009E18:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0xa
    bl fn_80686A64
    b lbl_fn_806851C0_00009E6C
lbl_fn_806851C0_00009E30:
    lhz r0, 0x6(r30)
    subi r28, r29, 0x8
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009E58
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x14
    bl fn_80686A64
    b lbl_fn_806851C0_00009E6C
lbl_fn_806851C0_00009E58:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x1c
    bl fn_80686A64
lbl_fn_806851C0_00009E6C:
    mr r3, r28
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_00009E74:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_fn_806851C0_00009EC0
    lhz r0, 0x6(r30)
    subi r28, r29, 0xa
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009EA8
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x24
    bl fn_80686A64
    b lbl_fn_806851C0_00009EFC
lbl_fn_806851C0_00009EA8:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x2e
    bl fn_80686A64
    b lbl_fn_806851C0_00009EFC
lbl_fn_806851C0_00009EC0:
    lhz r0, 0x6(r30)
    subi r28, r29, 0x8
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009EE8
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x38
    bl fn_80686A64
    b lbl_fn_806851C0_00009EFC
lbl_fn_806851C0_00009EE8:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x40
    bl fn_80686A64
lbl_fn_806851C0_00009EFC:
    mr r3, r28
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_00009F04:
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_fn_806851C0_00009F50
    lhz r0, 0x6(r30)
    subi r28, r29, 0xa
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009F38
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x48
    bl fn_80686A64
    b lbl_fn_806851C0_00009F8C
lbl_fn_806851C0_00009F38:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x52
    bl fn_80686A64
    b lbl_fn_806851C0_00009F8C
lbl_fn_806851C0_00009F50:
    lhz r0, 0x6(r30)
    subi r28, r29, 0x8
    cmplwi r0, 0x41
    bne lbl_fn_806851C0_00009F78
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x5c
    bl fn_80686A64
    b lbl_fn_806851C0_00009F8C
lbl_fn_806851C0_00009F78:
    lis r4, lbl_807BBA98@ha
    mr r3, r28
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x64
    bl fn_80686A64
lbl_fn_806851C0_00009F8C:
    mr r3, r28
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_00009F94:
    lbz r0, 0x9(r1)
    li r8, 0x1
    lbz r3, 0x8(r1)
    li r7, 0x64
    slwi r0, r0, 17
    stb r8, 0x28(r1)
    rlwimi r0, r3, 25, 0, 6
    mr r4, r29
    srwi r5, r0, 21
    stb r8, 0x29(r1)
    neg r0, r5
    or r0, r0, r5
    stb r28, 0x2a(r1)
    srawi r3, r0, 31
    subi r0, r5, 0x3ff
    stb r28, 0x2b(r1)
    and r3, r0, r3
    addi r5, r1, 0x18
    lwz r6, 0x28(r1)
    stb r28, 0x2c(r1)
    sth r7, 0x2e(r1)
    lwz r0, 0x2c(r1)
    stw r28, 0x30(r1)
    stw r8, 0x34(r1)
    stw r6, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r28, 0x20(r1)
    stw r8, 0x24(r1)
    bl fn_80684CC0
    lhz r0, 0x6(r30)
    cmplwi r0, 0x61
    bne lbl_fn_806851C0_0000A020
    li r0, 0x70
    sthu r0, -0x2(r3)
    b lbl_fn_806851C0_0000A028
lbl_fn_806851C0_0000A020:
    li r0, 0x50
    sthu r0, -0x2(r3)
lbl_fn_806851C0_0000A028:
    lwz r0, 0xc(r30)
    addi r8, r1, 0x8
    slwi r4, r0, 2
    addi r9, r4, 0xb
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_fn_806851C0_0000A0D8
lbl_fn_806851C0_0000A044:
    cmpwi r9, 0x40
    bge lbl_fn_806851C0_0000A0C4
    srawi r4, r9, 3
    subi r0, r9, 0x4
    add r7, r8, r4
    clrlwi r6, r9, 29
    clrrwi r4, r9, 3
    clrrwi r0, r0, 3
    lbz r5, 0x0(r7)
    subfic r6, r6, 0x7
    cmpw r4, r0
    sraw r0, r5, r6
    clrlwi r4, r0, 24
    beq lbl_fn_806851C0_0000A094
    lbz r0, -0x1(r7)
    slwi r0, r0, 8
    sraw r0, r0, r6
    clrlwi r0, r0, 24
    or r0, r4, r0
    clrlwi r4, r0, 24
lbl_fn_806851C0_0000A094:
    clrlwi r4, r4, 28
    cmplwi r4, 0xa
    bge lbl_fn_806851C0_0000A0A8
    addi r4, r4, 0x30
    b lbl_fn_806851C0_0000A0C8
lbl_fn_806851C0_0000A0A8:
    lhz r0, 0x6(r30)
    cmplwi r0, 0x61
    bne lbl_fn_806851C0_0000A0BC
    addi r4, r4, 0x57
    b lbl_fn_806851C0_0000A0C8
lbl_fn_806851C0_0000A0BC:
    addi r4, r4, 0x37
    b lbl_fn_806851C0_0000A0C8
lbl_fn_806851C0_0000A0C4:
    li r4, 0x30
lbl_fn_806851C0_0000A0C8:
    clrlwi r0, r4, 24
    sthu r0, -0x2(r3)
    subi r9, r9, 0x4
    bdnz lbl_fn_806851C0_0000A044
lbl_fn_806851C0_0000A0D8:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806851C0_0000A0F0
    lbz r0, 0x3(r30)
    cmpwi r0, 0x0
    beq lbl_fn_806851C0_0000A0F4
lbl_fn_806851C0_0000A0F0:
    sthu r31, -0x2(r3)
lbl_fn_806851C0_0000A0F4:
    fabs f1, f31
    lfd f0, lbl_80888AE0
    fcmpu cr0, f0, f1
    beq lbl_fn_806851C0_0000A110
    li r0, 0x31
    sthu r0, -0x2(r3)
    b lbl_fn_806851C0_0000A118
lbl_fn_806851C0_0000A110:
    li r0, 0x30
    sthu r0, -0x2(r3)
lbl_fn_806851C0_0000A118:
    lhz r0, 0x6(r30)
    cmplwi r0, 0x61
    bne lbl_fn_806851C0_0000A130
    li r0, 0x78
    sthu r0, -0x2(r3)
    b lbl_fn_806851C0_0000A138
lbl_fn_806851C0_0000A130:
    li r0, 0x58
    sthu r0, -0x2(r3)
lbl_fn_806851C0_0000A138:
    li r0, 0x30
    sthu r0, -0x2(r3)
    lbz r0, 0x38(r1)
    extsb. r0, r0
    beq lbl_fn_806851C0_0000A158
    li r0, 0x2d
    sthu r0, -0x2(r3)
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_0000A158:
    lbz r0, 0x1(r30)
    cmplwi r0, 0x1
    bne lbl_fn_806851C0_0000A170
    li r0, 0x2b
    sthu r0, -0x2(r3)
    b lbl_fn_806851C0_0000A180
lbl_fn_806851C0_0000A170:
    cmplwi r0, 0x2
    bne lbl_fn_806851C0_0000A180
    li r0, 0x20
    sthu r0, -0x2(r3)
lbl_fn_806851C0_0000A180:
    lwz r0, 0x94(r1)
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    lwz r29, 0x74(r1)
    lwz r28, 0x70(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80685614(void)
{
    nofralloc
    cmpwi r4, 0x0
    bge lbl_fn_80685614_0000A1CC
lbl_fn_80685614_0000A1B0:
    li r5, 0x0
    li r4, 0x1
    li r0, 0x30
    sth r5, 0x2(r3)
    stb r4, 0x4(r3)
    stb r0, 0x5(r3)
    blr
lbl_fn_80685614_0000A1CC:
    lbz r7, 0x4(r3)
    cmpw r4, r7
    bgelr
    add r6, r3, r4
    lbz r5, 0x5(r6)
    addi r8, r6, 0x5
    subi r0, r5, 0x30
    extsb r6, r0
    cmpwi r6, 0x5
    bne lbl_fn_80685614_0000A230
    add r5, r3, r7
    addi r5, r5, 0x5
lbl_fn_80685614_0000A1FC:
    subi r5, r5, 0x1
    cmplw r5, r8
    ble lbl_fn_80685614_0000A214
    lbz r0, 0x0(r5)
    cmpwi r0, 0x30
    beq lbl_fn_80685614_0000A1FC
lbl_fn_80685614_0000A214:
    cmplw r5, r8
    bne lbl_fn_80685614_0000A228
    lbz r0, -0x1(r8)
    clrlwi r5, r0, 31
    b lbl_fn_80685614_0000A244
lbl_fn_80685614_0000A228:
    li r5, 0x1
    b lbl_fn_80685614_0000A244
lbl_fn_80685614_0000A230:
    xori r0, r6, 0x5
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi r5, r0, 31
lbl_fn_80685614_0000A244:
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_fn_80685614_0000A298
lbl_fn_80685614_0000A250:
    lbzu r0, -0x1(r8)
    add r5, r0, r5
    subi r0, r5, 0x30
    extsb r6, r0
    xori r0, r6, 0x9
    srawi r5, r0, 1
    and r0, r0, r6
    subf r0, r0, r5
    srwi. r5, r0, 31
    bne lbl_fn_80685614_0000A280
    cmpwi r6, 0x0
    bne lbl_fn_80685614_0000A288
lbl_fn_80685614_0000A280:
    subi r4, r4, 0x1
    b lbl_fn_80685614_0000A294
lbl_fn_80685614_0000A288:
    addi r0, r6, 0x30
    stb r0, 0x0(r8)
    b lbl_fn_80685614_0000A298
lbl_fn_80685614_0000A294:
    bdnz lbl_fn_80685614_0000A250
lbl_fn_80685614_0000A298:
    cmpwi r5, 0x0
    beq lbl_fn_80685614_0000A2C0
    lha r5, 0x2(r3)
    li r4, 0x1
    li r0, 0x31
    stb r4, 0x4(r3)
    addi r4, r5, 0x1
    sth r4, 0x2(r3)
    stb r0, 0x5(r3)
    blr
lbl_fn_80685614_0000A2C0:
    cmpwi r4, 0x0
    beq lbl_fn_80685614_0000A1B0
    stb r4, 0x4(r3)
    blr
}

asm void fn_8068573C(void)
{
    nofralloc
    stwu r1, -0x250(r1)
    mflr r0
    lis r5, lbl_807BB1D0@ha
    stw r0, 0x254(r1)
    stfd f31, 0x248(r1)
    fmr f31, f1
    stw r31, 0x244(r1)
    stw r30, 0x240(r1)
    stw r29, 0x23c(r1)
    mr r29, r4
    stw r28, 0x238(r1)
    mr r28, r3
    lwz r0, 0xc(r4)
    lwz r5, lbl_807BB1D0@l(r5)
    cmpwi r0, 0x1fd
    lbz r30, 0x0(r5)
    ble lbl_fn_8068573C_0000A31C
    li r3, 0x0
    b lbl_fn_8068573C_0000AA3C
lbl_fn_8068573C_0000A31C:
    li r3, 0x0
    li r0, 0x20
    stb r3, 0x8(r1)
    addi r3, r1, 0x8
    addi r4, r1, 0xc
    sth r0, 0xa(r1)
    bl fn_8067C590
    lbz r0, 0x10(r1)
    addi r5, r1, 0x11
    add r5, r5, r0
    b lbl_fn_8068573C_0000A360
lbl_fn_8068573C_0000A348:
    lbz r4, 0x10(r1)
    lha r3, 0xe(r1)
    subi r0, r4, 0x1
    stb r0, 0x10(r1)
    addi r0, r3, 0x1
    sth r0, 0xe(r1)
lbl_fn_8068573C_0000A360:
    lbz r0, 0x10(r1)
    cmplwi r0, 0x1
    ble lbl_fn_8068573C_0000A378
    lbzu r0, -0x1(r5)
    cmpwi r0, 0x30
    beq lbl_fn_8068573C_0000A348
lbl_fn_8068573C_0000A378:
    lbz r0, 0x11(r1)
    cmpwi r0, 0x30
    beq lbl_fn_8068573C_0000A398
    cmpwi r0, 0x49
    beq lbl_fn_8068573C_0000A3A4
    cmpwi r0, 0x4e
    beq lbl_fn_8068573C_0000A48C
    b lbl_fn_8068573C_0000A574
lbl_fn_8068573C_0000A398:
    li r0, 0x0
    sth r0, 0xe(r1)
    b lbl_fn_8068573C_0000A574
lbl_fn_8068573C_0000A3A4:
    lfd f0, lbl_80888AE0
    fcmpo cr0, f31, f0
    bge lbl_fn_8068573C_0000A41C
    lhz r0, 0x6(r29)
    subi r31, r28, 0xa
    cmplwi r0, 0x100
    blt lbl_fn_8068573C_0000A3C8
    li r0, 0x0
    b lbl_fn_8068573C_0000A3E4
lbl_fn_8068573C_0000A3C8:
    lis r3, lbl_807BB380@ha
    clrlslwi r0, r0, 16, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x14(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_fn_8068573C_0000A3E4:
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A404
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x24
    bl fn_80686A64
    b lbl_fn_8068573C_0000A484
lbl_fn_8068573C_0000A404:
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x2e
    bl fn_80686A64
    b lbl_fn_8068573C_0000A484
lbl_fn_8068573C_0000A41C:
    lhz r0, 0x6(r29)
    subi r31, r28, 0x8
    cmplwi r0, 0x100
    blt lbl_fn_8068573C_0000A434
    li r0, 0x0
    b lbl_fn_8068573C_0000A450
lbl_fn_8068573C_0000A434:
    lis r3, lbl_807BB380@ha
    clrlslwi r0, r0, 16, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x14(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_fn_8068573C_0000A450:
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A470
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x38
    bl fn_80686A64
    b lbl_fn_8068573C_0000A484
lbl_fn_8068573C_0000A470:
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x40
    bl fn_80686A64
lbl_fn_8068573C_0000A484:
    mr r3, r31
    b lbl_fn_8068573C_0000AA3C
lbl_fn_8068573C_0000A48C:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_fn_8068573C_0000A504
    lhz r0, 0x6(r29)
    subi r31, r28, 0xa
    cmplwi r0, 0x100
    blt lbl_fn_8068573C_0000A4B0
    li r0, 0x0
    b lbl_fn_8068573C_0000A4CC
lbl_fn_8068573C_0000A4B0:
    lis r3, lbl_807BB380@ha
    clrlslwi r0, r0, 16, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x14(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_fn_8068573C_0000A4CC:
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A4EC
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x48
    bl fn_80686A64
    b lbl_fn_8068573C_0000A56C
lbl_fn_8068573C_0000A4EC:
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x52
    bl fn_80686A64
    b lbl_fn_8068573C_0000A56C
lbl_fn_8068573C_0000A504:
    lhz r0, 0x6(r29)
    subi r31, r28, 0x8
    cmplwi r0, 0x100
    blt lbl_fn_8068573C_0000A51C
    li r0, 0x0
    b lbl_fn_8068573C_0000A538
lbl_fn_8068573C_0000A51C:
    lis r3, lbl_807BB380@ha
    clrlslwi r0, r0, 16, 1
    addi r3, r3, lbl_807BB380@l
    lwz r3, 0x38(r3)
    lwz r3, 0x14(r3)
    lhzx r0, r3, r0
    rlwinm r0, r0, 0, 22, 22
lbl_fn_8068573C_0000A538:
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A558
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x5c
    bl fn_80686A64
    b lbl_fn_8068573C_0000A56C
lbl_fn_8068573C_0000A558:
    lis r4, lbl_807BBA98@ha
    mr r3, r31
    addi r4, r4, lbl_807BBA98@l
    addi r4, r4, 0x64
    bl fn_80686A64
lbl_fn_8068573C_0000A56C:
    mr r3, r31
    b lbl_fn_8068573C_0000AA3C
lbl_fn_8068573C_0000A574:
    lbz r3, 0x10(r1)
    li r0, 0x0
    lha r4, 0xe(r1)
    addi r31, r1, 0x237
    subi r3, r3, 0x1
    stb r0, 0x237(r1)
    extsh r0, r3
    add r0, r4, r0
    sth r0, 0xe(r1)
    lhz r0, 0x6(r29)
    cmpwi r0, 0x67
    beq lbl_fn_8068573C_0000A5D0
    cmpwi r0, 0x47
    beq lbl_fn_8068573C_0000A5D0
    cmpwi r0, 0x65
    beq lbl_fn_8068573C_0000A688
    cmpwi r0, 0x45
    beq lbl_fn_8068573C_0000A688
    cmpwi r0, 0x66
    beq lbl_fn_8068573C_0000A7F0
    cmpwi r0, 0x46
    beq lbl_fn_8068573C_0000A7F0
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A5D0:
    lwz r4, 0xc(r29)
    lbz r0, 0x10(r1)
    cmpw r0, r4
    ble lbl_fn_8068573C_0000A5E8
    addi r3, r1, 0xc
    bl fn_80685614
lbl_fn_8068573C_0000A5E8:
    lha r4, 0xe(r1)
    cmpwi r4, -0x4
    blt lbl_fn_8068573C_0000A600
    lwz r3, 0xc(r29)
    cmpw r4, r3
    blt lbl_fn_8068573C_0000A64C
lbl_fn_8068573C_0000A600:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A61C
    lwz r3, 0xc(r29)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
    b lbl_fn_8068573C_0000A628
lbl_fn_8068573C_0000A61C:
    lbz r3, 0x10(r1)
    subi r0, r3, 0x1
    stw r0, 0xc(r29)
lbl_fn_8068573C_0000A628:
    lhz r0, 0x6(r29)
    cmplwi r0, 0x67
    bne lbl_fn_8068573C_0000A640
    li r0, 0x65
    sth r0, 0x6(r29)
    b lbl_fn_8068573C_0000A688
lbl_fn_8068573C_0000A640:
    li r0, 0x45
    sth r0, 0x6(r29)
    b lbl_fn_8068573C_0000A688
lbl_fn_8068573C_0000A64C:
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A668
    addi r0, r4, 0x1
    subf r0, r0, r3
    stw r0, 0xc(r29)
    b lbl_fn_8068573C_0000A7F0
lbl_fn_8068573C_0000A668:
    lbz r0, 0x10(r1)
    addi r3, r4, 0x1
    subf. r0, r3, r0
    stw r0, 0xc(r29)
    bge lbl_fn_8068573C_0000A7F0
    li r0, 0x0
    stw r0, 0xc(r29)
    b lbl_fn_8068573C_0000A7F0
lbl_fn_8068573C_0000A688:
    lwz r3, 0xc(r29)
    lbz r0, 0x10(r1)
    addi r4, r3, 0x1
    cmpw r0, r4
    ble lbl_fn_8068573C_0000A6A4
    addi r3, r1, 0xc
    bl fn_80685614
lbl_fn_8068573C_0000A6A4:
    lha r6, 0xe(r1)
    li r8, 0x2b
    cmpwi r6, 0x0
    bge lbl_fn_8068573C_0000A6BC
    neg r6, r6
    li r8, 0x2d
lbl_fn_8068573C_0000A6BC:
    lis r3, 0x6666
    li r7, 0x0
    addi r5, r3, 0x6667
    b lbl_fn_8068573C_0000A700
lbl_fn_8068573C_0000A6CC:
    mulhw r0, r5, r6
    addi r7, r7, 0x1
    srawi r3, r0, 2
    srwi r4, r3, 31
    srawi r0, r0, 2
    add r3, r3, r4
    mulli r4, r3, 0xa
    srwi r3, r0, 31
    subf r4, r4, r6
    add r6, r0, r3
    addi r0, r4, 0x30
    stb r0, -0x1(r31)
    subi r31, r31, 0x1
lbl_fn_8068573C_0000A700:
    cmpwi r6, 0x0
    bne lbl_fn_8068573C_0000A6CC
    cmpwi r7, 0x2
    blt lbl_fn_8068573C_0000A6CC
    stb r8, -0x1(r31)
    addi r0, r1, 0x38
    lhz r3, 0x6(r29)
    stbu r3, -0x2(r31)
    lwz r3, 0xc(r29)
    subf r0, r31, r0
    add r0, r0, r3
    cmpwi r0, 0x1fd
    ble lbl_fn_8068573C_0000A73C
    li r3, 0x0
    b lbl_fn_8068573C_0000AA3C
lbl_fn_8068573C_0000A73C:
    lbz r4, 0x10(r1)
    addi r0, r3, 0x1
    cmpw r4, r0
    bge lbl_fn_8068573C_0000A768
    addi r3, r3, 0x2
    li r0, 0x30
    subf r3, r4, r3
    b lbl_fn_8068573C_0000A760
lbl_fn_8068573C_0000A75C:
    stbu r0, -0x1(r31)
lbl_fn_8068573C_0000A760:
    subic. r3, r3, 0x1
    bne lbl_fn_8068573C_0000A75C
lbl_fn_8068573C_0000A768:
    lbz r3, 0x10(r1)
    addi r4, r1, 0x11
    add r4, r4, r3
    b lbl_fn_8068573C_0000A780
lbl_fn_8068573C_0000A778:
    lbzu r0, -0x1(r4)
    stbu r0, -0x1(r31)
lbl_fn_8068573C_0000A780:
    subic. r3, r3, 0x1
    bne lbl_fn_8068573C_0000A778
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8068573C_0000A7A0
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A7A4
lbl_fn_8068573C_0000A7A0:
    stbu r30, -0x1(r31)
lbl_fn_8068573C_0000A7A4:
    lbz r0, 0x11(r1)
    stbu r0, -0x1(r31)
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_fn_8068573C_0000A7C4
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A7C4:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8068573C_0000A7DC
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A7DC:
    cmplwi r0, 0x2
    bne lbl_fn_8068573C_0000AA0C
    li r0, 0x20
    stbu r0, -0x1(r31)
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A7F0:
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_fn_8068573C_0000A808
    li r8, 0x0
lbl_fn_8068573C_0000A808:
    lwz r0, 0xc(r29)
    cmpw r8, r0
    ble lbl_fn_8068573C_0000A83C
    subf r0, r0, r8
    addi r3, r1, 0xc
    subf r4, r0, r4
    bl fn_80685614
    lbz r4, 0x10(r1)
    lha r5, 0xe(r1)
    subf r3, r5, r4
    subic. r8, r3, 0x1
    bge lbl_fn_8068573C_0000A83C
    li r8, 0x0
lbl_fn_8068573C_0000A83C:
    addic. r7, r5, 0x1
    bge lbl_fn_8068573C_0000A848
    li r7, 0x0
lbl_fn_8068573C_0000A848:
    add r0, r7, r8
    cmpwi r0, 0x1fd
    ble lbl_fn_8068573C_0000A85C
    li r3, 0x0
    b lbl_fn_8068573C_0000AA3C
lbl_fn_8068573C_0000A85C:
    addi r6, r1, 0x11
    li r5, 0x0
    add r6, r6, r4
    li r3, 0x30
    b lbl_fn_8068573C_0000A878
lbl_fn_8068573C_0000A870:
    stbu r3, -0x1(r31)
    addi r5, r5, 0x1
lbl_fn_8068573C_0000A878:
    lwz r0, 0xc(r29)
    subf r0, r8, r0
    cmpw r5, r0
    blt lbl_fn_8068573C_0000A870
    li r3, 0x0
    b lbl_fn_8068573C_0000A89C
lbl_fn_8068573C_0000A890:
    lbzu r0, -0x1(r6)
    addi r3, r3, 0x1
    stbu r0, -0x1(r31)
lbl_fn_8068573C_0000A89C:
    cmpw r3, r8
    bge lbl_fn_8068573C_0000A8B0
    lbz r0, 0x10(r1)
    cmpw r3, r0
    blt lbl_fn_8068573C_0000A890
lbl_fn_8068573C_0000A8B0:
    cmpw r3, r8
    subf r3, r3, r8
    li r4, 0x30
    bge lbl_fn_8068573C_0000A904
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_8068573C_0000A8F8
lbl_fn_8068573C_0000A8CC:
    stb r4, -0x1(r31)
    stb r4, -0x2(r31)
    stb r4, -0x3(r31)
    stb r4, -0x4(r31)
    stb r4, -0x5(r31)
    stb r4, -0x6(r31)
    stb r4, -0x7(r31)
    stbu r4, -0x8(r31)
    bdnz lbl_fn_8068573C_0000A8CC
    andi. r3, r3, 0x7
    beq lbl_fn_8068573C_0000A904
lbl_fn_8068573C_0000A8F8:
    mtctr r3
lbl_fn_8068573C_0000A8FC:
    stbu r4, -0x1(r31)
    bdnz lbl_fn_8068573C_0000A8FC
lbl_fn_8068573C_0000A904:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    bne lbl_fn_8068573C_0000A91C
    lbz r0, 0x3(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068573C_0000A920
lbl_fn_8068573C_0000A91C:
    stbu r30, -0x1(r31)
lbl_fn_8068573C_0000A920:
    cmpwi r7, 0x0
    beq lbl_fn_8068573C_0000A9C4
    li r4, 0x0
    li r3, 0x30
    b lbl_fn_8068573C_0000A93C
lbl_fn_8068573C_0000A934:
    stbu r3, -0x1(r31)
    addi r4, r4, 0x1
lbl_fn_8068573C_0000A93C:
    lbz r0, 0x10(r1)
    subf r0, r0, r7
    cmpw r4, r0
    blt lbl_fn_8068573C_0000A934
    cmpw r4, r7
    subf r3, r4, r7
    bge lbl_fn_8068573C_0000A9CC
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_8068573C_0000A9B0
lbl_fn_8068573C_0000A964:
    lbz r0, -0x1(r6)
    stb r0, -0x1(r31)
    lbz r0, -0x2(r6)
    stb r0, -0x2(r31)
    lbz r0, -0x3(r6)
    stb r0, -0x3(r31)
    lbz r0, -0x4(r6)
    stb r0, -0x4(r31)
    lbz r0, -0x5(r6)
    stb r0, -0x5(r31)
    lbz r0, -0x6(r6)
    stb r0, -0x6(r31)
    lbz r0, -0x7(r6)
    stb r0, -0x7(r31)
    lbzu r0, -0x8(r6)
    stbu r0, -0x8(r31)
    bdnz lbl_fn_8068573C_0000A964
    andi. r3, r3, 0x7
    beq lbl_fn_8068573C_0000A9CC
lbl_fn_8068573C_0000A9B0:
    mtctr r3
lbl_fn_8068573C_0000A9B4:
    lbzu r0, -0x1(r6)
    stbu r0, -0x1(r31)
    bdnz lbl_fn_8068573C_0000A9B4
    b lbl_fn_8068573C_0000A9CC
lbl_fn_8068573C_0000A9C4:
    li r0, 0x30
    stbu r0, -0x1(r31)
lbl_fn_8068573C_0000A9CC:
    lbz r0, 0xc(r1)
    extsb. r0, r0
    beq lbl_fn_8068573C_0000A9E4
    li r0, 0x2d
    stbu r0, -0x1(r31)
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A9E4:
    lbz r0, 0x1(r29)
    cmplwi r0, 0x1
    bne lbl_fn_8068573C_0000A9FC
    li r0, 0x2b
    stbu r0, -0x1(r31)
    b lbl_fn_8068573C_0000AA0C
lbl_fn_8068573C_0000A9FC:
    cmplwi r0, 0x2
    bne lbl_fn_8068573C_0000AA0C
    li r0, 0x20
    stbu r0, -0x1(r31)
lbl_fn_8068573C_0000AA0C:
    mr r3, r31
    bl strlen
    slwi r0, r3, 1
    mr r3, r31
    subf r4, r0, r28
    subi r28, r4, 0x2
    bl strlen
    mr r5, r3
    mr r3, r28
    mr r4, r31
    bl fn_8067DFA0
    mr r3, r28
lbl_fn_8068573C_0000AA3C:
    lwz r0, 0x254(r1)
    lfd f31, 0x248(r1)
    lwz r31, 0x244(r1)
    lwz r30, 0x240(r1)
    lwz r29, 0x23c(r1)
    lwz r28, 0x238(r1)
    mtlr r0
    addi r1, r1, 0x250
    blr
}

asm void fn_80685ECC(void)
{
    nofralloc
    stwu r1, -0x4d0(r1)
    mflr r0
    stw r0, 0x4d4(r1)
    stmw r14, 0x488(r1)
    li r19, 0x20
    lis r17, lbl_807BBA98@ha
    mr r20, r3
    mr r21, r4
    mr r30, r5
    mr r22, r6
    mr r23, r7
    addi r17, r17, lbl_807BBA98@l
    addi r16, r1, 0x47e
    li r31, 0x0
    lis r18, lbl_80765EA0@ha
    lis r15, jumptable_807BB948@ha
    li r14, 0x25
    sth r19, 0xc(r1)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000AAAC:
    mr r3, r30
    li r4, 0x25
    bl fn_80686B64
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_80685ECC_0000AB00
    mr r3, r30
    bl fn_80686A48
    cmpwi r3, 0x0
    mr r5, r3
    add r31, r31, r3
    beq lbl_fn_80685ECC_0000B3D4
    mr r12, r20
    mr r3, r21
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B3D4
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000AB00:
    subf r3, r30, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi. r5, r0, 1
    add r31, r31, r5
    beq lbl_fn_80685ECC_0000AB3C
    mr r12, r20
    mr r3, r21
    mr r4, r30
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000AB3C
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000AB3C:
    mr r3, r29
    mr r4, r22
    addi r5, r1, 0x70
    bl fn_80684730
    lhz r4, 0x76(r1)
    mr r30, r3
    subi r0, r4, 0x25
    cmplwi r0, 0x53
    bgt lbl_fn_80685ECC_0000B1F0
    addi r3, r15, jumptable_807BB948@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80685ECC_0000AB94
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AC1C
lbl_fn_80685ECC_0000AB94:
    cmplwi r0, 0x4
    bne lbl_fn_80685ECC_0000ABB4
    mr r3, r22
    li r4, 0x2
    bl __va_arg
    lwz r27, 0x0(r3)
    lwz r26, 0x4(r3)
    b lbl_fn_80685ECC_0000AC1C
lbl_fn_80685ECC_0000ABB4:
    cmplwi r0, 0x6
    bne lbl_fn_80685ECC_0000ABD4
    mr r3, r22
    li r4, 0x2
    bl __va_arg
    lwz r27, 0x0(r3)
    lwz r26, 0x4(r3)
    b lbl_fn_80685ECC_0000AC1C
lbl_fn_80685ECC_0000ABD4:
    cmplwi r0, 0x7
    bne lbl_fn_80685ECC_0000ABF0
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AC1C
lbl_fn_80685ECC_0000ABF0:
    cmplwi r0, 0x8
    bne lbl_fn_80685ECC_0000AC0C
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AC1C
lbl_fn_80685ECC_0000AC0C:
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
lbl_fn_80685ECC_0000AC1C:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80685ECC_0000AC2C
    extsh r28, r28
lbl_fn_80685ECC_0000AC2C:
    cmplwi r0, 0x4
    beq lbl_fn_80685ECC_0000AC3C
    cmplwi r0, 0x6
    bne lbl_fn_80685ECC_0000AC80
lbl_fn_80685ECC_0000AC3C:
    lwz r9, 0x70(r1)
    mr r4, r26
    lwz r8, 0x74(r1)
    mr r3, r27
    lwz r7, 0x78(r1)
    addi r5, r1, 0x480
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x60
    stw r9, 0x60(r1)
    stw r8, 0x64(r1)
    stw r7, 0x68(r1)
    stw r0, 0x6c(r1)
    bl fn_80684F04
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
    b lbl_fn_80685ECC_0000ACBC
lbl_fn_80685ECC_0000AC80:
    lwz r8, 0x70(r1)
    mr r3, r28
    lwz r7, 0x74(r1)
    addi r4, r1, 0x480
    lwz r6, 0x78(r1)
    addi r5, r1, 0x50
    lwz r0, 0x7c(r1)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r0, 0x5c(r1)
    bl fn_80684CC0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
lbl_fn_80685ECC_0000ACBC:
    subf r3, r25, r16
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r24, r0, 1
    b lbl_fn_80685ECC_0000B234
    lbz r0, 0x74(r1)
    cmplwi r0, 0x3
    bne lbl_fn_80685ECC_0000ACF0
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AD78
lbl_fn_80685ECC_0000ACF0:
    cmplwi r0, 0x4
    bne lbl_fn_80685ECC_0000AD10
    mr r3, r22
    li r4, 0x2
    bl __va_arg
    lwz r27, 0x0(r3)
    lwz r26, 0x4(r3)
    b lbl_fn_80685ECC_0000AD78
lbl_fn_80685ECC_0000AD10:
    cmplwi r0, 0x6
    bne lbl_fn_80685ECC_0000AD30
    mr r3, r22
    li r4, 0x2
    bl __va_arg
    lwz r27, 0x0(r3)
    lwz r26, 0x4(r3)
    b lbl_fn_80685ECC_0000AD78
lbl_fn_80685ECC_0000AD30:
    cmplwi r0, 0x7
    bne lbl_fn_80685ECC_0000AD4C
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AD78
lbl_fn_80685ECC_0000AD4C:
    cmplwi r0, 0x8
    bne lbl_fn_80685ECC_0000AD68
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
    b lbl_fn_80685ECC_0000AD78
lbl_fn_80685ECC_0000AD68:
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r28, 0x0(r3)
lbl_fn_80685ECC_0000AD78:
    lbz r0, 0x74(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80685ECC_0000AD88
    clrlwi r28, r28, 16
lbl_fn_80685ECC_0000AD88:
    cmplwi r0, 0x4
    beq lbl_fn_80685ECC_0000AD98
    cmplwi r0, 0x6
    bne lbl_fn_80685ECC_0000ADDC
lbl_fn_80685ECC_0000AD98:
    lwz r9, 0x70(r1)
    mr r4, r26
    lwz r8, 0x74(r1)
    mr r3, r27
    lwz r7, 0x78(r1)
    addi r5, r1, 0x480
    lwz r0, 0x7c(r1)
    addi r6, r1, 0x40
    stw r9, 0x40(r1)
    stw r8, 0x44(r1)
    stw r7, 0x48(r1)
    stw r0, 0x4c(r1)
    bl fn_80684F04
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
    b lbl_fn_80685ECC_0000AE18
lbl_fn_80685ECC_0000ADDC:
    lwz r8, 0x70(r1)
    mr r3, r28
    lwz r7, 0x74(r1)
    addi r4, r1, 0x480
    lwz r6, 0x78(r1)
    addi r5, r1, 0x30
    lwz r0, 0x7c(r1)
    stw r8, 0x30(r1)
    stw r7, 0x34(r1)
    stw r6, 0x38(r1)
    stw r0, 0x3c(r1)
    bl fn_80684CC0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
lbl_fn_80685ECC_0000AE18:
    subf r3, r25, r16
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r24, r0, 1
    b lbl_fn_80685ECC_0000B234
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_fn_80685ECC_0000AE4C
    mr r3, r22
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_fn_80685ECC_0000AE5C
lbl_fn_80685ECC_0000AE4C:
    mr r3, r22
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_fn_80685ECC_0000AE5C:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x480
    lwz r6, 0x74(r1)
    addi r4, r1, 0x20
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x20(r1)
    stw r6, 0x24(r1)
    stw r5, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_8068573C
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
    subf r3, r3, r16
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r24, r0, 1
    b lbl_fn_80685ECC_0000B234
    lbz r0, 0x74(r1)
    cmplwi r0, 0x9
    bne lbl_fn_80685ECC_0000AEC8
    mr r3, r22
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
    b lbl_fn_80685ECC_0000AED8
lbl_fn_80685ECC_0000AEC8:
    mr r3, r22
    li r4, 0x3
    bl __va_arg
    lfd f1, 0x0(r3)
lbl_fn_80685ECC_0000AED8:
    lwz r7, 0x70(r1)
    addi r3, r1, 0x480
    lwz r6, 0x74(r1)
    addi r4, r1, 0x10
    lwz r5, 0x78(r1)
    lwz r0, 0x7c(r1)
    stw r7, 0x10(r1)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r0, 0x1c(r1)
    bl fn_806851C0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_80685ECC_0000B1F0
    subf r3, r3, r16
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r24, r0, 1
    b lbl_fn_80685ECC_0000B234
    lbz r0, 0x74(r1)
    cmplwi r0, 0x5
    bne lbl_fn_80685ECC_0000AFF8
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    cmpwi r23, 0x0
    lwz r25, 0x0(r3)
    beq lbl_fn_80685ECC_0000AF68
    cmpwi r25, 0x0
    bne lbl_fn_80685ECC_0000AF68
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000AF68:
    cmpwi r25, 0x0
    bne lbl_fn_80685ECC_0000AF74
    addi r25, r17, 0x6c
lbl_fn_80685ECC_0000AF74:
    lbz r0, 0x73(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000AFAC
    lbz r0, 0x72(r1)
    lhz r3, 0x0(r25)
    addi r25, r25, 0x2
    cmpwi r0, 0x0
    clrlwi r24, r3, 24
    beq lbl_fn_80685ECC_0000B234
    lwz r0, 0x7c(r1)
    cmpw r24, r0
    ble lbl_fn_80685ECC_0000B234
    mr r24, r0
    b lbl_fn_80685ECC_0000B234
lbl_fn_80685ECC_0000AFAC:
    lbz r0, 0x72(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000AFE8
    lwz r24, 0x7c(r1)
    mr r3, r25
    li r4, 0x0
    mr r5, r24
    bl fn_806846D4
    cmpwi r3, 0x0
    beq lbl_fn_80685ECC_0000B234
    subf r3, r25, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r24, r0, 1
    b lbl_fn_80685ECC_0000B234
lbl_fn_80685ECC_0000AFE8:
    mr r3, r25
    bl fn_80686A48
    mr r24, r3
    b lbl_fn_80685ECC_0000B234
lbl_fn_80685ECC_0000AFF8:
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    cmpwi r23, 0x0
    lwz r24, 0x0(r3)
    beq lbl_fn_80685ECC_0000B030
    cmpwi r24, 0x0
    bne lbl_fn_80685ECC_0000B030
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B030:
    cmpwi r24, 0x0
    bne lbl_fn_80685ECC_0000B03C
    addi r24, r18, lbl_80765EA0@l
lbl_fn_80685ECC_0000B03C:
    lbz r0, 0x73(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000B070
    lbz r0, 0x72(r1)
    lhz r3, 0x0(r25)
    cmpwi r0, 0x0
    clrlwi r25, r3, 24
    beq lbl_fn_80685ECC_0000B0AC
    lwz r0, 0x7c(r1)
    cmpw r25, r0
    ble lbl_fn_80685ECC_0000B0AC
    mr r25, r0
    b lbl_fn_80685ECC_0000B0AC
lbl_fn_80685ECC_0000B070:
    lbz r0, 0x72(r1)
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000B0A0
    lwz r25, 0x7c(r1)
    mr r3, r24
    li r4, 0x0
    mr r5, r25
    bl memchr
    cmpwi r3, 0x0
    beq lbl_fn_80685ECC_0000B0AC
    subf r25, r24, r3
    b lbl_fn_80685ECC_0000B0AC
lbl_fn_80685ECC_0000B0A0:
    mr r3, r24
    bl strlen
    mr r25, r3
lbl_fn_80685ECC_0000B0AC:
    mr r4, r24
    mr r5, r25
    addi r3, r1, 0x80
    bl fn_8067DFA0
    cmpwi r3, 0x0
    mr r24, r3
    blt lbl_fn_80685ECC_0000B1F0
    addi r25, r1, 0x80
    b lbl_fn_80685ECC_0000B234
    cmpwi r23, 0x0
    beq lbl_fn_80685ECC_0000B0F0
    li r3, 0x0
    li r4, 0x0
    li r5, -0x1
    bl __msl_runtime_constraint_violation_s
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B0F0:
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lbz r0, 0x74(r1)
    lwz r25, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000B140
    cmpwi r0, 0x2
    beq lbl_fn_80685ECC_0000B148
    cmpwi r0, 0x3
    beq lbl_fn_80685ECC_0000B150
    cmpwi r0, 0x6
    beq lbl_fn_80685ECC_0000B158
    cmpwi r0, 0x7
    beq lbl_fn_80685ECC_0000B168
    cmpwi r0, 0x8
    beq lbl_fn_80685ECC_0000B170
    cmpwi r0, 0x4
    beq lbl_fn_80685ECC_0000B178
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B140:
    stw r31, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B148:
    sth r31, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B150:
    stw r31, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B158:
    stw r31, 0x4(r25)
    srawi r0, r31, 31
    stw r0, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B168:
    stw r31, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B170:
    stw r31, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
lbl_fn_80685ECC_0000B178:
    stw r31, 0x4(r25)
    srawi r0, r31, 31
    stw r0, 0x0(r25)
    b lbl_fn_80685ECC_0000B3C8
    lbz r0, 0x74(r1)
    addi r25, r1, 0x80
    cmplwi r0, 0x5
    bne lbl_fn_80685ECC_0000B1B4
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    li r24, 0x1
    sth r0, 0x80(r1)
    b lbl_fn_80685ECC_0000B234
lbl_fn_80685ECC_0000B1B4:
    mr r3, r22
    li r4, 0x1
    bl __va_arg
    lwz r0, 0x0(r3)
    mr r3, r25
    stb r0, 0x8(r1)
    addi r4, r1, 0x8
    li r5, 0x1
    bl fn_8067DF20
    mr r24, r3
    b lbl_fn_80685ECC_0000B234
    sth r14, 0x80(r1)
    addi r25, r1, 0x80
    li r24, 0x1
    b lbl_fn_80685ECC_0000B234
lbl_fn_80685ECC_0000B1F0:
    mr r3, r29
    bl fn_80686A48
    cmpwi r3, 0x0
    mr r5, r3
    add r31, r31, r3
    beq lbl_fn_80685ECC_0000B22C
    mr r12, r20
    mr r3, r21
    mr r4, r29
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B22C
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B22C:
    mr r3, r31
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B234:
    lbz r0, 0x70(r1)
    mr r29, r24
    cmpwi r0, 0x0
    beq lbl_fn_80685ECC_0000B348
    cmplwi r0, 0x2
    li r0, 0x20
    bne lbl_fn_80685ECC_0000B254
    li r0, 0x30
lbl_fn_80685ECC_0000B254:
    sth r0, 0xc(r1)
    lhz r3, 0x0(r25)
    cmplwi r3, 0x2b
    beq lbl_fn_80685ECC_0000B274
    cmplwi r3, 0x2d
    beq lbl_fn_80685ECC_0000B274
    cmplwi r3, 0x20
    bne lbl_fn_80685ECC_0000B2AC
lbl_fn_80685ECC_0000B274:
    cmplwi r0, 0x30
    bne lbl_fn_80685ECC_0000B2AC
    mr r12, r20
    mr r3, r21
    mr r4, r25
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B2A4
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B2A4:
    addi r25, r25, 0x2
    subi r24, r24, 0x1
lbl_fn_80685ECC_0000B2AC:
    lbz r0, 0x70(r1)
    cmplwi r0, 0x2
    bne lbl_fn_80685ECC_0000B33C
    lhz r0, 0x76(r1)
    cmplwi r0, 0x61
    beq lbl_fn_80685ECC_0000B2CC
    cmplwi r0, 0x41
    bne lbl_fn_80685ECC_0000B33C
lbl_fn_80685ECC_0000B2CC:
    cmpwi r24, 0x2
    bge lbl_fn_80685ECC_0000B2DC
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B2DC:
    mr r12, r20
    mr r3, r21
    mr r4, r25
    li r5, 0x2
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B304
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B304:
    subi r24, r24, 0x2
    addi r25, r25, 0x4
    b lbl_fn_80685ECC_0000B33C
lbl_fn_80685ECC_0000B310:
    mr r12, r20
    mr r3, r21
    addi r4, r1, 0xc
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B338
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B338:
    addi r29, r29, 0x1
lbl_fn_80685ECC_0000B33C:
    lwz r0, 0x78(r1)
    cmpw r29, r0
    blt lbl_fn_80685ECC_0000B310
lbl_fn_80685ECC_0000B348:
    cmpwi r24, 0x0
    beq lbl_fn_80685ECC_0000B378
    mr r12, r20
    mr r3, r21
    mr r4, r25
    mr r5, r24
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B378
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B378:
    lbz r0, 0x70(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80685ECC_0000B3C4
    b lbl_fn_80685ECC_0000B3B8
lbl_fn_80685ECC_0000B388:
    mr r12, r20
    mr r3, r21
    sth r19, 0xa(r1)
    addi r4, r1, 0xa
    li r5, 0x1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80685ECC_0000B3B4
    li r3, -0x1
    b lbl_fn_80685ECC_0000B3D8
lbl_fn_80685ECC_0000B3B4:
    addi r29, r29, 0x1
lbl_fn_80685ECC_0000B3B8:
    lwz r0, 0x78(r1)
    cmpw r29, r0
    blt lbl_fn_80685ECC_0000B388
lbl_fn_80685ECC_0000B3C4:
    add r31, r31, r29
lbl_fn_80685ECC_0000B3C8:
    lhz r0, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80685ECC_0000AAAC
lbl_fn_80685ECC_0000B3D4:
    mr r3, r31
lbl_fn_80685ECC_0000B3D8:
    lmw r14, 0x488(r1)
    lwz r0, 0x4d4(r1)
    mtlr r0
    addi r1, r1, 0x4d0
    blr
}

asm void fn_80686858(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, 0x8(r3)
    lwz r7, 0x4(r3)
    add r0, r6, r5
    cmplw r0, r7
    subf r31, r6, r7
    bgt lbl_fn_80686858_0000B420
    mr r31, r5
lbl_fn_80686858_0000B420:
    lwz r3, 0x0(r3)
    slwi r0, r6, 1
    mr r5, r31
    add r3, r3, r0
    bl fn_806846C4
    lwz r0, 0x8(r30)
    add r0, r0, r31
    stw r0, 0x8(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806868C4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    stw r29, 0x84(r1)
    mr r29, r4
    stw r28, 0x80(r1)
    mr r28, r3
    bne cr1, lbl_fn_806868C4_0000B4A0
    stfd f1, 0x28(r1)
    stfd f2, 0x30(r1)
    stfd f3, 0x38(r1)
    stfd f4, 0x40(r1)
    stfd f5, 0x48(r1)
    stfd f6, 0x50(r1)
    stfd f7, 0x58(r1)
    stfd f8, 0x60(r1)
lbl_fn_806868C4_0000B4A0:
    addi r12, r1, 0x98
    addi r0, r1, 0x8
    lis r30, 0x300
    stw r7, 0x18(r1)
    li r31, 0x0
    addi r7, r1, 0x74
    stw r6, 0x14(r1)
    mr r6, r7
    lis r11, fn_80686858@ha
    li r7, 0x0
    stw r5, 0x10(r1)
    stw r3, 0x8(r1)
    stw r3, 0x68(r1)
    addi r3, r11, fn_80686858@l
    stw r4, 0xc(r1)
    stw r4, 0x6c(r1)
    addi r4, r1, 0x68
    stw r8, 0x1c(r1)
    stw r9, 0x20(r1)
    stw r10, 0x24(r1)
    stw r30, 0x74(r1)
    stw r12, 0x78(r1)
    stw r0, 0x7c(r1)
    stw r31, 0x70(r1)
    bl fn_80685ECC
    cmpwi r3, 0x0
    blt lbl_fn_806868C4_0000B530
    cmplw r3, r29
    bge lbl_fn_806868C4_0000B520
    slwi r0, r3, 1
    sthx r31, r28, r0
    b lbl_fn_806868C4_0000B530
lbl_fn_806868C4_0000B520:
    slwi r0, r29, 1
    li r3, -0x1
    add r4, r28, r0
    sth r31, -0x2(r4)
lbl_fn_806868C4_0000B530:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806869BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r7, fn_80686858@ha
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    stw r3, 0x8(r1)
    addi r3, r7, fn_80686858@l
    li r7, 0x0
    stw r4, 0xc(r1)
    addi r4, r1, 0x8
    stw r31, 0x10(r1)
    bl fn_80685ECC
    cmpwi r3, 0x0
    blt lbl_fn_806869BC_0000B5C0
    cmplw r3, r30
    bge lbl_fn_806869BC_0000B5B0
    slwi r0, r3, 1
    sthx r31, r29, r0
    b lbl_fn_806869BC_0000B5C0
lbl_fn_806869BC_0000B5B0:
    slwi r0, r30, 1
    li r3, -0x1
    add r4, r29, r0
    sth r31, -0x2(r4)
lbl_fn_806869BC_0000B5C0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80686A48(void)
{
    nofralloc
    subi r4, r3, 0x2
    li r3, -0x1
lbl_fn_80686A48_0000B5E4:
    lhzu r0, 0x2(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_fn_80686A48_0000B5E4
    blr
}

asm void fn_80686A64(void)
{
    nofralloc
    subi r4, r4, 0x2
    subi r5, r3, 0x2
lbl_fn_80686A64_0000B600:
    lhzu r0, 0x2(r4)
    sthu r0, 0x2(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80686A64_0000B600
    blr
}

asm void fn_80686A80(void)
{
    nofralloc
    subi r4, r4, 0x2
    subi r6, r3, 0x2
    addi r5, r5, 0x1
    b lbl_fn_80686A80_0000B64C
lbl_fn_80686A80_0000B624:
    lhzu r0, 0x2(r4)
    sthu r0, 0x2(r6)
    cmpwi r0, 0x0
    bne lbl_fn_80686A80_0000B64C
    li r0, 0x0
    b lbl_fn_80686A80_0000B640
lbl_fn_80686A80_0000B63C:
    sthu r0, 0x2(r6)
lbl_fn_80686A80_0000B640:
    subic. r5, r5, 0x1
    bne lbl_fn_80686A80_0000B63C
    blr
lbl_fn_80686A80_0000B64C:
    subic. r5, r5, 0x1
    bne lbl_fn_80686A80_0000B624
    blr
}

asm void fn_80686AC4(void)
{
    nofralloc
    subi r4, r4, 0x2
    subi r5, r3, 0x2
lbl_fn_80686AC4_0000B660:
    lhzu r0, 0x2(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80686AC4_0000B660
    subi r5, r5, 0x2
lbl_fn_80686AC4_0000B670:
    lhzu r0, 0x2(r4)
    sthu r0, 0x2(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80686AC4_0000B670
    blr
}

asm void fn_80686AF0(void)
{
    nofralloc
    subi r5, r3, 0x2
    subi r4, r4, 0x2
    b lbl_fn_80686AF0_0000B6A0
lbl_fn_80686AF0_0000B690:
    cmpwi r3, 0x0
    bne lbl_fn_80686AF0_0000B6A0
    li r3, 0x0
    blr
lbl_fn_80686AF0_0000B6A0:
    lhzu r3, 0x2(r5)
    lhzu r0, 0x2(r4)
    cmplw r3, r0
    beq lbl_fn_80686AF0_0000B690
    subf r3, r0, r3
    blr
}

asm void fn_80686B24(void)
{
    nofralloc
    subi r6, r3, 0x2
    subi r4, r4, 0x2
    addi r5, r5, 0x1
    b lbl_fn_80686B24_0000B6E8
lbl_fn_80686B24_0000B6C8:
    lhzu r3, 0x2(r6)
    lhzu r0, 0x2(r4)
    cmplw r3, r0
    beq lbl_fn_80686B24_0000B6E0
    subf r3, r0, r3
    blr
lbl_fn_80686B24_0000B6E0:
    cmpwi r3, 0x0
    beq lbl_fn_80686B24_0000B6F0
lbl_fn_80686B24_0000B6E8:
    subic. r5, r5, 0x1
    bne lbl_fn_80686B24_0000B6C8
lbl_fn_80686B24_0000B6F0:
    li r3, 0x0
    blr
}

asm void fn_80686B64(void)
{
    nofralloc
    subi r3, r3, 0x2
    b lbl_fn_80686B64_0000B708
lbl_fn_80686B64_0000B700:
    cmplw r0, r4
    beqlr
lbl_fn_80686B64_0000B708:
    lhzu r0, 0x2(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80686B64_0000B700
    cmpwi r4, 0x0
    beqlr
    li r3, 0x0
    blr
}

asm void fn_80686B90(void)
{
    nofralloc
    stwu r1, -0x2020(r1)
    mflr r0
    stw r0, 0x2024(r1)
    stw r31, 0x201c(r1)
    mr r31, r5
    li r5, 0x2000
    stw r30, 0x2018(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0x2014(r1)
    mr r29, r3
    addi r3, r1, 0x8
    bl memset
    cmpwi r29, 0x0
    beq lbl_fn_80686B90_0000B764
    b lbl_fn_80686B90_0000B77C
lbl_fn_80686B90_0000B764:
    lwz r29, 0x0(r31)
    cmpwi r29, 0x0
    beq lbl_fn_80686B90_0000B774
    b lbl_fn_80686B90_0000B77C
lbl_fn_80686B90_0000B774:
    li r3, 0x0
    b lbl_fn_80686B90_0000B870
lbl_fn_80686B90_0000B77C:
    subi r7, r30, 0x2
    addi r5, r1, 0x8
    li r3, 0x1
    b lbl_fn_80686B90_0000B7A8
lbl_fn_80686B90_0000B78C:
    extrwi r6, r0, 13, 16
    clrlwi r0, r0, 29
    slw r0, r3, r0
    lbzx r4, r5, r6
    extsb r0, r0
    or r0, r4, r0
    stbx r0, r5, r6
lbl_fn_80686B90_0000B7A8:
    lhzu r0, 0x2(r7)
    cmpwi r0, 0x0
    bne lbl_fn_80686B90_0000B78C
    subi r7, r29, 0x2
    addi r5, r1, 0x8
    li r3, 0x1
    b lbl_fn_80686B90_0000B7E0
lbl_fn_80686B90_0000B7C4:
    extrwi r4, r6, 13, 16
    clrlwi r0, r6, 29
    lbzx r4, r5, r4
    slw r0, r3, r0
    extsb r4, r4
    and. r0, r4, r0
    beq lbl_fn_80686B90_0000B7EC
lbl_fn_80686B90_0000B7E0:
    lhzu r6, 0x2(r7)
    cmpwi r6, 0x0
    bne lbl_fn_80686B90_0000B7C4
lbl_fn_80686B90_0000B7EC:
    cmpwi r6, 0x0
    bne lbl_fn_80686B90_0000B804
    li r0, 0x0
    stw r0, 0x0(r31)
    li r3, 0x0
    b lbl_fn_80686B90_0000B870
lbl_fn_80686B90_0000B804:
    mr r3, r7
    addi r6, r1, 0x8
    li r4, 0x1
    b lbl_fn_80686B90_0000B830
lbl_fn_80686B90_0000B814:
    extrwi r5, r8, 13, 16
    clrlwi r0, r8, 29
    lbzx r5, r6, r5
    slw r0, r4, r0
    extsb r5, r5
    and. r0, r5, r0
    bne lbl_fn_80686B90_0000B83C
lbl_fn_80686B90_0000B830:
    lhzu r8, 0x2(r7)
    cmpwi r8, 0x0
    bne lbl_fn_80686B90_0000B814
lbl_fn_80686B90_0000B83C:
    cmpwi r8, 0x0
    bne lbl_fn_80686B90_0000B84C
    lwz r0, lbl_8087EC10
    b lbl_fn_80686B90_0000B858
lbl_fn_80686B90_0000B84C:
    li r0, 0x0
    sth r0, 0x0(r7)
    addi r0, r7, 0x2
lbl_fn_80686B90_0000B858:
    cmpwi r3, 0x0
    bne lbl_fn_80686B90_0000B86C
    li r0, 0x0
    stw r0, 0x0(r31)
    b lbl_fn_80686B90_0000B870
lbl_fn_80686B90_0000B86C:
    stw r0, 0x0(r31)
lbl_fn_80686B90_0000B870:
    lwz r0, 0x2024(r1)
    lwz r31, 0x201c(r1)
    lwz r30, 0x2018(r1)
    lwz r29, 0x2014(r1)
    mtlr r0
    addi r1, r1, 0x2020
    blr
}

asm void fn_80686CF8(void)
{
    nofralloc
    lhz r6, 0x0(r4)
    subi r5, r3, 0x2
    cmpwi r6, 0x0
    bne lbl_fn_80686CF8_0000B8DC
    blr
    b lbl_fn_80686CF8_0000B8DC
lbl_fn_80686CF8_0000B8A4:
    cmplw r0, r6
    bne lbl_fn_80686CF8_0000B8DC
    subi r7, r5, 0x2
    subi r8, r4, 0x2
lbl_fn_80686CF8_0000B8B4:
    lhzu r3, 0x2(r7)
    lhzu r0, 0x2(r8)
    cmplw r3, r0
    bne lbl_fn_80686CF8_0000B8CC
    cmpwi r3, 0x0
    bne lbl_fn_80686CF8_0000B8B4
lbl_fn_80686CF8_0000B8CC:
    cmpwi r0, 0x0
    bne lbl_fn_80686CF8_0000B8DC
    mr r3, r5
    blr
lbl_fn_80686CF8_0000B8DC:
    lhzu r0, 0x2(r5)
    cmpwi r0, 0x0
    bne lbl_fn_80686CF8_0000B8A4
    li r3, 0x0
    blr
}

asm void fwide(void)
{
    nofralloc
    cmpwi r3, 0x0
    beq lbl_fwide_0000B904
    lwz r5, 0x4(r3)
    extrwi. r0, r5, 3, 7
    bne lbl_fwide_0000B90C
lbl_fwide_0000B904:
    li r3, 0x0
    blr
lbl_fwide_0000B90C:
    extrwi. r0, r5, 2, 10
    beq lbl_fwide_0000B928
    cmpwi r0, 0x2
    beq lbl_fwide_0000B954
    cmpwi r0, 0x1
    beq lbl_fwide_0000B95C
    b lbl_fwide_0000B960
lbl_fwide_0000B928:
    cmpwi r4, 0x0
    ble lbl_fwide_0000B940
    li r0, 0x2
    rlwimi r5, r0, 20, 10, 11
    stw r5, 0x4(r3)
    b lbl_fwide_0000B960
lbl_fwide_0000B940:
    bge lbl_fwide_0000B960
    li r0, 0x1
    rlwimi r5, r0, 20, 10, 11
    stw r5, 0x4(r3)
    b lbl_fwide_0000B960
lbl_fwide_0000B954:
    li r4, 0x1
    b lbl_fwide_0000B960
lbl_fwide_0000B95C:
    li r4, -0x1
lbl_fwide_0000B960:
    mr r3, r4
    blr
}

asm void fn_80686DD4(void)
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
    bl OSGetConsoleType
    rlwinm. r0, r3, 0, 2, 2
    bne lbl_fn_80686DD4_0000BA00
    lwz r0, lbl_80880350
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_80686DD4_0000B9CC
    lis r3, 0x1
    subi r3, r3, 0x1f00
    bl fn_8061A350
    cmpwi r3, 0x0
    bne lbl_fn_80686DD4_0000B9CC
    li r0, 0x1
    stw r0, lbl_80880350
lbl_fn_80686DD4_0000B9CC:
    cmpwi r3, 0x0
    beq lbl_fn_80686DD4_0000B9DC
    li r3, 0x1
    b lbl_fn_80686DD4_0000BA18
lbl_fn_80686DD4_0000B9DC:
    lwz r4, 0x0(r30)
    mr r3, r29
    bl fn_8061A3A0
    cmpwi r3, 0x0
    beq lbl_fn_80686DD4_0000BA00
    li r0, 0x0
    stw r0, 0x0(r30)
    li r3, 0x1
    b lbl_fn_80686DD4_0000BA18
lbl_fn_80686DD4_0000BA00:
    mr r3, r28
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_80678668
    li r3, 0x0
lbl_fn_80686DD4_0000BA18:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80686EA4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    bl fn_80682204
    li r0, 0x1
    stw r0, lbl_80880358
    li r3, 0x1
    bl exit
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80686ED8(void)
{
    nofralloc
    b __register_atexit
}

asm void __msl_runtime_constraint_violation_s(void)
{
    nofralloc
    lwz r12, __msl_constraint_handler_80880360
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}
