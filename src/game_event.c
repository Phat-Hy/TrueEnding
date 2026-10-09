#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001A510(void);
extern void fn_8001A65C(void);
extern void fn_8001A8A4(void);
extern void fn_8001AC54(void);
extern void fn_8001AD80(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5DC(void);
extern void fn_8001B634(void);
extern void fn_8001BB04(void);
extern void fn_8001BC38(void);
extern void fn_8001BC80(void);
extern void fn_8001BCB4(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8001C01C(void);
extern void fn_8001C038(void);
extern void fn_8001C068(void);
extern void fn_8003D298(void);
extern void fn_8003D3F8(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];

/* Small data declarations */
extern u32 lbl_80880798;

/* Function declarations */
void fn_8003002C(void);
void fn_800300CC(void);
void fn_8003015C(void);
void fn_80030220(void);
void fn_800302A0(void);
void fn_800302F0(void);
void fn_800303C0(void);
void fn_80030494(void);
void fn_8003068C(void);
void fn_80030700(void);
void fn_80030AFC(void);
void fn_80030D2C(void);
void fn_80030F80(void);
void fn_80031004(void);
void fn_80031178(void);
void fn_800312EC(void);
void fn_800313D4(void);
void fn_800314B0(void);
void fn_80031688(void);
void fn_80031758(void);
void fn_800317AC(void);
void fn_8003191C(void);
void fn_800319AC(void);
void fn_80031B28(void);
void fn_80031C04(void);
void fn_80031CE0(void);
void fn_80031DE4(void);
void fn_80031E38(void);
void fn_80032000(void);
void fn_80032090(void);
void fn_8003226C(void);
void fn_80032348(void);
void fn_80032424(void);
void fn_80032470(void);
void fn_8003268C(void);
void fn_80032768(void);
void fn_800328D8(void);
void fn_800329B4(void);
void fn_80032D60(void);
void fn_80032DF0(void);
void fn_80032F04(void);
void fn_80032F18(void);
void fn_80032FA8(void);
void fn_80033020(void);
void fn_80033040(void);
void fn_80033418(void);
void fn_800334F4(void);
void fn_80033588(void);
void fn_800335FC(void);
void fn_80033764(void);
void fn_800337F4(void);
void fn_80033854(void);
void fn_80033978(void);
void fn_80033A54(void);
void fn_80033C18(void);
void fn_80033CF4(void);
void fn_80033EA8(void);
void fn_80033F38(void);
void fn_80033F98(void);
void fn_800340F0(void);
void fn_800341CC(void);
void fn_800343E8(void);
void fn_800344C4(void);
void fn_800346D0(void);
void fn_80034760(void);
void fn_800347C0(void);
void fn_80034A44(void);
void fn_80034B20(void);

asm void fn_8003002C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003002C_00000028
    li r0, -0x1
    b lbl_fn_8003002C_00000034
lbl_fn_8003002C_00000028:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003002C_00000034:
    cmpwi r0, 0x1
    bne lbl_fn_8003002C_00000044
    li r3, -0x1
    b lbl_fn_8003002C_00000090
lbl_fn_8003002C_00000044:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r3, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r3)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_8003002C_0000008C
    bl fn_80030494
    cmpwi r3, 0x3
    bne lbl_fn_8003002C_00000084
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_8003002C_00000090
lbl_fn_8003002C_00000084:
    li r3, -0x1
    b lbl_fn_8003002C_00000090
lbl_fn_8003002C_0000008C:
    li r3, -0x1
lbl_fn_8003002C_00000090:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800300CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    stw r31, 0x1c(r1)
    li r4, 0x0
    li r3, 0x1
    stw r30, 0x18(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    stw r29, 0x14(r1)
    lwz r29, 0x7c(r5)
    lwz r12, 0x80(r5)
    lwz r11, 0x84(r5)
    lwz r10, 0x88(r5)
    lwz r9, 0x8c(r5)
    lwz r8, 0x90(r5)
    lwz r7, 0x94(r5)
    lwz r6, 0x98(r5)
    lwz r5, 0x9c(r5)
    stw r29, 0x18(r31)
    stw r12, 0x1c(r31)
    stw r11, 0x20(r31)
    stw r10, 0x24(r31)
    stw r9, 0x28(r31)
    stw r8, 0x2c(r31)
    stw r7, 0x30(r31)
    stw r6, 0x34(r31)
    stw r5, 0x38(r31)
    stw r4, 0x3c(r31)
    stw r0, lbl_807C6A40@l(r30)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8003015C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    lwz r3, lbl_807C68C0@l(r4)
    addi r4, r4, lbl_807C68C0@l
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8003015C_0000015C
    cmpwi r4, 0x0
    bne lbl_fn_8003015C_00000164
lbl_fn_8003015C_0000015C:
    li r6, 0x0
    b lbl_fn_8003015C_00000174
lbl_fn_8003015C_00000164:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
lbl_fn_8003015C_00000174:
    lis r5, lbl_807C6A40@ha
    li r3, 0x1
    addi r4, r5, lbl_807C6A40@l
    stw r3, lbl_807C6A40@l(r5)
    lwz r0, 0x10(r4)
    stw r6, 0x50(r4)
    cmpwi r0, 0x1
    blt lbl_fn_8003015C_0000019C
    li r0, -0x1
    b lbl_fn_8003015C_000001A4
lbl_fn_8003015C_0000019C:
    stw r3, lbl_807C6A40@l(r5)
    li r0, 0x1
lbl_fn_8003015C_000001A4:
    cmpwi r0, 0x1
    bne lbl_fn_8003015C_000001E0
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_8003015C_000001E4
lbl_fn_8003015C_000001E0:
    li r3, -0x1
lbl_fn_8003015C_000001E4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80030220(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r3, 0x0
    li r8, 0xa
    stw r0, 0x24(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r31, 0x1c(r1)
    addi r7, r1, 0x14
    stw r30, 0x18(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x3c(r31)
    stw r3, 0x14(r1)
    stw r3, 0x10(r1)
    li r3, 0xc
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r4, 0x40(r31)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    addi r0, r4, 0x1
    stw r0, 0x40(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800302A0(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800302A0_000002BC
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x50(r3)
    cmpwi r0, 0xc8
    blt lbl_fn_800302A0_000002AC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r3, 0x7
    blr
lbl_fn_800302A0_000002AC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r3, 0x1
    blr
lbl_fn_800302A0_000002BC:
    li r3, -0x1
    blr
}

asm void fn_800302F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800302F0_00000310
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_800302F0_00000310
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_800302F0_00000314
lbl_fn_800302F0_00000310:
    li r0, 0x0
lbl_fn_800302F0_00000314:
    cmpwi r0, 0x0
    beq lbl_fn_800302F0_0000037C
    lis r31, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r31, lbl_807C68C0@l
    stw r8, 0x14(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x2
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807307A0@ha
    lis r4, lbl_807C6A40@ha
    addi r3, r3, lbl_807307A0@l
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    addi r4, r3, 0x419
    lwz r3, lbl_807C68C0@l(r31)
    bl fn_8001C068
    li r3, 0x4
    b lbl_fn_800302F0_00000380
lbl_fn_800302F0_0000037C:
    li r3, -0x1
lbl_fn_800302F0_00000380:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800303C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800303C0_0000044C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800303C0_000003F4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800303C0_000003F4:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r4, lbl_807307A0@ha
    lis r3, lbl_807C68C0@ha
    addi r4, r4, lbl_807307A0@l
    lis r5, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r5)
    lwz r3, lbl_807C68C0@l(r3)
    addi r4, r4, 0x428
    bl fn_8001C068
    li r3, 0x1
    b lbl_fn_800303C0_00000450
lbl_fn_800303C0_0000044C:
    li r3, -0x1
lbl_fn_800303C0_00000450:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80030494(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80030494_00000658
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x40(r3)
    cmpwi r0, 0x1
    bge lbl_fn_80030494_000004B0
    lwz r5, 0x18(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_000004B0
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_000004B0:
    cmpwi r0, 0x2
    bge lbl_fn_80030494_000004E0
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x1c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_000004E0
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_000004E0:
    cmpwi r0, 0x3
    bge lbl_fn_80030494_00000510
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x20(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_00000510
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_00000510:
    cmpwi r0, 0x4
    bge lbl_fn_80030494_00000540
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x24(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_00000540
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_00000540:
    cmpwi r0, 0x5
    bge lbl_fn_80030494_00000570
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x28(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_00000570
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_00000570:
    cmpwi r0, 0x6
    bge lbl_fn_80030494_000005A0
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x2c(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_000005A0
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_000005A0:
    cmpwi r0, 0x7
    bge lbl_fn_80030494_000005D0
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x30(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_000005D0
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_000005D0:
    cmpwi r0, 0x8
    bge lbl_fn_80030494_00000600
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x34(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_00000600
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_00000600:
    cmpwi r0, 0x9
    bge lbl_fn_80030494_00000630
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r5, 0x38(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80030494_00000630
    li r0, 0x1
    stw r5, 0x3c(r3)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r4)
    blr
lbl_fn_80030494_00000630:
    lis r7, lbl_807C6A40@ha
    li r0, 0x1
    addi r6, r7, lbl_807C6A40@l
    li r4, 0x0
    lwz r5, 0x18(r6)
    li r3, 0x3
    stw r5, 0x3c(r6)
    stw r4, 0x40(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
lbl_fn_80030494_00000658:
    li r3, -0x1
    blr
}

asm void fn_8003068C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r8, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r8, lbl_807C68C0@l
    addi r6, r7, lbl_807C6A40@l
    li r5, 0x5a
    stw r31, 0xc(r1)
    li r31, 0x1
    li r4, 0x3c
    li r0, 0x64
    lwz r3, 0x30(r3)
    stw r3, 0x1c(r6)
    lwz r3, lbl_807C68C0@l(r8)
    stw r5, 0x20(r6)
    stw r4, 0x24(r6)
    stw r0, 0x28(r6)
    stw r31, lbl_807C6A40@l(r7)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_8003068C_000006BC
    li r31, 0x7
lbl_fn_8003068C_000006BC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80030700(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    lis r31, lbl_807C6A40@ha
    stw r30, 0x78(r1)
    addi r30, r31, lbl_807C6A40@l
    lwz r3, 0x24(r30)
    lwz r4, 0x28(r30)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80030700_00000714
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000714:
    cmpwi r3, 0xa
    bne lbl_fn_80030700_0000072C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_0000072C:
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80030700_00000898
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80030700_00000808
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x68(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80030700_000007CC
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_80030700_000007B8
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r3, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x3
    stw r0, 0x50(r1)
    stw r8, 0x54(r1)
    bl fn_8001AEDC
lbl_fn_80030700_000007B8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80030700_0000080C
lbl_fn_80030700_000007CC:
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x7
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_80030700_0000080C
lbl_fn_80030700_00000808:
    li r0, -0x1
lbl_fn_80030700_0000080C:
    cmpwi r0, 0x6
    bne lbl_fn_80030700_00000874
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_80030700_00000834
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000834:
    cmpwi r3, 0x6
    bne lbl_fn_80030700_00000850
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000850:
    cmpwi r3, 0x9
    bne lbl_fn_80030700_0000086C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_0000086C:
    li r3, -0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000874:
    cmpwi r0, 0x9
    bne lbl_fn_80030700_00000890
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000890:
    li r3, -0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000898:
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80030700_00000904
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80030700_000008FC
    lwz r0, 0x20(r30)
    li r8, 0x0
    stw r8, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r8, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x4
    stw r8, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_80030700_0000093C
lbl_fn_80030700_000008FC:
    li r0, -0x1
    b lbl_fn_80030700_0000093C
lbl_fn_80030700_00000904:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
lbl_fn_80030700_0000093C:
    cmpwi r0, 0x5
    bne lbl_fn_80030700_00000958
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000958:
    cmpwi r0, 0x1
    bne lbl_fn_80030700_00000974
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000974:
    cmpwi r0, 0x6
    bne lbl_fn_80030700_00000A38
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r31, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r31)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_80030700_000009A4
    li r3, -0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_000009A4:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80030700_000009D8
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80030700_000009D8
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80030700_000009DC
lbl_fn_80030700_000009D8:
    li r0, 0x0
lbl_fn_80030700_000009DC:
    cmpwi r0, 0x0
    beq lbl_fn_80030700_00000A30
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x24(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x1c(r1)
    li r3, 0x2
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000A30:
    li r3, -0x1
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000A38:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x68(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x6c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x68(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80030700_00000AB4
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x4
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80030700_00000AB8
lbl_fn_80030700_00000AB4:
    li r3, -0x1
lbl_fn_80030700_00000AB8:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80030AFC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C6A40@ha
    addi r3, r31, lbl_807C6A40@l
    stw r30, 0x48(r1)
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80030AFC_00000BAC
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80030AFC_00000B84
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80030AFC_00000B44
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80030AFC_00000B44:
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x0
    stw r0, 0x30(r1)
    stw r31, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80030AFC_00000B88
lbl_fn_80030AFC_00000B84:
    li r0, -0x1
lbl_fn_80030AFC_00000B88:
    cmpwi r0, 0x7
    bne lbl_fn_80030AFC_00000BA4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80030AFC_00000CE8
lbl_fn_80030AFC_00000BA4:
    li r3, -0x1
    b lbl_fn_80030AFC_00000CE8
lbl_fn_80030AFC_00000BAC:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x38(r1)
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80030AFC_00000C24
    lwz r0, 0x20(r5)
    li r8, 0x0
    stw r8, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r8, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x4
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x5
    b lbl_fn_80030AFC_00000CAC
lbl_fn_80030AFC_00000C24:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80030AFC_00000CA8
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80030AFC_00000C68
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80030AFC_00000C68:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80030AFC_00000CAC
lbl_fn_80030AFC_00000CA8:
    li r0, -0x1
lbl_fn_80030AFC_00000CAC:
    cmpwi r0, 0x5
    bne lbl_fn_80030AFC_00000CC8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80030AFC_00000CE8
lbl_fn_80030AFC_00000CC8:
    cmpwi r0, 0x7
    bne lbl_fn_80030AFC_00000CE4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80030AFC_00000CE8
lbl_fn_80030AFC_00000CE4:
    li r3, -0x1
lbl_fn_80030AFC_00000CE8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80030D2C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, 0x24(r31)
    lwz r4, 0x28(r31)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80030D2C_00000D40
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000D40:
    cmpwi r3, 0xa
    bne lbl_fn_80030D2C_00000D58
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000D58:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80030D2C_00000EC4
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80030D2C_00000E34
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80030D2C_00000DF8
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_80030D2C_00000DE4
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_80030D2C_00000DE4:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80030D2C_00000E38
lbl_fn_80030D2C_00000DF8:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80030D2C_00000E38
lbl_fn_80030D2C_00000E34:
    li r0, -0x1
lbl_fn_80030D2C_00000E38:
    cmpwi r0, 0x9
    bne lbl_fn_80030D2C_00000E54
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000E54:
    cmpwi r0, 0x6
    bne lbl_fn_80030D2C_00000EBC
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_80030D2C_00000E7C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000E7C:
    cmpwi r3, 0x9
    bne lbl_fn_80030D2C_00000E98
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000E98:
    cmpwi r3, 0x4
    bne lbl_fn_80030D2C_00000EB4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000EB4:
    li r3, -0x1
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000EBC:
    li r3, -0x1
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000EC4:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80030D2C_00000EE8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80030D2C_00000EEC
lbl_fn_80030D2C_00000EE8:
    li r0, -0x1
lbl_fn_80030D2C_00000EEC:
    cmpwi r0, 0x6
    bne lbl_fn_80030D2C_00000F38
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80030D2C_00000F14
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000F14:
    cmpwi r3, 0x4
    bne lbl_fn_80030D2C_00000F30
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000F30:
    li r3, -0x1
    b lbl_fn_80030D2C_00000F3C
lbl_fn_80030D2C_00000F38:
    li r3, -0x1
lbl_fn_80030D2C_00000F3C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80030F80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800314B0
    cmpwi r3, 0x0
    bne lbl_fn_80030F80_00000F80
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_80030F80_00000FC8
lbl_fn_80030F80_00000F80:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80030F80_00000F9C
    li r0, -0x1
    b lbl_fn_80030F80_00000FA8
lbl_fn_80030F80_00000F9C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80030F80_00000FA8:
    cmpwi r0, 0x1
    bne lbl_fn_80030F80_00000FC4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80030F80_00000FC8
lbl_fn_80030F80_00000FC4:
    li r3, -0x1
lbl_fn_80030F80_00000FC8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80031004(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80031004_00001008
    li r0, -0x1
    b lbl_fn_80031004_00001014
lbl_fn_80031004_00001008:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80031004_00001014:
    cmpwi r0, 0x1
    bne lbl_fn_80031004_00001024
    li r3, -0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001024:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80031004_00001130
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80031004_00001128
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, 0x24(r31)
    lwz r4, 0x28(r31)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80031004_00001074
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001074:
    cmpwi r3, 0xa
    bne lbl_fn_80031004_0000108C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_0000108C:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80031004_000010EC
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_80031004_000010B4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_80031004_00001134
lbl_fn_80031004_000010B4:
    cmpwi r3, 0x9
    bne lbl_fn_80031004_000010CC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x9
    b lbl_fn_80031004_00001134
lbl_fn_80031004_000010CC:
    cmpwi r3, 0x4
    bne lbl_fn_80031004_000010E4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_80031004_00001134
lbl_fn_80031004_000010E4:
    li r3, -0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_000010EC:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80031004_00001108
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001108:
    cmpwi r3, 0x4
    bne lbl_fn_80031004_00001120
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001120:
    li r3, -0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001128:
    li r3, -0x1
    b lbl_fn_80031004_00001134
lbl_fn_80031004_00001130:
    li r3, -0x1
lbl_fn_80031004_00001134:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80031178(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80031178_0000118C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_0000118C:
    cmpwi r3, 0x1
    bne lbl_fn_80031178_000011A4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_000011A4:
    lis r5, lbl_807C68C0@ha
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lis r3, lbl_8072FF60@ha
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfd f1, lbl_8072FF60@l(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80031178_000011F0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80031178_0000123C
lbl_fn_80031178_000011F0:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80031178_00001238
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r0, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x5
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x8
    b lbl_fn_80031178_0000123C
lbl_fn_80031178_00001238:
    li r0, -0x1
lbl_fn_80031178_0000123C:
    cmpwi r0, 0x8
    bne lbl_fn_80031178_00001258
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_00001258:
    cmpwi r0, 0x6
    bne lbl_fn_80031178_000012A4
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80031178_00001280
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_00001280:
    cmpwi r3, 0x6
    bne lbl_fn_80031178_0000129C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_0000129C:
    li r3, -0x1
    b lbl_fn_80031178_000012A8
lbl_fn_80031178_000012A4:
    li r3, -0x1
lbl_fn_80031178_000012A8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800312EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800312EC_0000136C
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800312EC_00001320
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800312EC_00001320:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x8(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x14
    stw r5, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r31, 0x10(r1)
    li r3, 0x4
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x5
    b lbl_fn_800312EC_00001370
lbl_fn_800312EC_0000136C:
    li r0, -0x1
lbl_fn_800312EC_00001370:
    cmpwi r0, 0x5
    bne lbl_fn_800312EC_0000138C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800312EC_00001390
lbl_fn_800312EC_0000138C:
    li r3, -0x1
lbl_fn_800312EC_00001390:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800313D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800313D4_00001448
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800313D4_00001408
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800313D4_00001408:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_800313D4_0000144C
lbl_fn_800313D4_00001448:
    li r0, -0x1
lbl_fn_800313D4_0000144C:
    cmpwi r0, 0x7
    bne lbl_fn_800313D4_00001468
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_800313D4_0000146C
lbl_fn_800313D4_00001468:
    li r3, -0x1
lbl_fn_800313D4_0000146C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800314B0(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    stw r29, 0x44(r1)
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800314B0_00001558
    lis r29, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001C01C
    cmpwi r3, 0x0
    bne lbl_fn_800314B0_00001550
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001C038
    cmpwi r3, 0x0
    bne lbl_fn_800314B0_00001550
    lwz r3, 0x1c(r31)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    addi r5, r29, lbl_807C68C0@l
    xoris r3, r3, 0x8000
    stw r3, 0x3c(r1)
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x38(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_800314B0_00001548
    li r0, 0x0
    li r3, 0x1
    stw r3, 0x18(r31)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r3, lbl_807C6A40@l(r30)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r0, 0x34(r1)
    stw r0, 0x30(r1)
    stw r0, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800314B0_00001640
lbl_fn_800314B0_00001548:
    li r3, -0x1
    b lbl_fn_800314B0_00001640
lbl_fn_800314B0_00001550:
    li r3, -0x1
    b lbl_fn_800314B0_00001640
lbl_fn_800314B0_00001558:
    lis r29, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001C01C
    cmpwi r3, 0x0
    bne lbl_fn_800314B0_0000157C
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001C038
    cmpwi r3, 0x0
    beq lbl_fn_800314B0_000015C4
lbl_fn_800314B0_0000157C:
    lis r7, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r7, lbl_807C6A40@l
    li r0, 0x1
    stw r8, 0x18(r3)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, lbl_807C6A40@l(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, 0x24(r1)
    stw r8, 0x20(r1)
    stw r8, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800314B0_00001640
lbl_fn_800314B0_000015C4:
    lwz r3, 0x1c(r31)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    addi r5, r29, lbl_807C68C0@l
    xoris r3, r3, 0x8000
    stw r3, 0x3c(r1)
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x38(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800314B0_0000163C
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r31)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, lbl_807C6A40@l(r30)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800314B0_00001640
lbl_fn_800314B0_0000163C:
    li r3, -0x1
lbl_fn_800314B0_00001640:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80031688(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80031688_00001684
    li r0, -0x1
    b lbl_fn_80031688_00001690
lbl_fn_80031688_00001684:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80031688_00001690:
    cmpwi r0, 0x1
    bne lbl_fn_80031688_000016A0
    li r3, -0x1
    b lbl_fn_80031688_0000171C
lbl_fn_80031688_000016A0:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80031688_00001718
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80031688_000016D8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80031688_0000171C
lbl_fn_80031688_000016D8:
    cmpwi r3, 0x4
    bne lbl_fn_80031688_000016F4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80031688_0000171C
lbl_fn_80031688_000016F4:
    cmpwi r3, 0x6
    bne lbl_fn_80031688_00001710
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80031688_0000171C
lbl_fn_80031688_00001710:
    li r3, -0x1
    b lbl_fn_80031688_0000171C
lbl_fn_80031688_00001718:
    li r3, -0x1
lbl_fn_80031688_0000171C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80031758(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80031758_00001760
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80031758_00001770
lbl_fn_80031758_00001760:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_80031758_00001770:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800317AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800317AC_000017FC
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800317AC_000017F4
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x7
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800317AC_00001838
lbl_fn_800317AC_000017F4:
    li r0, -0x1
    b lbl_fn_800317AC_00001838
lbl_fn_800317AC_000017FC:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_800317AC_00001838:
    cmpwi r0, 0x1
    bne lbl_fn_800317AC_00001854
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_00001854:
    cmpwi r0, 0x6
    bne lbl_fn_800317AC_000018BC
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_800317AC_0000187C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_0000187C:
    cmpwi r3, 0x9
    bne lbl_fn_800317AC_00001898
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_00001898:
    cmpwi r3, 0x6
    bne lbl_fn_800317AC_000018B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_000018B4:
    li r3, -0x1
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_000018BC:
    cmpwi r0, 0x9
    bne lbl_fn_800317AC_000018D8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800317AC_000018DC
lbl_fn_800317AC_000018D8:
    li r3, -0x1
lbl_fn_800317AC_000018DC:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8003191C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8003191C_00001918
    li r0, -0x1
    b lbl_fn_8003191C_00001924
lbl_fn_8003191C_00001918:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8003191C_00001924:
    cmpwi r0, 0x1
    bne lbl_fn_8003191C_0000196C
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8003191C_00001970
lbl_fn_8003191C_0000196C:
    li r3, -0x1
lbl_fn_8003191C_00001970:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800319AC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x34(r1)
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800319AC_00001A60
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800319AC_00001A20
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_800319AC_00001A0C
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_800319AC_00001A0C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800319AC_00001A64
lbl_fn_800319AC_00001A20:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800319AC_00001A64
lbl_fn_800319AC_00001A60:
    li r0, -0x1
lbl_fn_800319AC_00001A64:
    cmpwi r0, 0x6
    bne lbl_fn_800319AC_00001ACC
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_800319AC_00001A8C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800319AC_00001AEC
lbl_fn_800319AC_00001A8C:
    cmpwi r3, 0x6
    bne lbl_fn_800319AC_00001AA8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800319AC_00001AEC
lbl_fn_800319AC_00001AA8:
    cmpwi r3, 0x4
    bne lbl_fn_800319AC_00001AC4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800319AC_00001AEC
lbl_fn_800319AC_00001AC4:
    li r3, -0x1
    b lbl_fn_800319AC_00001AEC
lbl_fn_800319AC_00001ACC:
    cmpwi r0, 0x9
    bne lbl_fn_800319AC_00001AE8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800319AC_00001AEC
lbl_fn_800319AC_00001AE8:
    li r3, -0x1
lbl_fn_800319AC_00001AEC:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80031B28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80031B28_00001B9C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80031B28_00001B5C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80031B28_00001B5C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80031B28_00001BA0
lbl_fn_80031B28_00001B9C:
    li r0, -0x1
lbl_fn_80031B28_00001BA0:
    cmpwi r0, 0x7
    bne lbl_fn_80031B28_00001BBC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80031B28_00001BC0
lbl_fn_80031B28_00001BBC:
    li r3, -0x1
lbl_fn_80031B28_00001BC0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80031C04(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80031C04_00001C78
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80031C04_00001C38
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80031C04_00001C38:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80031C04_00001C7C
lbl_fn_80031C04_00001C78:
    li r0, -0x1
lbl_fn_80031C04_00001C7C:
    cmpwi r0, 0x7
    bne lbl_fn_80031C04_00001C98
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80031C04_00001C9C
lbl_fn_80031C04_00001C98:
    li r3, -0x1
lbl_fn_80031C04_00001C9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80031CE0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80031CE0_00001CE0
    li r0, -0x1
    b lbl_fn_80031CE0_00001CEC
lbl_fn_80031CE0_00001CE0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80031CE0_00001CEC:
    cmpwi r0, 0x1
    bne lbl_fn_80031CE0_00001CFC
    li r3, -0x1
    b lbl_fn_80031CE0_00001DA4
lbl_fn_80031CE0_00001CFC:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80031CE0_00001DA0
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80031CE0_00001D60
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80031CE0_00001DA4
lbl_fn_80031CE0_00001D60:
    cmpwi r3, 0x4
    bne lbl_fn_80031CE0_00001D7C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80031CE0_00001DA4
lbl_fn_80031CE0_00001D7C:
    cmpwi r3, 0x6
    bne lbl_fn_80031CE0_00001D98
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80031CE0_00001DA4
lbl_fn_80031CE0_00001D98:
    li r3, -0x1
    b lbl_fn_80031CE0_00001DA4
lbl_fn_80031CE0_00001DA0:
    li r3, -0x1
lbl_fn_80031CE0_00001DA4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80031DE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80031DE4_00001DEC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80031DE4_00001DFC
lbl_fn_80031DE4_00001DEC:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
lbl_fn_80031DE4_00001DFC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80031E38(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80031E38_00001E88
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80031E38_00001E80
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x7
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_80031E38_00001EC4
lbl_fn_80031E38_00001E80:
    li r0, -0x1
    b lbl_fn_80031E38_00001EC4
lbl_fn_80031E38_00001E88:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_80031E38_00001EC4:
    cmpwi r0, 0x1
    bne lbl_fn_80031E38_00001EE0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001EE0:
    cmpwi r0, 0x6
    bne lbl_fn_80031E38_00001F74
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_80031E38_00001F08
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001F08:
    cmpwi r3, 0x9
    bne lbl_fn_80031E38_00001F50
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x7
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001F50:
    cmpwi r3, 0x6
    bne lbl_fn_80031E38_00001F6C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001F6C:
    li r3, -0x1
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001F74:
    cmpwi r0, 0x9
    bne lbl_fn_80031E38_00001FBC
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80031E38_00001FC0
lbl_fn_80031E38_00001FBC:
    li r3, -0x1
lbl_fn_80031E38_00001FC0:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80032000(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80032000_00001FFC
    li r0, -0x1
    b lbl_fn_80032000_00002008
lbl_fn_80032000_00001FFC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80032000_00002008:
    cmpwi r0, 0x1
    bne lbl_fn_80032000_00002050
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80032000_00002054
lbl_fn_80032000_00002050:
    li r3, -0x1
lbl_fn_80032000_00002054:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032090(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x64(r1)
    addi r5, r5, lbl_807C68C0@l
    stw r31, 0x5c(r1)
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80032090_00002148
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80032090_00002108
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_80032090_000020F4
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r3, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x3
    stw r0, 0x30(r1)
    stw r8, 0x34(r1)
    bl fn_8001AEDC
lbl_fn_80032090_000020F4:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80032090_0000214C
lbl_fn_80032090_00002108:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x7
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_80032090_0000214C
lbl_fn_80032090_00002148:
    li r0, -0x1
lbl_fn_80032090_0000214C:
    cmpwi r0, 0x6
    bne lbl_fn_80032090_000021E0
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80032090_000021A0
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x7
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032090_0000222C
lbl_fn_80032090_000021A0:
    cmpwi r3, 0x6
    bne lbl_fn_80032090_000021BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80032090_0000222C
lbl_fn_80032090_000021BC:
    cmpwi r3, 0x4
    bne lbl_fn_80032090_000021D8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80032090_0000222C
lbl_fn_80032090_000021D8:
    li r3, -0x1
    b lbl_fn_80032090_0000222C
lbl_fn_80032090_000021E0:
    cmpwi r0, 0x9
    bne lbl_fn_80032090_00002228
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032090_0000222C
lbl_fn_80032090_00002228:
    li r3, -0x1
lbl_fn_80032090_0000222C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8003226C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8003226C_000022E0
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003226C_000022A0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003226C_000022A0:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8003226C_000022E4
lbl_fn_8003226C_000022E0:
    li r0, -0x1
lbl_fn_8003226C_000022E4:
    cmpwi r0, 0x7
    bne lbl_fn_8003226C_00002300
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8003226C_00002304
lbl_fn_8003226C_00002300:
    li r3, -0x1
lbl_fn_8003226C_00002304:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032348(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80032348_000023BC
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80032348_0000237C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80032348_0000237C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80032348_000023C0
lbl_fn_80032348_000023BC:
    li r0, -0x1
lbl_fn_80032348_000023C0:
    cmpwi r0, 0x7
    bne lbl_fn_80032348_000023DC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80032348_000023E0
lbl_fn_80032348_000023DC:
    li r3, -0x1
lbl_fn_80032348_000023E0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032424(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r31, lbl_807C6A40@l(r4)
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80032424_0000242C
    li r31, 0x7
lbl_fn_80032424_0000242C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80032470(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80032470_00002474
    li r0, -0x1
    b lbl_fn_80032470_00002480
lbl_fn_80032470_00002474:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80032470_00002480:
    cmpwi r0, 0x1
    bne lbl_fn_80032470_00002490
    li r3, -0x1
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002490:
    lis r30, lbl_807C68C0@ha
    addi r31, r30, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80032470_00002644
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80032470_0000263C
    lwz r30, lbl_807C68C0@l(r30)
    li r4, 0x1
    mr r3, r30
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_80032470_00002518
    mr r3, r30
    li r4, 0x1
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_80032470_000024E8
    li r0, -0x1
    b lbl_fn_80032470_0000251C
lbl_fn_80032470_000024E8:
    mr r3, r30
    li r4, 0x1
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_80032470_00002510
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_80032470_0000251C
lbl_fn_80032470_00002510:
    li r0, -0x1
    b lbl_fn_80032470_0000251C
lbl_fn_80032470_00002518:
    li r0, -0x1
lbl_fn_80032470_0000251C:
    cmpwi r0, 0x9
    bne lbl_fn_80032470_000025DC
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80032470_00002598
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_80032470_00002558
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002558:
    cmpwi r3, 0x4
    bne lbl_fn_80032470_00002574
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002574:
    cmpwi r3, 0x9
    bne lbl_fn_80032470_00002590
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002590:
    li r3, -0x1
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002598:
    lwz r0, lbl_807C68C0@l(r4)
    li r3, 0x0
    li r31, 0x1
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r3, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032470_00002648
lbl_fn_80032470_000025DC:
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_80032470_000025FC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80032470_00002648
lbl_fn_80032470_000025FC:
    cmpwi r3, 0x4
    bne lbl_fn_80032470_00002618
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002618:
    cmpwi r3, 0x9
    bne lbl_fn_80032470_00002634
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002634:
    li r3, -0x1
    b lbl_fn_80032470_00002648
lbl_fn_80032470_0000263C:
    li r3, -0x1
    b lbl_fn_80032470_00002648
lbl_fn_80032470_00002644:
    li r3, -0x1
lbl_fn_80032470_00002648:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8003268C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8003268C_00002700
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8003268C_000026C0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8003268C_000026C0:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_8003268C_00002704
lbl_fn_8003268C_00002700:
    li r0, -0x1
lbl_fn_8003268C_00002704:
    cmpwi r0, 0x7
    bne lbl_fn_8003268C_00002720
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8003268C_00002724
lbl_fn_8003268C_00002720:
    li r3, -0x1
lbl_fn_8003268C_00002724:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032768(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80032768_000027B8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80032768_000027B0
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x7
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_80032768_000027F4
lbl_fn_80032768_000027B0:
    li r0, -0x1
    b lbl_fn_80032768_000027F4
lbl_fn_80032768_000027B8:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
lbl_fn_80032768_000027F4:
    cmpwi r0, 0x9
    bne lbl_fn_80032768_00002810
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032768_00002898
lbl_fn_80032768_00002810:
    cmpwi r0, 0x1
    bne lbl_fn_80032768_0000282C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80032768_00002898
lbl_fn_80032768_0000282C:
    cmpwi r0, 0x6
    bne lbl_fn_80032768_00002894
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80032768_00002854
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032768_00002898
lbl_fn_80032768_00002854:
    cmpwi r3, 0x6
    bne lbl_fn_80032768_00002870
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80032768_00002898
lbl_fn_80032768_00002870:
    cmpwi r3, 0x4
    bne lbl_fn_80032768_0000288C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80032768_00002898
lbl_fn_80032768_0000288C:
    li r3, -0x1
    b lbl_fn_80032768_00002898
lbl_fn_80032768_00002894:
    li r3, -0x1
lbl_fn_80032768_00002898:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800328D8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800328D8_0000294C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800328D8_0000290C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800328D8_0000290C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_800328D8_00002950
lbl_fn_800328D8_0000294C:
    li r0, -0x1
lbl_fn_800328D8_00002950:
    cmpwi r0, 0x7
    bne lbl_fn_800328D8_0000296C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_800328D8_00002970
lbl_fn_800328D8_0000296C:
    li r3, -0x1
lbl_fn_800328D8_00002970:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800329B4(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    li r4, 0x1
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    lwz r31, lbl_807C68C0@l(r3)
    mr r3, r31
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_800329B4_00002A00
    mr r3, r31
    li r4, 0x1
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_800329B4_000029D0
    li r0, -0x1
    b lbl_fn_800329B4_00002A04
lbl_fn_800329B4_000029D0:
    mr r3, r31
    li r4, 0x1
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_800329B4_000029F8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800329B4_00002A04
lbl_fn_800329B4_000029F8:
    li r0, -0x1
    b lbl_fn_800329B4_00002A04
lbl_fn_800329B4_00002A00:
    li r0, -0x1
lbl_fn_800329B4_00002A04:
    cmpwi r0, 0x9
    bne lbl_fn_800329B4_00002BC0
    lis r3, lbl_807C68C0@ha
    addi r5, r3, lbl_807C68C0@l
    lwz r0, 0x2c(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800329B4_00002B7C
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800329B4_00002AEC
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800329B4_00002AAC
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_800329B4_00002A98
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    stw r3, 0x3c(r1)
    addi r7, r1, 0x38
    li r3, 0x3
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    bl fn_8001AEDC
lbl_fn_800329B4_00002A98:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800329B4_00002AF0
lbl_fn_800329B4_00002AAC:
    li r0, 0x0
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    stw r0, 0x4c(r1)
    addi r6, r1, 0x4c
    addi r7, r1, 0x48
    li r3, 0x7
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800329B4_00002AF0
lbl_fn_800329B4_00002AEC:
    li r0, -0x1
lbl_fn_800329B4_00002AF0:
    cmpwi r0, 0x9
    bne lbl_fn_800329B4_00002B0C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B0C:
    cmpwi r0, 0x6
    bne lbl_fn_800329B4_00002B74
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_800329B4_00002B34
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B34:
    cmpwi r3, 0x6
    bne lbl_fn_800329B4_00002B50
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B50:
    cmpwi r3, 0x9
    bne lbl_fn_800329B4_00002B6C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B6C:
    li r3, -0x1
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B74:
    li r3, -0x1
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002B7C:
    lwz r0, lbl_807C68C0@l(r3)
    li r3, 0x0
    li r31, 0x1
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r3, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x7
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002BC0:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800329B4_00002C94
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800329B4_00002C54
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_800329B4_00002C40
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_800329B4_00002C40:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800329B4_00002C98
lbl_fn_800329B4_00002C54:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800329B4_00002C98
lbl_fn_800329B4_00002C94:
    li r0, -0x1
lbl_fn_800329B4_00002C98:
    cmpwi r0, 0x9
    bne lbl_fn_800329B4_00002CB4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002CB4:
    cmpwi r0, 0x6
    bne lbl_fn_800329B4_00002D1C
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_800329B4_00002CDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002CDC:
    cmpwi r3, 0x6
    bne lbl_fn_800329B4_00002CF8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002CF8:
    cmpwi r3, 0x9
    bne lbl_fn_800329B4_00002D14
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002D14:
    li r3, -0x1
    b lbl_fn_800329B4_00002D20
lbl_fn_800329B4_00002D1C:
    li r3, -0x1
lbl_fn_800329B4_00002D20:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80032D60(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80032D60_00002D5C
    li r0, -0x1
    b lbl_fn_80032D60_00002D68
lbl_fn_80032D60_00002D5C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80032D60_00002D68:
    cmpwi r0, 0x1
    bne lbl_fn_80032D60_00002DB0
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80032D60_00002DB4
lbl_fn_80032D60_00002DB0:
    li r3, -0x1
lbl_fn_80032D60_00002DB4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032DF0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80032DF0_00002DF4
    li r0, -0x1
    b lbl_fn_80032DF0_00002E00
lbl_fn_80032DF0_00002DF4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80032DF0_00002E00:
    cmpwi r0, 0x1
    bne lbl_fn_80032DF0_00002E10
    li r3, -0x1
    b lbl_fn_80032DF0_00002EC0
lbl_fn_80032DF0_00002E10:
    lis r30, lbl_807C68C0@ha
    addi r31, r30, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80032DF0_00002EBC
    lwz r4, 0x44(r31)
    lis r0, 0x4330
    stw r0, 0x18(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x1c(r1)
    lfs f2, 0x1c(r31)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80032DF0_00002EB4
    lwz r3, lbl_807C68C0@l(r30)
    li r4, 0x0
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_80032DF0_00002EAC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80032DF0_00002EC0
lbl_fn_80032DF0_00002EAC:
    li r3, -0x1
    b lbl_fn_80032DF0_00002EC0
lbl_fn_80032DF0_00002EB4:
    li r3, -0x1
    b lbl_fn_80032DF0_00002EC0
lbl_fn_80032DF0_00002EBC:
    li r3, -0x1
lbl_fn_80032DF0_00002EC0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80032F04(void)
{
    nofralloc
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
}

asm void fn_80032F18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80032F18_00002F14
    li r0, -0x1
    b lbl_fn_80032F18_00002F20
lbl_fn_80032F18_00002F14:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80032F18_00002F20:
    cmpwi r0, 0x1
    bne lbl_fn_80032F18_00002F68
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80032F18_00002F6C
lbl_fn_80032F18_00002F68:
    li r3, -0x1
lbl_fn_80032F18_00002F6C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80032FA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80032FA8_00002FE0
    li r8, 0x0
    li r0, 0xf
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80032FA8_00002FE4
lbl_fn_80032FA8_00002FE0:
    li r3, -0x1
lbl_fn_80032FA8_00002FE4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80033020(void)
{
    nofralloc
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0x0
    stw r5, 0xe0(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
    blr
}

asm void fn_80033040(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    stw r30, 0x88(r1)
    addi r3, r31, 0x180
    stw r29, 0x84(r1)
    stw r28, 0x80(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80033040_00003050
    li r0, -0x1
    b lbl_fn_80033040_0000305C
lbl_fn_80033040_00003050:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r0, 0x1
lbl_fn_80033040_0000305C:
    cmpwi r0, 0x1
    bne lbl_fn_80033040_0000306C
    li r3, -0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_0000306C:
    addi r29, r31, 0x0
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80033040_000033C8
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_80033040_00003098
    li r3, -0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_00003098:
    addi r30, r31, 0x180
    lwz r3, 0xe0(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80033040_000030F8
    lwz r8, 0xe0(r30)
    cmpwi r8, 0x0
    beq lbl_fn_80033040_000030E8
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x74(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    stw r3, 0x70(r1)
    addi r7, r1, 0x74
    li r3, 0x3
    stw r0, 0x6c(r1)
    stw r8, 0x68(r1)
    bl fn_8001AEDC
lbl_fn_80033040_000030E8:
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x6
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_000030F8:
    addi r30, r31, 0x270
    addi r3, r30, 0x8
    bl fn_8001A510
    addi r28, r30, 0x8
    mr r3, r28
    bl fn_8001A65C
    mr r5, r28
    li r3, 0x0
    li r4, 0x0
    bl fn_8001A8A4
    mr r3, r28
    bl fn_8001AC54
    cmpwi r3, 0x5a
    bge lbl_fn_80033040_000032B4
    mr r3, r28
    bl fn_8001A510
    mr r3, r28
    bl fn_8001A65C
    mr r5, r28
    li r3, 0x0
    li r4, 0x0
    bl fn_8001A8A4
    lwz r0, 0x0(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80033040_00003168
    stw r0, 0x4(r30)
    li r0, 0x1
    b lbl_fn_80033040_00003174
lbl_fn_80033040_00003168:
    li r0, 0x0
    stw r0, 0x4(r30)
    li r0, 0x0
lbl_fn_80033040_00003174:
    cmpwi r0, 0x0
    beq lbl_fn_80033040_0000319C
    addi r4, r31, 0x270
    li r0, 0x1
    addi r3, r31, 0x180
    lwz r4, 0x4(r4)
    stw r4, 0xe0(r3)
    li r3, -0x1
    stw r0, 0x180(r31)
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_0000319C:
    lwz r3, 0x0(r31)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80033040_000031EC
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x64(r1)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    stw r8, 0x60(r1)
    addi r7, r1, 0x64
    li r3, 0x0
    stw r8, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_000031EC:
    addi r30, r31, 0x0
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r30)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80033040_00003224
    lwz r3, 0x0(r31)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80033040_00003224
    stw r3, 0x64(r30)
    li r0, 0x1
    b lbl_fn_80033040_00003228
lbl_fn_80033040_00003224:
    li r0, 0x0
lbl_fn_80033040_00003228:
    cmpwi r0, 0x0
    beq lbl_fn_80033040_00003274
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x64(r3)
    addi r4, r1, 0x48
    stw r8, 0x54(r1)
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    stw r8, 0x50(r1)
    li r3, 0x2
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x4
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_00003274:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x44(r1)
    addi r4, r1, 0x38
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    stw r8, 0x40(r1)
    addi r7, r1, 0x44
    li r3, 0x0
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_000032B4:
    lwz r3, 0x0(r31)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80033040_00003304
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r8, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x0
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_00003304:
    lfs f1, 0x1c(r29)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80033040_00003338
    lwz r3, 0x0(r31)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80033040_00003338
    stw r3, 0x64(r29)
    li r0, 0x1
    b lbl_fn_80033040_0000333C
lbl_fn_80033040_00003338:
    li r0, 0x0
lbl_fn_80033040_0000333C:
    cmpwi r0, 0x0
    beq lbl_fn_80033040_00003388
    addi r3, r31, 0x0
    li r8, 0x0
    lwz r0, 0x64(r3)
    addi r4, r1, 0x18
    stw r8, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r8, 0x20(r1)
    li r3, 0x2
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x4
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_00003388:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x180(r31)
    li r3, 0x1
    b lbl_fn_80033040_000033CC
lbl_fn_80033040_000033C8:
    li r3, -0x1
lbl_fn_80033040_000033CC:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    lwz r28, 0x80(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80033418(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80033418_0000348C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80033418_0000344C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80033418_0000344C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80033418_00003490
lbl_fn_80033418_0000348C:
    li r0, -0x1
lbl_fn_80033418_00003490:
    cmpwi r0, 0x7
    bne lbl_fn_80033418_000034AC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80033418_000034B0
lbl_fn_80033418_000034AC:
    li r3, -0x1
lbl_fn_80033418_000034B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800334F4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800334F4_00003528
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x1
    b lbl_fn_800334F4_0000352C
lbl_fn_800334F4_00003528:
    li r0, -0x1
lbl_fn_800334F4_0000352C:
    cmpwi r0, 0x1
    bne lbl_fn_800334F4_00003548
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800334F4_0000354C
lbl_fn_800334F4_00003548:
    li r3, -0x1
lbl_fn_800334F4_0000354C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80033588(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80033588_000035BC
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80033588_000035C0
lbl_fn_80033588_000035BC:
    li r3, -0x1
lbl_fn_80033588_000035C0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800335FC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lis r29, lbl_807C6A40@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, 0xe0(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800335FC_000036E4
    lis r31, lbl_807C68C0@ha
    lwz r5, 0xe0(r30)
    lwz r3, lbl_807C68C0@l(r31)
    li r4, 0x0
    bl fn_8001BB04
    cmpwi r3, 0x0
    beq lbl_fn_800335FC_0000367C
    lwz r3, lbl_807C68C0@l(r31)
    li r4, 0x0
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_800335FC_00003674
    lwz r0, 0xe0(r30)
    li r31, 0x0
    stw r31, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r31, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x7
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x9
    stw r31, 0xe0(r30)
    b lbl_fn_800335FC_0000371C
lbl_fn_800335FC_00003674:
    li r3, -0x1
    b lbl_fn_800335FC_0000371C
lbl_fn_800335FC_0000367C:
    addi r3, r31, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800335FC_000036DC
    lwz r8, 0xe0(r30)
    cmpwi r8, 0x0
    beq lbl_fn_800335FC_000036C8
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r3, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x3
    stw r0, 0x1c(r1)
    stw r8, 0x18(r1)
    bl fn_8001AEDC
lbl_fn_800335FC_000036C8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800335FC_0000371C
lbl_fn_800335FC_000036DC:
    li r3, -0x1
    b lbl_fn_800335FC_0000371C
lbl_fn_800335FC_000036E4:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
lbl_fn_800335FC_0000371C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80033764(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80033764_00003760
    li r0, -0x1
    b lbl_fn_80033764_0000376C
lbl_fn_80033764_00003760:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80033764_0000376C:
    cmpwi r0, 0x1
    bne lbl_fn_80033764_000037B4
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80033764_000037B8
lbl_fn_80033764_000037B4:
    li r3, -0x1
lbl_fn_80033764_000037B8:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800337F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x3c
    li r0, 0x64
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x24(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x28(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_800337F4_00003810
    li r31, 0x7
lbl_fn_800337F4_00003810:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80033854(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0xc(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80033854_00003854
    li r0, -0x1
    b lbl_fn_80033854_00003860
lbl_fn_80033854_00003854:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80033854_00003860:
    cmpwi r0, 0x1
    bne lbl_fn_80033854_00003870
    li r3, -0x1
    b lbl_fn_80033854_00003938
lbl_fn_80033854_00003870:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80033854_00003934
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80033854_0000392C
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80033854_000038C0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80033854_00003938
lbl_fn_80033854_000038C0:
    cmpwi r3, 0xa
    bne lbl_fn_80033854_000038D8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80033854_00003938
lbl_fn_80033854_000038D8:
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80033854_000038F4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_80033854_00003938
lbl_fn_80033854_000038F4:
    cmpwi r3, 0x4
    bne lbl_fn_80033854_0000390C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80033854_00003938
lbl_fn_80033854_0000390C:
    cmpwi r3, 0x6
    bne lbl_fn_80033854_00003924
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_80033854_00003938
lbl_fn_80033854_00003924:
    li r3, -0x1
    b lbl_fn_80033854_00003938
lbl_fn_80033854_0000392C:
    li r3, -0x1
    b lbl_fn_80033854_00003938
lbl_fn_80033854_00003934:
    li r3, -0x1
lbl_fn_80033854_00003938:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80033978(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80033978_000039EC
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80033978_000039AC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80033978_000039AC:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80033978_000039F0
lbl_fn_80033978_000039EC:
    li r0, -0x1
lbl_fn_80033978_000039F0:
    cmpwi r0, 0x7
    bne lbl_fn_80033978_00003A0C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80033978_00003A10
lbl_fn_80033978_00003A0C:
    li r3, -0x1
lbl_fn_80033978_00003A10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80033A54(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80033A54_00003A64
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003A64:
    cmpwi r3, 0x1
    bne lbl_fn_80033A54_00003A7C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003A7C:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80033A54_00003B4C
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x28(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x2c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80033A54_00003B10
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_80033A54_00003AFC
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_80033A54_00003AFC:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80033A54_00003B50
lbl_fn_80033A54_00003B10:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_80033A54_00003B50
lbl_fn_80033A54_00003B4C:
    li r0, -0x1
lbl_fn_80033A54_00003B50:
    cmpwi r0, 0x9
    bne lbl_fn_80033A54_00003B6C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003B6C:
    cmpwi r0, 0x6
    bne lbl_fn_80033A54_00003BD4
    bl fn_8003D3F8
    cmpwi r3, 0x6
    bne lbl_fn_80033A54_00003B94
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003B94:
    cmpwi r3, 0x4
    bne lbl_fn_80033A54_00003BB0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003BB0:
    cmpwi r3, 0x9
    bne lbl_fn_80033A54_00003BCC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003BCC:
    li r3, -0x1
    b lbl_fn_80033A54_00003BD8
lbl_fn_80033A54_00003BD4:
    li r3, -0x1
lbl_fn_80033A54_00003BD8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80033C18(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80033C18_00003C8C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80033C18_00003C4C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80033C18_00003C4C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80033C18_00003C90
lbl_fn_80033C18_00003C8C:
    li r0, -0x1
lbl_fn_80033C18_00003C90:
    cmpwi r0, 0x7
    bne lbl_fn_80033C18_00003CAC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80033C18_00003CB0
lbl_fn_80033C18_00003CAC:
    li r3, -0x1
lbl_fn_80033C18_00003CB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80033CF4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80033CF4_00003D08
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003D08:
    cmpwi r3, 0x1
    bne lbl_fn_80033CF4_00003D20
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003D20:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80033CF4_00003D88
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80033CF4_00003D80
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x7
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80033CF4_00003DC0
lbl_fn_80033CF4_00003D80:
    li r0, -0x1
    b lbl_fn_80033CF4_00003DC0
lbl_fn_80033CF4_00003D88:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x0
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80033CF4_00003DC0:
    cmpwi r0, 0x6
    bne lbl_fn_80033CF4_00003E28
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80033CF4_00003DE8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003DE8:
    cmpwi r3, 0x4
    bne lbl_fn_80033CF4_00003E04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003E04:
    cmpwi r3, 0x6
    bne lbl_fn_80033CF4_00003E20
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003E20:
    li r3, -0x1
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003E28:
    cmpwi r0, 0x9
    bne lbl_fn_80033CF4_00003E44
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003E44:
    cmpwi r0, 0x1
    bne lbl_fn_80033CF4_00003E60
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80033CF4_00003E64
lbl_fn_80033CF4_00003E60:
    li r3, -0x1
lbl_fn_80033CF4_00003E64:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80033EA8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80033EA8_00003EA4
    li r0, -0x1
    b lbl_fn_80033EA8_00003EB0
lbl_fn_80033EA8_00003EA4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80033EA8_00003EB0:
    cmpwi r0, 0x1
    bne lbl_fn_80033EA8_00003EF8
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80033EA8_00003EFC
lbl_fn_80033EA8_00003EF8:
    li r3, -0x1
lbl_fn_80033EA8_00003EFC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80033F38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x3c
    li r0, 0x64
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x24(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x28(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80033F38_00003F54
    li r31, 0x7
lbl_fn_80033F38_00003F54:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80033F98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80033F98_00003F9C
    li r0, -0x1
    b lbl_fn_80033F98_00003FA8
lbl_fn_80033F98_00003F9C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80033F98_00003FA8:
    cmpwi r0, 0x1
    bne lbl_fn_80033F98_00003FB8
    li r3, -0x1
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00003FB8:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80033F98_000040A8
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80033F98_000040A0
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_80033F98_00004008
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00004008:
    cmpwi r3, 0x1
    bne lbl_fn_80033F98_00004020
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00004020:
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_80033F98_00004068
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r3, 0x9
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00004068:
    cmpwi r3, 0x6
    bne lbl_fn_80033F98_00004080
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00004080:
    cmpwi r3, 0x4
    bne lbl_fn_80033F98_00004098
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_00004098:
    li r3, -0x1
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_000040A0:
    li r3, -0x1
    b lbl_fn_80033F98_000040AC
lbl_fn_80033F98_000040A8:
    li r3, -0x1
lbl_fn_80033F98_000040AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800340F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800340F0_00004164
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800340F0_00004124
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800340F0_00004124:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_800340F0_00004168
lbl_fn_800340F0_00004164:
    li r0, -0x1
lbl_fn_800340F0_00004168:
    cmpwi r0, 0x7
    bne lbl_fn_800340F0_00004184
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_800340F0_00004188
lbl_fn_800340F0_00004184:
    li r3, -0x1
lbl_fn_800340F0_00004188:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800341CC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_800341CC_000041DC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_000041DC:
    cmpwi r3, 0xa
    bne lbl_fn_800341CC_000041F4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_000041F4:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800341CC_000042C4
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x48(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x4c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x48(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_800341CC_00004288
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_800341CC_00004274
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    addi r6, r1, 0x2c
    stw r3, 0x2c(r1)
    addi r7, r1, 0x28
    li r3, 0x3
    stw r0, 0x30(r1)
    stw r8, 0x34(r1)
    bl fn_8001AEDC
lbl_fn_800341CC_00004274:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800341CC_000042C8
lbl_fn_800341CC_00004288:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x7
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_800341CC_000042C8
lbl_fn_800341CC_000042C4:
    li r0, -0x1
lbl_fn_800341CC_000042C8:
    cmpwi r0, 0x9
    bne lbl_fn_800341CC_00004310
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x7
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_00004310:
    cmpwi r0, 0x6
    bne lbl_fn_800341CC_000043A4
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_800341CC_00004338
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_00004338:
    cmpwi r3, 0x9
    bne lbl_fn_800341CC_00004380
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_00004380:
    cmpwi r3, 0x6
    bne lbl_fn_800341CC_0000439C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_0000439C:
    li r3, -0x1
    b lbl_fn_800341CC_000043A8
lbl_fn_800341CC_000043A4:
    li r3, -0x1
lbl_fn_800341CC_000043A8:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800343E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800343E8_0000445C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800343E8_0000441C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800343E8_0000441C:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_800343E8_00004460
lbl_fn_800343E8_0000445C:
    li r0, -0x1
lbl_fn_800343E8_00004460:
    cmpwi r0, 0x7
    bne lbl_fn_800343E8_0000447C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_800343E8_00004480
lbl_fn_800343E8_0000447C:
    li r3, -0x1
lbl_fn_800343E8_00004480:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800344C4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C6A40@ha
    addi r4, r30, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_800344C4_000044D8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_000044D8:
    cmpwi r3, 0x1
    bne lbl_fn_800344C4_000044F0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_000044F0:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800344C4_00004558
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800344C4_00004550
    li r0, 0x0
    stw r0, 0x28(r1)
    addi r4, r1, 0x34
    addi r5, r1, 0x30
    stw r0, 0x2c(r1)
    addi r6, r1, 0x2c
    addi r7, r1, 0x28
    li r3, 0x7
    stw r0, 0x30(r1)
    stw r0, 0x34(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_800344C4_00004590
lbl_fn_800344C4_00004550:
    li r0, -0x1
    b lbl_fn_800344C4_00004590
lbl_fn_800344C4_00004558:
    li r0, 0x0
    stw r0, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    stw r0, 0x3c(r1)
    addi r6, r1, 0x3c
    addi r7, r1, 0x38
    li r3, 0x0
    stw r0, 0x40(r1)
    stw r0, 0x44(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_800344C4_00004590:
    cmpwi r0, 0x9
    bne lbl_fn_800344C4_000045D8
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x7
    stw r0, 0x1c(r1)
    stw r31, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_000045D8:
    cmpwi r0, 0x6
    bne lbl_fn_800344C4_0000466C
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_800344C4_0000462C
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_0000462C:
    cmpwi r3, 0x6
    bne lbl_fn_800344C4_00004648
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_00004648:
    cmpwi r3, 0x4
    bne lbl_fn_800344C4_00004664
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_00004664:
    li r3, -0x1
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_0000466C:
    cmpwi r0, 0x1
    bne lbl_fn_800344C4_00004688
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800344C4_0000468C
lbl_fn_800344C4_00004688:
    li r3, -0x1
lbl_fn_800344C4_0000468C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800346D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800346D0_000046CC
    li r0, -0x1
    b lbl_fn_800346D0_000046D8
lbl_fn_800346D0_000046CC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800346D0_000046D8:
    cmpwi r0, 0x1
    bne lbl_fn_800346D0_00004720
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800346D0_00004724
lbl_fn_800346D0_00004720:
    li r3, -0x1
lbl_fn_800346D0_00004724:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80034760(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x3c
    li r0, 0x64
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x24(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x28(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80034760_0000477C
    li r31, 0x7
lbl_fn_80034760_0000477C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800347C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x1c(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800347C0_000047C0
    li r0, -0x1
    b lbl_fn_800347C0_000047CC
lbl_fn_800347C0_000047C0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800347C0_000047CC:
    cmpwi r0, 0x1
    bne lbl_fn_800347C0_000047DC
    li r3, -0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000047DC:
    lis r31, lbl_807C68C0@ha
    addi r3, r31, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800347C0_00004A00
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800347C0_000049F8
    lwz r31, lbl_807C68C0@l(r31)
    li r4, 0x1
    mr r3, r31
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_800347C0_00004864
    mr r3, r31
    li r4, 0x1
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_800347C0_00004834
    li r0, -0x1
    b lbl_fn_800347C0_00004868
lbl_fn_800347C0_00004834:
    mr r3, r31
    li r4, 0x1
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_800347C0_0000485C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_800347C0_00004868
lbl_fn_800347C0_0000485C:
    li r0, -0x1
    b lbl_fn_800347C0_00004868
lbl_fn_800347C0_00004864:
    li r0, -0x1
lbl_fn_800347C0_00004868:
    cmpwi r0, 0x9
    bne lbl_fn_800347C0_00004960
    lis r4, lbl_807C68C0@ha
    addi r3, r4, lbl_807C68C0@l
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800347C0_0000491C
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_800347C0_000048B0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000048B0:
    cmpwi r3, 0x1
    bne lbl_fn_800347C0_000048C8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000048C8:
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_800347C0_000048E4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000048E4:
    cmpwi r3, 0x6
    bne lbl_fn_800347C0_000048FC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000048FC:
    cmpwi r3, 0x4
    bne lbl_fn_800347C0_00004914
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_00004914:
    li r3, -0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_0000491C:
    lwz r0, lbl_807C68C0@l(r4)
    li r3, 0x0
    li r31, 0x1
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r3, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x7
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_00004960:
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0xa
    bne lbl_fn_800347C0_0000498C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_0000498C:
    cmpwi r3, 0x1
    bne lbl_fn_800347C0_000049A4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000049A4:
    bl fn_8003D3F8
    cmpwi r3, 0x9
    bne lbl_fn_800347C0_000049C0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000049C0:
    cmpwi r3, 0x6
    bne lbl_fn_800347C0_000049D8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x6
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000049D8:
    cmpwi r3, 0x4
    bne lbl_fn_800347C0_000049F0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000049F0:
    li r3, -0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_000049F8:
    li r3, -0x1
    b lbl_fn_800347C0_00004A04
lbl_fn_800347C0_00004A00:
    li r3, -0x1
lbl_fn_800347C0_00004A04:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80034A44(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80034A44_00004AB8
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80034A44_00004A78
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80034A44_00004A78:
    li r0, 0x0
    stw r0, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r0, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0x0
    stw r0, 0x10(r1)
    stw r31, 0x14(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x7
    b lbl_fn_80034A44_00004ABC
lbl_fn_80034A44_00004AB8:
    li r0, -0x1
lbl_fn_80034A44_00004ABC:
    cmpwi r0, 0x7
    bne lbl_fn_80034A44_00004AD8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80034A44_00004ADC
lbl_fn_80034A44_00004AD8:
    li r3, -0x1
lbl_fn_80034A44_00004ADC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80034B20(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    li r4, 0x1
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    lwz r30, lbl_807C68C0@l(r3)
    mr r3, r30
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_80034B20_00004B70
    mr r3, r30
    li r4, 0x1
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_80034B20_00004B40
    li r0, -0x1
    b lbl_fn_80034B20_00004B74
lbl_fn_80034B20_00004B40:
    mr r3, r30
    li r4, 0x1
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_80034B20_00004B68
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x9
    b lbl_fn_80034B20_00004B74
lbl_fn_80034B20_00004B68:
    li r0, -0x1
    b lbl_fn_80034B20_00004B74
lbl_fn_80034B20_00004B70:
    li r0, -0x1
lbl_fn_80034B20_00004B74:
    cmpwi r0, 0x9
    bne lbl_fn_80034B20_00004D70
    lis r3, lbl_807C68C0@ha
    addi r30, r3, lbl_807C68C0@l
    lwz r0, 0x2c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80034B20_00004D2C
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80034B20_00004BBC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004BBC:
    cmpwi r3, 0xa
    bne lbl_fn_80034B20_00004BD4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004BD4:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80034B20_00004C9C
    lwz r4, 0x44(r30)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80034B20_00004C60
    lwz r8, 0x20(r30)
    cmpwi r8, 0x0
    beq lbl_fn_80034B20_00004C4C
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x38(r1)
    addi r4, r1, 0x44
    addi r5, r1, 0x40
    addi r6, r1, 0x3c
    stw r3, 0x3c(r1)
    addi r7, r1, 0x38
    li r3, 0x3
    stw r0, 0x40(r1)
    stw r8, 0x44(r1)
    bl fn_8001AEDC
lbl_fn_80034B20_00004C4C:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80034B20_00004CA0
lbl_fn_80034B20_00004C60:
    li r0, 0x0
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    stw r0, 0x4c(r1)
    addi r6, r1, 0x4c
    addi r7, r1, 0x48
    li r3, 0x7
    stw r0, 0x50(r1)
    stw r0, 0x54(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_80034B20_00004CA0
lbl_fn_80034B20_00004C9C:
    li r0, -0x1
lbl_fn_80034B20_00004CA0:
    cmpwi r0, 0x9
    bne lbl_fn_80034B20_00004CBC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004CBC:
    cmpwi r0, 0x6
    bne lbl_fn_80034B20_00004D24
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_80034B20_00004CE4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004CE4:
    cmpwi r3, 0x9
    bne lbl_fn_80034B20_00004D00
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D00:
    cmpwi r3, 0x6
    bne lbl_fn_80034B20_00004D1C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D1C:
    li r3, -0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D24:
    li r3, -0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D2C:
    lwz r0, lbl_807C68C0@l(r3)
    li r3, 0x0
    li r31, 0x1
    stw r3, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r3, 0x30(r1)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x7
    stw r0, 0x2c(r1)
    stw r31, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D70:
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80034B20_00004D9C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004D9C:
    cmpwi r3, 0xa
    bne lbl_fn_80034B20_00004DB4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004DB4:
    lis r5, lbl_807C68C0@ha
    addi r5, r5, lbl_807C68C0@l
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80034B20_00004E84
    lwz r4, 0x44(r5)
    lis r0, 0x4330
    stw r0, 0x58(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x5c(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x58(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80034B20_00004E48
    lwz r8, 0x20(r5)
    cmpwi r8, 0x0
    beq lbl_fn_80034B20_00004E34
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    stw r3, 0xc(r1)
    addi r7, r1, 0x8
    li r3, 0x3
    stw r0, 0x10(r1)
    stw r8, 0x14(r1)
    bl fn_8001AEDC
lbl_fn_80034B20_00004E34:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80034B20_00004E88
lbl_fn_80034B20_00004E48:
    li r0, 0x0
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x1c(r1)
    addi r6, r1, 0x1c
    addi r7, r1, 0x18
    li r3, 0x7
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x9
    b lbl_fn_80034B20_00004E88
lbl_fn_80034B20_00004E84:
    li r0, -0x1
lbl_fn_80034B20_00004E88:
    cmpwi r0, 0x9
    bne lbl_fn_80034B20_00004EA4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004EA4:
    cmpwi r0, 0x6
    bne lbl_fn_80034B20_00004F0C
    bl fn_8003D3F8
    cmpwi r3, 0x4
    bne lbl_fn_80034B20_00004ECC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004ECC:
    cmpwi r3, 0x9
    bne lbl_fn_80034B20_00004EE8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004EE8:
    cmpwi r3, 0x6
    bne lbl_fn_80034B20_00004F04
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004F04:
    li r3, -0x1
    b lbl_fn_80034B20_00004F10
lbl_fn_80034B20_00004F0C:
    li r3, -0x1
lbl_fn_80034B20_00004F10:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
