#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003DD50(void);
extern void fn_8003DEE0(void);
extern void fn_8003E530(void);
extern void fn_8067E23C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80775C48[];
extern u8 lbl_80775C84[];
extern u8 lbl_80775CE0[];
extern u8 lbl_80775D38[];
extern u8 lbl_80775D90[];
extern u8 lbl_80775DE8[];
extern u8 lbl_80775E40[];
extern u8 lbl_80775E98[];
extern u8 lbl_80775EF0[];
extern u8 lbl_80775F48[];
extern u8 lbl_80775FA0[];
extern u8 lbl_80775FF8[];
extern u8 lbl_80776050[];
extern u8 lbl_807760A8[];
extern u8 lbl_80776100[];
extern u8 lbl_80776158[];
extern u8 lbl_807761B0[];
extern u8 lbl_80776208[];
extern u8 lbl_80776260[];
extern u8 lbl_807762B8[];
extern u8 lbl_80776310[];
extern u8 lbl_80776368[];
extern u8 lbl_807763C0[];
extern u8 lbl_80776418[];
extern u8 lbl_80776470[];
extern u8 lbl_807764C8[];
extern u8 lbl_80776520[];
extern u8 lbl_80776578[];
extern u8 lbl_807765D0[];
extern u8 lbl_80776628[];
extern u8 lbl_80776680[];
extern u8 lbl_807766D8[];
extern u8 lbl_80776730[];
extern u8 lbl_80776788[];
extern u8 lbl_807767E0[];
extern u8 lbl_80776838[];
extern u8 lbl_80776890[];
extern u8 lbl_807768E8[];
extern u8 lbl_80776940[];
extern u8 lbl_80776998[];
extern u8 lbl_807769F0[];
extern u8 lbl_80776A48[];
extern u8 lbl_80776AA0[];
extern u8 lbl_80776AF8[];
extern u8 lbl_80776B50[];
extern u8 lbl_80776BA8[];
extern u8 lbl_80776C00[];
extern u8 lbl_80776C58[];
extern u8 lbl_80776CB0[];
extern u8 lbl_80776D08[];
extern u8 lbl_80776D60[];
extern u8 lbl_80776DB8[];
extern u8 lbl_80776E10[];
extern u8 lbl_80776E68[];
extern u8 lbl_80776EC0[];
extern u8 lbl_80776F18[];
extern u8 lbl_80776F70[];
extern u8 lbl_80776FC8[];
extern u8 lbl_80777020[];
extern u8 lbl_80777078[];
extern u8 lbl_807770D0[];
extern u8 lbl_80777128[];
extern u8 lbl_80777180[];
extern u8 lbl_807771D8[];
extern u8 lbl_80777230[];
extern u8 lbl_807C6B84[];

/* Small data declarations */
extern u32 lbl_8087D6F0;
extern u32 lbl_8087D6F1;

/* Function declarations */
void fn_8001E0A8(void);
void fn_8001E0B8(void);
void fn_8001E168(void);
void fn_8001E1D0(void);
void fn_8001E340(void);
void fn_8001E350(void);
void fn_8001E360(void);
void fn_8001E370(void);
void fn_8001E380(void);
void fn_8001E390(void);
void fn_8001E3A0(void);
void fn_8001E3B0(void);
void fn_8001E3C0(void);
void fn_8001E3D0(void);
void fn_8001E3E0(void);
void fn_8001E3F0(void);
void fn_8001E400(void);
void fn_8001E410(void);
void fn_8001E420(void);
void fn_8001E430(void);
void fn_8001E440(void);
void fn_8001E450(void);
void fn_8001E460(void);
void fn_8001E470(void);
void fn_8001E480(void);
void fn_8001E490(void);
void fn_8001E4A0(void);
void fn_8001E4B0(void);
void fn_8001E4C0(void);
void fn_8001E4D0(void);
void fn_8001E4E0(void);
void fn_8001E4F0(void);
void fn_8001E500(void);
void fn_8001E510(void);
void fn_8001E520(void);
void fn_8001E530(void);
void fn_8001E540(void);
void fn_8001E550(void);
void fn_8001E560(void);
void fn_8001E570(void);
void fn_8001E580(void);
void fn_8001E590(void);
void fn_8001E5A0(void);
void fn_8001E5B0(void);
void fn_8001E5C0(void);
void fn_8001E5D0(void);
void fn_8001E5E0(void);
void fn_8001E5F0(void);
void fn_8001E600(void);
void fn_8001E610(void);
void fn_8001E620(void);
void fn_8001E630(void);
void fn_8001E640(void);
void fn_8001E650(void);
void fn_8001E660(void);
void fn_8001E670(void);
void fn_8001E680(void);
void fn_8001E690(void);
void fn_8001E6A0(void);
void fn_8001E6B0(void);
void fn_8001E6C0(void);
void fn_8001E6D0(void);
void fn_8001E6E0(void);
void fn_8001E6F0(void);
void fn_8001E700(void);
void fn_8001E710(void);
void fn_8001E720(void);
void fn_8001E730(void);
void fn_8001EA18(void);
void fn_8001ECD0(void);

asm void fn_8001E0A8(void)
{
    nofralloc
    lis r4, lbl_80777230@ha
    addi r4, r4, lbl_80777230@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E0B8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x0(r4)
    stw r0, 0x24(r1)
    srwi. r0, r6, 31
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_8001E0B8_00000058
    lwz r5, 0x4(r4)
    lwz r0, 0x8(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_8001E0B8_00000098
lbl_fn_8001E0B8_00000058:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x4(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r29
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_8001E0B8_00000098:
    lwz r0, 0x0(r31)
    mr r3, r29
    stw r0, 0xc(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001E168(void)
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
    beq lbl_fn_8001E168_0000010C
    beq lbl_fn_8001E168_000000FC
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E168_000000FC
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E168_000000FC:
    cmpwi r31, 0x0
    ble lbl_fn_8001E168_0000010C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001E168_0000010C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001E1D0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    stmw r26, 0x28(r1)
    mr r29, r5
    mr r28, r4
    mr r27, r3
    addi r5, r1, 0xc
    mr r4, r29
    mr r3, r28
    bl fn_8003E530
    lwz r30, 0xc(r1)
    mr r31, r3
    cmpwi r30, 0x0
    beq lbl_fn_8001E1D0_00000240
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8001E1D0_00000188
    lbz r0, 0x0(r29)
    addi r4, r29, 0x1
    clrlwi r26, r0, 25
    b lbl_fn_8001E1D0_00000190
lbl_fn_8001E1D0_00000188:
    lwz r4, 0x8(r29)
    lwz r26, 0x4(r29)
lbl_fn_8001E1D0_00000190:
    stw r26, 0x14(r1)
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8001E1D0_000001AC
    lbz r0, 0xc(r30)
    clrlwi r5, r0, 25
    b lbl_fn_8001E1D0_000001B0
lbl_fn_8001E1D0_000001AC:
    lwz r5, 0x10(r30)
lbl_fn_8001E1D0_000001B0:
    stw r5, 0x10(r1)
    lwz r0, 0xc(r30)
    srwi. r0, r0, 31
    bne lbl_fn_8001E1D0_000001D0
    lbz r0, 0xc(r30)
    addi r3, r30, 0xd
    clrlwi r0, r0, 25
    b lbl_fn_8001E1D0_000001D8
lbl_fn_8001E1D0_000001D0:
    lwz r3, 0x14(r30)
    lwz r0, 0x10(r30)
lbl_fn_8001E1D0_000001D8:
    cmplw r5, r0
    stw r0, 0x18(r1)
    addi r5, r1, 0x18
    bge lbl_fn_8001E1D0_000001EC
    addi r5, r1, 0x10
lbl_fn_8001E1D0_000001EC:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x1c
    stw r0, 0x1c(r1)
    cmplw r26, r0
    bge lbl_fn_8001E1D0_00000204
    addi r5, r1, 0x14
lbl_fn_8001E1D0_00000204:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8001E1D0_00000238
    lwz r0, 0x1c(r1)
    cmplw r0, r26
    bge lbl_fn_8001E1D0_00000228
    li r3, -0x1
    b lbl_fn_8001E1D0_00000238
lbl_fn_8001E1D0_00000228:
    bne lbl_fn_8001E1D0_00000234
    li r3, 0x0
    b lbl_fn_8001E1D0_00000238
lbl_fn_8001E1D0_00000234:
    li r3, 0x1
lbl_fn_8001E1D0_00000238:
    cmpwi r3, 0x0
    bge lbl_fn_8001E1D0_00000268
lbl_fn_8001E1D0_00000240:
    lbz r5, 0x8(r1)
    mr r3, r28
    lbz r6, 0x9(r1)
    mr r4, r31
    mr r7, r29
    bl fn_8003DD50
    lbz r0, lbl_8087D6F0
    stw r3, 0x20(r1)
    stb r0, 0x24(r1)
    b lbl_fn_8001E1D0_00000274
lbl_fn_8001E1D0_00000268:
    lbz r0, lbl_8087D6F1
    stw r30, 0x20(r1)
    stb r0, 0x24(r1)
lbl_fn_8001E1D0_00000274:
    lwz r3, 0x20(r1)
    lbz r0, 0x24(r1)
    stw r3, 0x0(r27)
    stb r0, 0x4(r27)
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8001E340(void)
{
    nofralloc
    lis r4, lbl_807771D8@ha
    addi r4, r4, lbl_807771D8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E350(void)
{
    nofralloc
    lis r4, lbl_80777180@ha
    addi r4, r4, lbl_80777180@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E360(void)
{
    nofralloc
    lis r4, lbl_80777128@ha
    addi r4, r4, lbl_80777128@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E370(void)
{
    nofralloc
    lis r4, lbl_807770D0@ha
    addi r4, r4, lbl_807770D0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E380(void)
{
    nofralloc
    lis r4, lbl_80777078@ha
    addi r4, r4, lbl_80777078@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E390(void)
{
    nofralloc
    lis r4, lbl_80777020@ha
    addi r4, r4, lbl_80777020@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3A0(void)
{
    nofralloc
    lis r4, lbl_80776FC8@ha
    addi r4, r4, lbl_80776FC8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3B0(void)
{
    nofralloc
    lis r4, lbl_80776F70@ha
    addi r4, r4, lbl_80776F70@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3C0(void)
{
    nofralloc
    lis r4, lbl_80776F18@ha
    addi r4, r4, lbl_80776F18@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3D0(void)
{
    nofralloc
    lis r4, lbl_80776EC0@ha
    addi r4, r4, lbl_80776EC0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3E0(void)
{
    nofralloc
    lis r4, lbl_80776E68@ha
    addi r4, r4, lbl_80776E68@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E3F0(void)
{
    nofralloc
    lis r4, lbl_80776E10@ha
    addi r4, r4, lbl_80776E10@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E400(void)
{
    nofralloc
    lis r4, lbl_80776DB8@ha
    addi r4, r4, lbl_80776DB8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E410(void)
{
    nofralloc
    lis r4, lbl_80776D60@ha
    addi r4, r4, lbl_80776D60@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E420(void)
{
    nofralloc
    lis r4, lbl_80776D08@ha
    addi r4, r4, lbl_80776D08@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E430(void)
{
    nofralloc
    lis r4, lbl_80776CB0@ha
    addi r4, r4, lbl_80776CB0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E440(void)
{
    nofralloc
    lis r4, lbl_80776C58@ha
    addi r4, r4, lbl_80776C58@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E450(void)
{
    nofralloc
    lis r4, lbl_80776C00@ha
    addi r4, r4, lbl_80776C00@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E460(void)
{
    nofralloc
    lis r4, lbl_80776BA8@ha
    addi r4, r4, lbl_80776BA8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E470(void)
{
    nofralloc
    lis r4, lbl_80776B50@ha
    addi r4, r4, lbl_80776B50@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E480(void)
{
    nofralloc
    lis r4, lbl_80776AF8@ha
    addi r4, r4, lbl_80776AF8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E490(void)
{
    nofralloc
    lis r4, lbl_80776AA0@ha
    addi r4, r4, lbl_80776AA0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4A0(void)
{
    nofralloc
    lis r4, lbl_80776A48@ha
    addi r4, r4, lbl_80776A48@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4B0(void)
{
    nofralloc
    lis r4, lbl_807769F0@ha
    addi r4, r4, lbl_807769F0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4C0(void)
{
    nofralloc
    lis r4, lbl_80776998@ha
    addi r4, r4, lbl_80776998@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4D0(void)
{
    nofralloc
    lis r4, lbl_80776940@ha
    addi r4, r4, lbl_80776940@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4E0(void)
{
    nofralloc
    lis r4, lbl_807768E8@ha
    addi r4, r4, lbl_807768E8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E4F0(void)
{
    nofralloc
    lis r4, lbl_80776890@ha
    addi r4, r4, lbl_80776890@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E500(void)
{
    nofralloc
    lis r4, lbl_80776838@ha
    addi r4, r4, lbl_80776838@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E510(void)
{
    nofralloc
    lis r4, lbl_807767E0@ha
    addi r4, r4, lbl_807767E0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E520(void)
{
    nofralloc
    lis r4, lbl_80776788@ha
    addi r4, r4, lbl_80776788@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E530(void)
{
    nofralloc
    lis r4, lbl_80776730@ha
    addi r4, r4, lbl_80776730@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E540(void)
{
    nofralloc
    lis r4, lbl_807766D8@ha
    addi r4, r4, lbl_807766D8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E550(void)
{
    nofralloc
    lis r4, lbl_80776680@ha
    addi r4, r4, lbl_80776680@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E560(void)
{
    nofralloc
    lis r4, lbl_80776628@ha
    addi r4, r4, lbl_80776628@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E570(void)
{
    nofralloc
    lis r4, lbl_807765D0@ha
    addi r4, r4, lbl_807765D0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E580(void)
{
    nofralloc
    lis r4, lbl_80776578@ha
    addi r4, r4, lbl_80776578@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E590(void)
{
    nofralloc
    lis r4, lbl_80776520@ha
    addi r4, r4, lbl_80776520@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5A0(void)
{
    nofralloc
    lis r4, lbl_807764C8@ha
    addi r4, r4, lbl_807764C8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5B0(void)
{
    nofralloc
    lis r4, lbl_80776470@ha
    addi r4, r4, lbl_80776470@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5C0(void)
{
    nofralloc
    lis r4, lbl_80776418@ha
    addi r4, r4, lbl_80776418@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5D0(void)
{
    nofralloc
    lis r4, lbl_807763C0@ha
    addi r4, r4, lbl_807763C0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5E0(void)
{
    nofralloc
    lis r4, lbl_80776368@ha
    addi r4, r4, lbl_80776368@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E5F0(void)
{
    nofralloc
    lis r4, lbl_80776310@ha
    addi r4, r4, lbl_80776310@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E600(void)
{
    nofralloc
    lis r4, lbl_807762B8@ha
    addi r4, r4, lbl_807762B8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E610(void)
{
    nofralloc
    lis r4, lbl_80776260@ha
    addi r4, r4, lbl_80776260@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E620(void)
{
    nofralloc
    lis r4, lbl_80776208@ha
    addi r4, r4, lbl_80776208@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E630(void)
{
    nofralloc
    lis r4, lbl_807761B0@ha
    addi r4, r4, lbl_807761B0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E640(void)
{
    nofralloc
    lis r4, lbl_80776158@ha
    addi r4, r4, lbl_80776158@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E650(void)
{
    nofralloc
    lis r4, lbl_80776100@ha
    addi r4, r4, lbl_80776100@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E660(void)
{
    nofralloc
    lis r4, lbl_807760A8@ha
    addi r4, r4, lbl_807760A8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E670(void)
{
    nofralloc
    lis r4, lbl_80776050@ha
    addi r4, r4, lbl_80776050@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E680(void)
{
    nofralloc
    lis r4, lbl_80775FF8@ha
    addi r4, r4, lbl_80775FF8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E690(void)
{
    nofralloc
    lis r4, lbl_80775FA0@ha
    addi r4, r4, lbl_80775FA0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6A0(void)
{
    nofralloc
    lis r4, lbl_80775F48@ha
    addi r4, r4, lbl_80775F48@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6B0(void)
{
    nofralloc
    lis r4, lbl_80775EF0@ha
    addi r4, r4, lbl_80775EF0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6C0(void)
{
    nofralloc
    lis r4, lbl_80775E98@ha
    addi r4, r4, lbl_80775E98@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6D0(void)
{
    nofralloc
    lis r4, lbl_80775E40@ha
    addi r4, r4, lbl_80775E40@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6E0(void)
{
    nofralloc
    lis r4, lbl_80775DE8@ha
    addi r4, r4, lbl_80775DE8@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E6F0(void)
{
    nofralloc
    lis r4, lbl_80775D90@ha
    addi r4, r4, lbl_80775D90@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E700(void)
{
    nofralloc
    lis r4, lbl_80775D38@ha
    addi r4, r4, lbl_80775D38@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E710(void)
{
    nofralloc
    lis r4, lbl_80775CE0@ha
    addi r4, r4, lbl_80775CE0@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E720(void)
{
    nofralloc
    lis r4, lbl_80775C84@ha
    addi r4, r4, lbl_80775C84@l
    stw r4, 0x0(r3)
    blr
}

asm void fn_8001E730(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C6B84@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C6B84@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    addi r29, r3, 0x4
    lwz r31, 0x8(r3)
    b lbl_fn_8001E730_00000704
lbl_fn_8001E730_000006B4:
    lwz r3, 0x18(r31)
    bl dtor_80084684
    lwz r3, 0x4(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8001E730_000006EC
    b lbl_fn_8001E730_000006D0
lbl_fn_8001E730_000006CC:
    mr r3, r0
lbl_fn_8001E730_000006D0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8001E730_000006CC
    mr r31, r3
    b lbl_fn_8001E730_00000704
    b lbl_fn_8001E730_000006EC
lbl_fn_8001E730_000006E8:
    mr r31, r3
lbl_fn_8001E730_000006EC:
    lwz r0, 0x8(r31)
    clrrwi r3, r0, 1
    lwz r0, 0x0(r3)
    cmplw r31, r0
    bne lbl_fn_8001E730_000006E8
    mr r31, r3
lbl_fn_8001E730_00000704:
    cmplw r31, r29
    bne lbl_fn_8001E730_000006B4
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    lwz r31, 0x4(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8001E730_00000954
    lwz r30, 0x0(r31)
    cmpwi r30, 0x0
    beq lbl_fn_8001E730_00000814
    lwz r29, 0x0(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8001E730_00000788
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_00000748
    bl fn_8003DEE0
lbl_fn_8001E730_00000748:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_00000760
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_00000760:
    addic. r3, r29, 0xc
    beq lbl_fn_8001E730_00000780
    beq lbl_fn_8001E730_00000780
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_00000780
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_00000780:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8001E730_00000788:
    lwz r29, 0x4(r30)
    cmpwi r29, 0x0
    beq lbl_fn_8001E730_000007EC
    lwz r4, 0x0(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_000007AC
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_000007AC:
    lwz r4, 0x4(r29)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_000007C4
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_000007C4:
    addic. r3, r29, 0xc
    beq lbl_fn_8001E730_000007E4
    beq lbl_fn_8001E730_000007E4
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_000007E4
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_000007E4:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8001E730_000007EC:
    addic. r3, r30, 0xc
    beq lbl_fn_8001E730_0000080C
    beq lbl_fn_8001E730_0000080C
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_0000080C
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_0000080C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001E730_00000814:
    lwz r29, 0x4(r31)
    cmpwi r29, 0x0
    beq lbl_fn_8001E730_00000910
    lwz r30, 0x0(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8001E730_00000884
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_00000844
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_00000844:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_0000085C
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_0000085C:
    addic. r3, r30, 0xc
    beq lbl_fn_8001E730_0000087C
    beq lbl_fn_8001E730_0000087C
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_0000087C
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_0000087C:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001E730_00000884:
    lwz r30, 0x4(r29)
    cmpwi r30, 0x0
    beq lbl_fn_8001E730_000008E8
    lwz r4, 0x0(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_000008A8
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_000008A8:
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8001E730_000008C0
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    bl fn_8003DEE0
lbl_fn_8001E730_000008C0:
    addic. r3, r30, 0xc
    beq lbl_fn_8001E730_000008E0
    beq lbl_fn_8001E730_000008E0
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_000008E0
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_000008E0:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001E730_000008E8:
    addic. r3, r29, 0xc
    beq lbl_fn_8001E730_00000908
    beq lbl_fn_8001E730_00000908
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_00000908
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_00000908:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8001E730_00000910:
    addic. r3, r31, 0xc
    beq lbl_fn_8001E730_00000930
    beq lbl_fn_8001E730_00000930
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_8001E730_00000930
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_8001E730_00000930:
    mr r3, r31
    bl dtor_80084684
    lis r4, lbl_807C6B84@ha
    li r5, 0x0
    addi r3, r4, lbl_807C6B84@l
    stw r5, lbl_807C6B84@l(r4)
    addi r0, r3, 0x4
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
lbl_fn_8001E730_00000954:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8001EA18(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    li r0, 0x0
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r3
    stw r29, 0x44(r1)
    addi r29, r1, 0x30
    stw r28, 0x40(r1)
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    bl strlen
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    mr r6, r30
    add r7, r30, r28
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lis r3, lbl_807C6B84@ha
    addi r30, r1, 0x31
    addi r3, r3, lbl_807C6B84@l
    lwz r31, 0x4(r3)
    addi r29, r3, 0x4
    b lbl_fn_8001EA18_00000AD8
lbl_fn_8001EA18_000009F4:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000A10
    lbz r0, 0x30(r1)
    mr r4, r30
    clrlwi r28, r0, 25
    b lbl_fn_8001EA18_00000A18
lbl_fn_8001EA18_00000A10:
    lwz r4, 0x38(r1)
    lwz r28, 0x34(r1)
lbl_fn_8001EA18_00000A18:
    stw r28, 0x18(r1)
    lwz r0, 0xc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000A34
    lbz r0, 0xc(r31)
    clrlwi r5, r0, 25
    b lbl_fn_8001EA18_00000A38
lbl_fn_8001EA18_00000A34:
    lwz r5, 0x10(r31)
lbl_fn_8001EA18_00000A38:
    stw r5, 0x1c(r1)
    lwz r0, 0xc(r31)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000A58
    lbz r0, 0xc(r31)
    addi r3, r31, 0xd
    clrlwi r0, r0, 25
    b lbl_fn_8001EA18_00000A60
lbl_fn_8001EA18_00000A58:
    lwz r3, 0x14(r31)
    lwz r0, 0x10(r31)
lbl_fn_8001EA18_00000A60:
    cmplw r5, r0
    stw r0, 0x14(r1)
    addi r5, r1, 0x14
    bge lbl_fn_8001EA18_00000A74
    addi r5, r1, 0x1c
lbl_fn_8001EA18_00000A74:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x10
    stw r0, 0x10(r1)
    cmplw r28, r0
    bge lbl_fn_8001EA18_00000A8C
    addi r5, r1, 0x18
lbl_fn_8001EA18_00000A8C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8001EA18_00000AC0
    lwz r0, 0x10(r1)
    cmplw r0, r28
    bge lbl_fn_8001EA18_00000AB0
    li r3, -0x1
    b lbl_fn_8001EA18_00000AC0
lbl_fn_8001EA18_00000AB0:
    bne lbl_fn_8001EA18_00000ABC
    li r3, 0x0
    b lbl_fn_8001EA18_00000AC0
lbl_fn_8001EA18_00000ABC:
    li r3, 0x1
lbl_fn_8001EA18_00000AC0:
    cmpwi r3, 0x0
    blt lbl_fn_8001EA18_00000AD4
    mr r29, r31
    lwz r31, 0x0(r31)
    b lbl_fn_8001EA18_00000AD8
lbl_fn_8001EA18_00000AD4:
    lwz r31, 0x4(r31)
lbl_fn_8001EA18_00000AD8:
    cmpwi r31, 0x0
    bne lbl_fn_8001EA18_000009F4
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    addi r0, r3, 0x4
    cmplw r29, r0
    beq lbl_fn_8001EA18_00000BC8
    lwz r0, 0xc(r29)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000B10
    lbz r0, 0xc(r29)
    addi r4, r29, 0xd
    clrlwi r31, r0, 25
    b lbl_fn_8001EA18_00000B18
lbl_fn_8001EA18_00000B10:
    lwz r4, 0x14(r29)
    lwz r31, 0x10(r29)
lbl_fn_8001EA18_00000B18:
    lwz r0, 0x30(r1)
    stw r31, 0x24(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000B34
    lbz r0, 0x30(r1)
    clrlwi r3, r0, 25
    b lbl_fn_8001EA18_00000B38
lbl_fn_8001EA18_00000B34:
    lwz r3, 0x34(r1)
lbl_fn_8001EA18_00000B38:
    lwz r0, 0x30(r1)
    stw r3, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8001EA18_00000B54
    lbz r0, 0x30(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8001EA18_00000B5C
lbl_fn_8001EA18_00000B54:
    lwz r30, 0x38(r1)
    lwz r0, 0x34(r1)
lbl_fn_8001EA18_00000B5C:
    cmplw r3, r0
    stw r0, 0x28(r1)
    addi r3, r1, 0x28
    bge lbl_fn_8001EA18_00000B70
    addi r3, r1, 0x20
lbl_fn_8001EA18_00000B70:
    lwz r0, 0x0(r3)
    mr r3, r30
    stw r0, 0x2c(r1)
    addi r5, r1, 0x2c
    cmplw r31, r0
    bge lbl_fn_8001EA18_00000B8C
    addi r5, r1, 0x24
lbl_fn_8001EA18_00000B8C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8001EA18_00000BC0
    lwz r0, 0x2c(r1)
    cmplw r0, r31
    bge lbl_fn_8001EA18_00000BB0
    li r3, -0x1
    b lbl_fn_8001EA18_00000BC0
lbl_fn_8001EA18_00000BB0:
    bne lbl_fn_8001EA18_00000BBC
    li r3, 0x0
    b lbl_fn_8001EA18_00000BC0
lbl_fn_8001EA18_00000BBC:
    li r3, 0x1
lbl_fn_8001EA18_00000BC0:
    cmpwi r3, 0x0
    bge lbl_fn_8001EA18_00000BD4
lbl_fn_8001EA18_00000BC8:
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    addi r29, r3, 0x4
lbl_fn_8001EA18_00000BD4:
    lwz r0, 0x30(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8001EA18_00000BE8
    lwz r3, 0x38(r1)
    bl dtor_80084684
lbl_fn_8001EA18_00000BE8:
    lis r3, lbl_807C6B84@ha
    addi r3, r3, lbl_807C6B84@l
    addi r0, r3, 0x4
    cmplw r29, r0
    beq lbl_fn_8001EA18_00000C04
    lwz r3, 0x18(r29)
    b lbl_fn_8001EA18_00000C08
lbl_fn_8001EA18_00000C04:
    li r3, 0x0
lbl_fn_8001EA18_00000C08:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8001ECD0(void)
{
    nofralloc
    cmplwi r4, 0xe
    bgt lbl_fn_8001ECD0_00000D38
    lis r5, jumptable_80775C48@ha
    slwi r0, r4, 2
    addi r5, r5, jumptable_80775C48@l
    lwzx r5, r5, r0
    mtctr r5
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x2c(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x30(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x34(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x3c(r12)
    mtctr r12
    bctr
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctr
lbl_fn_8001ECD0_00000D38:
    li r3, -0x1
    blr
}
