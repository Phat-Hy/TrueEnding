#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_8000D0F8(void);
extern void fn_8000D124(void);
extern void fn_8000D3A4(void);
extern void fn_8000D9E8(void);
extern void fn_8000DCF4(void);
extern void fn_8001047C(void);
extern void fn_80011034(void);
extern void fn_80013338(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8009373C(void);
extern void fn_80097C08(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800E41FC(void);
extern void fn_800F72CC(void);
extern void fn_800F7FA0(void);
extern void fn_800F7FA8(void);
extern void fn_800F84D0(void);
extern void fn_800F8548(void);
extern void fn_801162A0(void);
extern void fn_80121F00(void);
extern void fn_80122550(void);
extern void fn_80126214(void);
extern void fn_8012F034(void);
extern void fn_8013322C(void);
extern void fn_80139F4C(void);
extern void fn_8013A258(void);
extern void fn_8013C38C(void);
extern void fn_8013C3B4(void);
extern void fn_8013CB68(void);
extern void fn_8014052C(void);
extern void fn_80145334(void);
extern void fn_8014C0B4(void);
extern void fn_8014C540(void);
extern void fn_80151448(void);
extern void fn_8015D8C0(void);
extern void fn_8015E4B0(void);
extern void fn_8016D0A0(void);
extern void fn_8016E970(void);
extern void fn_80198514(void);
extern void fn_801D80B4(void);
extern void fn_80206BE4(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A8B4(void);
extern void fn_802676BC(void);
extern void fn_80267F88(void);
extern void fn_802682C4(void);
extern void fn_802684C0(void);
extern void fn_8026860C(void);
extern void fn_80268CB4(void);
extern void fn_80269168(void);
extern void fn_802692B4(void);
extern void fn_802696F8(void);
extern void fn_80269CBC(void);
extern void fn_8026A010(void);
extern void fn_8026A34C(void);
extern void fn_8026A4FC(void);
extern void fn_8026A5BC(void);
extern void fn_8026A628(void);
extern void fn_8026A774(void);
extern void fn_8026A7AC(void);
extern void fn_8026A828(void);
extern void fn_8026A8E4(void);
extern void fn_8026A9A0(void);
extern void fn_8026AC8C(void);
extern void fn_8026AF24(void);
extern void fn_8026AF78(void);
extern void fn_8026B118(void);
extern void fn_8026B748(void);
extern void fn_8026C4E8(void);
extern void fn_8026CB50(void);
extern void fn_8026D0F8(void);
extern void fn_8026DB8C(void);
extern void fn_80370320(void);
extern void fn_80370A78(void);
extern void fn_80370AE4(void);
extern void fn_803E6850(void);
extern void fn_804439FC(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_8054A340(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9940(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_80784D28[];
extern u8 lbl_80744554[];
extern u8 lbl_807445C4[];
extern u8 lbl_807445D8[];
extern u8 lbl_80744608[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087F048;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_80883670;
extern u32 lbl_80883674;
extern u32 lbl_80883680;
extern u32 lbl_80883684;
extern u32 lbl_80883688;
extern u32 lbl_8088368C;
extern u32 lbl_80883690;
extern u32 lbl_80883694;
extern u32 lbl_80883698;
extern u32 lbl_8088369C;
extern u32 lbl_808836A0;
extern u32 lbl_808836A4;
extern u32 lbl_808836A8;

/* Function declarations */
void fn_802657FC(void);
void fn_80265804(void);
void fn_8026580C(void);
void fn_80265B00(void);
void fn_8026607C(void);
void fn_802660EC(void);
void fn_802660FC(void);
void fn_8026610C(void);
void fn_80266154(void);
void fn_8026615C(void);
void fn_80266164(void);
void fn_8026616C(void);
void fn_80266174(void);
void fn_8026618C(void);
void fn_80266254(void);
void fn_80266A24(void);
void fn_80266FA4(void);
void fn_80266FAC(void);
void fn_80266FB4(void);
void fn_80266FC4(void);
void fn_80267134(void);

asm void fn_802657FC(void)
{
    nofralloc
    stw r4, 0x58c(r3)
    blr
}

asm void fn_80265804(void)
{
    nofralloc
    stfs f1, 0x2fc(r3)
    blr
}

asm void fn_8026580C(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    lwz r4, lbl_8087F430
    cmpwi r4, 0x0
    beq lbl_fn_8026580C_0000009C
    lwz r6, 0x10d8(r4)
    li r5, 0x0
    li r7, 0x0
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8026580C_0000007C
lbl_fn_8026580C_00000054:
    lwz r4, 0x7c(r6)
    lwzx r0, r4, r7
    cmpwi r0, 0x262
    bne lbl_fn_8026580C_00000070
    mulli r0, r5, 0x28
    add r4, r4, r0
    b lbl_fn_8026580C_00000080
lbl_fn_8026580C_00000070:
    addi r7, r7, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8026580C_00000054
lbl_fn_8026580C_0000007C:
    li r4, 0x0
lbl_fn_8026580C_00000080:
    cmpwi r4, 0x0
    beq lbl_fn_8026580C_0000009C
    psq_l f1, 0x4(r4), 0, 0
    addi r5, r3, 0x14f4
    lfs f2, 0xc(r4)
    stfs f2, 0x14fc(r3)
    psq_st f1, 0x0(r5), 0, 0
lbl_fn_8026580C_0000009C:
    addi r3, r3, 0x14b0
    bl fn_8047059C
    mr r29, r3
    addi r3, r31, 0x14b0
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x8(r1)
    mr r30, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r30
    mr r5, r29
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    lis r30, lbl_80744608@ha
    addi r30, r30, lbl_80744608@l
lbl_fn_8026580C_00000130:
    addi r3, r1, 0x8
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r29, r3
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_8026580C_000002D8
    cmpwi r0, 0x0
    beq lbl_fn_8026580C_000002D8
    addi r4, r30, 0x1a5
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_000001E8
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8026580C_000002D8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    lwz r4, lbl_8087F430
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8026580C_000001C4
lbl_fn_8026580C_0000019C:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_8026580C_000001B8
    mulli r0, r5, 0x28
    add r3, r7, r0
    b lbl_fn_8026580C_000001C8
lbl_fn_8026580C_000001B8:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_8026580C_0000019C
lbl_fn_8026580C_000001C4:
    li r3, 0x0
lbl_fn_8026580C_000001C8:
    cmpwi r3, 0x0
    beq lbl_fn_8026580C_000002D8
    psq_l f1, 0x4(r3), 0, 0
    addi r4, r31, 0x14f4
    lfs f2, 0xc(r3)
    stfs f2, 0x14fc(r31)
    psq_st f1, 0x0(r4), 0, 0
    b lbl_fn_8026580C_000002D8
lbl_fn_8026580C_000001E8:
    mr r3, r29
    addi r4, r30, 0x1b1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_00000210
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14c0(r31)
    b lbl_fn_8026580C_000002D8
lbl_fn_8026580C_00000210:
    mr r3, r29
    addi r4, r30, 0x1ba
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_00000238
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x1500(r31)
    b lbl_fn_8026580C_000002D8
lbl_fn_8026580C_00000238:
    mr r3, r29
    addi r4, r30, 0x1c6
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_000002B0
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14d4(r31)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14d8(r31)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14dc(r31)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e0(r31)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e4(r31)
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x14e8(r31)
    b lbl_fn_8026580C_000002D8
lbl_fn_8026580C_000002B0:
    mr r3, r29
    addi r4, r30, 0x1ce
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_000002D8
    addi r3, r1, 0x8
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x165c(r31)
    stw r3, 0x1658(r31)
lbl_fn_8026580C_000002D8:
    addi r3, r1, 0x8
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8026580C_00000130
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80265B00(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r3
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    bl fn_80266FC4
    lwz r0, 0x14ec(r31)
    lwz r3, 0x14bc(r31)
    cmpwi r0, 0x0
    addi r3, r3, 0x1
    stw r3, 0x14bc(r31)
    ble lbl_fn_80265B00_000003A0
    subic. r0, r0, 0x1
    lfs f0, lbl_80883674
    stfs f0, 0x9fc(r31)
    stw r0, 0x14ec(r31)
    bne lbl_fn_80265B00_000003A0
    bl fn_800F7FA0
    addi r4, r31, 0x15ac
    li r5, 0x0
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    addi r4, r31, 0x15a0
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    li r4, 0x2
    bl fn_800F84D0
    bl fn_800F7FA0
    addi r4, r31, 0x15a0
    addi r5, r31, 0xb0
    li r6, 0x1
    bl fn_8026607C
    bl fn_800F7FA0
    li r4, 0x0
    bl fn_800F84D0
lbl_fn_80265B00_000003A0:
    lwz r0, 0x14f0(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80265B00_000003E4
    subic. r0, r0, 0x1
    stw r0, 0x14f0(r31)
    bne lbl_fn_80265B00_000003E4
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80265B00_000003DC
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x0
    bl fn_80239DAC
    b lbl_fn_80265B00_000003E4
lbl_fn_80265B00_000003DC:
    li r0, 0x1
    stw r0, 0x14f0(r31)
lbl_fn_80265B00_000003E4:
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80265B00_000004A4
    bl fn_80121F00
    li r4, 0xe9
    bl fn_80370A78
    cmpwi r3, 0x2
    bne lbl_fn_80265B00_0000047C
    li r0, 0x1
    lis r30, lbl_80744554@ha
    stw r0, 0x1634(r31)
    addi r30, r30, lbl_80744554@l
    li r29, 0x0
lbl_fn_80265B00_00000418:
    lwz r4, 0x0(r30)
    addi r3, r31, 0xb0
    li r5, 0x0
    bl fn_8009373C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x3
    blt lbl_fn_80265B00_00000418
    lis r30, lbl_807445C4@ha
    li r29, 0x0
    addi r30, r30, lbl_807445C4@l
lbl_fn_80265B00_00000444:
    lwz r4, 0x0(r30)
    addi r3, r31, 0xb0
    li r5, 0x1
    bl fn_8009373C
    addi r29, r29, 0x1
    addi r30, r30, 0x4
    cmpwi r29, 0x5
    blt lbl_fn_80265B00_00000444
    mr r3, r31
    bl fn_8026AF78
    bl fn_80121F00
    li r4, 0xe9
    li r5, 0x3
    bl fn_80370AE4
lbl_fn_80265B00_0000047C:
    lwz r0, 0x1634(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_00000498
    lfs f1, lbl_80883670
    addi r3, r31, 0x7d4
    bl fn_80265804
    b lbl_fn_80265B00_000004A4
lbl_fn_80265B00_00000498:
    lfs f1, lbl_80883674
    addi r3, r31, 0x7d4
    bl fn_80265804
lbl_fn_80265B00_000004A4:
    bl fn_80121F00
    li r4, 0x396
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_000004CC
    mr r3, r31
    bl fn_8026DB8C
lbl_fn_80265B00_000004CC:
    lwz r0, 0x1634(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_00000508
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_00000508
    mr r3, r31
    li r4, 0x19
    li r5, 0x1c2
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1a
    li r5, 0x1c3
    bl fn_8014C0B4
    b lbl_fn_80265B00_00000528
lbl_fn_80265B00_00000508:
    mr r3, r31
    li r4, 0x19
    li r5, 0x1c0
    bl fn_8014C0B4
    mr r3, r31
    li r4, 0x1a
    li r5, 0x1c1
    bl fn_8014C0B4
lbl_fn_80265B00_00000528:
    addi r3, r31, 0x8bc
    li r4, 0x4
    bl fn_802660EC
    lwz r0, 0xd18(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_0000054C
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_00000598
lbl_fn_80265B00_0000054C:
    lwz r0, 0x14b8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_0000057C
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x6
    bne lbl_fn_80265B00_00000570
    mr r3, r31
    bl fn_80267F88
    b lbl_fn_80265B00_00000760
lbl_fn_80265B00_00000570:
    mr r3, r31
    bl fn_8026AF78
    b lbl_fn_80265B00_00000760
lbl_fn_80265B00_0000057C:
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
    mr r3, r31
    li r4, 0x0
    bl fn_802657FC
    b lbl_fn_80265B00_00000760
lbl_fn_80265B00_00000598:
    lwz r0, 0x1650(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_00000600
    lwz r0, 0x14c0(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80265B00_00000600
    lwz r3, 0x1654(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1654(r31)
    bge lbl_fn_80265B00_00000600
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0xc8
    li r6, 0x1
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r31
    li r5, 0xc8
    bl fn_800F7FA8
    bl fn_800F7FA0
    addi r4, r31, 0x15c4
    addi r5, r31, 0xb0
    li r6, 0x1
    bl fn_8026607C
    li r0, 0x1
    stw r0, 0x1650(r31)
lbl_fn_80265B00_00000600:
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_80265B00_00000618
    mr r3, r31
    li r4, 0x3
    bl fn_8016E970
lbl_fn_80265B00_00000618:
    lwz r3, 0x58c(r31)
    subi r0, r3, 0x7
    cmplwi r0, 0x12
    bgt lbl_fn_80265B00_00000744
    lis r3, jumptable_80784D28@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80784D28@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    mr r3, r31
    bl fn_802684C0
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026860C
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_80268CB4
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_80269168
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_802692B4
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_802696F8
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_80269CBC
    b lbl_fn_80265B00_00000760
    addi r3, r31, 0x8bc
    li r4, 0x4
    bl fn_802660FC
    mr r3, r31
    bl fn_8026A010
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A4FC
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A5BC
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A628
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A34C
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_802682C4
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_802676BC
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A774
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A7AC
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A828
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A8E4
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026A9A0
    b lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_8026AC8C
    b lbl_fn_80265B00_00000760
lbl_fn_80265B00_00000744:
    mr r3, r31
    bl fn_80267F88
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80265B00_00000760
    mr r3, r31
    bl fn_802676BC
lbl_fn_80265B00_00000760:
    mr r3, r31
    bl fn_8014C540
    mr r3, r31
    bl fn_80145334
    bl fn_80121F00
    bl fn_80122550
    mr r29, r3
    bl fn_8000D9E8
    bl fn_8000DCF4
    lwz r0, 0x163c(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_00000838
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_00000838
    lwz r0, 0x1644(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_00000838
    lwz r0, 0x1660(r31)
    cmpwi r0, 0x1
    bne lbl_fn_80265B00_00000838
    lfs f1, 0x1668(r31)
    lfs f0, lbl_80883680
    fcmpo cr0, f1, f0
    bge lbl_fn_80265B00_00000838
    lwz r0, 0x1640(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80265B00_00000808
    lwz r3, 0x1624(r31)
    bl fn_8026615C
    bl fn_80266154
    mr r4, r3
    addi r3, r1, 0x14
    bl fn_8000D0F8
    lfs f1, lbl_80883674
    mr r3, r29
    addi r4, r1, 0x14
    li r5, 0x0
    bl fn_8026610C
    li r0, 0x1
    stw r0, 0x1640(r31)
    b lbl_fn_80265B00_00000864
lbl_fn_80265B00_00000808:
    lwz r3, 0x1624(r31)
    bl fn_8026615C
    bl fn_80266154
    mr r4, r3
    addi r3, r1, 0x8
    bl fn_8000D0F8
    mr r3, r29
    bl fn_80266164
    addi r3, r3, 0xc
    addi r4, r1, 0x8
    bl fn_8000D124
    b lbl_fn_80265B00_00000864
lbl_fn_80265B00_00000838:
    lwz r0, 0x1640(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80265B00_00000864
    mr r3, r29
    li r4, 0x0
    bl fn_8026616C
    mr r3, r29
    li r4, 0x0
    bl fn_80266174
    li r0, 0x0
    stw r0, 0x1640(r31)
lbl_fn_80265B00_00000864:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8026607C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lfs f0, lbl_80883674
    li r10, -0x1
    stw r0, 0x44(r1)
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r7, r1, 0x2c
    stfs f0, 0x20(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x10
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    stfs f0, 0x30(r1)
    stfs f0, 0x34(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x14(r1)
    stfs f1, 0x18(r1)
    stfs f1, 0x1c(r1)
    stw r0, 0x8(r1)
    stw r6, 0xc(r1)
    li r6, 0x0
    bl fn_8023A8B4
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802660EC(void)
{
    nofralloc
    lwz r0, 0x9c(r3)
    andc r0, r0, r4
    stw r0, 0x9c(r3)
    blr
}

asm void fn_802660FC(void)
{
    nofralloc
    lwz r0, 0x9c(r3)
    or r0, r0, r4
    stw r0, 0x9c(r3)
    blr
}

asm void fn_8026610C(void)
{
    nofralloc
    fmr f0, f1
    lbz r6, 0x910(r3)
    cmpwi r5, 0x0
    lfs f2, 0x8(r4)
    li r0, 0x1
    addi r5, r3, 0x91c
    psq_l f1, 0x0(r4), 0, 0
    stb r6, 0x911(r3)
    stb r0, 0x910(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x924(r3)
    stfs f0, 0x934(r3)
    beq lbl_fn_8026610C_0000094C
    lwz r0, 0x918(r3)
    b lbl_fn_8026610C_00000950
lbl_fn_8026610C_0000094C:
    li r0, 0x0
lbl_fn_8026610C_00000950:
    stw r0, 0x914(r3)
    blr
}

asm void fn_80266154(void)
{
    nofralloc
    addi r3, r3, 0x8
    blr
}

asm void fn_8026615C(void)
{
    nofralloc
    addi r3, r3, 0x10
    blr
}

asm void fn_80266164(void)
{
    nofralloc
    addi r3, r3, 0x910
    blr
}

asm void fn_8026616C(void)
{
    nofralloc
    stw r4, 0x834(r3)
    blr
}

asm void fn_80266174(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r0, 0x0
    stb r0, 0x910(r3)
    beqlr
    stw r0, 0x914(r3)
    blr
}

asm void fn_8026618C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    bl fn_800E41FC
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8026618C_000009D4
    lwz r0, 0x1660(r31)
    cmpwi r0, 0x3
    beq lbl_fn_8026618C_000009D4
    lwz r3, 0x1624(r31)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
lbl_fn_8026618C_000009D4:
    lwz r0, 0x1634(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8026618C_00000A44
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x8
    lfs f0, 0x530(r31)
    lwz r4, 0x48(r4)
    lfs f2, 0x52c(r31)
    lfs f4, 0x530(r4)
    lfs f3, 0x52c(r4)
    fsubs f4, f4, f0
    lfs f1, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9920
    lfs f0, lbl_80883684
    fcmpo cr0, f1, f0
    bge lbl_fn_8026618C_00000A44
    lwz r3, lbl_8087F490
    mr r4, r31
    lwz r5, 0x1658(r31)
    li r7, 0x0
    lwz r6, 0x165c(r31)
    bl fn_803E6850
lbl_fn_8026618C_00000A44:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80266254(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    stfd f30, 0x150(r1)
    psq_st f30, 0x158(r1), 0, 0
    stw r31, 0x14c(r1)
    mr r31, r4
    stw r30, 0x148(r1)
    mr r30, r3
    stw r29, 0x144(r1)
    lwz r0, 0x58c(r3)
    lwz r5, 0x1688(r3)
    cmpwi r0, 0x10
    addi r0, r5, 0x1
    stw r0, 0x1688(r3)
    bne lbl_fn_80266254_00000AF4
    lfs f4, 0x10(r4)
    li r3, 0x3
    lfs f5, lbl_80883674
    li r5, 0x0
    lfs f3, 0x14(r4)
    li r0, 0x2
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    stw r3, 0x64(r4)
    fmuls f0, f0, f5
    lwz r3, 0x8(r4)
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    stw r5, 0x90(r4)
    stw r0, 0x84(r4)
    lwz r0, 0xc4(r3)
    stw r0, 0x88(r4)
    stw r5, 0x68(r4)
    b lbl_fn_80266254_000011FC
lbl_fn_80266254_00000AF4:
    lwz r0, 0x44(r4)
    cmpwi r0, 0x1
    beq lbl_fn_80266254_00000B10
    lwz r5, 0x8(r4)
    lbz r0, 0x1(r5)
    cmpwi r0, 0x1
    bne lbl_fn_80266254_00000B38
lbl_fn_80266254_00000B10:
    lfs f4, 0x10(r4)
    lfs f5, lbl_80883674
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80266254_00000B38:
    lwz r0, 0x58c(r3)
    cmpwi r0, 0xc
    bne lbl_fn_80266254_00000B6C
    lfs f4, 0x10(r4)
    lfs f5, lbl_80883674
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_80266254_00000B6C:
    lwz r7, 0x8(r4)
    lwz r0, 0xac(r7)
    rlwinm r5, r0, 0, 16, 16
    addis r0, r5, 0x0
    cmplwi r0, 0x8000
    bne lbl_fn_80266254_00000C38
    lwz r0, 0x54c(r3)
    rlwinm r4, r0, 0, 7, 7
    subis r0, r4, 0x100
    cmplwi r0, 0x0
    beq lbl_fn_80266254_00000C2C
    li r29, 0x0
    stw r29, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x6
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r29, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    mr r3, r30
    li r4, 0x0
    bl fn_8016D0A0
    lwz r0, 0x14c0(r30)
    stw r29, 0x14bc(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80266254_00000C2C
    lwz r0, 0x1630(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80266254_00000C2C
    mr r3, r30
    li r4, 0x1
    bl fn_8026D0F8
lbl_fn_80266254_00000C2C:
    li r0, 0x0
    stw r0, 0x90(r31)
    b lbl_fn_80266254_000011FC
lbl_fn_80266254_00000C38:
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80266254_000011C0
    lwz r0, 0x1634(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80266254_00000CA0
    lfs f4, 0x10(r4)
    mr r3, r30
    lfs f5, lbl_80883688
    lfs f3, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r4)
    stfs f3, 0x14(r4)
    stfs f0, 0x18(r4)
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80266254_000011FC
lbl_fn_80266254_00000CA0:
    lwz r5, 0x0(r4)
    cmpwi r5, 0x0
    beq lbl_fn_80266254_00000F78
    lwz r5, 0x648(r5)
    cmpwi r5, 0x0
    beq lbl_fn_80266254_00000F78
    lwz r5, 0x8(r5)
    li r6, 0x0
    subi r0, r5, 0x1d5
    cmplwi r0, 0x5
    bgt lbl_fn_80266254_00000CD0
    li r6, 0x1
lbl_fn_80266254_00000CD0:
    cmpwi r6, 0x0
    beq lbl_fn_80266254_00000F78
    lfs f2, 0x30(r4)
    addi r29, r1, 0xb8
    lwz r3, 0x50(r4)
    fabs f3, f2
    lwz r0, 0xc(r4)
    psq_l f1, 0x28(r4), 0, 0
    ori r3, r3, 0x8
    oris r0, r0, 0x4000
    lfs f0, lbl_8088368C
    frsp f3, f3
    stw r3, 0x50(r4)
    stw r0, 0xc(r4)
    fcmpo cr0, f3, f0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc0(r1)
    bge lbl_fn_80266254_00000D3C
    lfs f3, 0xb8(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80266254_00000D30
    lfs f0, lbl_80883690
    b lbl_fn_80266254_00000D34
lbl_fn_80266254_00000D30:
    lfs f0, lbl_80883694
lbl_fn_80266254_00000D34:
    stfs f0, 0xb0(r1)
    b lbl_fn_80266254_00000D50
lbl_fn_80266254_00000D3C:
    frsp f2, f2
    lfs f1, 0xb8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xb0(r1)
lbl_fn_80266254_00000D50:
    lfs f0, 0xb0(r1)
    addi r3, r1, 0xc8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0xa0
    lfs f30, 0xd0(r1)
    mr r5, r4
    lfs f31, 0xcc(r1)
    addi r3, r1, 0xf8
    lfs f13, 0xc8(r1)
    lfs f12, 0xe0(r1)
    lfs f11, 0xdc(r1)
    lfs f10, 0xd8(r1)
    lfs f9, 0xf0(r1)
    lfs f8, 0xec(r1)
    lfs f7, 0xe8(r1)
    lfs f6, 0xf4(r1)
    lfs f5, 0xe4(r1)
    lfs f4, 0xd4(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xc0(r1)
    stfs f3, 0x128(r1)
    stfs f3, 0x12c(r1)
    stfs f3, 0x130(r1)
    stfs f0, 0x134(r1)
    stfs f13, 0x70(r1)
    stfs f31, 0x74(r1)
    stfs f30, 0x78(r1)
    stfs f13, 0xf8(r1)
    stfs f31, 0xfc(r1)
    stfs f30, 0x100(r1)
    stfs f10, 0x7c(r1)
    stfs f11, 0x80(r1)
    stfs f12, 0x84(r1)
    stfs f10, 0x108(r1)
    stfs f11, 0x10c(r1)
    stfs f12, 0x110(r1)
    stfs f7, 0x88(r1)
    stfs f8, 0x8c(r1)
    stfs f9, 0x90(r1)
    stfs f7, 0x118(r1)
    stfs f8, 0x11c(r1)
    stfs f9, 0x120(r1)
    stfs f4, 0x94(r1)
    stfs f5, 0x98(r1)
    stfs f6, 0x9c(r1)
    stfs f4, 0x104(r1)
    stfs f5, 0x114(r1)
    stfs f6, 0x124(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0xa8(r1)
    bl fn_805F9750
    lfs f2, 0xa8(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80266254_00000E6C
    lfs f3, 0xa4(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80266254_00000E5C
    lfs f0, lbl_80883690
    b lbl_fn_80266254_00000E60
lbl_fn_80266254_00000E5C:
    lfs f0, lbl_80883694
lbl_fn_80266254_00000E60:
    fneg f0, f0
    stfs f0, 0xac(r1)
    b lbl_fn_80266254_00000E80
lbl_fn_80266254_00000E6C:
    lfs f1, 0xa4(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0xac(r1)
lbl_fn_80266254_00000E80:
    addi r3, r1, 0xac
    lfs f2, lbl_80883674
    psq_l f1, 0x0(r3), 0, 0
    li r3, 0x0
    stfs f2, 0xb4(r1)
    li r4, 0x0
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xc0(r1)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r3, -0x1
    lfs f1, lbl_80883670
    li r0, 0x1
    stfs f0, 0x54(r1)
    addi r4, r30, 0x15f4
    addi r5, r30, 0xb0
    addi r7, r1, 0x48
    stfs f0, 0x58(r1)
    addi r8, r1, 0x54
    addi r9, r1, 0x60
    li r6, 0x0
    stfs f0, 0x5c(r1)
    li r10, -0x1
    stfs f0, 0x48(r1)
    stfs f0, 0x4c(r1)
    stfs f0, 0x50(r1)
    stfs f1, 0x60(r1)
    stfs f1, 0x64(r1)
    stfs f1, 0x68(r1)
    stfs f1, 0x6c(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lwz r3, lbl_8087F430
    li r4, 0xec
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80266254_00000F2C
    lwz r3, lbl_8087F430
    li r4, 0xec
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80266254_00000F2C:
    lwz r3, 0x58c(r30)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    ble lbl_fn_80266254_00001198
    cmpwi r3, 0x7
    beq lbl_fn_80266254_00001198
    cmpwi r3, 0x9
    beq lbl_fn_80266254_00001198
    lfs f4, 0x10(r31)
    lfs f5, lbl_80883674
    lfs f3, 0x14(r31)
    lfs f0, 0x18(r31)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f0, f0, f5
    stfs f4, 0x10(r31)
    stfs f3, 0x14(r31)
    stfs f0, 0x18(r31)
    b lbl_fn_80266254_00001198
lbl_fn_80266254_00000F78:
    lwz r0, 0x4(r7)
    cmpwi r0, 0xd0
    bne lbl_fn_80266254_00001038
    lwz r0, 0x1630(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80266254_00001038
    li r29, 0x0
    stw r29, 0x14bc(r3)
    lwz r3, lbl_8087F048
    bl fn_800F8548
    lwz r5, 0x12a4(r30)
    li r0, 0x16
    stw r3, 0x590(r30)
    mr r3, r30
    rlwinm r5, r5, 0, 27, 25
    li r4, 0x3
    stw r29, 0x14c4(r30)
    stw r5, 0x12a4(r30)
    stw r0, 0x58c(r30)
    bl fn_8016E970
    lfs f0, lbl_80883670
    li r29, 0x1
    stw r29, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_80883674
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x33
    lfs f2, lbl_80883698
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl fn_80097C08
    mr r3, r30
    li r4, 0x1
    bl fn_8026D0F8
    stw r29, 0x1644(r30)
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_80239DAC
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
lbl_fn_80266254_00001038:
    lwz r0, 0xc(r31)
    li r3, 0x1
    stw r3, 0x48(r31)
    li r4, 0xeb
    ori r0, r0, 0x8008
    stw r0, 0xc(r31)
    lwz r3, lbl_8087F430
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80266254_00001070
    lwz r3, lbl_8087F430
    li r4, 0xeb
    li r5, 0x1
    bl fn_80370AE4
lbl_fn_80266254_00001070:
    lwz r3, 0x58c(r30)
    subi r0, r3, 0x11
    cmplwi r0, 0x2
    ble lbl_fn_80266254_00001198
    cmpwi r3, 0x7
    beq lbl_fn_80266254_00001198
    li r29, 0x1
    stw r29, 0x64(r31)
    lwz r6, 0x8(r31)
    li r5, 0x0
    stw r29, 0x90(r31)
    li r3, 0x0
    lwz r0, 0xc(r31)
    li r4, 0x0
    stw r29, 0x84(r31)
    lwz r6, 0xc4(r6)
    stw r6, 0x88(r31)
    stw r5, 0x68(r31)
    stw r0, 0x94(r31)
    bl fn_80232B7C
    lfs f0, lbl_80883674
    li r0, -0x1
    lfs f1, lbl_80883670
    addi r4, r30, 0x1588
    stfs f0, 0x2c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x20
    addi r8, r1, 0x2c
    stfs f0, 0x30(r1)
    addi r9, r1, 0x38
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x34(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x44(r1)
    stw r0, 0x8(r1)
    stw r29, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    lfs f1, lbl_80883688
    addi r3, r30, 0x7d4
    bl fn_8012F034
    lis r4, lbl_80744608@ha
    lfs f1, lbl_80883670
    addi r4, r4, lbl_80744608@l
    addi r3, r1, 0x10
    addi r4, r4, 0x1d7
    addi r5, r31, 0x1c
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x6d0(r30)
    lwz r4, 0x34(r31)
    slwi r0, r0, 3
    lwz r3, 0x38(r31)
    add r0, r30, r0
    stw r4, 0x18(r1)
    addic. r5, r0, 0x6d4
    stw r3, 0x1c(r1)
    beq lbl_fn_80266254_00001188
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
lbl_fn_80266254_00001188:
    lwz r3, 0x6d0(r30)
    addi r0, r3, 0x1
    stw r0, 0x6d0(r30)
    b lbl_fn_80266254_000011FC
lbl_fn_80266254_00001198:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    b lbl_fn_80266254_000011FC
lbl_fn_80266254_000011C0:
    lwz r0, 0x1544(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80266254_000011D8
    lwz r0, 0x44(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80266254_000011FC
lbl_fn_80266254_000011D8:
    mr r3, r30
    mr r4, r31
    bl fn_80151448
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_80266254_000011FC:
    lwz r0, 0x174(r1)
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    psq_l f30, 0x158(r1), 0, 0
    lfd f30, 0x150(r1)
    lwz r31, 0x14c(r1)
    lwz r30, 0x148(r1)
    lwz r29, 0x144(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}

asm void fn_80266A24(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80266A24_0000139C
    lwz r0, 0x1634(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80266A24_0000137C
    lwz r6, 0x940(r3)
    lis r0, 0x4330
    stw r0, 0x60(r1)
    lis r5, lbl_807445D8@ha
    xoris r0, r6, 0x8000
    lfd f1, lbl_807445D8@l(r5)
    stw r0, 0x64(r1)
    lwz r4, 0x68(r4)
    lfd f0, 0x60(r1)
    lwz r0, 0x1658(r3)
    fsubs f0, f0, f1
    subf r0, r4, r0
    stw r0, 0x1658(r3)
    stfs f0, 0x7d8(r3)
    addi r3, r3, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_80266A24_000012B0
    addi r3, r30, 0x7d4
    li r4, 0x20
    bl fn_8013322C
lbl_fn_80266A24_000012B0:
    lwz r0, 0x1658(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_80266A24_00001338
    bl fn_80121F00
    li r4, 0xe9
    li r5, 0x1
    bl fn_80370AE4
    addi r3, r30, 0x6b8
    bl fn_801162A0
    lfs f0, lbl_80883674
    fcmpo cr0, f1, f0
    ble lbl_fn_80266A24_000012F4
    mr r3, r30
    addi r4, r30, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
    b lbl_fn_80266A24_0000131C
lbl_fn_80266A24_000012F4:
    mr r4, r30
    addi r3, r1, 0x2c
    bl fn_8014052C
    addi r3, r1, 0x38
    addi r4, r1, 0x2c
    bl fn_8013C3B4
    mr r3, r30
    addi r4, r1, 0x38
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_80266A24_0000131C:
    mr r3, r30
    li r4, 0x0
    bl fn_802657FC
    mr r3, r30
    bl fn_8026AF24
    li r0, 0x0
    stw r0, 0x1658(r30)
lbl_fn_80266A24_00001338:
    lwz r3, 0x165c(r30)
    lwz r4, 0x1658(r30)
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r4, r0
    bge lbl_fn_80266A24_0000139C
    bl fn_80121F00
    li r4, 0xef
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80266A24_0000139C
    bl fn_80121F00
    li r4, 0xef
    li r5, 0x1
    bl fn_80370AE4
    b lbl_fn_80266A24_0000139C
lbl_fn_80266A24_0000137C:
    lwz r4, 0x8(r4)
    lwz r0, 0x4(r4)
    cmpwi r0, 0xd0
    bne lbl_fn_80266A24_0000139C
    lwz r0, 0x1630(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80266A24_0000139C
    bl fn_8026CB50
lbl_fn_80266A24_0000139C:
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_80266A24_00001664
    lwz r3, 0x560(r30)
    subi r0, r3, 0x16
    cmplwi r0, 0x1
    bgt lbl_fn_80266A24_00001514
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x65
    bl fn_800F7FA8
    lwz r0, 0xc(r31)
    rlwinm r3, r0, 0, 1, 1
    subis r0, r3, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_80266A24_000014A0
    lwz r0, 0x1658(r30)
    cmpwi r0, 0x0
    ble lbl_fn_80266A24_000014A0
    addi r3, r1, 0x50
    addi r4, r31, 0x10
    bl fn_8001047C
    lwz r0, 0x1658(r30)
    lwz r3, 0x1504(r30)
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    stw r4, 0x1504(r30)
    ble lbl_fn_80266A24_00001458
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80266A24_00001458
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80266A24_00001458
    cmpwi r4, 0x4
    blt lbl_fn_80266A24_00001458
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    mr r3, r30
    bl fn_8026C4E8
    li r0, 0x0
    stw r0, 0x1504(r30)
    b lbl_fn_80266A24_000014E8
lbl_fn_80266A24_00001458:
    lwz r5, 0x0(r31)
    mr r3, r30
    lfs f1, lbl_80883698
    addi r4, r1, 0x50
    bl fn_8015D8C0
    lfs f1, lbl_8088369C
    addi r3, r1, 0x20
    addi r4, r1, 0x50
    bl fn_800F72CC
    mr r3, r30
    addi r4, r1, 0x20
    bl fn_80198514
    mr r3, r30
    li r4, 0x0
    bl fn_802657FC
    mr r3, r30
    bl fn_8026AF24
    b lbl_fn_80266A24_000014E8
lbl_fn_80266A24_000014A0:
    lwz r0, 0x560(r30)
    cmpwi r0, 0x17
    bne lbl_fn_80266A24_000014D4
    mr r3, r30
    addi r4, r30, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
    mr r3, r30
    li r4, 0x0
    bl fn_802657FC
    mr r3, r30
    bl fn_8026AF24
    b lbl_fn_80266A24_000014E8
lbl_fn_80266A24_000014D4:
    mr r3, r30
    li r4, 0x0
    bl fn_802657FC
    mr r3, r30
    bl fn_8026AF24
lbl_fn_80266A24_000014E8:
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80266A24_00001664
lbl_fn_80266A24_00001514:
    cmpwi r3, 0x14
    bne lbl_fn_80266A24_00001664
    addi r3, r1, 0x8
    addi r4, r31, 0x28
    bl fn_8013C3B4
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl fn_80011034
    lfs f0, 0x18(r1)
    stfs f0, 0x538(r30)
    bl fn_800F7FA0
    li r4, 0x0
    li r5, 0x0
    bl fn_800F7FA8
    bl fn_800F7FA0
    addi r4, r30, 0x1588
    addi r5, r30, 0xb0
    li r6, 0x1
    bl fn_8026607C
    lwz r0, 0x58c(r30)
    cmpwi r0, 0x7
    beq lbl_fn_80266A24_000015C0
    mr r3, r30
    li r4, 0x7
    bl fn_802657FC
    mr r3, r30
    bl fn_8026AF24
    lwz r3, 0x12a4(r30)
    li r0, 0xa
    stw r0, 0x164c(r30)
    ori r3, r3, 0x20
    stw r3, 0x12a4(r30)
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x64
    li r6, 0x0
    bl fn_80239DAC
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x65
    li r6, 0x1
    bl fn_80239DAC
    b lbl_fn_80266A24_0000165C
lbl_fn_80266A24_000015C0:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80266A24_0000165C
    lwz r3, 0x1504(r30)
    addi r0, r3, 0x1
    stw r0, 0x1504(r30)
    cmpwi r0, 0x2
    blt lbl_fn_80266A24_0000165C
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80266A24_00001614
    lwz r3, 0x0(r31)
    li r4, 0x1
    lwz r12, 0x0(r3)
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    mr r3, r30
    bl fn_8026C4E8
    b lbl_fn_80266A24_00001654
lbl_fn_80266A24_00001614:
    lwz r3, 0x0(r31)
    bl fn_8013C38C
    mr r4, r3
    addi r3, r1, 0x44
    addi r5, r30, 0x528
    bl fn_80013338
    addi r3, r1, 0x44
    bl fn_8000D3A4
    lfs f0, lbl_808836A0
    fcmpo cr0, f1, f0
    bge lbl_fn_80266A24_0000164C
    mr r3, r30
    bl fn_8026B748
    b lbl_fn_80266A24_00001654
lbl_fn_80266A24_0000164C:
    mr r3, r30
    bl fn_8026B118
lbl_fn_80266A24_00001654:
    li r0, 0x0
    stw r0, 0x1504(r30)
lbl_fn_80266A24_0000165C:
    li r0, 0x0
    stw r0, 0x14bc(r30)
lbl_fn_80266A24_00001664:
    addi r3, r30, 0x7d4
    bl fn_80139F4C
    cmpwi r3, 0x0
    beq lbl_fn_80266A24_00001790
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x65
    bl fn_800F7FA8
    addi r3, r30, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lwz r0, 0x14c0(r30)
    lfs f0, lbl_80883670
    cmpwi r0, 0x0
    stfs f0, 0x7d8(r30)
    bne lbl_fn_80266A24_000016C4
    li r0, 0x1
    stw r0, 0x1544(r30)
    bl fn_80121F00
    li r4, 0x395
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80266A24_00001790
lbl_fn_80266A24_000016C4:
    bl fn_800F7FA0
    mr r4, r30
    li r5, 0x65
    bl fn_800F7FA8
    bl fn_80121F00
    li r4, 0x395
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    bl fn_80121F00
    li r4, 0x396
    li r5, 0x0
    li r6, 0x0
    bl fn_80370320
    bl fn_80121F00
    li r4, 0xea
    bl fn_80370A78
    cmpwi r3, 0x0
    bne lbl_fn_80266A24_00001788
    bl fn_80121F00
    li r4, 0xea
    li r5, 0x1
    bl fn_80370AE4
    bl fn_8000D9E8
    bl fn_8000DCF4
    cmpwi r3, 0x0
    beq lbl_fn_80266A24_00001788
    bl fn_80266FA4
    li r4, 0x0
    bl fn_80266FB4
    lwz r3, 0x0(r3)
    lwz r0, 0x1628(r30)
    cmplw r3, r0
    bne lbl_fn_80266A24_00001788
    lwz r3, 0x1624(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80266A24_00001788
    bl fn_80266FAC
    bl fn_80206BE4
    mr r31, r3
    bl fn_801D80B4
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x0
    bl fn_804439FC
lbl_fn_80266A24_00001788:
    li r0, 0x1
    stw r0, 0x163c(r30)
lbl_fn_80266A24_00001790:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80266FA4(void)
{
    nofralloc
    addi r3, r3, 0x650
    blr
}

asm void fn_80266FAC(void)
{
    nofralloc
    lwz r3, 0x274(r3)
    blr
}

asm void fn_80266FB4(void)
{
    nofralloc
    slwi r0, r4, 2
    add r3, r3, r0
    addi r3, r3, 0x4
    blr
}

asm void fn_80266FC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80266FC4_00001918
    lwz r0, 0xd1c(r3)
    li r4, 0x3
    stw r0, 0xd20(r3)
    lwz r3, lbl_8087F8A0
    lwz r30, 0x48(r3)
    bl fn_8054A340
    lwz r0, 0x12a4(r30)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_80266FC4_00001828
    lwz r0, 0x1630(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80266FC4_00001838
    lwz r0, 0x1660(r31)
    cmpwi r0, 0x3
    bne lbl_fn_80266FC4_00001838
lbl_fn_80266FC4_00001828:
    li r0, 0x0
    stw r0, 0x1454(r31)
    stw r30, 0x14b8(r31)
    b lbl_fn_80266FC4_0000190C
lbl_fn_80266FC4_00001838:
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x18
    bne lbl_fn_80266FC4_000018FC
    lwz r0, 0x1648(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80266FC4_000018FC
    cmpwi r3, 0x0
    beq lbl_fn_80266FC4_000018FC
    lwz r7, 0x38(r3)
    li r5, 0x0
    li r4, 0x0
    li r6, 0x0
    rlwinm r0, r7, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80266FC4_00001884
    clrlwi r0, r7, 31
    cmplwi r0, 0x1
    beq lbl_fn_80266FC4_00001884
    li r6, 0x1
lbl_fn_80266FC4_00001884:
    cmpwi r6, 0x0
    beq lbl_fn_80266FC4_000018A0
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80266FC4_000018A0
    li r4, 0x1
lbl_fn_80266FC4_000018A0:
    cmpwi r4, 0x0
    beq lbl_fn_80266FC4_000018D4
    lwz r0, 0x55c(r3)
    li r4, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80266FC4_000018C8
    lwz r0, 0x560(r3)
    cmpwi r0, 0x1c
    bne lbl_fn_80266FC4_000018C8
    li r4, 0x1
lbl_fn_80266FC4_000018C8:
    cmpwi r4, 0x0
    bne lbl_fn_80266FC4_000018D4
    li r5, 0x1
lbl_fn_80266FC4_000018D4:
    cmpwi r5, 0x0
    beq lbl_fn_80266FC4_000018FC
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80266FC4_000018FC
    li r0, 0x0
    stw r0, 0x1454(r31)
    stw r3, 0x14b8(r31)
    b lbl_fn_80266FC4_0000190C
lbl_fn_80266FC4_000018FC:
    lwz r0, 0xd1c(r31)
    li r3, 0x1
    stw r3, 0x1454(r31)
    stw r0, 0x14b8(r31)
lbl_fn_80266FC4_0000190C:
    lwz r0, 0x14b8(r31)
    stw r0, 0xd1c(r31)
    b lbl_fn_80266FC4_00001920
lbl_fn_80266FC4_00001918:
    lwz r0, 0xd1c(r3)
    stw r0, 0x14b8(r3)
lbl_fn_80266FC4_00001920:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80267134(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    mflr r0
    stw r0, 0x234(r1)
    stfd f31, 0x220(r1)
    psq_st f31, 0x228(r1), 0, 0
    lfs f31, lbl_80883674
    stfd f30, 0x210(r1)
    psq_st f30, 0x218(r1), 0, 0
    lfs f30, lbl_80883670
    stfd f29, 0x200(r1)
    psq_st f29, 0x208(r1), 0, 0
    stfd f28, 0x1f0(r1)
    psq_st f28, 0x1f8(r1), 0, 0
    stw r31, 0x1ec(r1)
    mr r31, r3
    stw r30, 0x1e8(r1)
    addi r30, r1, 0xec
    stw r29, 0x1e4(r1)
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x7
    bne lbl_fn_80267134_00001E58
    lis r4, lbl_807C7030@ha
    addi r29, r1, 0xe0
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xe8(r1)
    lwz r0, 0x14c0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80267134_00001BE8
    addi r3, r3, 0x1030
    bl fn_80126214
    addi r4, r31, 0x1088
    lfs f2, 0x1090(r31)
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r29
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xe8(r1)
    bl fn_805F9940
    lfs f0, lbl_808836A4
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_80267134_00001BD4
    addi r30, r1, 0xbc
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xe8(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0xc4(r1)
    bl fn_805F98D0
    lfs f2, 0xc4(r1)
    addi r29, r1, 0xc8
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_8088368C
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xd0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80267134_00001A64
    lfs f3, 0xc8(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267134_00001A58
    lfs f0, lbl_80883690
    b lbl_fn_80267134_00001A5C
lbl_fn_80267134_00001A58:
    lfs f0, lbl_80883694
lbl_fn_80267134_00001A5C:
    stfs f0, 0x90(r1)
    b lbl_fn_80267134_00001A78
lbl_fn_80267134_00001A64:
    frsp f2, f2
    lfs f1, 0xc8(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x90(r1)
lbl_fn_80267134_00001A78:
    lfs f0, 0x90(r1)
    addi r3, r1, 0x168
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x80
    lfs f28, 0x170(r1)
    mr r5, r4
    lfs f29, 0x16c(r1)
    addi r3, r1, 0x198
    lfs f13, 0x168(r1)
    lfs f12, 0x180(r1)
    lfs f11, 0x17c(r1)
    lfs f10, 0x178(r1)
    lfs f9, 0x190(r1)
    lfs f8, 0x18c(r1)
    lfs f7, 0x188(r1)
    lfs f6, 0x194(r1)
    lfs f5, 0x184(r1)
    lfs f4, 0x174(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xd0(r1)
    stfs f3, 0x1c8(r1)
    stfs f3, 0x1cc(r1)
    stfs f3, 0x1d0(r1)
    stfs f0, 0x1d4(r1)
    stfs f13, 0x50(r1)
    stfs f29, 0x54(r1)
    stfs f28, 0x58(r1)
    stfs f13, 0x198(r1)
    stfs f29, 0x19c(r1)
    stfs f28, 0x1a0(r1)
    stfs f10, 0x5c(r1)
    stfs f11, 0x60(r1)
    stfs f12, 0x64(r1)
    stfs f10, 0x1a8(r1)
    stfs f11, 0x1ac(r1)
    stfs f12, 0x1b0(r1)
    stfs f7, 0x68(r1)
    stfs f8, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f7, 0x1b8(r1)
    stfs f8, 0x1bc(r1)
    stfs f9, 0x1c0(r1)
    stfs f4, 0x74(r1)
    stfs f5, 0x78(r1)
    stfs f6, 0x7c(r1)
    stfs f4, 0x1a4(r1)
    stfs f5, 0x1b4(r1)
    stfs f6, 0x1c4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F9750
    lfs f2, 0x88(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80267134_00001B94
    lfs f3, 0x84(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267134_00001B84
    lfs f0, lbl_80883690
    b lbl_fn_80267134_00001B88
lbl_fn_80267134_00001B84:
    lfs f0, lbl_80883694
lbl_fn_80267134_00001B88:
    fneg f0, f0
    stfs f0, 0x8c(r1)
    b lbl_fn_80267134_00001BA8
lbl_fn_80267134_00001B94:
    lfs f1, 0x84(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8c(r1)
lbl_fn_80267134_00001BA8:
    lfs f2, lbl_80883674
    addi r3, r1, 0x8c
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    stfs f2, 0x94(r1)
    stfs f2, 0xd0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_80267134_00001E68
lbl_fn_80267134_00001BD4:
    psq_l f1, 0x534(r31), 0, 0
    lfs f2, 0x53c(r31)
    stfs f2, 0xf4(r1)
    psq_st f1, 0x0(r30), 0, 0
    b lbl_fn_80267134_00001E68
lbl_fn_80267134_00001BE8:
    lwz r6, 0x14b8(r3)
    addi r29, r1, 0xd4
    lfs f0, 0x530(r3)
    addi r5, r1, 0xb0
    lfs f3, 0x530(r6)
    mr r4, r29
    lfs f5, 0x52c(r6)
    fsubs f2, f3, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    mr r3, r29
    lfs f3, 0x528(r6)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xb4(r1)
    stfs f0, 0xb0(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0xb8(r1)
    psq_st f1, 0x0(r29), 0, 0
    stfs f2, 0xdc(r1)
    bl fn_805F98D0
    lwz r4, 0x14b8(r31)
    addi r3, r1, 0xa4
    lfs f0, 0x530(r31)
    lfs f3, 0x530(r4)
    lfs f5, 0x52c(r4)
    fsubs f6, f3, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x528(r4)
    lfs f0, 0x528(r31)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xa8(r1)
    stfs f0, 0xa4(r1)
    stfs f6, 0xac(r1)
    bl fn_805F9940
    lfs f0, lbl_808836A8
    fcmpo cr0, f1, f0
    bge lbl_fn_80267134_00001C8C
    lfs f31, lbl_80883674
    b lbl_fn_80267134_00001C98
lbl_fn_80267134_00001C8C:
    mr r3, r29
    bl fn_805F9940
    fmr f31, f1
lbl_fn_80267134_00001C98:
    lfs f2, 0xdc(r1)
    addi r3, r1, 0xd4
    lfs f0, lbl_8088368C
    addi r29, r1, 0x98
    fabs f3, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    frsp f3, f3
    stfs f2, 0xa0(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_80267134_00001CE8
    lfs f3, 0x98(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267134_00001CDC
    lfs f0, lbl_80883690
    b lbl_fn_80267134_00001CE0
lbl_fn_80267134_00001CDC:
    lfs f0, lbl_80883694
lbl_fn_80267134_00001CE0:
    stfs f0, 0x48(r1)
    b lbl_fn_80267134_00001CFC
lbl_fn_80267134_00001CE8:
    frsp f2, f2
    lfs f1, 0x98(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_80267134_00001CFC:
    lfs f0, 0x48(r1)
    addi r3, r1, 0xf8
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80883674
    addi r4, r1, 0x38
    lfs f29, 0x100(r1)
    mr r5, r4
    lfs f28, 0xfc(r1)
    addi r3, r1, 0x128
    lfs f13, 0xf8(r1)
    lfs f12, 0x110(r1)
    lfs f11, 0x10c(r1)
    lfs f10, 0x108(r1)
    lfs f9, 0x120(r1)
    lfs f8, 0x11c(r1)
    lfs f7, 0x118(r1)
    lfs f6, 0x124(r1)
    lfs f5, 0x114(r1)
    lfs f4, 0x104(r1)
    lfs f0, lbl_80883670
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0xa0(r1)
    stfs f3, 0x158(r1)
    stfs f3, 0x15c(r1)
    stfs f3, 0x160(r1)
    stfs f0, 0x164(r1)
    stfs f13, 0x8(r1)
    stfs f28, 0xc(r1)
    stfs f29, 0x10(r1)
    stfs f13, 0x128(r1)
    stfs f28, 0x12c(r1)
    stfs f29, 0x130(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0x138(r1)
    stfs f11, 0x13c(r1)
    stfs f12, 0x140(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0x148(r1)
    stfs f8, 0x14c(r1)
    stfs f9, 0x150(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0x134(r1)
    stfs f5, 0x144(r1)
    stfs f6, 0x154(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_8088368C
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_80267134_00001E18
    lfs f3, 0x3c(r1)
    lfs f0, lbl_80883674
    fcmpo cr0, f3, f0
    ble lbl_fn_80267134_00001E08
    lfs f0, lbl_80883690
    b lbl_fn_80267134_00001E0C
lbl_fn_80267134_00001E08:
    lfs f0, lbl_80883694
lbl_fn_80267134_00001E0C:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_80267134_00001E2C
lbl_fn_80267134_00001E18:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_80267134_00001E2C:
    lfs f2, lbl_80883674
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0xec
    stfs f2, 0x4c(r1)
    stfs f2, 0xa0(r1)
    frsp f2, f2
    psq_st f1, 0x0(r29), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0xf4(r1)
    b lbl_fn_80267134_00001E68
lbl_fn_80267134_00001E58:
    cmpwi r0, 0x6
    bne lbl_fn_80267134_00001E68
    bl fn_8013A258
    b lbl_fn_80267134_00001E84
lbl_fn_80267134_00001E68:
    lfs f0, 0x568(r31)
    fmr f1, f31
    mr r3, r31
    addi r4, r1, 0xec
    fmuls f2, f0, f30
    li r5, 0x0
    bl fn_8013CB68
lbl_fn_80267134_00001E84:
    lwz r0, 0x234(r1)
    psq_l f31, 0x228(r1), 0, 0
    lfd f31, 0x220(r1)
    psq_l f30, 0x218(r1), 0, 0
    lfd f30, 0x210(r1)
    psq_l f29, 0x208(r1), 0, 0
    lfd f29, 0x200(r1)
    psq_l f28, 0x1f8(r1), 0, 0
    lfd f28, 0x1f0(r1)
    lwz r31, 0x1ec(r1)
    lwz r30, 0x1e8(r1)
    lwz r29, 0x1e4(r1)
    mtlr r0
    addi r1, r1, 0x230
    blr
}
