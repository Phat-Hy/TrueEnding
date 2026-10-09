#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void dtor_80084684(void);
extern void fn_8003EFB0(void);
extern void fn_80084320(void);
extern void fn_800BFAC8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800FDE60(void);
extern void fn_80116FC0(void);
extern void fn_8012D8B8(void);
extern void fn_801446F0(void);
extern void fn_8016E4C4(void);
extern void fn_80176ACC(void);
extern void fn_801F3FF8(void);
extern void fn_801F4AA0(void);
extern void fn_801F4CB4(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEE08(void);
extern void fn_80206C50(void);
extern void fn_8021C6A4(void);
extern void fn_80450A5C(void);
extern void fn_804EB874(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_805F98D0(void);
extern void fn_805F9920(void);
extern void fn_805F9990(void);
extern void fn_8068B770(void);
extern void fn_8068BC30(void);
extern void fn_8068BD60(void);
extern void fn_8068C240(void);

/* External data declarations */
extern u8 lbl_8075A880[];
extern u8 lbl_80791B20[];
extern u8 lbl_80791C28[];
extern u8 lbl_80791C60[];
extern u8 lbl_80791C98[];
extern u8 lbl_80791CD0[];
extern u8 lbl_80791D08[];
extern u8 lbl_80791D40[];
extern u8 lbl_80791D78[];
extern u8 lbl_80791DB0[];
extern u8 lbl_80791DE8[];
extern u8 lbl_80791E20[];
extern u8 lbl_80791E58[];
extern u8 lbl_80791E90[];
extern u8 lbl_80791EC8[];
extern u8 lbl_80791F00[];
extern u8 lbl_80791F38[];
extern u8 lbl_80791F70[];
extern u8 lbl_80791FA8[];
extern u8 lbl_80791FE0[];
extern u8 lbl_80792018[];
extern u8 lbl_80792050[];
extern u8 lbl_80792088[];
extern u8 lbl_807920C0[];
extern u8 lbl_807920F8[];
extern u8 lbl_80792130[];
extern u8 lbl_80792168[];
extern u8 lbl_807921A0[];
extern u8 lbl_807921D8[];
extern u8 lbl_80792210[];
extern u8 lbl_80792248[];
extern u8 lbl_80792280[];
extern u8 lbl_807922B8[];
extern u8 lbl_807922F0[];
extern u8 lbl_80792328[];
extern u8 lbl_80792360[];
extern u8 lbl_80792398[];
extern u8 lbl_807923D0[];
extern u8 lbl_80792408[];
extern u8 lbl_80792440[];
extern u8 lbl_80792478[];
extern u8 lbl_807924B0[];
extern u8 lbl_807924E8[];
extern u8 lbl_80792520[];
extern u8 lbl_80792558[];
extern u8 lbl_80792590[];
extern u8 lbl_807925C8[];
extern u8 lbl_80792600[];
extern u8 lbl_80792638[];
extern u8 lbl_80792670[];
extern u8 lbl_807926A8[];
extern u8 lbl_807926E0[];
extern u8 lbl_80792718[];
extern u8 lbl_80792750[];
extern u8 lbl_80792788[];
extern u8 lbl_807927C0[];
extern u8 lbl_807927F8[];
extern u8 lbl_80792830[];
extern u8 lbl_80792868[];
extern u8 lbl_807928A0[];
extern u8 lbl_807928D8[];
extern u8 lbl_80792910[];
extern u8 lbl_80792948[];
extern u8 lbl_80792980[];
extern u8 lbl_807929B8[];
extern u8 lbl_807929F0[];
extern u8 lbl_80792A70[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C8F80[];
extern u8 lbl_807C8F8C[];
extern u8 lbl_807C8F98[];

/* Small data declarations */
extern u32 lbl_8087E430;
extern u32 lbl_8087EE74;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F048;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F638;
extern u32 lbl_8087F63C;
extern u32 lbl_8087F63D;
extern u32 lbl_8087F640;
extern u32 lbl_8087F644;
extern u32 lbl_8087F648;
extern u32 lbl_8087F64C;
extern u32 lbl_8087F650;
extern u32 lbl_8087F654;
extern u32 lbl_8087F658;
extern u32 lbl_8087F65C;
extern u32 lbl_8087F660;
extern u32 lbl_8087F664;
extern u32 lbl_8087F668;
extern u32 lbl_8087F66C;
extern u32 lbl_8087F670;
extern u32 lbl_8087F674;
extern u32 lbl_8087F678;
extern u32 lbl_8087F67C;
extern u32 lbl_8087F680;
extern u32 lbl_8087F684;
extern u32 lbl_8087F688;
extern u32 lbl_8087F68C;
extern u32 lbl_8087F690;
extern u32 lbl_8087F694;
extern u32 lbl_8087F698;
extern u32 lbl_8087F69C;
extern u32 lbl_8087F6A0;
extern u32 lbl_8087F6A4;
extern u32 lbl_8087F6A8;
extern u32 lbl_8087F6AC;
extern u32 lbl_8087F6B0;
extern u32 lbl_8087F6B4;
extern u32 lbl_8087F6B8;
extern u32 lbl_8087F6BC;
extern u32 lbl_8087F6C0;
extern u32 lbl_8087F6C4;
extern u32 lbl_8087F6C8;
extern u32 lbl_8087F6CC;
extern u32 lbl_8087F6D0;
extern u32 lbl_8087F6D4;
extern u32 lbl_8087F6D8;
extern u32 lbl_8087F6DC;
extern u32 lbl_8087F6E0;
extern u32 lbl_8087F6E4;
extern u32 lbl_8087F6E8;
extern u32 lbl_8087F6EC;
extern u32 lbl_8087F6F0;
extern u32 lbl_8087F6F4;
extern u32 lbl_8087F6F8;
extern u32 lbl_8087F6FC;
extern u32 lbl_8087F700;
extern u32 lbl_8087F704;
extern u32 lbl_8087F708;
extern u32 lbl_8087F70C;
extern u32 lbl_8087F710;
extern u32 lbl_8087F714;
extern u32 lbl_8087F718;
extern u32 lbl_8087F71C;
extern u32 lbl_8087F720;
extern u32 lbl_8087F724;
extern u32 lbl_8087F728;
extern u32 lbl_8087F72C;
extern u32 lbl_8087F730;
extern u32 lbl_8087F734;
extern u32 lbl_8087F738;
extern u32 lbl_8087F73C;
extern u32 lbl_8087F740;
extern u32 lbl_8087F744;
extern u32 lbl_8087F748;
extern u32 lbl_8087F74C;
extern u32 lbl_8087F750;
extern u32 lbl_8087F754;
extern u32 lbl_8087F758;
extern u32 lbl_8087F75C;
extern u32 lbl_8087F760;
extern u32 lbl_8087F764;
extern u32 lbl_8087F768;
extern u32 lbl_8087F76C;
extern u32 lbl_8087F770;
extern u32 lbl_8087F774;
extern u32 lbl_8087F778;
extern u32 lbl_8087F77C;
extern u32 lbl_8087F780;
extern u32 lbl_8087F784;
extern u32 lbl_8087F788;
extern u32 lbl_8087F78C;
extern u32 lbl_8087F790;
extern u32 lbl_8087F794;
extern u32 lbl_8087F798;
extern u32 lbl_8087F79C;
extern u32 lbl_8087F7A0;
extern u32 lbl_8087F7A4;
extern u32 lbl_8087F7A8;
extern u32 lbl_8087F7AC;
extern u32 lbl_8087F7B0;
extern u32 lbl_8087F7B4;
extern u32 lbl_8087F7B8;
extern u32 lbl_8087F7BC;
extern u32 lbl_8087F7C0;
extern u32 lbl_8087F7C4;
extern u32 lbl_8087F7C8;
extern u32 lbl_8087F7CC;
extern u32 lbl_8087F7D0;
extern u32 lbl_8087F7D4;
extern u32 lbl_8087F7D8;
extern u32 lbl_8087F7DC;
extern u32 lbl_8087F7E0;
extern u32 lbl_8087F7E4;
extern u32 lbl_8087F7E8;
extern u32 lbl_8087F7EC;
extern u32 lbl_8087F7F0;
extern u32 lbl_8087F7F4;
extern u32 lbl_8087F7F8;
extern u32 lbl_8087F7FC;
extern u32 lbl_8087F800;
extern u32 lbl_8087F804;
extern u32 lbl_8087F808;
extern u32 lbl_8087F80C;
extern u32 lbl_8087F810;
extern u32 lbl_8087F814;
extern u32 lbl_8087F818;
extern u32 lbl_8087F81C;
extern u32 lbl_8087F820;
extern u32 lbl_8087F824;
extern u32 lbl_8087F828;
extern u32 lbl_8087F82C;
extern u32 lbl_8087F830;
extern u32 lbl_8087F834;
extern u32 lbl_8087F838;
extern u32 lbl_8087F840;
extern u32 lbl_80887678;
extern u32 lbl_8088767C;
extern u32 lbl_80887680;
extern u32 lbl_80887684;
extern u32 lbl_80887688;
extern u32 lbl_8088768C;
extern u32 lbl_80887690;
extern u32 lbl_80887694;
extern u32 lbl_80887698;
extern u32 lbl_8088769C;
extern u32 lbl_808876A0;
extern u32 lbl_808876A4;
extern u32 lbl_808876A8;
extern u32 lbl_808876AC;
extern u32 lbl_808876B0;
extern u32 lbl_808876B4;

/* Function declarations */
void fn_804FFE08(void);
void fn_80500628(void);
void fn_80500630(void);
void fn_805006C4(void);
void fn_80500720(void);
void fn_80500728(void);
void fn_80500730(void);
void fn_80500738(void);
void fn_80500740(void);
void fn_80500748(void);
void fn_80500750(void);
void fn_80500758(void);
void fn_80500760(void);
void fn_80500768(void);
void fn_80500770(void);
void fn_80500778(void);
void fn_80500780(void);
void fn_80500788(void);
void fn_80500790(void);
void fn_80500798(void);
void fn_805007A0(void);
void fn_805007A8(void);
void fn_805007B0(void);
void fn_805007B8(void);
void fn_805007C0(void);
void fn_805007C8(void);
void fn_805007D0(void);
void fn_805007D8(void);
void fn_805007E0(void);
void fn_805007E8(void);
void fn_805007F0(void);
void fn_805007F8(void);
void fn_80500800(void);
void fn_80500808(void);
void fn_80500810(void);
void fn_80500818(void);
void fn_80500820(void);
void fn_80500828(void);
void fn_80500830(void);
void fn_80500838(void);
void fn_80500840(void);
void fn_80500848(void);
void fn_80500850(void);
void fn_80500858(void);
void fn_80500860(void);
void fn_80500868(void);
void fn_80500870(void);
void fn_80500878(void);
void fn_80500880(void);
void fn_80500888(void);
void fn_80500890(void);
void fn_80500898(void);
void fn_805008A0(void);
void fn_805008A8(void);
void fn_805008B0(void);
void fn_805008B8(void);
void fn_805008C0(void);
void fn_805008C8(void);
void fn_805008D0(void);
void fn_805008D8(void);
void fn_805008E0(void);
void fn_805008E8(void);
void fn_805008F0(void);
void fn_805008F8(void);
void fn_80500900(void);
void fn_80500908(void);
void fn_80500910(void);
void fn_80500918(void);
void fn_80500920(void);
void fn_80500928(void);
void fn_80500930(void);
void fn_80500938(void);
void fn_80500940(void);
void fn_80500948(void);
void fn_80500950(void);
void fn_80500958(void);
void fn_80500960(void);
void fn_80500968(void);
void fn_80500970(void);
void fn_80500978(void);
void fn_80500980(void);
void fn_80500988(void);
void fn_80500990(void);
void fn_80500998(void);
void fn_805009A0(void);
void fn_805009A8(void);
void fn_805009B0(void);
void fn_805009B8(void);
void fn_805009C0(void);
void fn_805009C8(void);
void fn_805009D0(void);
void fn_805009D8(void);
void fn_805009E0(void);
void fn_805009E8(void);
void fn_805009F0(void);
void fn_805009F8(void);
void fn_80500A00(void);
void fn_80500A08(void);
void fn_80500A10(void);
void fn_80500A18(void);
void fn_80500A20(void);
void fn_80500A28(void);
void fn_80500A30(void);
void fn_80500A60(void);
void fn_80500A68(void);
void fn_80500A70(void);
void fn_80500A78(void);
void fn_80500A80(void);
void fn_80500A88(void);
void fn_80500A90(void);
void fn_80500AC8(void);
void fn_80500AD0(void);
void fn_80500AD8(void);
void fn_80500AE0(void);
void fn_80500AF8(void);
void fn_80500B00(void);
void fn_80500B08(void);
void fn_80500B10(void);
void fn_80500B48(void);
void fn_80500B50(void);
void fn_80500B58(void);
void fn_80500B60(void);
void fn_80500B68(void);
void fn_80500B70(void);
void fn_80500B78(void);
void fn_80500B80(void);
void fn_80500D14(void);
void fn_80500D1C(void);
void fn_80500E08(void);
void fn_80500E10(void);
void fn_80500E18(void);
void fn_80500E20(void);
void fn_80500E28(void);
void fn_80500E30(void);
void fn_80500E38(void);
void fn_80500E40(void);
void fn_80500E48(void);
void fn_80500E50(void);
void fn_80500E58(void);
void fn_80500E60(void);
void fn_80500E68(void);
void fn_80500E70(void);
void fn_80500E78(void);
void fn_80500E80(void);
void fn_80500E88(void);
void fn_80500E90(void);
void fn_80500E98(void);
void fn_80500EA0(void);
void fn_80500EA8(void);
void fn_80500EB0(void);
void fn_80500EB8(void);
void fn_80500EC0(void);
void fn_80500EC8(void);
void fn_80500ED0(void);
void fn_80500ED8(void);
void fn_80500EE0(void);
void fn_80500EE8(void);
void fn_80500EF0(void);
void fn_80500EF8(void);
void fn_80500F00(void);
void fn_80500F08(void);
void fn_80500F10(void);
void fn_80500F18(void);
void fn_80500F20(void);
void fn_80500F28(void);
void fn_80500F30(void);
void fn_80500F38(void);
void fn_80500F40(void);
void fn_80500F48(void);
void fn_80500F50(void);
void fn_80500F58(void);
void fn_80500F60(void);
void fn_80500F68(void);
void fn_80500F70(void);
void fn_80500F78(void);
void fn_80500F80(void);
void fn_80500F88(void);
void fn_80500F90(void);
void fn_80500F98(void);
void fn_80500FA0(void);
void fn_80500FA8(void);
void fn_80500FB0(void);
void fn_80500FB8(void);
void fn_80500FC0(void);
void fn_80500FC8(void);
void fn_80500FD0(void);
void fn_80500FD8(void);
void fn_80500FE0(void);
void fn_80500FE8(void);
void fn_80500FF0(void);
void fn_80500FF8(void);
void fn_80501000(void);
void fn_80501008(void);
void fn_80501010(void);
void fn_80501018(void);
void fn_80501020(void);
void fn_80501028(void);
void fn_80501030(void);
void fn_80501038(void);
void fn_80501040(void);
void fn_80501048(void);
void fn_80501050(void);
void fn_80501058(void);
void fn_80501060(void);
void fn_80501068(void);
void fn_805010C4(void);
void fn_805011D0(void);
void fn_8050128C(void);
void fn_805012C8(void);
void fn_80501434(void);
void fn_80501494(void);
void fn_8050158C(void);

asm void fn_804FFE08(void)
{
    nofralloc
    lbz r0, lbl_8087F63D
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000020
    lis r3, lbl_807929F0@ha
    li r0, 0x1
    addi r3, r3, lbl_807929F0@l
    stw r3, lbl_8087F640
    stb r0, lbl_8087F63D
lbl_fn_804FFE08_00000020:
    lbz r0, lbl_8087F644
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000040
    lis r3, lbl_807929B8@ha
    li r0, 0x1
    addi r3, r3, lbl_807929B8@l
    stw r3, lbl_8087F648
    stb r0, lbl_8087F644
lbl_fn_804FFE08_00000040:
    lbz r0, lbl_8087F64C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000060
    lis r3, lbl_80792980@ha
    li r0, 0x1
    addi r3, r3, lbl_80792980@l
    stw r3, lbl_8087F650
    stb r0, lbl_8087F64C
lbl_fn_804FFE08_00000060:
    lbz r0, lbl_8087F654
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000080
    lis r3, lbl_80792948@ha
    li r0, 0x1
    addi r3, r3, lbl_80792948@l
    stw r3, lbl_8087F658
    stb r0, lbl_8087F654
lbl_fn_804FFE08_00000080:
    lbz r0, lbl_8087F65C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000000A0
    lis r3, lbl_80792910@ha
    li r0, 0x1
    addi r3, r3, lbl_80792910@l
    stw r3, lbl_8087F660
    stb r0, lbl_8087F65C
lbl_fn_804FFE08_000000A0:
    lbz r0, lbl_8087F664
    extsb. r0, r0
    bne lbl_fn_804FFE08_000000C0
    lis r3, lbl_807928A0@ha
    li r0, 0x1
    addi r3, r3, lbl_807928A0@l
    stw r3, lbl_8087F668
    stb r0, lbl_8087F664
lbl_fn_804FFE08_000000C0:
    lbz r0, lbl_8087F66C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000000E0
    lis r3, lbl_80792868@ha
    li r0, 0x1
    addi r3, r3, lbl_80792868@l
    stw r3, lbl_8087F670
    stb r0, lbl_8087F66C
lbl_fn_804FFE08_000000E0:
    lbz r0, lbl_8087F674
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000100
    lis r3, lbl_80792830@ha
    li r0, 0x1
    addi r3, r3, lbl_80792830@l
    stw r3, lbl_8087F678
    stb r0, lbl_8087F674
lbl_fn_804FFE08_00000100:
    lbz r0, lbl_8087F67C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000120
    lis r3, lbl_807927C0@ha
    li r0, 0x1
    addi r3, r3, lbl_807927C0@l
    stw r3, lbl_8087F680
    stb r0, lbl_8087F67C
lbl_fn_804FFE08_00000120:
    lbz r0, lbl_8087F684
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000140
    lis r3, lbl_80792788@ha
    li r0, 0x1
    addi r3, r3, lbl_80792788@l
    stw r3, lbl_8087F688
    stb r0, lbl_8087F684
lbl_fn_804FFE08_00000140:
    lbz r0, lbl_8087F68C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000160
    lis r3, lbl_80792750@ha
    li r0, 0x1
    addi r3, r3, lbl_80792750@l
    stw r3, lbl_8087F690
    stb r0, lbl_8087F68C
lbl_fn_804FFE08_00000160:
    lbz r0, lbl_8087F694
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000180
    lis r3, lbl_80792718@ha
    li r0, 0x1
    addi r3, r3, lbl_80792718@l
    stw r3, lbl_8087F698
    stb r0, lbl_8087F694
lbl_fn_804FFE08_00000180:
    lbz r0, lbl_8087F69C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000001A0
    lis r3, lbl_807926E0@ha
    li r0, 0x1
    addi r3, r3, lbl_807926E0@l
    stw r3, lbl_8087F6A0
    stb r0, lbl_8087F69C
lbl_fn_804FFE08_000001A0:
    lbz r0, lbl_8087F6A4
    extsb. r0, r0
    bne lbl_fn_804FFE08_000001C0
    lis r3, lbl_807926A8@ha
    li r0, 0x1
    addi r3, r3, lbl_807926A8@l
    stw r3, lbl_8087F6A8
    stb r0, lbl_8087F6A4
lbl_fn_804FFE08_000001C0:
    lbz r0, lbl_8087F6AC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000001E0
    lis r3, lbl_80792670@ha
    li r0, 0x1
    addi r3, r3, lbl_80792670@l
    stw r3, lbl_8087F6B0
    stb r0, lbl_8087F6AC
lbl_fn_804FFE08_000001E0:
    lbz r0, lbl_8087F6B4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000200
    lis r3, lbl_80792638@ha
    li r0, 0x1
    addi r3, r3, lbl_80792638@l
    stw r3, lbl_8087F6B8
    stb r0, lbl_8087F6B4
lbl_fn_804FFE08_00000200:
    lbz r0, lbl_8087F6BC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000220
    lis r3, lbl_80792600@ha
    li r0, 0x1
    addi r3, r3, lbl_80792600@l
    stw r3, lbl_8087F6C0
    stb r0, lbl_8087F6BC
lbl_fn_804FFE08_00000220:
    lbz r0, lbl_8087F6C4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000240
    lis r3, lbl_807925C8@ha
    li r0, 0x1
    addi r3, r3, lbl_807925C8@l
    stw r3, lbl_8087F6C8
    stb r0, lbl_8087F6C4
lbl_fn_804FFE08_00000240:
    lbz r0, lbl_8087F6CC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000260
    lis r3, lbl_80792590@ha
    li r0, 0x1
    addi r3, r3, lbl_80792590@l
    stw r3, lbl_8087F6D0
    stb r0, lbl_8087F6CC
lbl_fn_804FFE08_00000260:
    lbz r0, lbl_8087F6D4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000280
    lis r3, lbl_80792520@ha
    li r0, 0x1
    addi r3, r3, lbl_80792520@l
    stw r3, lbl_8087F6D8
    stb r0, lbl_8087F6D4
lbl_fn_804FFE08_00000280:
    lbz r0, lbl_8087F6DC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000002A0
    lis r3, lbl_807924E8@ha
    li r0, 0x1
    addi r3, r3, lbl_807924E8@l
    stw r3, lbl_8087F6E0
    stb r0, lbl_8087F6DC
lbl_fn_804FFE08_000002A0:
    lbz r0, lbl_8087F6E4
    extsb. r0, r0
    bne lbl_fn_804FFE08_000002C0
    lis r3, lbl_807924B0@ha
    li r0, 0x1
    addi r3, r3, lbl_807924B0@l
    stw r3, lbl_8087F6E8
    stb r0, lbl_8087F6E4
lbl_fn_804FFE08_000002C0:
    lbz r0, lbl_8087F6EC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000002E0
    lis r3, lbl_80792478@ha
    li r0, 0x1
    addi r3, r3, lbl_80792478@l
    stw r3, lbl_8087F6F0
    stb r0, lbl_8087F6EC
lbl_fn_804FFE08_000002E0:
    lbz r0, lbl_8087F6F4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000300
    lis r3, lbl_80792440@ha
    li r0, 0x1
    addi r3, r3, lbl_80792440@l
    stw r3, lbl_8087F6F8
    stb r0, lbl_8087F6F4
lbl_fn_804FFE08_00000300:
    lbz r0, lbl_8087F6FC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000320
    lis r3, lbl_80792408@ha
    li r0, 0x1
    addi r3, r3, lbl_80792408@l
    stw r3, lbl_8087F700
    stb r0, lbl_8087F6FC
lbl_fn_804FFE08_00000320:
    lbz r0, lbl_8087F704
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000340
    lis r3, lbl_807923D0@ha
    li r0, 0x1
    addi r3, r3, lbl_807923D0@l
    stw r3, lbl_8087F708
    stb r0, lbl_8087F704
lbl_fn_804FFE08_00000340:
    lbz r0, lbl_8087F70C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000360
    lis r3, lbl_80792398@ha
    li r0, 0x1
    addi r3, r3, lbl_80792398@l
    stw r3, lbl_8087F710
    stb r0, lbl_8087F70C
lbl_fn_804FFE08_00000360:
    lbz r0, lbl_8087F714
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000380
    lis r3, lbl_80792360@ha
    li r0, 0x1
    addi r3, r3, lbl_80792360@l
    stw r3, lbl_8087F718
    stb r0, lbl_8087F714
lbl_fn_804FFE08_00000380:
    lbz r0, lbl_8087F71C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000003A0
    lis r3, lbl_80792328@ha
    li r0, 0x1
    addi r3, r3, lbl_80792328@l
    stw r3, lbl_8087F720
    stb r0, lbl_8087F71C
lbl_fn_804FFE08_000003A0:
    lbz r0, lbl_8087F724
    extsb. r0, r0
    bne lbl_fn_804FFE08_000003C0
    lis r3, lbl_807922F0@ha
    li r0, 0x1
    addi r3, r3, lbl_807922F0@l
    stw r3, lbl_8087F728
    stb r0, lbl_8087F724
lbl_fn_804FFE08_000003C0:
    lbz r0, lbl_8087F72C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000003E0
    lis r3, lbl_807922B8@ha
    li r0, 0x1
    addi r3, r3, lbl_807922B8@l
    stw r3, lbl_8087F730
    stb r0, lbl_8087F72C
lbl_fn_804FFE08_000003E0:
    lbz r0, lbl_8087F734
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000400
    lis r3, lbl_80792280@ha
    li r0, 0x1
    addi r3, r3, lbl_80792280@l
    stw r3, lbl_8087F738
    stb r0, lbl_8087F734
lbl_fn_804FFE08_00000400:
    lbz r0, lbl_8087F73C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000420
    lis r3, lbl_80792248@ha
    li r0, 0x1
    addi r3, r3, lbl_80792248@l
    stw r3, lbl_8087F740
    stb r0, lbl_8087F73C
lbl_fn_804FFE08_00000420:
    lbz r0, lbl_8087F744
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000440
    lis r3, lbl_80792210@ha
    li r0, 0x1
    addi r3, r3, lbl_80792210@l
    stw r3, lbl_8087F748
    stb r0, lbl_8087F744
lbl_fn_804FFE08_00000440:
    lbz r0, lbl_8087F74C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000460
    lis r3, lbl_807921D8@ha
    li r0, 0x1
    addi r3, r3, lbl_807921D8@l
    stw r3, lbl_8087F750
    stb r0, lbl_8087F74C
lbl_fn_804FFE08_00000460:
    lbz r0, lbl_8087F754
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000480
    lis r3, lbl_807921A0@ha
    li r0, 0x1
    addi r3, r3, lbl_807921A0@l
    stw r3, lbl_8087F758
    stb r0, lbl_8087F754
lbl_fn_804FFE08_00000480:
    lbz r0, lbl_8087F75C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000004A0
    lis r3, lbl_80792168@ha
    li r0, 0x1
    addi r3, r3, lbl_80792168@l
    stw r3, lbl_8087F760
    stb r0, lbl_8087F75C
lbl_fn_804FFE08_000004A0:
    lbz r0, lbl_8087F764
    extsb. r0, r0
    bne lbl_fn_804FFE08_000004C0
    lis r3, lbl_80792130@ha
    li r0, 0x1
    addi r3, r3, lbl_80792130@l
    stw r3, lbl_8087F768
    stb r0, lbl_8087F764
lbl_fn_804FFE08_000004C0:
    lbz r0, lbl_8087F76C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000004E0
    lis r3, lbl_807920F8@ha
    li r0, 0x1
    addi r3, r3, lbl_807920F8@l
    stw r3, lbl_8087F770
    stb r0, lbl_8087F76C
lbl_fn_804FFE08_000004E0:
    lbz r0, lbl_8087F774
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000500
    lis r3, lbl_807920C0@ha
    li r0, 0x1
    addi r3, r3, lbl_807920C0@l
    stw r3, lbl_8087F778
    stb r0, lbl_8087F774
lbl_fn_804FFE08_00000500:
    lbz r0, lbl_8087F77C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000520
    lis r3, lbl_80792088@ha
    li r0, 0x1
    addi r3, r3, lbl_80792088@l
    stw r3, lbl_8087F780
    stb r0, lbl_8087F77C
lbl_fn_804FFE08_00000520:
    lbz r0, lbl_8087F784
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000540
    lis r3, lbl_80792050@ha
    li r0, 0x1
    addi r3, r3, lbl_80792050@l
    stw r3, lbl_8087F788
    stb r0, lbl_8087F784
lbl_fn_804FFE08_00000540:
    lbz r0, lbl_8087F78C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000560
    lis r3, lbl_80792018@ha
    li r0, 0x1
    addi r3, r3, lbl_80792018@l
    stw r3, lbl_8087F790
    stb r0, lbl_8087F78C
lbl_fn_804FFE08_00000560:
    lbz r0, lbl_8087F794
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000580
    lis r3, lbl_80792558@ha
    li r0, 0x1
    addi r3, r3, lbl_80792558@l
    stw r3, lbl_8087F798
    stb r0, lbl_8087F794
lbl_fn_804FFE08_00000580:
    lbz r0, lbl_8087F79C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000005A0
    lis r3, lbl_80791FE0@ha
    li r0, 0x1
    addi r3, r3, lbl_80791FE0@l
    stw r3, lbl_8087F7A0
    stb r0, lbl_8087F79C
lbl_fn_804FFE08_000005A0:
    lbz r0, lbl_8087F7A4
    extsb. r0, r0
    bne lbl_fn_804FFE08_000005C0
    lis r3, lbl_80791FA8@ha
    li r0, 0x1
    addi r3, r3, lbl_80791FA8@l
    stw r3, lbl_8087F7A8
    stb r0, lbl_8087F7A4
lbl_fn_804FFE08_000005C0:
    lbz r0, lbl_8087F7AC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000005E0
    lis r3, lbl_80791F70@ha
    li r0, 0x1
    addi r3, r3, lbl_80791F70@l
    stw r3, lbl_8087F7B0
    stb r0, lbl_8087F7AC
lbl_fn_804FFE08_000005E0:
    lbz r0, lbl_8087F7B4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000600
    lis r3, lbl_80791F38@ha
    li r0, 0x1
    addi r3, r3, lbl_80791F38@l
    stw r3, lbl_8087F7B8
    stb r0, lbl_8087F7B4
lbl_fn_804FFE08_00000600:
    lbz r0, lbl_8087F7BC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000620
    lis r3, lbl_80791F00@ha
    li r0, 0x1
    addi r3, r3, lbl_80791F00@l
    stw r3, lbl_8087F7C0
    stb r0, lbl_8087F7BC
lbl_fn_804FFE08_00000620:
    lbz r0, lbl_8087F7C4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000640
    lis r3, lbl_80791EC8@ha
    li r0, 0x1
    addi r3, r3, lbl_80791EC8@l
    stw r3, lbl_8087F7C8
    stb r0, lbl_8087F7C4
lbl_fn_804FFE08_00000640:
    lbz r0, lbl_8087F7CC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000660
    lis r3, lbl_80791E90@ha
    li r0, 0x1
    addi r3, r3, lbl_80791E90@l
    stw r3, lbl_8087F7D0
    stb r0, lbl_8087F7CC
lbl_fn_804FFE08_00000660:
    lbz r0, lbl_8087F7D4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000680
    lis r3, lbl_80791E58@ha
    li r0, 0x1
    addi r3, r3, lbl_80791E58@l
    stw r3, lbl_8087F7D8
    stb r0, lbl_8087F7D4
lbl_fn_804FFE08_00000680:
    lbz r0, lbl_8087F7DC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000006A0
    lis r3, lbl_80791E20@ha
    li r0, 0x1
    addi r3, r3, lbl_80791E20@l
    stw r3, lbl_8087F7E0
    stb r0, lbl_8087F7DC
lbl_fn_804FFE08_000006A0:
    lbz r0, lbl_8087F7E4
    extsb. r0, r0
    bne lbl_fn_804FFE08_000006C0
    lis r3, lbl_80791DE8@ha
    li r0, 0x1
    addi r3, r3, lbl_80791DE8@l
    stw r3, lbl_8087F7E8
    stb r0, lbl_8087F7E4
lbl_fn_804FFE08_000006C0:
    lbz r0, lbl_8087F7EC
    extsb. r0, r0
    bne lbl_fn_804FFE08_000006E0
    lis r3, lbl_80791D78@ha
    li r0, 0x1
    addi r3, r3, lbl_80791D78@l
    stw r3, lbl_8087F7F0
    stb r0, lbl_8087F7EC
lbl_fn_804FFE08_000006E0:
    lbz r0, lbl_8087F7F4
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000700
    lis r3, lbl_80791D40@ha
    li r0, 0x1
    addi r3, r3, lbl_80791D40@l
    stw r3, lbl_8087F7F8
    stb r0, lbl_8087F7F4
lbl_fn_804FFE08_00000700:
    lbz r0, lbl_8087F7FC
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000720
    lis r3, lbl_80791D08@ha
    li r0, 0x1
    addi r3, r3, lbl_80791D08@l
    stw r3, lbl_8087F800
    stb r0, lbl_8087F7FC
lbl_fn_804FFE08_00000720:
    lbz r0, lbl_8087F804
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000740
    lis r3, lbl_807928D8@ha
    li r0, 0x1
    addi r3, r3, lbl_807928D8@l
    stw r3, lbl_8087F808
    stb r0, lbl_8087F804
lbl_fn_804FFE08_00000740:
    lbz r0, lbl_8087F80C
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000760
    lis r3, lbl_80791CD0@ha
    li r0, 0x1
    addi r3, r3, lbl_80791CD0@l
    stw r3, lbl_8087F810
    stb r0, lbl_8087F80C
lbl_fn_804FFE08_00000760:
    lbz r0, lbl_8087F814
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000780
    lis r3, lbl_80791C98@ha
    li r0, 0x1
    addi r3, r3, lbl_80791C98@l
    stw r3, lbl_8087F818
    stb r0, lbl_8087F814
lbl_fn_804FFE08_00000780:
    lbz r0, lbl_8087F81C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000007A0
    lis r3, lbl_80791C60@ha
    li r0, 0x1
    addi r3, r3, lbl_80791C60@l
    stw r3, lbl_8087F820
    stb r0, lbl_8087F81C
lbl_fn_804FFE08_000007A0:
    lbz r0, lbl_8087F824
    extsb. r0, r0
    bne lbl_fn_804FFE08_000007C0
    lis r3, lbl_80791C28@ha
    li r0, 0x1
    addi r3, r3, lbl_80791C28@l
    stw r3, lbl_8087F828
    stb r0, lbl_8087F824
lbl_fn_804FFE08_000007C0:
    lbz r0, lbl_8087F82C
    extsb. r0, r0
    bne lbl_fn_804FFE08_000007E0
    lis r3, lbl_80791DB0@ha
    li r0, 0x1
    addi r3, r3, lbl_80791DB0@l
    stw r3, lbl_8087F830
    stb r0, lbl_8087F82C
lbl_fn_804FFE08_000007E0:
    lbz r0, lbl_8087F834
    extsb. r0, r0
    bne lbl_fn_804FFE08_00000800
    lis r3, lbl_807927F8@ha
    li r0, 0x1
    addi r3, r3, lbl_807927F8@l
    stw r3, lbl_8087F838
    stb r0, lbl_8087F834
lbl_fn_804FFE08_00000800:
    cmplwi r4, 0x41
    blt lbl_fn_804FFE08_0000080C
    li r4, 0x0
lbl_fn_804FFE08_0000080C:
    lis r3, lbl_80791B20@ha
    clrlslwi r0, r4, 24, 2
    addi r3, r3, lbl_80791B20@l
    lwzx r3, r3, r0
    blr
}

asm void fn_80500628(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500630(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmplwi r7, 0x1
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80500630_00000880
    lwz r0, 0x0(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80500630_00000880
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r4, 0x0(r31)
    mr r5, r3
    mr r3, r30
    bl memcpy
lbl_fn_80500630_00000880:
    lwz r12, 0x0(r29)
    mr r3, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805006C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_805006C4_00000900
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r5, r3
    mr r3, r30
    mr r4, r31
    bl memcpy
lbl_fn_805006C4_00000900:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80500720(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500728(void)
{
    nofralloc
    li r3, 0x3e
    blr
}

asm void fn_80500730(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500738(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500740(void)
{
    nofralloc
    li r3, 0x3d
    blr
}

asm void fn_80500748(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500750(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500758(void)
{
    nofralloc
    li r3, 0x3c
    blr
}

asm void fn_80500760(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500768(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500770(void)
{
    nofralloc
    li r3, 0x3b
    blr
}

asm void fn_80500778(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500780(void)
{
    nofralloc
    li r3, 0x14
    blr
}

asm void fn_80500788(void)
{
    nofralloc
    li r3, 0x39
    blr
}

asm void fn_80500790(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500798(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805007A0(void)
{
    nofralloc
    li r3, 0x38
    blr
}

asm void fn_805007A8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805007B0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805007B8(void)
{
    nofralloc
    li r3, 0x37
    blr
}

asm void fn_805007C0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805007C8(void)
{
    nofralloc
    li r3, 0x6d
    blr
}

asm void fn_805007D0(void)
{
    nofralloc
    li r3, 0x3f
    blr
}

asm void fn_805007D8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805007E0(void)
{
    nofralloc
    li r3, 0x6d
    blr
}

asm void fn_805007E8(void)
{
    nofralloc
    li r3, 0x36
    blr
}

asm void fn_805007F0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805007F8(void)
{
    nofralloc
    li r3, 0x8
    blr
}

asm void fn_80500800(void)
{
    nofralloc
    li r3, 0x35
    blr
}

asm void fn_80500808(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500810(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80500818(void)
{
    nofralloc
    li r3, 0x34
    blr
}

asm void fn_80500820(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500828(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500830(void)
{
    nofralloc
    li r3, 0x33
    blr
}

asm void fn_80500838(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500840(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500848(void)
{
    nofralloc
    li r3, 0x32
    blr
}

asm void fn_80500850(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500858(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500860(void)
{
    nofralloc
    li r3, 0x31
    blr
}

asm void fn_80500868(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500870(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500878(void)
{
    nofralloc
    li r3, 0x30
    blr
}

asm void fn_80500880(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500888(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_80500890(void)
{
    nofralloc
    li r3, 0x2f
    blr
}

asm void fn_80500898(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805008A0(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_805008A8(void)
{
    nofralloc
    li r3, 0x2e
    blr
}

asm void fn_805008B0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805008B8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805008C0(void)
{
    nofralloc
    li r3, 0x2d
    blr
}

asm void fn_805008C8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805008D0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805008D8(void)
{
    nofralloc
    li r3, 0x2b
    blr
}

asm void fn_805008E0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805008E8(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_805008F0(void)
{
    nofralloc
    li r3, 0x2a
    blr
}

asm void fn_805008F8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500900(void)
{
    nofralloc
    li r3, 0x9
    blr
}

asm void fn_80500908(void)
{
    nofralloc
    li r3, 0x29
    blr
}

asm void fn_80500910(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500918(void)
{
    nofralloc
    li r3, 0x10
    blr
}

asm void fn_80500920(void)
{
    nofralloc
    li r3, 0x28
    blr
}

asm void fn_80500928(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500930(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500938(void)
{
    nofralloc
    li r3, 0x27
    blr
}

asm void fn_80500940(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500948(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500950(void)
{
    nofralloc
    li r3, 0x26
    blr
}

asm void fn_80500958(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500960(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500968(void)
{
    nofralloc
    li r3, 0x25
    blr
}

asm void fn_80500970(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500978(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500980(void)
{
    nofralloc
    li r3, 0x24
    blr
}

asm void fn_80500988(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500990(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500998(void)
{
    nofralloc
    li r3, 0x23
    blr
}

asm void fn_805009A0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805009A8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_805009B0(void)
{
    nofralloc
    li r3, 0x22
    blr
}

asm void fn_805009B8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805009C0(void)
{
    nofralloc
    li r3, 0x34
    blr
}

asm void fn_805009C8(void)
{
    nofralloc
    li r3, 0x21
    blr
}

asm void fn_805009D0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805009D8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805009E0(void)
{
    nofralloc
    li r3, 0x20
    blr
}

asm void fn_805009E8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_805009F0(void)
{
    nofralloc
    li r3, 0x5
    blr
}

asm void fn_805009F8(void)
{
    nofralloc
    li r3, 0x1f
    blr
}

asm void fn_80500A00(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500A08(void)
{
    nofralloc
    li r3, 0xf
    blr
}

asm void fn_80500A10(void)
{
    nofralloc
    li r3, 0x1e
    blr
}

asm void fn_80500A18(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500A20(void)
{
    nofralloc
    li r3, 0x3a
    blr
}

asm void fn_80500A28(void)
{
    nofralloc
    li r3, 0x1d
    blr
}

asm void fn_80500A30(void)
{
    nofralloc
    lbz r3, 0x34(r4)
    lbz r0, 0x30(r5)
    cmplw r3, r0
    beq lbl_fn_80500A30_00000C40
    li r3, 0x0
    blr
lbl_fn_80500A30_00000C40:
    lwz r3, 0x30(r4)
    lwz r0, 0x2c(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80500A60(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500A68(void)
{
    nofralloc
    li r3, 0x31
    blr
}

asm void fn_80500A70(void)
{
    nofralloc
    li r3, 0x1c
    blr
}

asm void fn_80500A78(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500A80(void)
{
    nofralloc
    li r3, 0xa
    blr
}

asm void fn_80500A88(void)
{
    nofralloc
    li r3, 0x1b
    blr
}

asm void fn_80500A90(void)
{
    nofralloc
    lbz r3, 0xc(r4)
    lbz r0, 0x8(r5)
    extrwi r3, r3, 1, 27
    extrwi r0, r0, 1, 27
    cmplw r3, r0
    beq lbl_fn_80500A90_00000CA8
    li r3, 0x0
    blr
lbl_fn_80500A90_00000CA8:
    lbz r3, 0xd(r4)
    lbz r0, 0x9(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80500AC8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500AD0(void)
{
    nofralloc
    li r3, 0x25
    blr
}

asm void fn_80500AD8(void)
{
    nofralloc
    li r3, 0x1a
    blr
}

asm void fn_80500AE0(void)
{
    nofralloc
    lbz r3, 0x18(r4)
    lbz r0, 0x14(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80500AF8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500B00(void)
{
    nofralloc
    li r3, 0x15
    blr
}

asm void fn_80500B08(void)
{
    nofralloc
    li r3, 0x19
    blr
}

asm void fn_80500B10(void)
{
    nofralloc
    lbz r3, 0x16(r4)
    lbz r0, 0x12(r5)
    extrwi r3, r3, 1, 30
    extrwi r0, r0, 1, 30
    cmplw r3, r0
    beq lbl_fn_80500B10_00000D28
    li r3, 0x0
    blr
lbl_fn_80500B10_00000D28:
    lbz r3, 0x18(r4)
    lbz r0, 0x14(r5)
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80500B48(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500B50(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500B58(void)
{
    nofralloc
    li r3, 0x18
    blr
}

asm void fn_80500B60(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500B68(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500B70(void)
{
    nofralloc
    li r3, 0x17
    blr
}

asm void fn_80500B78(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r7, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r6
    stw r30, 0x8(r1)
    mr r30, r4
    bne lbl_fn_80500B80_00000ED8
    lwz r4, 0x0(r6)
    cmpwi r4, 0x0
    beq lbl_fn_80500B80_00000ED8
    mr r3, r30
    li r5, 0x4
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x4
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x8
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0xc
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x10
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x14
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x18
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x1c
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x20
    li r5, 0x4
    addi r4, r4, 0x4
    stw r4, 0x0(r31)
    bl memcpy
    lwz r6, 0x0(r31)
    addi r3, r30, 0x24
    li r4, 0x0
    li r5, 0x20
    addi r0, r6, 0x4
    stw r0, 0x0(r31)
    bl memset
    lwz r4, 0x0(r31)
    addi r3, r30, 0x44
    li r5, 0x10
    bl memcpy
    lwz r4, 0x0(r31)
    addi r3, r30, 0x54
    li r5, 0x8
    addi r4, r4, 0x10
    stw r4, 0x0(r31)
    bl memcpy
    lwz r6, 0x0(r31)
    addi r3, r30, 0x5c
    li r4, 0x0
    li r5, 0x20
    addi r0, r6, 0x8
    stw r0, 0x0(r31)
    bl memset
    b lbl_fn_80500B80_00000EF4
lbl_fn_80500B80_00000ED8:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x0(r31)
    add r0, r0, r3
    stw r0, 0x0(r31)
lbl_fn_80500B80_00000EF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80500D14(void)
{
    nofralloc
    li r3, 0x3c
    blr
}

asm void fn_80500D1C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r4
    beq lbl_fn_80500D1C_00000FE8
    mr r4, r31
    mr r3, r30
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x4
    addi r4, r31, 0x4
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x8
    addi r4, r31, 0x8
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0xc
    addi r4, r31, 0xc
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x10
    addi r4, r31, 0x10
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x14
    addi r4, r31, 0x14
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x18
    addi r4, r31, 0x18
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x1c
    addi r4, r31, 0x1c
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x20
    addi r4, r31, 0x20
    li r5, 0x4
    bl memcpy
    addi r3, r30, 0x24
    addi r4, r31, 0x44
    li r5, 0x10
    bl memcpy
    addi r3, r30, 0x34
    addi r4, r31, 0x54
    li r5, 0x8
    bl memcpy
lbl_fn_80500D1C_00000FE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80500E08(void)
{
    nofralloc
    li r3, 0x16
    blr
}

asm void fn_80500E10(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500E18(void)
{
    nofralloc
    li r3, 0x8
    blr
}

asm void fn_80500E20(void)
{
    nofralloc
    li r3, 0x15
    blr
}

asm void fn_80500E28(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500E30(void)
{
    nofralloc
    li r3, 0x50
    blr
}

asm void fn_80500E38(void)
{
    nofralloc
    li r3, 0x14
    blr
}

asm void fn_80500E40(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500E48(void)
{
    nofralloc
    li r3, 0x5b
    blr
}

asm void fn_80500E50(void)
{
    nofralloc
    li r3, 0x2c
    blr
}

asm void fn_80500E58(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500E60(void)
{
    nofralloc
    li r3, 0x20
    blr
}

asm void fn_80500E68(void)
{
    nofralloc
    li r3, 0x13
    blr
}

asm void fn_80500E70(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500E78(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500E80(void)
{
    nofralloc
    li r3, 0x12
    blr
}

asm void fn_80500E88(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500E90(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500E98(void)
{
    nofralloc
    li r3, 0x11
    blr
}

asm void fn_80500EA0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500EA8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500EB0(void)
{
    nofralloc
    li r3, 0x10
    blr
}

asm void fn_80500EB8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500EC0(void)
{
    nofralloc
    li r3, 0x3c
    blr
}

asm void fn_80500EC8(void)
{
    nofralloc
    li r3, 0xf
    blr
}

asm void fn_80500ED0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500ED8(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500EE0(void)
{
    nofralloc
    li r3, 0xe
    blr
}

asm void fn_80500EE8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500EF0(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500EF8(void)
{
    nofralloc
    li r3, 0xd
    blr
}

asm void fn_80500F00(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500F08(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80500F10(void)
{
    nofralloc
    li r3, 0xc
    blr
}

asm void fn_80500F18(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500F20(void)
{
    nofralloc
    li r3, 0x8c
    blr
}

asm void fn_80500F28(void)
{
    nofralloc
    li r3, 0xb
    blr
}

asm void fn_80500F30(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500F38(void)
{
    nofralloc
    li r3, 0x8c
    blr
}

asm void fn_80500F40(void)
{
    nofralloc
    li r3, 0xa
    blr
}

asm void fn_80500F48(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500F50(void)
{
    nofralloc
    li r3, 0x8
    blr
}

asm void fn_80500F58(void)
{
    nofralloc
    li r3, 0x9
    blr
}

asm void fn_80500F60(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500F68(void)
{
    nofralloc
    li r3, 0x1f
    blr
}

asm void fn_80500F70(void)
{
    nofralloc
    li r3, 0x40
    blr
}

asm void fn_80500F78(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500F80(void)
{
    nofralloc
    li r3, 0x1f
    blr
}

asm void fn_80500F88(void)
{
    nofralloc
    li r3, 0x8
    blr
}

asm void fn_80500F90(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500F98(void)
{
    nofralloc
    li r3, 0x26
    blr
}

asm void fn_80500FA0(void)
{
    nofralloc
    li r3, 0x7
    blr
}

asm void fn_80500FA8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80500FB0(void)
{
    nofralloc
    li r3, 0x1f
    blr
}

asm void fn_80500FB8(void)
{
    nofralloc
    li r3, 0x6
    blr
}

asm void fn_80500FC0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500FC8(void)
{
    nofralloc
    li r3, 0x44
    blr
}

asm void fn_80500FD0(void)
{
    nofralloc
    li r3, 0x3a
    blr
}

asm void fn_80500FD8(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500FE0(void)
{
    nofralloc
    li r3, 0x26
    blr
}

asm void fn_80500FE8(void)
{
    nofralloc
    li r3, 0x5
    blr
}

asm void fn_80500FF0(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80500FF8(void)
{
    nofralloc
    li r3, 0x35
    blr
}

asm void fn_80501000(void)
{
    nofralloc
    li r3, 0x4
    blr
}

asm void fn_80501008(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80501010(void)
{
    nofralloc
    li r3, 0xa
    blr
}

asm void fn_80501018(void)
{
    nofralloc
    li r3, 0x3
    blr
}

asm void fn_80501020(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80501028(void)
{
    nofralloc
    li r3, 0x15
    blr
}

asm void fn_80501030(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_80501038(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80501040(void)
{
    nofralloc
    li r3, 0x2c
    blr
}

asm void fn_80501048(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80501050(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_80501058(void)
{
    nofralloc
    li r3, 0x41
    blr
}

asm void fn_80501060(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80501068(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    la r3, lbl_8087F638
    stw r0, 0x14(r1)
    bl fn_8068B770
    lis r4, fn_8068BC30@ha
    lis r5, lbl_807C8F80@ha
    addi r4, r4, fn_8068BC30@l
    la r3, lbl_8087F638
    addi r5, r5, lbl_807C8F80@l
    bl __register_global_object
    la r3, lbl_8087F63C
    bl fn_8068BD60
    lis r4, fn_8068C240@ha
    lis r5, lbl_807C8F8C@ha
    addi r4, r4, fn_8068C240@l
    la r3, lbl_8087F63C
    addi r5, r5, lbl_807C8F8C@l
    bl __register_global_object
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805010C4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805010C4_000013B0
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_805010C4_00001320
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r31, 0x1
    lis r5, lbl_807C8F98@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F98@l
    stw r0, 0x8(r3)
    stw r31, 0xc(r3)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_805010C4_00001320:
    lwz r3, lbl_8087F048
    lis r4, lbl_807C6BB8@ha
    addi r4, r4, lbl_807C6BB8@l
    li r0, 0x0
    cmpwi r3, 0x0
    stw r0, 0xc(r4)
    beq lbl_fn_805010C4_00001360
    lfs f1, lbl_80887678
    addi r6, r1, 0x8
    lfs f0, lbl_8088767C
    li r4, 0x0
    stfs f1, 0x8(r1)
    stfs f0, 0xc(r1)
    stfs f1, 0x10(r1)
    lwz r5, 0x0(r30)
    bl fn_800FDE60
lbl_fn_805010C4_00001360:
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_805010C4_000013A0
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r31, 0x1
    lis r5, lbl_807C8F98@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C8F98@l
    stw r0, 0x8(r3)
    stw r31, 0xc(r3)
    bl __register_global_object
    stb r31, lbl_8087EE74
lbl_fn_805010C4_000013A0:
    lis r3, lbl_807C6BB8@ha
    li r0, 0x1
    addi r3, r3, lbl_807C6BB8@l
    stw r0, 0xc(r3)
lbl_fn_805010C4_000013B0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_805011D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_805011D0_00001470
    addi r3, r4, 0x7d4
    bl fn_8012D8B8
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x0(r31)
    li r0, 0x0
    stw r0, 0x58c(r3)
    lwz r3, 0x0(r31)
    bl fn_801446F0
    lwz r3, 0x0(r31)
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
    lwz r3, 0x0(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_805011D0_00001470
    bl fn_80176ACC
    lwz r3, 0x0(r31)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x0(r31)
    li r4, 0x1
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x12a4(r3)
    lwz r3, 0x0(r31)
    lwz r0, 0x12a4(r3)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x12a4(r3)
    lwz r3, 0x0(r31)
    bl fn_8016E4C4
lbl_fn_805011D0_00001470:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050128C(void)
{
    nofralloc
    lwz r6, lbl_8087F610
    cmpwi r6, 0x0
    beq lbl_fn_8050128C_000014B8
    lwz r5, 0x4fc(r6)
    subi r0, r5, 0x1e
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_8050128C_000014B8
    lwz r5, 0x50c(r6)
    subi r0, r5, 0x3
    cmplwi r0, 0x1
    blelr
lbl_fn_8050128C_000014B8:
    stw r4, 0x0(r3)
    blr
}

asm void fn_805012C8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F840
    cmpwi r0, 0x0
    bne lbl_fn_805012C8_0000160C
    lis r5, lbl_8075A880@ha
    li r3, 0x90
    addi r5, r5, lbl_8075A880@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_805012C8_00001608
    mr r4, r29
    bl fn_800D1D3C
    lis r3, lbl_80792A70@ha
    li r4, 0x0
    addi r3, r3, lbl_80792A70@l
    stw r3, 0x0(r31)
    lfs f1, lbl_80887684
    addi r5, r31, 0x68
    stw r4, 0x48(r31)
    addi r3, r31, 0x8c
    cmplw r5, r3
    lfs f0, lbl_80887688
    stw r4, 0x5c(r31)
    stfs f1, 0x60(r31)
    stfs f0, 0x64(r31)
    bge lbl_fn_805012C8_0000157C
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_805012C8_0000157C
lbl_fn_805012C8_00001568:
    stw r4, 0x0(r5)
    stfs f1, 0x4(r5)
    stfs f0, 0x8(r5)
    addi r5, r5, 0xc
    bdnz lbl_fn_805012C8_00001568
lbl_fn_805012C8_0000157C:
    lwz r29, lbl_80887680
    li r30, 0x0
lbl_fn_805012C8_00001584:
    mr r3, r31
    mr r4, r29
    li r5, 0x0
    bl fn_801F3FF8
    lwz r0, 0x48(r31)
    cmplwi r0, 0x4
    bge lbl_fn_805012C8_000015C4
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r0, r31, r0
    addic. r4, r0, 0x4c
    beq lbl_fn_805012C8_000015B8
    stw r3, 0x0(r4)
lbl_fn_805012C8_000015B8:
    lwz r3, 0x48(r31)
    addi r0, r3, 0x1
    stw r0, 0x48(r31)
lbl_fn_805012C8_000015C4:
    addi r30, r30, 0x1
    cmplwi r30, 0x4
    blt lbl_fn_805012C8_00001584
    addi r30, r31, 0x4c
    b lbl_fn_805012C8_000015F0
lbl_fn_805012C8_000015D8:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805012C8_000015EC
    li r4, 0x1
    bl fn_800D246C
lbl_fn_805012C8_000015EC:
    addi r30, r30, 0x4
lbl_fn_805012C8_000015F0:
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x4c
    cmplw r30, r0
    bne lbl_fn_805012C8_000015D8
lbl_fn_805012C8_00001608:
    stw r31, lbl_8087F840
lbl_fn_805012C8_0000160C:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F840
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80501434(void)
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
    beq lbl_fn_80501434_00001670
    li r0, 0x0
    stw r0, lbl_8087F840
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_80501434_00001670
    mr r3, r30
    bl dtor_80084684
lbl_fn_80501434_00001670:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80501494(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_80501494_00001768
    addi r30, r31, 0x4c
    b lbl_fn_80501494_000016D0
lbl_fn_80501494_000016B8:
    lwz r3, 0x0(r30)
    cmpwi r3, 0x0
    beq lbl_fn_80501494_000016CC
    li r4, 0x0
    bl fn_800D246C
lbl_fn_80501494_000016CC:
    addi r30, r30, 0x4
lbl_fn_80501494_000016D0:
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x4c
    cmplw r30, r0
    bne lbl_fn_80501494_000016B8
    addi r4, r31, 0x4c
    b lbl_fn_80501494_0000170C
lbl_fn_80501494_000016F0:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80501494_00001708
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_80501494_00001708:
    addi r4, r4, 0x4
lbl_fn_80501494_0000170C:
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x4c
    cmplw r4, r0
    bne lbl_fn_80501494_000016F0
    addi r4, r31, 0x4c
    b lbl_fn_80501494_00001748
lbl_fn_80501494_0000172C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80501494_00001744
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_80501494_00001744:
    addi r4, r4, 0x4
lbl_fn_80501494_00001748:
    lwz r0, 0x48(r31)
    slwi r0, r0, 2
    add r3, r31, r0
    addi r0, r3, 0x4c
    cmplw r4, r0
    bne lbl_fn_80501494_0000172C
    li r3, 0x1
    b lbl_fn_80501494_0000176C
lbl_fn_80501494_00001768:
    li r3, 0x0
lbl_fn_80501494_0000176C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050158C(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x2b0
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stfd f29, 0x310(r1)
    psq_st f29, 0x318(r1), 0, 0
    stfd f28, 0x300(r1)
    psq_st f28, 0x308(r1), 0, 0
    stfd f27, 0x2f0(r1)
    psq_st f27, 0x2f8(r1), 0, 0
    stfd f26, 0x2e0(r1)
    psq_st f26, 0x2e8(r1), 0, 0
    stfd f25, 0x2d0(r1)
    psq_st f25, 0x2d8(r1), 0, 0
    stfd f24, 0x2c0(r1)
    psq_st f24, 0x2c8(r1), 0, 0
    stfd f23, 0x2b0(r1)
    psq_st f23, 0x2b8(r1), 0, 0
    bl _savegpr_18
    lwz r4, lbl_8087F610
    mr r24, r3
    cmpwi r4, 0x0
    beq lbl_fn_8050158C_00002298
    lwz r0, 0x4fc(r4)
    li r3, 0x0
    cmpwi r0, 0x1e
    bne lbl_fn_8050158C_00001810
    lwz r0, 0x50c(r4)
    cmpwi r0, 0x5
    bge lbl_fn_8050158C_00001810
    li r3, 0x1
lbl_fn_8050158C_00001810:
    cmpwi r3, 0x0
    bne lbl_fn_8050158C_0000181C
    b lbl_fn_8050158C_00002298
lbl_fn_8050158C_0000181C:
    mr r3, r4
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00002298
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_00002298
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00002298
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_8050158C_00001860
    b lbl_fn_8050158C_00002298
lbl_fn_8050158C_00001860:
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r4, lbl_8087F4A0
    lwz r28, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8050158C_00001880
    lwz r20, 0x48(r4)
    b lbl_fn_8050158C_00001884
lbl_fn_8050158C_00001880:
    li r20, 0x0
lbl_fn_8050158C_00001884:
    lfs f26, lbl_8088768C
    lfs f25, lbl_80887688
    lfs f24, lbl_80887690
    b lbl_fn_8050158C_00001A60
lbl_fn_8050158C_00001894:
    lwz r0, 0x50(r20)
    cmpwi r0, 0x12
    bne lbl_fn_8050158C_00001A5C
    lwz r12, 0x0(r20)
    mr r3, r20
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00001A5C
    addi r3, r20, 0x19c
    bl fn_80450A5C
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00001A5C
    lfs f1, 0x74(r20)
    addi r3, r1, 0x20
    lfs f0, 0x530(r28)
    lfs f3, 0x70(r20)
    fsubs f4, f1, f0
    lfs f2, 0x52c(r28)
    lfs f1, 0x6c(r20)
    lfs f0, 0x528(r28)
    fsubs f2, f3, f2
    fsubs f0, f1, f0
    stfs f2, 0x24(r1)
    stfs f0, 0x20(r1)
    stfs f4, 0x28(r1)
    bl fn_805F9920
    fabs f0, f1
    fmr f27, f1
    frsp f0, f0
    fcmpo cr0, f0, f26
    blt lbl_fn_8050158C_00001928
    addi r3, r1, 0x20
    mr r4, r3
    bl fn_805F98D0
lbl_fn_8050158C_00001928:
    lwz r0, 0x5c(r24)
    li r3, -0x1
    lfs f1, lbl_80887688
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_00001950
    cmplw r0, r20
    bne lbl_fn_8050158C_00001950
    lfs f1, lbl_80887684
    li r3, 0x0
    b lbl_fn_8050158C_00001A00
lbl_fn_8050158C_00001950:
    lfs f0, 0x60(r24)
    fcmpo cr0, f1, f0
    bge lbl_fn_8050158C_00001964
    fmr f1, f0
    li r3, 0x0
lbl_fn_8050158C_00001964:
    lwz r0, 0x68(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_00001984
    cmplw r0, r20
    bne lbl_fn_8050158C_00001984
    lfs f1, lbl_80887684
    li r3, 0x1
    b lbl_fn_8050158C_00001A00
lbl_fn_8050158C_00001984:
    lfs f0, 0x6c(r24)
    fcmpo cr0, f1, f0
    bge lbl_fn_8050158C_00001998
    fmr f1, f0
    li r3, 0x1
lbl_fn_8050158C_00001998:
    lwz r0, 0x74(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_000019B8
    cmplw r0, r20
    bne lbl_fn_8050158C_000019B8
    lfs f1, lbl_80887684
    li r3, 0x2
    b lbl_fn_8050158C_00001A00
lbl_fn_8050158C_000019B8:
    lfs f0, 0x78(r24)
    fcmpo cr0, f1, f0
    bge lbl_fn_8050158C_000019CC
    fmr f1, f0
    li r3, 0x2
lbl_fn_8050158C_000019CC:
    lwz r0, 0x80(r24)
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_000019EC
    cmplw r0, r20
    bne lbl_fn_8050158C_000019EC
    lfs f1, lbl_80887684
    li r3, 0x3
    b lbl_fn_8050158C_00001A00
lbl_fn_8050158C_000019EC:
    lfs f0, 0x84(r24)
    fcmpo cr0, f1, f0
    bge lbl_fn_8050158C_00001A00
    fmr f1, f0
    li r3, 0x3
lbl_fn_8050158C_00001A00:
    fcmpo cr0, f27, f1
    bge lbl_fn_8050158C_00001A5C
    cmpwi r3, 0x0
    blt lbl_fn_8050158C_00001A5C
    mulli r0, r3, 0xc
    addi r3, r1, 0x30
    li r4, 0x79
    add r19, r24, r0
    stw r20, 0x5c(r19)
    stfs f27, 0x60(r19)
    stfs f25, 0x8(r1)
    stfs f25, 0xc(r1)
    stfs f24, 0x10(r1)
    lfs f1, 0x538(r28)
    bl fn_805F8E70
    addi r4, r1, 0x8
    addi r3, r1, 0x30
    mr r5, r4
    bl fn_805F93C0
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_805F9990
    stfs f1, 0x64(r19)
lbl_fn_8050158C_00001A5C:
    lwz r20, 0x5c(r20)
lbl_fn_8050158C_00001A60:
    cmpwi r20, 0x0
    bne lbl_fn_8050158C_00001894
    addi r4, r24, 0x4c
    b lbl_fn_8050158C_00001A8C
lbl_fn_8050158C_00001A70:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00001A88
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8050158C_00001A88:
    addi r4, r4, 0x4
lbl_fn_8050158C_00001A8C:
    lwz r0, 0x48(r24)
    slwi r0, r0, 2
    add r3, r24, r0
    addi r0, r3, 0x4c
    cmplw r4, r0
    bne lbl_fn_8050158C_00001A70
    lis r3, lbl_8075A880@ha
    lfs f30, lbl_8088769C
    lfs f27, lbl_808876A0
    addi r29, r24, 0x5c
    lfs f28, lbl_808876A4
    addi r20, r3, lbl_8075A880@l
    lfs f29, lbl_808876A8
    li r27, 0x0
    lfs f26, lbl_80887698
    li r23, 0x0
    lfs f25, lbl_80887694
    la r30, lbl_8087E430
    lfs f24, lbl_80887690
    la r22, lbl_8087E430
    lfs f31, lbl_80887688
    la r31, lbl_8087E430
lbl_fn_8050158C_00001AE4:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00002284
    lwz r12, 0x0(r3)
    lwz r12, 0x60(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00002284
    add r3, r24, r23
    lwz r5, 0x0(r29)
    lwz r26, 0x4c(r3)
    addi r3, r1, 0x14
    lwz r4, lbl_8087EFB4
    addi r5, r5, 0x1a4
    bl fn_800BFAC8
    lfs f0, 0x1c(r1)
    fcmpo cr0, f31, f0
    cror eq, lt, eq
    bne lbl_fn_8050158C_00002280
    fcmpo cr0, f0, f24
    cror eq, lt, eq
    bne lbl_fn_8050158C_00002280
    lfs f0, 0x4(r29)
    fcmpo cr0, f0, f25
    bge lbl_fn_8050158C_00002280
    lfs f0, 0x8(r29)
    fcmpo cr0, f0, f26
    cror eq, gt, eq
    bne lbl_fn_8050158C_00002280
    lfs f23, 0x14(r1)
    addi r3, r20, 0x1
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    addi r3, r26, 0x58
    li r5, 0x0
    bl fn_801FED24
    lfs f23, 0x18(r1)
    addi r3, r20, 0x1
    bl fn_800DC6B4
    fmr f1, f23
    mr r4, r3
    addi r3, r26, 0x58
    li r5, 0x1
    bl fn_801FED24
    lwz r0, 0x650(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8050158C_00001BB4
    lwz r3, 0x654(r28)
    lwz r19, 0x274(r3)
    b lbl_fn_8050158C_00001BB8
lbl_fn_8050158C_00001BB4:
    li r19, 0x0
lbl_fn_8050158C_00001BB8:
    lwz r3, 0x678(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00001BC8
    lwz r19, 0x274(r3)
lbl_fn_8050158C_00001BC8:
    lwz r3, 0x0(r29)
    addi r3, r3, 0x19c
    bl fn_80450A5C
    bl fn_80206C50
    cmpwi r19, 0x0
    mr r21, r3
    beq lbl_fn_8050158C_00002284
    cmpwi r3, 0x0
    beq lbl_fn_8050158C_00002284
    lfs f2, 0x0(r3)
    lfs f0, 0x0(r19)
    lfs f1, 0x4(r3)
    fsubs f2, f2, f0
    lfs f0, 0x4(r19)
    fsubs f0, f1, f0
    fctiwz f1, f2
    stfd f1, 0x260(r1)
    fctiwz f0, f0
    lwz r18, 0x264(r1)
    stfd f0, 0x268(r1)
    cmpwi r18, 0x0
    lwz r25, 0x26c(r1)
    ble lbl_fn_8050158C_00001D24
    addi r3, r20, 0xc
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r31
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    mr r5, r18
    addi r4, r20, 0x1a
    li r6, 0x0
    bl fn_801F4CB4
    li r3, 0x0
    li r4, 0x79
    bl fn_80116FC0
    mr r19, r3
    addi r3, r20, 0x28
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x32
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x3a
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x42
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x4b
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x58
    fadds f3, f29, f30
    bl fn_801F4AA0
    addi r3, r20, 0x65
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0x6b
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    b lbl_fn_8050158C_00001F20
lbl_fn_8050158C_00001D24:
    bge lbl_fn_8050158C_00001E2C
    addi r19, r22, 0x4
    addi r3, r20, 0xc
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    addi r4, r20, 0x1a
    neg r5, r18
    li r6, 0x0
    bl fn_801F4CB4
    li r3, 0x0
    li r4, 0x72
    bl fn_80116FC0
    mr r19, r3
    addi r3, r20, 0x28
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x32
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x3a
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x42
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x4b
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x58
    fmr f3, f2
    bl fn_801F4AA0
    addi r3, r20, 0x65
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0x6b
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    b lbl_fn_8050158C_00001F20
lbl_fn_8050158C_00001E2C:
    addi r19, r22, 0x8
    addi r3, r20, 0xc
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    addi r4, r20, 0x1a
    li r5, 0x0
    li r6, 0x0
    bl fn_801F4CB4
    addi r19, r22, 0xa
    addi r3, r20, 0x28
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x32
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x3a
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x42
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x4b
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x58
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    addi r3, r20, 0x65
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0x6b
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_8050158C_00001F20:
    cmpwi r25, 0x0
    ble lbl_fn_8050158C_00002028
    addi r3, r20, 0x71
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r30
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    mr r5, r25
    addi r4, r20, 0x7f
    li r6, 0x0
    bl fn_801F4CB4
    li r3, 0x0
    li r4, 0x79
    bl fn_80116FC0
    mr r19, r3
    addi r3, r20, 0x8d
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x97
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0x9f
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0xa7
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0xb0
    fadds f3, f29, f30
    bl fn_801F4AA0
    fadds f1, f27, f30
    mr r3, r26
    fadds f2, f28, f30
    addi r4, r20, 0xbd
    fadds f3, f29, f30
    bl fn_801F4AA0
    addi r3, r20, 0xca
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0xd1
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    b lbl_fn_8050158C_00002224
lbl_fn_8050158C_00002028:
    bge lbl_fn_8050158C_00002130
    addi r19, r22, 0x4
    addi r3, r20, 0x71
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    addi r4, r20, 0x7f
    neg r5, r25
    li r6, 0x0
    bl fn_801F4CB4
    li r3, 0x0
    li r4, 0x72
    bl fn_80116FC0
    mr r19, r3
    addi r3, r20, 0x8d
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x97
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0x9f
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0xa7
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0xb0
    fmr f3, f2
    bl fn_801F4AA0
    lfs f2, lbl_808876B0
    mr r3, r26
    lfs f1, lbl_808876AC
    addi r4, r20, 0xbd
    fmr f3, f2
    bl fn_801F4AA0
    addi r3, r20, 0xca
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0xd1
    bl fn_800DC6B4
    lfs f1, lbl_80887690
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    b lbl_fn_8050158C_00002224
lbl_fn_8050158C_00002130:
    addi r19, r22, 0x8
    addi r3, r20, 0x71
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    mr r3, r26
    addi r4, r20, 0x7f
    li r5, 0x0
    li r6, 0x0
    bl fn_801F4CB4
    addi r19, r22, 0xa
    addi r3, r20, 0x8d
    bl fn_800DC6B4
    mr r4, r3
    mr r5, r19
    addi r3, r26, 0x58
    bl fn_801FEE08
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x97
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0x9f
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0xa7
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0xb0
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    lfs f1, lbl_808876B4
    mr r3, r26
    addi r4, r20, 0xbd
    fmr f2, f1
    fmr f3, f1
    bl fn_801F4AA0
    addi r3, r20, 0xca
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    addi r3, r20, 0xd1
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
lbl_fn_8050158C_00002224:
    addi r3, r1, 0x60
    li r4, 0x0
    li r5, 0x200
    bl memset
    addi r3, r1, 0x60
    addi r4, r21, 0xc4
    bl fn_8021C6A4
    addi r3, r20, 0xd8
    bl fn_800DC6B4
    mr r4, r3
    addi r3, r26, 0x58
    addi r5, r1, 0x60
    bl fn_801FEE08
    addi r3, r20, 0xe6
    bl fn_800DC6B4
    lfs f1, lbl_80887688
    mr r4, r3
    addi r3, r26, 0x58
    bl fn_801FECE0
    lwz r0, 0x38(r26)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r26)
    b lbl_fn_8050158C_00002284
lbl_fn_8050158C_00002280:
    stfs f31, 0x100(r26)
lbl_fn_8050158C_00002284:
    addi r27, r27, 0x1
    addi r23, r23, 0x4
    cmpwi r27, 0x4
    addi r29, r29, 0xc
    blt lbl_fn_8050158C_00001AE4
lbl_fn_8050158C_00002298:
    addi r11, r1, 0x2b0
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    psq_l f29, 0x318(r1), 0, 0
    lfd f29, 0x310(r1)
    psq_l f28, 0x308(r1), 0, 0
    lfd f28, 0x300(r1)
    psq_l f27, 0x2f8(r1), 0, 0
    lfd f27, 0x2f0(r1)
    psq_l f26, 0x2e8(r1), 0, 0
    lfd f26, 0x2e0(r1)
    psq_l f25, 0x2d8(r1), 0, 0
    lfd f25, 0x2d0(r1)
    psq_l f24, 0x2c8(r1), 0, 0
    lfd f24, 0x2c0(r1)
    psq_l f23, 0x2b8(r1), 0, 0
    lfd f23, 0x2b0(r1)
    bl _restgpr_18
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}
