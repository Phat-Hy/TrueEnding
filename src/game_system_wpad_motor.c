#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetTime(void);
extern void __div2i(void);
extern void _restgpr_24(void);
extern void _savegpr_24(void);
extern void dtor_80084684(void);
extern void fn_80017060(void);
extern void fn_80047B54(void);
extern void fn_800697D8(void);
extern void fn_8006A250(void);
extern void fn_8006A900(void);
extern void fn_8006AA20(void);
extern void fn_8006D0C8(void);
extern void fn_8007708C(void);
extern void fn_80084C24(void);
extern void fn_8009246C(void);
extern void fn_800A555C(void);
extern void fn_800AFEBC(void);
extern void fn_800C7F08(void);
extern void fn_800CF45C(void);
extern void fn_800D0240(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D2494(void);
extern void fn_800D3FA4(void);
extern void fn_800D8448(void);
extern void fn_800D8458(void);
extern void fn_800E3F5C(void);
extern void fn_800EBA5C(void);
extern void fn_800EBD00(void);
extern void fn_800EBE84(void);
extern void fn_800EFA18(void);
extern void fn_800F1378(void);
extern void fn_800F13B0(void);
extern void fn_800F2C9C(void);
extern void fn_800F3170(void);
extern void fn_800F3490(void);
extern void fn_800F3D28(void);
extern void fn_80116E7C(void);
extern void fn_80119ECC(void);
extern void fn_8011F87C(void);
extern void fn_8011FB98(void);
extern void fn_801231D0(void);
extern void fn_80123C7C(void);
extern void fn_801240B4(void);
extern void fn_8012AFE8(void);
extern void fn_8016EB48(void);
extern void fn_8017AD44(void);
extern void fn_80182890(void);
extern void fn_80183774(void);
extern void fn_801E97DC(void);
extern void fn_802085E0(void);
extern void fn_80208634(void);
extern void fn_8021771C(void);
extern void fn_80218268(void);
extern void fn_80219544(void);
extern void fn_80239C14(void);
extern void fn_8023A5A8(void);
extern void fn_8023A614(void);
extern void fn_8023A678(void);
extern void fn_8023AE34(void);
extern void fn_8035E858(void);
extern void fn_803606CC(void);
extern void fn_80360780(void);
extern void fn_8036097C(void);
extern void fn_80360A2C(void);
extern void fn_8036555C(void);
extern void fn_8036562C(void);
extern void fn_80367A40(void);
extern void fn_8036B44C(void);
extern void fn_8036CA60(void);
extern void fn_8036CC90(void);
extern void fn_8036CFA4(void);
extern void fn_8036E170(void);
extern void fn_8036E494(void);
extern void fn_8036EE0C(void);
extern void fn_8036FD4C(void);
extern void fn_80370320(void);
extern void fn_80370CD0(void);
extern void fn_803727DC(void);
extern void fn_803731E8(void);
extern void fn_803737C0(void);
extern void fn_80373AE8(void);
extern void fn_803743AC(void);
extern void fn_80376324(void);
extern void fn_80376568(void);
extern void fn_803792F0(void);
extern void fn_8037D34C(void);
extern void fn_8037D3E8(void);
extern void fn_8037D684(void);
extern void fn_8037EF30(void);
extern void fn_8037F744(void);
extern void fn_80389838(void);
extern void fn_8038F52C(void);
extern void fn_80390A88(void);
extern void fn_803933A4(void);
extern void fn_803AB96C(void);
extern void fn_803BE590(void);
extern void fn_803BE670(void);
extern void fn_803BE6B8(void);
extern void fn_803BEBAC(void);
extern void fn_803C1560(void);
extern void fn_803CCD98(void);
extern void fn_803CE148(void);
extern void fn_803CE154(void);
extern void fn_803CE160(void);
extern void fn_803D0B20(void);
extern void fn_803D11B4(void);
extern void fn_803D1574(void);
extern void fn_803D164C(void);
extern void fn_803D2194(void);
extern void fn_803E32EC(void);
extern void fn_803E4478(void);
extern void fn_803E454C(void);
extern void fn_8044D028(void);
extern void fn_8046ECDC(void);
extern void fn_8046F8B8(void);
extern void fn_8046F96C(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_8047E528(void);
extern void fn_8047F91C(void);
extern void fn_8047F994(void);
extern void fn_804805B4(void);
extern void fn_80481668(void);
extern void fn_80483714(void);
extern void fn_8049D52C(void);
extern void fn_804A0580(void);
extern void fn_804A2F98(void);
extern void fn_804A2FBC(void);
extern void fn_804A5E40(void);
extern void fn_80541214(void);
extern void fn_80547984(void);
extern void fn_80547A24(void);
extern void fn_80547A88(void);
extern void fn_80547B58(void);
extern void fn_80549F18(void);
extern void fn_8054A0A0(void);
extern void fn_8054A340(void);
extern void fn_8054A39C(void);
extern void fn_8054A9AC(void);
extern void fn_8054AF0C(void);
extern void fn_8054E520(void);
extern void fn_8056C39C(void);
extern void fn_8056C3DC(void);
extern void fn_80570A50(void);
extern void fn_8059C330(void);
extern void fn_805AA738(void);
extern void fn_805BA358(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F9940(void);
extern void fn_80682544(void);
extern void fn_80684600(void);
extern void fn_8068A918(void);
extern void fn_8068AEA8(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078A22C[];
extern u8 jumptable_8078A268[];
extern u8 lbl_8074DA2C[];
extern u8 lbl_8074DAF8[];
extern u8 lbl_8074DB70[];
extern u8 lbl_8074DBE8[];
extern u8 lbl_8074DBF0[];
extern u8 lbl_8074DC1C[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE68;
extern u32 lbl_8087EE90;
extern u32 lbl_8087EEB8;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087EFE8;
extern u32 lbl_8087F040;
extern u32 lbl_8087F048;
extern u32 lbl_8087F098;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F120;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F418;
extern u32 lbl_8087F430;
extern u32 lbl_8087F440;
extern u32 lbl_8087F448;
extern u32 lbl_8087F460;
extern u32 lbl_8087F490;
extern u32 lbl_8087F4E8;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F518;
extern u32 lbl_8087F528;
extern u32 lbl_8087F534;
extern u32 lbl_8087F540;
extern u32 lbl_8087F558;
extern u32 lbl_8087F580;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F8A8;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9E8;
extern u32 lbl_8087F9F8;
extern u32 lbl_8087FA20;
extern u32 lbl_80885708;
extern u32 lbl_8088570C;
extern u32 lbl_80885728;
extern u32 lbl_80885744;
extern u32 lbl_80885748;
extern u32 lbl_8088574C;
extern u32 lbl_80885750;
extern u32 lbl_80885754;
extern u32 lbl_80885758;
extern u32 lbl_8088575C;
extern u32 lbl_80885760;
extern u32 lbl_80885764;
extern u32 lbl_80885768;
extern u32 lbl_8088576C;

/* Function declarations */
void fn_80368280(void);

asm void fn_80368280(void)
{
    nofralloc
    stwu r1, -0x860(r1)
    mflr r0
    stw r0, 0x864(r1)
    addi r11, r1, 0x860
    bl _savegpr_24
    lwz r5, 0x5744(r3)
    lis r6, 0x4330
    lis r4, 0x670
    stw r6, 0x820(r1)
    addi r5, r5, 0x1
    mr r28, r3
    subi r0, r4, 0xd1e
    stw r6, 0x828(r1)
    cmplw r5, r0
    stw r5, 0x5744(r3)
    bge lbl_fn_80368280_00000044
    mr r0, r5
lbl_fn_80368280_00000044:
    lwz r4, 0x5748(r3)
    stw r0, 0x5744(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80368280_0000005C
    subi r0, r4, 0x1
    stw r0, 0x5748(r3)
lbl_fn_80368280_0000005C:
    lis r4, 0x8889
    lwz r0, 0x5744(r3)
    subi r4, r4, 0x7777
    lwz r5, 0x5538(r3)
    mulhwu r0, r4, r0
    cmpwi r5, 0x0
    srwi r0, r0, 4
    mulhwu r0, r4, r0
    srwi r0, r0, 5
    stw r0, 0x4424(r3)
    beq lbl_fn_80368280_00001E90
    lwz r0, 0x5538(r3)
    cmplwi r0, 0x9
    bgt lbl_fn_80368280_000031A0
    lis r4, jumptable_8078A268@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8078A268@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r3, 0x5624(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_000000C4
    li r0, 0x1
    stw r0, 0x48(r3)
lbl_fn_80368280_000000C4:
    lwz r27, lbl_8087F534
    bl OSGetTime
    stw r4, 0x64(r27)
    stw r3, 0x60(r27)
    addi r3, r1, 0x720
    lwz r4, 0x5514(r28)
    lwz r5, 0x5518(r28)
    lwz r6, 0x551c(r28)
    bl fn_8049D52C
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x620
    addi r4, r4, lbl_8074DC1C@l
    addi r5, r1, 0x720
    addi r4, r4, 0xf2
    crclr 6
    bl sprintf
    lwz r5, 0x5518(r28)
    lwz r4, 0x551c(r28)
    cmpwi r5, 0x44
    lwz r3, 0x5514(r28)
    lwz r0, 0x5524(r28)
    bne lbl_fn_80368280_0000012C
    cmpwi r4, 0x1
    bne lbl_fn_80368280_0000012C
    li r0, 0x1
    b lbl_fn_80368280_00000170
lbl_fn_80368280_0000012C:
    cmpwi r5, 0x7
    bne lbl_fn_80368280_00000144
    cmpwi r4, 0x1
    bne lbl_fn_80368280_00000144
    li r0, 0x1
    b lbl_fn_80368280_00000170
lbl_fn_80368280_00000144:
    cmpw r3, r0
    beq lbl_fn_80368280_00000154
    li r0, 0x0
    b lbl_fn_80368280_00000170
lbl_fn_80368280_00000154:
    cmpwi r5, 0xf
    beq lbl_fn_80368280_00000164
    cmpwi r5, 0x37
    bne lbl_fn_80368280_0000016C
lbl_fn_80368280_00000164:
    li r0, 0x0
    b lbl_fn_80368280_00000170
lbl_fn_80368280_0000016C:
    li r0, 0x1
lbl_fn_80368280_00000170:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000054C
    lwz r0, 0x553c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_0000054C
    lwz r0, 0x5764(r28)
    cmpwi r0, 0x14
    bge lbl_fn_80368280_0000054C
    lwz r3, lbl_8087F0A8
    lwz r0, 0x28(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000054C
    addi r3, r1, 0x620
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000054C
    lwz r5, 0x5764(r28)
    addi r3, r28, 0x550c
    addi r4, r1, 0x620
    addi r0, r5, 0x1
    stw r0, 0x5764(r28)
    lwz r12, 0x550c(r28)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r0, 0x2
    stw r0, 0x5538(r28)
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80368280_0000055C
    lwz r0, 0xb8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000055C
    li r29, 0x0
    lis r27, 0x51ec
    b lbl_fn_80368280_000002F4
lbl_fn_80368280_00000210:
    subis r3, r30, 0x3
    subi r0, r3, 0xcdc
    cmplwi r0, 0x63
    bgt lbl_fn_80368280_00000254
    subi r0, r27, 0x7ae1
    lwz r4, lbl_8087F4F0
    mulhw r0, r0, r30
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x64
    subf r0, r0, r30
    slwi r0, r0, 2
    add r3, r4, r0
    lwz r3, 0x64a0(r3)
    bl fn_80219544
    mr r30, r3
lbl_fn_80368280_00000254:
    lwz r3, lbl_8087F8A0
    lwz r24, 0x48(r3)
    b lbl_fn_80368280_00000280
lbl_fn_80368280_00000260:
    lwz r0, 0x50(r24)
    cmpw r30, r0
    bne lbl_fn_80368280_0000027C
    mr r3, r24
    addi r4, r28, 0x5544
    addi r5, r28, 0x5550
    bl fn_8017AD44
lbl_fn_80368280_0000027C:
    lwz r24, 0x14ac(r24)
lbl_fn_80368280_00000280:
    cmpwi r24, 0x0
    bne lbl_fn_80368280_00000260
    lwz r3, lbl_8087F890
    lwz r24, 0x48(r3)
    b lbl_fn_80368280_000002B4
lbl_fn_80368280_00000294:
    lwz r0, 0x50(r24)
    cmpw r30, r0
    bne lbl_fn_80368280_000002B0
    mr r3, r24
    addi r4, r28, 0x5544
    addi r5, r28, 0x5550
    bl fn_8017AD44
lbl_fn_80368280_000002B0:
    lwz r24, 0x1424(r24)
lbl_fn_80368280_000002B4:
    cmpwi r24, 0x0
    bne lbl_fn_80368280_00000294
    lwz r3, lbl_8087F408
    lwz r24, 0x48(r3)
    b lbl_fn_80368280_000002E8
lbl_fn_80368280_000002C8:
    lwz r0, 0x50(r24)
    cmpw r30, r0
    bne lbl_fn_80368280_000002E4
    mr r3, r24
    addi r4, r28, 0x5544
    addi r5, r28, 0x5550
    bl fn_8017AD44
lbl_fn_80368280_000002E4:
    lwz r24, 0x14ac(r24)
lbl_fn_80368280_000002E8:
    cmpwi r24, 0x0
    bne lbl_fn_80368280_000002C8
    addi r29, r29, 0x4
lbl_fn_80368280_000002F4:
    lwz r3, 0xb8(r31)
    lwzx r30, r3, r29
    cmpwi r30, 0x0
    bge lbl_fn_80368280_00000210
    lwz r0, 0x5544(r28)
    addi r5, r1, 0xc
    lwz r3, 0x554c(r28)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_8009246C
    lwz r0, 0x5544(r28)
    lwz r6, 0x554c(r28)
    slwi r0, r0, 2
    add r5, r6, r0
    cmplw r6, r5
    beq lbl_fn_80368280_00000360
    addi r4, r6, 0x4
    b lbl_fn_80368280_00000358
lbl_fn_80368280_0000033C:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_80368280_00000350
    b lbl_fn_80368280_00000364
lbl_fn_80368280_00000350:
    mr r6, r4
    addi r4, r4, 0x4
lbl_fn_80368280_00000358:
    cmplw r4, r5
    bne lbl_fn_80368280_0000033C
lbl_fn_80368280_00000360:
    mr r6, r5
lbl_fn_80368280_00000364:
    cmplw r6, r5
    beq lbl_fn_80368280_0000039C
    addi r4, r6, 0x8
    b lbl_fn_80368280_00000390
lbl_fn_80368280_00000374:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    beq lbl_fn_80368280_0000038C
    lwz r0, 0x0(r4)
    stwu r0, 0x4(r6)
lbl_fn_80368280_0000038C:
    addi r4, r4, 0x4
lbl_fn_80368280_00000390:
    cmplw r4, r5
    bne lbl_fn_80368280_00000374
    addi r6, r6, 0x4
lbl_fn_80368280_0000039C:
    lwz r3, 0x5544(r28)
    lwz r0, 0x554c(r28)
    slwi r3, r3, 2
    add r3, r0, r3
    cmplw r6, r3
    beq lbl_fn_80368280_00000404
    subf r0, r0, r6
    subf r4, r6, r3
    srawi r0, r0, 2
    addze r3, r0
    srawi r0, r4, 2
    addze r7, r0
    slwi r4, r3, 2
    slwi r5, r7, 2
    b lbl_fn_80368280_000003F0
lbl_fn_80368280_000003D8:
    lwz r6, 0x554c(r28)
    add r0, r4, r5
    addi r3, r3, 0x1
    lwzx r0, r6, r0
    stwx r0, r6, r4
    addi r4, r4, 0x4
lbl_fn_80368280_000003F0:
    lwz r0, 0x5544(r28)
    subf r0, r7, r0
    cmplw r3, r0
    blt lbl_fn_80368280_000003D8
    stw r0, 0x5544(r28)
lbl_fn_80368280_00000404:
    lwz r0, 0x5550(r28)
    addi r5, r1, 0x8
    lwz r3, 0x5558(r28)
    slwi r0, r0, 2
    add r4, r3, r0
    bl fn_8036B44C
    lwz r0, 0x5550(r28)
    lwz r6, 0x5558(r28)
    slwi r0, r0, 2
    add r5, r6, r0
    cmplw r6, r5
    beq lbl_fn_80368280_00000460
    addi r4, r6, 0x4
    b lbl_fn_80368280_00000458
lbl_fn_80368280_0000043C:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_80368280_00000450
    b lbl_fn_80368280_00000464
lbl_fn_80368280_00000450:
    mr r6, r4
    addi r4, r4, 0x4
lbl_fn_80368280_00000458:
    cmplw r4, r5
    bne lbl_fn_80368280_0000043C
lbl_fn_80368280_00000460:
    mr r6, r5
lbl_fn_80368280_00000464:
    cmplw r6, r5
    beq lbl_fn_80368280_0000049C
    addi r4, r6, 0x8
    b lbl_fn_80368280_00000490
lbl_fn_80368280_00000474:
    lwz r3, 0x0(r6)
    lwz r0, 0x0(r4)
    cmplw r3, r0
    beq lbl_fn_80368280_0000048C
    lwz r0, 0x0(r4)
    stwu r0, 0x4(r6)
lbl_fn_80368280_0000048C:
    addi r4, r4, 0x4
lbl_fn_80368280_00000490:
    cmplw r4, r5
    bne lbl_fn_80368280_00000474
    addi r6, r6, 0x4
lbl_fn_80368280_0000049C:
    lwz r3, 0x5550(r28)
    lwz r0, 0x5558(r28)
    slwi r3, r3, 2
    add r3, r0, r3
    cmplw r6, r3
    beq lbl_fn_80368280_00000504
    subf r0, r0, r6
    subf r4, r6, r3
    srawi r0, r0, 2
    addze r3, r0
    srawi r0, r4, 2
    addze r7, r0
    slwi r4, r3, 2
    slwi r5, r7, 2
    b lbl_fn_80368280_000004F0
lbl_fn_80368280_000004D8:
    lwz r6, 0x5558(r28)
    add r0, r4, r5
    addi r3, r3, 0x1
    lwzx r0, r6, r0
    stwx r0, r6, r4
    addi r4, r4, 0x4
lbl_fn_80368280_000004F0:
    lwz r0, 0x5550(r28)
    subf r0, r7, r0
    cmplw r3, r0
    blt lbl_fn_80368280_000004D8
    stw r0, 0x5550(r28)
lbl_fn_80368280_00000504:
    lwz r5, 0x5544(r28)
    cmpwi r5, 0x0
    beq lbl_fn_80368280_0000051C
    lwz r3, lbl_8087F518
    lwz r4, 0x554c(r28)
    bl fn_8046F8B8
lbl_fn_80368280_0000051C:
    li r24, 0x0
    li r29, 0x0
    b lbl_fn_80368280_0000053C
lbl_fn_80368280_00000528:
    lwz r3, 0x5558(r28)
    lwzx r3, r3, r29
    bl fn_800D8448
    addi r24, r24, 0x1
    addi r29, r29, 0x4
lbl_fn_80368280_0000053C:
    lwz r0, 0x5550(r28)
    cmplw r24, r0
    blt lbl_fn_80368280_00000528
    b lbl_fn_80368280_0000055C
lbl_fn_80368280_0000054C:
    li r3, 0x0
    li r0, 0x3
    stw r3, 0x5764(r28)
    stw r0, 0x5538(r28)
lbl_fn_80368280_0000055C:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000588
    lwz r4, 0x10d8(r28)
    lwz r0, 0x64(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00000588
    lwz r4, 0x5514(r28)
    lwz r5, 0x5518(r28)
    lwz r6, 0x551c(r28)
    bl fn_8037D684
lbl_fn_80368280_00000588:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000031A0
    bl fn_8035E858
    b lbl_fn_80368280_000031A0
    addi r3, r3, 0x550c
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    addi r3, r28, 0x550c
    bl fn_80470580
    mr r24, r3
    addi r3, r28, 0x550c
    bl fn_8047059C
    cmpwi r24, 0x0
    srwi r5, r3, 2
    beq lbl_fn_80368280_000005D8
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046F8B8
lbl_fn_80368280_000005D8:
    li r0, 0x3
    stw r0, 0x5538(r28)
    b lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000620
    lwz r0, 0x48(r3)
    li r4, 0x0
    cmpwi r0, 0x3
    blt lbl_fn_80368280_0000060C
    cmpwi r0, 0x5
    bgt lbl_fn_80368280_0000060C
    li r4, 0x1
lbl_fn_80368280_0000060C:
    cmpwi r4, 0x0
    beq lbl_fn_80368280_00000620
    bl fn_8037D34C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000031A0
lbl_fn_80368280_00000620:
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0xe
    bne lbl_fn_80368280_00000650
    lwz r3, lbl_8087F9F8
    bl fn_805AA738
    lwz r3, lbl_8087F430
    bl fn_803743AC
    li r0, 0x0
    stw r0, 0x950(r28)
    addi r3, r28, 0x6c
    li r4, 0x0
    bl fn_80389838
lbl_fn_80368280_00000650:
    lwz r3, lbl_8087F048
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087EE68
    bl fn_80017060
    lwz r3, lbl_8087F558
    li r5, 0x0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F8A0
    lwz r4, 0x54(r3)
    bl fn_8054A0A0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_800EBA5C
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_80218268
    lwz r3, 0x5514(r28)
    lwz r0, 0x5524(r28)
    cmpw r3, r0
    beq lbl_fn_80368280_000006D4
    subi r0, r3, 0x1
    lwz r3, lbl_8087EEC8
    cntlzw r0, r0
    srwi r4, r0, 5
    bl fn_8006D0C8
lbl_fn_80368280_000006D4:
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_8023A5A8
    lwz r3, lbl_8087F3C0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F9E8
    li r4, 0x1
    bl fn_8059C330
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F048
    bl fn_800F3D28
    lwz r3, lbl_8087F040
    bl fn_800F13B0
    lwz r3, lbl_8087F8A8
    bl fn_8054E520
    lwz r3, lbl_8087F528
    li r0, 0x0
    stw r0, 0x48(r3)
    lwz r0, 0x553c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00000770
    lwz r3, lbl_8087F8A0
    bl fn_8011F87C
    lwz r3, lbl_8087F890
    bl fn_80547A24
    b lbl_fn_80368280_0000079C
lbl_fn_80368280_00000770:
    lwz r3, lbl_8087F8A0
    bl fn_8054A39C
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    lwz r6, 0x10d0(r28)
    bl fn_8036562C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_0000079C
    lwz r3, lbl_8087F890
    bl fn_80547A24
lbl_fn_80368280_0000079C:
    lwz r3, lbl_8087F408
    bl fn_8011FB98
    lwz r3, lbl_8087F890
    bl fn_80547A88
    lwz r3, 0x10d8(r28)
    bl fn_803CCD98
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000007DC
    bl fn_8047E528
    lwz r3, lbl_8087F540
    li r4, 0x0
    li r5, 0x0
    bl fn_80483714
    lwz r3, lbl_8087F540
    bl fn_804805B4
lbl_fn_80368280_000007DC:
    lwz r3, lbl_8087F040
    bl fn_800F1378
    addi r3, r28, 0x6c
    bl fn_803933A4
    lwz r3, lbl_8087F098
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000808
    li r4, 0x0
    bl fn_80183774
    lwz r3, lbl_8087F098
    bl fn_80182890
lbl_fn_80368280_00000808:
    li r27, 0x0
    stw r27, 0x5660(r28)
    lwz r3, 0x10d8(r28)
    bl fn_800D2338
    lwz r3, 0x5590(r28)
    stw r27, 0x10d8(r28)
    cmpwi r3, 0x0
    stw r27, 0x5594(r28)
    stw r27, 0x55a4(r28)
    beq lbl_fn_80368280_00000844
    li r4, 0x1
    bl fn_8056C39C
    stw r27, 0x5590(r28)
    lwz r3, lbl_8087F3C0
    stw r27, 0xcc(r3)
lbl_fn_80368280_00000844:
    li r0, 0x0
    stw r0, 0x56d0(r28)
    lwz r3, 0x5514(r28)
    stw r0, 0x56d4(r28)
    lwz r4, 0x5518(r28)
    stw r0, 0x56d8(r28)
    lwz r5, 0x551c(r28)
    bl fn_8036555C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000884
    lwz r3, lbl_8087F048
    bl fn_800F3170
    lwz r3, lbl_8087F8A8
    bl fn_8054AF0C
    lwz r3, lbl_8087F490
    bl fn_803D11B4
lbl_fn_80368280_00000884:
    lwz r3, lbl_8087F490
    bl fn_803E454C
    lwz r3, lbl_8087F490
    li r4, 0x1
    bl fn_800D246C
    lwz r3, lbl_8087F120
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000008A8
    bl fn_801E97DC
lbl_fn_80368280_000008A8:
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    lfs f0, lbl_80885708
    stfs f0, 0x3a4(r3)
    lwz r3, lbl_8087EFA8
    stw r0, 0x240(r3)
    lwz r3, 0x5514(r28)
    cmpwi r3, 0x2
    bne lbl_fn_80368280_000008E8
    lwz r4, 0x5518(r28)
    cmpwi r4, 0x9
    bne lbl_fn_80368280_000008E8
    lwz r5, 0x551c(r28)
    bl fn_80208634
    stw r3, 0x10d4(r28)
    b lbl_fn_80368280_000008F4
lbl_fn_80368280_000008E8:
    lwz r4, 0x5518(r28)
    bl fn_802085E0
    stw r3, 0x10d4(r28)
lbl_fn_80368280_000008F4:
    lwz r0, 0x54e4(r28)
    li r3, 0x4
    stw r3, 0x5538(r28)
    cmpwi r0, 0x6
    bne lbl_fn_80368280_000031A0
    li r0, 0x0
    stw r0, 0x54e4(r28)
    b lbl_fn_80368280_000031A0
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00000980
    lwz r3, 0x5524(r3)
    lwz r4, 0x5528(r28)
    lwz r5, 0x552c(r28)
    bl fn_803CE160
    mr r27, r3
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_803CE160
    cmpw r27, r3
    beq lbl_fn_80368280_00000980
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000096C
    lwz r25, lbl_8087EE90
    bl fn_803CE154
    mr r4, r3
    mr r3, r25
    bl fn_80047B54
    b lbl_fn_80368280_00000980
lbl_fn_80368280_0000096C:
    lwz r25, lbl_8087EE90
    bl fn_803CE148
    mr r4, r3
    mr r3, r25
    bl fn_80047B54
lbl_fn_80368280_00000980:
    lwz r3, 0x553c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000990
    bl fn_803BE590
lbl_fn_80368280_00000990:
    lwz r0, 0x5514(r28)
    li r4, 0x120
    lwz r3, lbl_8087F3C0
    cmpwi r0, 0x1
    bne lbl_fn_80368280_000009A8
    li r4, 0x80
lbl_fn_80368280_000009A8:
    bl fn_8023A678
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    lwz r6, 0x10d0(r28)
    bl fn_8036562C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000A14
    lwz r0, 0x553c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_000009F0
    lwz r3, 0x5524(r28)
    lwz r4, 0x5528(r28)
    lwz r5, 0x552c(r28)
    lwz r6, 0x10d0(r28)
    bl fn_8036562C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000A14
lbl_fn_80368280_000009F0:
    lis r4, lbl_8074DC1C@ha
    addi r3, r28, 0x5690
    addi r4, r4, lbl_8074DC1C@l
    li r5, 0x0
    addi r4, r4, 0x101
    li r6, 0x0
    li r7, 0x1
    bl fn_80470364
    b lbl_fn_80368280_00000A9C
lbl_fn_80368280_00000A14:
    lwz r3, 0x5514(r28)
    cmpwi r3, 0x1
    beq lbl_fn_80368280_00000A50
    lwz r0, 0x5524(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00000A50
    lis r4, lbl_8074DC1C@ha
    addi r3, r28, 0x5690
    addi r4, r4, lbl_8074DC1C@l
    li r5, 0x0
    addi r4, r4, 0x11c
    li r6, 0x0
    li r7, 0x1
    bl fn_80470364
    b lbl_fn_80368280_00000A9C
lbl_fn_80368280_00000A50:
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8036555C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000A9C
    lwz r3, 0x5524(r28)
    lwz r4, 0x5528(r28)
    lwz r5, 0x552c(r28)
    bl fn_8036555C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000A9C
    lis r4, lbl_8074DC1C@ha
    addi r3, r28, 0x5690
    addi r4, r4, lbl_8074DC1C@l
    li r5, 0x0
    addi r4, r4, 0x11c
    li r6, 0x0
    li r7, 0x1
    bl fn_80470364
lbl_fn_80368280_00000A9C:
    lwz r5, lbl_8087F8A0
    lwz r3, 0x48(r5)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000AD8
    lwz r0, 0x5518(r28)
    lwz r4, 0x5514(r28)
    cmpwi r0, 0x44
    bne lbl_fn_80368280_00000ACC
    lwz r0, 0x551c(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00000ACC
    li r4, 0x1
lbl_fn_80368280_00000ACC:
    lwz r5, 0x5524(r28)
    bl fn_800EBD00
    b lbl_fn_80368280_00000AE4
lbl_fn_80368280_00000AD8:
    lwz r4, 0x5514(r28)
    mr r3, r5
    bl fn_80549F18
lbl_fn_80368280_00000AE4:
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    lwz r6, 0x10d0(r28)
    bl fn_8036562C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000B08
    lwz r3, lbl_8087F890
    bl fn_80547984
lbl_fn_80368280_00000B08:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000B2C
    lwz r4, 0x5514(r28)
    lwz r5, 0x5518(r28)
    lwz r6, 0x551c(r28)
    lwz r7, 0x5520(r28)
    lwz r8, 0x553c(r28)
    bl fn_8036097C
lbl_fn_80368280_00000B2C:
    li r0, 0x5
    stw r0, 0x5538(r28)
    b lbl_fn_80368280_000031A0
    lwz r5, 0x5624(r3)
    lwz r4, 0x58(r5)
    lwz r0, 0x54(r5)
    lwz r5, 0x4c(r5)
    add r0, r4, r0
    cmpw r5, r0
    bge lbl_fn_80368280_00000B7C
    lwz r0, 0x54f0(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_000031A0
    lwz r4, 0x5620(r3)
    lwz r3, 0x58(r4)
    lwz r0, 0x54(r4)
    lwz r4, 0x4c(r4)
    add r0, r3, r0
    cmpw r4, r0
    blt lbl_fn_80368280_000031A0
lbl_fn_80368280_00000B7C:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000B94
    bl fn_80360A2C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000E5C
lbl_fn_80368280_00000B94:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80368280_00000E5C
    bl fn_800EBE84
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000E5C
    lwz r3, lbl_8087F890
    bl fn_80547B58
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000E5C
    lwz r3, 0x5514(r28)
    li r30, 0x0
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80368280_00000DC8
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_00000DC8
    lwz r25, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r29, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000C4C
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r29, r3, 0x64
    bne lbl_fn_80368280_00000C4C
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00000C4C
    addi r3, r25, 0x6
    bl fn_80684600
    add r29, r29, r3
lbl_fn_80368280_00000C4C:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80368280_00000C6C
lbl_fn_80368280_00000C58:
    cmpw r29, r0
    bne lbl_fn_80368280_00000C68
    li r0, 0x1
    b lbl_fn_80368280_00000C7C
lbl_fn_80368280_00000C68:
    addi r3, r3, 0x4
lbl_fn_80368280_00000C6C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00000C58
    li r0, 0x0
lbl_fn_80368280_00000C7C:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00000DC8
    lwz r25, 0x0(r27)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r29, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000CDC
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r29, r3, 0x64
    bne lbl_fn_80368280_00000CDC
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00000CDC
    addi r3, r25, 0x6
    bl fn_80684600
    add r29, r29, r3
lbl_fn_80368280_00000CDC:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80368280_00000D10
lbl_fn_80368280_00000CEC:
    cmpw r29, r0
    bne lbl_fn_80368280_00000D08
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r29, r3, r0
    b lbl_fn_80368280_00000D20
lbl_fn_80368280_00000D08:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80368280_00000D10:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00000CEC
    li r29, 0x0
lbl_fn_80368280_00000D20:
    cmpwi r29, 0x0
    bne lbl_fn_80368280_00000D64
    lwz r4, 0x48(r27)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000DC8
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000DC8
    lwz r5, 0x10d0(r28)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
    b lbl_fn_80368280_00000DC8
lbl_fn_80368280_00000D64:
    lwz r5, 0x4(r29)
    cmplwi r5, 0xfff
    ble lbl_fn_80368280_00000DA8
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00000DA0
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x520
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x520
    bl fn_800697D8
lbl_fn_80368280_00000DA0:
    li r5, 0x0
    b lbl_fn_80368280_00000DB4
lbl_fn_80368280_00000DA8:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80368280_00000DB4:
    lwz r0, 0x8(r29)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
lbl_fn_80368280_00000DC8:
    cmpwi r30, 0x0
    beq lbl_fn_80368280_00000E54
    lwz r3, lbl_8087F8A0
    lwz r25, 0x48(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80368280_00000E54
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8021771C
    mr r27, r3
    lwz r24, 0x934(r25)
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00000E54
    cmpwi r27, 0x0
    beq lbl_fn_80368280_00000E54
    xoris r0, r24, 0x8000
    stw r0, 0x824(r1)
    lis r4, lbl_8074DBE8@ha
    lfs f0, 0xc4(r27)
    lfd f4, lbl_8074DBE8@l(r4)
    lfd f3, 0x820(r1)
    lwz r4, 0xc0(r27)
    fsubs f3, f3, f4
    lwz r3, 0x54(r3)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x830(r1)
    lwz r0, 0x834(r1)
    add r0, r4, r0
    subf r0, r3, r0
    stw r0, 0x1548(r28)
lbl_fn_80368280_00000E54:
    li r0, 0x6
    stw r0, 0x5538(r28)
lbl_fn_80368280_00000E5C:
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
    b lbl_fn_80368280_000031A0
    lwz r5, 0x5514(r3)
    lwz r4, 0x551c(r3)
    cmpwi r5, 0x1
    lwz r0, 0x5518(r3)
    bne lbl_fn_80368280_00000E88
    li r0, 0x1
    b lbl_fn_80368280_00000EAC
lbl_fn_80368280_00000E88:
    cmpwi r5, 0x2
    bne lbl_fn_80368280_00000EA8
    cmpwi r0, 0x44
    bne lbl_fn_80368280_00000EA8
    subi r0, r4, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80368280_00000EAC
lbl_fn_80368280_00000EA8:
    li r0, 0x0
lbl_fn_80368280_00000EAC:
    lwz r3, lbl_8087EF8C
    cmpwi r0, 0x0
    li r4, 0x2
    addi r3, r3, 0x118
    beq lbl_fn_80368280_00000EC4
    li r4, 0x4
lbl_fn_80368280_00000EC4:
    bl fn_800AFEBC
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    bl fn_800EFA18
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8036555C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00000F04
    lwz r3, lbl_8087F048
    bl fn_800F2C9C
    lwz r3, lbl_8087F8A8
    bl fn_8054A9AC
    lwz r3, lbl_8087F490
    bl fn_803D0B20
lbl_fn_80368280_00000F04:
    li r0, 0x7
    stw r0, 0x5538(r28)
    li r4, 0x1
    lwz r3, lbl_8087F518
    bl fn_8046ECDC
    b lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
    lwz r3, lbl_8087F048
    bl fn_800F3490
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F490
    bl fn_803D1574
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F8A8
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000031A0
    addi r3, r28, 0x5690
    bl fn_80470528
    li r0, 0x8
    stw r0, 0x5538(r28)
    b lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F518
    li r4, 0x1
    bl fn_8046ECDC
    lwz r0, 0x553c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000118C
    lwz r3, 0x48(r28)
    li r29, 0x0
    lwz r4, 0x4c(r28)
    lwz r5, 0x50(r28)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80368280_00001184
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_00001184
    lwz r25, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r30, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001008
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r30, r3, 0x64
    bne lbl_fn_80368280_00001008
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001008
    addi r3, r25, 0x6
    bl fn_80684600
    add r30, r30, r3
lbl_fn_80368280_00001008:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80368280_00001028
lbl_fn_80368280_00001014:
    cmpw r30, r0
    bne lbl_fn_80368280_00001024
    li r0, 0x1
    b lbl_fn_80368280_00001038
lbl_fn_80368280_00001024:
    addi r3, r3, 0x4
lbl_fn_80368280_00001028:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001014
    li r0, 0x0
lbl_fn_80368280_00001038:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001184
    lwz r25, 0x0(r27)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r30, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001098
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r30, r3, 0x64
    bne lbl_fn_80368280_00001098
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001098
    addi r3, r25, 0x6
    bl fn_80684600
    add r30, r30, r3
lbl_fn_80368280_00001098:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80368280_000010CC
lbl_fn_80368280_000010A8:
    cmpw r30, r0
    bne lbl_fn_80368280_000010C4
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r30, r3, r0
    b lbl_fn_80368280_000010DC
lbl_fn_80368280_000010C4:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80368280_000010CC:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_000010A8
    li r30, 0x0
lbl_fn_80368280_000010DC:
    cmpwi r30, 0x0
    bne lbl_fn_80368280_00001120
    lwz r4, 0x48(r27)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001184
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001184
    lwz r5, 0x10d0(r28)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
    b lbl_fn_80368280_00001184
lbl_fn_80368280_00001120:
    lwz r5, 0x4(r30)
    cmplwi r5, 0xfff
    ble lbl_fn_80368280_00001164
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000115C
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x420
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x420
    bl fn_800697D8
lbl_fn_80368280_0000115C:
    li r5, 0x0
    b lbl_fn_80368280_00001170
lbl_fn_80368280_00001164:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80368280_00001170:
    lwz r0, 0x8(r30)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r29, r4, r3
lbl_fn_80368280_00001184:
    stw r29, 0x5694(r28)
    stw r29, 0x5698(r28)
lbl_fn_80368280_0000118C:
    lwz r4, 0x5514(r28)
    mr r3, r28
    lwz r5, 0x5518(r28)
    lwz r6, 0x551c(r28)
    bl fn_803BEBAC
    lwz r0, 0x553c(r28)
    stw r3, 0x5534(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000011B4
    stw r0, 0x9b0(r3)
lbl_fn_80368280_000011B4:
    lwz r3, 0x5534(r28)
    li r4, 0x1
    bl fn_800D246C
    lwz r0, 0x5534(r28)
    li r3, 0x9
    stw r3, 0x5538(r28)
    stw r0, 0x10d8(r28)
    b lbl_fn_80368280_000031A0
    mr r3, r28
    bl fn_8036FD4C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_800EBE84
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    lwz r3, lbl_8087F048
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087EE68
    li r4, 0x0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F558
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F9E8
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
    lwz r3, lbl_8087F3C0
    bl fn_800D246C
    lwz r3, lbl_8087F8A0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F890
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x553c(r28)
    lwz r0, 0x5534(r28)
    cmpwi r3, 0x0
    stw r0, 0x10d8(r28)
    beq lbl_fn_80368280_00001280
    bl fn_803BE670
    b lbl_fn_80368280_000012B0
lbl_fn_80368280_00001280:
    addi r3, r28, 0x50e4
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r28, 0x3344
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r28, 0x37f4
    li r4, 0x0
    li r5, 0x400
    bl memset
lbl_fn_80368280_000012B0:
    lwz r4, 0x5520(r28)
    mr r3, r28
    bl fn_8036CA60
    lwz r3, 0x553c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000012E8
    bl fn_803BE6B8
    lfs f1, lbl_80885744
    addi r3, r28, 0x6c
    li r4, 0x1
    li r5, 0x1
    bl fn_8037EF30
    li r0, 0x5
    stw r0, 0x5748(r28)
lbl_fn_80368280_000012E8:
    mr r3, r28
    li r4, 0x0
    bl fn_80367A40
    lwz r3, lbl_8087F490
    bl fn_803D164C
    lwz r3, lbl_8087F490
    bl fn_803D2194
    lwz r3, lbl_8087F490
    bl fn_803E32EC
    lwz r3, lbl_8087F490
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x574c(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80368280_00001330
    li r0, 0x1
    stw r0, 0x1434(r28)
    stw r3, 0x154c(r28)
lbl_fn_80368280_00001330:
    li r0, 0x0
    stw r0, 0x574c(r28)
    lwz r3, lbl_8087F4F0
    bl fn_8044D028
    lwz r0, 0x553c(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_000014E4
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000014E4
    lis r3, 0x9
    lwz r4, 0x10d0(r28)
    addi r0, r3, 0x27c0
    cmpw r4, r0
    blt lbl_fn_80368280_000014E4
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8054A340
    lwz r6, lbl_8087F8A0
    addi r4, r1, 0x7c
    cmpwi r3, 0x0
    addi r5, r1, 0x70
    lwz r6, 0x48(r6)
    mr r24, r3
    psq_l f1, 0x534(r6), 0, 0
    lfs f2, 0x53c(r6)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x528(r6), 0, 0
    stfs f2, 0x84(r1)
    lfs f2, 0x530(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x78(r1)
    beq lbl_fn_80368280_000014E4
    frsp f0, f2
    lfs f6, 0x530(r3)
    lfs f5, 0x52c(r3)
    lfs f4, 0x74(r1)
    lfs f3, 0x528(r3)
    fsubs f6, f6, f0
    lfs f0, 0x70(r1)
    fsubs f4, f5, f4
    stfs f6, 0x3c(r1)
    addi r3, r1, 0x34
    fsubs f0, f3, f0
    stfs f4, 0x38(r1)
    stfs f0, 0x34(r1)
    bl fn_805F9940
    lfs f0, lbl_8088574C
    fcmpo cr0, f1, f0
    ble lbl_fn_80368280_000014E4
    lfs f3, lbl_80885750
    addi r3, r1, 0xc8
    lfs f0, lbl_8088570C
    li r4, 0x79
    lfs f1, 0x80(r1)
    stfs f3, 0x64(r1)
    stfs f0, 0x68(r1)
    stfs f3, 0x6c(r1)
    bl fn_805F8E70
    addi r4, r1, 0x64
    addi r3, r1, 0xc8
    mr r5, r4
    bl fn_805F93C0
    lfs f3, 0x78(r1)
    addi r4, r1, 0x58
    lfs f0, 0x6c(r1)
    lis r5, 0x8000
    lfs f5, 0x74(r1)
    li r6, 0x0
    fadds f6, f3, f0
    lfs f4, 0x68(r1)
    lfs f3, 0x70(r1)
    li r7, 0x0
    lfs f0, 0x64(r1)
    fadds f4, f5, f4
    fadds f0, f3, f0
    stfs f6, 0x60(r1)
    lfs f1, lbl_80885744
    li r8, 0x1
    stfs f4, 0x5c(r1)
    stfs f0, 0x58(r1)
    lwz r3, 0x10d8(r28)
    bl fn_803C1560
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000014E4
    subi r0, r3, 0x1
    lwz r3, 0x10d8(r28)
    mulli r0, r0, 0x30
    lfs f0, lbl_8088570C
    lwz r4, 0x9c(r3)
    addi r7, r1, 0x28
    lfs f3, 0x80(r1)
    mr r3, r24
    add r5, r4, r0
    stfs f0, 0x28(r1)
    lfs f2, 0xc(r5)
    li r4, 0x0
    psq_l f1, 0x4(r5), 0, 0
    li r5, 0x0
    psq_st f1, 0x528(r24), 0, 0
    li r6, 0x0
    stfs f3, 0x2c(r1)
    stfs f2, 0x530(r24)
    fmr f2, f0
    psq_l f1, 0x0(r7), 0, 0
    psq_st f1, 0x534(r24), 0, 0
    stfs f0, 0x30(r1)
    stfs f2, 0x53c(r24)
    bl fn_8016EB48
lbl_fn_80368280_000014E4:
    lwz r5, 0x551c(r28)
    li r30, 0x0
    lwz r4, 0x5518(r28)
    lwz r3, 0x5514(r28)
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80368280_000016E4
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_000016E4
    lwz r25, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r29, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001568
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r29, r3, 0x64
    bne lbl_fn_80368280_00001568
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001568
    addi r3, r25, 0x6
    bl fn_80684600
    add r29, r29, r3
lbl_fn_80368280_00001568:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80368280_00001588
lbl_fn_80368280_00001574:
    cmpw r29, r0
    bne lbl_fn_80368280_00001584
    li r0, 0x1
    b lbl_fn_80368280_00001598
lbl_fn_80368280_00001584:
    addi r3, r3, 0x4
lbl_fn_80368280_00001588:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001574
    li r0, 0x0
lbl_fn_80368280_00001598:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000016E4
    lwz r25, 0x0(r27)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r29, -0x1
    mr r3, r25
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000015F8
    addi r3, r25, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r29, r3, 0x64
    bne lbl_fn_80368280_000015F8
    mr r3, r25
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_000015F8
    addi r3, r25, 0x6
    bl fn_80684600
    add r29, r29, r3
lbl_fn_80368280_000015F8:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80368280_0000162C
lbl_fn_80368280_00001608:
    cmpw r29, r0
    bne lbl_fn_80368280_00001624
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r29, r3, r0
    b lbl_fn_80368280_0000163C
lbl_fn_80368280_00001624:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80368280_0000162C:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001608
    li r29, 0x0
lbl_fn_80368280_0000163C:
    cmpwi r29, 0x0
    bne lbl_fn_80368280_00001680
    lwz r4, 0x48(r27)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000016E4
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000016E4
    lwz r5, 0x10d0(r28)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
    b lbl_fn_80368280_000016E4
lbl_fn_80368280_00001680:
    lwz r5, 0x4(r29)
    cmplwi r5, 0xfff
    ble lbl_fn_80368280_000016C4
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000016BC
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x320
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x320
    bl fn_800697D8
lbl_fn_80368280_000016BC:
    li r5, 0x0
    b lbl_fn_80368280_000016D0
lbl_fn_80368280_000016C4:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80368280_000016D0:
    lwz r0, 0x8(r29)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r30, r4, r3
lbl_fn_80368280_000016E4:
    cmpwi r30, 0x0
    beq lbl_fn_80368280_00001770
    lwz r3, lbl_8087F8A0
    lwz r25, 0x48(r3)
    cmpwi r25, 0x0
    beq lbl_fn_80368280_00001770
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    lwz r5, 0x551c(r28)
    bl fn_8021771C
    mr r27, r3
    lwz r24, 0x934(r25)
    lwz r3, 0x5514(r28)
    lwz r4, 0x5518(r28)
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001770
    cmpwi r27, 0x0
    beq lbl_fn_80368280_00001770
    xoris r0, r24, 0x8000
    stw r0, 0x82c(r1)
    lis r4, lbl_8074DBE8@ha
    lfs f0, 0xc4(r27)
    lfd f4, lbl_8074DBE8@l(r4)
    lfd f3, 0x828(r1)
    lwz r4, 0xc0(r27)
    fsubs f3, f3, f4
    lwz r3, 0x54(r3)
    fmuls f0, f3, f0
    fctiwz f0, f0
    stfd f0, 0x830(r1)
    lwz r0, 0x834(r1)
    add r0, r4, r0
    subf r0, r3, r0
    stw r0, 0x1548(r28)
lbl_fn_80368280_00001770:
    lwz r4, 0x870(r28)
    addi r3, r28, 0x6c
    bl fn_80389838
    li r4, 0x0
    stw r4, 0x954(r28)
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
    lwz r3, lbl_8087F048
    lwz r0, 0x5618(r28)
    addis r3, r3, 0x3
    stw r0, 0x67b0(r3)
    stw r4, 0x5534(r28)
    stw r4, 0x5538(r28)
    stw r4, 0x553c(r28)
    stw r4, 0x5520(r28)
    stw r4, 0x5540(r28)
    lwz r25, lbl_8087F460
    cmpwi r25, 0x0
    beq lbl_fn_80368280_0000181C
    beq lbl_fn_80368280_00001814
    addis r3, r25, 0x1
    subic. r0, r3, 0x61a0
    beq lbl_fn_80368280_000017F0
    lis r4, fn_80119ECC@ha
    subi r3, r3, 0x4fdc
    addi r4, r4, fn_80119ECC@l
    li r5, 0x2d4
    li r6, 0x1c
    bl fn_806959D8
lbl_fn_80368280_000017F0:
    addic. r3, r25, 0x539c
    beq lbl_fn_80368280_0000180C
    lis r4, fn_8012AFE8@ha
    li r5, 0x240
    addi r4, r4, fn_8012AFE8@l
    li r6, 0x7
    bl fn_806959D8
lbl_fn_80368280_0000180C:
    mr r3, r25
    bl dtor_80084684
lbl_fn_80368280_00001814:
    li r0, 0x0
    stw r0, lbl_8087F460
lbl_fn_80368280_0000181C:
    lwz r3, 0x5624(r28)
    li r5, 0x0
    li r4, 0x2
    lis r0, 0xff00
    stw r5, 0x4c(r3)
    lwz r3, 0x5624(r28)
    stw r5, 0x5c(r3)
    lwz r3, 0x5624(r28)
    stw r4, 0x58(r3)
    lwz r3, 0x5624(r28)
    stw r0, 0x6c(r3)
    lwz r3, 0x5624(r28)
    stw r5, 0x70(r3)
    lwz r0, 0x54f0(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_000018B4
    lwz r7, 0x5620(r28)
    li r3, 0x1
    li r0, 0x1e
    lfs f0, lbl_80885754
    lwz r6, 0x70(r7)
    stw r4, 0x54f0(r28)
    clrlwi r8, r6, 8
    stw r3, 0x4c(r7)
    lwz r7, 0x5620(r28)
    stw r6, 0x6c(r7)
    lwz r6, 0x5620(r28)
    stw r8, 0x70(r6)
    lwz r6, 0x5620(r28)
    stw r4, 0x58(r6)
    lwz r4, 0x5620(r28)
    stw r5, 0x5c(r4)
    lwz r4, 0x5620(r28)
    stw r0, 0x54(r4)
    lwz r4, 0x5620(r28)
    stfs f0, 0x74(r4)
    lwz r4, 0x5620(r28)
    stw r3, 0x48(r4)
lbl_fn_80368280_000018B4:
    li r0, 0x4
    li r27, 0x1
    stw r0, 0x5760(r28)
    mr r3, r28
    lwz r5, 0x5670(r28)
    li r4, 0xc
    stw r27, 0x5638(r28)
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x5668(r28)
    stw r27, 0x5630(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000019C0
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000019C0
    lwz r0, 0x10d8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000019C0
    lis r3, 0x9
    lwz r4, 0x10d0(r28)
    addi r0, r3, 0x27c0
    cmpw r4, r0
    blt lbl_fn_80368280_000019C0
    lwz r3, lbl_8087F8A0
    li r4, 0x1
    bl fn_8054A340
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000019C0
    lwz r4, 0x10d8(r28)
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80368280_0000196C
lbl_fn_80368280_00001944:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpwi r0, 0x233c
    bne lbl_fn_80368280_00001960
    mulli r0, r5, 0x28
    add r7, r7, r0
    b lbl_fn_80368280_00001970
lbl_fn_80368280_00001960:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_80368280_00001944
lbl_fn_80368280_0000196C:
    li r7, 0x0
lbl_fn_80368280_00001970:
    cmpwi r7, 0x0
    beq lbl_fn_80368280_000019C0
    lfs f2, 0xc(r7)
    addi r8, r1, 0x1c
    psq_l f1, 0x4(r7), 0, 0
    li r4, 0x0
    psq_st f1, 0x528(r3), 0, 0
    li r5, 0x0
    lfs f0, lbl_8088570C
    li r6, 0x0
    stfs f2, 0x530(r3)
    fmr f2, f0
    lfs f3, 0x14(r7)
    stfs f0, 0x1c(r1)
    stfs f3, 0x20(r1)
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    stfs f0, 0x24(r1)
    bl fn_8016EB48
lbl_fn_80368280_000019C0:
    lwz r0, 0x5694(r28)
    li r3, 0x0
    stw r3, 0x5668(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001D20
    lwz r4, 0x10d8(r28)
    cmpwi r4, 0x0
    beq lbl_fn_80368280_000019E4
    lwz r3, 0x64(r4)
lbl_fn_80368280_000019E4:
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001D20
    cmpwi r4, 0x0
    beq lbl_fn_80368280_000019FC
    lwz r3, 0x64(r4)
    b lbl_fn_80368280_00001A00
lbl_fn_80368280_000019FC:
    li r3, 0x0
lbl_fn_80368280_00001A00:
    cmpwi r4, 0x0
    lwz r30, 0x48(r3)
    beq lbl_fn_80368280_00001A14
    lwz r3, 0x64(r4)
    b lbl_fn_80368280_00001A18
lbl_fn_80368280_00001A14:
    li r3, 0x0
lbl_fn_80368280_00001A18:
    cmpwi r4, 0x0
    lwz r29, 0x4c(r3)
    beq lbl_fn_80368280_00001A2C
    lwz r3, 0x64(r4)
    b lbl_fn_80368280_00001A30
lbl_fn_80368280_00001A2C:
    li r3, 0x0
lbl_fn_80368280_00001A30:
    lwz r26, 0x50(r3)
    mr r3, r30
    mr r4, r29
    li r25, 0x0
    mr r5, r26
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80368280_00001CF8
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_00001CF8
    mr r3, r30
    mr r4, r29
    mr r5, r26
    li r25, 0x0
    bl fn_8021771C
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_80368280_00001C60
    lwz r0, 0x44(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_00001C60
    lwz r24, 0x0(r3)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r26, -0x1
    mr r3, r24
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001AE4
    addi r3, r24, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r26, r3, 0x64
    bne lbl_fn_80368280_00001AE4
    mr r3, r24
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001AE4
    addi r3, r24, 0x6
    bl fn_80684600
    add r26, r26, r3
lbl_fn_80368280_00001AE4:
    lis r3, lbl_8074DAF8@ha
    addi r3, r3, lbl_8074DAF8@l
    b lbl_fn_80368280_00001B04
lbl_fn_80368280_00001AF0:
    cmpw r26, r0
    bne lbl_fn_80368280_00001B00
    li r0, 0x1
    b lbl_fn_80368280_00001B14
lbl_fn_80368280_00001B00:
    addi r3, r3, 0x4
lbl_fn_80368280_00001B04:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001AF0
    li r0, 0x0
lbl_fn_80368280_00001B14:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001C60
    lwz r24, 0x0(r27)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r26, -0x1
    mr r3, r24
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001B74
    addi r3, r24, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r26, r3, 0x64
    bne lbl_fn_80368280_00001B74
    mr r3, r24
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001B74
    addi r3, r24, 0x6
    bl fn_80684600
    add r26, r26, r3
lbl_fn_80368280_00001B74:
    lis r4, lbl_8074DA2C@ha
    li r3, 0x0
    addi r4, r4, lbl_8074DA2C@l
    b lbl_fn_80368280_00001BA8
lbl_fn_80368280_00001B84:
    cmpw r26, r0
    bne lbl_fn_80368280_00001BA0
    mulli r0, r3, 0xc
    lis r3, lbl_8074DA2C@ha
    addi r3, r3, lbl_8074DA2C@l
    add r26, r3, r0
    b lbl_fn_80368280_00001BB8
lbl_fn_80368280_00001BA0:
    addi r4, r4, 0xc
    addi r3, r3, 0x1
lbl_fn_80368280_00001BA8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001B84
    li r26, 0x0
lbl_fn_80368280_00001BB8:
    cmpwi r26, 0x0
    bne lbl_fn_80368280_00001BFC
    lwz r4, 0x48(r27)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001C60
    lwz r3, 0x60(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001C60
    lwz r5, 0x10d0(r28)
    lwz r0, 0x4(r3)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r25, r4, r3
    b lbl_fn_80368280_00001C60
lbl_fn_80368280_00001BFC:
    lwz r5, 0x4(r26)
    cmplwi r5, 0xfff
    ble lbl_fn_80368280_00001C40
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001C38
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x220
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xcc
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x220
    bl fn_800697D8
lbl_fn_80368280_00001C38:
    li r5, 0x0
    b lbl_fn_80368280_00001C4C
lbl_fn_80368280_00001C40:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r5, 0x10e4(r3)
lbl_fn_80368280_00001C4C:
    lwz r0, 0x8(r26)
    srawi r4, r5, 31
    srwi r3, r0, 31
    subfc r0, r0, r5
    adde r25, r4, r3
lbl_fn_80368280_00001C60:
    cmpwi r25, 0x0
    beq lbl_fn_80368280_00001CF8
    lwz r24, 0x0(r31)
    lis r4, lbl_8074DC1C@ha
    addi r4, r4, lbl_8074DC1C@l
    li r25, -0x1
    mr r3, r24
    li r5, 0x2
    addi r4, r4, 0xc9
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001CC0
    addi r3, r24, 0x2
    bl fn_80684600
    cmpwi r3, 0x9
    mulli r25, r3, 0x64
    bne lbl_fn_80368280_00001CC0
    mr r3, r24
    bl strlen
    cmplwi r3, 0x8
    blt lbl_fn_80368280_00001CC0
    addi r3, r24, 0x6
    bl fn_80684600
    add r25, r25, r3
lbl_fn_80368280_00001CC0:
    lis r3, lbl_8074DB70@ha
    addi r3, r3, lbl_8074DB70@l
    b lbl_fn_80368280_00001CE0
lbl_fn_80368280_00001CCC:
    cmpw r25, r0
    bne lbl_fn_80368280_00001CDC
    li r0, 0x1
    b lbl_fn_80368280_00001CF0
lbl_fn_80368280_00001CDC:
    addi r3, r3, 0x4
lbl_fn_80368280_00001CE0:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bgt lbl_fn_80368280_00001CCC
    li r0, 0x0
lbl_fn_80368280_00001CF0:
    cntlzw r0, r0
    srwi r25, r0, 5
lbl_fn_80368280_00001CF8:
    cmpwi r25, 0x0
    beq lbl_fn_80368280_00001D20
    cmpwi r30, 0x2
    bne lbl_fn_80368280_00001D18
    cmpwi r29, 0x9
    bne lbl_fn_80368280_00001D18
    li r0, 0x0
    b lbl_fn_80368280_00001D24
lbl_fn_80368280_00001D18:
    li r0, 0x1
    b lbl_fn_80368280_00001D24
lbl_fn_80368280_00001D20:
    li r0, 0x0
lbl_fn_80368280_00001D24:
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001D4C
    lwz r0, 0x17e4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00001D4C
    mr r3, r28
    li r4, 0x1c0
    li r5, 0x1
    li r6, 0x0
    bl fn_80370320
lbl_fn_80368280_00001D4C:
    lwz r5, 0x5544(r28)
    li r0, 0x0
    stw r0, 0x54ec(r28)
    cmpwi r5, 0x0
    beq lbl_fn_80368280_00001D6C
    lwz r3, lbl_8087F518
    lwz r4, 0x554c(r28)
    bl fn_8046F96C
lbl_fn_80368280_00001D6C:
    li r24, 0x0
    li r29, 0x0
    b lbl_fn_80368280_00001D8C
lbl_fn_80368280_00001D78:
    lwz r3, 0x5558(r28)
    lwzx r3, r3, r29
    bl fn_800D8458
    addi r24, r24, 0x1
    addi r29, r29, 0x4
lbl_fn_80368280_00001D8C:
    lwz r0, 0x5550(r28)
    cmplw r24, r0
    blt lbl_fn_80368280_00001D78
    lwz r3, 0x554c(r28)
    li r29, 0x0
    stw r29, 0x5544(r28)
    cmpwi r3, 0x0
    stw r29, 0x5548(r28)
    beq lbl_fn_80368280_00001DB8
    bl fn_80084C24
    stw r29, 0x554c(r28)
lbl_fn_80368280_00001DB8:
    lwz r3, 0x5558(r28)
    li r29, 0x0
    stw r29, 0x5550(r28)
    cmpwi r3, 0x0
    stw r29, 0x5554(r28)
    beq lbl_fn_80368280_00001DD8
    bl fn_80084C24
    stw r29, 0x5558(r28)
lbl_fn_80368280_00001DD8:
    addi r3, r28, 0x550c
    bl fn_80470580
    mr r24, r3
    addi r3, r28, 0x550c
    bl fn_8047059C
    cmpwi r24, 0x0
    srwi r5, r3, 2
    beq lbl_fn_80368280_00001E0C
    lwz r3, lbl_8087F518
    mr r4, r24
    bl fn_8046F96C
    addi r3, r28, 0x550c
    bl fn_80473F88
lbl_fn_80368280_00001E0C:
    lwz r3, lbl_8087F448
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001E58
    lwz r0, 0x84(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001E2C
    lwz r0, 0xc4(r3)
    b lbl_fn_80368280_00001E30
lbl_fn_80368280_00001E2C:
    lwz r0, 0x8c(r3)
lbl_fn_80368280_00001E30:
    cmpwi r0, 0x0
    ble lbl_fn_80368280_00001E58
    bl fn_8037D34C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00001E58
    lwz r3, lbl_8087F448
    li r4, 0x0
    li r5, 0x10
    li r6, 0x2d
    bl fn_8037D3E8
lbl_fn_80368280_00001E58:
    lwz r3, lbl_8087F4E8
    li r0, 0x1
    stw r0, 0x88(r3)
    lwz r25, lbl_8087F534
    bl OSGetTime
    stw r4, 0x6c(r25)
    stw r3, 0x68(r25)
    lwz r0, 0x64(r25)
    lwz r5, 0x60(r25)
    subfc r0, r0, r4
    stw r0, 0x74(r25)
    subfe r0, r5, r3
    stw r0, 0x70(r25)
    b lbl_fn_80368280_000031A0
lbl_fn_80368280_00001E90:
    lwz r0, 0x54e4(r3)
    lwz r4, lbl_8087F8A0
    cmpwi r0, 0x0
    lwz r4, 0x48(r4)
    bne lbl_fn_80368280_00001EEC
    lwz r0, 0x12a4(r4)
    li r5, 0x0
    srwi. r0, r0, 31
    beq lbl_fn_80368280_00001EC4
    lwz r0, 0xc48(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001EC4
    li r5, 0x1
lbl_fn_80368280_00001EC4:
    cmpwi r5, 0x0
    bne lbl_fn_80368280_00001ED8
    lwz r0, 0x12a4(r4)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_80368280_00001EEC
lbl_fn_80368280_00001ED8:
    lwz r4, lbl_8087EFB4
    li r0, 0x1
    addis r4, r4, 0x5
    stw r0, 0x4964(r4)
    b lbl_fn_80368280_00001EFC
lbl_fn_80368280_00001EEC:
    lwz r4, lbl_8087EFB4
    li r0, 0x0
    addis r4, r4, 0x5
    stw r0, 0x4964(r4)
lbl_fn_80368280_00001EFC:
    lwz r0, 0x5674(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00001F28
    lwz r3, lbl_8087F0A8
    li r4, 0x9
    addi r3, r3, 0x48c
    bl fn_801240B4
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00001F28
    li r0, 0x1
    stw r0, 0x5674(r28)
lbl_fn_80368280_00001F28:
    lwz r0, 0x566c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00001F48
    li r0, 0x0
    stw r0, 0x566c(r28)
    mr r3, r28
    bl fn_80370CD0
    b lbl_fn_80368280_000031A0
lbl_fn_80368280_00001F48:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000218C
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0x8
    bne lbl_fn_80368280_00001F70
    lwz r3, 0x5744(r28)
    subi r0, r3, 0x1
    stw r0, 0x5744(r28)
lbl_fn_80368280_00001F70:
    lwz r0, 0x5744(r28)
    cmplwi r0, 0x5460
    blt lbl_fn_80368280_0000218C
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0x6
    bne lbl_fn_80368280_00001FA4
    lwz r3, 0x575c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000218C
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x575c(r28)
    b lbl_fn_80368280_0000218C
lbl_fn_80368280_00001FA4:
    lwz r3, 0x575c(r28)
    cmpwi r3, 0x0
    bne lbl_fn_80368280_0000204C
    cmpwi r0, 0x8
    bne lbl_fn_80368280_00001FC8
    lwz r3, lbl_8087F540
    lwz r0, 0x70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_0000218C
lbl_fn_80368280_00001FC8:
    mr r3, r28
    li r4, 0x3c
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x575c(r28)
    lis r4, 0x2
    lfs f0, lbl_80885758
    subi r4, r4, 0x7960
    stfs f0, 0x74(r3)
    li r0, 0x1
    lwz r3, 0x575c(r28)
    stw r4, 0x5c(r3)
    lwz r3, 0x575c(r28)
    stw r0, 0x48(r3)
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000218C
    lfs f1, lbl_8088570C
    li r4, 0x0
    li r5, 0x3c
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, lbl_8088570C
    li r5, 0x3c
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, lbl_8088570C
    li r5, 0x3c
    bl fn_800D0240
    b lbl_fn_80368280_0000218C
lbl_fn_80368280_0000204C:
    lwz r0, 0x54(r3)
    lwz r3, 0x4c(r3)
    cmpw r3, r0
    blt lbl_fn_80368280_0000218C
    lwz r3, 0x10d8(r28)
    lwz r3, 0x64(r3)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80368280_00002094
    cmpwi r0, 0x4
    beq lbl_fn_80368280_00002094
    lwz r3, 0x5624(r28)
    li r0, 0x12
    stw r0, 0x78(r3)
    lwz r3, 0x5624(r28)
    bl fn_8006A900
    li r0, 0x1
    stw r0, 0x566c(r28)
lbl_fn_80368280_00002094:
    lwz r3, 0x56ec(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000020AC
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80368280_000020AC:
    lwz r3, 0x56f0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000020C4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80368280_000020C4:
    lwz r3, lbl_8087F580
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000020D4
    bl fn_804A2FBC
lbl_fn_80368280_000020D4:
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F540
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    lwz r3, 0x567c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002108
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80368280_00002108:
    lwz r3, lbl_8087EFE8
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000215C
    li r4, 0x0
    li r5, 0x0
    bl fn_800CF45C
    lwz r3, lbl_8087EFE8
    li r4, 0x0
    lfs f1, lbl_80885708
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x1
    lfs f1, lbl_80885708
    li r5, 0x0
    bl fn_800D0240
    lwz r3, lbl_8087EFE8
    li r4, 0x2
    lfs f1, lbl_80885708
    li r5, 0x0
    bl fn_800D0240
lbl_fn_80368280_0000215C:
    lwz r3, lbl_8087F418
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000218C
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_803606CC
    lwz r3, lbl_8087F418
    li r4, 0x0
    li r5, 0x1
    li r6, 0x0
    bl fn_80360780
lbl_fn_80368280_0000218C:
    lwz r0, 0x5684(r28)
    lwz r3, 0x5760(r28)
    cmpwi r0, 0x0
    subi r0, r3, 0x1
    stw r0, 0x5760(r28)
    beq lbl_fn_80368280_000021C4
    mr r3, r28
    bl fn_8036E170
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000021BC
    mr r3, r28
    bl fn_8036E494
lbl_fn_80368280_000021BC:
    li r0, 0x0
    stw r0, 0x5684(r28)
lbl_fn_80368280_000021C4:
    lwz r0, 0x54e4(r28)
    cmplwi r0, 0xe
    bgt lbl_fn_80368280_00002F18
    lis r3, jumptable_8078A22C@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078A22C@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r3, 0x5620(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002F18
    li r0, 0x0
    stw r0, 0x54f0(r28)
    b lbl_fn_80368280_00002F18
    lwz r3, 0x5750(r28)
    lwz r0, 0xbc(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00002F18
    lwz r25, 0xb0(r3)
    mr r3, r28
    bl fn_8036EE0C
    lwz r0, 0x5754(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00002244
    lwz r4, 0x5758(r28)
    mr r3, r28
    mr r5, r25
    li r6, 0x0
    bl fn_80370320
    b lbl_fn_80368280_000022B8
lbl_fn_80368280_00002244:
    lwz r5, 0x5758(r28)
    cmplwi r5, 0xff
    ble lbl_fn_80368280_00002284
    lwz r0, lbl_8087EEB8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000022B8
    lis r4, lbl_8074DC1C@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_8074DC1C@l
    addi r4, r4, 0xa4
    crclr 6
    bl sprintf
    lwz r3, lbl_8087EEB8
    addi r4, r1, 0x120
    bl fn_800697D8
    b lbl_fn_80368280_000022B8
lbl_fn_80368280_00002284:
    slwi r0, r5, 2
    add r3, r28, r0
    lwz r6, 0x50e4(r3)
    stw r25, 0x50e4(r3)
    lwz r3, 0x10d8(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000022B8
    lwz r3, 0x134(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000022B8
    mr r7, r25
    li r4, 0x0
    bl fn_803AB96C
lbl_fn_80368280_000022B8:
    lwz r3, 0x5750(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F18
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x5750(r28)
    b lbl_fn_80368280_00002F18
    lwz r3, lbl_8087F490
    lwz r0, 0xd8c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00002348
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002348
    lwz r0, 0x56f4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000233C
    lwz r0, 0x5718(r28)
    mr r3, r28
    slwi r0, r0, 2
    add r4, r28, r0
    lwz r4, 0x56f8(r4)
    bl fn_80376324
    lwz r4, 0x5718(r28)
    lwz r3, 0x56f4(r28)
    addi r0, r4, 0x1
    clrlwi r4, r0, 29
    stw r4, 0x5718(r28)
    subi r0, r3, 0x1
    stw r0, 0x56f4(r28)
lbl_fn_80368280_0000233C:
    lwz r3, lbl_8087F490
    bl fn_803E4478
    b lbl_fn_80368280_00002F18
lbl_fn_80368280_00002348:
    lwz r3, lbl_8087F490
    lwz r0, 0xd8c(r3)
    cmpwi r0, 0x1
    beq lbl_fn_80368280_0000236C
    lwz r0, 0x56f4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000236C
    li r0, 0x0
    stw r0, 0x56f4(r28)
lbl_fn_80368280_0000236C:
    lwz r3, lbl_8087F8A0
    lwz r3, 0x48(r3)
    bl fn_800E3F5C
    lwz r4, 0x56a4(r28)
    cmpwi r4, 0x0
    ble lbl_fn_80368280_000024B8
    lwz r3, 0x569c(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80368280_00002454
    subic. r0, r3, 0x1
    stw r0, 0x569c(r28)
    bgt lbl_fn_80368280_000024B8
    lwz r7, lbl_8087EFA8
    li r0, 0x1
    lfs f0, lbl_80885748
    lwz r3, 0x244(r7)
    lwz r6, 0x248(r7)
    lfs f6, 0x24c(r7)
    lfs f5, 0x250(r7)
    lwz r5, 0x254(r7)
    lwz r4, 0x258(r7)
    lfs f4, 0x25c(r7)
    lfs f3, 0x260(r7)
    lwz r7, 0x240(r7)
    stw r7, 0x56a8(r28)
    stw r3, 0x56ac(r28)
    stw r6, 0x56b0(r28)
    stfs f6, 0x56b4(r28)
    stfs f5, 0x56b8(r28)
    stw r5, 0x56bc(r28)
    stw r4, 0x56c0(r28)
    stfs f4, 0x56c4(r28)
    stfs f3, 0x56c8(r28)
    lwz r7, lbl_8087EFA8
    stw r3, 0xfc(r1)
    stw r0, 0x240(r7)
    stw r3, 0x244(r7)
    stw r6, 0x248(r7)
    stfs f6, 0x24c(r7)
    stfs f5, 0x250(r7)
    stw r5, 0x254(r7)
    stw r4, 0x258(r7)
    stfs f4, 0x25c(r7)
    stfs f3, 0x260(r7)
    lwz r3, lbl_8087EFA8
    stw r6, 0x100(r1)
    lfs f7, 0x3a4(r3)
    stfs f7, 0x56cc(r28)
    lwz r3, lbl_8087EFA8
    stfs f6, 0x104(r1)
    stfs f5, 0x108(r1)
    stw r5, 0x10c(r1)
    stw r4, 0x110(r1)
    stfs f4, 0x114(r1)
    stfs f3, 0x118(r1)
    stw r0, 0xf8(r1)
    stfs f0, 0x3a4(r3)
    b lbl_fn_80368280_000024B8
lbl_fn_80368280_00002454:
    subic. r0, r4, 0x1
    stw r0, 0x56a4(r28)
    bgt lbl_fn_80368280_000024B8
    lwz r3, lbl_8087EFA8
    lwz r0, 0x56a8(r28)
    stw r0, 0x240(r3)
    lwz r0, 0x56ac(r28)
    stw r0, 0x244(r3)
    lwz r0, 0x56b0(r28)
    stw r0, 0x248(r3)
    lfs f0, 0x56b4(r28)
    stfs f0, 0x24c(r3)
    lfs f0, 0x56b8(r28)
    stfs f0, 0x250(r3)
    lwz r0, 0x56bc(r28)
    stw r0, 0x254(r3)
    lwz r0, 0x56c0(r28)
    stw r0, 0x258(r3)
    lfs f0, 0x56c4(r28)
    stfs f0, 0x25c(r3)
    lfs f0, 0x56c8(r28)
    stfs f0, 0x260(r3)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x56cc(r28)
    stfs f0, 0x3a4(r3)
lbl_fn_80368280_000024B8:
    lwz r4, 0x10e8(r28)
    cmpwi r4, 0xa
    blt lbl_fn_80368280_000024E4
    lis r3, 0x6666
    addi r0, r3, 0x6667
    mulhw r0, r0, r4
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r0, r0, r3
    stw r0, 0x10ec(r28)
    b lbl_fn_80368280_00002500
lbl_fn_80368280_000024E4:
    cmpwi r4, -0xa
    bgt lbl_fn_80368280_000024F8
    li r0, -0x1
    stw r0, 0x10ec(r28)
    b lbl_fn_80368280_00002500
lbl_fn_80368280_000024F8:
    li r0, 0x0
    stw r0, 0x10ec(r28)
lbl_fn_80368280_00002500:
    lwz r3, 0x5590(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002510
    bl fn_8056C3DC
lbl_fn_80368280_00002510:
    lwz r3, 0x5620(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002528
    li r0, 0x0
    stw r0, 0x54f0(r28)
lbl_fn_80368280_00002528:
    lwz r0, 0x868(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00002540
    mr r3, r28
    bl fn_8036CFA4
    b lbl_fn_80368280_0000265C
lbl_fn_80368280_00002540:
    lwz r3, lbl_8087F490
    bl fn_803E32EC
    lwz r3, lbl_8087F8A0
    lwz r4, 0x48(r3)
    lwz r0, 0x648(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000025EC
    lwz r3, lbl_8087F0A8
    li r4, 0xb
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000025B0
    lwz r3, 0x5590(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000025B0
    bl fn_80570A50
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000025B0
    lwz r0, 0x5594(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000025B0
    lwz r0, 0x55a4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80368280_000025B0
    mr r3, r28
    bl fn_803731E8
    b lbl_fn_80368280_0000265C
lbl_fn_80368280_000025B0:
    lwz r3, 0x868(r28)
    cmpwi r3, 0x6
    bne lbl_fn_80368280_000025E0
    lwz r0, 0x86c(r28)
    cmpw r3, r0
    bne lbl_fn_80368280_000025E0
    lwz r3, lbl_8087F9F8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_000025E0
    addi r3, r28, 0x6c
    bl fn_80390A88
lbl_fn_80368280_000025E0:
    mr r3, r28
    bl fn_8036CC90
    b lbl_fn_80368280_0000265C
lbl_fn_80368280_000025EC:
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x5
    bne lbl_fn_80368280_0000260C
    addi r3, r28, 0x6c
    bl fn_8038F52C
    addi r3, r28, 0x6c
    bl fn_8037F744
    b lbl_fn_80368280_00002614
lbl_fn_80368280_0000260C:
    mr r3, r28
    bl fn_8036CC90
lbl_fn_80368280_00002614:
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000265C
    lwz r3, lbl_8087F0A8
    li r4, 0x2d
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000265C
    lwz r0, 0x56f0(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_0000265C
    lwz r3, lbl_8087FA20
    lwz r3, 0x258(r3)
    lwz r0, 0x160c(r3)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0x160c(r3)
lbl_fn_80368280_0000265C:
    addi r3, r28, 0xd18
    bl fn_803792F0
    b lbl_fn_80368280_00002F18
    lwz r3, lbl_8087F440
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F18
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80368280_00002F18
    lwz r3, 0x5624(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F18
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002F18
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x1
    bgt lbl_fn_80368280_00002F18
    li r0, 0x0
    stw r0, 0x4c(r3)
    li r0, 0x2
    lwz r3, 0x5624(r28)
    stw r0, 0x58(r3)
    b lbl_fn_80368280_00002F18
    mr r3, r28
    bl fn_80373AE8
    lwz r0, 0x10ac(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000026F4
    lwz r5, lbl_8087F8A0
    li r4, 0x0
    lwz r3, 0x10d8(r28)
    lwz r5, 0x48(r5)
    lwz r3, 0x64(r3)
    addi r5, r5, 0x528
    bl fn_804A0580
    b lbl_fn_80368280_00002710
lbl_fn_80368280_000026F4:
    lwz r5, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x10d8(r28)
    lwz r5, 0x48(r5)
    lwz r3, 0x64(r3)
    addi r5, r5, 0x528
    bl fn_804A0580
lbl_fn_80368280_00002710:
    lwz r0, 0x5598(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002F18
    lwz r0, 0x55ac(r28)
    cmpwi r0, 0x1
    bne lbl_fn_80368280_00002F18
    addi r3, r28, 0x6c
    li r24, 0x0
    bl fn_8037F744
    lwz r6, lbl_8087F490
    cmpwi r6, 0x0
    beq lbl_fn_80368280_00002788
    li r3, 0x6
    stw r3, 0x764(r6)
    li r4, 0x0
    li r0, 0xd
    stw r0, 0x768(r6)
    li r5, -0x1
    stw r5, 0x76c(r6)
    stw r4, 0x770(r6)
    stw r4, 0x774(r6)
    stw r4, 0x778(r6)
    stw r5, 0x90(r1)
    stw r4, 0x94(r1)
    stw r4, 0x98(r1)
    stw r4, 0x9c(r1)
    stw r4, 0xa0(r1)
    stw r3, 0x88(r1)
    stw r0, 0x8c(r1)
    stw r4, 0x77c(r6)
lbl_fn_80368280_00002788:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000027A4
    li r24, 0x1
lbl_fn_80368280_000027A4:
    cmpwi r24, 0x0
    beq lbl_fn_80368280_000027B4
    mr r3, r28
    bl fn_803737C0
lbl_fn_80368280_000027B4:
    lwz r3, 0x55a4(r28)
    subi r0, r3, 0x1
    stw r0, 0x55a4(r28)
    b lbl_fn_80368280_00002F18
    lwz r0, 0x86c(r28)
    lwz r3, 0x868(r28)
    cmpw r3, r0
    bne lbl_fn_80368280_000027E0
    lwz r3, lbl_8087EFA8
    li r0, 0x0
    stw r0, 0x240(r3)
lbl_fn_80368280_000027E0:
    lwz r3, lbl_8087F3C0
    li r4, 0x5
    bl fn_8023A614
    lwz r3, lbl_8087F3C0
    li r4, 0x7
    bl fn_8023A614
    addi r3, r28, 0xd18
    bl fn_803792F0
    lwz r5, lbl_8087F8A0
    li r4, 0x0
    lwz r3, 0x10d8(r28)
    lwz r5, 0x48(r5)
    lwz r3, 0x64(r3)
    addi r5, r5, 0x528
    bl fn_804A0580
    lwz r3, lbl_8087F9F8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002F18
    mr r3, r28
    bl fn_803743AC
    b lbl_fn_80368280_00002F18
    lwz r3, lbl_8087F540
    lwz r0, 0x1a38(r3)
    mulli r0, r0, 0x65c
    add r3, r3, r0
    addi r3, r3, 0xc8
    bl fn_80116E7C
    cmpwi r3, 0x0
    bne lbl_fn_80368280_00002860
    mr r3, r28
    bl fn_8036CFA4
lbl_fn_80368280_00002860:
    lwz r3, lbl_8087F540
    lwz r4, lbl_8087F9C0
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_0000288C
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80368280_0000288C
    lwz r3, 0x5650(r28)
    addi r0, r3, 0x1
    stw r0, 0x5650(r28)
lbl_fn_80368280_0000288C:
    lwz r0, 0x5650(r28)
    cmpwi r0, 0x5a
    bgt lbl_fn_80368280_000028A4
    lwz r0, 0x80(r4)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_00002A4C
lbl_fn_80368280_000028A4:
    lwz r3, lbl_8087F540
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A4C
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000028D0
    lwz r0, 0x190(r3)
    cmpwi r0, 0x19d
    beq lbl_fn_80368280_00002A4C
lbl_fn_80368280_000028D0:
    bl fn_80541214
    lwz r3, 0x10(r3)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_80368280_000028F0
    cmpwi r3, 0x3
    beq lbl_fn_80368280_00002980
    b lbl_fn_80368280_00002A40
lbl_fn_80368280_000028F0:
    lwz r3, 0x5654(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80368280_0000295C
    subi r0, r3, 0x1
    stw r0, 0x5654(r28)
    lis r6, lbl_807C7030@ha
    addi r5, r1, 0x10
    addi r6, r6, lbl_807C7030@l
    lwz r3, lbl_8087F580
    psq_l f1, 0x0(r6), 0, 0
    li r4, 0x7
    lfs f2, 0x8(r6)
    li r6, 0x0
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x18(r1)
    bl fn_804A5E40
    lwz r3, lbl_8087F0A8
    li r4, 0x28
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A90
    lwz r3, lbl_8087F540
    li r4, 0x0
    li r5, 0x0
    bl fn_8047F994
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_0000295C:
    lwz r3, lbl_8087F0A8
    li r4, 0x27
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A90
    li r0, 0x78
    stw r0, 0x5654(r28)
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_00002980:
    lwz r0, 0x565c(r28)
    lwz r24, lbl_8087EEF0
    cmpwi r0, 0x0
    bne lbl_fn_80368280_000029A8
    lwz r3, lbl_8087F0A8
    li r4, 0x27
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000029C4
lbl_fn_80368280_000029A8:
    lwz r3, lbl_8087F540
    li r4, 0x0
    li r5, 0x0
    bl fn_8047F994
    li r0, 0x0
    stw r0, 0x565c(r28)
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_000029C4:
    lwz r3, lbl_8087F0A8
    li r4, 0x27
    addi r3, r3, 0x48c
    bl fn_80123C7C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000029F0
    lwz r3, lbl_8087F540
    li r4, 0x1
    li r5, 0x0
    bl fn_8047F994
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_000029F0:
    cmpwi r24, 0x0
    beq lbl_fn_80368280_00002A90
    lwz r0, 0xd90(r24)
    li r29, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002A2C
    lis r4, 0x1
    mr r3, r24
    subi r0, r4, 0xe4f
    addi r4, r24, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A2C
    li r29, 0x1
lbl_fn_80368280_00002A2C:
    cmpwi r29, 0x0
    beq lbl_fn_80368280_00002A90
    lwz r3, lbl_8087F540
    bl fn_8047F91C
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_00002A40:
    li r0, 0x0
    stw r0, 0x565c(r28)
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_00002A4C:
    lwz r3, lbl_8087F0A8
    li r4, 0x27
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A70
    li r0, 0x1
    stw r0, 0x565c(r28)
    b lbl_fn_80368280_00002A90
lbl_fn_80368280_00002A70:
    lwz r3, lbl_8087F0A8
    li r4, 0x27
    addi r3, r3, 0x48c
    bl fn_80123C7C
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002A90
    li r0, 0x0
    stw r0, 0x565c(r28)
lbl_fn_80368280_00002A90:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F18
    lwz r0, 0x2388(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002D78
    lwz r4, lbl_8087EFA8
    lwz r0, 0x414(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002D78
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002D78
    lwz r0, 0x194(r3)
    cmpwi r0, 0xa
    bne lbl_fn_80368280_00002D78
    lwz r0, 0x5768(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002B14
    li r0, 0x1
    stw r0, 0x5768(r28)
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    stw r4, 0x5774(r28)
    stw r3, 0x5770(r28)
lbl_fn_80368280_00002B14:
    bl OSGetTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r0, 0xf8(r6)
    addi r6, r5, 0x4dd3
    li r5, 0x0
    srwi r0, r0, 2
    mulhwu r0, r6, r0
    srwi r6, r0, 6
    bl __div2i
    lwz r0, 0x5774(r28)
    lis r5, lbl_8074DBE8@ha
    lfd f6, lbl_8074DBE8@l(r5)
    subfc r0, r0, r4
    lfs f4, lbl_8088575C
    xoris r0, r0, 0x8000
    stw r0, 0x824(r1)
    lfs f3, lbl_80885760
    lfd f5, 0x820(r1)
    lfs f0, 0x5658(r28)
    fsubs f5, f5, f6
    stw r4, 0x5774(r28)
    stw r3, 0x5770(r28)
    fdivs f4, f5, f4
    fsubs f3, f4, f3
    fadds f0, f0, f3
    stfs f0, 0x5658(r28)
    lwz r3, lbl_8087F540
    lwz r0, 0x1e78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002BA0
    lfs f3, 0x1e88(r3)
    lfs f0, lbl_80885708
    fadds f0, f3, f0
    stfs f0, 0x1e88(r3)
lbl_fn_80368280_00002BA0:
    lfs f3, 0x5658(r28)
    lfs f0, lbl_80885760
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_80368280_00002D78
    lfs f0, lbl_80885728
    fmuls f1, f0, f3
    bl fn_8068A918
    frsp f0, f1
    lwz r0, 0x38(r28)
    mr r3, r28
    li r4, 0x0
    ori r0, r0, 0x10
    stw r0, 0x38(r28)
    fctiwz f0, f0
    clrlwi r26, r0, 31
    stfd f0, 0x830(r1)
    lwz r29, 0x834(r1)
    mr r25, r29
    bl fn_800D246C
    b lbl_fn_80368280_00002C1C
lbl_fn_80368280_00002BF4:
    mr r3, r28
    bl fn_800D2494
    lwz r3, lbl_8087F3C0
    li r4, 0x0
    li r5, 0x0
    li r6, -0x1
    bl fn_8023AE34
    lwz r3, lbl_8087F3C0
    bl fn_80239C14
    subi r25, r25, 0x1
lbl_fn_80368280_00002C1C:
    cmpwi r25, 0x0
    bgt lbl_fn_80368280_00002BF4
    lwz r0, 0x38(r28)
    mr r3, r28
    mr r4, r26
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x38(r28)
    bl fn_800D246C
    xoris r0, r29, 0x8000
    stw r0, 0x82c(r1)
    lis r3, lbl_8074DBE8@ha
    lfs f3, lbl_80885760
    lfd f5, lbl_8074DBE8@l(r3)
    lfd f4, 0x828(r1)
    lfs f0, 0x5658(r28)
    fsubs f4, f4, f5
    fnmsubs f0, f3, f4, f0
    stfs f0, 0x5658(r28)
    lwz r3, lbl_8087F540
    lwz r0, 0x1e78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002D78
    cmpwi cr1, r29, 0x0
    li r6, 0x0
    ble cr1, lbl_fn_80368280_00002D78
    cmpwi r29, 0x8
    subi r4, r29, 0x8
    ble lbl_fn_80368280_00002D50
    li r5, 0x0
    blt cr1, lbl_fn_80368280_00002CA8
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r29, r0
    bgt lbl_fn_80368280_00002CA8
    li r5, 0x1
lbl_fn_80368280_00002CA8:
    cmpwi r5, 0x0
    beq lbl_fn_80368280_00002D50
    addi r0, r4, 0x7
    lfs f3, lbl_80885708
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x0
    ble lbl_fn_80368280_00002D50
lbl_fn_80368280_00002CC8:
    lwz r3, lbl_8087F540
    addi r6, r6, 0x8
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    bdnz lbl_fn_80368280_00002CC8
lbl_fn_80368280_00002D50:
    subf r0, r6, r29
    lfs f3, lbl_80885708
    mtctr r0
    cmpw r6, r29
    bge lbl_fn_80368280_00002D78
lbl_fn_80368280_00002D64:
    lwz r3, lbl_8087F540
    lfs f0, 0x1e88(r3)
    fadds f0, f0, f3
    stfs f0, 0x1e88(r3)
    bdnz lbl_fn_80368280_00002D64
lbl_fn_80368280_00002D78:
    lwz r3, lbl_8087F540
    lwz r0, 0x1e78(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_00002F18
    lfs f3, 0x1e8c(r3)
    lfs f0, lbl_80885708
    fadds f0, f3, f0
    stfs f0, 0x1e8c(r3)
    b lbl_fn_80368280_00002F18
    lwz r5, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x10d8(r28)
    lwz r5, 0x48(r5)
    lwz r3, 0x64(r3)
    addi r5, r5, 0x528
    bl fn_804A0580
    addi r3, r28, 0xd18
    bl fn_803792F0
    lwz r0, 0xd18(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002F18
    mr r3, r28
    bl fn_803727DC
    b lbl_fn_80368280_00002F18
    lwz r5, lbl_8087F8A0
    li r4, 0x1
    lwz r3, 0x10d8(r28)
    lwz r5, 0x48(r5)
    lwz r3, 0x64(r3)
    addi r5, r5, 0x528
    bl fn_804A0580
    addi r3, r28, 0xd18
    bl fn_803792F0
    lwz r0, 0x1070(r28)
    cmpwi r0, 0x96
    ble lbl_fn_80368280_00002F18
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0xa
    bne lbl_fn_80368280_00002F18
    li r0, 0xb
    stw r0, 0x54e4(r28)
    li r0, 0x0
    lwz r7, lbl_8087EFA8
    stw r0, 0xa4(r1)
    lwz r6, 0x244(r7)
    lwz r5, 0x248(r7)
    lfs f5, 0x24c(r7)
    lfs f4, 0x250(r7)
    lwz r4, 0x254(r7)
    lwz r3, 0x258(r7)
    lfs f3, 0x25c(r7)
    lfs f0, 0x260(r7)
    stw r6, 0xa8(r1)
    stw r0, 0x240(r7)
    stw r6, 0x244(r7)
    stw r5, 0x248(r7)
    stfs f5, 0x24c(r7)
    stfs f4, 0x250(r7)
    stw r4, 0x254(r7)
    stw r3, 0x258(r7)
    stfs f3, 0x25c(r7)
    stw r5, 0xac(r1)
    stfs f5, 0xb0(r1)
    stfs f4, 0xb4(r1)
    stw r4, 0xb8(r1)
    stw r3, 0xbc(r1)
    stfs f3, 0xc0(r1)
    stfs f0, 0xc4(r1)
    stfs f0, 0x260(r7)
    b lbl_fn_80368280_00002F18
    addi r3, r28, 0x6c
    bl fn_8037F744
    lwz r3, 0x5620(r28)
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002F18
    li r0, 0x0
    stw r0, 0x54f0(r28)
    b lbl_fn_80368280_00002F18
    lwz r3, 0x56ec(r28)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80368280_00002EF4
    lwz r0, 0x88(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_00002EF4
    lwz r4, lbl_8087F430
    addi r4, r4, 0x260
    bl fn_805BA358
    lwz r3, lbl_8087F580
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F18
    bl fn_804A2F98
    b lbl_fn_80368280_00002F18
lbl_fn_80368280_00002EF4:
    lwz r0, 0x88(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80368280_00002F18
    lwz r3, lbl_8087F580
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F10
    bl fn_804A2FBC
lbl_fn_80368280_00002F10:
    mr r3, r28
    bl fn_80376568
lbl_fn_80368280_00002F18:
    lwz r3, lbl_8087F0A8
    li r4, 0x10
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F68
    mr r3, r28
    bl fn_8036E170
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00002F68
    lwz r3, 0x5624(r28)
    li r0, 0x12
    stw r0, 0x78(r3)
    lwz r3, 0x5624(r28)
    bl fn_8006A900
    li r0, -0x1
    li r3, 0x1
    stw r3, 0x5684(r28)
    stw r0, 0x5688(r28)
    stw r0, 0x568c(r28)
lbl_fn_80368280_00002F68:
    lwz r0, lbl_8087EFE8
    cmpwi r0, 0x0
    beq lbl_fn_80368280_0000301C
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_80368280_0000301C
    lwz r3, lbl_8087F8A0
    addi r4, r1, 0x4c
    lfs f0, lbl_80885708
    addi r5, r1, 0x40
    lwz r6, 0x48(r3)
    lis r3, lbl_8074DBF0@ha
    lfs f3, lbl_80885764
    lfs f2, 0x530(r6)
    psq_l f1, 0x528(r6), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    lfs f4, 0x50(r1)
    stfs f2, 0x54(r1)
    fadds f0, f4, f0
    stfs f0, 0x50(r1)
    lfs f2, 0xa0(r28)
    psq_l f1, 0x98(r28), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    lfs f0, 0x44(r1)
    stfs f2, 0x48(r1)
    fadds f1, f3, f0
    lfd f2, lbl_8074DBF0@l(r3)
    bl fn_8068AEA8
    frsp f3, f1
    lfs f0, lbl_80885764
    fcmpo cr0, f3, f0
    ble lbl_fn_80368280_00002FF0
    lfs f0, lbl_80885768
    fsubs f3, f3, f0
lbl_fn_80368280_00002FF0:
    lfs f0, lbl_8088576C
    fcmpo cr0, f3, f0
    bge lbl_fn_80368280_00003004
    lfs f0, lbl_80885768
    fadds f3, f3, f0
lbl_fn_80368280_00003004:
    lwz r3, lbl_8087EFE8
    addi r4, r1, 0x4c
    stfs f3, 0x44(r1)
    addi r5, r1, 0x40
    addi r3, r3, 0x2984
    bl fn_800C7F08
lbl_fn_80368280_0000301C:
    lwz r3, 0x564c(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80368280_00003058
    subic. r0, r3, 0x1
    stw r0, 0x564c(r28)
    bgt lbl_fn_80368280_00003058
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00003058
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00003058
    lwz r0, 0x54c(r3)
    rlwinm r0, r0, 0, 28, 26
    stw r0, 0x54c(r3)
lbl_fn_80368280_00003058:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80368280_000030CC
    lwz r4, 0x48(r3)
    li r5, 0x0
    b lbl_fn_80368280_000030A8
lbl_fn_80368280_00003070:
    lwz r0, 0x38(r4)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80368280_000030A4
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80368280_000030A4
    lwz r3, 0x5c(r4)
    lbz r0, 0x122(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80368280_000030A4
    addi r5, r5, 0x1
lbl_fn_80368280_000030A4:
    lwz r4, 0x14ac(r4)
lbl_fn_80368280_000030A8:
    cmpwi r4, 0x0
    bne lbl_fn_80368280_00003070
    lwz r0, 0x12fc(r28)
    cmpw r0, r5
    beq lbl_fn_80368280_000030CC
    mr r3, r28
    li r4, 0x86
    li r6, 0x0
    bl fn_80370320
lbl_fn_80368280_000030CC:
    lwz r3, 0x54e4(r28)
    lwz r0, 0x54e8(r28)
    cmpw r0, r3
    beq lbl_fn_80368280_000030EC
    li r0, 0x0
    stw r3, 0x54e8(r28)
    stw r0, 0x54ec(r28)
    b lbl_fn_80368280_000030F8
lbl_fn_80368280_000030EC:
    lwz r3, 0x54ec(r28)
    addi r0, r3, 0x1
    stw r0, 0x54ec(r28)
lbl_fn_80368280_000030F8:
    lwz r3, 0x56f0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80368280_00003150
    lwz r0, 0x38(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_80368280_00003134
    lwz r3, lbl_8087F540
    bl fn_80481668
    cmpwi r3, 0x0
    bne lbl_fn_80368280_000031A0
    lwz r3, 0x56f0(r28)
    li r4, 0x0
    bl fn_800D246C
    b lbl_fn_80368280_000031A0
lbl_fn_80368280_00003134:
    lwz r0, 0x58(r3)
    cmpwi r0, 0x4
    bne lbl_fn_80368280_000031A0
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x56f0(r28)
    b lbl_fn_80368280_000031A0
lbl_fn_80368280_00003150:
    lwz r0, 0x571c(r28)
    cmpwi r0, 0x0
    beq lbl_fn_80368280_000031A0
    lwz r0, 0x54e4(r28)
    cmpwi r0, 0x8
    beq lbl_fn_80368280_000031A0
    cmpwi r0, 0xd
    beq lbl_fn_80368280_000031A0
    lwz r5, 0x5740(r28)
    mr r3, r28
    lwz r4, 0x571c(r28)
    slwi r0, r5, 2
    addi r5, r5, 0x1
    add r6, r28, r0
    subi r0, r4, 0x1
    lwz r4, 0x5720(r6)
    clrlwi r5, r5, 29
    stw r5, 0x5740(r28)
    stw r0, 0x571c(r28)
    bl fn_80376324
lbl_fn_80368280_000031A0:
    addi r11, r1, 0x860
    bl _restgpr_24
    lwz r0, 0x864(r1)
    mtlr r0
    addi r1, r1, 0x860
    blr
}
