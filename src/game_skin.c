#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_800489F4(void);
extern void fn_80048F8C(void);
extern void fn_80049268(void);
extern void fn_8004937C(void);
extern void fn_80049654(void);
extern void fn_800496C0(void);
extern void fn_800498A4(void);
extern void fn_800498D4(void);
extern void fn_80049B74(void);
extern void fn_80049C3C(void);
extern void fn_80049D74(void);
extern void fn_80049E44(void);
extern void fn_800697D8(void);
extern void fn_8007AA30(void);
extern void fn_8007AA64(void);
extern void fn_8007AB38(void);
extern void fn_8007B078(void);
extern void fn_8007B100(void);
extern void fn_8007C018(void);
extern void fn_8007C144(void);
extern void fn_8007E9EC(void);
extern void fn_80081C34(void);
extern void fn_80081D00(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_8008937C(void);
extern void fn_800C507C(void);
extern void fn_800C8780(void);
extern void fn_800C8BA4(void);
extern void fn_800C9010(void);
extern void fn_800CA0AC(void);
extern void fn_800CA2FC(void);
extern void fn_800CA7D4(void);
extern void fn_800CB360(void);
extern void fn_800CB36C(void);
extern void fn_800CB3A0(void);
extern void fn_800CB404(void);
extern void fn_800CFDA0(void);
extern void fn_800D0AB0(void);
extern void fn_800D0C1C(void);
extern void fn_800D19FC(void);
extern void fn_800D1C60(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3F28(void);
extern void fn_800DC6B4(void);
extern void fn_800DCA6C(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806952C4(void);
extern void fn_80695720(void);
extern void fn_80695B00(void);
extern void fn_80709AD0(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80733808[];
extern u8 lbl_8073385C[];
extern u8 lbl_80733878[];
extern u8 lbl_80733880[];
extern u8 lbl_80775A88[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_807792C0[];
extern u8 lbl_807792F8[];
extern u8 lbl_80779308[];
extern u8 lbl_80779330[];

/* Small data declarations */
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087D920;
extern u32 lbl_8087D924;
extern u32 lbl_8087D928;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFC0;
extern u32 lbl_8087EFC8;
extern u32 lbl_8087EFCC;
extern u32 lbl_8087EFD0;
extern u32 lbl_8087EFD4;
extern u32 lbl_8087EFD8;
extern u32 lbl_8087EFDC;
extern u32 lbl_8087EFE8;
extern u32 lbl_80881138;
extern u32 lbl_8088113C;
extern u32 lbl_80881140;
extern u32 lbl_80881144;
extern u32 lbl_80881148;
extern u32 lbl_8088114C;

/* Function declarations */
void fn_800C3094(void);
void fn_800C310C(void);
void fn_800C3118(void);
void fn_800C3124(void);
void fn_800C317C(void);
void fn_800C3184(void);
void fn_800C31E4(void);
void fn_800C31EC(void);
void fn_800C31F4(void);
void fn_800C32E0(void);
void fn_800C344C(void);
void fn_800C3610(void);
void fn_800C36B8(void);
void fn_800C3718(void);
void fn_800C3720(void);
void fn_800C37D8(void);
void fn_800C37E0(void);
void fn_800C37E4(void);
void fn_800C37FC(void);
void fn_800C3834(void);
void fn_800C3950(void);
void fn_800C3990(void);
void fn_800C3D6C(void);
void fn_800C3D74(void);
void fn_800C3E84(void);
void fn_800C3FB0(void);
void fn_800C3FF0(void);
void fn_800C411C(void);
void fn_800C41B4(void);
void fn_800C41D0(void);
void fn_800C442C(void);
void fn_800C4444(void);
void fn_800C4894(void);
void fn_800C49F0(void);
void fn_800C4A90(void);
void fn_800C4E38(void);
void fn_800C4E50(void);
void fn_800C4ECC(void);
void fn_800C4F38(void);
void fn_800C4F70(void);

asm void fn_800C3094(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r3, lbl_8087EE90
    bl fn_80049D74
    subi r4, r3, 0x1
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_800C3094_00000060
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_800C3094_00000060
    lwz r0, 0x34b8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C3094_00000060
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_800489F4
    b lbl_fn_800C3094_00000064
lbl_fn_800C3094_00000060:
    li r3, 0x0
lbl_fn_800C3094_00000064:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C310C(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EE90
    b fn_80048F8C
}

asm void fn_800C3118(void)
{
    nofralloc
    mr r4, r3
    lwz r3, lbl_8087EE90
    b fn_80049268
}

asm void fn_800C3124(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r3, lbl_8087EE90
    bl fn_80049D74
    subi r4, r3, 0x1
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_800C3124_000000D4
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_8004937C
lbl_fn_800C3124_000000D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C317C(void)
{
    nofralloc
    lwz r3, lbl_8087EE90
    b fn_80049654
}

asm void fn_800C3184(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r4, r31
    lwz r3, lbl_8087EE90
    bl fn_80049D74
    subi r4, r3, 0x1
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi. r0, r0, 31
    beq lbl_fn_800C3184_00000138
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_800496C0
    b lbl_fn_800C3184_0000013C
lbl_fn_800C3184_00000138:
    li r3, 0x0
lbl_fn_800C3184_0000013C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C31E4(void)
{
    nofralloc
    lwz r3, lbl_8087EE90
    b fn_800498A4
}

asm void fn_800C31EC(void)
{
    nofralloc
    lwz r3, lbl_8087EE90
    b fn_800498D4
}

asm void fn_800C31F4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x28(r1)
    fmr f31, f1
    stw r31, 0x24(r1)
    stw r30, 0x20(r1)
    mr r30, r5
    stw r29, 0x1c(r1)
    mr r29, r4
    stw r28, 0x18(r1)
    mr r28, r3
    addi r3, r1, 0x8
    bl fn_800CB360
    lwz r3, lbl_8087EE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C31F4_000001DC
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_800C31F4_000001DC
    cmpwi r29, 0x0
    li r31, 0x0
    beq lbl_fn_800C31F4_000001D4
    mr r3, r29
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_800C31F4_000001D4
    li r31, 0x1
lbl_fn_800C31F4_000001D4:
    cmpwi r31, 0x0
    bne lbl_fn_800C31F4_000001F8
lbl_fn_800C31F4_000001DC:
    mr r3, r28
    addi r4, r1, 0x8
    bl fn_800CB36C
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_800C31F4_00000228
lbl_fn_800C31F4_000001F8:
    lwz r3, lbl_8087EE90
    mr r4, r29
    bl fn_80049B74
    fmr f1, f31
    mr r4, r3
    mr r3, r28
    mr r5, r30
    li r6, -0x1
    bl fn_800C32E0
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_800C31F4_00000228:
    lwz r0, 0x34(r1)
    lfd f31, 0x28(r1)
    lwz r31, 0x24(r1)
    lwz r30, 0x20(r1)
    lwz r29, 0x1c(r1)
    lwz r28, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C32E0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    fmr f31, f1
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    bl fn_800CB360
    lwz r3, lbl_8087EE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C32E0_00000398
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_800C32E0_00000398
    cmpwi r28, 0x0
    bne lbl_fn_800C32E0_000002A8
    b lbl_fn_800C32E0_00000398
lbl_fn_800C32E0_000002A8:
    mr r4, r28
    bl fn_800D0AB0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800C32E0_000002C0
    b lbl_fn_800C32E0_00000398
lbl_fn_800C32E0_000002C0:
    cmpwi r30, 0x0
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    blt lbl_fn_800C32E0_000002D4
    mr r4, r30
lbl_fn_800C32E0_000002D4:
    bl fn_800CFDA0
    stw r3, 0xa8(r31)
    mr r3, r31
    mr r4, r29
    bl fn_800CA7D4
    mr r3, r31
    mr r4, r28
    bl fn_800C9010
    fmr f1, f31
    mr r3, r31
    li r4, 0x0
    bl fn_800CA0AC
    lwz r3, lbl_8087EFE8
    lwz r0, 0x34b4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C32E0_0000032C
    lfs f1, lbl_80881138
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CA2FC
    b lbl_fn_800C32E0_00000340
lbl_fn_800C32E0_0000032C:
    lfs f1, lbl_8088113C
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CA2FC
lbl_fn_800C32E0_00000340:
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049E44
    fmr f31, f1
    lwz r3, lbl_8087EFE8
    mr r4, r31
    bl fn_800D0C1C
    cmpwi r3, 0x0
    bne lbl_fn_800C32E0_0000037C
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C32E0_00000398
    li r4, 0x0
    bl fn_80709AD0
    b lbl_fn_800C32E0_00000398
lbl_fn_800C32E0_0000037C:
    fmr f1, f31
    lwz r3, lbl_8087EFE8
    mr r4, r31
    bl fn_800D19FC
    mr r3, r27
    mr r4, r31
    bl fn_800CB404
lbl_fn_800C32E0_00000398:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C344C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    bl fn_800CB360
    lwz r3, lbl_8087EE90
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C344C_0000055C
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_800C344C_0000055C
    cmpwi r27, 0x0
    li r31, 0x0
    beq lbl_fn_800C344C_0000042C
    mr r3, r27
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_800C344C_0000042C
    li r31, 0x1
lbl_fn_800C344C_0000042C:
    cmpwi r31, 0x0
    bne lbl_fn_800C344C_00000438
    b lbl_fn_800C344C_0000055C
lbl_fn_800C344C_00000438:
    lwz r3, lbl_8087EE90
    mr r4, r27
    bl fn_80049B74
    mr r4, r3
    lwz r3, lbl_8087EFE8
    bl fn_800D0AB0
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800C344C_00000460
    b lbl_fn_800C344C_0000055C
lbl_fn_800C344C_00000460:
    cmpwi r30, 0x0
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    blt lbl_fn_800C344C_00000474
    mr r4, r30
lbl_fn_800C344C_00000474:
    bl fn_800CFDA0
    stw r3, 0xa8(r31)
    mr r3, r31
    mr r4, r29
    bl fn_800CA7D4
    lwz r3, lbl_8087EFE8
    lwz r0, 0x34a0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800C344C_000004AC
    mr r3, r31
    mr r4, r27
    mr r5, r28
    bl fn_800C8BA4
    b lbl_fn_800C344C_000004B8
lbl_fn_800C344C_000004AC:
    mr r3, r31
    mr r4, r27
    bl fn_800C8780
lbl_fn_800C344C_000004B8:
    fmr f1, f31
    mr r3, r31
    li r4, 0x0
    bl fn_800CA0AC
    lfs f1, lbl_80881138
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CA2FC
    lwz r3, lbl_8087EE90
    mr r4, r27
    bl fn_80049C3C
    cmpwi r3, 0x0
    beq lbl_fn_800C344C_00000504
    lfs f1, lbl_8088113C
    mr r3, r31
    fmr f2, f1
    fmr f3, f1
    bl fn_800CA2FC
lbl_fn_800C344C_00000504:
    lwz r3, lbl_8087EE90
    mr r4, r31
    bl fn_80049E44
    fmr f31, f1
    lwz r3, lbl_8087EFE8
    mr r4, r31
    bl fn_800D0C1C
    cmpwi r3, 0x0
    bne lbl_fn_800C344C_00000540
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C344C_0000055C
    li r4, 0x0
    bl fn_80709AD0
    b lbl_fn_800C344C_0000055C
lbl_fn_800C344C_00000540:
    fmr f1, f31
    lwz r3, lbl_8087EFE8
    mr r4, r31
    bl fn_800D19FC
    mr r3, r26
    mr r4, r31
    bl fn_800CB404
lbl_fn_800C344C_0000055C:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C3610(void)
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
    lwz r0, lbl_8087EFC0
    cmpwi r0, 0x0
    bne lbl_fn_800C3610_00000604
    lis r5, lbl_80733808@ha
    li r3, 0x60
    addi r5, r5, lbl_80733808@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C3610_000005FC
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_807792C0@ha
    li r0, 0x0
    addi r3, r3, lbl_807792C0@l
    stw r3, 0x0(r31)
    stw r0, 0x48(r31)
    stw r30, 0x4c(r31)
    stw r0, 0x50(r31)
    stw r0, 0x54(r31)
    stw r31, lbl_8087EFC0
lbl_fn_800C3610_000005FC:
    mr r3, r31
    b lbl_fn_800C3610_00000608
lbl_fn_800C3610_00000604:
    mr r3, r0
lbl_fn_800C3610_00000608:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C36B8(void)
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
    beq lbl_fn_800C36B8_00000668
    li r0, 0x0
    stw r0, lbl_8087EFC0
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_800C36B8_00000668
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C36B8_00000668:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C3718(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_800C3720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C3720_0000072C
    lwz r31, 0x54(r3)
    cmpwi r31, 0x0
    bne lbl_fn_800C3720_000006F4
    lwz r3, 0x4c(r3)
    lwz r4, 0x50(r30)
    bl fn_800C3E84
    cmpwi r3, 0x0
    beq lbl_fn_800C3720_000006E0
    li r0, 0x0
    stw r0, 0x50(r30)
    mr r31, r3
    b lbl_fn_800C3720_000006FC
lbl_fn_800C3720_000006E0:
    lwz r3, 0x4c(r30)
    li r4, 0x0
    bl fn_800C3FB0
    mr r31, r3
    b lbl_fn_800C3720_000006FC
lbl_fn_800C3720_000006F4:
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_800C3720_000006FC:
    lwz r12, 0x0(r31)
    mr r3, r31
    mr r4, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r0, r31, 0x8
    stw r3, 0x48(r30)
    mr r4, r3
    mr r3, r30
    stw r0, 0x58(r30)
    bl fn_800D3F28
lbl_fn_800C3720_0000072C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C37D8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_800C37E0(void)
{
    nofralloc
    blr
}

asm void fn_800C37E4(void)
{
    nofralloc
    lwz r0, 0x48(r3)
    cmplw r0, r4
    bnelr
    li r0, 0x0
    stw r0, 0x48(r3)
    blr
}

asm void fn_800C37FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0x4c(r3)
    bl fn_800C3D74
    cmpwi r3, 0x0
    beq lbl_fn_800C37FC_0000078C
    lwz r3, 0x4(r3)
    b lbl_fn_800C37FC_00000790
lbl_fn_800C37FC_0000078C:
    li r3, 0x0
lbl_fn_800C37FC_00000790:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C3834(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    cmplwi r0, 0x80
    stmw r27, 0x1c(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    bge lbl_fn_800C3834_000008A4
    stw r0, 0x8(r1)
    li r3, 0x200
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_800C3834_00000810
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C3834_00000810:
    lwz r0, 0x8(r31)
    li r4, 0x80
    lwz r28, 0x4(r31)
    slwi r3, r0, 2
    lwz r0, 0xc(r1)
    add r3, r28, r3
    stw r4, 0x10(r1)
    subf r3, r28, r3
    slwi r0, r0, 2
    srawi r3, r3, 2
    mr r4, r28
    addze r30, r3
    slwi r27, r30, 2
    add r3, r29, r0
    mr r5, r27
    bl memcpy
    mr r3, r28
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r4, 0xc(r1)
    li r5, 0x0
    lwz r3, 0x4(r31)
    mr r0, r29
    add r6, r4, r30
    lwz r7, 0xc(r31)
    lwz r4, 0x10(r1)
    cmpwi r3, 0x0
    stw r4, 0xc(r31)
    stw r7, 0x10(r1)
    stw r0, 0x4(r31)
    stw r3, 0x8(r1)
    stw r6, 0x8(r31)
    stw r5, 0xc(r1)
    beq lbl_fn_800C3834_000008A4
    stw r5, 0xc(r1)
    bl dtor_80084684
lbl_fn_800C3834_000008A4:
    mr r3, r31
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C3950(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800C3950_000008E4
    cmpwi r4, 0x0
    ble lbl_fn_800C3950_000008E4
    bl dtor_80084684
lbl_fn_800C3950_000008E4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C3990(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_8073385C@ha
    li r7, 0x0
    stw r0, 0x44(r1)
    addi r5, r5, lbl_8073385C@l
    addi r5, r5, 0x14
    stmw r27, 0x2c(r1)
    mr r29, r3
    mr r31, r4
    li r3, 0x5c
    mr r6, r5
    li r4, 0x1
    bl fn_80084320
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_800C3990_00000A14
    lis r5, lbl_80779330@ha
    lis r4, lbl_80779308@ha
    addi r5, r5, lbl_80779330@l
    stw r5, 0x0(r3)
    addi r4, r4, lbl_80779308@l
    li r0, 0x0
    lwz r5, 0x4(r31)
    stw r5, 0x4(r3)
    lwz r5, 0xc(r31)
    lwz r6, 0x8(r31)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    lwz r5, 0x14(r31)
    lwz r6, 0x10(r31)
    stw r6, 0x10(r3)
    stw r5, 0x14(r3)
    lwz r5, 0x1c(r31)
    lwz r6, 0x18(r31)
    stw r6, 0x18(r3)
    stw r5, 0x1c(r3)
    lwz r5, 0x24(r31)
    lwz r6, 0x20(r31)
    stw r6, 0x20(r3)
    stw r5, 0x24(r3)
    lwz r5, 0x2c(r31)
    lwz r6, 0x28(r31)
    stw r6, 0x28(r3)
    stw r5, 0x2c(r3)
    lwz r5, 0x34(r31)
    lwz r6, 0x30(r31)
    stw r6, 0x30(r3)
    stw r5, 0x34(r3)
    lwz r5, 0x3c(r31)
    lwz r6, 0x38(r31)
    stw r6, 0x38(r3)
    stw r5, 0x3c(r3)
    lwz r5, 0x44(r31)
    lwz r6, 0x40(r31)
    stw r6, 0x40(r3)
    stw r5, 0x44(r3)
    stw r4, 0x0(r3)
    stw r0, 0x48(r3)
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800C3990_00000A14
    stw r0, 0x48(r3)
    addi r3, r31, 0x4c
    addi r4, r30, 0x4c
    li r5, 0x0
    lwz r6, 0x48(r31)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800C3990_00000A14:
    lwz r3, 0x0(r29)
    addi r0, r3, 0x1
    stw r0, 0x0(r29)
    stw r0, 0x4(r30)
    lwz r3, 0x8(r29)
    lwz r4, 0xc(r29)
    cmplw r3, r4
    bge lbl_fn_800C3990_00000A50
    addi r3, r3, 0x1
    stw r3, 0x8(r29)
    subi r0, r3, 0x1
    lwz r3, 0x4(r29)
    slwi r0, r0, 2
    stwx r30, r3, r0
    b lbl_fn_800C3990_00000CC0
lbl_fn_800C3990_00000A50:
    lis r3, 0x4000
    subi r0, r3, 0x1
    subf r0, r4, r0
    cmplwi r0, 0x1
    bge lbl_fn_800C3990_00000A84
    lis r3, __files@ha
    lis r4, lbl_8073385C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073385C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C3990_00000A84:
    li r5, 0x0
    addi r4, r29, 0xc
    lis r3, 0x4000
    stw r5, 0x14(r1)
    subi r0, r3, 0x1
    stw r5, 0x18(r1)
    stw r5, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r5, 0x24(r1)
    lwz r3, 0x8(r29)
    lwz r31, 0xc(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_800C3990_00000AE8
    lis r3, __files@ha
    lis r4, lbl_8073385C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073385C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C3990_00000AE8:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_800C3990_00000B38
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_800C3990_00000B2C
    addi r3, r1, 0x8
lbl_fn_800C3990_00000B2C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800C3990_00000B7C
lbl_fn_800C3990_00000B38:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_800C3990_00000B74
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_800C3990_00000B68
    addi r3, r1, 0x8
lbl_fn_800C3990_00000B68:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_800C3990_00000B7C
lbl_fn_800C3990_00000B74:
    lis r3, 0x4000
    subi r28, r3, 0x1
lbl_fn_800C3990_00000B7C:
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_800C3990_00000BAC
    lis r3, __files@ha
    lis r4, lbl_8073385C@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_8073385C@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C3990_00000BAC:
    slwi r3, r28, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_800C3990_00000BE0
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_800C3990_00000BE0:
    lwz r0, 0x18(r1)
    stw r31, 0x14(r1)
    slwi r3, r0, 2
    stw r28, 0x1c(r1)
    lwz r0, 0x8(r29)
    stw r0, 0x24(r1)
    slwi r0, r0, 2
    add r0, r31, r0
    stwx r30, r3, r0
    lwz r3, 0x18(r1)
    lwz r0, 0x24(r1)
    addi r3, r3, 0x1
    stw r3, 0x18(r1)
    lwz r3, 0x14(r1)
    lwz r4, 0x8(r29)
    lwz r28, 0x4(r29)
    slwi r4, r4, 2
    add r5, r28, r4
    subf r5, r28, r5
    mr r4, r28
    srawi r5, r5, 2
    addze r31, r5
    subf r0, r31, r0
    stw r0, 0x24(r1)
    slwi r27, r31, 2
    slwi r0, r0, 2
    mr r5, r27
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r27
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    li r4, 0x0
    addic. r3, r1, 0x14
    add r0, r0, r31
    stw r0, 0x18(r1)
    stw r4, 0x8(r29)
    lwz r3, 0xc(r29)
    lwz r0, 0x1c(r1)
    stw r0, 0xc(r29)
    stw r3, 0x1c(r1)
    lwz r0, 0x14(r1)
    lwz r3, 0x4(r29)
    stw r0, 0x4(r29)
    stw r3, 0x14(r1)
    lwz r0, 0x18(r1)
    stw r0, 0x8(r29)
    stw r4, 0x18(r1)
    beq lbl_fn_800C3990_00000CC0
    lwz r3, 0x14(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800C3990_00000CC0
    stw r4, 0x18(r1)
    bl dtor_80084684
lbl_fn_800C3990_00000CC0:
    lwz r3, 0x4(r30)
    lmw r27, 0x2c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C3D6C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_800C3D74(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r5, lbl_8087EFD4
    lwz r0, 0x8(r3)
    lbz r5, 0x0(r5)
    lwz r31, 0x4(r3)
    slwi r0, r0, 2
    stb r5, 0x18(r1)
    add r28, r31, r0
    stw r4, 0x1c(r1)
    stb r5, 0x10(r1)
    stw r4, 0x14(r1)
    stb r5, 0x20(r1)
    stw r4, 0x24(r1)
    stb r5, 0x8(r1)
    stw r4, 0xc(r1)
    b lbl_fn_800C3D74_00000D40
lbl_fn_800C3D74_00000D3C:
    addi r31, r31, 0x4
lbl_fn_800C3D74_00000D40:
    cmplw r31, r28
    beq lbl_fn_800C3D74_00000DBC
    lwz r3, 0x0(r31)
    addi r29, r3, 0x8
    mr r3, r29
    bl strlen
    lbzx r0, r30, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_800C3D74_00000DB4
    add r3, r29, r3
    mr r4, r30
    subf r0, r29, r3
    mtctr r0
    cmplw r29, r3
    beq lbl_fn_800C3D74_00000DB0
lbl_fn_800C3D74_00000D84:
    lbz r3, 0x0(r29)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_800C3D74_00000DA4
    li r0, 0x0
    b lbl_fn_800C3D74_00000DB4
lbl_fn_800C3D74_00000DA4:
    addi r29, r29, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_800C3D74_00000D84
lbl_fn_800C3D74_00000DB0:
    li r0, 0x1
lbl_fn_800C3D74_00000DB4:
    cmpwi r0, 0x0
    beq lbl_fn_800C3D74_00000D3C
lbl_fn_800C3D74_00000DBC:
    cmplw r31, r28
    beq lbl_fn_800C3D74_00000DCC
    lwz r3, 0x0(r31)
    b lbl_fn_800C3D74_00000DD0
lbl_fn_800C3D74_00000DCC:
    li r3, 0x0
lbl_fn_800C3D74_00000DD0:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C3E84(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    lis r5, lbl_807792F8@ha
    stw r0, 0xc4(r1)
    stmw r25, 0xa4(r1)
    mr r25, r3
    mr r26, r4
    stw r4, 0x80(r1)
    stw r4, 0x6c(r1)
    stw r4, 0x94(r1)
    stw r4, 0x58(r1)
    lwzu r28, lbl_807792F8@l(r5)
    lwz r0, 0x8(r3)
    lwz r29, 0x4(r5)
    lwz r30, 0x8(r5)
    slwi r0, r0, 2
    lwz r6, lbl_8087EFD4
    lwz r27, 0x4(r3)
    lbz r5, 0x0(r6)
    stw r28, 0x28(r1)
    add r31, r27, r0
    stw r29, 0x2c(r1)
    stw r30, 0x30(r1)
    stb r5, 0x34(r1)
    stw r28, 0x18(r1)
    stw r29, 0x1c(r1)
    stw r30, 0x20(r1)
    stb r5, 0x24(r1)
    stw r28, 0x38(r1)
    stw r29, 0x3c(r1)
    stw r30, 0x40(r1)
    stb r5, 0x44(r1)
    stw r28, 0x70(r1)
    stw r29, 0x74(r1)
    stw r30, 0x78(r1)
    stb r5, 0x7c(r1)
    stw r28, 0x5c(r1)
    stw r29, 0x60(r1)
    stw r30, 0x64(r1)
    stb r5, 0x68(r1)
    stw r28, 0x84(r1)
    stw r29, 0x88(r1)
    stw r30, 0x8c(r1)
    stb r5, 0x90(r1)
    stw r28, 0x48(r1)
    stw r29, 0x4c(r1)
    stw r30, 0x50(r1)
    stb r5, 0x54(r1)
    b lbl_fn_800C3E84_00000EB8
lbl_fn_800C3E84_00000EB4:
    addi r27, r27, 0x4
lbl_fn_800C3E84_00000EB8:
    cmplw r27, r31
    beq lbl_fn_800C3E84_00000EE4
    lwz r3, 0x0(r27)
    addi r12, r1, 0x8
    stw r28, 0x8(r1)
    stw r29, 0xc(r1)
    stw r30, 0x10(r1)
    bl fn_80695B00
    nop
    cmplw r3, r26
    bne lbl_fn_800C3E84_00000EB4
lbl_fn_800C3E84_00000EE4:
    lwz r0, 0x8(r25)
    lwz r3, 0x4(r25)
    slwi r0, r0, 2
    add r0, r3, r0
    cmplw r27, r0
    beq lbl_fn_800C3E84_00000F04
    lwz r3, 0x0(r27)
    b lbl_fn_800C3E84_00000F08
lbl_fn_800C3E84_00000F04:
    li r3, 0x0
lbl_fn_800C3E84_00000F08:
    lmw r25, 0xa4(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_800C3FB0(void)
{
    nofralloc
    lwz r0, 0x8(r3)
    li r5, 0x0
    lwz r3, 0x4(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    b lbl_fn_800C3FB0_00000F4C
lbl_fn_800C3FB0_00000F34:
    cmpw r5, r4
    bne lbl_fn_800C3FB0_00000F44
    lwz r3, 0x0(r3)
    blr
lbl_fn_800C3FB0_00000F44:
    addi r3, r3, 0x4
    addi r5, r5, 0x1
lbl_fn_800C3FB0_00000F4C:
    cmplw r3, r0
    bne lbl_fn_800C3FB0_00000F34
    li r3, 0x0
    blr
}

asm void fn_800C3FF0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800C3FF0_00001054
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x18(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x1c(r1)
    mr r31, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r0, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800C3FF0_00000FF8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_800C3FF0_00000FF8:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_800C3FF0_0000100C
    bl fn_80084C24
lbl_fn_800C3FF0_0000100C:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x1c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x18
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x18(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x18
    beq lbl_fn_800C3FF0_00001054
    addic. r3, r3, 0x4
    beq lbl_fn_800C3FF0_00001054
    beq lbl_fn_800C3FF0_00001054
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C3FF0_00001054
    bl fn_806952C4
lbl_fn_800C3FF0_00001054:
    lwz r5, 0x48(r29)
    mr r4, r30
    addi r3, r29, 0x4c
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_800C411C(void)
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
    beq lbl_fn_800C411C_00001100
    addic. r31, r3, 0x48
    beq lbl_fn_800C411C_000010F0
    beq lbl_fn_800C411C_000010F0
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800C411C_000010F0
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_800C411C_000010E8
    addi r3, r31, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_800C411C_000010E8:
    li r0, 0x0
    stw r0, 0x0(r31)
lbl_fn_800C411C_000010F0:
    cmpwi r30, 0x0
    ble lbl_fn_800C411C_00001100
    mr r3, r29
    bl dtor_80084684
lbl_fn_800C411C_00001100:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C41B4(void)
{
    nofralloc
    la r4, lbl_8087EFC8
    la r3, lbl_8087EFCC
    la r0, lbl_8087EFD0
    stw r4, lbl_8087EFD4
    stw r3, lbl_8087EFD8
    stw r0, lbl_8087EFDC
    blr
}

asm void fn_800C41D0(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    stw r0, 0x144(r1)
    li r0, 0x0
    stmw r23, 0x11c(r1)
    mr r31, r3
    lwz r28, 0xa48(r5)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r5, 0x10(r3)
    b lbl_fn_800C41D0_0000117C
    beq lbl_fn_800C41D0_0000117C
    li r3, -0x10
    bl fn_80084C24
lbl_fn_800C41D0_0000117C:
    cmpwi r28, 0x0
    stw r28, 0x0(r31)
    beq lbl_fn_800C41D0_000011C4
    mulli r3, r28, 0xc
    li r4, 0x6
    la r5, lbl_8087D928
    la r6, lbl_8087D924
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_800C442C@ha
    mr r7, r28
    addi r4, r4, fn_800C442C@l
    li r5, 0x0
    li r6, 0xc
    bl fn_80695720
    stw r3, 0x4(r31)
    b lbl_fn_800C41D0_000011CC
lbl_fn_800C41D0_000011C4:
    li r0, 0x0
    stw r0, 0x4(r31)
lbl_fn_800C41D0_000011CC:
    lwz r3, 0xc(r31)
    lwz r4, 0x10(r31)
    cmpwi r3, 0x0
    lwz r28, 0xa48(r4)
    beq lbl_fn_800C41D0_000011E4
    bl fn_80084C24
lbl_fn_800C41D0_000011E4:
    cmpwi r28, 0x0
    stw r28, 0x8(r31)
    beq lbl_fn_800C41D0_00001210
    slwi r3, r28, 2
    li r4, 0x6
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xc(r31)
    b lbl_fn_800C41D0_00001218
lbl_fn_800C41D0_00001210:
    li r0, 0x0
    stw r0, 0xc(r31)
lbl_fn_800C41D0_00001218:
    lis r28, lbl_80733880@ha
    li r24, 0x0
    li r26, 0x0
    li r25, 0x0
    addi r30, r28, lbl_80733880@l
    li r29, 0x0
    b lbl_fn_800C41D0_00001328
lbl_fn_800C41D0_00001234:
    lwz r3, 0x10(r31)
    lwz r3, 0xa4c(r3)
    lwzx r27, r3, r26
    mr r3, r27
    bl fn_8007B078
    cmpwi r3, -0x1
    mr r23, r3
    bne lbl_fn_800C41D0_00001280
    lwz r5, 0x10(r31)
    mr r6, r27
    addi r3, r1, 0x18
    addi r4, r28, lbl_80733880@l
    lwz r5, 0x10(r5)
    crclr 6
    bl sprintf
    stb r29, 0x117(r1)
    addi r4, r1, 0x18
    lwz r3, lbl_8087EEB8
    bl fn_800697D8
lbl_fn_800C41D0_00001280:
    stw r23, 0xc(r1)
    mr r3, r23
    stw r29, 0x14(r1)
    stw r24, 0x10(r1)
    bl fn_80081C34
    cmpwi r3, 0x0
    mr r23, r3
    beq lbl_fn_800C41D0_000012FC
    addi r5, r30, 0x26
    li r3, 0x18
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_800C41D0_000012D0
    li r4, -0x1
    bl fn_8007AA30
    mr r27, r3
lbl_fn_800C41D0_000012D0:
    stw r27, 0x14(r1)
    mr r3, r27
    lwz r4, 0x10(r31)
    mr r5, r24
    bl fn_8007AB38
    mr r3, r27
    mr r4, r23
    li r5, 0x1
    bl fn_8007C018
    mr r3, r27
    bl fn_8007B100
lbl_fn_800C41D0_000012FC:
    lwz r3, 0x4(r31)
    addi r26, r26, 0x4
    lwz r0, 0xc(r1)
    addi r24, r24, 0x1
    add r4, r3, r25
    lwz r3, 0x10(r1)
    stw r0, 0x0(r4)
    addi r25, r25, 0xc
    lwz r0, 0x14(r1)
    stw r3, 0x4(r4)
    stw r0, 0x8(r4)
lbl_fn_800C41D0_00001328:
    lwz r0, 0x0(r31)
    cmplw r24, r0
    blt lbl_fn_800C41D0_00001234
    mulli r0, r0, 0xc
    lwz r3, 0x4(r31)
    addi r5, r1, 0x8
    add r4, r3, r0
    bl fn_800C4444
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_800C41D0_00001374
lbl_fn_800C41D0_00001354:
    lwz r0, 0x4(r31)
    lwz r4, 0xc(r31)
    add r3, r0, r5
    addi r5, r5, 0xc
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    stwx r6, r4, r0
    addi r6, r6, 0x1
lbl_fn_800C41D0_00001374:
    lwz r0, 0x0(r31)
    cmplw r6, r0
    blt lbl_fn_800C41D0_00001354
    mr r3, r31
    lmw r23, 0x11c(r1)
    lwz r0, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_800C442C(void)
{
    nofralloc
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r4, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_800C4444(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x74(r1)
    stmw r24, 0x50(r1)
    lis r24, 0x2aab
    mr r25, r3
    mr r26, r4
    mr r27, r5
    addi r31, r6, 0x6667
    subi r30, r24, 0x5555
lbl_fn_800C4444_000013DC:
    subf r0, r25, r26
    mulhw r0, r30, r0
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_800C4444_000017EC
    cmpwi r7, 0x14
    bgt lbl_fn_800C4444_00001498
    cmplw r25, r26
    beq lbl_fn_800C4444_000017EC
    subi r0, r26, 0xc
    b lbl_fn_800C4444_0000148C
lbl_fn_800C4444_00001410:
    cmplw r25, r26
    mr r7, r25
    beq lbl_fn_800C4444_00001444
    addi r5, r25, 0xc
    b lbl_fn_800C4444_0000143C
lbl_fn_800C4444_00001424:
    lwz r4, 0x0(r5)
    lwz r3, 0x0(r7)
    cmpw r4, r3
    bge lbl_fn_800C4444_00001438
    mr r7, r5
lbl_fn_800C4444_00001438:
    addi r5, r5, 0xc
lbl_fn_800C4444_0000143C:
    cmplw r5, r26
    bne lbl_fn_800C4444_00001424
lbl_fn_800C4444_00001444:
    cmplw r7, r25
    beq lbl_fn_800C4444_00001488
    lwz r6, 0x0(r7)
    lwz r5, 0x4(r7)
    lwz r4, 0x8(r7)
    lwz r3, 0x0(r25)
    stw r3, 0x0(r7)
    lwz r3, 0x4(r25)
    stw r3, 0x4(r7)
    lwz r3, 0x8(r25)
    stw r3, 0x8(r7)
    stw r6, 0x0(r25)
    stw r5, 0x4(r25)
    stw r6, 0x44(r1)
    stw r5, 0x48(r1)
    stw r4, 0x4c(r1)
    stw r4, 0x8(r25)
lbl_fn_800C4444_00001488:
    addi r25, r25, 0xc
lbl_fn_800C4444_0000148C:
    cmplw r25, r0
    bne lbl_fn_800C4444_00001410
    b lbl_fn_800C4444_000017EC
lbl_fn_800C4444_00001498:
    lwz r4, lbl_8087D920
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r31, r4
    addi r6, r4, 0x1
    cmpwi r6, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r3, r25, r0
    blt lbl_fn_800C4444_000014D8
    li r6, -0x4
lbl_fn_800C4444_000014D8:
    mulhw r4, r31, r6
    addi r0, r6, 0x1
    slwi r5, r7, 2
    stw r0, lbl_8087D920
    cmpwi r0, 0x5
    subf r0, r7, r5
    srawi r0, r0, 2
    addze r5, r0
    srawi r0, r4, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r0, r5, r0
    mulli r0, r0, 0xc
    add r4, r25, r0
    blt lbl_fn_800C4444_00001524
    li r6, -0x4
    stw r6, lbl_8087D920
lbl_fn_800C4444_00001524:
    subi r28, r26, 0xc
    mr r6, r27
    mr r5, r28
    bl fn_800C4894
    lwz r5, 0x0(r28)
    mr r29, r25
    mr r3, r28
    b lbl_fn_800C4444_00001548
lbl_fn_800C4444_00001544:
    addi r29, r29, 0xc
lbl_fn_800C4444_00001548:
    lwz r0, 0x0(r29)
    cmpw r0, r5
    blt lbl_fn_800C4444_00001544
lbl_fn_800C4444_00001554:
    subi r3, r3, 0xc
    cmplw r29, r3
    beq lbl_fn_800C4444_0000157C
    lwz r0, 0x0(r3)
    xor r0, r5, r0
    srawi r4, r0, 1
    and r0, r0, r5
    subf r0, r0, r4
    srwi. r0, r0, 31
    beq lbl_fn_800C4444_00001554
lbl_fn_800C4444_0000157C:
    cmplw r29, r3
    bge lbl_fn_800C4444_00001640
    lwz r6, 0x0(r29)
    lwz r5, 0x4(r29)
    lwz r4, 0x8(r29)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r29)
    addi r29, r29, 0xc
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r6, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    stw r4, 0x8(r3)
    b lbl_fn_800C4444_000015CC
lbl_fn_800C4444_000015C8:
    addi r29, r29, 0xc
lbl_fn_800C4444_000015CC:
    lwz r5, 0x0(r28)
    lwz r0, 0x0(r29)
    cmpw r0, r5
    blt lbl_fn_800C4444_000015C8
lbl_fn_800C4444_000015DC:
    lwzu r7, -0xc(r3)
    xor r0, r5, r7
    srawi r4, r0, 1
    and r0, r0, r5
    subf r0, r0, r4
    srwi. r0, r0, 31
    beq lbl_fn_800C4444_000015DC
    cmplw r29, r3
    bge lbl_fn_800C4444_00001640
    lwz r6, 0x0(r29)
    lwz r5, 0x4(r29)
    lwz r4, 0x8(r29)
    stw r6, 0x2c(r1)
    stw r7, 0x0(r29)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r29)
    addi r29, r29, 0xc
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0x30(r1)
    stw r4, 0x34(r1)
    stw r4, 0x8(r3)
    b lbl_fn_800C4444_000015CC
lbl_fn_800C4444_00001640:
    cmplw r29, r25
    bne lbl_fn_800C4444_00001788
    lwz r6, 0x0(r29)
    subi r3, r26, 0xc
    lwz r5, 0x4(r29)
    lwz r4, 0x8(r29)
    lwz r0, 0x0(r28)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r28)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r28)
    stw r0, 0x8(r29)
    addi r29, r29, 0xc
    stw r6, 0x0(r28)
    stw r5, 0x4(r28)
    stw r4, 0x8(r28)
    lwz r7, 0x0(r25)
    lwz r0, -0xc(r26)
    stw r6, 0x20(r1)
    cmpw r7, r0
    stw r5, 0x24(r1)
    stw r4, 0x28(r1)
    blt lbl_fn_800C4444_000016FC
    b lbl_fn_800C4444_000016A4
lbl_fn_800C4444_000016A0:
    addi r29, r29, 0xc
lbl_fn_800C4444_000016A4:
    cmplw r29, r26
    beq lbl_fn_800C4444_000016B8
    lwz r0, 0x0(r29)
    cmpw r7, r0
    bge lbl_fn_800C4444_000016A0
lbl_fn_800C4444_000016B8:
    cmplw r29, r3
    bge lbl_fn_800C4444_000016FC
    lwz r6, 0x0(r29)
    lwz r5, 0x4(r29)
    lwz r4, 0x8(r29)
    lwz r0, 0x0(r3)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r29)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r6, 0x14(r1)
    stw r5, 0x18(r1)
    stw r4, 0x1c(r1)
    stw r4, 0x8(r3)
lbl_fn_800C4444_000016FC:
    cmplw r29, r3
    bge lbl_fn_800C4444_00001780
    b lbl_fn_800C4444_0000170C
lbl_fn_800C4444_00001708:
    addi r29, r29, 0xc
lbl_fn_800C4444_0000170C:
    lwz r6, 0x0(r25)
    lwz r5, 0x0(r29)
    xor r0, r5, r6
    srawi r4, r0, 1
    and r0, r0, r5
    subf r0, r0, r4
    srwi. r0, r0, 31
    beq lbl_fn_800C4444_00001708
lbl_fn_800C4444_0000172C:
    lwzu r0, -0xc(r3)
    cmpw r6, r0
    blt lbl_fn_800C4444_0000172C
    cmplw r29, r3
    bge lbl_fn_800C4444_00001780
    lwz r6, 0x0(r29)
    lwz r5, 0x4(r29)
    lwz r4, 0x8(r29)
    stw r6, 0x8(r1)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r3)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r3)
    stw r0, 0x8(r29)
    addi r29, r29, 0xc
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r5, 0xc(r1)
    stw r4, 0x10(r1)
    stw r4, 0x8(r3)
    b lbl_fn_800C4444_0000170C
lbl_fn_800C4444_00001780:
    mr r25, r29
    b lbl_fn_800C4444_000013DC
lbl_fn_800C4444_00001788:
    subf r0, r25, r29
    subi r4, r24, 0x5555
    mulhw r3, r4, r0
    subf r0, r29, r26
    mulhw r0, r4, r0
    srawi r3, r3, 1
    srwi r4, r3, 31
    srawi r0, r0, 1
    add r4, r3, r4
    srwi r3, r0, 31
    add r0, r0, r3
    cmpw r4, r0
    bge lbl_fn_800C4444_000017D4
    mr r3, r25
    mr r4, r29
    mr r5, r27
    bl fn_800C4444
    mr r25, r29
    b lbl_fn_800C4444_000013DC
lbl_fn_800C4444_000017D4:
    mr r3, r29
    mr r4, r26
    mr r5, r27
    bl fn_800C4444
    mr r26, r29
    b lbl_fn_800C4444_000013DC
lbl_fn_800C4444_000017EC:
    lmw r24, 0x50(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800C4894(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    lwz r8, 0x0(r5)
    lwz r10, 0x0(r3)
    srawi r7, r8, 31
    lwz r11, 0x0(r4)
    srwi r6, r10, 31
    subfc r0, r10, r8
    adde. r9, r7, r6
    srwi r6, r8, 31
    srawi r7, r11, 31
    subfc r0, r8, r11
    adde r0, r7, r6
    beq lbl_fn_800C4894_0000183C
    cmpwi r0, 0x0
    bne lbl_fn_800C4894_00001954
lbl_fn_800C4894_0000183C:
    cmpwi r9, 0x0
    bne lbl_fn_800C4894_0000188C
    cmpwi r0, 0x0
    bne lbl_fn_800C4894_0000188C
    lwz r7, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r5, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    stw r7, 0x2c(r1)
    stw r6, 0x30(r1)
    stw r5, 0x34(r1)
    stw r7, 0x0(r4)
    stw r6, 0x4(r4)
    stw r5, 0x8(r4)
    b lbl_fn_800C4894_00001954
lbl_fn_800C4894_0000188C:
    cmpw r11, r10
    bge lbl_fn_800C4894_000018D0
    lwz r8, 0x0(r3)
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    lwz r7, 0x4(r3)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    lwz r6, 0x8(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r8, 0x0(r4)
    stw r7, 0x4(r4)
    stw r6, 0x8(r4)
lbl_fn_800C4894_000018D0:
    cmpwi r9, 0x0
    beq lbl_fn_800C4894_00001918
    lwz r7, 0x0(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r4)
    lwz r6, 0x4(r4)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r4)
    lwz r3, 0x8(r4)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r4)
    stw r7, 0x14(r1)
    stw r6, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r7, 0x0(r5)
    stw r6, 0x4(r5)
    stw r3, 0x8(r5)
    b lbl_fn_800C4894_00001954
lbl_fn_800C4894_00001918:
    lwz r7, 0x0(r3)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r6, 0x4(r3)
    lwz r0, 0x4(r5)
    stw r0, 0x4(r3)
    lwz r4, 0x8(r3)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r3)
    stw r7, 0x8(r1)
    stw r6, 0xc(r1)
    stw r4, 0x10(r1)
    stw r7, 0x0(r5)
    stw r6, 0x4(r5)
    stw r4, 0x8(r5)
lbl_fn_800C4894_00001954:
    addi r1, r1, 0x40
    blr
}

asm void fn_800C49F0(void)
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
    beq lbl_fn_800C49F0_000019E0
    addic. r0, r3, 0x8
    beq lbl_fn_800C49F0_000019A4
    lwz r3, 0xc(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800C49F0_00001998
    bl fn_80084C24
lbl_fn_800C49F0_00001998:
    li r0, 0x0
    stw r0, 0xc(r30)
    stw r0, 0x8(r30)
lbl_fn_800C49F0_000019A4:
    cmpwi r30, 0x0
    beq lbl_fn_800C49F0_000019D0
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_800C49F0_000019C4
    beq lbl_fn_800C49F0_000019C4
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_800C49F0_000019C4:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
lbl_fn_800C49F0_000019D0:
    cmpwi r31, 0x0
    ble lbl_fn_800C49F0_000019E0
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C49F0_000019E0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C4A90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_80733880@ha
    li r7, 0x0
    stw r0, 0x34(r1)
    addi r4, r4, lbl_80733880@l
    addi r5, r4, 0x26
    stw r31, 0x2c(r1)
    li r4, 0x6
    mr r6, r5
    stw r30, 0x28(r1)
    mr r30, r3
    li r3, 0x54
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_800C4A90_00001A54
    mr r4, r30
    bl fn_8007C144
    mr r31, r3
lbl_fn_800C4A90_00001A54:
    lwz r3, 0x10(r30)
    lwz r3, 0x10(r3)
    bl fn_800DC6B4
    stw r3, 0x0(r31)
    lwz r3, 0x10(r30)
    lwz r3, 0x10(r3)
    bl fn_800DC6B4
    stw r3, 0x4(r31)
    lis r3, lbl_80733880@ha
    addi r3, r3, lbl_80733880@l
    li r9, -0x1
    lwz r8, 0x10(r30)
    addi r5, r3, 0x26
    mr r6, r5
    li r4, 0x6
    lbz r0, 0x14(r8)
    li r7, 0x0
    stb r0, 0x18(r31)
    lbz r0, 0x15(r8)
    stb r0, 0x19(r31)
    lbz r0, 0x16(r8)
    stb r0, 0x1a(r31)
    lbz r0, 0x17(r8)
    stb r0, 0x1b(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x1c(r3)
    stb r0, 0x20(r31)
    lbz r0, 0x1d(r3)
    stb r0, 0x21(r31)
    lbz r0, 0x1e(r3)
    stb r0, 0x22(r31)
    lbz r0, 0x1f(r3)
    stb r0, 0x23(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x18(r3)
    stb r0, 0x1c(r31)
    lbz r0, 0x19(r3)
    stb r0, 0x1d(r31)
    lbz r0, 0x1a(r3)
    stb r0, 0x1e(r31)
    lbz r0, 0x1b(r3)
    stb r0, 0x1f(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x24(r3)
    stb r0, 0x24(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x28(r3)
    stb r0, 0x25(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x2c(r3)
    stb r0, 0x26(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x30(r3)
    stb r0, 0x27(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x34(r3)
    stb r0, 0x28(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x38(r3)
    stb r0, 0x29(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x3c(r3)
    stb r0, 0x2a(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x40(r3)
    stb r0, 0x2b(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x44(r3)
    stb r0, 0x2c(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x48(r3)
    stb r0, 0x2d(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x4c(r3)
    stb r0, 0x2e(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x50(r3)
    stb r0, 0x2f(r31)
    lwz r3, 0x10(r30)
    lwz r8, 0x14(r31)
    lwz r10, 0x7c(r3)
    subfic r3, r10, -0x1
    addi r0, r10, 0x1
    or r0, r3, r0
    rlwimi r8, r0, 12, 20, 20
    stw r8, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r3, 0x64(r3)
    subi r0, r3, 0x2
    cntlzw r0, r0
    rlwimi r8, r0, 7, 19, 19
    stw r8, 0x14(r31)
    stb r9, 0x4c(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0xe4(r3)
    stb r0, 0x4a(r31)
    lwz r3, 0x10(r30)
    lwz r29, 0xe4(r3)
    mulli r3, r29, 0x18
    addi r3, r3, 0x10
    bl fn_800846FC
    lis r4, fn_8007E9EC@ha
    lis r5, fn_8007AA64@ha
    mr r7, r29
    li r6, 0x18
    addi r4, r4, fn_8007E9EC@l
    addi r5, r5, fn_8007AA64@l
    bl fn_80695720
    stw r3, 0xc(r31)
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_800C4A90_00001C30
lbl_fn_800C4A90_00001C14:
    lwz r0, 0xc(r31)
    mr r5, r28
    lwz r4, 0x10(r30)
    add r3, r0, r29
    bl fn_8007AB38
    addi r29, r29, 0x18
    addi r28, r28, 0x1
lbl_fn_800C4A90_00001C30:
    lbz r0, 0x4a(r31)
    cmpw r28, r0
    blt lbl_fn_800C4A90_00001C14
    lwz r4, 0x10(r30)
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r3, lbl_80733878@ha
    lwz r0, 0x90(r4)
    stb r0, 0x4e(r31)
    lfd f2, lbl_80733878@l(r3)
    lwz r3, 0x10(r30)
    lfs f0, lbl_80881140
    lwz r0, 0xa8(r3)
    stb r0, 0x4f(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x8c(r3)
    stb r0, 0x50(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0xa4(r3)
    stb r0, 0x51(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x18c(r3)
    stb r0, 0x38(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x18d(r3)
    stb r0, 0x39(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x18e(r3)
    stb r0, 0x3a(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x18f(r3)
    stb r0, 0x3b(r31)
    lwz r3, 0x10(r30)
    lbz r0, 0x54(r3)
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fctiwz f0, f0
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    stw r0, 0x3c(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0x14(r31)
    lwz r3, 0xa38(r3)
    subi r3, r3, 0x1
    cntlzw r3, r3
    rlwimi r0, r3, 14, 12, 12
    stw r0, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r3, 0xa14(r3)
    bl fn_800D1C60
    subfic r4, r3, 0x7
    subi r0, r3, 0x7
    or r0, r4, r0
    lwz r4, 0x14(r31)
    rlwimi r4, r0, 0, 0, 0
    stw r4, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0xa18(r3)
    rlwimi r4, r0, 20, 4, 11
    stw r4, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r3, 0xa14(r3)
    bl fn_800D1C60
    lwz r4, 0x14(r31)
    rlwimi r4, r3, 28, 1, 3
    stw r4, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r0, 0xa28(r3)
    rlwimi r4, r0, 10, 21, 21
    stw r4, 0x14(r31)
    lwz r3, 0x10(r30)
    lwz r3, 0xa2c(r3)
    bl fn_800D1C60
    lwz r5, 0x14(r31)
    rlwimi r5, r3, 7, 22, 24
    stw r5, 0x14(r31)
    mr r3, r31
    lwz r4, 0x10(r30)
    lwz r0, 0xa30(r4)
    rlwimi r5, r0, 6, 25, 25
    stw r5, 0x14(r31)
    bl fn_80081D00
    mr r3, r31
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800C4E38(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    blr
}

asm void fn_800C4E50(void)
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
    beq lbl_fn_800C4E50_00001E1C
    addic. r4, r3, 0x4
    beq lbl_fn_800C4E50_00001E0C
    beq lbl_fn_800C4E50_00001E0C
    beq lbl_fn_800C4E50_00001E0C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800C4E50_00001E0C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_800C4E50_00001E0C:
    cmpwi r31, 0x0
    ble lbl_fn_800C4E50_00001E1C
    mr r3, r30
    bl dtor_80084684
lbl_fn_800C4E50_00001E1C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C4ECC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    lwz r0, 0x8(r3)
    lwz r5, 0x4(r3)
    slwi r0, r0, 3
    add r0, r5, r0
    b lbl_fn_800C4ECC_00001E68
lbl_fn_800C4ECC_00001E58:
    lfs f0, 0x4(r5)
    fcmpo cr0, f1, f0
    blt lbl_fn_800C4ECC_00001E70
    addi r5, r5, 0x8
lbl_fn_800C4ECC_00001E68:
    cmplw r5, r0
    bne lbl_fn_800C4ECC_00001E58
lbl_fn_800C4ECC_00001E70:
    stw r4, 0x10(r1)
    li r0, 0x0
    mr r4, r5
    addi r5, r1, 0x10
    stfs f1, 0x14(r1)
    addi r6, r1, 0x8
    addi r3, r3, 0x4
    stb r0, 0x8(r1)
    bl fn_800C507C
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800C4F38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lwz r3, 0x4(r3)
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r3, 0x0(r3)
    bl fn_800C4A90
    stw r3, 0x0(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800C4F70(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    stw r28, 0x20(r1)
    mr r28, r3
    mr r3, r4
    lwz r4, 0x4(r28)
    lwz r4, 0x0(r4)
    lwz r4, 0x10(r4)
    lwz r4, 0x10(r4)
    bl fn_8008937C
    lis r6, lbl_80733880@ha
    lis r4, 0x99
    addi r6, r6, lbl_80733880@l
    mr r30, r3
    subi r7, r4, 0x6980
    mr r5, r28
    addi r4, r6, 0x27
    li r6, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    li r29, 0x0
    li r31, 0x0
    b lbl_fn_800C4F70_00001F8C
lbl_fn_800C4F70_00001F50:
    lwz r0, 0x4(r28)
    mr r3, r30
    lfs f1, lbl_80881144
    li r6, 0x0
    lwzx r4, r31, r0
    add r5, r0, r31
    lfs f2, lbl_80881148
    addi r5, r5, 0x4
    lwz r4, 0x10(r4)
    li r7, 0x0
    lfs f3, lbl_8088114C
    lwz r4, 0x10(r4)
    bl fn_8008771C
    addi r31, r31, 0x8
    addi r29, r29, 0x1
lbl_fn_800C4F70_00001F8C:
    lwz r0, 0x8(r28)
    cmplw r29, r0
    blt lbl_fn_800C4F70_00001F50
    addic. r3, r1, 0x8
    li r0, 0x0
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    beq lbl_fn_800C4F70_00001FC8
    beq lbl_fn_800C4F70_00001FC8
    cmpwi r0, 0x0
    beq lbl_fn_800C4F70_00001FC8
    stw r0, 0xc(r1)
    li r3, 0x0
    bl dtor_80084684
lbl_fn_800C4F70_00001FC8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
