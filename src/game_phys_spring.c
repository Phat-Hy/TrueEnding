#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _restgpr_27(void);
extern void _savegpr_18(void);
extern void _savegpr_27(void);
extern void fn_80044F54(void);
extern void fn_80045510(void);
extern void fn_800C31F4(void);
extern void fn_800C344C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_800EFBC4(void);
extern void fn_800EFE3C(void);
extern void fn_801092C8(void);
extern void fn_8012DB04(void);
extern void fn_80133FBC(void);
extern void fn_80134134(void);
extern void fn_80134168(void);
extern void fn_801346C8(void);
extern void fn_8015E1B8(void);
extern void fn_8016F3D0(void);
extern void fn_801789D8(void);
extern void fn_80211480(void);
extern void fn_80219558(void);
extern void fn_8021E48C(void);
extern void fn_80232B7C(void);
extern void fn_8023A8B4(void);
extern void fn_803761BC(void);
extern void fn_803E5E64(void);
extern void fn_80444020(void);
extern void fn_8047961C(void);
extern void fn_8054A340(void);
extern void fn_805F8CA0(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9750(void);
extern void fn_805F98D0(void);
extern void fn_805F9940(void);
extern void fn_80680CF8(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 lbl_80735DD0[];
extern u8 lbl_80735EB0[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F528;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80881478;
extern u32 lbl_80881490;
extern u32 lbl_80881494;
extern u32 lbl_808814C4;
extern u32 lbl_808814D0;
extern u32 lbl_808814D4;
extern u32 lbl_808814D8;
extern u32 lbl_808814DC;
extern u32 lbl_80881510;
extern u32 lbl_8088151C;
extern u32 lbl_80881544;
extern u32 lbl_8088158C;
extern u32 lbl_808815AC;
extern u32 lbl_808815C0;
extern u32 lbl_808815E8;
extern u32 lbl_808815EC;
extern u32 lbl_808815F0;
extern u32 lbl_808815F4;

/* Function declarations */
void fn_8010C00C(void);
void fn_8010C3E4(void);
void fn_8010C948(void);
void fn_8010CA24(void);
void fn_8010CA2C(void);
void fn_8010CA34(void);
void fn_8010CA3C(void);
void fn_8010CB2C(void);
void fn_8010CCD0(void);
void fn_8010CCD8(void);
void fn_8010CD3C(void);
void fn_8010CF28(void);
void fn_8010D320(void);

asm void fn_8010C00C(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r23, 0x6c(r1)
    mr r29, r4
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010C00C_000003C4
    lwz r0, 0x48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010C00C_00000038
    cmpwi r0, 0x3
    bne lbl_fn_8010C00C_000003C4
lbl_fn_8010C00C_00000038:
    lwz r0, 0x648(r4)
    addi r31, r1, 0x8
    stw r0, 0x8(r1)
    li r30, 0x0
    li r27, 0x1
    li r28, 0x0
    lwz r0, 0x64c(r4)
    stw r0, 0xc(r1)
lbl_fn_8010C00C_00000058:
    lwz r26, 0x0(r31)
    cmpwi r26, 0x0
    beq lbl_fn_8010C00C_000002A8
    lwz r0, 0x274(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8010C00C_000002A8
    li r24, 0x0
    li r25, 0x0
lbl_fn_8010C00C_00000078:
    mr r3, r26
    mr r4, r24
    mr r5, r29
    bl fn_80044F54
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_00000130
    lwz r0, 0x274(r26)
    add r3, r0, r25
    stw r26, 0x50(r1)
    addi r3, r3, 0xc4
    stw r3, 0x4c(r1)
    stw r29, 0x54(r1)
    stw r27, 0x58(r1)
    stw r28, 0x5c(r1)
    lwz r0, 0x0(r3)
    cmpwi r0, 0x1d
    beq lbl_fn_8010C00C_000000CC
    cmpwi r0, 0x1f
    beq lbl_fn_8010C00C_000000CC
    cmpwi r0, 0x21
    bne lbl_fn_8010C00C_00000120
lbl_fn_8010C00C_000000CC:
    lwz r3, lbl_8087F8A0
    lwz r23, 0x48(r3)
    b lbl_fn_8010C00C_00000114
lbl_fn_8010C00C_000000D8:
    lwz r0, 0x54c(r23)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010C00C_00000110
    mr r3, r23
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_00000110
    addi r3, r23, 0x7d4
    addi r4, r1, 0x4c
    li r5, 0x1
    bl fn_80133FBC
lbl_fn_8010C00C_00000110:
    lwz r23, 0x14ac(r23)
lbl_fn_8010C00C_00000114:
    cmpwi r23, 0x0
    bne lbl_fn_8010C00C_000000D8
    b lbl_fn_8010C00C_00000130
lbl_fn_8010C00C_00000120:
    addi r3, r29, 0x7d4
    addi r4, r1, 0x4c
    li r5, 0x1
    bl fn_80133FBC
lbl_fn_8010C00C_00000130:
    addi r24, r24, 0x1
    addi r25, r25, 0x14
    cmpwi r24, 0x2
    blt lbl_fn_8010C00C_00000078
    lwz r3, 0x274(r26)
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8010C00C_000002A8
    lwz r0, 0x674(r29)
    cmpwi r0, 0x1
    blt lbl_fn_8010C00C_000002A8
    lwz r26, 0x678(r29)
    cmpwi r26, 0x0
    beq lbl_fn_8010C00C_0000016C
    b lbl_fn_8010C00C_00000170
lbl_fn_8010C00C_0000016C:
    lwz r26, 0x654(r29)
lbl_fn_8010C00C_00000170:
    cmpwi r26, 0x0
    beq lbl_fn_8010C00C_000001E0
    li r23, 0x0
    li r25, 0x0
lbl_fn_8010C00C_00000180:
    mr r3, r26
    mr r4, r23
    mr r5, r29
    bl fn_80044F54
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_000001D0
    lwz r6, 0x274(r26)
    add r3, r6, r25
    lwzu r0, 0xc4(r3)
    cmpwi r0, 0x3d
    bne lbl_fn_8010C00C_000001D0
    stw r3, 0x38(r1)
    addi r3, r29, 0x7d4
    addi r4, r1, 0x38
    li r5, 0x1
    stw r6, 0x3c(r1)
    stw r29, 0x40(r1)
    stw r27, 0x44(r1)
    stw r28, 0x48(r1)
    bl fn_80133FBC
lbl_fn_8010C00C_000001D0:
    addi r23, r23, 0x1
    addi r25, r25, 0x14
    cmpwi r23, 0x2
    blt lbl_fn_8010C00C_00000180
lbl_fn_8010C00C_000001E0:
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8010C00C_000002A8
    lwz r0, 0x678(r29)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8010C00C_0000020C
    lwz r0, 0x650(r29)
    cmplwi r0, 0x3
    blt lbl_fn_8010C00C_0000020C
    li r3, 0x1
lbl_fn_8010C00C_0000020C:
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_0000021C
    lwz r26, 0x65c(r29)
    b lbl_fn_8010C00C_00000220
lbl_fn_8010C00C_0000021C:
    li r26, 0x0
lbl_fn_8010C00C_00000220:
    cmpwi r26, 0x0
    beq lbl_fn_8010C00C_000002A8
    lwz r3, 0x274(r26)
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_000002A8
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8010C00C_000002A8
    li r23, 0x0
    li r25, 0x0
lbl_fn_8010C00C_00000248:
    mr r3, r26
    mr r4, r23
    mr r5, r29
    bl fn_80044F54
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_00000298
    lwz r6, 0x274(r26)
    add r3, r6, r25
    lwzu r0, 0xc4(r3)
    cmpwi r0, 0x3d
    bne lbl_fn_8010C00C_00000298
    stw r3, 0x24(r1)
    addi r3, r29, 0x7d4
    addi r4, r1, 0x24
    li r5, 0x1
    stw r6, 0x28(r1)
    stw r29, 0x2c(r1)
    stw r27, 0x30(r1)
    stw r28, 0x34(r1)
    bl fn_80133FBC
lbl_fn_8010C00C_00000298:
    addi r23, r23, 0x1
    addi r25, r25, 0x14
    cmpwi r23, 0x2
    blt lbl_fn_8010C00C_00000248
lbl_fn_8010C00C_000002A8:
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmplwi r30, 0x2
    blt lbl_fn_8010C00C_00000058
    li r23, 0x0
    li r30, 0x0
    mr r31, r23
    li r28, 0x1
lbl_fn_8010C00C_000002C8:
    add r3, r29, r30
    lwz r26, 0x680(r3)
    cmpwi r26, 0x0
    beq lbl_fn_8010C00C_000003B4
    lwz r0, 0x414(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8010C00C_000003B4
    li r24, 0x0
    li r27, 0x0
lbl_fn_8010C00C_000002EC:
    lwz r0, 0x414(r26)
    mr r4, r29
    add r3, r0, r27
    addi r25, r3, 0xe4
    mr r3, r25
    bl fn_80045510
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_000003A4
    lwz r0, 0x414(r26)
    stw r0, 0x14(r1)
    stw r25, 0x10(r1)
    stw r29, 0x18(r1)
    stw r28, 0x1c(r1)
    stw r31, 0x20(r1)
    lwz r0, 0x0(r25)
    cmpwi r0, 0x1d
    beq lbl_fn_8010C00C_00000340
    cmpwi r0, 0x1f
    beq lbl_fn_8010C00C_00000340
    cmpwi r0, 0x21
    bne lbl_fn_8010C00C_00000394
lbl_fn_8010C00C_00000340:
    lwz r3, lbl_8087F8A0
    lwz r25, 0x48(r3)
    b lbl_fn_8010C00C_00000388
lbl_fn_8010C00C_0000034C:
    lwz r0, 0x54c(r25)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010C00C_00000384
    mr r3, r25
    mr r4, r29
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8010C00C_00000384
    addi r3, r25, 0x7d4
    addi r4, r1, 0x10
    li r5, 0x1
    bl fn_80133FBC
lbl_fn_8010C00C_00000384:
    lwz r25, 0x14ac(r25)
lbl_fn_8010C00C_00000388:
    cmpwi r25, 0x0
    bne lbl_fn_8010C00C_0000034C
    b lbl_fn_8010C00C_000003A4
lbl_fn_8010C00C_00000394:
    addi r3, r29, 0x7d4
    addi r4, r1, 0x10
    li r5, 0x1
    bl fn_80133FBC
lbl_fn_8010C00C_000003A4:
    addi r24, r24, 0x1
    addi r27, r27, 0x14
    cmpwi r24, 0x2
    blt lbl_fn_8010C00C_000002EC
lbl_fn_8010C00C_000003B4:
    addi r23, r23, 0x1
    addi r30, r30, 0x4
    cmpwi r23, 0x4
    blt lbl_fn_8010C00C_000002C8
lbl_fn_8010C00C_000003C4:
    lmw r23, 0x6c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8010C3E4(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0x70
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    stfd f28, 0x90(r1)
    psq_st f28, 0x98(r1), 0, 0
    stfd f27, 0x80(r1)
    psq_st f27, 0x88(r1), 0, 0
    stfd f26, 0x70(r1)
    psq_st f26, 0x78(r1), 0, 0
    bl _savegpr_18
    lis r4, lbl_80735EB0@ha
    lis r0, 0x4330
    mr r21, r3
    addis r29, r3, 0x4
    lfs f30, lbl_80881478
    mr r28, r21
    lfs f28, lbl_80881494
    addis r20, r3, 0x3
    stw r0, 0x18(r1)
    li r25, 0x0
    lfs f31, lbl_808815E8
    li r31, 0x0
    stw r0, 0x20(r1)
    subi r29, r29, 0x6e20
    lfd f27, lbl_80735EB0@l(r4)
    lfs f29, lbl_808814C4
    lfs f26, lbl_8088151C
    b lbl_fn_8010C3E4_000008E8
lbl_fn_8010C3E4_00000464:
    cmpwi r25, 0x0
    blt lbl_fn_8010C3E4_00000474
    cmpw r0, r25
    bgt lbl_fn_8010C3E4_0000047C
lbl_fn_8010C3E4_00000474:
    li r24, 0x0
    b lbl_fn_8010C3E4_00000484
lbl_fn_8010C3E4_0000047C:
    addis r3, r28, 0x1
    lwz r24, -0x3410(r3)
lbl_fn_8010C3E4_00000484:
    lwz r6, 0x38(r24)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8010C3E4_000004B0
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8010C3E4_000004B0
    li r5, 0x1
lbl_fn_8010C3E4_000004B0:
    cmpwi r5, 0x0
    beq lbl_fn_8010C3E4_000004CC
    lwz r0, 0x7e0(r24)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8010C3E4_000004CC
    li r3, 0x1
lbl_fn_8010C3E4_000004CC:
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_00000500
    lwz r0, 0x55c(r24)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8010C3E4_000004F4
    lwz r0, 0x560(r24)
    cmpwi r0, 0x1c
    bne lbl_fn_8010C3E4_000004F4
    li r3, 0x1
lbl_fn_8010C3E4_000004F4:
    cmpwi r3, 0x0
    bne lbl_fn_8010C3E4_00000500
    li r4, 0x1
lbl_fn_8010C3E4_00000500:
    cmpwi r4, 0x0
    bne lbl_fn_8010C3E4_0000051C
    mr r3, r29
    li r4, 0x0
    li r5, 0x120
    bl memset
    b lbl_fn_8010C3E4_000008DC
lbl_fn_8010C3E4_0000051C:
    mr r27, r21
    mr r26, r29
    addis r19, r21, 0x3
    li r23, 0x0
    b lbl_fn_8010C3E4_000008D0
lbl_fn_8010C3E4_00000530:
    cmpwi r23, 0x0
    blt lbl_fn_8010C3E4_00000540
    cmpw r0, r23
    bgt lbl_fn_8010C3E4_00000548
lbl_fn_8010C3E4_00000540:
    li r30, 0x0
    b lbl_fn_8010C3E4_00000550
lbl_fn_8010C3E4_00000548:
    addis r3, r27, 0x1
    lwz r30, -0x3410(r3)
lbl_fn_8010C3E4_00000550:
    cmplw r24, r30
    stw r31, 0x0(r26)
    beq lbl_fn_8010C3E4_000008C4
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_8010C3E4_000008C4
    lwz r0, 0x54c(r30)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_8010C3E4_000008C4
    mr r3, r24
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_000008C4
    mr r3, r24
    mr r4, r30
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_000008C4
    lwz r6, 0x38(r30)
    li r22, 0x0
    li r4, 0x0
    li r3, 0x0
    rlwinm r0, r6, 0, 29, 29
    li r5, 0x0
    cmplwi r0, 0x4
    beq lbl_fn_8010C3E4_000005DC
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_8010C3E4_000005DC
    li r5, 0x1
lbl_fn_8010C3E4_000005DC:
    cmpwi r5, 0x0
    beq lbl_fn_8010C3E4_000005F8
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_8010C3E4_000005F8
    li r3, 0x1
lbl_fn_8010C3E4_000005F8:
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_0000062C
    lwz r0, 0x55c(r30)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_8010C3E4_00000620
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1c
    bne lbl_fn_8010C3E4_00000620
    li r3, 0x1
lbl_fn_8010C3E4_00000620:
    cmpwi r3, 0x0
    bne lbl_fn_8010C3E4_0000062C
    li r4, 0x1
lbl_fn_8010C3E4_0000062C:
    cmpwi r4, 0x0
    beq lbl_fn_8010C3E4_00000674
    lwz r0, 0x940(r30)
    cmpwi r0, 0x0
    ble lbl_fn_8010C3E4_0000065C
    xoris r0, r0, 0x8000
    stw r0, 0x1c(r1)
    lfs f0, 0x7d8(r30)
    lfd f1, 0x18(r1)
    fsubs f1, f1, f27
    fdivs f0, f0, f1
    b lbl_fn_8010C3E4_00000660
lbl_fn_8010C3E4_0000065C:
    lfs f0, lbl_80881478
lbl_fn_8010C3E4_00000660:
    fsubs f0, f28, f0
    fmuls f0, f29, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r22, 0x2c(r1)
lbl_fn_8010C3E4_00000674:
    lfs f1, 0x530(r30)
    addi r3, r1, 0x8
    lfs f0, 0x530(r24)
    lfs f3, 0x52c(r30)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r24)
    lfs f1, 0x528(r30)
    lfs f0, 0x528(r24)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f4, 0x10(r1)
    bl fn_805F9940
    fsubs f0, f31, f1
    fdivs f0, f0, f31
    fcmpo cr0, f0, f30
    ble lbl_fn_8010C3E4_000006C0
    b lbl_fn_8010C3E4_000006C4
lbl_fn_8010C3E4_000006C0:
    fmr f0, f30
lbl_fn_8010C3E4_000006C4:
    fcmpo cr0, f0, f28
    bge lbl_fn_8010C3E4_000006E8
    fsubs f0, f31, f1
    fdivs f0, f0, f31
    fcmpo cr0, f0, f30
    ble lbl_fn_8010C3E4_000006E0
    b lbl_fn_8010C3E4_000006EC
lbl_fn_8010C3E4_000006E0:
    fmr f0, f30
    b lbl_fn_8010C3E4_000006EC
lbl_fn_8010C3E4_000006E8:
    fmr f0, f28
lbl_fn_8010C3E4_000006EC:
    fmuls f0, f29, f0
    lwz r3, 0x5c(r24)
    cmpwi r3, 0x0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    add r22, r22, r0
    beq lbl_fn_8010C3E4_00000804
    lwz r4, 0x5c(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8010C3E4_00000804
    lwz r0, 0x11c(r3)
    lwz r3, 0x11c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8010C3E4_00000730
    cmpwi r0, 0x2
    bne lbl_fn_8010C3E4_000007E4
lbl_fn_8010C3E4_00000730:
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_00000750
    cmpwi r3, 0x2
    beq lbl_fn_8010C3E4_00000750
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8010C3E4_00000750
    addi r22, r22, 0xc8
lbl_fn_8010C3E4_00000750:
    lwz r3, 0x102c(r30)
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    fcmpo cr0, f0, f30
    ble lbl_fn_8010C3E4_00000784
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    b lbl_fn_8010C3E4_00000788
lbl_fn_8010C3E4_00000784:
    fmr f0, f30
lbl_fn_8010C3E4_00000788:
    fcmpo cr0, f0, f28
    bge lbl_fn_8010C3E4_000007C8
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    lfd f0, 0x20(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    fcmpo cr0, f0, f30
    ble lbl_fn_8010C3E4_000007C0
    stw r0, 0x1c(r1)
    lfd f0, 0x18(r1)
    fsubs f0, f0, f27
    fdivs f0, f0, f26
    b lbl_fn_8010C3E4_000007CC
lbl_fn_8010C3E4_000007C0:
    fmr f0, f30
    b lbl_fn_8010C3E4_000007CC
lbl_fn_8010C3E4_000007C8:
    fmr f0, f28
lbl_fn_8010C3E4_000007CC:
    fmuls f0, f29, f0
    fctiwz f0, f0
    stfd f0, 0x28(r1)
    lwz r0, 0x2c(r1)
    add r22, r22, r0
    b lbl_fn_8010C3E4_00000804
lbl_fn_8010C3E4_000007E4:
    cmpwi r3, 0x0
    beq lbl_fn_8010C3E4_00000800
    cmpwi r3, 0x2
    beq lbl_fn_8010C3E4_00000800
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010C3E4_00000804
lbl_fn_8010C3E4_00000800:
    addi r22, r22, 0xc8
lbl_fn_8010C3E4_00000804:
    lwz r0, 0x48(r24)
    cmpwi r0, 0x3
    bne lbl_fn_8010C3E4_000008A8
    lwz r0, 0x48(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8010C3E4_000008A8
    lwz r3, 0x50(r24)
    bl fn_80219558
    mr r18, r3
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r18, 0x1
    beq lbl_fn_8010C3E4_00000844
    subi r0, r18, 0x9
    cmplwi r0, 0x1
    bgt lbl_fn_8010C3E4_00000854
lbl_fn_8010C3E4_00000844:
    cmpwi r3, 0x0
    bne lbl_fn_8010C3E4_000008A8
    addi r22, r22, 0xc8
    b lbl_fn_8010C3E4_000008A8
lbl_fn_8010C3E4_00000854:
    cmpwi r18, 0x6
    bne lbl_fn_8010C3E4_00000894
    cmpwi r3, 0x1
    beq lbl_fn_8010C3E4_0000087C
    cmpwi r3, 0x9
    beq lbl_fn_8010C3E4_0000087C
    cmpwi r3, 0xa
    beq lbl_fn_8010C3E4_0000087C
    cmpwi r3, 0x5
    bne lbl_fn_8010C3E4_00000884
lbl_fn_8010C3E4_0000087C:
    addi r22, r22, 0x64
    b lbl_fn_8010C3E4_000008A8
lbl_fn_8010C3E4_00000884:
    cmpwi r3, 0x3
    bne lbl_fn_8010C3E4_000008A8
    addi r22, r22, 0xc8
    b lbl_fn_8010C3E4_000008A8
lbl_fn_8010C3E4_00000894:
    cmpwi r18, 0x3
    bne lbl_fn_8010C3E4_000008A8
    cmpwi r3, 0x6
    bne lbl_fn_8010C3E4_000008A8
    addi r22, r22, 0xc8
lbl_fn_8010C3E4_000008A8:
    cmpwi r22, 0x0
    bne lbl_fn_8010C3E4_000008C0
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010C3E4_000008C0
    li r22, 0x1
lbl_fn_8010C3E4_000008C0:
    stw r22, 0x0(r26)
lbl_fn_8010C3E4_000008C4:
    addi r27, r27, 0x934
    addi r26, r26, 0x4
    addi r23, r23, 0x1
lbl_fn_8010C3E4_000008D0:
    lwz r0, 0x63b0(r19)
    cmpw r23, r0
    blt lbl_fn_8010C3E4_00000530
lbl_fn_8010C3E4_000008DC:
    addi r29, r29, 0x120
    addi r28, r28, 0x934
    addi r25, r25, 0x1
lbl_fn_8010C3E4_000008E8:
    lwz r0, 0x63b0(r20)
    cmpw r25, r0
    blt lbl_fn_8010C3E4_00000464
    addi r11, r1, 0x70
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    psq_l f28, 0x98(r1), 0, 0
    lfd f28, 0x90(r1)
    psq_l f27, 0x88(r1), 0, 0
    lfd f27, 0x80(r1)
    psq_l f26, 0x78(r1), 0, 0
    lfd f26, 0x70(r1)
    bl _restgpr_18
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_8010C948(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_8010C948_0000094C
    li r6, -0x1
    b lbl_fn_8010C948_0000098C
lbl_fn_8010C948_0000094C:
    addis r5, r3, 0x3
    mr r7, r3
    lwz r0, 0x63b0(r5)
    li r6, 0x0
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010C948_00000988
lbl_fn_8010C948_00000968:
    addis r5, r7, 0x1
    lwz r0, -0x3410(r5)
    cmplw r0, r4
    bne lbl_fn_8010C948_0000097C
    b lbl_fn_8010C948_0000098C
lbl_fn_8010C948_0000097C:
    addi r7, r7, 0x934
    addi r6, r6, 0x1
    bdnz lbl_fn_8010C948_00000968
lbl_fn_8010C948_00000988:
    li r6, -0x1
lbl_fn_8010C948_0000098C:
    cmpwi r6, 0x0
    bge lbl_fn_8010C948_0000099C
    li r3, 0x0
    blr
lbl_fn_8010C948_0000099C:
    mulli r0, r6, 0x120
    addis r4, r3, 0x3
    addis r5, r3, 0x4
    lwz r6, 0x63b0(r4)
    li r7, 0x0
    add r4, r5, r0
    subi r4, r4, 0x6e20
    li r5, -0x1
    li r8, 0x0
    mtctr r6
    cmpwi r6, 0x0
    ble lbl_fn_8010C948_000009EC
lbl_fn_8010C948_000009CC:
    lwz r0, 0x0(r4)
    cmpw r7, r0
    bge lbl_fn_8010C948_000009E0
    mr r7, r0
    mr r5, r8
lbl_fn_8010C948_000009E0:
    addi r4, r4, 0x4
    addi r8, r8, 0x1
    bdnz lbl_fn_8010C948_000009CC
lbl_fn_8010C948_000009EC:
    cmpwi r5, 0x0
    blt lbl_fn_8010C948_000009FC
    cmpw r6, r5
    bgt lbl_fn_8010C948_00000A04
lbl_fn_8010C948_000009FC:
    li r3, 0x0
    blr
lbl_fn_8010C948_00000A04:
    mulli r0, r5, 0x934
    addis r3, r3, 0x1
    add r3, r3, r0
    lwz r3, -0x3410(r3)
    blr
}

asm void fn_8010CA24(void)
{
    nofralloc
    lfs f1, lbl_808815EC
    blr
}

asm void fn_8010CA2C(void)
{
    nofralloc
    lfs f1, lbl_808814D0
    blr
}

asm void fn_8010CA34(void)
{
    nofralloc
    lfs f1, lbl_80881490
    blr
}

asm void fn_8010CA3C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    addi r3, r4, 0x7d4
    li r5, -0x1
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    fmr f31, f1
    stw r31, 0x1c(r1)
    mr r31, r4
    li r4, 0x1b
    bl fn_80134168
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r3, 0xc(r1)
    lis r4, lbl_80735EB0@ha
    lfd f2, lbl_80735EB0@l(r4)
    addi r3, r31, 0x7d4
    stw r0, 0x8(r1)
    li r4, 0x2e
    lfs f0, lbl_808814C4
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f0, f1, f0
    fadds f31, f31, f0
    bl fn_80134134
    cmpwi r3, 0x0
    beq lbl_fn_8010CA3C_00000AA8
    lfs f0, lbl_808815C0
    fmuls f31, f31, f0
lbl_fn_8010CA3C_00000AA8:
    lwz r0, 0x7e8(r31)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_8010CA3C_00000ADC
    lfs f0, lbl_80881490
    lwz r0, 0x48(r31)
    fmuls f31, f31, f0
    cmpwi r0, 0x2
    bne lbl_fn_8010CA3C_00000ADC
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8010CA3C_00000ADC
    fmuls f31, f31, f0
lbl_fn_8010CA3C_00000ADC:
    lwz r0, 0x48(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8010CA3C_00000B00
    lfs f0, lbl_808815F0
    fcmpo cr0, f0, f31
    bge lbl_fn_8010CA3C_00000AF8
    b lbl_fn_8010CA3C_00000AFC
lbl_fn_8010CA3C_00000AF8:
    fmr f0, f31
lbl_fn_8010CA3C_00000AFC:
    fmr f31, f0
lbl_fn_8010CA3C_00000B00:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8010CB2C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, lbl_80735EB0@ha
    lfs f2, lbl_808815AC
    stw r0, 0x34(r1)
    lis r0, 0x4330
    lfd f4, lbl_80735EB0@l(r5)
    stfd f31, 0x20(r1)
    lfs f0, lbl_80881494
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    lwz r3, 0x950(r4)
    stw r0, 0x8(r1)
    xoris r3, r3, 0x8000
    lwz r6, 0x48(r4)
    stw r3, 0xc(r1)
    cmpwi r6, 0x0
    lfd f3, 0x8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fadds f0, f0, f2
    fmuls f31, f1, f0
    beq lbl_fn_8010CB2C_00000B8C
    cmpwi r6, 0x3
    bne lbl_fn_8010CB2C_00000BB4
lbl_fn_8010CB2C_00000B8C:
    mr r3, r30
    li r4, 0x4fbf
    li r5, 0x0
    bl fn_801789D8
    cmpwi r3, 0x0
    beq lbl_fn_8010CB2C_00000BAC
    lfs f0, lbl_80881510
    b lbl_fn_8010CB2C_00000BB0
lbl_fn_8010CB2C_00000BAC:
    lfs f0, lbl_808815F4
lbl_fn_8010CB2C_00000BB0:
    fmuls f31, f31, f0
lbl_fn_8010CB2C_00000BB4:
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    fmuls f31, f31, f1
    addi r3, r30, 0x7d4
    li r4, 0x2b
    li r5, -0x1
    bl fn_80134168
    xoris r3, r3, 0x8000
    lis r0, 0x4330
    stw r0, 0x8(r1)
    lis r4, lbl_80735EB0@ha
    lfd f2, lbl_80735EB0@l(r4)
    stw r3, 0xc(r1)
    lwz r0, 0x7e8(r30)
    lfd f1, 0x8(r1)
    rlwinm r0, r0, 0, 18, 18
    lfs f0, lbl_808814C4
    fsubs f1, f1, f2
    cmplwi r0, 0x2000
    fmuls f1, f31, f1
    fdivs f0, f1, f0
    fadds f31, f31, f0
    bne lbl_fn_8010CB2C_00000C18
    lfs f0, lbl_808815EC
    fmuls f31, f31, f0
lbl_fn_8010CB2C_00000C18:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8010CB2C_00000C2C
    cmpwi r0, 0x3
    bne lbl_fn_8010CB2C_00000CA0
lbl_fn_8010CB2C_00000C2C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8010CB2C_00000C44
    bl fn_803761BC
    cmpwi r3, 0x0
    beq lbl_fn_8010CB2C_00000C78
lbl_fn_8010CB2C_00000C44:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8010CB2C_00000C80
    lwz r31, 0x48(r3)
    cmpwi r31, 0x0
    beq lbl_fn_8010CB2C_00000C80
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 3
    bne lbl_fn_8010CB2C_00000C78
    li r4, 0x0
    bl fn_8054A340
    cmplw r31, r3
    beq lbl_fn_8010CB2C_00000C80
lbl_fn_8010CB2C_00000C78:
    lfs f0, lbl_80881510
    fmuls f31, f31, f0
lbl_fn_8010CB2C_00000C80:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010CB2C_00000CA0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8010CB2C_00000CA0
    lfs f0, lbl_808815F4
    fmuls f31, f31, f0
lbl_fn_8010CB2C_00000CA0:
    fmr f1, f31
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8010CCD0(void)
{
    nofralloc
    lfs f1, lbl_8088158C
    blr
}

asm void fn_8010CCD8(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8010CCD8_00000CE0
    lwz r0, 0x48(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8010CCD8_00000CE8
lbl_fn_8010CCD8_00000CE0:
    lfs f1, lbl_80881478
    blr
lbl_fn_8010CCD8_00000CE8:
    addis r3, r3, 0x4
    lwz r4, lbl_8087F8A0
    lfs f1, lbl_80881510
    lfs f0, -0x75b8(r3)
    cmpwi r4, 0x0
    fmuls f1, f1, f0
    beq lbl_fn_8010CCD8_00000D0C
    lwz r3, 0x48(r4)
    b lbl_fn_8010CCD8_00000D10
lbl_fn_8010CCD8_00000D0C:
    li r3, 0x0
lbl_fn_8010CCD8_00000D10:
    cmpwi r3, 0x0
    beqlr
    lwz r0, 0x12a4(r3)
    extrwi. r0, r0, 1, 3
    beqlr
    lfs f0, lbl_80881490
    fmuls f1, f1, f0
    blr
}

asm void fn_8010CD3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r6
    ble lbl_fn_8010CD3C_00000D70
    subi r0, r4, 0x7
    cmplwi r0, 0x1
    ble lbl_fn_8010CD3C_00000E48
    cmpwi r4, 0x4
    beq lbl_fn_8010CD3C_00000DCC
    cmpwi r4, 0x5
    beq lbl_fn_8010CD3C_00000EB0
    b lbl_fn_8010CD3C_00000F04
lbl_fn_8010CD3C_00000D70:
    cmpwi r5, 0x0
    beq lbl_fn_8010CD3C_00000F04
    lwz r0, 0x55c(r5)
    cmpwi r0, 0x6
    beq lbl_fn_8010CD3C_00000F04
    addi r3, r5, 0x7d4
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8010CD3C_00000F04
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0xf
    bge lbl_fn_8010CD3C_00000F04
    li r3, 0x1
    b lbl_fn_8010CD3C_00000F08
lbl_fn_8010CD3C_00000DCC:
    cmpwi r5, 0x0
    beq lbl_fn_8010CD3C_00000F04
    cmpwi r6, 0x0
    beq lbl_fn_8010CD3C_00000F04
    addi r3, r5, 0x7d4
    li r4, 0x4
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8010CD3C_00000F04
    lwz r3, 0x5c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8010CD3C_00000E08
    lwz r0, 0xd0(r3)
    b lbl_fn_8010CD3C_00000E0C
lbl_fn_8010CD3C_00000E08:
    li r0, 0x0
lbl_fn_8010CD3C_00000E0C:
    cmpwi r0, 0x0
    ble lbl_fn_8010CD3C_00000F04
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0x5
    bge lbl_fn_8010CD3C_00000F04
    li r3, 0x1
    b lbl_fn_8010CD3C_00000F08
lbl_fn_8010CD3C_00000E48:
    cmpwi r5, 0x0
    beq lbl_fn_8010CD3C_00000F04
    lwz r3, 0x55c(r5)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_8010CD3C_00000F04
    lwz r3, 0x5c(r5)
    lwz r0, 0x11c(r3)
    cmplwi r0, 0x2
    bgt lbl_fn_8010CD3C_00000F04
    lwz r0, 0x12a8(r5)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_8010CD3C_00000EA8
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0xf
    bge lbl_fn_8010CD3C_00000F04
lbl_fn_8010CD3C_00000EA8:
    li r3, 0x1
    b lbl_fn_8010CD3C_00000F08
lbl_fn_8010CD3C_00000EB0:
    cmpwi r5, 0x0
    beq lbl_fn_8010CD3C_00000F04
    addi r3, r5, 0x7d4
    li r4, 0x5
    li r5, 0x0
    bl fn_801346C8
    cmpwi r3, 0x0
    beq lbl_fn_8010CD3C_00000F04
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpwi r0, 0x1e
    bge lbl_fn_8010CD3C_00000F04
    li r3, 0x1
    b lbl_fn_8010CD3C_00000F08
lbl_fn_8010CD3C_00000F04:
    li r3, 0x0
lbl_fn_8010CD3C_00000F08:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8010CF28(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x2a0
    bl _savegpr_27
    subi r0, r4, 0x7
    mr r30, r3
    cmplwi r0, 0x1
    mr r27, r4
    mr r31, r5
    ble lbl_fn_8010CF28_00001170
    subi r0, r4, 0x2e
    cmplwi r0, 0x1
    ble lbl_fn_8010CF28_00001170
    cmpwi r4, 0x4
    beq lbl_fn_8010CF28_00000F68
    cmpwi r4, 0x5
    beq lbl_fn_8010CF28_000011A0
    b lbl_fn_8010CF28_000012FC
lbl_fn_8010CF28_00000F68:
    cmpwi r5, 0x0
    beq lbl_fn_8010CF28_000012FC
    cmpwi r6, 0x0
    beq lbl_fn_8010CF28_000012FC
    lwz r4, 0x5c(r6)
    cmpwi r4, 0x0
    beq lbl_fn_8010CF28_00000F8C
    lwz r29, 0xd0(r4)
    b lbl_fn_8010CF28_00000F90
lbl_fn_8010CF28_00000F8C:
    li r29, 0x0
lbl_fn_8010CF28_00000F90:
    cmpwi r29, 0x0
    ble lbl_fn_8010CF28_000012FC
    cmpwi r6, 0x0
    bne lbl_fn_8010CF28_00000FA8
    li r5, -0x1
    b lbl_fn_8010CF28_00000FE4
lbl_fn_8010CF28_00000FA8:
    addis r4, r3, 0x3
    li r5, 0x0
    lwz r0, 0x63b0(r4)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8010CF28_00000FE0
lbl_fn_8010CF28_00000FC0:
    addis r4, r30, 0x1
    lwz r0, -0x3410(r4)
    cmplw r0, r6
    bne lbl_fn_8010CF28_00000FD4
    b lbl_fn_8010CF28_00000FE4
lbl_fn_8010CF28_00000FD4:
    addi r30, r30, 0x934
    addi r5, r5, 0x1
    bdnz lbl_fn_8010CF28_00000FC0
lbl_fn_8010CF28_00000FE0:
    li r5, -0x1
lbl_fn_8010CF28_00000FE4:
    cmpwi r5, 0x0
    blt lbl_fn_8010CF28_00001000
    mulli r0, r5, 0x934
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r30, r3, 0x3410
    b lbl_fn_8010CF28_00001004
lbl_fn_8010CF28_00001000:
    li r30, 0x0
lbl_fn_8010CF28_00001004:
    cmpwi r30, 0x0
    beq lbl_fn_8010CF28_000012FC
    lbz r0, 0x92e(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8010CF28_000012FC
    mr r3, r29
    li r4, 0x1
    bl fn_8021E48C
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r6, r3
    mr r4, r29
    stw r0, 0x18(r1)
    addi r9, r1, 0x1c
    addi r10, r1, 0x18
    li r5, 0x0
    stw r0, 0x8(r1)
    li r7, 0x0
    li r8, 0x0
    lwz r3, lbl_8087F4F0
    bl fn_80444020
    cmpwi r3, 0x0
    beq lbl_fn_8010CF28_000012FC
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8010CF28_000012FC
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    ble lbl_fn_8010CF28_000012FC
    li r0, 0x1
    stb r0, 0x92e(r30)
    lwz r3, 0x1c(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r6, r3
    beq lbl_fn_8010CF28_000010CC
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x88
    lwz r5, 0x60(r31)
    lwz r4, 0x7c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8010CF28_000010B0
    b lbl_fn_8010CF28_000010B4
lbl_fn_8010CF28_000010B0:
    la r4, lbl_808813D0
lbl_fn_8010CF28_000010B4:
    lwz r5, 0x4(r5)
    lwz r6, 0x8(r6)
    lwz r7, 0x18(r1)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_8010CF28_000010F4
lbl_fn_8010CF28_000010CC:
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0x88
    lwz r4, 0xbc(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8010CF28_000010E4
    b lbl_fn_8010CF28_000010E8
lbl_fn_8010CF28_000010E4:
    la r4, lbl_808813D0
lbl_fn_8010CF28_000010E8:
    lwz r5, 0x1c(r1)
    crclr 6
    bl fn_800DD3FC
lbl_fn_8010CF28_000010F4:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x6c(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8010CF28_00001124
    lwz r3, lbl_8087F528
    cmpwi r3, 0x0
    beq lbl_fn_8010CF28_00001124
    addi r4, r1, 0x88
    li r5, -0x3301
    li r6, 0x0
    li r7, 0x0
    bl fn_8047961C
lbl_fn_8010CF28_00001124:
    lis r4, lbl_80735DD0@ha
    lfs f1, lbl_80881494
    addi r4, r4, lbl_80735DD0@l
    addi r3, r1, 0x14
    lwz r4, 0x54(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, lbl_8087F490
    cmpwi r3, 0x0
    beq lbl_fn_8010CF28_000012FC
    lwz r4, 0x1c(r1)
    li r6, 0x1
    lwz r5, 0x18(r1)
    bl fn_803E5E64
    b lbl_fn_8010CF28_000012FC
lbl_fn_8010CF28_00001170:
    cmpwi r5, 0x0
    beq lbl_fn_8010CF28_000012FC
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8010CF28_000012FC
    mr r3, r30
    mr r5, r31
    mr r6, r27
    li r4, 0xe
    li r7, 0x0
    bl fn_801092C8
    b lbl_fn_8010CF28_000012FC
lbl_fn_8010CF28_000011A0:
    cmpwi r5, 0x0
    beq lbl_fn_8010CF28_000012FC
    lfs f1, lbl_80881478
    addi r3, r1, 0x58
    lfs f0, lbl_80881494
    li r4, 0x79
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f0, 0x38(r1)
    lfs f1, 0x538(r5)
    bl fn_805F8E70
    addi r4, r1, 0x30
    addi r3, r1, 0x58
    mr r5, r4
    bl fn_805F93C0
    lfs f0, 0x38(r1)
    mr r3, r31
    lfs f1, 0x34(r1)
    addi r4, r1, 0x48
    fneg f3, f0
    lfs f0, 0x30(r1)
    fneg f4, f1
    lfs f2, lbl_80881544
    fneg f0, f0
    stfs f3, 0x44(r1)
    frsp f3, f3
    stfs f0, 0x3c(r1)
    frsp f1, f4
    frsp f0, f0
    stfs f4, 0x40(r1)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f3, 0x50(r1)
    stfs f0, 0x48(r1)
    stfs f1, 0x4c(r1)
    bl fn_8015E1B8
    lfs f0, lbl_80881494
    addi r28, r31, 0xb0
    stfs f0, 0x20(r1)
    li r3, 0x2331
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl fn_800EFBC4
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8010CF28_000012A8
    li r3, 0x0
    li r4, 0x0
    bl fn_80232B7C
    li r0, -0x1
    stw r0, 0x8(r1)
    li r0, 0x1
    lis r7, lbl_807C7030@ha
    stw r0, 0xc(r1)
    addi r7, r7, lbl_807C7030@l
    lfs f1, lbl_80881494
    mr r4, r29
    lwz r3, lbl_8087F3C0
    mr r5, r28
    mr r8, r7
    addi r9, r1, 0x20
    li r6, 0x0
    li r10, -0x1
    bl fn_8023A8B4
lbl_fn_8010CF28_000012A8:
    addi r28, r31, 0x528
    li r3, 0x2331
    bl fn_800EFE3C
    cmpwi r3, 0x0
    beq lbl_fn_8010CF28_000012E4
    lfs f1, lbl_80881494
    mr r4, r3
    mr r5, r28
    addi r3, r1, 0x10
    li r6, 0x0
    li r7, -0x1
    bl fn_800C344C
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8010CF28_000012E4:
    mr r3, r30
    mr r5, r31
    mr r6, r27
    li r4, 0xe
    li r7, 0x0
    bl fn_801092C8
lbl_fn_8010CF28_000012FC:
    addi r11, r1, 0x2a0
    bl _restgpr_27
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_8010D320(void)
{
    nofralloc
    stwu r1, -0x1d0(r1)
    mflr r0
    addis r5, r3, 0x1
    stw r0, 0x1d4(r1)
    addi r6, r1, 0x80
    stfd f31, 0x1c0(r1)
    psq_st f31, 0x1c8(r1), 0, 0
    stfd f30, 0x1b0(r1)
    psq_st f30, 0x1b8(r1), 0, 0
    stfd f29, 0x1a0(r1)
    psq_st f29, 0x1a8(r1), 0, 0
    stfd f28, 0x190(r1)
    psq_st f28, 0x198(r1), 0, 0
    stfd f27, 0x180(r1)
    psq_st f27, 0x188(r1), 0, 0
    stfd f26, 0x170(r1)
    psq_st f26, 0x178(r1), 0, 0
    stw r31, 0x16c(r1)
    stw r30, 0x168(r1)
    li r30, 0x1
    stw r29, 0x164(r1)
    mr r29, r4
    mr r4, r6
    stw r28, 0x160(r1)
    mr r28, r3
    mr r3, r6
    stw r30, -0x34a8(r5)
    addi r5, r1, 0x50
    lwz r31, lbl_8087EFB4
    lfs f7, 0x120(r31)
    lfs f0, 0x114(r31)
    lfs f9, 0x11c(r31)
    fsubs f2, f7, f0
    lfs f8, 0x110(r31)
    lfs f7, 0x118(r31)
    lfs f0, 0x10c(r31)
    fsubs f8, f9, f8
    stfs f2, 0x58(r1)
    fsubs f0, f7, f0
    stfs f8, 0x54(r1)
    stfs f0, 0x50(r1)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x88(r1)
    bl fn_805F98D0
    lfs f7, 0x0(r29)
    li r0, 0x0
    lfs f0, 0x10c(r31)
    lfs f10, 0x8(r29)
    fsubs f11, f7, f0
    lfs f9, 0x114(r31)
    lfs f0, lbl_80881478
    lfs f8, 0x4(r29)
    fsubs f9, f10, f9
    lfs f7, 0x110(r31)
    fcmpu cr0, f0, f11
    fsubs f7, f8, f7
    stfs f11, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f9, 0x7c(r1)
    bne lbl_fn_8010D320_0000141C
    fcmpu cr0, f0, f7
    bne lbl_fn_8010D320_0000141C
    fcmpu cr0, f0, f9
    bne lbl_fn_8010D320_0000141C
    mr r0, r30
lbl_fn_8010D320_0000141C:
    cmpwi r0, 0x0
    beq lbl_fn_8010D320_00001438
    lfs f7, lbl_80881478
    lfs f0, lbl_80881494
    stfs f7, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f0, 0x7c(r1)
lbl_fn_8010D320_00001438:
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    lfs f2, 0x88(r1)
    addi r3, r1, 0x80
    lfs f0, lbl_808814D4
    addi r30, r1, 0x68
    fabs f7, f2
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    frsp f7, f7
    stfs f2, 0x70(r1)
    fcmpo cr0, f7, f0
    bge lbl_fn_8010D320_00001494
    lfs f7, 0x68(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f7, f0
    ble lbl_fn_8010D320_00001488
    lfs f0, lbl_808814D8
    b lbl_fn_8010D320_0000148C
lbl_fn_8010D320_00001488:
    lfs f0, lbl_808814DC
lbl_fn_8010D320_0000148C:
    stfs f0, 0x48(r1)
    b lbl_fn_8010D320_000014A8
lbl_fn_8010D320_00001494:
    frsp f2, f2
    lfs f1, 0x68(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8010D320_000014A8:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x90
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f7, lbl_80881478
    addi r4, r1, 0x38
    lfs f26, 0x98(r1)
    mr r5, r4
    lfs f27, 0x94(r1)
    addi r3, r1, 0xc0
    lfs f28, 0x90(r1)
    lfs f29, 0xa8(r1)
    lfs f30, 0xa4(r1)
    lfs f31, 0xa0(r1)
    lfs f13, 0xb8(r1)
    lfs f12, 0xb4(r1)
    lfs f11, 0xb0(r1)
    lfs f10, 0xbc(r1)
    lfs f9, 0xac(r1)
    lfs f8, 0x9c(r1)
    lfs f0, lbl_80881494
    psq_l f1, 0x0(r30), 0, 0
    lfs f2, 0x70(r1)
    stfs f7, 0xf0(r1)
    stfs f7, 0xf4(r1)
    stfs f7, 0xf8(r1)
    stfs f0, 0xfc(r1)
    stfs f28, 0x8(r1)
    stfs f27, 0xc(r1)
    stfs f26, 0x10(r1)
    stfs f28, 0xc0(r1)
    stfs f27, 0xc4(r1)
    stfs f26, 0xc8(r1)
    stfs f31, 0x14(r1)
    stfs f30, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f31, 0xd0(r1)
    stfs f30, 0xd4(r1)
    stfs f29, 0xd8(r1)
    stfs f11, 0x20(r1)
    stfs f12, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f11, 0xe0(r1)
    stfs f12, 0xe4(r1)
    stfs f13, 0xe8(r1)
    stfs f8, 0x2c(r1)
    stfs f9, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f8, 0xcc(r1)
    stfs f9, 0xdc(r1)
    stfs f10, 0xec(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl fn_805F9750
    lfs f2, 0x40(r1)
    lfs f0, lbl_808814D4
    fabs f7, f2
    frsp f7, f7
    fcmpo cr0, f7, f0
    bge lbl_fn_8010D320_000015C4
    lfs f7, 0x3c(r1)
    lfs f0, lbl_80881478
    fcmpo cr0, f7, f0
    ble lbl_fn_8010D320_000015B4
    lfs f0, lbl_808814D8
    b lbl_fn_8010D320_000015B8
lbl_fn_8010D320_000015B4:
    lfs f0, lbl_808814DC
lbl_fn_8010D320_000015B8:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8010D320_000015D8
lbl_fn_8010D320_000015C4:
    lfs f1, 0x3c(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8010D320_000015D8:
    addi r3, r1, 0x44
    lfs f2, lbl_80881478
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x130
    psq_st f1, 0x0(r30), 0, 0
    li r4, 0x79
    lfs f1, 0x6c(r1)
    stfs f2, 0x4c(r1)
    stfs f2, 0x70(r1)
    bl fn_805F8E70
    lfs f7, 0x7c(r1)
    addi r6, r1, 0x130
    lfs f0, 0x88(r1)
    addi r31, r1, 0x100
    lfs f9, 0x78(r1)
    addi r5, r1, 0x5c
    fsubs f10, f7, f0
    lfs f8, 0x84(r1)
    lfs f7, 0x74(r1)
    addi r30, r1, 0x74
    lfs f0, 0x80(r1)
    fsubs f8, f9, f8
    fsubs f0, f7, f0
    stfs f8, 0x60(r1)
    fmr f2, f10
    psq_l f3, 0x10(r6), 0, 0
    stfs f0, 0x5c(r1)
    mr r3, r31
    psq_l f1, 0x0(r5), 0, 0
    mr r4, r31
    psq_l f4, 0x18(r6), 0, 0
    psq_l f5, 0x20(r6), 0, 0
    stfs f2, 0x7c(r1)
    psq_l f2, 0x8(r6), 0, 0
    psq_l f6, 0x28(r6), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f10, 0x64(r1)
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
    bl fn_805F8CA0
    mr r3, r31
    mr r4, r30
    mr r5, r30
    bl fn_805F93C0
    lfs f7, lbl_80881478
    li r0, 0x0
    lfs f0, 0x74(r1)
    stfs f7, 0x7c(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_8010D320_000016CC
    lfs f0, 0x78(r1)
    fcmpu cr0, f7, f0
    bne lbl_fn_8010D320_000016CC
    fcmpu cr0, f7, f7
    bne lbl_fn_8010D320_000016CC
    li r0, 0x1
lbl_fn_8010D320_000016CC:
    cmpwi r0, 0x0
    beq lbl_fn_8010D320_000016E8
    lfs f7, lbl_80881478
    lfs f0, lbl_80881494
    stfs f7, 0x74(r1)
    stfs f0, 0x78(r1)
    stfs f7, 0x7c(r1)
lbl_fn_8010D320_000016E8:
    addi r3, r1, 0x74
    mr r4, r3
    bl fn_805F98D0
    lfs f0, 0x74(r1)
    addis r3, r28, 0x1
    lfs f8, 0x78(r1)
    fneg f7, f0
    lfs f0, lbl_80881478
    stfs f0, -0x348c(r3)
    stfs f7, -0x3490(r3)
    stfs f8, -0x3488(r3)
    psq_l f31, 0x1c8(r1), 0, 0
    lfd f31, 0x1c0(r1)
    psq_l f30, 0x1b8(r1), 0, 0
    lfd f30, 0x1b0(r1)
    psq_l f29, 0x1a8(r1), 0, 0
    lfd f29, 0x1a0(r1)
    psq_l f28, 0x198(r1), 0, 0
    lfd f28, 0x190(r1)
    psq_l f27, 0x188(r1), 0, 0
    lfd f27, 0x180(r1)
    psq_l f26, 0x178(r1), 0, 0
    lfd f26, 0x170(r1)
    lwz r31, 0x16c(r1)
    lwz r30, 0x168(r1)
    lwz r29, 0x164(r1)
    lwz r28, 0x160(r1)
    lwz r0, 0x1d4(r1)
    mtlr r0
    addi r1, r1, 0x1d0
    blr
}
