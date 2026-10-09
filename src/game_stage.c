#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8001AD80(void);
extern void fn_8001ADE8(void);
extern void fn_8001AEDC(void);
extern void fn_8001B5B4(void);
extern void fn_8001B5DC(void);
extern void fn_8001B634(void);
extern void fn_8001BA88(void);
extern void fn_8001BADC(void);
extern void fn_8001BC38(void);
extern void fn_8001BC80(void);
extern void fn_8001BCB4(void);
extern void fn_8001BD14(void);
extern void fn_8001BE00(void);
extern void fn_8001BEB0(void);
extern void fn_8001BF4C(void);
extern void fn_8001C068(void);
extern void fn_8003CDB0(void);
extern void fn_8003D298(void);
extern void fn_8003DBA4(void);
extern void fn_80680CF8(void);

/* External data declarations */
extern u8 lbl_8072FF60[];
extern u8 lbl_807307A0[];
extern u8 lbl_807C68C0[];
extern u8 lbl_807C6A40[];

/* Small data declarations */
extern u32 lbl_80880798;
extern u32 lbl_8088079C;
extern u32 lbl_808807A0;
extern u32 lbl_808807A4;
extern u32 lbl_808807A8;

/* Function declarations */
void fn_8002008C(void);
void fn_800202BC(void);
void fn_800204D8(void);
void fn_8002055C(void);
void fn_800206B8(void);
void fn_8002082C(void);
void fn_80020914(void);
void fn_800209F0(void);
void fn_80020B28(void);
void fn_80020B80(void);
void fn_80020E64(void);
void fn_80020F40(void);
void fn_80021038(void);
void fn_800210AC(void);
void fn_8002113C(void);
void fn_800211B0(void);
void fn_8002121C(void);
void fn_80021404(void);
void fn_80021478(void);
void fn_80021508(void);
void fn_80021594(void);
void fn_80021A20(void);
void fn_80021AFC(void);
void fn_80021C3C(void);
void fn_80021CB0(void);
void fn_80021D40(void);
void fn_80021DB4(void);
void fn_80021E40(void);
void fn_80022308(void);
void fn_800223E4(void);
void fn_80022524(void);
void fn_80022598(void);
void fn_80022628(void);
void fn_8002269C(void);
void fn_800226E4(void);
void fn_80022BD4(void);
void fn_80022C04(void);
void fn_80022E20(void);
void fn_80022F44(void);
void fn_80022F74(void);
void fn_80022FAC(void);
void fn_80023338(void);
void fn_80023568(void);
void fn_80023764(void);
void fn_800237E8(void);
void fn_80023960(void);
void fn_80023A90(void);
void fn_80023B78(void);
void fn_80023C54(void);
void fn_80023C84(void);
void fn_80023DBC(void);
void fn_80023DEC(void);
void fn_80023E90(void);
void fn_80023FAC(void);
void fn_8002403C(void);
void fn_800240C0(void);
void fn_800240F0(void);
void fn_80024110(void);
void fn_80024254(void);
void fn_8002433C(void);
void fn_800244B0(void);
void fn_80024540(void);
void fn_80024608(void);
void fn_80024718(void);
void fn_80024760(void);
void fn_80024824(void);
void fn_800248CC(void);
void fn_800249EC(void);
void fn_80024A5C(void);
void fn_80024B50(void);
void fn_80024BC0(void);
void fn_80024D6C(void);
void fn_80024DCC(void);
void fn_80024E64(void);
void fn_80024F9C(void);
void fn_800250CC(void);

asm void fn_8002008C(void)
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
    bne lbl_fn_8002008C_000000DC
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8002008C_000000B4
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002008C_00000074
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002008C_00000074:
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
    b lbl_fn_8002008C_000000B8
lbl_fn_8002008C_000000B4:
    li r0, -0x1
lbl_fn_8002008C_000000B8:
    cmpwi r0, 0x7
    bne lbl_fn_8002008C_000000D4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002008C_00000218
lbl_fn_8002008C_000000D4:
    li r3, -0x1
    b lbl_fn_8002008C_00000218
lbl_fn_8002008C_000000DC:
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
    bge lbl_fn_8002008C_00000154
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
    b lbl_fn_8002008C_000001DC
lbl_fn_8002008C_00000154:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8002008C_000001D8
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002008C_00000198
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002008C_00000198:
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
    b lbl_fn_8002008C_000001DC
lbl_fn_8002008C_000001D8:
    li r0, -0x1
lbl_fn_8002008C_000001DC:
    cmpwi r0, 0x5
    bne lbl_fn_8002008C_000001F8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002008C_00000218
lbl_fn_8002008C_000001F8:
    cmpwi r0, 0x7
    bne lbl_fn_8002008C_00000214
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_8002008C_00000218
lbl_fn_8002008C_00000214:
    li r3, -0x1
lbl_fn_8002008C_00000218:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800202BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, 0x24(r31)
    lwz r4, 0x28(r31)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_800202BC_00000270
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000270:
    cmpwi r3, 0xa
    bne lbl_fn_800202BC_00000288
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000288:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800202BC_000003BC
    lis r3, lbl_807C68C0@ha
    addi r31, r3, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800202BC_00000348
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BD14
    lfs f0, 0x1c(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_800202BC_0000030C
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_800202BC_000002F8
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
lbl_fn_800202BC_000002F8:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_800202BC_0000034C
lbl_fn_800202BC_0000030C:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x6
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_800202BC_0000034C
lbl_fn_800202BC_00000348:
    li r0, -0x1
lbl_fn_800202BC_0000034C:
    cmpwi r0, 0x9
    bne lbl_fn_800202BC_00000368
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000368:
    cmpwi r0, 0x6
    bne lbl_fn_800202BC_000003B4
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_800202BC_00000390
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000390:
    cmpwi r3, 0x4
    bne lbl_fn_800202BC_000003AC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_000003AC:
    li r3, -0x1
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_000003B4:
    li r3, -0x1
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_000003BC:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800202BC_000003E0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_800202BC_000003E4
lbl_fn_800202BC_000003E0:
    li r0, -0x1
lbl_fn_800202BC_000003E4:
    cmpwi r0, 0x6
    bne lbl_fn_800202BC_00000430
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_800202BC_0000040C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_0000040C:
    cmpwi r3, 0x4
    bne lbl_fn_800202BC_00000428
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000428:
    li r3, -0x1
    b lbl_fn_800202BC_00000434
lbl_fn_800202BC_00000430:
    li r3, -0x1
lbl_fn_800202BC_00000434:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800204D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800209F0
    cmpwi r3, 0x0
    bne lbl_fn_800204D8_00000478
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_800204D8_000004C0
lbl_fn_800204D8_00000478:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800204D8_00000494
    li r0, -0x1
    b lbl_fn_800204D8_000004A0
lbl_fn_800204D8_00000494:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800204D8_000004A0:
    cmpwi r0, 0x1
    bne lbl_fn_800204D8_000004BC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800204D8_000004C0
lbl_fn_800204D8_000004BC:
    li r3, -0x1
lbl_fn_800204D8_000004C0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8002055C(void)
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
    blt lbl_fn_8002055C_00000500
    li r0, -0x1
    b lbl_fn_8002055C_0000050C
lbl_fn_8002055C_00000500:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002055C_0000050C:
    cmpwi r0, 0x1
    bne lbl_fn_8002055C_0000051C
    li r3, -0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_0000051C:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002055C_00000610
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002055C_00000608
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r3, 0x24(r31)
    lwz r4, 0x28(r31)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_8002055C_0000056C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_0000056C:
    cmpwi r3, 0xa
    bne lbl_fn_8002055C_00000584
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_00000584:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8002055C_000005CC
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_8002055C_000005AC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_000005AC:
    cmpwi r3, 0x4
    bne lbl_fn_8002055C_000005C4
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_000005C4:
    li r3, -0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_000005CC:
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_8002055C_000005E8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_000005E8:
    cmpwi r3, 0x4
    bne lbl_fn_8002055C_00000600
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_00000600:
    li r3, -0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_00000608:
    li r3, -0x1
    b lbl_fn_8002055C_00000614
lbl_fn_8002055C_00000610:
    li r3, -0x1
lbl_fn_8002055C_00000614:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800206B8(void)
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
    bne lbl_fn_800206B8_0000066C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_0000066C:
    cmpwi r3, 0x1
    bne lbl_fn_800206B8_00000684
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x1
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_00000684:
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
    ble lbl_fn_800206B8_000006D0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_800206B8_0000071C
lbl_fn_800206B8_000006D0:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_800206B8_00000718
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
    b lbl_fn_800206B8_0000071C
lbl_fn_800206B8_00000718:
    li r0, -0x1
lbl_fn_800206B8_0000071C:
    cmpwi r0, 0x8
    bne lbl_fn_800206B8_00000738
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_00000738:
    cmpwi r0, 0x6
    bne lbl_fn_800206B8_00000784
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_800206B8_00000760
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_00000760:
    cmpwi r3, 0x6
    bne lbl_fn_800206B8_0000077C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_0000077C:
    li r3, -0x1
    b lbl_fn_800206B8_00000788
lbl_fn_800206B8_00000784:
    li r3, -0x1
lbl_fn_800206B8_00000788:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8002082C(void)
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
    beq lbl_fn_8002082C_0000084C
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_8002082C_00000800
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_8002082C_00000800:
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
    b lbl_fn_8002082C_00000850
lbl_fn_8002082C_0000084C:
    li r0, -0x1
lbl_fn_8002082C_00000850:
    cmpwi r0, 0x5
    bne lbl_fn_8002082C_0000086C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_8002082C_00000870
lbl_fn_8002082C_0000086C:
    li r3, -0x1
lbl_fn_8002082C_00000870:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80020914(void)
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
    beq lbl_fn_80020914_00000928
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80020914_000008E8
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80020914_000008E8:
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
    b lbl_fn_80020914_0000092C
lbl_fn_80020914_00000928:
    li r0, -0x1
lbl_fn_80020914_0000092C:
    cmpwi r0, 0x7
    bne lbl_fn_80020914_00000948
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80020914_0000094C
lbl_fn_80020914_00000948:
    li r3, -0x1
lbl_fn_80020914_0000094C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800209F0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_800209F0_00000A08
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_800209F0_00000A00
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800209F0_00000A8C
lbl_fn_800209F0_00000A00:
    li r3, -0x1
    b lbl_fn_800209F0_00000A8C
lbl_fn_800209F0_00000A08:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_800209F0_00000A88
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_800209F0_00000A8C
lbl_fn_800209F0_00000A88:
    li r3, -0x1
lbl_fn_800209F0_00000A8C:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80020B28(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r0, 0x50
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r0, 0x24(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80020B28_00000ADC
    li r31, 0x7
lbl_fn_80020B28_00000ADC:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80020B80(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x74(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80020B80_00000B2C
    li r0, -0x1
    b lbl_fn_80020B80_00000B38
lbl_fn_80020B80_00000B2C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80020B80_00000B38:
    cmpwi r0, 0x1
    bne lbl_fn_80020B80_00000B48
    li r3, -0x1
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000B48:
    lis r30, lbl_807C68C0@ha
    addi r29, r30, lbl_807C68C0@l
    lwz r3, 0x20(r29)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80020B80_00000DB4
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80020B80_00000DAC
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_80020B80_00000BC8
    li r0, 0x0
    stw r0, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    stw r0, 0x50(r1)
    addi r6, r1, 0x50
    addi r7, r1, 0x54
    li r3, 0x10
    stw r0, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000BC8:
    lis r28, lbl_807C6A40@ha
    lwz r4, 0x58(r29)
    addi r3, r28, lbl_807C6A40@l
    lwz r0, 0x24(r3)
    cmpw r4, r0
    ble lbl_fn_80020B80_00000D00
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80020B80_00000C30
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
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000C30:
    lfs f1, 0x1c(r29)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80020B80_00000C64
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80020B80_00000C64
    stw r3, 0x64(r29)
    li r0, 0x1
    b lbl_fn_80020B80_00000C68
lbl_fn_80020B80_00000C64:
    li r0, 0x0
lbl_fn_80020B80_00000C68:
    cmpwi r0, 0x0
    beq lbl_fn_80020B80_00000CBC
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x34(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x28
    stw r8, 0x30(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r8, 0x2c(r1)
    li r3, 0x2
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000CBC:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000D00:
    lwz r0, 0x18(r3)
    lwz r3, lbl_807C68C0@l(r30)
    addic. r4, r0, 0x1
    bne lbl_fn_80020B80_00000D1C
    li r4, 0x0
    bl fn_8001BC80
    b lbl_fn_80020B80_00000D24
lbl_fn_80020B80_00000D1C:
    subi r4, r4, 0x1
    bl fn_8001BC80
lbl_fn_80020B80_00000D24:
    cmpwi r3, 0x0
    beq lbl_fn_80020B80_00000D34
    li r3, -0x1
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000D34:
    lis r30, lbl_807C6A40@ha
    li r28, 0x0
    addi r31, r30, lbl_807C6A40@l
    lis r29, lbl_807C68C0@ha
    lwz r8, lbl_807C68C0@l(r29)
    addi r4, r1, 0x8
    lwz r0, 0x18(r31)
    addi r5, r1, 0xc
    stw r28, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x7
    stw r28, 0x10(r1)
    stw r8, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r3, 0x18(r31)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r29)
    stw r4, 0x18(r31)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_80020B80_00000DA0
    li r3, 0x9
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000DA0:
    stw r28, 0x18(r31)
    li r3, 0x9
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000DAC:
    li r3, -0x1
    b lbl_fn_80020B80_00000DB8
lbl_fn_80020B80_00000DB4:
    li r3, -0x1
lbl_fn_80020B80_00000DB8:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80020E64(void)
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
    beq lbl_fn_80020E64_00000E78
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80020E64_00000E38
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80020E64_00000E38:
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
    b lbl_fn_80020E64_00000E7C
lbl_fn_80020E64_00000E78:
    li r0, -0x1
lbl_fn_80020E64_00000E7C:
    cmpwi r0, 0x7
    bne lbl_fn_80020E64_00000E98
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80020E64_00000E9C
lbl_fn_80020E64_00000E98:
    li r3, -0x1
lbl_fn_80020E64_00000E9C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80020F40(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r31)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_80020F40_00000F24
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x10
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r31)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_80020F40_00000F98
lbl_fn_80020F40_00000F24:
    addi r3, r31, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80020F40_00000F74
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
    b lbl_fn_80020F40_00000F78
lbl_fn_80020F40_00000F74:
    li r0, -0x1
lbl_fn_80020F40_00000F78:
    cmpwi r0, 0x1
    bne lbl_fn_80020F40_00000F94
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80020F40_00000F98
lbl_fn_80020F40_00000F94:
    li r3, -0x1
lbl_fn_80020F40_00000F98:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80021038(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80021038_0000100C
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
    b lbl_fn_80021038_00001010
lbl_fn_80021038_0000100C:
    li r3, -0x1
lbl_fn_80021038_00001010:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800210AC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800210AC_00001048
    li r0, -0x1
    b lbl_fn_800210AC_00001054
lbl_fn_800210AC_00001048:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800210AC_00001054:
    cmpwi r0, 0x1
    bne lbl_fn_800210AC_0000109C
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
    b lbl_fn_800210AC_000010A0
lbl_fn_800210AC_0000109C:
    li r3, -0x1
lbl_fn_800210AC_000010A0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002113C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002113C_00001110
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
    b lbl_fn_8002113C_00001114
lbl_fn_8002113C_00001110:
    li r3, -0x1
lbl_fn_8002113C_00001114:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800211B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    li r4, 0x3c
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r7, r9, lbl_807C6A40@l
    li r3, 0x50
    li r8, 0x1
    stw r4, 0x24(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r3, 0x28(r7)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lwz r0, 0x24(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002121C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x54(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    stw r28, 0x40(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_8002121C_000011C8
    li r0, -0x1
    b lbl_fn_8002121C_000011D4
lbl_fn_8002121C_000011C8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_8002121C_000011D4:
    cmpwi r0, 0x1
    bne lbl_fn_8002121C_000011E4
    li r3, -0x1
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_000011E4:
    lis r29, lbl_807C68C0@ha
    addi r28, r29, lbl_807C68C0@l
    lwz r3, 0x20(r28)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002121C_00001354
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8002121C_0000134C
    lis r4, lbl_807C6A40@ha
    lwz r3, lbl_807C68C0@l(r29)
    addi r4, r4, lbl_807C6A40@l
    lwz r0, 0x18(r4)
    addic. r4, r0, 0x1
    bne lbl_fn_8002121C_0000122C
    li r4, 0x0
    bl fn_8001BC80
    b lbl_fn_8002121C_00001234
lbl_fn_8002121C_0000122C:
    subi r4, r4, 0x1
    bl fn_8001BC80
lbl_fn_8002121C_00001234:
    cmpwi r3, 0x0
    beq lbl_fn_8002121C_00001280
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_00001280:
    lis r29, lbl_807C6A40@ha
    lis r28, lbl_807C68C0@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0x18(r30)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_8002121C_0000130C
    lwz r8, lbl_807C68C0@l(r28)
    li r31, 0x0
    lwz r0, 0x18(r30)
    addi r4, r1, 0x18
    stw r31, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r31, 0x20(r1)
    li r3, 0x7
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lwz r3, 0x18(r30)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r28)
    stw r4, 0x18(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_8002121C_00001300
    li r3, 0x9
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_00001300:
    stw r31, 0x18(r30)
    li r3, 0x9
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_0000130C:
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
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_0000134C:
    li r3, -0x1
    b lbl_fn_8002121C_00001358
lbl_fn_8002121C_00001354:
    li r3, -0x1
lbl_fn_8002121C_00001358:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80021404(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80021404_000013D8
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
    b lbl_fn_80021404_000013DC
lbl_fn_80021404_000013D8:
    li r3, -0x1
lbl_fn_80021404_000013DC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021478(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80021478_00001414
    li r0, -0x1
    b lbl_fn_80021478_00001420
lbl_fn_80021478_00001414:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80021478_00001420:
    cmpwi r0, 0x1
    bne lbl_fn_80021478_00001468
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
    b lbl_fn_80021478_0000146C
lbl_fn_80021478_00001468:
    li r3, -0x1
lbl_fn_80021478_0000146C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021508(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r8, lbl_807C6A40@ha
    li r4, 0x3c
    stw r0, 0x24(r1)
    addi r7, r8, lbl_807C6A40@l
    li r0, 0x0
    li r3, 0x50
    stw r31, 0x1c(r1)
    li r31, 0x1
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r4, 0x24(r7)
    addi r4, r1, 0x8
    stw r3, 0x28(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, lbl_807C6A40@l(r8)
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021508_000014F0
    li r31, 0x7
lbl_fn_80021508_000014F0:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021594(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0xa4(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80021594_00001540
    li r0, -0x1
    b lbl_fn_80021594_0000154C
lbl_fn_80021594_00001540:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80021594_0000154C:
    cmpwi r0, 0x1
    bne lbl_fn_80021594_0000155C
    li r3, -0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_0000155C:
    lis r29, lbl_807C68C0@ha
    addi r28, r29, lbl_807C68C0@l
    lwz r3, 0x20(r28)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80021594_00001970
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80021594_00001968
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_80021594_000015DC
    li r0, 0x0
    stw r0, 0x84(r1)
    addi r4, r1, 0x78
    addi r5, r1, 0x7c
    stw r0, 0x80(r1)
    addi r6, r1, 0x80
    addi r7, r1, 0x84
    li r3, 0x10
    stw r0, 0x7c(r1)
    stw r0, 0x78(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_80021594_00001974
lbl_fn_80021594_000015DC:
    lis r4, lbl_807C6A40@ha
    lwz r3, lbl_807C68C0@l(r29)
    addi r4, r4, lbl_807C6A40@l
    lwz r0, 0x18(r4)
    addic. r4, r0, 0x1
    bne lbl_fn_80021594_00001600
    li r4, 0x0
    bl fn_8001BC80
    b lbl_fn_80021594_00001608
lbl_fn_80021594_00001600:
    subi r4, r4, 0x1
    bl fn_8001BC80
lbl_fn_80021594_00001608:
    cmpwi r3, 0x0
    beq lbl_fn_80021594_0000177C
    lis r28, lbl_807C6A40@ha
    addi r4, r28, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80021594_0000163C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_0000163C:
    cmpwi r3, 0xa
    bne lbl_fn_80021594_00001654
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001654:
    lis r29, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021594_000016A8
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x74(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    stw r8, 0x70(r1)
    addi r7, r1, 0x74
    li r3, 0x0
    stw r8, 0x6c(r1)
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_000016A8:
    addi r28, r29, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r28)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80021594_000016E0
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80021594_000016E0
    stw r3, 0x64(r28)
    li r0, 0x1
    b lbl_fn_80021594_000016E4
lbl_fn_80021594_000016E0:
    li r0, 0x0
lbl_fn_80021594_000016E4:
    cmpwi r0, 0x0
    beq lbl_fn_80021594_00001738
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x64(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x58
    stw r8, 0x60(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    stw r8, 0x5c(r1)
    li r3, 0x2
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001738:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r8, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x0
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_0000177C:
    lis r29, lbl_807C6A40@ha
    lis r28, lbl_807C68C0@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0x18(r30)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_80021594_00001808
    lwz r8, lbl_807C68C0@l(r28)
    li r31, 0x0
    lwz r0, 0x18(r30)
    addi r4, r1, 0x38
    stw r31, 0x44(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r31, 0x40(r1)
    li r3, 0x7
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lwz r3, 0x18(r30)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r28)
    stw r4, 0x18(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_80021594_000017FC
    li r3, 0x9
    b lbl_fn_80021594_00001974
lbl_fn_80021594_000017FC:
    stw r31, 0x18(r30)
    li r3, 0x9
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001808:
    lwz r3, 0x24(r30)
    lwz r4, 0x28(r30)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80021594_0000182C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_0000182C:
    cmpwi r3, 0xa
    bne lbl_fn_80021594_00001844
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001844:
    lwz r3, lbl_807C68C0@l(r28)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021594_00001894
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
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001894:
    addi r31, r28, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80021594_000018CC
    lwz r3, lbl_807C68C0@l(r28)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80021594_000018CC
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80021594_000018D0
lbl_fn_80021594_000018CC:
    li r0, 0x0
lbl_fn_80021594_000018D0:
    cmpwi r0, 0x0
    beq lbl_fn_80021594_00001924
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
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001924:
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001968:
    li r3, -0x1
    b lbl_fn_80021594_00001974
lbl_fn_80021594_00001970:
    li r3, -0x1
lbl_fn_80021594_00001974:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80021A20(void)
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
    beq lbl_fn_80021A20_00001A34
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80021A20_000019F4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80021A20_000019F4:
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
    b lbl_fn_80021A20_00001A38
lbl_fn_80021A20_00001A34:
    li r0, -0x1
lbl_fn_80021A20_00001A38:
    cmpwi r0, 0x7
    bne lbl_fn_80021A20_00001A54
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80021A20_00001A58
lbl_fn_80021A20_00001A54:
    li r3, -0x1
lbl_fn_80021A20_00001A58:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021AFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_80021AFC_00001AE4
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x10
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_80021AFC_00001B98
lbl_fn_80021AFC_00001AE4:
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80021AFC_00001B10
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80021AFC_00001B98
lbl_fn_80021AFC_00001B10:
    cmpwi r3, 0xa
    bne lbl_fn_80021AFC_00001B28
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80021AFC_00001B98
lbl_fn_80021AFC_00001B28:
    addi r3, r30, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80021AFC_00001B74
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_80021AFC_00001B78
lbl_fn_80021AFC_00001B74:
    li r0, -0x1
lbl_fn_80021AFC_00001B78:
    cmpwi r0, 0x1
    bne lbl_fn_80021AFC_00001B94
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80021AFC_00001B98
lbl_fn_80021AFC_00001B94:
    li r3, -0x1
lbl_fn_80021AFC_00001B98:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80021C3C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80021C3C_00001C10
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
    b lbl_fn_80021C3C_00001C14
lbl_fn_80021C3C_00001C10:
    li r3, -0x1
lbl_fn_80021C3C_00001C14:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021CB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80021CB0_00001C4C
    li r0, -0x1
    b lbl_fn_80021CB0_00001C58
lbl_fn_80021CB0_00001C4C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80021CB0_00001C58:
    cmpwi r0, 0x1
    bne lbl_fn_80021CB0_00001CA0
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
    b lbl_fn_80021CB0_00001CA4
lbl_fn_80021CB0_00001CA0:
    li r3, -0x1
lbl_fn_80021CB0_00001CA4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021D40(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80021D40_00001D14
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
    b lbl_fn_80021D40_00001D18
lbl_fn_80021D40_00001D14:
    li r3, -0x1
lbl_fn_80021D40_00001D18:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021DB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r8, lbl_807C6A40@ha
    li r4, 0x3c
    stw r0, 0x24(r1)
    addi r7, r8, lbl_807C6A40@l
    li r0, 0x0
    li r3, 0x50
    stw r31, 0x1c(r1)
    li r31, 0x1
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r4, 0x24(r7)
    addi r4, r1, 0x8
    stw r3, 0x28(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r31, lbl_807C6A40@l(r8)
    stw r0, 0x14(r1)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021DB4_00001D9C
    li r31, 0x7
lbl_fn_80021DB4_00001D9C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80021E40(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0xa4(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    stw r28, 0x90(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80021E40_00001DEC
    li r0, -0x1
    b lbl_fn_80021E40_00001DF8
lbl_fn_80021E40_00001DEC:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80021E40_00001DF8:
    cmpwi r0, 0x1
    bne lbl_fn_80021E40_00001E08
    li r3, -0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00001E08:
    lis r30, lbl_807C68C0@ha
    addi r28, r30, lbl_807C68C0@l
    lwz r3, 0x20(r28)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_00002258
    lwz r0, 0x8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80021E40_00002250
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_00001E88
    li r0, 0x0
    stw r0, 0x84(r1)
    addi r4, r1, 0x78
    addi r5, r1, 0x7c
    stw r0, 0x80(r1)
    addi r6, r1, 0x80
    addi r7, r1, 0x84
    li r3, 0x10
    stw r0, 0x7c(r1)
    stw r0, 0x78(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00001E88:
    lis r29, lbl_807C6A40@ha
    addi r28, r29, lbl_807C6A40@l
    lwz r0, 0x18(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80021E40_00001EC0
    lwz r3, lbl_807C68C0@l(r30)
    li r4, 0x0
    bl fn_8001BC80
    cmpwi r3, 0x0
    bne lbl_fn_80021E40_00001EC0
    li r3, 0x0
    li r0, 0x1
    stw r3, 0x18(r28)
    stw r0, lbl_807C6A40@l(r29)
lbl_fn_80021E40_00001EC0:
    lis r4, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    addi r4, r4, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r3)
    lwz r0, 0x18(r4)
    addic. r4, r0, 0x1
    bne lbl_fn_80021E40_00001EE8
    li r4, 0x0
    bl fn_8001BC80
    b lbl_fn_80021E40_00001EF0
lbl_fn_80021E40_00001EE8:
    subi r4, r4, 0x1
    bl fn_8001BC80
lbl_fn_80021E40_00001EF0:
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_00002064
    lis r28, lbl_807C6A40@ha
    addi r4, r28, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80021E40_00001F24
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00001F24:
    cmpwi r3, 0xa
    bne lbl_fn_80021E40_00001F3C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00001F3C:
    lis r29, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_00001F90
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x74(r1)
    addi r4, r1, 0x68
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    stw r8, 0x70(r1)
    addi r7, r1, 0x74
    li r3, 0x0
    stw r8, 0x6c(r1)
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r28)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00001F90:
    addi r28, r29, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r28)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80021E40_00001FC8
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80021E40_00001FC8
    stw r3, 0x64(r28)
    li r0, 0x1
    b lbl_fn_80021E40_00001FCC
lbl_fn_80021E40_00001FC8:
    li r0, 0x0
lbl_fn_80021E40_00001FCC:
    cmpwi r0, 0x0
    beq lbl_fn_80021E40_00002020
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r8, 0x64(r1)
    lwz r0, 0x64(r3)
    addi r4, r1, 0x58
    stw r8, 0x60(r1)
    addi r5, r1, 0x5c
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    stw r8, 0x5c(r1)
    li r3, 0x2
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00002020:
    li r8, 0x0
    li r0, 0x1e
    stw r8, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r8, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x0
    stw r8, 0x4c(r1)
    stw r0, 0x48(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00002064:
    lis r29, lbl_807C6A40@ha
    lis r28, lbl_807C68C0@ha
    addi r30, r29, lbl_807C6A40@l
    lwz r3, lbl_807C68C0@l(r28)
    lwz r4, 0x18(r30)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_000020F0
    lwz r8, lbl_807C68C0@l(r28)
    li r31, 0x0
    lwz r0, 0x18(r30)
    addi r4, r1, 0x38
    stw r31, 0x44(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r31, 0x40(r1)
    li r3, 0x7
    stw r8, 0x3c(r1)
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    lwz r3, 0x18(r30)
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    addi r4, r3, 0x1
    lwz r3, lbl_807C68C0@l(r28)
    stw r4, 0x18(r30)
    bl fn_8001BCB4
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_000020E4
    li r3, 0x9
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_000020E4:
    stw r31, 0x18(r30)
    li r3, 0x9
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_000020F0:
    lwz r3, 0x24(r30)
    lwz r4, 0x28(r30)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_80021E40_00002114
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00002114:
    cmpwi r3, 0xa
    bne lbl_fn_80021E40_0000212C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_0000212C:
    lwz r3, lbl_807C68C0@l(r28)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80021E40_0000217C
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
    stw r0, lbl_807C6A40@l(r29)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_0000217C:
    addi r31, r28, lbl_807C68C0@l
    lfs f0, lbl_80880798
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80021E40_000021B4
    lwz r3, lbl_807C68C0@l(r28)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80021E40_000021B4
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80021E40_000021B8
lbl_fn_80021E40_000021B4:
    li r0, 0x0
lbl_fn_80021E40_000021B8:
    cmpwi r0, 0x0
    beq lbl_fn_80021E40_0000220C
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
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_0000220C:
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00002250:
    li r3, -0x1
    b lbl_fn_80021E40_0000225C
lbl_fn_80021E40_00002258:
    li r3, -0x1
lbl_fn_80021E40_0000225C:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    lwz r28, 0x90(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80022308(void)
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
    beq lbl_fn_80022308_0000231C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80022308_000022DC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80022308_000022DC:
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
    b lbl_fn_80022308_00002320
lbl_fn_80022308_0000231C:
    li r0, -0x1
lbl_fn_80022308_00002320:
    cmpwi r0, 0x7
    bne lbl_fn_80022308_0000233C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80022308_00002340
lbl_fn_80022308_0000233C:
    li r3, -0x1
lbl_fn_80022308_00002340:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800223E4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BF4C
    cmpwi r3, 0x0
    beq lbl_fn_800223E4_000023CC
    li r0, 0x0
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    stw r0, 0x20(r1)
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    li r3, 0x10
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r4, 0x1
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BADC
    li r3, 0x6
    b lbl_fn_800223E4_00002480
lbl_fn_800223E4_000023CC:
    lis r31, lbl_807C6A40@ha
    addi r4, r31, lbl_807C6A40@l
    lwz r3, 0x24(r4)
    lwz r4, 0x28(r4)
    bl fn_8003D298
    cmpwi r3, 0x1
    bne lbl_fn_800223E4_000023F8
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800223E4_00002480
lbl_fn_800223E4_000023F8:
    cmpwi r3, 0xa
    bne lbl_fn_800223E4_00002410
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_800223E4_00002480
lbl_fn_800223E4_00002410:
    addi r3, r30, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800223E4_0000245C
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
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r0, 0x1
    b lbl_fn_800223E4_00002460
lbl_fn_800223E4_0000245C:
    li r0, -0x1
lbl_fn_800223E4_00002460:
    cmpwi r0, 0x1
    bne lbl_fn_800223E4_0000247C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_800223E4_00002480
lbl_fn_800223E4_0000247C:
    li r3, -0x1
lbl_fn_800223E4_00002480:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80022524(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022524_000024F8
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
    b lbl_fn_80022524_000024FC
lbl_fn_80022524_000024F8:
    li r3, -0x1
lbl_fn_80022524_000024FC:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80022598(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80022598_00002534
    li r0, -0x1
    b lbl_fn_80022598_00002540
lbl_fn_80022598_00002534:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80022598_00002540:
    cmpwi r0, 0x1
    bne lbl_fn_80022598_00002588
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
    b lbl_fn_80022598_0000258C
lbl_fn_80022598_00002588:
    li r3, -0x1
lbl_fn_80022598_0000258C:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80022628(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022628_000025FC
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
    b lbl_fn_80022628_00002600
lbl_fn_80022628_000025FC:
    li r3, -0x1
lbl_fn_80022628_00002600:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002269C(void)
{
    nofralloc
    lis r5, lbl_807C68C0@ha
    lis r9, lbl_807C6A40@ha
    addi r5, r5, lbl_807C68C0@l
    li r0, 0x1
    addi r8, r9, lbl_807C6A40@l
    lwz r10, 0x7c(r5)
    lwz r7, 0x80(r5)
    li r4, 0x0
    lwz r6, 0x84(r5)
    li r3, 0x1
    lwz r5, 0x88(r5)
    stw r10, 0x18(r8)
    stw r7, 0x1c(r8)
    stw r6, 0x20(r8)
    stw r5, 0x24(r8)
    stw r4, 0x50(r8)
    stw r0, lbl_807C6A40@l(r9)
    blr
}

asm void fn_800226E4(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0xa4(r1)
    addi r3, r4, lbl_807C6A40@l
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    stw r29, 0x94(r1)
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800226E4_0000268C
    li r0, -0x1
    b lbl_fn_800226E4_00002698
lbl_fn_800226E4_0000268C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800226E4_00002698:
    cmpwi r0, 0x1
    bne lbl_fn_800226E4_000026FC
    lis r7, lbl_807C6A40@ha
    addi r3, r7, lbl_807C6A40@l
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800226E4_000026BC
    li r3, -0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_000026BC:
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x50(r3)
    addi r4, r1, 0x78
    addi r5, r1, 0x7c
    addi r6, r1, 0x80
    stw r0, lbl_807C6A40@l(r7)
    addi r7, r1, 0x84
    li r3, 0x0
    stw r8, 0x84(r1)
    stw r8, 0x80(r1)
    stw r8, 0x7c(r1)
    stw r8, 0x78(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_000026FC:
    lis r29, lbl_807C68C0@ha
    li r4, 0x0
    lwz r3, lbl_807C68C0@l(r29)
    bl fn_8001BC38
    cmpwi r3, 0x0
    beq lbl_fn_800226E4_000029F4
    lwz r3, lbl_807C68C0@l(r29)
    li r4, 0x0
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_800226E4_00002864
    lis r3, lbl_807C6A40@ha
    addi r4, r29, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0x20(r4)
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    ble lbl_fn_800226E4_0000274C
    cmpwi r4, 0x0
    bne lbl_fn_800226E4_00002754
lbl_fn_800226E4_0000274C:
    li r0, 0x0
    b lbl_fn_800226E4_00002764
lbl_fn_800226E4_00002754:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
lbl_fn_800226E4_00002764:
    lis r10, lbl_807C6A40@ha
    addi r7, r10, lbl_807C6A40@l
    lwz r9, 0x1c(r7)
    cmpw r0, r9
    bge lbl_fn_800226E4_0000280C
    lis r4, lbl_807C68C0@ha
    li r6, 0x1
    addi r4, r4, lbl_807C68C0@l
    li r5, 0x0
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    stw r6, 0xc(r7)
    add r0, r0, r3
    srawi r0, r0, 1
    stw r6, lbl_807C6A40@l(r10)
    subf r29, r0, r4
    add r0, r4, r0
    stw r5, 0x50(r7)
    subf. r30, r29, r0
    ble lbl_fn_800226E4_000027CC
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r29, r29, r0
lbl_fn_800226E4_000027CC:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x74(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x68
    stw r5, 0x70(r1)
    addi r5, r1, 0x6c
    addi r6, r1, 0x70
    addi r7, r1, 0x74
    stw r29, 0x6c(r1)
    li r3, 0x4
    stw r0, 0x68(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_0000280C:
    lwz r0, 0x50(r7)
    cmpwi r0, 0x0
    bne lbl_fn_800226E4_0000285C
    lwz r0, 0x18(r7)
    li r3, 0x1
    li r8, 0x0
    stw r3, 0x50(r7)
    addi r4, r1, 0x58
    addi r5, r1, 0x5c
    stw r3, lbl_807C6A40@l(r10)
    addi r6, r1, 0x60
    addi r7, r1, 0x64
    li r3, 0x8
    stw r8, 0x64(r1)
    stw r8, 0x60(r1)
    stw r9, 0x5c(r1)
    stw r0, 0x58(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_0000285C:
    li r3, -0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_00002864:
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_800226E4_000028C0
    lwz r0, lbl_807C68C0@l(r29)
    li r8, 0x0
    stw r8, 0x54(r1)
    addi r4, r1, 0x48
    addi r5, r1, 0x4c
    addi r6, r1, 0x50
    stw r8, 0x50(r1)
    addi r7, r1, 0x54
    li r3, 0x7
    stw r0, 0x4c(r1)
    stw r8, 0x48(r1)
    bl fn_8001AEDC
    lwz r0, 0x20(r31)
    li r3, 0x1
    stw r3, lbl_807C6A40@l(r30)
    li r3, 0x9
    stw r0, 0x3c(r31)
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_000028C0:
    lwz r3, 0x18(r31)
    addi r4, r29, lbl_807C68C0@l
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_800226E4_000028DC
    cmpwi r4, 0x0
    bne lbl_fn_800226E4_000028E4
lbl_fn_800226E4_000028DC:
    li r0, 0x0
    b lbl_fn_800226E4_000028F4
lbl_fn_800226E4_000028E4:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
lbl_fn_800226E4_000028F4:
    lis r10, lbl_807C6A40@ha
    addi r7, r10, lbl_807C6A40@l
    lwz r9, 0x1c(r7)
    cmpw r0, r9
    bge lbl_fn_800226E4_0000299C
    lis r4, lbl_807C68C0@ha
    li r6, 0x1
    addi r4, r4, lbl_807C68C0@l
    li r5, 0x0
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    stw r6, 0xc(r7)
    add r0, r0, r3
    srawi r0, r0, 1
    stw r6, lbl_807C6A40@l(r10)
    subf r29, r0, r4
    add r0, r4, r0
    stw r5, 0x50(r7)
    subf. r30, r29, r0
    ble lbl_fn_800226E4_0000295C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r29, r29, r0
lbl_fn_800226E4_0000295C:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x44(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x38
    stw r5, 0x40(r1)
    addi r5, r1, 0x3c
    addi r6, r1, 0x40
    addi r7, r1, 0x44
    stw r29, 0x3c(r1)
    li r3, 0x4
    stw r0, 0x38(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_0000299C:
    lwz r0, 0x50(r7)
    cmpwi r0, 0x0
    bne lbl_fn_800226E4_000029EC
    lwz r0, 0x18(r7)
    li r3, 0x1
    li r8, 0x0
    stw r3, 0x50(r7)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    stw r3, lbl_807C6A40@l(r10)
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    li r3, 0x8
    stw r8, 0x34(r1)
    stw r8, 0x30(r1)
    stw r9, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_000029EC:
    li r3, -0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_000029F4:
    lis r3, lbl_807C6A40@ha
    addi r4, r29, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0x20(r4)
    lwz r3, 0x18(r3)
    cmpwi r3, 0x0
    ble lbl_fn_800226E4_00002A18
    cmpwi r4, 0x0
    bne lbl_fn_800226E4_00002A20
lbl_fn_800226E4_00002A18:
    li r0, 0x0
    b lbl_fn_800226E4_00002A30
lbl_fn_800226E4_00002A20:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x88(r1)
    lwz r0, 0x8c(r1)
lbl_fn_800226E4_00002A30:
    lis r10, lbl_807C6A40@ha
    addi r7, r10, lbl_807C6A40@l
    lwz r9, 0x1c(r7)
    cmpw r0, r9
    bge lbl_fn_800226E4_00002AD8
    lis r4, lbl_807C68C0@ha
    li r6, 0x1
    addi r4, r4, lbl_807C68C0@l
    li r5, 0x0
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    stw r6, 0xc(r7)
    add r0, r0, r3
    srawi r0, r0, 1
    stw r6, lbl_807C6A40@l(r10)
    subf r29, r0, r4
    add r0, r4, r0
    stw r5, 0x50(r7)
    subf. r30, r29, r0
    ble lbl_fn_800226E4_00002A98
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r29, r29, r0
lbl_fn_800226E4_00002A98:
    lis r3, lbl_807C68C0@ha
    li r5, 0x0
    addi r3, r3, lbl_807C68C0@l
    stw r5, 0x24(r1)
    lwz r0, 0x20(r3)
    addi r4, r1, 0x18
    stw r5, 0x20(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r29, 0x1c(r1)
    li r3, 0x4
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x5
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_00002AD8:
    lwz r0, 0x50(r7)
    cmpwi r0, 0x0
    bne lbl_fn_800226E4_00002B28
    lwz r0, 0x18(r7)
    li r3, 0x1
    li r8, 0x0
    stw r3, 0x50(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r3, lbl_807C6A40@l(r10)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x8
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r9, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_800226E4_00002B2C
lbl_fn_800226E4_00002B28:
    li r3, -0x1
lbl_fn_800226E4_00002B2C:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    lwz r29, 0x94(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_80022BD4(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022BD4_00002B70
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_80022BD4_00002B70:
    li r3, -0x1
    blr
}

asm void fn_80022C04(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    lis r4, lbl_807C68C0@ha
    stw r0, 0x54(r1)
    addi r3, r3, lbl_807C6A40@l
    addi r4, r4, lbl_807C68C0@l
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    lwz r3, 0x18(r3)
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    ble lbl_fn_80022C04_00002BB8
    cmpwi r4, 0x0
    bne lbl_fn_80022C04_00002BC0
lbl_fn_80022C04_00002BB8:
    li r0, 0x0
    b lbl_fn_80022C04_00002BD0
lbl_fn_80022C04_00002BC0:
    bl fn_8001ADE8
    fctiwz f0, f1
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
lbl_fn_80022C04_00002BD0:
    lis r31, lbl_807C6A40@ha
    addi r29, r31, lbl_807C6A40@l
    lwz r9, 0x1c(r29)
    cmpw r0, r9
    bge lbl_fn_80022C04_00002D20
    lis r30, lbl_807C68C0@ha
    li r4, 0x0
    lwz r3, lbl_807C68C0@l(r30)
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_80022C04_00002C7C
    addi r3, r30, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022C04_00002C74
    lwz r0, 0x24(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80022C04_00002C74
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80022C04_00002C64
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x34(r1)
    addi r4, r1, 0x28
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    stw r0, 0x30(r1)
    addi r7, r1, 0x34
    li r3, 0x5
    stw r0, 0x2c(r1)
    stw r30, 0x28(r1)
    bl fn_8001AEDC
    stw r30, lbl_807C6A40@l(r31)
    li r3, 0x8
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002C64:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002C74:
    li r3, -0x1
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002C7C:
    lwz r0, 0x3c(r29)
    cmpwi r0, 0x0
    bgt lbl_fn_80022C04_00002CA0
    li r3, 0x0
    li r0, 0x1
    stw r3, 0xc(r29)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r31)
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002CA0:
    addi r3, r30, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022C04_00002D18
    lwz r0, 0x24(r29)
    cmpwi r0, 0x1
    bne lbl_fn_80022C04_00002D18
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80022C04_00002D08
    li r0, 0x0
    li r30, 0x1
    stw r0, 0x24(r1)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r0, 0x20(r1)
    addi r7, r1, 0x24
    li r3, 0x5
    stw r0, 0x1c(r1)
    stw r30, 0x18(r1)
    bl fn_8001AEDC
    stw r30, lbl_807C6A40@l(r31)
    li r3, 0x8
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002D08:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x1
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002D18:
    li r3, -0x1
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002D20:
    lwz r0, 0x50(r29)
    li r8, 0x0
    li r3, 0x1
    stw r8, 0xc(r29)
    cmpwi r0, 0x0
    stw r3, lbl_807C6A40@l(r31)
    bne lbl_fn_80022C04_00002D74
    lwz r0, 0x18(r29)
    addi r4, r1, 0x8
    stw r3, 0x50(r29)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0x14(r1)
    li r3, 0x8
    stw r8, 0x10(r1)
    stw r9, 0xc(r1)
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x1
    b lbl_fn_80022C04_00002D78
lbl_fn_80022C04_00002D74:
    li r3, 0x1
lbl_fn_80022C04_00002D78:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80022E20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x3c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80022E20_00002E60
    lis r3, lbl_807C68C0@ha
    li r4, 0x0
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BC80
    cmpwi r3, 0x0
    beq lbl_fn_80022E20_00002E18
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    blt lbl_fn_80022E20_00002DE8
    li r0, -0x1
    b lbl_fn_80022E20_00002DF4
lbl_fn_80022E20_00002DE8:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80022E20_00002DF4:
    cmpwi r0, 0x1
    bne lbl_fn_80022E20_00002E10
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80022E20_00002EA0
lbl_fn_80022E20_00002E10:
    li r3, -0x1
    b lbl_fn_80022E20_00002EA0
lbl_fn_80022E20_00002E18:
    lwz r0, 0x10(r31)
    li r3, 0x1
    lwz r4, 0x3c(r31)
    cmpwi r0, 0x1
    stw r3, lbl_807C6A40@l(r30)
    subi r0, r4, 0x1
    stw r0, 0x3c(r31)
    blt lbl_fn_80022E20_00002E40
    li r0, -0x1
    b lbl_fn_80022E20_00002E48
lbl_fn_80022E20_00002E40:
    stw r3, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80022E20_00002E48:
    cmpwi r0, 0x1
    bne lbl_fn_80022E20_00002E58
    li r3, 0x1
    b lbl_fn_80022E20_00002EA0
lbl_fn_80022E20_00002E58:
    li r3, -0x1
    b lbl_fn_80022E20_00002EA0
lbl_fn_80022E20_00002E60:
    lwz r0, 0x10(r31)
    cmpwi r0, 0x1
    blt lbl_fn_80022E20_00002E74
    li r0, -0x1
    b lbl_fn_80022E20_00002E80
lbl_fn_80022E20_00002E74:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80022E20_00002E80:
    cmpwi r0, 0x1
    bne lbl_fn_80022E20_00002E9C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80022E20_00002EA0
lbl_fn_80022E20_00002E9C:
    li r3, -0x1
lbl_fn_80022E20_00002EA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80022F44(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80022F44_00002EE0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_80022F44_00002EE0:
    li r3, -0x1
    blr
}

asm void fn_80022F74(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r7, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    lwz r4, 0x7c(r3)
    addi r6, r7, lbl_807C6A40@l
    li r3, 0x1e
    li r5, 0x5a
    stw r3, 0x1c(r6)
    li r3, 0x1
    stw r5, 0x20(r6)
    stw r4, 0x24(r6)
    stw r0, lbl_807C6A40@l(r7)
    blr
}

asm void fn_80022FAC(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stw r31, 0x7c(r1)
    stw r30, 0x78(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80022FAC_00003074
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80022FAC_00002FB0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80022FAC_00002FA8
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x48(r1)
    addi r4, r1, 0x54
    addi r5, r1, 0x50
    addi r6, r1, 0x4c
    stw r0, 0x4c(r1)
    addi r7, r1, 0x48
    li r3, 0x6
    stw r0, 0x50(r1)
    stw r31, 0x54(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80022FAC_00002FE8
lbl_fn_80022FAC_00002FA8:
    li r0, -0x1
    b lbl_fn_80022FAC_00002FE8
lbl_fn_80022FAC_00002FB0:
    li r0, 0x0
    stw r0, 0x58(r1)
    addi r4, r1, 0x64
    addi r5, r1, 0x60
    stw r0, 0x5c(r1)
    addi r6, r1, 0x5c
    addi r7, r1, 0x58
    li r3, 0x0
    stw r0, 0x60(r1)
    stw r0, 0x64(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x1
lbl_fn_80022FAC_00002FE8:
    cmpwi r0, 0x1
    bne lbl_fn_80022FAC_00003004
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003004:
    cmpwi r0, 0x9
    bne lbl_fn_80022FAC_00003020
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003020:
    cmpwi r0, 0x6
    bne lbl_fn_80022FAC_0000306C
    bl fn_8003CDB0
    cmpwi r3, 0x4
    bne lbl_fn_80022FAC_00003048
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003048:
    cmpwi r3, 0x9
    bne lbl_fn_80022FAC_00003064
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003064:
    li r3, -0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_0000306C:
    li r3, -0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003074:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80022FAC_000030E0
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80022FAC_000030D8
    lwz r0, 0x20(r31)
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
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x5
    b lbl_fn_80022FAC_00003118
lbl_fn_80022FAC_000030D8:
    li r0, -0x1
    b lbl_fn_80022FAC_00003118
lbl_fn_80022FAC_000030E0:
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
lbl_fn_80022FAC_00003118:
    cmpwi r0, 0x5
    bne lbl_fn_80022FAC_00003134
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003134:
    cmpwi r0, 0x1
    bne lbl_fn_80022FAC_00003150
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003150:
    cmpwi r0, 0x6
    bne lbl_fn_80022FAC_00003214
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_807C6A40@ha
    addi r31, r5, lbl_807C68C0@l
    addi r3, r3, lbl_807C6A40@l
    lwz r4, 0xc(r31)
    lwz r0, 0x20(r3)
    cmpw r4, r0
    bge lbl_fn_80022FAC_00003180
    li r3, -0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003180:
    lfs f1, 0x1c(r31)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80022FAC_000031B4
    lwz r3, lbl_807C68C0@l(r5)
    bl fn_8001B634
    cmpwi r3, 0x0
    ble lbl_fn_80022FAC_000031B4
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80022FAC_000031B8
lbl_fn_80022FAC_000031B4:
    li r0, 0x0
lbl_fn_80022FAC_000031B8:
    cmpwi r0, 0x0
    beq lbl_fn_80022FAC_0000320C
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
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_0000320C:
    li r3, -0x1
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003214:
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
    bge lbl_fn_80022FAC_00003290
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
    b lbl_fn_80022FAC_00003294
lbl_fn_80022FAC_00003290:
    li r3, -0x1
lbl_fn_80022FAC_00003294:
    lwz r0, 0x84(r1)
    lwz r31, 0x7c(r1)
    lwz r30, 0x78(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_80023338(void)
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
    bne lbl_fn_80023338_00003388
    lis r4, lbl_807C68C0@ha
    addi r4, r4, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80023338_00003360
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80023338_00003320
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80023338_00003320:
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
    b lbl_fn_80023338_00003364
lbl_fn_80023338_00003360:
    li r0, -0x1
lbl_fn_80023338_00003364:
    cmpwi r0, 0x7
    bne lbl_fn_80023338_00003380
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80023338_000034C4
lbl_fn_80023338_00003380:
    li r3, -0x1
    b lbl_fn_80023338_000034C4
lbl_fn_80023338_00003388:
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
    bge lbl_fn_80023338_00003400
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
    b lbl_fn_80023338_00003488
lbl_fn_80023338_00003400:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80023338_00003484
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80023338_00003444
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80023338_00003444:
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
    b lbl_fn_80023338_00003488
lbl_fn_80023338_00003484:
    li r0, -0x1
lbl_fn_80023338_00003488:
    cmpwi r0, 0x5
    bne lbl_fn_80023338_000034A4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80023338_000034C4
lbl_fn_80023338_000034A4:
    cmpwi r0, 0x7
    bne lbl_fn_80023338_000034C0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80023338_000034C4
lbl_fn_80023338_000034C0:
    li r3, -0x1
lbl_fn_80023338_000034C4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80023568(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    lis r30, lbl_807C6A40@ha
    addi r3, r30, lbl_807C6A40@l
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80023568_00003648
    lis r3, lbl_807C68C0@ha
    addi r31, r3, lbl_807C68C0@l
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80023568_000035B8
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001BD14
    lfs f0, 0x1c(r31)
    fcmpo cr0, f0, f1
    ble lbl_fn_80023568_0000357C
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_80023568_00003568
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
lbl_fn_80023568_00003568:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80023568_000035BC
lbl_fn_80023568_0000357C:
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x6
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    stw r31, lbl_807C6A40@l(r30)
    li r0, 0x9
    b lbl_fn_80023568_000035BC
lbl_fn_80023568_000035B8:
    li r0, -0x1
lbl_fn_80023568_000035BC:
    cmpwi r0, 0x6
    bne lbl_fn_80023568_00003624
    bl fn_8003CDB0
    cmpwi r3, 0x6
    bne lbl_fn_80023568_000035E4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_000035E4:
    cmpwi r3, 0x9
    bne lbl_fn_80023568_00003600
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_00003600:
    cmpwi r3, 0x4
    bne lbl_fn_80023568_0000361C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_0000361C:
    li r3, -0x1
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_00003624:
    cmpwi r0, 0x9
    bne lbl_fn_80023568_00003640
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_00003640:
    li r3, -0x1
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_00003648:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80023568_0000366C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r0, 0x6
    b lbl_fn_80023568_00003670
lbl_fn_80023568_0000366C:
    li r0, -0x1
lbl_fn_80023568_00003670:
    cmpwi r0, 0x6
    bne lbl_fn_80023568_000036BC
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80023568_00003698
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_00003698:
    cmpwi r3, 0x4
    bne lbl_fn_80023568_000036B4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_000036B4:
    li r3, -0x1
    b lbl_fn_80023568_000036C0
lbl_fn_80023568_000036BC:
    li r3, -0x1
lbl_fn_80023568_000036C0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80023764(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_80023C84
    cmpwi r3, 0x0
    bne lbl_fn_80023764_00003704
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x0
    b lbl_fn_80023764_0000374C
lbl_fn_80023764_00003704:
    lis r4, lbl_807C6A40@ha
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80023764_00003720
    li r0, -0x1
    b lbl_fn_80023764_0000372C
lbl_fn_80023764_00003720:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80023764_0000372C:
    cmpwi r0, 0x1
    bne lbl_fn_80023764_00003748
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80023764_0000374C
lbl_fn_80023764_00003748:
    li r3, -0x1
lbl_fn_80023764_0000374C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800237E8(void)
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
    blt lbl_fn_800237E8_0000378C
    li r0, -0x1
    b lbl_fn_800237E8_00003798
lbl_fn_800237E8_0000378C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800237E8_00003798:
    cmpwi r0, 0x1
    bne lbl_fn_800237E8_000037A8
    li r3, -0x1
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_000037A8:
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r3, 0x20(r3)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_800237E8_000038B8
    lis r30, lbl_807C6A40@ha
    addi r31, r30, lbl_807C6A40@l
    lwz r0, 0x28(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800237E8_0000381C
    lwz r0, 0x24(r31)
    li r3, 0x0
    li r8, 0x14
    stw r3, 0x8(r1)
    addi r4, r1, 0x14
    addi r5, r1, 0x10
    stw r3, 0xc(r1)
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    li r3, 0xc
    stw r8, 0x10(r1)
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, 0x28(r31)
    li r3, 0x3
    stw r0, lbl_807C6A40@l(r30)
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_0000381C:
    lwz r0, 0x18(r31)
    cmpwi r0, 0x0
    bne lbl_fn_800237E8_0000387C
    bl fn_8003CDB0
    cmpwi r3, 0x4
    bne lbl_fn_800237E8_00003844
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_00003844:
    cmpwi r3, 0x9
    bne lbl_fn_800237E8_0000385C
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x9
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_0000385C:
    cmpwi r3, 0x6
    bne lbl_fn_800237E8_00003874
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_00003874:
    li r3, -0x1
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_0000387C:
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_800237E8_00003898
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x4
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_00003898:
    cmpwi r3, 0x6
    bne lbl_fn_800237E8_000038B0
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r30)
    li r3, 0x6
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_000038B0:
    li r3, -0x1
    b lbl_fn_800237E8_000038BC
lbl_fn_800237E8_000038B8:
    li r3, -0x1
lbl_fn_800237E8_000038BC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80023960(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x34(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x2c(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80023960_00003934
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80023960_00003984
lbl_fn_80023960_00003934:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80023960_00003980
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_80023960_00003984
lbl_fn_80023960_00003980:
    li r0, -0x1
lbl_fn_80023960_00003984:
    cmpwi r0, 0x8
    bne lbl_fn_80023960_000039A0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80023960_000039F0
lbl_fn_80023960_000039A0:
    cmpwi r0, 0x6
    bne lbl_fn_80023960_000039EC
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80023960_000039C8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80023960_000039F0
lbl_fn_80023960_000039C8:
    cmpwi r3, 0x6
    bne lbl_fn_80023960_000039E4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80023960_000039F0
lbl_fn_80023960_000039E4:
    li r3, -0x1
    b lbl_fn_80023960_000039F0
lbl_fn_80023960_000039EC:
    li r3, -0x1
lbl_fn_80023960_000039F0:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80023A90(void)
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
    beq lbl_fn_80023A90_00003AB0
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80023A90_00003A64
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80023A90_00003A64:
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
    b lbl_fn_80023A90_00003AB4
lbl_fn_80023A90_00003AB0:
    li r0, -0x1
lbl_fn_80023A90_00003AB4:
    cmpwi r0, 0x5
    bne lbl_fn_80023A90_00003AD0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80023A90_00003AD4
lbl_fn_80023A90_00003AD0:
    li r3, -0x1
lbl_fn_80023A90_00003AD4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80023B78(void)
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
    beq lbl_fn_80023B78_00003B8C
    lwz r3, 0x4c(r4)
    lwz r4, 0x48(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80023B78_00003B4C
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80023B78_00003B4C:
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
    b lbl_fn_80023B78_00003B90
lbl_fn_80023B78_00003B8C:
    li r0, -0x1
lbl_fn_80023B78_00003B90:
    cmpwi r0, 0x7
    bne lbl_fn_80023B78_00003BAC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80023B78_00003BB0
lbl_fn_80023B78_00003BAC:
    li r3, -0x1
lbl_fn_80023B78_00003BB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80023C54(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80023C54_00003BF0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    blr
lbl_fn_80023C54_00003BF0:
    li r3, -0x1
    blr
}

asm void fn_80023C84(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r9, lbl_807C6A40@ha
    stw r0, 0x34(r1)
    addi r7, r9, lbl_807C6A40@l
    lwz r0, 0x18(r7)
    cmpwi r0, 0x0
    bne lbl_fn_80023C84_00003C9C
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80023C84_00003C94
    li r0, 0x0
    li r8, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x18
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    stw r8, 0xc(r7)
    addi r7, r1, 0x24
    li r3, 0x0
    stw r8, lbl_807C6A40@l(r9)
    stw r0, 0x24(r1)
    stw r0, 0x20(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80023C84_00003D20
lbl_fn_80023C84_00003C94:
    li r3, -0x1
    b lbl_fn_80023C84_00003D20
lbl_fn_80023C84_00003C9C:
    lwz r3, 0x1c(r7)
    lis r0, 0x4330
    lis r4, lbl_8072FF60@ha
    lis r5, lbl_807C68C0@ha
    xoris r3, r3, 0x8000
    stw r3, 0x2c(r1)
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r4)
    stw r0, 0x28(r1)
    lfs f2, 0x1c(r5)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    cror eq, gt, eq
    bne lbl_fn_80023C84_00003D1C
    li r8, 0x0
    li r0, 0x1
    stw r8, 0x18(r7)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r8, 0xc(r7)
    addi r7, r1, 0x14
    li r3, 0x0
    stw r0, lbl_807C6A40@l(r9)
    stw r8, 0x14(r1)
    stw r8, 0x10(r1)
    stw r8, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    li r3, 0x0
    b lbl_fn_80023C84_00003D20
lbl_fn_80023C84_00003D1C:
    li r3, -0x1
lbl_fn_80023C84_00003D20:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80023DBC(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r6, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r5, r6, lbl_807C6A40@l
    lwz r7, 0x7c(r3)
    lwz r4, 0x80(r3)
    li r3, 0x1
    stw r7, 0x18(r5)
    stw r4, 0x1c(r5)
    stw r0, lbl_807C6A40@l(r6)
    blr
}

asm void fn_80023DEC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80023DEC_00003DEC
    lfs f1, 0x1c(r3)
    lfs f0, lbl_80880798
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80023DEC_00003DE4
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r31, lbl_807C6A40@l
    stw r8, 0x8(r1)
    lwz r0, 0x18(r3)
    addi r4, r1, 0x14
    stw r8, 0xc(r1)
    addi r5, r1, 0x10
    addi r6, r1, 0xc
    addi r7, r1, 0x8
    stw r8, 0x10(r1)
    li r3, 0x6
    stw r0, 0x14(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x4
    b lbl_fn_80023DEC_00003DF0
lbl_fn_80023DEC_00003DE4:
    li r3, -0x1
    b lbl_fn_80023DEC_00003DF0
lbl_fn_80023DEC_00003DEC:
    li r3, -0x1
lbl_fn_80023DEC_00003DF0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80023E90(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80023E90_00003E38
    li r0, -0x1
    b lbl_fn_80023E90_00003E44
lbl_fn_80023E90_00003E38:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80023E90_00003E44:
    cmpwi r0, 0x1
    bne lbl_fn_80023E90_00003E54
    li r3, -0x1
    b lbl_fn_80023E90_00003F08
lbl_fn_80023E90_00003E54:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80023E90_00003E90
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_80023E90_00003E90
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_80023E90_00003E94
lbl_fn_80023E90_00003E90:
    li r0, 0x0
lbl_fn_80023E90_00003E94:
    cmpwi r0, 0x0
    beq lbl_fn_80023E90_00003EC4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    b lbl_fn_80023E90_00003F08
lbl_fn_80023E90_00003EC4:
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r31, lbl_807C6A40@l
    stw r8, 0x14(r1)
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x0
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
lbl_fn_80023E90_00003F08:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80023FAC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80023FAC_00003F48
    li r0, -0x1
    b lbl_fn_80023FAC_00003F54
lbl_fn_80023FAC_00003F48:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80023FAC_00003F54:
    cmpwi r0, 0x1
    bne lbl_fn_80023FAC_00003F9C
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
    b lbl_fn_80023FAC_00003FA0
lbl_fn_80023FAC_00003F9C:
    li r3, -0x1
lbl_fn_80023FAC_00003FA0:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002403C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8002403C_0000401C
    lis r31, lbl_807C6A40@ha
    li r8, 0x0
    addi r3, r31, lbl_807C6A40@l
    stw r8, 0x14(r1)
    lwz r0, 0x1c(r3)
    addi r4, r1, 0x8
    stw r8, 0x10(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    stw r8, 0xc(r1)
    li r3, 0x0
    stw r0, 0x8(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x9
    b lbl_fn_8002403C_00004020
lbl_fn_8002403C_0000401C:
    li r3, -0x1
lbl_fn_8002403C_00004020:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800240C0(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800240C0_0000405C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    blr
lbl_fn_800240C0_0000405C:
    li r3, -0x1
    blr
}

asm void fn_800240F0(void)
{
    nofralloc
    lis r4, lbl_807C6A40@ha
    li r0, 0x1
    addi r3, r4, lbl_807C6A40@l
    li r5, 0xf
    stw r5, 0x1c(r3)
    li r3, 0x1
    stw r0, lbl_807C6A40@l(r4)
    blr
}

asm void fn_80024110(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80024110_000040E4
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80024110_00004134
lbl_fn_80024110_000040E4:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80024110_00004130
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x18(r1)
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    addi r6, r1, 0x1c
    stw r0, 0x1c(r1)
    addi r7, r1, 0x18
    li r3, 0x5
    stw r0, 0x20(r1)
    stw r31, 0x24(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_80024110_00004134
lbl_fn_80024110_00004130:
    li r0, -0x1
lbl_fn_80024110_00004134:
    cmpwi r0, 0x6
    bne lbl_fn_80024110_00004194
    lis r3, lbl_807C68C0@ha
    addi r3, r3, lbl_807C68C0@l
    lwz r8, 0x20(r3)
    cmpwi r8, 0x0
    beq lbl_fn_80024110_00004180
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_80024110_00004180:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80024110_000041B4
lbl_fn_80024110_00004194:
    cmpwi r0, 0x8
    bne lbl_fn_80024110_000041B0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80024110_000041B4
lbl_fn_80024110_000041B0:
    li r3, -0x1
lbl_fn_80024110_000041B4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80024254(void)
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
    beq lbl_fn_80024254_00004274
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80024254_00004228
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80024254_00004228:
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
    b lbl_fn_80024254_00004278
lbl_fn_80024254_00004274:
    li r0, -0x1
lbl_fn_80024254_00004278:
    cmpwi r0, 0x5
    bne lbl_fn_80024254_00004294
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80024254_00004298
lbl_fn_80024254_00004294:
    li r3, -0x1
lbl_fn_80024254_00004298:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8002433C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    lis r30, lbl_807C68C0@ha
    addi r30, r30, lbl_807C68C0@l
    lwz r3, 0x20(r30)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_8002433C_000043D0
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8002433C_00004334
    lis r31, lbl_807C6A40@ha
    li r9, 0x0
    addi r3, r31, lbl_807C6A40@l
    lwz r0, 0x20(r30)
    lwz r8, 0x1c(r3)
    addi r4, r1, 0x28
    stw r9, 0x34(r1)
    addi r5, r1, 0x2c
    addi r6, r1, 0x30
    addi r7, r1, 0x34
    stw r9, 0x30(r1)
    li r3, 0x4
    stw r8, 0x2c(r1)
    stw r0, 0x28(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002433C_0000440C
lbl_fn_8002433C_00004334:
    lis r31, lbl_807C6A40@ha
    lwz r3, 0xc(r30)
    addi r5, r31, lbl_807C6A40@l
    lwz r0, 0x18(r5)
    cmpw r3, r0
    bge lbl_fn_8002433C_000043C8
    lwz r4, 0x30(r30)
    lis r0, 0x4330
    stw r0, 0x38(r1)
    lis r3, lbl_8072FF60@ha
    xoris r0, r4, 0x8000
    lfd f1, lbl_8072FF60@l(r3)
    stw r0, 0x3c(r1)
    lfs f2, 0x1c(r30)
    lfd f0, 0x38(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_8002433C_000043C0
    lwz r8, 0x1c(r5)
    li r3, 0x0
    lwz r0, 0x20(r30)
    addi r4, r1, 0x18
    stw r3, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r3, 0x20(r1)
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_8002433C_0000440C
lbl_fn_8002433C_000043C0:
    li r3, -0x1
    b lbl_fn_8002433C_0000440C
lbl_fn_8002433C_000043C8:
    li r3, -0x1
    b lbl_fn_8002433C_0000440C
lbl_fn_8002433C_000043D0:
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
lbl_fn_8002433C_0000440C:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_800244B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_800244B0_0000444C
    li r0, -0x1
    b lbl_fn_800244B0_00004458
lbl_fn_800244B0_0000444C:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_800244B0_00004458:
    cmpwi r0, 0x1
    bne lbl_fn_800244B0_000044A0
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
    b lbl_fn_800244B0_000044A4
lbl_fn_800244B0_000044A0:
    li r3, -0x1
lbl_fn_800244B0_000044A4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024540(void)
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
    blt lbl_fn_80024540_000044E0
    li r0, -0x1
    b lbl_fn_80024540_000044EC
lbl_fn_80024540_000044E0:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80024540_000044EC:
    cmpwi r0, 0x1
    bne lbl_fn_80024540_000044FC
    li r3, -0x1
    b lbl_fn_80024540_00004568
lbl_fn_80024540_000044FC:
    lis r31, lbl_807C68C0@ha
    addi r31, r31, lbl_807C68C0@l
    lwz r3, 0x20(r31)
    bl fn_8001BE00
    cmpwi r3, 0x0
    beq lbl_fn_80024540_00004564
    lwz r8, 0x20(r31)
    cmpwi r8, 0x0
    beq lbl_fn_80024540_00004550
    li r3, 0x0
    li r0, 0x1e
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r3, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x3
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
lbl_fn_80024540_00004550:
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80024540_00004568
lbl_fn_80024540_00004564:
    li r3, -0x1
lbl_fn_80024540_00004568:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024608(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_807C6A40@ha
    stw r0, 0x14(r1)
    addi r3, r4, lbl_807C6A40@l
    lwz r0, 0x10(r3)
    cmpwi r0, 0x1
    blt lbl_fn_80024608_000045A4
    li r0, -0x1
    b lbl_fn_80024608_000045B0
lbl_fn_80024608_000045A4:
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r4)
    li r0, 0x1
lbl_fn_80024608_000045B0:
    cmpwi r0, 0x1
    bne lbl_fn_80024608_000045C0
    li r3, -0x1
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_000045C0:
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    addi r3, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r3)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_80024608_00004678
    bl fn_80024BC0
    cmpwi r3, 0x3
    bne lbl_fn_80024608_00004600
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x3
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_00004600:
    cmpwi r3, 0x7
    bne lbl_fn_80024608_0000461C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_0000461C:
    cmpwi r3, 0x5
    bne lbl_fn_80024608_00004638
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_00004638:
    cmpwi r3, 0x8
    bne lbl_fn_80024608_00004654
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_00004654:
    cmpwi r3, 0x1
    bne lbl_fn_80024608_00004670
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_00004670:
    li r3, -0x1
    b lbl_fn_80024608_0000467C
lbl_fn_80024608_00004678:
    li r3, -0x1
lbl_fn_80024608_0000467C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80024718(void)
{
    nofralloc
    lis r3, lbl_807C68C0@ha
    lis r8, lbl_807C6A40@ha
    addi r3, r3, lbl_807C68C0@l
    li r0, 0x1
    addi r7, r8, lbl_807C6A40@l
    lwz r9, 0x7c(r3)
    li r4, 0x0
    lwz r6, 0x80(r3)
    lwz r5, 0x84(r3)
    li r3, 0x1
    stw r9, 0x18(r7)
    stw r6, 0x1c(r7)
    stw r5, 0x20(r7)
    stw r4, 0x24(r7)
    stw r4, 0x28(r7)
    stw r4, 0x2c(r7)
    stw r0, lbl_807C6A40@l(r8)
    blr
}

asm void fn_80024760(void)
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
    beq lbl_fn_80024760_00004700
    cmpwi r4, 0x0
    bne lbl_fn_80024760_00004708
lbl_fn_80024760_00004700:
    li r6, 0x0
    b lbl_fn_80024760_00004718
lbl_fn_80024760_00004708:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r6, 0x1c(r1)
lbl_fn_80024760_00004718:
    lis r5, lbl_807C6A40@ha
    li r3, 0x1
    addi r4, r5, lbl_807C6A40@l
    stw r3, lbl_807C6A40@l(r5)
    lwz r0, 0x10(r4)
    stw r6, 0x3c(r4)
    cmpwi r0, 0x1
    blt lbl_fn_80024760_00004740
    li r0, -0x1
    b lbl_fn_80024760_00004748
lbl_fn_80024760_00004740:
    stw r3, lbl_807C6A40@l(r5)
    li r0, 0x1
lbl_fn_80024760_00004748:
    cmpwi r0, 0x1
    bne lbl_fn_80024760_00004784
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
    b lbl_fn_80024760_00004788
lbl_fn_80024760_00004784:
    li r3, -0x1
lbl_fn_80024760_00004788:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024824(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    stw r0, 0x24(r1)
    addi r3, r5, lbl_807C68C0@l
    stw r31, 0x1c(r1)
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80024824_00004808
    li r0, 0x0
    li r31, 0x1
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x6
    stw r0, 0xc(r1)
    stw r31, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x2
    addi r4, r3, lbl_807C6A40@l
    stw r31, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x24(r4)
    b lbl_fn_80024824_0000482C
lbl_fn_80024824_00004808:
    lis r4, lbl_807307A0@ha
    lwz r3, lbl_807C68C0@l(r5)
    addi r4, r4, lbl_807307A0@l
    addi r4, r4, 0x3f5
    bl fn_8001C068
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, -0x1
lbl_fn_80024824_0000482C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800248CC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    lfs f0, lbl_80880798
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    addi r31, r3, lbl_807C68C0@l
    lfs f1, 0x1c(r31)
    fcmpo cr0, f1, f0
    mfcr r0
    srwi. r0, r0, 31
    beq lbl_fn_800248CC_0000488C
    lwz r3, lbl_807C68C0@l(r3)
    bl fn_8001B5DC
    cmpwi r3, 0x0
    ble lbl_fn_800248CC_0000488C
    stw r3, 0x64(r31)
    li r0, 0x1
    b lbl_fn_800248CC_00004890
lbl_fn_800248CC_0000488C:
    li r0, 0x0
lbl_fn_800248CC_00004890:
    cmpwi r0, 0x0
    beq lbl_fn_800248CC_000048EC
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
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x9
    stw r0, 0x24(r4)
    b lbl_fn_800248CC_0000494C
lbl_fn_800248CC_000048EC:
    lis r4, lbl_807307A0@ha
    lis r3, lbl_807C68C0@ha
    addi r4, r4, lbl_807307A0@l
    lwz r3, lbl_807C68C0@l(r3)
    addi r4, r4, 0x3e0
    bl fn_8001C068
    lis r31, lbl_807C6A40@ha
    li r0, 0x0
    li r8, 0x1
    stw r8, lbl_807C6A40@l(r31)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x14(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x6
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    addi r3, r31, lbl_807C6A40@l
    li r0, 0x3
    stw r0, 0x24(r3)
    li r3, 0x1
lbl_fn_800248CC_0000494C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800249EC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807307A0@ha
    stw r0, 0x24(r1)
    li r0, 0x0
    addi r3, r3, lbl_807307A0@l
    addi r4, r1, 0x8
    addi r8, r3, 0x40a
    stw r0, 0x14(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0x10
    stw r0, 0x10(r1)
    addi r7, r1, 0x14
    li r3, 0x14
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r5, 0x1
    addi r4, r3, lbl_807C6A40@l
    li r0, 0x5
    stw r5, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x24(r4)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024A5C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r4, 0x0
    stw r0, 0x34(r1)
    addi r3, r1, 0x18
    stw r31, 0x2c(r1)
    lis r31, lbl_807C68C0@ha
    addi r5, r31, lbl_807C68C0@l
    stw r30, 0x28(r1)
    psq_l f1, 0x10(r5), 0, 0
    lfs f2, 0x18(r5)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x20(r1)
    bl fn_8001B5B4
    mr r30, r3
    lwz r3, lbl_807C68C0@l(r31)
    lfs f1, lbl_8088079C
    mr r4, r30
    lfs f2, lbl_808807A0
    li r5, 0x1
    lfs f3, lbl_80880798
    li r6, -0x1
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80024A5C_00004A68
    lwz r3, lbl_807C68C0@l(r31)
    mr r4, r30
    lfs f1, lbl_808807A4
    li r5, 0x1
    lfs f2, lbl_808807A8
    li r6, -0x1
    lfs f3, lbl_80880798
    bl fn_8001BA88
    cmpwi r3, 0x0
    mr r8, r3
    bgt lbl_fn_80024A5C_00004A68
    mr r8, r30
lbl_fn_80024A5C_00004A68:
    li r0, 0x0
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    stw r0, 0x10(r1)
    addi r6, r1, 0x10
    addi r7, r1, 0x14
    li r3, 0x1
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    addi r4, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x28(r4)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80024B50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    li r8, 0x0
    stw r0, 0x24(r1)
    addi r3, r3, lbl_807C68C0@l
    addi r4, r1, 0x8
    addi r5, r1, 0xc
    lwz r0, 0x20(r3)
    addi r6, r1, 0x10
    stw r8, 0x14(r1)
    addi r7, r1, 0x14
    li r3, 0x7
    stw r8, 0x10(r1)
    stw r0, 0xc(r1)
    stw r8, 0x8(r1)
    bl fn_8001AEDC
    lis r3, lbl_807C6A40@ha
    li r5, 0x1
    addi r4, r3, lbl_807C6A40@l
    li r0, 0x6
    stw r5, lbl_807C6A40@l(r3)
    li r3, 0x1
    stw r0, 0x24(r4)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024BC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, lbl_807C6A40@ha
    stw r0, 0x24(r1)
    li r0, 0x1
    stw r31, 0x1c(r1)
    addi r31, r3, lbl_807C6A40@l
    stw r0, lbl_807C6A40@l(r3)
    lwz r3, 0x28(r31)
    lwz r4, 0x40(r31)
    cmpwi r3, 0x1
    addi r0, r4, 0x1
    stw r0, 0x40(r31)
    blt lbl_fn_80024BC0_00004B94
    addi r0, r3, 0x1
    stw r0, 0x28(r31)
    cmpwi r0, 0x5a
    blt lbl_fn_80024BC0_00004B8C
    li r0, 0x0
    stw r0, 0x28(r31)
    li r3, 0x1
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004B8C:
    li r3, 0x1
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004B94:
    lwz r6, 0x24(r31)
    lwz r3, 0x44(r31)
    cmpwi r6, 0x1
    addi r0, r3, 0x1
    stw r0, 0x44(r31)
    blt lbl_fn_80024BC0_00004C74
    lis r5, lbl_807C68C0@ha
    addi r4, r5, lbl_807C68C0@l
    lwz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80024BC0_00004C6C
    lwz r3, 0x48(r31)
    cmpwi r6, 0x5
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
    bge lbl_fn_80024BC0_00004C10
    li r0, 0x0
    stw r0, 0x24(r31)
    bl fn_80680CF8
    slwi r0, r3, 29
    srwi r4, r3, 31
    subf r0, r4, r0
    li r3, 0x5
    rotlwi r0, r0, 3
    add r4, r0, r4
    addi r0, r4, 0x1
    stw r0, 0x2c(r31)
    cmpwi r0, 0x4
    bgt lbl_fn_80024BC0_00004CCC
    li r3, 0x3
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004C10:
    lwz r3, lbl_807C68C0@l(r5)
    li r0, 0x0
    stw r0, 0x24(r31)
    cmpwi r3, 0x0
    lwz r4, 0x20(r4)
    beq lbl_fn_80024BC0_00004C30
    cmpwi r4, 0x0
    bne lbl_fn_80024BC0_00004C38
lbl_fn_80024BC0_00004C30:
    li r4, 0x0
    b lbl_fn_80024BC0_00004C48
lbl_fn_80024BC0_00004C38:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
lbl_fn_80024BC0_00004C48:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bgt lbl_fn_80024BC0_00004C64
    li r3, 0x7
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004C64:
    li r3, 0x3
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004C6C:
    li r3, 0x1
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004C74:
    lis r4, lbl_807C68C0@ha
    lwz r3, lbl_807C68C0@l(r4)
    addi r4, r4, lbl_807C68C0@l
    lwz r4, 0x20(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80024BC0_00004C94
    cmpwi r4, 0x0
    bne lbl_fn_80024BC0_00004C9C
lbl_fn_80024BC0_00004C94:
    li r4, 0x0
    b lbl_fn_80024BC0_00004CAC
lbl_fn_80024BC0_00004C9C:
    bl fn_8001AD80
    fctiwz f0, f1
    stfd f0, 0x8(r1)
    lwz r4, 0xc(r1)
lbl_fn_80024BC0_00004CAC:
    lis r3, lbl_807C6A40@ha
    addi r3, r3, lbl_807C6A40@l
    lwz r0, 0x1c(r3)
    cmpw r4, r0
    bgt lbl_fn_80024BC0_00004CC8
    li r3, 0x7
    b lbl_fn_80024BC0_00004CCC
lbl_fn_80024BC0_00004CC8:
    li r3, 0x3
lbl_fn_80024BC0_00004CCC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80024D6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_807C6A40@ha
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r4, r5, lbl_807C6A40@l
    li r6, 0x5a
    li r0, 0xf
    stw r31, 0xc(r1)
    li r31, 0x1
    stw r6, 0x18(r4)
    lwz r3, lbl_807C68C0@l(r3)
    stw r0, 0x1c(r4)
    stw r31, lbl_807C6A40@l(r5)
    bl fn_8001BEB0
    cmpwi r3, 0x0
    beq lbl_fn_80024D6C_00004D28
    li r31, 0x7
lbl_fn_80024D6C_00004D28:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80024DCC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_807C68C0@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_807C68C0@l
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80024DCC_00004D74
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80024DCC_00004D78
lbl_fn_80024DCC_00004D74:
    li r0, -0x1
lbl_fn_80024DCC_00004D78:
    cmpwi r0, 0x6
    bne lbl_fn_80024DCC_00004DC4
    bl fn_8003DBA4
    cmpwi r3, 0x6
    bne lbl_fn_80024DCC_00004DA0
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80024DCC_00004DC8
lbl_fn_80024DCC_00004DA0:
    cmpwi r3, 0x4
    bne lbl_fn_80024DCC_00004DBC
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80024DCC_00004DC8
lbl_fn_80024DCC_00004DBC:
    li r3, -0x1
    b lbl_fn_80024DCC_00004DC8
lbl_fn_80024DCC_00004DC4:
    li r3, -0x1
lbl_fn_80024DCC_00004DC8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80024E64(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x44(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x28(r1)
    xoris r0, r4, 0x8000
    lfs f2, 0x1c(r5)
    stw r0, 0x2c(r1)
    lfd f0, 0x28(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    bge lbl_fn_80024E64_00004E70
    lis r31, lbl_807C6A40@ha
    lwz r0, 0x20(r5)
    addi r3, r31, lbl_807C6A40@l
    li r9, 0x0
    lwz r8, 0x1c(r3)
    addi r4, r1, 0x18
    stw r9, 0x24(r1)
    addi r5, r1, 0x1c
    addi r6, r1, 0x20
    addi r7, r1, 0x24
    stw r9, 0x20(r1)
    li r3, 0x4
    stw r8, 0x1c(r1)
    stw r0, 0x18(r1)
    bl fn_8001AEDC
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r31)
    li r3, 0x5
    b lbl_fn_80024E64_00004EF8
lbl_fn_80024E64_00004E70:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80024E64_00004EF4
    lwz r3, 0x4c(r5)
    lwz r4, 0x48(r5)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_80024E64_00004EB4
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_80024E64_00004EB4:
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x7
    b lbl_fn_80024E64_00004EF8
lbl_fn_80024E64_00004EF4:
    li r3, -0x1
lbl_fn_80024E64_00004EF8:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80024F9C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_807C68C0@ha
    lis r3, lbl_8072FF60@ha
    stw r0, 0x34(r1)
    lis r0, 0x4330
    addi r5, r5, lbl_807C68C0@l
    lfd f1, lbl_8072FF60@l(r3)
    stw r31, 0x2c(r1)
    lwz r4, 0x30(r5)
    stw r0, 0x18(r1)
    slwi r0, r4, 1
    lfs f2, 0x1c(r5)
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80024F9C_00004F70
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r0, 0x6
    b lbl_fn_80024F9C_00004FC0
lbl_fn_80024F9C_00004F70:
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    beq lbl_fn_80024F9C_00004FBC
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
    lis r3, lbl_807C6A40@ha
    li r0, 0x8
    stw r31, lbl_807C6A40@l(r3)
    b lbl_fn_80024F9C_00004FC0
lbl_fn_80024F9C_00004FBC:
    li r0, -0x1
lbl_fn_80024F9C_00004FC0:
    cmpwi r0, 0x6
    bne lbl_fn_80024F9C_0000500C
    bl fn_8003DBA4
    cmpwi r3, 0x4
    bne lbl_fn_80024F9C_00004FE8
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x4
    b lbl_fn_80024F9C_0000502C
lbl_fn_80024F9C_00004FE8:
    cmpwi r3, 0x6
    bne lbl_fn_80024F9C_00005004
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x6
    b lbl_fn_80024F9C_0000502C
lbl_fn_80024F9C_00005004:
    li r3, -0x1
    b lbl_fn_80024F9C_0000502C
lbl_fn_80024F9C_0000500C:
    cmpwi r0, 0x8
    bne lbl_fn_80024F9C_00005028
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x8
    b lbl_fn_80024F9C_0000502C
lbl_fn_80024F9C_00005028:
    li r3, -0x1
lbl_fn_80024F9C_0000502C:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800250CC(void)
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
    beq lbl_fn_800250CC_000050EC
    lwz r3, 0x54(r4)
    lwz r4, 0x50(r4)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    subf r31, r0, r4
    add r0, r4, r0
    subf. r30, r31, r0
    ble lbl_fn_800250CC_000050A0
    bl fn_80680CF8
    divw r0, r3, r30
    mullw r0, r0, r30
    subf r0, r0, r3
    add r31, r31, r0
lbl_fn_800250CC_000050A0:
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
    b lbl_fn_800250CC_000050F0
lbl_fn_800250CC_000050EC:
    li r0, -0x1
lbl_fn_800250CC_000050F0:
    cmpwi r0, 0x5
    bne lbl_fn_800250CC_0000510C
    lis r3, lbl_807C6A40@ha
    li r0, 0x1
    stw r0, lbl_807C6A40@l(r3)
    li r3, 0x5
    b lbl_fn_800250CC_00005110
lbl_fn_800250CC_0000510C:
    li r3, -0x1
lbl_fn_800250CC_00005110:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
