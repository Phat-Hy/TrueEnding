#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_22(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_8000D114(void);
extern void fn_8000D9F8(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80011220(void);
extern void fn_80013338(void);
extern void fn_80013410(void);
extern void fn_80057A64(void);
extern void fn_800697D8(void);
extern void fn_800D2338(void);
extern void fn_800EC204(void);
extern void fn_800F7FF0(void);
extern void fn_801162A0(void);
extern void fn_8011F8F4(void);
extern void fn_8011F91C(void);
extern void fn_8011FC10(void);
extern void fn_8011FE3C(void);
extern void fn_80121F00(void);
extern void fn_8012A190(void);
extern void fn_8012A1B8(void);
extern void fn_8012D8B8(void);
extern void fn_8013C38C(void);
extern void fn_8013C404(void);
extern void fn_8013C42C(void);
extern void fn_8013C504(void);
extern void fn_8014C0B4(void);
extern void fn_8014C468(void);
extern void fn_80161570(void);
extern void fn_80164DCC(void);
extern void fn_8016E484(void);
extern void fn_8016EB48(void);
extern void fn_8016F634(void);
extern void fn_8017039C(void);
extern void fn_80170A20(void);
extern void fn_80170F20(void);
extern void fn_80171DB0(void);
extern void fn_8017C9A0(void);
extern void fn_80183948(void);
extern void fn_801C0738(void);
extern void fn_8020F130(void);
extern void fn_8020F71C(void);
extern void fn_802180A8(void);
extern void fn_80267B20(void);
extern void fn_803396EC(void);
extern void fn_8036B438(void);
extern void fn_80371674(void);
extern void fn_80373118(void);
extern void fn_80373148(void);
extern void fn_8037529C(void);
extern void fn_803761FC(void);
extern void fn_8037D4C0(void);
extern void fn_8037EF30(void);
extern void fn_80392D2C(void);
extern void fn_8039CCB4(void);
extern void fn_803A11D8(void);
extern void fn_803AD05C(void);
extern void fn_803CCA84(void);
extern void fn_803E58E4(void);
extern void fn_803E5940(void);
extern void fn_803EBAC8(void);
extern void fn_8047E964(void);
extern void fn_8047EFD8(void);
extern void fn_8047F364(void);
extern void fn_8047F420(void);
extern void fn_80572B70(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_8078AF8C[];
extern u8 lbl_8074ED24[];
extern u8 lbl_8074F8CC[];

/* Small data declarations */
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F448;
extern u32 lbl_8087F490;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9AC;
extern u32 lbl_8087FA20;
extern u32 lbl_80885B10;
extern u32 lbl_80885B14;
extern u32 lbl_80885B24;
extern u32 lbl_80885B30;
extern u32 lbl_80885B98;
extern u32 lbl_80885B9C;
extern u32 lbl_80885BA0;

/* Function declarations */
void fn_803A19B4(void);
void fn_803A1B20(void);
void fn_803A1DB0(void);
void fn_803A2154(void);
void fn_803A2210(void);
void fn_803A2378(void);
void fn_803A24A4(void);
void fn_803A2600(void);
void fn_803A26F4(void);
void fn_803A2DD8(void);
void fn_803A2E20(void);
void fn_803A330C(void);

asm void fn_803A19B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r6, lbl_8087F8A0
    cmpwi r6, 0x0
    beq lbl_fn_803A19B4_00000030
    lwz r3, 0x48(r6)
    b lbl_fn_803A19B4_00000034
lbl_fn_803A19B4_00000030:
    li r3, 0x0
lbl_fn_803A19B4_00000034:
    cmpwi r4, 0x0
    beq lbl_fn_803A19B4_00000050
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_00000050
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A19B4_00000050:
    li r4, 0x0
    bl fn_80164DCC
    lwz r3, lbl_8087F540
    mr r4, r30
    mr r5, r31
    bl fn_8047EFD8
    lwz r3, lbl_8087F540
    mr r4, r30
    bl fn_8047F420
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_00000140
    lwz r3, lbl_8087F430
    bl fn_80371674
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_000000DC
    li r4, 0xf
    li r5, 0x0
    bl fn_803EBAC8
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_000000D0
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803A19B4_000000D0
    lwz r3, lbl_8087F498
    li r0, 0x2
    stw r0, 0x10c(r3)
    b lbl_fn_803A19B4_000000DC
lbl_fn_803A19B4_000000D0:
    lwz r3, lbl_8087F498
    li r0, 0x1
    stw r0, 0x10c(r3)
lbl_fn_803A19B4_000000DC:
    cmpwi r30, 0xec5
    bne lbl_fn_803A19B4_000000F0
    lwz r3, lbl_8087EFA8
    li r0, 0x1
    stw r0, 0x144(r3)
lbl_fn_803A19B4_000000F0:
    cmpwi r30, 0x151e
    bne lbl_fn_803A19B4_00000108
    lwz r3, lbl_8087EFB4
    li r0, 0x1
    lwz r3, 0x10(r3)
    stw r0, 0x4(r3)
lbl_fn_803A19B4_00000108:
    cmpwi r30, 0x524
    bne lbl_fn_803A19B4_00000140
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_00000124
    lwz r31, 0x48(r3)
    b lbl_fn_803A19B4_00000138
lbl_fn_803A19B4_00000124:
    li r31, 0x0
    b lbl_fn_803A19B4_00000138
lbl_fn_803A19B4_0000012C:
    mr r3, r31
    bl fn_8016F634
    lwz r31, 0x14ac(r31)
lbl_fn_803A19B4_00000138:
    cmpwi r31, 0x0
    bne lbl_fn_803A19B4_0000012C
lbl_fn_803A19B4_00000140:
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_803A19B4_00000150
    bl fn_80183948
lbl_fn_803A19B4_00000150:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A1B20(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    li r0, 0x0
    stmw r26, 0x108(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r30, 0x0
    stw r0, 0xb4(r3)
    bl fn_8020F130
    lwz r4, 0x8(r28)
    bl fn_8020F71C
    lwz r4, lbl_8087F8A0
    mr r29, r3
    cmpwi r4, 0x0
    beq lbl_fn_803A1B20_000001B8
    lwz r31, 0x48(r4)
    b lbl_fn_803A1B20_000001BC
lbl_fn_803A1B20_000001B8:
    li r31, 0x0
lbl_fn_803A1B20_000001BC:
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_0000025C
    lwz r0, 0x44(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803A1B20_000001D8
    cmpwi r0, 0x3
    bne lbl_fn_803A1B20_0000025C
lbl_fn_803A1B20_000001D8:
    lwz r3, 0x10(r28)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_803A1B20_0000025C
    rlwinm r3, r3, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_803A1B20_0000025C
    lwz r3, lbl_8087F540
    lwz r4, 0x8(r28)
    bl fn_8047F420
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_0000025C
    li r0, -0x1
    stw r0, 0xb4(r26)
    li r0, 0x12
    lwz r3, lbl_8087F430
    stw r0, 0x563c(r3)
    lwz r3, lbl_8087F430
    bl fn_80373118
    lwz r0, 0x4c(r29)
    li r30, 0x1
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803A1B20_0000025C
    cmpwi r31, 0x0
    beq lbl_fn_803A1B20_0000025C
    mr r3, r31
    bl fn_8017C9A0
    stw r3, 0xc4(r26)
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x10
    stw r0, 0x54c(r31)
lbl_fn_803A1B20_0000025C:
    lwz r0, 0xb4(r26)
    cmpwi r0, -0x1
    beq lbl_fn_803A1B20_000003C8
    lwz r3, 0x10(r28)
    rlwinm r0, r3, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803A1B20_0000028C
    lwz r3, lbl_8087F540
    li r5, 0x1
    lwz r4, 0x8(r28)
    bl fn_8047E964
    b lbl_fn_803A1B20_0000039C
lbl_fn_803A1B20_0000028C:
    rlwinm r3, r3, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    beq lbl_fn_803A1B20_00000370
    cmpwi r29, 0x0
    beq lbl_fn_803A1B20_0000033C
    lwz r3, 0x8(r28)
    mr r6, r29
    lwz r4, 0x18(r28)
    lwz r5, 0xc(r28)
    bl fn_803A11D8
    lwz r0, 0x4c(r29)
    mr r30, r3
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803A1B20_000002EC
    cmpwi r31, 0x0
    beq lbl_fn_803A1B20_000002EC
    mr r3, r31
    bl fn_8017C9A0
    stw r3, 0xc4(r26)
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x10
    stw r0, 0x54c(r31)
lbl_fn_803A1B20_000002EC:
    li r0, 0x0
    stw r0, 0xc0(r26)
    cmpwi r30, 0x0
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    beq lbl_fn_803A1B20_0000039C
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_0000039C
    lwz r0, 0x98(r3)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_803A1B20_0000039C
    cmpwi r31, 0x0
    beq lbl_fn_803A1B20_0000039C
    lwz r3, 0x54c(r31)
    li r0, 0x1
    ori r3, r3, 0x10
    stw r3, 0x54c(r31)
    stw r0, 0xc0(r26)
    b lbl_fn_803A1B20_0000039C
lbl_fn_803A1B20_0000033C:
    lis r4, lbl_8074F8CC@ha
    lwz r5, 0x8(r28)
    addi r4, r4, lbl_8074F8CC@l
    addi r3, r1, 0x8
    addi r4, r4, 0x125
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_0000039C
    addi r4, r1, 0x8
    bl fn_800697D8
    b lbl_fn_803A1B20_0000039C
lbl_fn_803A1B20_00000370:
    lwz r4, 0x8(r28)
    cmpwi r4, 0x0
    bgt lbl_fn_803A1B20_00000390
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_00000390
    lwz r4, 0x190(r3)
lbl_fn_803A1B20_00000390:
    lwz r3, lbl_8087F540
    li r5, 0x0
    bl fn_8047EFD8
lbl_fn_803A1B20_0000039C:
    cmpwi r30, 0x0
    beq lbl_fn_803A1B20_000003C8
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A1B20_000003C8
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    beq lbl_fn_803A1B20_000003C8
    lwz r3, lbl_8087F430
    bl fn_80373118
lbl_fn_803A1B20_000003C8:
    lwz r0, 0x0(r28)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r30, 0x4(r27)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r28, r0
    stw r0, 0x0(r27)
    lmw r26, 0x108(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803A1DB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r28, r3
    mr r29, r4
    mr r30, r5
    bl fn_8020F130
    lwz r4, 0x8(r30)
    bl fn_8020F71C
    lwz r4, lbl_8087F8A0
    mr r27, r3
    cmpwi r4, 0x0
    beq lbl_fn_803A1DB0_00000440
    lwz r31, 0x48(r4)
    b lbl_fn_803A1DB0_00000444
lbl_fn_803A1DB0_00000440:
    li r31, 0x0
lbl_fn_803A1DB0_00000444:
    lwz r0, 0x0(r30)
    lis r4, lbl_8074ED24@ha
    li r5, 0x1
    stw r5, 0x4(r29)
    slwi r0, r0, 2
    addi r4, r4, lbl_8074ED24@l
    lwzx r0, r4, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    lwz r4, 0xb4(r28)
    cmpwi r4, -0x1
    bne lbl_fn_803A1DB0_00000510
    lwz r3, 0x8(r30)
    mr r6, r27
    lwz r4, 0x18(r30)
    lwz r5, 0xc(r30)
    bl fn_803A11D8
    lwz r0, 0x44(r27)
    cmpwi r0, 0x1
    bne lbl_fn_803A1DB0_000004B4
    lis r4, 0x100
    lwz r3, lbl_8087F430
    subi r5, r4, 0x1
    li r6, 0x0
    li r4, -0x1
    li r7, 0x0
    li r8, 0xf
    bl fn_8037529C
lbl_fn_803A1DB0_000004B4:
    li r0, 0x0
    stw r0, 0xc0(r28)
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A1DB0_000004F8
    lwz r0, 0x98(r3)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_803A1DB0_000004F8
    cmpwi r31, 0x0
    beq lbl_fn_803A1DB0_000004F8
    lwz r3, 0x54c(r31)
    li r0, 0x1
    ori r3, r3, 0x10
    stw r3, 0x54c(r31)
    stw r0, 0xc0(r28)
lbl_fn_803A1DB0_000004F8:
    lwz r3, lbl_8087F430
    bl fn_80373118
    lwz r3, 0xb4(r28)
    addi r0, r3, 0x1
    stw r0, 0xb4(r28)
    b lbl_fn_803A1DB0_00000788
lbl_fn_803A1DB0_00000510:
    cmpwi r3, 0x0
    addi r0, r4, 0x1
    stw r0, 0xb4(r28)
    beq lbl_fn_803A1DB0_00000580
    cmpwi r0, 0xf
    ble lbl_fn_803A1DB0_00000580
    lwz r0, 0x44(r3)
    cmpwi r0, 0x3
    beq lbl_fn_803A1DB0_00000580
    lwz r3, lbl_8087F540
    lwz r0, 0x1aa0(r3)
    cmpwi r0, 0x2
    cntlzw r0, r0
    srwi r3, r0, 5
    bne lbl_fn_803A1DB0_0000056C
    lwz r0, 0x8(r30)
    cmpwi r0, 0x232f
    beq lbl_fn_803A1DB0_00000568
    cmpwi r0, 0x12c3
    beq lbl_fn_803A1DB0_00000568
    cmpwi r0, 0x5e4
    bne lbl_fn_803A1DB0_0000056C
lbl_fn_803A1DB0_00000568:
    li r3, 0x1
lbl_fn_803A1DB0_0000056C:
    cmpwi r3, 0x0
    beq lbl_fn_803A1DB0_00000580
    lwz r3, lbl_8087F430
    li r0, 0x12
    stw r0, 0x563c(r3)
lbl_fn_803A1DB0_00000580:
    lwz r3, lbl_8087F540
    lwz r4, 0x8(r30)
    bl fn_8047F364
    cmpwi r3, 0x0
    beq lbl_fn_803A1DB0_00000704
    bl fn_8020F130
    lwz r4, 0x8(r30)
    bl fn_8020F71C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_803A1DB0_000006B8
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    beq lbl_fn_803A1DB0_000005C4
    cmpwi r0, 0x2
    beq lbl_fn_803A1DB0_00000600
    b lbl_fn_803A1DB0_00000660
lbl_fn_803A1DB0_000005C4:
    lwz r3, lbl_8087F430
    li r4, 0x1
    lfs f1, lbl_80885B14
    li r5, 0x1
    addi r3, r3, 0x6c
    bl fn_8037EF30
    lis r4, 0x100
    lwz r3, lbl_8087F430
    subi r5, r4, 0x1
    li r6, 0x0
    li r4, -0x1
    li r7, 0x0
    li r8, 0x1e
    bl fn_8037529C
    b lbl_fn_803A1DB0_00000678
lbl_fn_803A1DB0_00000600:
    lis r4, 0x100
    lwz r3, lbl_8087F430
    subi r5, r4, 0x1
    li r6, 0x5
    li r4, -0x1
    li r7, 0x0
    li r8, 0xa
    bl fn_8037529C
    lwz r4, lbl_8087F540
    lwz r3, lbl_8087F430
    lwz r0, 0x1a38(r4)
    lfs f1, lbl_80885B98
    addi r3, r3, 0x6c
    mulli r0, r0, 0x65c
    add r4, r4, r0
    addi r4, r4, 0xc8
    bl fn_80392D2C
    lwz r3, lbl_8087F430
    li r4, 0x1
    lfs f1, lbl_80885B14
    li r5, 0x1
    addi r3, r3, 0x6c
    bl fn_8037EF30
    b lbl_fn_803A1DB0_00000678
lbl_fn_803A1DB0_00000660:
    lwz r3, lbl_8087F430
    li r4, 0x1
    lfs f1, lbl_80885B14
    li r5, 0x1
    addi r3, r3, 0x6c
    bl fn_8037EF30
lbl_fn_803A1DB0_00000678:
    lwz r0, 0x4c(r27)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    bne lbl_fn_803A1DB0_000006B8
    cmpwi r31, 0x0
    beq lbl_fn_803A1DB0_000006B8
    lwz r0, 0xc4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_803A1DB0_000006AC
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x10
    stw r0, 0x54c(r31)
    b lbl_fn_803A1DB0_000006B8
lbl_fn_803A1DB0_000006AC:
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r31)
lbl_fn_803A1DB0_000006B8:
    lwz r3, 0xc0(r28)
    lwz r4, lbl_8087F0A8
    subi r0, r3, 0x1
    lwz r3, 0x8(r30)
    cntlzw r0, r0
    lwz r5, 0x180(r4)
    srwi r4, r0, 5
    bl fn_803A19B4
    lwz r3, lbl_8087F0A8
    lwz r0, 0x180(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A1DB0_000006F0
    lwz r0, 0x8(r30)
    stw r0, 0xe8(r28)
lbl_fn_803A1DB0_000006F0:
    li r0, 0x24
    stw r0, 0xe0(r28)
    li r0, 0x0
    stw r0, 0x4(r29)
    b lbl_fn_803A1DB0_00000788
lbl_fn_803A1DB0_00000704:
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803A1DB0_00000788
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    beq lbl_fn_803A1DB0_0000072C
    lwz r3, lbl_8087F430
    bl fn_80373118
    b lbl_fn_803A1DB0_00000788
lbl_fn_803A1DB0_0000072C:
    lwz r0, 0x8(r30)
    cmpwi r0, 0x324
    beq lbl_fn_803A1DB0_00000740
    cmpwi r0, 0x4e0
    bne lbl_fn_803A1DB0_00000788
lbl_fn_803A1DB0_00000740:
    lwz r3, lbl_8087F8A0
    li r28, 0x0
    lwz r27, 0x48(r3)
    b lbl_fn_803A1DB0_00000780
lbl_fn_803A1DB0_00000750:
    mr r3, r27
    bl fn_8016E484
    cmpwi r3, 0x0
    beq lbl_fn_803A1DB0_0000077C
    lwz r0, 0x7e0(r27)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_803A1DB0_0000077C
    addi r3, r27, 0x7d4
    bl fn_8012D8B8
    stw r28, 0x58c(r27)
lbl_fn_803A1DB0_0000077C:
    lwz r27, 0x14ac(r27)
lbl_fn_803A1DB0_00000780:
    cmpwi r27, 0x0
    bne lbl_fn_803A1DB0_00000750
lbl_fn_803A1DB0_00000788:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A2154(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_803A2154_00000820
    lwz r0, 0x8(r5)
    cmpwi r0, 0x0
    bgt lbl_fn_803A2154_000007F4
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A2154_000007E8
    lwz r0, 0xc4(r3)
    b lbl_fn_803A2154_000007EC
lbl_fn_803A2154_000007E8:
    lwz r0, 0x8c(r3)
lbl_fn_803A2154_000007EC:
    cmpwi r0, 0x67
    beq lbl_fn_803A2154_00000820
lbl_fn_803A2154_000007F4:
    lwz r3, lbl_8087F430
    bl fn_803761FC
    cmpwi r3, 0x0
    bne lbl_fn_803A2154_00000820
    lwz r3, lbl_8087F448
    li r6, 0x1
    lwz r4, 0x8(r31)
    li r7, 0x0
    lfs f1, 0xc(r31)
    lwz r5, 0x10(r31)
    bl fn_8037D4C0
lbl_fn_803A2154_00000820:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A2210(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    lwz r0, 0x8(r5)
    stw r31, 0x3c(r1)
    li r31, 0x0
    cmpwi r0, 0x0
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r5
    stw r28, 0x30(r1)
    mr r28, r4
    lwz r4, 0xc(r5)
    beq lbl_fn_803A2210_000008B0
    cmpwi r0, 0x1
    beq lbl_fn_803A2210_000008DC
    cmpwi r0, 0x2
    beq lbl_fn_803A2210_00000914
    cmpwi r0, 0x3
    beq lbl_fn_803A2210_00000924
    b lbl_fn_803A2210_00000930
lbl_fn_803A2210_000008B0:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A2210_000008C8
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A2210_000008D4
lbl_fn_803A2210_000008C8:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A2210_000008D4:
    mr r31, r3
    b lbl_fn_803A2210_00000930
lbl_fn_803A2210_000008DC:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A2210_00000930
    cmpwi r3, 0x0
    beq lbl_fn_803A2210_00000930
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A2210_00000930
    li r31, 0x0
    b lbl_fn_803A2210_00000930
lbl_fn_803A2210_00000914:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_803A2210_00000930
lbl_fn_803A2210_00000924:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r31, r3
lbl_fn_803A2210_00000930:
    cmpwi r31, 0x0
    li r30, 0x0
    beq lbl_fn_803A2210_00000984
    addi r3, r1, 0x8
    addi r4, r29, 0x14
    li r5, 0x20
    bl memcpy
    addi r3, r1, 0x8
    bl fn_802180A8
    lfs f1, lbl_80885B14
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    bl fn_80161570
    lwz r0, 0x34(r29)
    clrlwi r0, r0, 31
    cmpwi r0, 0x1
    bne lbl_fn_803A2210_00000984
    li r30, 0x1
lbl_fn_803A2210_00000984:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r30, 0x4(r28)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803A2378(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    li r5, 0x0
    beq lbl_fn_803A2378_00000A10
    cmpwi r0, 0x1
    beq lbl_fn_803A2378_00000A3C
    cmpwi r0, 0x2
    beq lbl_fn_803A2378_00000A74
    cmpwi r0, 0x3
    beq lbl_fn_803A2378_00000A84
    b lbl_fn_803A2378_00000A90
lbl_fn_803A2378_00000A10:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A2378_00000A28
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A2378_00000A34
lbl_fn_803A2378_00000A28:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A2378_00000A34:
    mr r5, r3
    b lbl_fn_803A2378_00000A90
lbl_fn_803A2378_00000A3C:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A2378_00000A90
    cmpwi r3, 0x0
    beq lbl_fn_803A2378_00000A90
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A2378_00000A90
    li r5, 0x0
    b lbl_fn_803A2378_00000A90
lbl_fn_803A2378_00000A74:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803A2378_00000A90
lbl_fn_803A2378_00000A84:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803A2378_00000A90:
    cmpwi r5, 0x0
    li r4, 0x0
    beq lbl_fn_803A2378_00000AB8
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x6
    bne lbl_fn_803A2378_00000AB8
    lwz r0, 0x560(r5)
    cmpwi r0, 0x27
    bne lbl_fn_803A2378_00000AB8
    li r4, 0x1
lbl_fn_803A2378_00000AB8:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803A24A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_803A24A4_00000BA0
    lwz r0, 0x5694(r6)
    cmpwi r0, 0x0
    beq lbl_fn_803A24A4_00000BA0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A24A4_00000B78
    bl fn_803E58E4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_803A24A4_00000B54
    lwz r31, 0x48(r3)
    b lbl_fn_803A24A4_00000B58
lbl_fn_803A24A4_00000B54:
    li r31, 0x0
lbl_fn_803A24A4_00000B58:
    cmpwi r31, 0x0
    beq lbl_fn_803A24A4_00000B78
    mr r3, r31
    bl fn_8017C9A0
    stw r3, 0xc0(r28)
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x10
    stw r0, 0x54c(r31)
lbl_fn_803A24A4_00000B78:
    lwz r4, 0x0(r30)
    lis r3, lbl_8074ED24@ha
    li r0, 0x1
    stw r0, 0x4(r29)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r30, r0
    stw r0, 0x0(r29)
    b lbl_fn_803A24A4_00000C2C
lbl_fn_803A24A4_00000BA0:
    lwz r6, 0x0(r5)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r4)
    slwi r0, r6, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r5, r0
    stw r0, 0x0(r4)
    lwz r3, lbl_8087F430
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803A24A4_00000C2C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bne lbl_fn_803A24A4_00000C2C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x36
    bne lbl_fn_803A24A4_00000C2C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x50(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803A24A4_00000C2C
    lis r4, lbl_8074F8CC@ha
    lwz r3, lbl_8087F9AC
    addi r4, r4, lbl_8074F8CC@l
    addi r4, r4, 0x13e
    bl fn_80572B70
    lwz r3, lbl_8087F430
    bl fn_800D2338
lbl_fn_803A24A4_00000C2C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A2600(void)
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
    lwz r6, lbl_8087F430
    cmpwi r6, 0x0
    beq lbl_fn_803A2600_00000D18
    lwz r0, 0x5694(r6)
    cmpwi r0, 0x0
    beq lbl_fn_803A2600_00000D18
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_803A2600_00000CA8
    bl fn_803E5940
    cmpwi r3, 0x0
    beq lbl_fn_803A2600_00000CA8
    li r4, 0x1
    b lbl_fn_803A2600_00000CF4
lbl_fn_803A2600_00000CA8:
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_803A2600_00000CC0
    lwz r3, 0x48(r3)
    b lbl_fn_803A2600_00000CC4
lbl_fn_803A2600_00000CC0:
    li r3, 0x0
lbl_fn_803A2600_00000CC4:
    cmpwi r3, 0x0
    beq lbl_fn_803A2600_00000CF4
    lwz r0, 0xc0(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A2600_00000CE8
    lwz r0, 0x54c(r3)
    ori r0, r0, 0x10
    stw r0, 0x54c(r3)
    b lbl_fn_803A2600_00000CF4
lbl_fn_803A2600_00000CE8:
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_803A2600_00000CF4:
    lwz r0, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r4, 0x4(r30)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    b lbl_fn_803A2600_00000D24
lbl_fn_803A2600_00000D18:
    li r0, 0x0
    stw r0, 0x0(r4)
    stw r0, 0x4(r4)
lbl_fn_803A2600_00000D24:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803A26F4(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    addi r11, r1, 0x120
    stfd f31, 0x120(r1)
    psq_st f31, 0x128(r1), 0, 0
    bl _savegpr_22
    mr r25, r4
    mr r26, r5
    lwz r4, 0x8(r5)
    mr r24, r3
    lwz r5, 0xc(r5)
    bl fn_803AD05C
    cmpwi r3, 0x0
    mr r31, r3
    li r30, 0x0
    beq lbl_fn_803A26F4_000013F0
    lwz r4, 0x24(r26)
    li r0, 0x0
    stw r0, 0xbc(r24)
    li r30, 0x1
    extrwi. r28, r4, 1, 30
    clrlwi r29, r4, 31
    extrwi r27, r4, 1, 29
    beq lbl_fn_803A26F4_00000DD8
    bl fn_8000D9F8
    subis r0, r3, 0x9
    cmplwi r0, 0x2ae2
    bne lbl_fn_803A26F4_00000DD8
    mr r3, r31
    bl fn_80267B20
    cmpwi r3, 0x6
    bne lbl_fn_803A26F4_00000DD8
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8016EB48
lbl_fn_803A26F4_00000DD8:
    lwz r0, 0x10(r26)
    cmplwi r0, 0x7
    bgt lbl_fn_803A26F4_000013B0
    lis r3, jumptable_8078AF8C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078AF8C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00000E3C
    mr r3, r31
    bl fn_8012A1B8
    lfs f1, 0x4(r3)
    mr r3, r31
    lfs f0, 0x14(r26)
    fadds f31, f0, f1
    bl fn_8013C38C
    fmr f1, f31
    mr r4, r3
    lfs f2, lbl_80885B14
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00000E3C:
    lfs f1, lbl_80885B10
    addi r3, r1, 0x68
    lfs f2, 0x14(r26)
    fmr f3, f1
    bl fn_8000D114
    mr r23, r3
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0x74
    bl fn_80013410
    mr r3, r31
    addi r4, r1, 0x74
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00000EA8
    mr r3, r31
    bl fn_8013C38C
    lfs f1, 0x14(r26)
    mr r4, r3
    lfs f2, lbl_80885B14
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00000EA8:
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xec
    bl fn_8001047C
    lfs f0, 0x14(r26)
    mr r3, r31
    stfs f0, 0xf0(r1)
    addi r4, r1, 0xec
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    lwz r4, 0x18(r26)
    mr r3, r24
    lwz r5, 0x1c(r26)
    bl fn_803AD05C
    mr r22, r3
    bl fn_8013C42C
    fmr f31, f1
    mr r3, r31
    bl fn_8013C42C
    fadds f1, f1, f31
    lfs f0, lbl_80885B9C
    lfs f31, 0x20(r26)
    fadds f0, f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_803A26F4_00000F14
    b lbl_fn_803A26F4_00000F34
lbl_fn_803A26F4_00000F14:
    mr r3, r22
    bl fn_8013C42C
    fmr f31, f1
    mr r3, r31
    bl fn_8013C42C
    fadds f1, f1, f31
    lfs f0, lbl_80885B9C
    fadds f31, f0, f1
lbl_fn_803A26F4_00000F34:
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00000F54
    fmr f1, f31
    mr r3, r31
    mr r4, r22
    li r5, 0x0
    bl fn_80170A20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00000F54:
    mr r3, r22
    bl fn_8013C38C
    mr r23, r3
    mr r3, r31
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0xe0
    bl fn_80013338
    addi r3, r1, 0xe0
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80885B24
    fcmpo cr0, f1, f0
    blt lbl_fn_803A26F4_00000F98
    addi r3, r1, 0xe0
    bl fn_800F7FF0
lbl_fn_803A26F4_00000F98:
    fmr f1, f31
    addi r3, r1, 0xe0
    bl fn_8012A190
    mr r3, r22
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x5c
    addi r5, r1, 0xe0
    bl fn_80013410
    mr r3, r31
    addi r4, r1, 0x5c
    bl fn_8036B438
    b lbl_fn_803A26F4_000013B0
    lwz r4, 0x18(r26)
    mr r3, r24
    lwz r5, 0x1c(r26)
    bl fn_803AD05C
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_803A26F4_000013B0
    mr r3, r31
    bl fn_8013C38C
    mr r23, r3
    mr r3, r22
    bl fn_8013C38C
    mr r4, r3
    mr r5, r23
    addi r3, r1, 0xd4
    bl fn_80013338
    addi r3, r1, 0xd4
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80885B24
    fcmpo cr0, f1, f0
    blt lbl_fn_803A26F4_0000102C
    addi r3, r1, 0xd4
    bl fn_800F7FF0
lbl_fn_803A26F4_0000102C:
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00001064
    addi r3, r1, 0x50
    addi r4, r1, 0xd4
    bl fn_80011034
    mr r3, r31
    bl fn_8013C38C
    lfs f1, 0x54(r1)
    mr r4, r3
    lfs f2, lbl_80885B14
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00001064:
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0xc8
    bl fn_8001047C
    addi r3, r1, 0x44
    addi r4, r1, 0xd4
    bl fn_80011034
    lfs f0, 0x48(r1)
    mr r3, r31
    stfs f0, 0xcc(r1)
    addi r4, r1, 0xc8
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_000010B8
    bl fn_80121F00
    bl fn_8013C504
    mr r23, r3
    b lbl_fn_803A26F4_000010BC
lbl_fn_803A26F4_000010B8:
    li r23, 0x0
lbl_fn_803A26F4_000010BC:
    cmpwi r23, 0x0
    beq lbl_fn_803A26F4_000013B0
    addi r3, r1, 0xbc
    bl fn_80057A64
    addi r3, r1, 0xb0
    bl fn_80057A64
    mr r3, r23
    mr r4, r31
    addi r5, r1, 0xbc
    addi r6, r1, 0xb0
    bl fn_803CCA84
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_000013B0
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00001114
    lfs f1, 0xb4(r1)
    mr r3, r31
    lfs f2, lbl_80885B14
    addi r4, r1, 0xbc
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00001114:
    mr r3, r31
    addi r4, r1, 0xbc
    bl fn_8036B438
    mr r3, r31
    addi r4, r1, 0xb0
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    mr r3, r31
    bl fn_8013C42C
    lfs f2, lbl_80885B9C
    lfs f0, 0x20(r26)
    fadds f1, f2, f1
    fcmpo cr0, f0, f1
    ble lbl_fn_803A26F4_00001150
    b lbl_fn_803A26F4_00001158
lbl_fn_803A26F4_00001150:
    mr r3, r31
    bl fn_8013C42C
lbl_fn_803A26F4_00001158:
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00001174
    lwz r4, 0x28(r26)
    mr r3, r31
    li r5, 0x0
    bl fn_8017039C
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00001174:
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_0000118C
    bl fn_80121F00
    bl fn_8013C504
    b lbl_fn_803A26F4_00001190
lbl_fn_803A26F4_0000118C:
    li r3, 0x0
lbl_fn_803A26F4_00001190:
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_000011A8
    lwz r4, 0x28(r26)
    bl fn_800EC204
    mr r23, r3
    b lbl_fn_803A26F4_000011AC
lbl_fn_803A26F4_000011A8:
    li r23, 0x0
lbl_fn_803A26F4_000011AC:
    cmpwi r23, 0x0
    beq lbl_fn_803A26F4_000013B0
    mr r3, r31
    addi r4, r23, 0x4
    bl fn_8036B438
    lfs f1, lbl_80885B10
    addi r3, r1, 0x38
    lfs f2, 0x14(r23)
    fmr f3, f1
    bl fn_8000D114
    mr r4, r3
    mr r3, r31
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_000011FC
    bl fn_80121F00
    bl fn_8013C504
    b lbl_fn_803A26F4_00001200
lbl_fn_803A26F4_000011FC:
    li r3, 0x0
lbl_fn_803A26F4_00001200:
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_00001218
    lwz r4, 0x28(r26)
    bl fn_800EC204
    mr r23, r3
    b lbl_fn_803A26F4_0000121C
lbl_fn_803A26F4_00001218:
    li r23, 0x0
lbl_fn_803A26F4_0000121C:
    cmpwi r23, 0x0
    beq lbl_fn_803A26F4_000013B0
    mr r3, r31
    bl fn_8013C38C
    mr r5, r3
    addi r3, r1, 0xa4
    addi r4, r23, 0x4
    bl fn_80013338
    addi r3, r1, 0xa4
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80885B24
    fcmpo cr0, f1, f0
    blt lbl_fn_803A26F4_0000125C
    addi r3, r1, 0xa4
    bl fn_800F7FF0
lbl_fn_803A26F4_0000125C:
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_00001294
    addi r3, r1, 0x2c
    addi r4, r1, 0xa4
    bl fn_80011034
    mr r3, r31
    bl fn_8013C38C
    lfs f1, 0x30(r1)
    mr r4, r3
    lfs f2, lbl_80885B14
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_00001294:
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0x98
    bl fn_8001047C
    addi r3, r1, 0x20
    addi r4, r1, 0xa4
    bl fn_80011034
    lfs f0, 0x24(r1)
    mr r3, r31
    stfs f0, 0x9c(r1)
    addi r4, r1, 0x98
    bl fn_801C0738
    b lbl_fn_803A26F4_000013B0
    bl fn_80121F00
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_000012E4
    bl fn_80121F00
    bl fn_8013C504
    b lbl_fn_803A26F4_000012E8
lbl_fn_803A26F4_000012E4:
    li r3, 0x0
lbl_fn_803A26F4_000012E8:
    cmpwi r3, 0x0
    beq lbl_fn_803A26F4_00001300
    lwz r4, 0x28(r26)
    bl fn_803A2DD8
    mr r23, r3
    b lbl_fn_803A26F4_00001304
lbl_fn_803A26F4_00001300:
    li r23, 0x0
lbl_fn_803A26F4_00001304:
    cmpwi r23, 0x0
    beq lbl_fn_803A26F4_000013B0
    mr r3, r31
    bl fn_8013C38C
    mr r5, r3
    addi r3, r1, 0x8c
    addi r4, r23, 0x4
    bl fn_80013338
    addi r3, r1, 0x8c
    bl fn_801162A0
    bl fn_80011220
    lfs f0, lbl_80885B24
    fcmpo cr0, f1, f0
    blt lbl_fn_803A26F4_00001344
    addi r3, r1, 0x8c
    bl fn_800F7FF0
lbl_fn_803A26F4_00001344:
    cmpwi r28, 0x0
    bne lbl_fn_803A26F4_0000137C
    addi r3, r1, 0x14
    addi r4, r1, 0x8c
    bl fn_80011034
    mr r3, r31
    bl fn_8013C38C
    lfs f1, 0x18(r1)
    mr r4, r3
    lfs f2, lbl_80885B14
    mr r3, r31
    li r5, 0x0
    bl fn_80170F20
    b lbl_fn_803A26F4_000013B0
lbl_fn_803A26F4_0000137C:
    mr r3, r31
    bl fn_8012A1B8
    mr r4, r3
    addi r3, r1, 0x80
    bl fn_8001047C
    addi r3, r1, 0x8
    addi r4, r1, 0x8c
    bl fn_80011034
    lfs f0, 0xc(r1)
    mr r3, r31
    stfs f0, 0x84(r1)
    addi r4, r1, 0x80
    bl fn_801C0738
lbl_fn_803A26F4_000013B0:
    cmpwi r29, 0x0
    bne lbl_fn_803A26F4_000013C0
    cmpwi r28, 0x0
    beq lbl_fn_803A26F4_000013C4
lbl_fn_803A26F4_000013C0:
    li r30, 0x0
lbl_fn_803A26F4_000013C4:
    cmpwi r30, 0x0
    beq lbl_fn_803A26F4_000013F0
    cmpwi r27, 0x0
    beq lbl_fn_803A26F4_000013F0
    mr r3, r31
    li r4, 0x200
    bl fn_8013C404
    stw r3, 0xb8(r24)
    mr r3, r31
    li r4, 0x200
    bl fn_803396EC
lbl_fn_803A26F4_000013F0:
    mr r3, r24
    mr r4, r26
    bl fn_8039CCB4
    stw r3, 0x0(r25)
    stw r30, 0x4(r25)
    psq_l f31, 0x128(r1), 0, 0
    lfd f31, 0x120(r1)
    addi r11, r1, 0x120
    bl _restgpr_22
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_803A2DD8(void)
{
    nofralloc
    lwz r0, 0xfc(r3)
    li r6, 0x0
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A2DD8_00001464
lbl_fn_803A2DD8_0000143C:
    lwz r5, 0x100(r3)
    lwzx r0, r5, r7
    cmpw r4, r0
    bne lbl_fn_803A2DD8_00001458
    slwi r0, r6, 6
    add r3, r5, r0
    blr
lbl_fn_803A2DD8_00001458:
    addi r7, r7, 0x40
    addi r6, r6, 0x1
    bdnz lbl_fn_803A2DD8_0000143C
lbl_fn_803A2DD8_00001464:
    li r3, 0x0
    blr
}

asm void fn_803A2E20(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x70
    stfd f31, 0x70(r1)
    psq_st f31, 0x78(r1), 0, 0
    bl _savegpr_26
    lwz r6, 0x8(r5)
    mr r27, r3
    lwz r0, 0xc(r5)
    mr r28, r4
    cmpwi r6, 0x0
    mr r29, r5
    li r31, 0x0
    beq lbl_fn_803A2E20_000014C4
    cmpwi r6, 0x1
    beq lbl_fn_803A2E20_000014F0
    cmpwi r6, 0x2
    beq lbl_fn_803A2E20_0000152C
    cmpwi r6, 0x3
    beq lbl_fn_803A2E20_00001540
    b lbl_fn_803A2E20_00001550
lbl_fn_803A2E20_000014C4:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_000014DC
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A2E20_000014E8
lbl_fn_803A2E20_000014DC:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A2E20_000014E8:
    mr r31, r3
    b lbl_fn_803A2E20_00001550
lbl_fn_803A2E20_000014F0:
    lwz r3, lbl_8087F890
    mr r4, r0
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_00001550
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_00001550
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A2E20_00001550
    li r31, 0x0
    b lbl_fn_803A2E20_00001550
lbl_fn_803A2E20_0000152C:
    lwz r3, lbl_8087F408
    mr r4, r0
    bl fn_8011FC10
    mr r31, r3
    b lbl_fn_803A2E20_00001550
lbl_fn_803A2E20_00001540:
    lwz r3, lbl_8087F8A0
    mr r4, r0
    bl fn_8011F91C
    mr r31, r3
lbl_fn_803A2E20_00001550:
    cmpwi r31, 0x0
    li r30, 0x0
    beq lbl_fn_803A2E20_00001918
    lwz r0, 0x10(r29)
    li r30, 0x1
    cmplwi r0, 0x7
    bgt lbl_fn_803A2E20_00001918
    lfs f3, 0x570(r31)
    lfs f0, lbl_80885BA0
    fcmpo cr0, f3, f0
    ble lbl_fn_803A2E20_000018E8
    lfs f3, 0x13cc(r31)
    addi r3, r1, 0x20
    lfs f0, 0x13c0(r31)
    lfs f5, 0x13c8(r31)
    fsubs f6, f3, f0
    lfs f4, 0x13bc(r31)
    lfs f3, 0x13c4(r31)
    lfs f0, 0x13b8(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f6, 0x28(r1)
    bl fn_805F9920
    lfs f0, lbl_80885B30
    fcmpo cr0, f1, f0
    bge lbl_fn_803A2E20_000018E8
    lwz r3, 0xbc(r27)
    addi r0, r3, 0x1
    stw r0, 0xbc(r27)
    cmpwi r0, 0x2d
    ble lbl_fn_803A2E20_00001600
    lwz r0, 0x54c(r31)
    rlwinm r3, r0, 0, 22, 22
    cmplwi r3, 0x200
    beq lbl_fn_803A2E20_00001600
    subi r0, r3, 0x200
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0xb8(r27)
    lwz r0, 0x54c(r31)
    ori r0, r0, 0x200
    stw r0, 0x54c(r31)
lbl_fn_803A2E20_00001600:
    lwz r0, 0xbc(r27)
    cmpwi r0, 0x5a
    ble lbl_fn_803A2E20_000018F0
    lwz r0, 0x10(r29)
    cmpwi r0, 0x2
    beq lbl_fn_803A2E20_0000162C
    cmpwi r0, 0x4
    beq lbl_fn_803A2E20_000017C0
    cmpwi r0, 0x5
    beq lbl_fn_803A2E20_0000182C
    b lbl_fn_803A2E20_000018F0
lbl_fn_803A2E20_0000162C:
    lwz r0, 0x18(r29)
    li r26, 0x0
    lwz r4, 0x1c(r29)
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_0000165C
    cmpwi r0, 0x1
    beq lbl_fn_803A2E20_00001688
    cmpwi r0, 0x2
    beq lbl_fn_803A2E20_000016C0
    cmpwi r0, 0x3
    beq lbl_fn_803A2E20_000016D0
    b lbl_fn_803A2E20_000016DC
lbl_fn_803A2E20_0000165C:
    lwz r0, 0xdc(r27)
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_00001674
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A2E20_00001680
lbl_fn_803A2E20_00001674:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A2E20_00001680:
    mr r26, r3
    b lbl_fn_803A2E20_000016DC
lbl_fn_803A2E20_00001688:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r26, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_000016DC
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_000016DC
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A2E20_000016DC
    li r26, 0x0
    b lbl_fn_803A2E20_000016DC
lbl_fn_803A2E20_000016C0:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r26, r3
    b lbl_fn_803A2E20_000016DC
lbl_fn_803A2E20_000016D0:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r26, r3
lbl_fn_803A2E20_000016DC:
    lfs f3, 0x5b0(r26)
    lfs f4, 0x5b0(r31)
    lfs f0, lbl_80885B9C
    fadds f3, f4, f3
    lfs f31, 0x20(r29)
    fadds f0, f0, f3
    fcmpo cr0, f31, f0
    ble lbl_fn_803A2E20_00001700
    b lbl_fn_803A2E20_00001704
lbl_fn_803A2E20_00001700:
    fmr f31, f0
lbl_fn_803A2E20_00001704:
    lfs f3, 0x530(r31)
    addi r3, r1, 0x44
    lfs f0, 0x530(r26)
    lfs f5, 0x52c(r31)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r26)
    lfs f3, 0x528(r31)
    lfs f0, 0x528(r26)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x48(r1)
    stfs f0, 0x44(r1)
    stfs f6, 0x4c(r1)
    bl fn_805F9920
    fabs f3, f1
    lfs f0, lbl_80885B24
    frsp f3, f3
    fcmpo cr0, f3, f0
    blt lbl_fn_803A2E20_0000175C
    addi r3, r1, 0x44
    mr r4, r3
    bl fn_805F98D0
lbl_fn_803A2E20_0000175C:
    lfs f4, 0x44(r1)
    addi r4, r1, 0x14
    lfs f3, 0x48(r1)
    mr r3, r31
    fmuls f6, f4, f31
    lfs f0, 0x4c(r1)
    fmuls f5, f3, f31
    fmuls f4, f0, f31
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    lfs f3, 0x52c(r26)
    lfs f0, 0x528(r26)
    fadds f5, f3, f5
    lfs f3, 0x530(r26)
    fadds f0, f0, f6
    fadds f2, f3, f4
    stfs f5, 0x18(r1)
    stfs f0, 0x14(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x1c(r1)
    stfs f2, 0x530(r31)
    bl fn_80171DB0
    b lbl_fn_803A2E20_000018F0
lbl_fn_803A2E20_000017C0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_000017D4
    lwz r3, 0x10d8(r3)
    b lbl_fn_803A2E20_000017D8
lbl_fn_803A2E20_000017D4:
    li r3, 0x0
lbl_fn_803A2E20_000017D8:
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_00001820
    mr r4, r31
    addi r5, r1, 0x38
    addi r6, r1, 0x2c
    bl fn_803CCA84
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_00001820
    addi r3, r1, 0x38
    lfs f2, 0x40(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x2c
    psq_st f1, 0x528(r31), 0, 0
    stfs f2, 0x530(r31)
    lfs f2, 0x34(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
lbl_fn_803A2E20_00001820:
    mr r3, r31
    bl fn_80171DB0
    b lbl_fn_803A2E20_000018F0
lbl_fn_803A2E20_0000182C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_00001840
    lwz r6, 0x10d8(r3)
    b lbl_fn_803A2E20_00001844
lbl_fn_803A2E20_00001840:
    li r6, 0x0
lbl_fn_803A2E20_00001844:
    cmpwi r6, 0x0
    beq lbl_fn_803A2E20_00001898
    lwz r0, 0x78(r6)
    li r5, 0x0
    lwz r4, 0x28(r29)
    li r7, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_803A2E20_00001890
lbl_fn_803A2E20_00001868:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r7
    cmpw r4, r0
    bne lbl_fn_803A2E20_00001884
    mulli r0, r5, 0x28
    add r3, r3, r0
    b lbl_fn_803A2E20_0000189C
lbl_fn_803A2E20_00001884:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_803A2E20_00001868
lbl_fn_803A2E20_00001890:
    li r3, 0x0
    b lbl_fn_803A2E20_0000189C
lbl_fn_803A2E20_00001898:
    li r3, 0x0
lbl_fn_803A2E20_0000189C:
    cmpwi r3, 0x0
    beq lbl_fn_803A2E20_000018DC
    lfs f2, 0xc(r3)
    addi r4, r1, 0x8
    psq_l f1, 0x4(r3), 0, 0
    psq_st f1, 0x528(r31), 0, 0
    lfs f0, lbl_80885B10
    stfs f2, 0x530(r31)
    fmr f2, f0
    lfs f3, 0x14(r3)
    stfs f0, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f0, 0x10(r1)
    stfs f2, 0x53c(r31)
lbl_fn_803A2E20_000018DC:
    mr r3, r31
    bl fn_80171DB0
    b lbl_fn_803A2E20_000018F0
lbl_fn_803A2E20_000018E8:
    li r0, 0x0
    stw r0, 0xbc(r27)
lbl_fn_803A2E20_000018F0:
    lwz r0, 0x105c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803A2E20_00001918
    lwz r0, 0xb8(r27)
    li r30, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_803A2E20_00001918
    lwz r0, 0x54c(r31)
    rlwinm r0, r0, 0, 23, 21
    stw r0, 0x54c(r31)
lbl_fn_803A2E20_00001918:
    lwz r0, 0x0(r29)
    lis r3, lbl_8074ED24@ha
    addi r3, r3, lbl_8074ED24@l
    stw r30, 0x4(r28)
    slwi r0, r0, 2
    lwzx r0, r3, r0
    add r0, r29, r0
    stw r0, 0x0(r28)
    psq_l f31, 0x78(r1), 0, 0
    lfd f31, 0x70(r1)
    addi r11, r1, 0x70
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_803A330C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x8(r5)
    stw r31, 0xc(r1)
    mr r31, r5
    cmpwi r0, 0x0
    stw r30, 0x8(r1)
    mr r30, r4
    lwz r4, 0xc(r5)
    li r5, 0x0
    beq lbl_fn_803A330C_000019A4
    cmpwi r0, 0x1
    beq lbl_fn_803A330C_000019D0
    cmpwi r0, 0x2
    beq lbl_fn_803A330C_00001A08
    cmpwi r0, 0x3
    beq lbl_fn_803A330C_00001A18
    b lbl_fn_803A330C_00001A24
lbl_fn_803A330C_000019A4:
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803A330C_000019BC
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    b lbl_fn_803A330C_000019C8
lbl_fn_803A330C_000019BC:
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8011F8F4
lbl_fn_803A330C_000019C8:
    mr r5, r3
    b lbl_fn_803A330C_00001A24
lbl_fn_803A330C_000019D0:
    lwz r3, lbl_8087F890
    bl fn_8011FE3C
    lwz r0, lbl_8087FA20
    mr r5, r3
    cmpwi r0, 0x0
    beq lbl_fn_803A330C_00001A24
    cmpwi r3, 0x0
    beq lbl_fn_803A330C_00001A24
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_803A330C_00001A24
    li r5, 0x0
    b lbl_fn_803A330C_00001A24
lbl_fn_803A330C_00001A08:
    lwz r3, lbl_8087F408
    bl fn_8011FC10
    mr r5, r3
    b lbl_fn_803A330C_00001A24
lbl_fn_803A330C_00001A18:
    lwz r3, lbl_8087F8A0
    bl fn_8011F91C
    mr r5, r3
lbl_fn_803A330C_00001A24:
    cmpwi r5, 0x0
    beq lbl_fn_803A330C_00001A54
    lwz r4, 0x10(r31)
    cmpwi r4, 0x0
    bne lbl_fn_803A330C_00001A44
    mr r3, r5
    bl fn_8014C468
    b lbl_fn_803A330C_00001A54
lbl_fn_803A330C_00001A44:
    mr r3, r5
    addi r5, r4, 0xd5
    li r4, 0x0
    bl fn_8014C0B4
lbl_fn_803A330C_00001A54:
    lwz r4, 0x0(r31)
    lis r3, lbl_8074ED24@ha
    li r0, 0x0
    stw r0, 0x4(r30)
    slwi r0, r4, 2
    addi r3, r3, lbl_8074ED24@l
    lwzx r0, r3, r0
    add r0, r31, r0
    stw r0, 0x0(r30)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
