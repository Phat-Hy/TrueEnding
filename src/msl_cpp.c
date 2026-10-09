#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void __register_global_object(void);
extern void _restfpr_23(void);
extern void _savefpr_23(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8001A270(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800E1A48(void);
extern void fn_800E1D5C(void);
extern void fn_800E2778(void);
extern void fn_8067AF64(void);
extern void fn_8067C590(void);
extern void fn_8067D06C(void);
extern void fn_8067D19C(void);
extern void fn_8067D5C0(void);
extern void fn_8067D988(void);
extern void fn_8067DABC(void);
extern void fn_8067DB74(void);
extern void fn_8067E570(void);
extern void fn_80682428(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686ED8(void);
extern void fn_806974B4(void);
extern void fn_80697BB8(void);
extern void fn_80697CFC(void);
extern void memmove(void);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 dtor_800E0C8C[];
extern u8 lbl_80765338[];
extern u8 lbl_80765538[];
extern u8 lbl_80765638[];
extern u8 lbl_80765EA8[];
extern u8 lbl_80765EB8[];
extern u8 lbl_80765EE8[];
extern u8 lbl_80765FF0[];
extern u8 lbl_80766070[];
extern u8 lbl_80766080[];
extern u8 lbl_807660C0[];
extern u8 lbl_80766128[];
extern u8 lbl_807661D8[];
extern u8 lbl_8076645C[];
extern u8 lbl_80766688[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_807799E0[];
extern u8 lbl_80779A58[];
extern u8 lbl_80779AA0[];
extern u8 lbl_80779AB8[];
extern u8 lbl_8078B2E0[];
extern u8 lbl_807BB380[];
extern u8 lbl_807BBB08[];
extern u8 lbl_807BBB24[];
extern u8 lbl_807BBB30[];
extern u8 lbl_807BBB90[];
extern u8 lbl_807BBBE4[];
extern u8 lbl_807BBC2C[];
extern u8 lbl_807BBC68[];
extern u8 lbl_807BBCC8[];
extern u8 lbl_807BBD1C[];
extern u8 lbl_807BBD68[];
extern u8 lbl_807BBD98[];
extern u8 lbl_807BBDC4[];
extern u8 lbl_807BBDE0[];
extern u8 lbl_807BBE00[];
extern u8 lbl_807BBE40[];
extern u8 lbl_807BBE7C[];
extern u8 lbl_807BBECC[];
extern u8 lbl_807BBF10[];
extern u8 lbl_807BBF38[];
extern u8 lbl_808327C0[];
extern u8 lbl_80832A70[];
extern u8 lbl_80832AAC[];
extern u8 lbl_80832B00[];
extern u8 lbl_80832B54[];
extern u8 lbl_80832B90[];
extern u8 lbl_80832BE4[];
extern u8 lbl_80832C38[];
extern u8 lbl_80832C44[];
extern u8 lbl_8087EC00[];

/* Small data declarations */
extern u32 lbl_8087EC20;
extern u32 lbl_8087EC24;
extern u32 lbl_8087EC78;
extern u32 lbl_8087EC7C;
extern u32 lbl_8087EC80;
extern u32 lbl_8087EC82;
extern u32 lbl_8087EC84;
extern u32 lbl_8087EC86;
extern u32 lbl_8087EC88;
extern u32 lbl_8087EC8A;
extern u32 lbl_8087EC8C;
extern u32 lbl_8087EC8E;
extern u32 lbl_8087EC90;
extern u32 lbl_8087EC92;
extern u32 lbl_8087EC94;
extern u32 lbl_8087EC96;
extern u32 lbl_8087EC98;
extern u32 lbl_8087EC9A;
extern u32 lbl_8087EC9C;
extern u32 lbl_8087EC9E;
extern u32 lbl_8087ECA0;
extern u32 lbl_8087ECA2;
extern u32 lbl_8087ECA4;
extern u32 lbl_8087ECA6;
extern u32 lbl_8087ECA8;
extern u32 lbl_8087ECAA;
extern u32 lbl_8087ECAC;
extern u32 lbl_8087ECAE;
extern u32 lbl_8087ECB0;
extern u32 lbl_8087ECB2;
extern u32 lbl_8087ECB4;
extern u32 lbl_8087ECB6;
extern u32 lbl_8087ECB8;
extern u32 lbl_8087ECBA;
extern u32 lbl_8087ECBC;
extern u32 lbl_8087ECBE;
extern u32 lbl_8087ECC0;
extern u32 lbl_8087ECC2;
extern u32 lbl_8087ECC4;
extern u32 lbl_8087ECC6;
extern u32 lbl_8087ECC8;
extern u32 lbl_8087ECCA;
extern u32 lbl_8087ED18;
extern u32 lbl_80880348;
extern u32 lbl_80880368;
extern u32 lbl_80880370;
extern u32 lbl_80880378;
extern u32 lbl_8088037C;
extern u32 lbl_80880380;
extern u32 lbl_80880384;
extern u32 lbl_80880385;
extern u32 lbl_80880386;
extern u32 lbl_80880387;
extern u32 lbl_80880388;
extern u32 lbl_80880389;
extern u32 lbl_8088038A;
extern u32 lbl_8088038B;
extern u32 lbl_80880390;
extern u32 lbl_80880398;
extern u32 lbl_808803A0;
extern u32 lbl_808803A4;
extern u32 lbl_808803A5;
extern u32 lbl_808803A8;
extern u32 lbl_808803B0;
extern u32 lbl_808803B8;
extern u32 lbl_808803C0;
extern u32 lbl_808803C4;
extern u32 lbl_808803C8;
extern u32 lbl_808803CC;
extern u32 lbl_808803D0;
extern u32 lbl_808803D1;
extern u32 lbl_808803D2;
extern u32 lbl_808803D3;
extern u32 lbl_80888AF0;
extern u32 lbl_80888AF8;
extern u32 lbl_80888B00;
extern u32 lbl_80888B08;
extern u32 lbl_80888B10;
extern u32 lbl_80888B18;
extern u32 lbl_80888B20;
extern u32 lbl_80888B28;
extern u32 lbl_80888B30;
extern u32 lbl_80888B38;
extern u32 lbl_80888B40;
extern u32 lbl_80888B48;
extern u32 lbl_80888B50;
extern u32 lbl_80888B58;
extern u32 lbl_80888B60;
extern u32 lbl_80888B68;
extern u32 lbl_80888B70;
extern u32 lbl_80888B78;
extern u32 lbl_80888B80;
extern u32 lbl_80888B88;
extern u32 lbl_80888B90;
extern u32 lbl_80888B98;
extern u32 lbl_80888BA0;
extern u32 lbl_80888BA8;
extern u32 lbl_80888BB0;
extern u32 lbl_80888BB8;
extern u32 lbl_80888BC0;
extern u32 lbl_80888BC8;
extern u32 lbl_80888BD0;
extern u32 lbl_80888BD8;
extern u32 lbl_80888BE0;
extern u32 lbl_80888BE8;
extern u32 lbl_80888BF0;
extern u32 lbl_80888BF8;
extern u32 lbl_80888C00;
extern u32 lbl_80888C08;
extern u32 lbl_80888C10;
extern u32 lbl_80888C18;
extern u32 lbl_80888C20;
extern u32 lbl_80888C28;
extern u32 lbl_80888C30;
extern u32 lbl_80888C38;
extern u32 lbl_80888C40;
extern u32 lbl_80888C48;
extern u32 lbl_80888C50;
extern u32 lbl_80888C58;
extern u32 lbl_80888C60;
extern u32 lbl_80888C68;
extern u32 lbl_80888C70;
extern u32 lbl_80888C78;
extern u32 lbl_80888C80;
extern u32 lbl_80888C88;
extern u32 lbl_80888C90;
extern u32 lbl_80888C98;
extern u32 lbl_80888CA0;
extern u32 lbl_80888CA8;
extern u32 lbl_80888CB0;
extern u32 lbl_80888CB8;
extern u32 lbl_80888CC0;
extern u32 lbl_80888CC8;
extern u32 lbl_80888CD0;
extern u32 lbl_80888CD8;
extern u32 lbl_80888CE0;
extern u32 lbl_80888CE8;
extern u32 lbl_80888CF0;
extern u32 lbl_80888CF8;
extern u32 lbl_80888D00;
extern u32 lbl_80888D08;
extern u32 lbl_80888D10;
extern u32 lbl_80888D18;
extern u32 lbl_80888D20;
extern u32 lbl_80888D28;
extern u32 lbl_80888D30;
extern u32 lbl_80888D38;
extern u32 lbl_80888D40;
extern u32 lbl_80888D48;
extern u32 lbl_80888D50;
extern u32 lbl_80888D58;
extern u32 lbl_80888D60;
extern u32 lbl_80888D68;
extern u32 lbl_80888D70;
extern u32 lbl_80888D78;
extern u32 lbl_80888D80;
extern u32 lbl_80888D88;
extern u32 lbl_80888D90;
extern u32 lbl_80888D98;
extern u32 lbl_80888DA0;
extern u32 lbl_80888DA8;
extern u32 lbl_80888DB0;
extern u32 lbl_80888DB8;
extern u32 lbl_80888DC0;
extern u32 lbl_80888DC8;
extern u32 lbl_80888DD0;
extern u32 lbl_80888DD8;
extern u32 lbl_80888DE0;
extern u32 lbl_80888DE8;
extern u32 lbl_80888DF0;
extern u32 lbl_80888DF8;
extern u32 lbl_80888E00;
extern u32 lbl_80888E08;
extern u32 lbl_80888E10;
extern u32 lbl_80888E18;
extern u32 lbl_80888E20;
extern u32 lbl_80888E28;
extern u32 lbl_80888E30;
extern u32 lbl_80888E38;
extern u32 lbl_80888E40;
extern u32 lbl_80888E48;
extern u32 lbl_80888E50;
extern u32 lbl_80888E58;
extern u32 lbl_80888E60;
extern u32 lbl_80888E68;
extern u32 lbl_80888E70;
extern u32 lbl_80888E78;
extern u32 lbl_80888E80;
extern u32 lbl_80888E88;
extern u32 lbl_80888E90;
extern u32 lbl_80888E98;
extern u32 lbl_80888EA0;
extern u32 lbl_80888EA8;
extern u32 lbl_80888EB0;
extern u32 lbl_80888EB8;
extern u32 lbl_80888EC0;
extern u32 lbl_80888EC8;
extern u32 lbl_80888ED0;
extern u32 lbl_80888ED8;
extern u32 lbl_80888EE0;
extern u32 lbl_80888EE8;
extern u32 lbl_80888EF0;
extern u32 lbl_80888EF8;
extern u32 lbl_80888F00;
extern u32 lbl_80888F08;
extern u32 lbl_80888F10;
extern u32 lbl_80888F18;
extern u32 lbl_80888F20;
extern u32 lbl_80888F28;
extern u32 lbl_80888F30;
extern u32 lbl_80888F38;
extern u32 lbl_80888F40;
extern u32 lbl_80888F48;
extern u32 lbl_80888F50;
extern u32 lbl_80888F58;
extern u32 lbl_80888F60;
extern u32 lbl_80888F68;
extern u32 lbl_80888F70;
extern u32 lbl_80888F78;
extern u32 lbl_80888F80;
extern u32 lbl_80888F88;
extern u32 lbl_80888F90;
extern u32 lbl_80888F98;
extern u32 lbl_80888FA0;
extern u32 lbl_80888FA8;
extern u32 lbl_80888FB0;
extern u32 lbl_80888FB8;
extern u32 lbl_80888FC0;
extern u32 lbl_80888FC8;
extern u32 lbl_80888FD0;
extern u32 lbl_80888FD8;
extern u32 lbl_80888FE0;
extern u32 lbl_80888FE8;
extern u32 lbl_80888FF0;
extern u32 lbl_80888FF8;

/* Function declarations */
void fn_80686EF4(void);
void fn_80686F34(void);
void fn_80687200(void);
void fn_80687498(void);
void fn_806876F0(void);
void fn_80687A70(void);
void fn_80687D24(void);
void fn_80687E38(void);
void fn_8068864C(void);
void fn_806889D0(void);
void fn_80688AE0(void);
void fn_8068A198(void);
void fn_8068A258(void);
void fn_8068A4A8(void);
void fn_8068A6D8(void);
void fn_8068A824(void);
void fn_8068A850(void);
void fn_8068A918(void);
void fn_8068AA68(void);
void fn_8068AAF0(void);
void fn_8068AC5C(void);
void fn_8068AD58(void);
void fn_8068AE24(void);
void fn_8068AE9C(void);
void fn_8068AEA0(void);
void fn_8068AEA4(void);
void fn_8068AEA8(void);
void fn_8068AEAC(void);
void fn_8068AEB0(void);
void fn_8068AEB4(void);
void fn_8068B0FC(void);
void fn_8068B100(void);
void fn_8068B104(void);
void fn_8068B1A4(void);
void fn_8068B1F8(void);
void fn_8068B1FC(void);
void fn_8068B29C(void);
void fn_8068B2A0(void);
void fn_8068B39C(void);
void fn_8068B47C(void);
void fn_8068B50C(void);
void fn_8068B60C(void);
void fn_8068B610(void);
void fn_8068B728(void);
void fn_8068B730(void);
void fn_8068B770(void);
void fn_8068BA50(void);
void fn_8068BA58(void);
void fn_8068BA5C(void);
void fn_8068BA70(void);
void dtor_8068BA80(void);
void fn_8068BAC0(void);
void fn_8068BB54(void);
void fn_8068BC10(void);
void fn_8068BC20(void);
void fn_8068BC30(void);
void fn_8068BD60(void);
void fn_8068C040(void);
void dtor_8068C0D4(void);
void fn_8068C164(void);
void fn_8068C220(void);
void fn_8068C230(void);
void fn_8068C240(void);
void fn_8068C370(void);
void dtor_8068C3E8(void);
void fn_8068C440(void);
void fn_8068C4B8(void);
void fn_8068C72C(void);
void fn_8068C9A0(void);
void fn_8068CD1C(void);
void fn_8068CD24(void);
void fn_8068CD2C(void);
void fn_8068D0A8(void);
void fn_8068D0B0(void);
void fn_8068D0B8(void);
void fn_8068D170(void);
void fn_8068D3A0(void);
void fn_8068D40C(void);
void fn_8068D414(void);
void fn_8068D7AC(void);
void fn_8068D7B8(void);
void fn_8068D9BC(void);
void fn_8068DA74(void);
void fn_8068DC84(void);
void fn_8068DCF0(void);
void fn_8068DCF8(void);
void fn_8068E080(void);
void fn_8068E090(void);
void fn_8068E09C(void);
void fn_8068E270(void);
void fn_8068E3FC(void);
void fn_8068E554(void);
void fn_8068E6E8(void);
void fn_8068E878(void);
void fn_8068EA10(void);
void fn_8068EA38(void);
void fn_8068EA40(void);
void fn_8068EA68(void);
void fn_8068EA70(void);
void fn_8068EAF8(void);
void fn_8068EB0C(void);
void fn_8068EB14(void);
void fn_8068EB20(void);
void fn_8068EBA8(void);
void fn_8068EBBC(void);
void fn_8068EBC4(void);
void fn_8068EBD0(void);
void fn_8068EBF8(void);
void fn_8068EC74(void);
void fn_8068ECF4(void);
void fn_8068EF6C(void);
void fn_8068EFFC(void);
void fn_8068F138(void);
void fn_8068F410(void);
void fn_8068F630(void);
void fn_8068F658(void);
void fn_8068F6D0(void);
void fn_8068F74C(void);
void fn_8068F9B8(void);
void fn_8068FA48(void);
void fn_8068FB84(void);
void fn_8068FE5C(void);
void fn_80690068(void);
void fn_80690078(void);
void fn_80690094(void);
void fn_806901D0(void);
void fn_80690230(void);
void fn_806903A8(void);
void fn_80690524(void);
void fn_80690630(void);
void fn_80690A98(void);
void fn_80690D60(void);
void fn_80690D70(void);
void fn_80690E9C(void);
void fn_80690EF4(void);
void fn_80691050(void);
void fn_806911CC(void);
void fn_806912D8(void);
void fn_8069172C(void);
void fn_8069194C(void);
void dtor_80691AC0(void);
void fn_80691B44(void);
void fn_80691B48(void);
void fn_80691B60(void);
void fn_80691B78(void);
void fn_80691B80(void);
void fn_80691C90(void);
void fn_80691C9C(void);
void fn_80691CFC(void);
void fn_80691D08(void);
void fn_80691E1C(void);
void fn_80691E28(void);
void fn_80691E3C(void);
void fn_80691E50(void);
void dtor_80691E68(void);
void dtor_80691EE4(void);
void fn_80691F24(void);
void fn_806920C0(void);
void fn_806926D4(void);
void fn_8069293C(void);
void fn_8069298C(void);
void fn_806929FC(void);
void fn_80692A10(void);
void fn_80692ADC(void);
void fn_80692AF0(void);
void fn_80692BBC(void);
void fn_80692BC4(void);
void fn_80692BFC(void);
void fn_80692C04(void);
void fn_80692C3C(void);
void dtor_80692EFC(void);
void dtor_80692F78(void);
void fn_80692FF4(void);
void fn_806930D4(void);
void fn_806931E0(void);
void fn_806932F0(void);
void fn_80693400(void);
void fn_80693508(void);
void fn_80693610(void);
void fn_806936C0(void);
void fn_80693730(void);
void fn_80693744(void);
void fn_80693758(void);
void fn_80693798(void);
void fn_806937AC(void);
void fn_80693818(void);
void fn_80693884(void);
void fn_806939C8(void);
void fn_80693AB8(void);
void fn_80694008(void);
void fn_80694048(void);
void fn_8069407C(void);
void fn_806940A8(void);
void fn_80694188(void);
void fn_80694254(void);
void fn_80694320(void);
void fn_80694328(void);
void fn_806943B8(void);
void fn_806945A4(void);
void fn_80694790(void);
void fn_80694C38(void);
void fn_806950E0(void);
void fn_8069512C(void);
void dtor_80695138(void);
void fn_8069519C(void);
void fn_80695230(void);
void fn_80695270(void);
void fn_806952C4(void);
void strlen(void);
void __va_arg(void);

asm void fn_80686EF4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8068AA68
    lwz r0, 0x8(r1)
    add r3, r0, r31
    stw r3, 0x8(r1)
    bl fn_8068AAF0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80686F34(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stfd f30, 0x20(r1)
    psq_st f30, 0x28(r1), 0, 0
    stfd f1, 0x8(r1)
    lis r0, 0x3ff0
    lwz r4, 0x8(r1)
    clrlwi r3, r4, 1
    cmpw r3, r0
    blt lbl_fn_80686F34_000000B0
    lwz r0, 0xc(r1)
    subis r3, r3, 0x3ff0
    or. r0, r3, r0
    bne lbl_fn_80686F34_0000009C
    cmpwi r4, 0x0
    ble lbl_fn_80686F34_00000094
    lfd f1, lbl_80888AF0
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_00000094:
    lfd f1, lbl_80888AF8
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_0000009C:
    lis r3, lbl_8087EC00@ha
    li r0, 0x21
    stw r0, lbl_80880348
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_000000B0:
    lis r0, 0x3fe0
    cmpw r3, r0
    bge lbl_fn_80686F34_0000016C
    lis r0, 0x3c60
    cmpw r3, r0
    bgt lbl_fn_80686F34_000000D0
    lfd f1, lbl_80888B00
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_000000D0:
    fmul f12, f1, f1
    lfd f0, lbl_80888B30
    lfd f2, lbl_80888B58
    lfd f3, lbl_80888B28
    lfd f10, lbl_80888B20
    fmul f4, f0, f12
    lfd f0, lbl_80888B50
    fmul f2, f2, f12
    lfd f5, lbl_80888B48
    lfd f9, lbl_80888B18
    fadd f3, f3, f4
    lfd f4, lbl_80888B40
    fadd f0, f0, f2
    fmul f11, f12, f3
    lfd f8, lbl_80888B10
    lfd f3, lbl_80888B38
    fmul f6, f12, f0
    lfd f7, lbl_80888B08
    lfd f2, lbl_80888B60
    fadd f10, f10, f11
    lfd f0, lbl_80888B00
    fadd f5, f5, f6
    fmul f6, f12, f10
    fmul f5, f12, f5
    fadd f6, f9, f6
    fadd f4, f4, f5
    fmul f5, f12, f6
    fmul f4, f12, f4
    fadd f5, f8, f5
    fadd f4, f3, f4
    fmul f3, f12, f5
    fadd f3, f7, f3
    fmul f3, f12, f3
    fdiv f3, f3, f4
    fmul f3, f1, f3
    fsub f2, f2, f3
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_0000016C:
    cmpwi r4, 0x0
    bge lbl_fn_80686F34_00000224
    lfd f11, lbl_80888B38
    lfd f0, lbl_80888B68
    fadd f1, f11, f1
    lfd f4, lbl_80888B30
    lfd f9, lbl_80888B28
    lfd f3, lbl_80888B50
    fmul f1, f0, f1
    lfd f0, lbl_80888B58
    lfd f8, lbl_80888B20
    lfd f2, lbl_80888B48
    lfd f7, lbl_80888B18
    fmul f10, f4, f1
    lfd f6, lbl_80888B10
    fmul f4, f0, f1
    lfd f0, lbl_80888B40
    lfd f5, lbl_80888B08
    fadd f9, f9, f10
    fadd f3, f3, f4
    fmul f4, f1, f9
    fmul f3, f1, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f1, f4
    fmul f2, f1, f2
    fadd f3, f7, f3
    fadd f0, f0, f2
    fmul f2, f1, f3
    fmul f0, f1, f0
    fadd f2, f6, f2
    fadd f30, f11, f0
    fmul f0, f1, f2
    fadd f0, f5, f0
    fmul f31, f1, f0
    bl fn_8068B100
    fdiv f4, f31, f30
    lfd f3, lbl_80888B60
    lfd f2, lbl_80888B70
    lfd f0, lbl_80888AF8
    fmul f4, f4, f1
    fsub f3, f4, f3
    fadd f1, f1, f3
    fmul f1, f2, f1
    fsub f1, f0, f1
    b lbl_fn_80686F34_000002EC
lbl_fn_80686F34_00000224:
    lfd f2, lbl_80888B38
    lfd f0, lbl_80888B68
    fsub f1, f2, f1
    fmul f31, f0, f1
    fmr f1, f31
    bl fn_8068B100
    lfd f2, lbl_80888B30
    li r0, 0x0
    stfd f1, 0x10(r1)
    fmul f4, f2, f31
    lfd f0, lbl_80888B58
    lfd f3, lbl_80888B28
    fmul f2, f0, f31
    lfd f0, lbl_80888B50
    stw r0, 0x14(r1)
    fadd f3, f3, f4
    lfd f11, 0x10(r1)
    fadd f0, f0, f2
    fmul f10, f11, f11
    lfd f6, lbl_80888B20
    lfd f8, lbl_80888B18
    fmul f2, f31, f3
    lfd f4, lbl_80888B48
    lfd f7, lbl_80888B10
    fmul f5, f31, f0
    lfd f3, lbl_80888B40
    fadd f0, f6, f2
    lfd f6, lbl_80888B08
    lfd f2, lbl_80888B38
    fsub f10, f31, f10
    fmul f9, f31, f0
    lfd f0, lbl_80888B70
    fadd f4, f4, f5
    fadd f5, f8, f9
    fmul f4, f31, f4
    fmul f5, f31, f5
    fadd f3, f3, f4
    fadd f8, f1, f11
    fadd f4, f7, f5
    fmul f3, f31, f3
    fmul f4, f31, f4
    fadd f3, f2, f3
    fdiv f5, f10, f8
    fadd f2, f6, f4
    fmul f2, f31, f2
    fdiv f2, f2, f3
    fmul f1, f2, f1
    fadd f1, f5, f1
    fadd f1, f11, f1
    fmul f1, f0, f1
lbl_fn_80686F34_000002EC:
    lwz r0, 0x44(r1)
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    psq_l f30, 0x28(r1), 0, 0
    lfd f30, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80687200(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    lis r0, 0x3ff0
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    stfd f1, 0x8(r1)
    lwz r31, 0x8(r1)
    stw r30, 0x18(r1)
    clrlwi r30, r31, 1
    cmpw r30, r0
    blt lbl_fn_80687200_0000038C
    lwz r0, 0xc(r1)
    subis r3, r30, 0x3ff0
    or. r0, r3, r0
    bne lbl_fn_80687200_00000378
    lfd f2, lbl_80888B78
    lfd f0, lbl_80888B80
    fmul f2, f2, f1
    fmul f0, f0, f1
    fadd f1, f2, f0
    b lbl_fn_80687200_00000574
lbl_fn_80687200_00000378:
    lis r3, lbl_8087EC00@ha
    li r0, 0x21
    stw r0, lbl_80880348
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_80687200_00000574
lbl_fn_80687200_0000038C:
    lis r0, 0x3fe0
    cmpw r30, r0
    bge lbl_fn_80687200_00000448
    lis r0, 0x3e40
    cmpw r30, r0
    bge lbl_fn_80687200_000003BC
    lfd f2, lbl_80888B88
    lfd f0, lbl_80888B90
    fadd f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_80687200_000003C0
    b lbl_fn_80687200_00000574
lbl_fn_80687200_000003BC:
    fmul f31, f1, f1
lbl_fn_80687200_000003C0:
    lfd f2, lbl_80888BC0
    lfd f0, lbl_80888BE0
    fmul f4, f2, f31
    lfd f3, lbl_80888BB8
    lfd f8, lbl_80888BB0
    fmul f2, f0, f31
    lfd f0, lbl_80888BD8
    lfd f7, lbl_80888BA8
    fadd f4, f3, f4
    lfd f3, lbl_80888BD0
    fadd f0, f0, f2
    lfd f2, lbl_80888BC8
    fmul f9, f31, f4
    lfd f6, lbl_80888BA0
    lfd f5, lbl_80888B98
    fmul f4, f31, f0
    lfd f0, lbl_80888B90
    fadd f8, f8, f9
    fadd f3, f3, f4
    fmul f4, f31, f8
    fmul f3, f31, f3
    fadd f4, f7, f4
    fadd f2, f2, f3
    fmul f3, f31, f4
    fmul f2, f31, f2
    fadd f3, f6, f3
    fadd f2, f0, f2
    fmul f0, f31, f3
    fadd f0, f5, f0
    fmul f0, f31, f0
    fdiv f0, f0, f2
    fmul f0, f1, f0
    fadd f1, f1, f0
    b lbl_fn_80687200_00000574
lbl_fn_80687200_00000448:
    fabs f1, f1
    lfd f11, lbl_80888B90
    lfd f2, lbl_80888BE8
    lfd f0, lbl_80888BC0
    fsub f3, f11, f1
    lfd f1, lbl_80888BE0
    lfd f9, lbl_80888BB8
    lfd f8, lbl_80888BB0
    fmul f31, f2, f3
    lfd f3, lbl_80888BD8
    lfd f2, lbl_80888BD0
    lfd f7, lbl_80888BA8
    lfd f6, lbl_80888BA0
    fmul f10, f0, f31
    lfd f0, lbl_80888BC8
    fmul f4, f1, f31
    lfd f5, lbl_80888B98
    fadd f9, f9, f10
    fmr f1, f31
    fadd f3, f3, f4
    fmul f4, f31, f9
    fmul f3, f31, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f31, f4
    fmul f2, f31, f2
    fadd f3, f7, f3
    fadd f0, f0, f2
    fmul f2, f31, f3
    fmul f0, f31, f0
    fadd f2, f6, f2
    fadd f29, f11, f0
    fmul f0, f31, f2
    fadd f0, f5, f0
    fmul f30, f31, f0
    bl fn_8068B100
    lis r3, 0x3fef
    addi r0, r3, 0x3333
    cmpw r30, r0
    blt lbl_fn_80687200_00000510
    fdiv f4, f30, f29
    lfd f3, lbl_80888BF0
    lfd f2, lbl_80888B80
    lfd f0, lbl_80888B78
    fmul f4, f1, f4
    fadd f1, f1, f4
    fmul f1, f3, f1
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_fn_80687200_00000564
lbl_fn_80687200_00000510:
    stfd f1, 0x10(r1)
    li r0, 0x0
    lfd f5, lbl_80888BF0
    fdiv f8, f30, f29
    stw r0, 0x14(r1)
    lfd f3, lbl_80888B80
    lfd f7, 0x10(r1)
    lfd f2, lbl_80888BF8
    fmul f4, f5, f1
    fmul f0, f7, f7
    fadd f6, f1, f7
    fmul f4, f4, f8
    fsub f1, f31, f0
    fmul f0, f5, f7
    fdiv f1, f1, f6
    fmul f1, f5, f1
    fsub f1, f3, f1
    fsub f3, f2, f0
    fsub f0, f4, f1
    fsub f0, f0, f3
    fsub f1, f2, f0
lbl_fn_80687200_00000564:
    cmpwi r31, 0x0
    ble lbl_fn_80687200_00000570
    b lbl_fn_80687200_00000574
lbl_fn_80687200_00000570:
    fneg f1, f1
lbl_fn_80687200_00000574:
    lwz r0, 0x54(r1)
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80687498(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r3, 0x7ff0
    stfd f2, 0x10(r1)
    lwz r8, 0x14(r1)
    stw r0, 0x34(r1)
    neg r0, r8
    lwz r4, 0x10(r1)
    or r0, r8, r0
    stfd f1, 0x8(r1)
    clrlwi r6, r4, 1
    srwi r0, r0, 31
    lwz r5, 0x8(r1)
    or r0, r6, r0
    stw r31, 0x2c(r1)
    cmplw r0, r3
    lwz r9, 0xc(r1)
    clrlwi r7, r5, 1
    bgt lbl_fn_80687498_00000608
    neg r0, r9
    or r0, r9, r0
    srwi r0, r0, 31
    or r0, r7, r0
    cmplw r0, r3
    ble lbl_fn_80687498_00000610
lbl_fn_80687498_00000608:
    fadd f1, f2, f1
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000610:
    subis r0, r4, 0x3ff0
    or. r0, r0, r8
    bne lbl_fn_80687498_00000624
    bl fn_8068A4A8
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000624:
    or. r0, r7, r9
    rlwinm r31, r4, 2, 30, 30
    rlwimi r31, r5, 1, 31, 31
    bne lbl_fn_80687498_00000664
    cmplwi r31, 0x1
    ble lbl_fn_80687498_000007E8
    cmpwi r31, 0x2
    beq lbl_fn_80687498_00000654
    cmpwi r31, 0x3
    beq lbl_fn_80687498_0000065C
    b lbl_fn_80687498_00000664
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000654:
    lfd f1, lbl_80888C00
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_0000065C:
    lfd f1, lbl_80888C08
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000664:
    or. r0, r6, r8
    bne lbl_fn_80687498_00000684
    cmpwi r5, 0x0
    bge lbl_fn_80687498_0000067C
    lfd f1, lbl_80888C10
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_0000067C:
    lfd f1, lbl_80888C18
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000684:
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687498_00000724
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687498_000006E0
    cmpwi r31, 0x0
    beq lbl_fn_80687498_000006C0
    cmpwi r31, 0x1
    beq lbl_fn_80687498_000006C8
    cmpwi r31, 0x2
    beq lbl_fn_80687498_000006D0
    cmpwi r31, 0x3
    beq lbl_fn_80687498_000006D8
    b lbl_fn_80687498_00000724
lbl_fn_80687498_000006C0:
    lfd f1, lbl_80888C20
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000006C8:
    lfd f1, lbl_80888C28
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000006D0:
    lfd f1, lbl_80888C30
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000006D8:
    lfd f1, lbl_80888C38
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000006E0:
    cmpwi r31, 0x0
    beq lbl_fn_80687498_00000704
    cmpwi r31, 0x1
    beq lbl_fn_80687498_0000070C
    cmpwi r31, 0x2
    beq lbl_fn_80687498_00000714
    cmpwi r31, 0x3
    beq lbl_fn_80687498_0000071C
    b lbl_fn_80687498_00000724
lbl_fn_80687498_00000704:
    lfd f1, lbl_80888C40
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_0000070C:
    lfd f1, lbl_80888C48
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000714:
    lfd f1, lbl_80888C00
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_0000071C:
    lfd f1, lbl_80888C08
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000724:
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687498_00000748
    cmpwi r5, 0x0
    bge lbl_fn_80687498_00000740
    lfd f1, lbl_80888C10
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000740:
    lfd f1, lbl_80888C18
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_00000748:
    subf r0, r6, r7
    srawi r0, r0, 20
    cmpwi r0, 0x3c
    ble lbl_fn_80687498_00000764
    lfd f1, lbl_80888C18
    stfd f1, 0x18(r1)
    b lbl_fn_80687498_00000790
lbl_fn_80687498_00000764:
    cmpwi r4, 0x0
    bge lbl_fn_80687498_00000780
    cmpwi r0, -0x3c
    bge lbl_fn_80687498_00000780
    lfd f1, lbl_80888C40
    stfd f1, 0x18(r1)
    b lbl_fn_80687498_00000790
lbl_fn_80687498_00000780:
    fdiv f0, f1, f2
    fabs f1, f0
    bl fn_8068A4A8
    stfd f1, 0x18(r1)
lbl_fn_80687498_00000790:
    cmpwi r31, 0x0
    beq lbl_fn_80687498_000007E8
    cmpwi r31, 0x1
    beq lbl_fn_80687498_000007B0
    cmpwi r31, 0x2
    beq lbl_fn_80687498_000007C4
    b lbl_fn_80687498_000007D8
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000007B0:
    lwz r0, 0x18(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x18(r1)
    lfd f1, 0x18(r1)
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000007C4:
    lfd f2, lbl_80888C50
    lfd f0, lbl_80888C00
    fsub f1, f1, f2
    fsub f1, f0, f1
    b lbl_fn_80687498_000007E8
lbl_fn_80687498_000007D8:
    lfd f2, lbl_80888C50
    lfd f0, lbl_80888C00
    fsub f1, f1, f2
    fsub f1, f1, f0
lbl_fn_80687498_000007E8:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806876F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stfd f2, 0x10(r1)
    stfd f1, 0x8(r1)
    lwz r0, 0x10(r1)
    lwz r7, 0x8(r1)
    lwz r6, 0x14(r1)
    clrlwi r0, r0, 1
    clrrwi r4, r7, 31
    lwz r5, 0xc(r1)
    or. r3, r0, r6
    xor r8, r7, r4
    beq lbl_fn_806876F0_00000850
    lis r7, 0x7ff0
    cmpw r8, r7
    bge lbl_fn_806876F0_00000850
    neg r3, r6
    or r3, r6, r3
    srwi r3, r3, 31
    or r3, r0, r3
    cmplw r3, r7
    ble lbl_fn_806876F0_0000085C
lbl_fn_806876F0_00000850:
    fmul f0, f1, f2
    fdiv f1, f0, f0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_0000085C:
    cmpw r8, r0
    bgt lbl_fn_806876F0_0000088C
    blt lbl_fn_806876F0_00000B74
    cmplw r5, r6
    bge lbl_fn_806876F0_00000874
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_00000874:
    bne lbl_fn_806876F0_0000088C
    lis r3, lbl_80765EA8@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_80765EA8@l
    lfdx f1, r3, r0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_0000088C:
    lis r3, 0x10
    cmpw r8, r3
    bge lbl_fn_806876F0_000008E0
    cmpwi r8, 0x0
    bne lbl_fn_806876F0_000008C0
    mr r3, r5
    li r11, -0x413
    b lbl_fn_806876F0_000008B4
lbl_fn_806876F0_000008AC:
    slwi r3, r3, 1
    subi r11, r11, 0x1
lbl_fn_806876F0_000008B4:
    cmpwi r3, 0x0
    bgt lbl_fn_806876F0_000008AC
    b lbl_fn_806876F0_000008E8
lbl_fn_806876F0_000008C0:
    slwi r3, r8, 11
    li r11, -0x3fe
    b lbl_fn_806876F0_000008D4
lbl_fn_806876F0_000008CC:
    slwi r3, r3, 1
    subi r11, r11, 0x1
lbl_fn_806876F0_000008D4:
    cmpwi r3, 0x0
    bgt lbl_fn_806876F0_000008CC
    b lbl_fn_806876F0_000008E8
lbl_fn_806876F0_000008E0:
    srawi r3, r8, 20
    subi r11, r3, 0x3ff
lbl_fn_806876F0_000008E8:
    lis r3, 0x10
    cmpw r0, r3
    bge lbl_fn_806876F0_0000093C
    cmpwi r0, 0x0
    bne lbl_fn_806876F0_0000091C
    mr r7, r6
    li r3, -0x413
    b lbl_fn_806876F0_00000910
lbl_fn_806876F0_00000908:
    slwi r7, r7, 1
    subi r3, r3, 0x1
lbl_fn_806876F0_00000910:
    cmpwi r7, 0x0
    bgt lbl_fn_806876F0_00000908
    b lbl_fn_806876F0_00000944
lbl_fn_806876F0_0000091C:
    slwi r7, r0, 11
    li r3, -0x3fe
    b lbl_fn_806876F0_00000930
lbl_fn_806876F0_00000928:
    slwi r7, r7, 1
    subi r3, r3, 0x1
lbl_fn_806876F0_00000930:
    cmpwi r7, 0x0
    bgt lbl_fn_806876F0_00000928
    b lbl_fn_806876F0_00000944
lbl_fn_806876F0_0000093C:
    srawi r3, r0, 20
    subi r3, r3, 0x3ff
lbl_fn_806876F0_00000944:
    cmpwi r11, -0x3fe
    blt lbl_fn_806876F0_00000958
    clrlwi r7, r8, 12
    oris r9, r7, 0x10
    b lbl_fn_806876F0_00000988
lbl_fn_806876F0_00000958:
    subfic r9, r11, -0x3fe
    cmpwi r9, 0x1f
    bgt lbl_fn_806876F0_0000097C
    subfic r7, r9, 0x20
    slw r8, r8, r9
    srw r7, r5, r7
    slw r5, r5, r9
    or r9, r8, r7
    b lbl_fn_806876F0_00000988
lbl_fn_806876F0_0000097C:
    subi r7, r9, 0x20
    slw r9, r5, r7
    li r5, 0x0
lbl_fn_806876F0_00000988:
    cmpwi r3, -0x3fe
    blt lbl_fn_806876F0_0000099C
    clrlwi r0, r0, 12
    oris r10, r0, 0x10
    b lbl_fn_806876F0_000009CC
lbl_fn_806876F0_0000099C:
    subfic r10, r3, -0x3fe
    cmpwi r10, 0x1f
    bgt lbl_fn_806876F0_000009C0
    subfic r7, r10, 0x20
    slw r8, r0, r10
    srw r0, r6, r7
    slw r6, r6, r10
    or r10, r8, r0
    b lbl_fn_806876F0_000009CC
lbl_fn_806876F0_000009C0:
    subi r0, r10, 0x20
    slw r10, r6, r0
    li r6, 0x0
lbl_fn_806876F0_000009CC:
    subf. r7, r3, r11
    addi r11, r7, 0x2
    srw r8, r6, r11
    mtctr r7
    beq lbl_fn_806876F0_00000A64
lbl_fn_806876F0_000009E0:
    subf. r7, r10, r9
    subf r12, r6, r5
    bne lbl_fn_806876F0_00000A0C
    srw r0, r5, r11
    cmplw r0, r8
    bne lbl_fn_806876F0_00000A0C
    lis r3, lbl_80765EA8@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_80765EA8@l
    lfdx f1, r3, r0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_00000A0C:
    cmplw r5, r6
    bge lbl_fn_806876F0_00000A18
    subi r7, r7, 0x1
lbl_fn_806876F0_00000A18:
    cmpwi r7, 0x0
    bge lbl_fn_806876F0_00000A34
    srwi r7, r5, 31
    slwi r0, r9, 1
    add r9, r7, r0
    add r5, r5, r5
    b lbl_fn_806876F0_00000A60
lbl_fn_806876F0_00000A34:
    or. r0, r7, r12
    bne lbl_fn_806876F0_00000A50
    lis r3, lbl_80765EA8@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_80765EA8@l
    lfdx f1, r3, r0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_00000A50:
    srwi r5, r12, 31
    slwi r0, r7, 1
    add r9, r5, r0
    slwi r5, r12, 1
lbl_fn_806876F0_00000A60:
    bdnz lbl_fn_806876F0_000009E0
lbl_fn_806876F0_00000A64:
    subf. r7, r10, r9
    subf r10, r6, r5
    bne lbl_fn_806876F0_00000A90
    srw r0, r5, r11
    cmplw r0, r8
    bne lbl_fn_806876F0_00000A90
    lis r3, lbl_80765EA8@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_80765EA8@l
    lfdx f1, r3, r0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_00000A90:
    cmplw r5, r6
    bge lbl_fn_806876F0_00000A9C
    subi r7, r7, 0x1
lbl_fn_806876F0_00000A9C:
    cmpwi r7, 0x0
    blt lbl_fn_806876F0_00000AAC
    mr r9, r7
    mr r5, r10
lbl_fn_806876F0_00000AAC:
    or. r0, r9, r5
    bne lbl_fn_806876F0_00000AC8
    lis r3, lbl_80765EA8@ha
    rlwinm r0, r4, 4, 28, 28
    addi r3, r3, lbl_80765EA8@l
    lfdx f1, r3, r0
    b lbl_fn_806876F0_00000B74
lbl_fn_806876F0_00000AC8:
    lis r0, 0x10
    b lbl_fn_806876F0_00000AE4
lbl_fn_806876F0_00000AD0:
    srwi r7, r5, 31
    slwi r6, r9, 1
    add r9, r7, r6
    add r5, r5, r5
    subi r3, r3, 0x1
lbl_fn_806876F0_00000AE4:
    cmpw r9, r0
    blt lbl_fn_806876F0_00000AD0
    cmpwi r3, -0x3fe
    blt lbl_fn_806876F0_00000B14
    addi r0, r3, 0x3ff
    subis r3, r9, 0x10
    slwi r0, r0, 20
    stw r5, 0xc(r1)
    or r0, r3, r0
    or r0, r0, r4
    stw r0, 0x8(r1)
    b lbl_fn_806876F0_00000B70
lbl_fn_806876F0_00000B14:
    subfic r6, r3, -0x3fe
    cmpwi r6, 0x14
    bgt lbl_fn_806876F0_00000B38
    subfic r0, r6, 0x20
    srw r3, r5, r6
    slw r0, r9, r0
    sraw r9, r9, r6
    or r3, r3, r0
    b lbl_fn_806876F0_00000B64
lbl_fn_806876F0_00000B38:
    cmpwi r6, 0x1f
    bgt lbl_fn_806876F0_00000B58
    subfic r3, r6, 0x20
    srw r0, r5, r6
    slw r3, r9, r3
    mr r9, r4
    or r3, r3, r0
    b lbl_fn_806876F0_00000B64
lbl_fn_806876F0_00000B58:
    subi r0, r6, 0x20
    sraw r3, r9, r0
    mr r9, r4
lbl_fn_806876F0_00000B64:
    or r0, r9, r4
    stw r0, 0x8(r1)
    stw r3, 0xc(r1)
lbl_fn_806876F0_00000B70:
    lfd f1, 0x8(r1)
lbl_fn_806876F0_00000B74:
    addi r1, r1, 0x20
    blr
}

asm void fn_80687A70(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x10
    li r7, 0x0
    stfd f1, 0x8(r1)
    lwz r8, 0x8(r1)
    lwz r3, 0xc(r1)
    cmpw r8, r0
    bge lbl_fn_80687A70_00000BEC
    clrlwi r0, r8, 1
    or. r0, r0, r3
    bne lbl_fn_80687A70_00000BB8
    lfd f1, lbl_80888C58
    lfd f0, lbl_80880368
    fdiv f1, f1, f0
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000BB8:
    cmpwi r8, 0x0
    bge lbl_fn_80687A70_00000BD8
    fsub f1, f1, f1
    lfd f0, lbl_80880368
    li r0, 0x21
    stw r0, lbl_80880348
    fdiv f1, f1, f0
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000BD8:
    lfd f0, lbl_80888C60
    li r7, -0x36
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r8, 0x8(r1)
lbl_fn_80687A70_00000BEC:
    lis r0, 0x7ff0
    cmpw r8, r0
    blt lbl_fn_80687A70_00000C00
    fadd f1, f1, f1
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000C00:
    srawi r5, r8, 20
    clrlwi r8, r8, 12
    addis r3, r8, 0x9
    lfd f0, lbl_80888C68
    addi r4, r3, 0x5f64
    addi r0, r8, 0x2
    rlwinm r3, r4, 0, 11, 11
    add r5, r7, r5
    xoris r3, r3, 0x3ff0
    clrlwi r0, r0, 12
    or r3, r8, r3
    stw r3, 0x8(r1)
    cmpwi r0, 0x3
    subi r7, r5, 0x3ff
    lfd f1, 0x8(r1)
    extrwi r0, r4, 1, 11
    add r7, r7, r0
    fsub f0, f1, f0
    bge lbl_fn_80687A70_00000CFC
    lfd f1, lbl_80880368
    fcmpu cr0, f0, f1
    bne lbl_fn_80687A70_00000C98
    cmpwi r7, 0x0
    bne lbl_fn_80687A70_00000C64
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000C64:
    xoris r3, r7, 0x8000
    lis r0, 0x4330
    stw r3, 0x14(r1)
    lfd f3, lbl_80888CD0
    stw r0, 0x10(r1)
    lfd f1, lbl_80888C70
    lfd f2, 0x10(r1)
    lfd f0, lbl_80888C78
    fsub f2, f2, f3
    fmul f1, f1, f2
    fmul f0, f0, f2
    fadd f1, f1, f0
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000C98:
    lfd f3, lbl_80888C88
    fmul f1, f0, f0
    lfd f2, lbl_80888C80
    cmpwi r7, 0x0
    fmul f3, f3, f0
    fsub f2, f2, f3
    fmul f5, f2, f1
    bne lbl_fn_80687A70_00000CC0
    fsub f1, f0, f5
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000CC0:
    xoris r3, r7, 0x8000
    lis r0, 0x4330
    stw r3, 0x14(r1)
    lfd f4, lbl_80888CD0
    stw r0, 0x10(r1)
    lfd f1, lbl_80888C78
    lfd f3, 0x10(r1)
    lfd f2, lbl_80888C70
    fsub f3, f3, f4
    fmul f1, f1, f3
    fmul f2, f2, f3
    fsub f1, f5, f1
    fsub f0, f1, f0
    fsub f1, f2, f0
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000CFC:
    lfd f1, lbl_80888C90
    xoris r5, r7, 0x8000
    lis r4, 0x4330
    lis r3, 0x7
    fadd f1, f1, f0
    subis r6, r8, 0x6
    subi r0, r3, 0x47af
    lfd f5, lbl_80888CC8
    lfd f4, lbl_80888CC0
    subf r0, r8, r0
    fdiv f1, f0, f1
    subi r6, r6, 0x147a
    lfd f8, lbl_80888CA8
    or. r6, r6, r0
    lfd f7, lbl_80888CA0
    lfd f3, lbl_80888CB8
    fmul f11, f1, f1
    lfd f6, lbl_80888C98
    lfd f2, lbl_80888CB0
    stw r5, 0x14(r1)
    lfd f10, lbl_80888CD0
    fmul f12, f11, f11
    stw r4, 0x10(r1)
    lfd f9, 0x10(r1)
    fmul f5, f5, f12
    fmul f8, f8, f12
    fadd f4, f4, f5
    fsub f9, f9, f10
    fadd f5, f7, f8
    fmul f4, f12, f4
    fmul f5, f12, f5
    fadd f3, f3, f4
    fadd f4, f6, f5
    fmul f3, f12, f3
    fmul f4, f12, f4
    fadd f2, f2, f3
    fmul f2, f11, f2
    fadd f3, f2, f4
    ble lbl_fn_80687A70_00000DEC
    lfd f2, lbl_80888C80
    cmpwi r7, 0x0
    fmul f2, f2, f0
    fmul f5, f2, f0
    bne lbl_fn_80687A70_00000DC0
    fadd f2, f5, f3
    fmul f1, f1, f2
    fsub f1, f5, f1
    fsub f1, f0, f1
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000DC0:
    fadd f3, f5, f3
    lfd f2, lbl_80888C78
    lfd f4, lbl_80888C70
    fmul f2, f2, f9
    fmul f1, f1, f3
    fmul f3, f4, f9
    fadd f1, f1, f2
    fsub f1, f5, f1
    fsub f0, f1, f0
    fsub f1, f3, f0
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000DEC:
    cmpwi r7, 0x0
    bne lbl_fn_80687A70_00000E04
    fsub f2, f0, f3
    fmul f1, f1, f2
    fsub f1, f0, f1
    b lbl_fn_80687A70_00000E28
lbl_fn_80687A70_00000E04:
    fsub f3, f0, f3
    lfd f2, lbl_80888C78
    lfd f4, lbl_80888C70
    fmul f2, f2, f9
    fmul f1, f1, f3
    fmul f3, f4, f9
    fsub f1, f1, f2
    fsub f0, f1, f0
    fsub f1, f3, f0
lbl_fn_80687A70_00000E28:
    addi r1, r1, 0x20
    blr
}

asm void fn_80687D24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    stfd f1, 0x8(r1)
    lis r0, 0x10
    li r4, 0x0
    lwz r5, 0x8(r1)
    lwz r3, 0xc(r1)
    cmpw r5, r0
    bge lbl_fn_80687D24_00000EB4
    clrlwi r0, r5, 1
    or. r0, r0, r3
    bne lbl_fn_80687D24_00000E80
    lfd f1, lbl_80888CD8
    li r0, 0x21
    lfd f0, lbl_80880370
    stw r0, lbl_80880348
    fdiv f1, f1, f0
    b lbl_fn_80687D24_00000F30
lbl_fn_80687D24_00000E80:
    cmpwi r5, 0x0
    bge lbl_fn_80687D24_00000EA0
    fsub f1, f1, f1
    lfd f0, lbl_80880370
    li r0, 0x21
    stw r0, lbl_80880348
    fdiv f1, f1, f0
    b lbl_fn_80687D24_00000F30
lbl_fn_80687D24_00000EA0:
    lfd f0, lbl_80888CE0
    li r4, -0x36
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
lbl_fn_80687D24_00000EB4:
    lis r0, 0x7ff0
    cmpw r5, r0
    blt lbl_fn_80687D24_00000EC8
    fadd f1, f1, f1
    b lbl_fn_80687D24_00000F30
lbl_fn_80687D24_00000EC8:
    srawi r3, r5, 20
    lis r0, 0x4330
    add r3, r4, r3
    stw r0, 0x10(r1)
    subi r4, r3, 0x3ff
    lfd f1, lbl_80888D00
    srwi r3, r4, 31
    add r0, r4, r3
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    subfic r0, r3, 0x3ff
    lfd f0, 0x10(r1)
    slwi r0, r0, 20
    rlwimi r0, r5, 0, 12, 31
    stw r0, 0x8(r1)
    fsub f31, f0, f1
    lfd f1, 0x8(r1)
    bl fn_80687A70
    lfd f0, lbl_80888CF0
    lfd f2, lbl_80888CE8
    fmul f3, f0, f1
    lfd f0, lbl_80888CF8
    fmul f1, f2, f31
    fmul f0, f0, f31
    fadd f1, f1, f3
    fadd f1, f1, f0
lbl_fn_80687D24_00000F30:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80687E38(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    stw r0, 0xc4(r1)
    stfd f31, 0xb0(r1)
    psq_st f31, 0xb8(r1), 0, 0
    stfd f30, 0xa0(r1)
    psq_st f30, 0xa8(r1), 0, 0
    stfd f29, 0x90(r1)
    psq_st f29, 0x98(r1), 0, 0
    stfd f28, 0x80(r1)
    psq_st f28, 0x88(r1), 0, 0
    stfd f27, 0x70(r1)
    psq_st f27, 0x78(r1), 0, 0
    stfd f26, 0x60(r1)
    psq_st f26, 0x68(r1), 0, 0
    stfd f2, 0x10(r1)
    lis r3, lbl_80765EB8@ha
    addi r3, r3, lbl_80765EB8@l
    lwz r5, 0x10(r1)
    stfd f1, 0x8(r1)
    lwz r11, 0x14(r1)
    clrlwi r7, r5, 1
    lwz r9, 0x8(r1)
    or. r0, r7, r11
    lwz r10, 0xc(r1)
    clrlwi r6, r9, 1
    bne lbl_fn_80687E38_00000FB8
    lfd f1, lbl_80888D08
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00000FB8:
    lis r0, 0x7ff0
    cmpw r6, r0
    bgt lbl_fn_80687E38_00000FF8
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_00000FD8
    cmpwi r10, 0x0
    bne lbl_fn_80687E38_00000FF8
lbl_fn_80687E38_00000FD8:
    lis r0, 0x7ff0
    cmpw r7, r0
    bgt lbl_fn_80687E38_00000FF8
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_00001000
    cmpwi r11, 0x0
    beq lbl_fn_80687E38_00001000
lbl_fn_80687E38_00000FF8:
    fadd f1, f1, f2
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001000:
    cmpwi r9, 0x0
    li r4, 0x0
    bge lbl_fn_80687E38_00001080
    lis r0, 0x4340
    cmpw r7, r0
    blt lbl_fn_80687E38_00001020
    li r4, 0x2
    b lbl_fn_80687E38_00001080
lbl_fn_80687E38_00001020:
    lis r0, 0x3ff0
    cmpw r7, r0
    blt lbl_fn_80687E38_00001080
    srawi r8, r7, 20
    subi r0, r8, 0x3ff
    cmpwi r0, 0x14
    ble lbl_fn_80687E38_0000105C
    subfic r0, r0, 0x34
    srw r8, r11, r0
    slw r0, r8, r0
    cmplw r11, r0
    bne lbl_fn_80687E38_00001080
    clrlwi r0, r8, 31
    subfic r4, r0, 0x2
    b lbl_fn_80687E38_00001080
lbl_fn_80687E38_0000105C:
    cmpwi r11, 0x0
    bne lbl_fn_80687E38_00001080
    subfic r0, r0, 0x14
    sraw r8, r7, r0
    slw r0, r8, r0
    cmpw r7, r0
    bne lbl_fn_80687E38_00001080
    clrlwi r0, r8, 31
    subfic r4, r0, 0x2
lbl_fn_80687E38_00001080:
    cmpwi r11, 0x0
    bne lbl_fn_80687E38_00001134
    subis r0, r7, 0x7ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_000010E4
    subis r0, r6, 0x3ff0
    or. r0, r0, r10
    bne lbl_fn_80687E38_000010A8
    fsub f1, f2, f2
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000010A8:
    lis r0, 0x3ff0
    cmpw r6, r0
    blt lbl_fn_80687E38_000010CC
    cmpwi r5, 0x0
    blt lbl_fn_80687E38_000010C4
    fmr f1, f2
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000010C4:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000010CC:
    cmpwi r5, 0x0
    bge lbl_fn_80687E38_000010DC
    fneg f1, f2
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000010DC:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000010E4:
    subis r0, r7, 0x3ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_00001104
    cmpwi r5, 0x0
    bge lbl_fn_80687E38_00001718
    lfd f0, lbl_80888D08
    fdiv f1, f0, f1
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001104:
    subis r0, r5, 0x4000
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_00001118
    fmul f1, f1, f1
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001118:
    subis r0, r5, 0x3fe0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_00001134
    cmpwi r9, 0x0
    blt lbl_fn_80687E38_00001134
    bl fn_8068B100
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001134:
    fabs f0, f1
    cmpwi r10, 0x0
    stfd f0, 0x48(r1)
    bne lbl_fn_80687E38_000011A8
    subis r0, r6, 0x7ff0
    cmplwi r0, 0x0
    beq lbl_fn_80687E38_00001164
    cmpwi r6, 0x0
    beq lbl_fn_80687E38_00001164
    subis r0, r6, 0x3ff0
    cmplwi r0, 0x0
    bne lbl_fn_80687E38_000011A8
lbl_fn_80687E38_00001164:
    cmpwi r5, 0x0
    bge lbl_fn_80687E38_00001174
    lfd f1, lbl_80888D08
    fdiv f0, f1, f0
lbl_fn_80687E38_00001174:
    cmpwi r9, 0x0
    bge lbl_fn_80687E38_000011A0
    subis r0, r6, 0x3ff0
    or. r0, r0, r4
    bne lbl_fn_80687E38_00001194
    fsub f0, f0, f0
    fdiv f0, f0, f0
    b lbl_fn_80687E38_000011A0
lbl_fn_80687E38_00001194:
    cmpwi r4, 0x1
    bne lbl_fn_80687E38_000011A0
    fneg f0, f0
lbl_fn_80687E38_000011A0:
    fmr f1, f0
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000011A8:
    srawi r8, r9, 31
    addi r0, r8, 0x1
    or. r8, r0, r4
    bne lbl_fn_80687E38_000011CC
    lis r3, lbl_8087EC00@ha
    li r0, 0x21
    stw r0, lbl_80880348
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000011CC:
    lis r8, 0x41e0
    cmpw r7, r8
    ble lbl_fn_80687E38_000012D0
    lis r3, 0x43f0
    cmpw r7, r3
    ble lbl_fn_80687E38_00001220
    lis r0, 0x3ff0
    cmpw r6, r0
    bge lbl_fn_80687E38_00001208
    cmpwi r5, 0x0
    bge lbl_fn_80687E38_00001200
    lfd f1, lbl_80888D18
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001200:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001208:
    cmpwi r5, 0x0
    ble lbl_fn_80687E38_00001218
    lfd f1, lbl_80888D18
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001218:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001220:
    lis r3, 0x3ff0
    subi r7, r3, 0x1
    cmpw r6, r7
    bge lbl_fn_80687E38_00001248
    cmpwi r5, 0x0
    bge lbl_fn_80687E38_00001240
    lfd f1, lbl_80888D18
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001240:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001248:
    cmpw r6, r3
    ble lbl_fn_80687E38_00001268
    cmpwi r5, 0x0
    ble lbl_fn_80687E38_00001260
    lfd f1, lbl_80888D18
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001260:
    lfd f1, lbl_80888D10
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001268:
    lfd f3, lbl_80888D08
    li r3, 0x0
    lfd f0, lbl_80888D30
    fsub f8, f1, f3
    lfd f1, lbl_80888D40
    lfd f5, lbl_80888D28
    lfd f3, lbl_80888D38
    fmul f6, f0, f8
    lfd f4, lbl_80888D20
    lfd f0, lbl_80888D48
    fmul f7, f8, f8
    fsub f5, f5, f6
    fmul f6, f3, f8
    fmul f5, f8, f5
    fmul f1, f1, f8
    fsub f3, f4, f5
    fmul f3, f7, f3
    fmul f0, f0, f3
    fsub f1, f1, f0
    fadd f0, f6, f1
    stfd f0, 0x30(r1)
    stw r3, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f6
    fsub f0, f1, f0
    b lbl_fn_80687E38_000014D8
lbl_fn_80687E38_000012D0:
    lis r5, 0x10
    li r11, 0x0
    cmpw r6, r5
    bge lbl_fn_80687E38_000012F4
    lfd f1, lbl_80888D50
    li r11, -0x35
    fmul f0, f0, f1
    stfd f0, 0x48(r1)
    lwz r6, 0x48(r1)
lbl_fn_80687E38_000012F4:
    lis r5, 0x4
    clrlwi r8, r6, 12
    subi r5, r5, 0x6772
    srawi r6, r6, 20
    cmpw r8, r5
    oris r7, r8, 0x3ff0
    add r5, r11, r6
    subi r11, r5, 0x3ff
    bgt lbl_fn_80687E38_00001320
    li r6, 0x0
    b lbl_fn_80687E38_00001344
lbl_fn_80687E38_00001320:
    lis r5, 0xc
    subi r5, r5, 0x4986
    cmpw r8, r5
    bge lbl_fn_80687E38_00001338
    li r6, 0x1
    b lbl_fn_80687E38_00001344
lbl_fn_80687E38_00001338:
    subis r7, r7, 0x10
    li r6, 0x0
    addi r11, r11, 0x1
lbl_fn_80687E38_00001344:
    stw r7, 0x48(r1)
    srawi r9, r7, 1
    slwi r10, r6, 3
    addi r5, r3, 0x0
    lfdx f8, r5, r10
    slwi r8, r6, 18
    lfd f10, 0x48(r1)
    xoris r6, r11, 0x8000
    lfd f0, lbl_80888D10
    lis r5, 0x4330
    fadd f3, f10, f8
    lfd f1, lbl_80888D08
    fsub f26, f10, f8
    lfd f7, lbl_80888D80
    lfd f6, lbl_80888D70
    oris r9, r9, 0x2000
    fdiv f1, f1, f3
    addis r8, r8, 0x8
    add r8, r9, r8
    stfd f0, 0x18(r1)
    lfd f3, lbl_80888D78
    li r9, 0x0
    fmul f4, f26, f1
    stw r8, 0x18(r1)
    lfd f13, lbl_80888D68
    addi r7, r3, 0x20
    lfd f9, 0x18(r1)
    stfd f4, 0x20(r1)
    fmul f5, f4, f4
    stw r9, 0x24(r1)
    lfd f30, lbl_80888D60
    fsub f8, f9, f8
    lfd f0, 0x20(r1)
    stw r6, 0x5c(r1)
    fmul f7, f7, f5
    stw r5, 0x58(r1)
    lfd f31, lbl_80888D58
    fsub f8, f10, f8
    lfd f12, lbl_80888D88
    fmul f28, f0, f9
    fadd f7, f3, f7
    lfd f10, lbl_80888D98
    fmul f27, f0, f8
    lfd f9, lbl_80888DA0
    lfd f11, lbl_80888D90
    fmul f7, f5, f7
    lfdx f8, r7, r10
    fsub f28, f26, f28
    fmul f3, f0, f0
    fadd f29, f6, f7
    lfd f7, lbl_80888E10
    fsub f27, f28, f27
    lfd f6, 0x58(r1)
    fmul f28, f5, f5
    fmul f29, f5, f29
    fmul f27, f1, f27
    fadd f13, f13, f29
    fadd f1, f12, f3
    fmul f29, f5, f13
    fadd f13, f0, f4
    fadd f30, f30, f29
    fmul f13, f27, f13
    fmul f30, f5, f30
    fsub f5, f6, f7
    fadd f6, f31, f30
    fmul f26, f28, f6
    fadd f26, f26, f13
    fadd f1, f1, f26
    stfd f1, 0x18(r1)
    stw r9, 0x1c(r1)
    lfd f7, 0x18(r1)
    fsub f6, f7, f12
    fmul f1, f27, f7
    fsub f3, f6, f3
    fmul f6, f0, f7
    fsub f0, f26, f3
    fmul f0, f0, f4
    fadd f4, f1, f0
    fadd f3, f6, f4
    stfd f3, 0x40(r1)
    stw r9, 0x44(r1)
    lfd f3, 0x40(r1)
    fsub f0, f3, f6
    fmul f1, f10, f3
    fsub f0, f4, f0
    fmul f3, f11, f3
    fmul f0, f9, f0
    fadd f0, f1, f0
    fadd f4, f8, f0
    addi r3, r3, 0x10
    fadd f0, f3, f4
    lfdx f1, r3, r10
    fadd f0, f0, f1
    fadd f0, f5, f0
    stfd f0, 0x30(r1)
    stw r9, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f5
    fsub f0, f0, f1
    fsub f0, f0, f3
    fsub f0, f4, f0
lbl_fn_80687E38_000014D8:
    subi r3, r4, 0x1
    lfd f31, lbl_80888D08
    or. r0, r0, r3
    bne lbl_fn_80687E38_000014EC
    lfd f31, lbl_80888DA8
lbl_fn_80687E38_000014EC:
    stfd f2, 0x38(r1)
    li r0, 0x0
    fmul f0, f2, f0
    lfd f1, 0x30(r1)
    stw r0, 0x3c(r1)
    lis r0, 0x4090
    lfd f3, 0x38(r1)
    fsub f2, f2, f3
    fmul f3, f3, f1
    fmul f1, f1, f2
    fadd f10, f1, f0
    fadd f0, f10, f3
    stfd f0, 0x50(r1)
    lwz r6, 0x50(r1)
    lwz r5, 0x54(r1)
    cmpw r6, r0
    blt lbl_fn_80687E38_00001570
    subis r0, r6, 0x4090
    or. r0, r0, r5
    beq lbl_fn_80687E38_0000154C
    lfd f1, lbl_80888DB0
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_0000154C:
    lfd f1, lbl_80888DB8
    fsub f0, f0, f3
    fadd f1, f1, f10
    fcmpo cr0, f1, f0
    ble lbl_fn_80687E38_000015C4
    lfd f1, lbl_80888DB0
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_00001570:
    lis r3, 0x4091
    clrlwi r4, r6, 1
    subi r0, r3, 0x3400
    cmpw r4, r0
    blt lbl_fn_80687E38_000015C4
    addis r3, r6, 0x3f6f
    addi r0, r3, 0x3400
    or. r0, r0, r5
    beq lbl_fn_80687E38_000015A4
    lfd f1, lbl_80888DC0
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000015A4:
    fsub f0, f0, f3
    fcmpo cr0, f10, f0
    cror eq, lt, eq
    bne lbl_fn_80687E38_000015C4
    lfd f1, lbl_80888DC0
    fmul f0, f1, f31
    fmul f1, f1, f0
    b lbl_fn_80687E38_00001718
lbl_fn_80687E38_000015C4:
    clrlwi r3, r6, 1
    lis r0, 0x3fe0
    cmpw r3, r0
    extrwi r4, r6, 11, 1
    li r3, 0x0
    ble lbl_fn_80687E38_00001634
    lis r3, 0x10
    subi r0, r4, 0x3fe
    sraw r0, r3, r0
    lfd f0, lbl_80888D10
    add r7, r6, r0
    stfd f0, 0x28(r1)
    clrlwi r0, r7, 1
    subi r3, r3, 0x1
    srawi r4, r0, 20
    cmpwi r6, 0x0
    subi r5, r4, 0x3ff
    clrlwi r0, r7, 12
    sraw r4, r3, r5
    oris r3, r0, 0x10
    subfic r0, r5, 0x14
    andc r4, r7, r4
    stw r4, 0x28(r1)
    sraw r3, r3, r0
    bge lbl_fn_80687E38_0000162C
    neg r3, r3
lbl_fn_80687E38_0000162C:
    lfd f0, 0x28(r1)
    fsub f3, f3, f0
lbl_fn_80687E38_00001634:
    fadd f0, f10, f3
    li r0, 0x0
    lfd f2, lbl_80888DD0
    slwi r4, r3, 20
    stfd f0, 0x28(r1)
    lfd f0, lbl_80888DD8
    stw r0, 0x2c(r1)
    lfd f9, lbl_80888DC8
    lfd f8, 0x28(r1)
    lfd f6, lbl_80888E00
    fsub f3, f8, f3
    lfd f1, lbl_80888DF8
    fmul f7, f0, f8
    lfd f5, lbl_80888DF0
    lfd f4, lbl_80888DE8
    fsub f0, f10, f3
    fmul f10, f9, f8
    lfd f3, lbl_80888DE0
    fmul f8, f2, f0
    lfd f2, lbl_80888E08
    lfd f0, lbl_80888D08
    fadd f11, f8, f7
    fadd f9, f10, f11
    fmul f7, f9, f9
    fsub f8, f9, f10
    fmul f6, f6, f7
    fsub f8, f11, f8
    fadd f6, f1, f6
    fmul f1, f9, f8
    fmul f6, f7, f6
    fadd f1, f8, f1
    fadd f5, f5, f6
    fmul f5, f7, f5
    fadd f4, f4, f5
    fmul f4, f7, f4
    fadd f3, f3, f4
    fmul f3, f7, f3
    fsub f4, f9, f3
    fmul f3, f9, f4
    fsub f2, f4, f2
    fdiv f2, f3, f2
    fsub f1, f2, f1
    fsub f1, f1, f9
    fsub f1, f0, f1
    stfd f1, 0x50(r1)
    lwz r0, 0x50(r1)
    add r0, r0, r4
    srawi. r0, r0, 20
    bgt lbl_fn_80687E38_00001704
    bl fn_80686EF4
    stfd f1, 0x50(r1)
    b lbl_fn_80687E38_00001710
lbl_fn_80687E38_00001704:
    lwz r0, 0x50(r1)
    add r0, r0, r4
    stw r0, 0x50(r1)
lbl_fn_80687E38_00001710:
    lfd f0, 0x50(r1)
    fmul f1, f31, f0
lbl_fn_80687E38_00001718:
    lwz r0, 0xc4(r1)
    psq_l f31, 0xb8(r1), 0, 0
    lfd f31, 0xb0(r1)
    psq_l f30, 0xa8(r1), 0, 0
    lfd f30, 0xa0(r1)
    psq_l f29, 0x98(r1), 0, 0
    lfd f29, 0x90(r1)
    psq_l f28, 0x88(r1), 0, 0
    lfd f28, 0x80(r1)
    psq_l f27, 0x78(r1), 0, 0
    lfd f27, 0x70(r1)
    psq_l f26, 0x68(r1), 0, 0
    lfd f26, 0x60(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_8068864C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, 0x3fe9
    stw r0, 0x64(r1)
    addi r0, r4, 0x21fb
    stw r31, 0x5c(r1)
    stfd f1, 0x8(r1)
    lwz r31, 0x8(r1)
    stw r30, 0x58(r1)
    mr r30, r3
    clrlwi r6, r31, 1
    cmpw r6, r0
    bgt lbl_fn_8068864C_000017A0
    lfd f0, lbl_80888E18
    stfd f1, 0x0(r3)
    stfd f0, 0x8(r3)
    li r3, 0x0
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_000017A0:
    lis r4, 0x4003
    subi r0, r4, 0x2684
    cmpw r6, r0
    bge lbl_fn_8068864C_00001868
    cmpwi r31, 0x0
    ble lbl_fn_8068864C_00001810
    lfd f0, lbl_80888E20
    subis r0, r6, 0x3ff9
    cmplwi r0, 0x21fb
    fsub f2, f1, f0
    beq lbl_fn_8068864C_000017E8
    lfd f1, lbl_80888E28
    fsub f0, f2, f1
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fsub f0, f0, f1
    stfd f0, 0x8(r3)
    b lbl_fn_8068864C_00001808
lbl_fn_8068864C_000017E8:
    lfd f0, lbl_80888E30
    lfd f1, lbl_80888E38
    fsub f2, f2, f0
    fsub f0, f2, f1
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fsub f0, f0, f1
    stfd f0, 0x8(r3)
lbl_fn_8068864C_00001808:
    li r3, 0x1
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_00001810:
    lfd f0, lbl_80888E20
    subis r0, r6, 0x3ff9
    cmplwi r0, 0x21fb
    fadd f2, f0, f1
    beq lbl_fn_8068864C_00001840
    lfd f1, lbl_80888E28
    fadd f0, f1, f2
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fadd f0, f1, f0
    stfd f0, 0x8(r3)
    b lbl_fn_8068864C_00001860
lbl_fn_8068864C_00001840:
    lfd f0, lbl_80888E30
    lfd f1, lbl_80888E38
    fadd f2, f2, f0
    fadd f0, f1, f2
    stfd f0, 0x0(r3)
    fsub f0, f2, f0
    fadd f0, f1, f0
    stfd f0, 0x8(r3)
lbl_fn_8068864C_00001860:
    li r3, -0x1
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_00001868:
    lis r4, 0x4139
    addi r0, r4, 0x21fb
    cmpw r6, r0
    bgt lbl_fn_8068864C_000019BC
    fabs f5, f1
    lfd f0, lbl_80888E48
    lis r0, 0x4330
    lfd f2, lbl_80888E40
    stw r0, 0x38(r1)
    fmul f4, f0, f5
    lfd f3, lbl_80888E68
    lfd f1, lbl_80888E20
    lfd f0, lbl_80888E28
    fadd f2, f2, f4
    fctiwz f2, f2
    stfd f2, 0x30(r1)
    lwz r5, 0x34(r1)
    xoris r0, r5, 0x8000
    stw r0, 0x3c(r1)
    cmpwi r5, 0x20
    lfd f2, 0x38(r1)
    fsub f6, f2, f3
    fmul f1, f1, f6
    fmul f2, f0, f6
    fsub f4, f5, f1
    bge lbl_fn_8068864C_000018F8
    subi r0, r5, 0x1
    lis r4, lbl_80765FF0@ha
    slwi r0, r0, 2
    addi r4, r4, lbl_80765FF0@l
    lwzx r0, r4, r0
    cmpw r6, r0
    beq lbl_fn_8068864C_000018F8
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
    b lbl_fn_8068864C_00001984
lbl_fn_8068864C_000018F8:
    fsub f0, f4, f2
    srawi r4, r6, 20
    stfd f0, 0x0(r3)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 11, 1
    subf r0, r0, r4
    cmpwi r0, 0x10
    ble lbl_fn_8068864C_00001984
    lfd f1, lbl_80888E30
    fmr f2, f4
    lfd f0, lbl_80888E38
    fmul f3, f1, f6
    fmul f1, f0, f6
    fsub f4, f4, f3
    fsub f0, f2, f4
    fsub f0, f0, f3
    fsub f2, f1, f0
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
    lwz r0, 0x0(r3)
    extrwi r0, r0, 11, 1
    subf r0, r0, r4
    cmpwi r0, 0x31
    ble lbl_fn_8068864C_00001984
    lfd f1, lbl_80888E50
    fmr f2, f4
    lfd f0, lbl_80888E58
    fmul f3, f1, f6
    fmul f1, f0, f6
    fsub f4, f4, f3
    fsub f0, f2, f4
    fsub f0, f0, f3
    fsub f2, f1, f0
    fsub f0, f4, f2
    stfd f0, 0x0(r3)
lbl_fn_8068864C_00001984:
    lfd f1, 0x0(r3)
    cmpwi r31, 0x0
    fsub f0, f4, f1
    fsub f0, f0, f2
    stfd f0, 0x8(r3)
    bge lbl_fn_8068864C_000019B4
    fneg f1, f1
    fneg f0, f0
    stfd f1, 0x0(r3)
    stfd f0, 0x8(r3)
    neg r3, r5
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_000019B4:
    mr r3, r5
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_000019BC:
    lis r0, 0x7ff0
    cmpw r6, r0
    blt lbl_fn_8068864C_000019DC
    fsub f0, f1, f1
    stfd f0, 0x8(r3)
    stfd f0, 0x0(r3)
    li r3, 0x0
    b lbl_fn_8068864C_00001AC4
lbl_fn_8068864C_000019DC:
    srawi r3, r6, 20
    lis r0, 0x4330
    subi r5, r3, 0x416
    lwz r4, 0xc(r1)
    slwi r3, r5, 20
    stw r4, 0x14(r1)
    subf r3, r3, r6
    lfd f4, lbl_80888E68
    stw r3, 0x10(r1)
    addi r3, r1, 0x30
    lfd f3, lbl_80888E60
    li r6, 0x3
    lfd f2, 0x10(r1)
    stw r0, 0x30(r1)
    fctiwz f0, f2
    lfd f1, lbl_80888E18
    stw r0, 0x48(r1)
    stfd f0, 0x38(r1)
    lwz r0, 0x3c(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x34(r1)
    lfd f0, 0x30(r1)
    fsub f0, f0, f4
    stfd f0, 0x18(r1)
    fsub f0, f2, f0
    fmul f2, f3, f0
    fctiwz f0, f2
    stfd f0, 0x40(r1)
    lwz r0, 0x44(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x4c(r1)
    lfd f0, 0x48(r1)
    fsub f0, f0, f4
    stfd f0, 0x20(r1)
    fsub f0, f2, f0
    fmul f0, f3, f0
    stfd f0, 0x28(r1)
    b lbl_fn_8068864C_00001A7C
lbl_fn_8068864C_00001A74:
    subi r3, r3, 0x8
    subi r6, r6, 0x1
lbl_fn_8068864C_00001A7C:
    lfd f0, -0x8(r3)
    fcmpu cr0, f1, f0
    beq lbl_fn_8068864C_00001A74
    lis r8, lbl_80765EE8@ha
    mr r4, r30
    addi r3, r1, 0x18
    li r7, 0x2
    addi r8, r8, lbl_80765EE8@l
    bl fn_80688AE0
    cmpwi r31, 0x0
    bge lbl_fn_8068864C_00001AC4
    lfd f1, 0x0(r30)
    neg r3, r3
    lfd f0, 0x8(r30)
    fneg f1, f1
    fneg f0, f0
    stfd f1, 0x0(r30)
    stfd f0, 0x8(r30)
lbl_fn_8068864C_00001AC4:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806889D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x3e40
    stfd f1, 0x8(r1)
    lwz r3, 0x8(r1)
    clrlwi r4, r3, 1
    cmpw r4, r0
    bge lbl_fn_806889D0_00001B14
    fctiwz f0, f1
    stfd f0, 0x18(r1)
    lwz r0, 0x1c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_806889D0_00001B14
    lfd f1, lbl_80888E70
    b lbl_fn_806889D0_00001BE4
lbl_fn_806889D0_00001B14:
    fmul f8, f1, f1
    lfd f0, lbl_80888EA0
    lis r3, 0x3fd3
    lfd f6, lbl_80888E98
    addi r0, r3, 0x3333
    lfd f5, lbl_80888E90
    fmul f7, f0, f8
    lfd f4, lbl_80888E88
    lfd f3, lbl_80888E80
    cmpw r4, r0
    lfd f0, lbl_80888E78
    fadd f6, f6, f7
    fmul f6, f8, f6
    fadd f5, f5, f6
    fmul f5, f8, f5
    fadd f4, f4, f5
    fmul f4, f8, f4
    fadd f3, f3, f4
    fmul f3, f8, f3
    fadd f0, f0, f3
    fmul f3, f8, f0
    bge lbl_fn_806889D0_00001B90
    fmul f3, f8, f3
    lfd f4, lbl_80888EA8
    lfd f0, lbl_80888E70
    fmul f1, f1, f2
    fmul f2, f4, f8
    fsub f1, f3, f1
    fsub f1, f2, f1
    fsub f1, f0, f1
    b lbl_fn_806889D0_00001BE4
lbl_fn_806889D0_00001B90:
    lis r0, 0x3fe9
    cmpw r4, r0
    ble lbl_fn_806889D0_00001BA8
    lfd f0, lbl_80888EB0
    stfd f0, 0x10(r1)
    b lbl_fn_806889D0_00001BB8
lbl_fn_806889D0_00001BA8:
    subis r3, r4, 0x20
    li r0, 0x0
    stw r3, 0x10(r1)
    stw r0, 0x14(r1)
lbl_fn_806889D0_00001BB8:
    lfd f0, lbl_80888EA8
    fmul f3, f8, f3
    lfd f5, 0x10(r1)
    fmul f6, f0, f8
    lfd f4, lbl_80888E70
    fmul f0, f1, f2
    fsub f2, f6, f5
    fsub f1, f4, f5
    fsub f0, f3, f0
    fsub f0, f2, f0
    fsub f1, f1, f0
lbl_fn_806889D0_00001BE4:
    addi r1, r1, 0x20
    blr
}

asm void fn_80688AE0(void)
{
    nofralloc
    stwu r1, -0x370(r1)
    mflr r0
    stw r0, 0x374(r1)
    addi r11, r1, 0x370
    bl _savefpr_23
    stmw r14, 0x2e0(r1)
    lis r9, 0x2aab
    lis r12, 0x4330
    subi r0, r5, 0x3
    lis r10, lbl_80766070@ha
    subi r9, r9, 0x5555
    slwi r11, r7, 2
    mulhw r0, r9, r0
    addi r10, r10, lbl_80766070@l
    mr r17, r4
    lwzx r21, r10, r11
    stw r12, 0x240(r1)
    mr r16, r3
    srawi r0, r0, 2
    stw r12, 0x248(r1)
    srwi r4, r0, 31
    subi r22, r6, 0x1
    add. r10, r0, r4
    stw r7, 0x8(r1)
    bge lbl_fn_80688AE0_00001C54
    li r10, 0x0
lbl_fn_80688AE0_00001C54:
    addi r0, r10, 0x1
    add. r9, r22, r21
    mulli r6, r0, 0x18
    subf r7, r22, r10
    lfd f1, lbl_80888EF0
    slwi r4, r7, 2
    subf r19, r6, r5
    addi r0, r9, 0x1
    add r4, r8, r4
    addi r5, r1, 0x1a0
    mtctr r0
    blt lbl_fn_80688AE0_00001CBC
lbl_fn_80688AE0_00001C84:
    cmpwi r7, 0x0
    bge lbl_fn_80688AE0_00001C94
    lfd f0, lbl_80888EB8
    b lbl_fn_80688AE0_00001CA8
lbl_fn_80688AE0_00001C94:
    lwz r0, 0x0(r4)
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f1
lbl_fn_80688AE0_00001CA8:
    stfd f0, 0x0(r5)
    addi r5, r5, 0x8
    addi r4, r4, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_80688AE0_00001C84
lbl_fn_80688AE0_00001CBC:
    addi r0, r22, 0x1
    addi r5, r1, 0x60
    clrrwi r25, r22, 31
    addi r12, r1, 0x1a0
    clrrwi r24, r0, 31
    li r9, 0x0
    lis r4, 0x8000
    b lbl_fn_80688AE0_00001EA0
lbl_fn_80688AE0_00001CDC:
    cmpwi cr1, r22, 0x0
    lfd f6, lbl_80888EB8
    li r7, 0x0
    blt cr1, lbl_fn_80688AE0_00001E94
    addi r0, r22, 0x1
    subi r14, r22, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_00001E50
    li r6, 0x0
    li r11, 0x0
    blt cr1, lbl_fn_80688AE0_00001D18
    subi r0, r4, 0x2
    cmpw r22, r0
    bgt lbl_fn_80688AE0_00001D18
    li r11, 0x1
lbl_fn_80688AE0_00001D18:
    cmpwi r11, 0x0
    beq lbl_fn_80688AE0_00001D44
    cmpwi r25, 0x0
    li r0, 0x1
    bne lbl_fn_80688AE0_00001D38
    cmpwi r24, 0x0
    beq lbl_fn_80688AE0_00001D38
    li r0, 0x0
lbl_fn_80688AE0_00001D38:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00001D44
    li r6, 0x1
lbl_fn_80688AE0_00001D44:
    cmpwi r6, 0x0
    beq lbl_fn_80688AE0_00001E50
    addi r11, r14, 0x8
    mr r6, r16
    srwi r11, r11, 3
    add r0, r22, r9
    mtctr r11
    cmpwi r14, 0x0
    blt lbl_fn_80688AE0_00001E50
lbl_fn_80688AE0_00001D68:
    subf r11, r7, r0
    addi r14, r7, 0x1
    slwi r15, r11, 3
    lfd f1, 0x0(r6)
    lfdx f0, r12, r15
    subf r14, r14, r0
    slwi r15, r14, 3
    addi r11, r7, 0x2
    fmul f2, f1, f0
    subf r14, r11, r0
    lfdx f0, r12, r15
    slwi r15, r14, 3
    lfd f1, 0x8(r6)
    addi r11, r7, 0x3
    fmul f3, f1, f0
    subf r14, r11, r0
    lfd f1, 0x10(r6)
    slwi r14, r14, 3
    fadd f6, f6, f2
    lfdx f0, r12, r15
    fmul f2, f1, f0
    addi r11, r7, 0x4
    lfdx f0, r12, r14
    subf r11, r11, r0
    fadd f6, f6, f3
    lfd f1, 0x18(r6)
    slwi r18, r11, 3
    fmul f1, f1, f0
    addi r11, r7, 0x5
    addi r14, r7, 0x6
    fadd f6, f6, f2
    subf r11, r11, r0
    slwi r15, r11, 3
    addi r11, r7, 0x7
    fadd f6, f6, f1
    subf r14, r14, r0
    lfd f2, 0x20(r6)
    lfdx f0, r12, r18
    subf r11, r11, r0
    lfd f1, 0x28(r6)
    fmul f5, f2, f0
    lfdx f0, r12, r15
    slwi r14, r14, 3
    lfd f3, 0x30(r6)
    fmul f4, f1, f0
    lfdx f2, r12, r14
    fadd f6, f6, f5
    slwi r11, r11, 3
    lfd f1, 0x38(r6)
    fmul f2, f3, f2
    lfdx f0, r12, r11
    addi r7, r7, 0x8
    fadd f6, f6, f4
    addi r6, r6, 0x40
    fmul f0, f1, f0
    fadd f6, f6, f2
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00001D68
lbl_fn_80688AE0_00001E50:
    addi r0, r22, 0x1
    slwi r6, r7, 3
    subf r0, r7, r0
    add r11, r22, r9
    add r6, r3, r6
    mtctr r0
    cmpw r7, r22
    bgt lbl_fn_80688AE0_00001E94
lbl_fn_80688AE0_00001E70:
    subf r0, r7, r11
    lfd f1, 0x0(r6)
    slwi r0, r0, 3
    addi r6, r6, 0x8
    lfdx f0, r12, r0
    addi r7, r7, 0x1
    fmul f0, f1, f0
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00001E70
lbl_fn_80688AE0_00001E94:
    stfd f6, 0x0(r5)
    addi r5, r5, 0x8
    addi r9, r9, 0x1
lbl_fn_80688AE0_00001EA0:
    cmpw r9, r21
    ble lbl_fn_80688AE0_00001CDC
    subfic r28, r19, 0x18
    neg r5, r21
    slwi r4, r10, 2
    subfic r0, r19, 0x17
    slwi r3, r22, 3
    addi r26, r1, 0x1a0
    lfd f24, lbl_80888EC0
    mr r23, r21
    lfd f25, lbl_80888EF0
    clrrwi r14, r5, 31
    lfd f26, lbl_80888EC8
    add r27, r8, r4
    stw r0, 0x2d0(r1)
    add r26, r26, r3
    lfd f27, lbl_80888ED8
    addi r29, r1, 0x10
    lfd f28, lbl_80888ED0
    addi r15, r1, 0x1a0
    lfd f29, lbl_80888EE0
    lis r30, 0x100
    lfd f30, lbl_80888EE8
    lis r31, 0x8000
    lfd f31, lbl_80888EB8
lbl_fn_80688AE0_00001F04:
    slwi r0, r23, 3
    addi r3, r1, 0x60
    cmpwi r23, 0x0
    lfdx f1, r3, r0
    mr r4, r23
    li r5, 0x0
    li r6, 0x0
    ble lbl_fn_80688AE0_0000221C
    cmpwi r23, 0x8
    ble lbl_fn_80688AE0_000021AC
    cmpwi r23, -0x1
    li r0, 0x0
    ble lbl_fn_80688AE0_00001F3C
    li r0, 0x1
lbl_fn_80688AE0_00001F3C:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_000021AC
    subi r0, r23, 0x1
    slwi r7, r23, 3
    addi r3, r1, 0x60
    srwi r0, r0, 3
    add r3, r3, r7
    mtctr r0
    cmpwi r23, 0x8
    ble lbl_fn_80688AE0_000021AC
lbl_fn_80688AE0_00001F64:
    fmul f0, f24, f1
    addi r0, r5, 0x1
    addi r9, r5, 0x2
    addi r8, r5, 0x3
    addi r7, r5, 0x4
    lfd f4, -0x8(r3)
    fctiwz f0, f0
    lfd f3, -0x10(r3)
    lfd f2, -0x18(r3)
    slwi r0, r0, 2
    stfd f0, 0x250(r1)
    slwi r9, r9, 2
    lwz r10, 0x254(r1)
    slwi r8, r8, 2
    lfd f0, -0x20(r3)
    slwi r7, r7, 2
    xoris r10, r10, 0x8000
    stw r10, 0x24c(r1)
    lfd f5, 0x248(r1)
    fsub f5, f5, f25
    fadd f6, f5, f4
    fmul f5, f26, f5
    fmul f4, f24, f6
    fsub f5, f1, f5
    fctiwz f1, f4
    fctiwz f4, f5
    stfd f1, 0x260(r1)
    lwz r10, 0x264(r1)
    stfd f4, 0x258(r1)
    xoris r10, r10, 0x8000
    stw r10, 0x244(r1)
    lwz r10, 0x25c(r1)
    lfd f1, 0x240(r1)
    stwx r10, r29, r6
    fsub f1, f1, f25
    fadd f4, f1, f3
    fmul f3, f26, f1
    fmul f1, f24, f4
    fsub f3, f6, f3
    fctiwz f1, f1
    fctiwz f3, f3
    stfd f1, 0x270(r1)
    lwz r10, 0x274(r1)
    stfd f3, 0x268(r1)
    xoris r10, r10, 0x8000
    stw r10, 0x24c(r1)
    lwz r10, 0x26c(r1)
    lfd f1, 0x248(r1)
    stwx r10, r29, r0
    fsub f1, f1, f25
    fadd f3, f1, f2
    fmul f2, f26, f1
    fmul f1, f24, f3
    fsub f2, f4, f2
    fctiwz f1, f1
    fctiwz f2, f2
    stfd f1, 0x280(r1)
    lwz r0, 0x284(r1)
    stfd f2, 0x278(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    lwz r0, 0x27c(r1)
    lfd f1, 0x240(r1)
    stwx r0, r29, r9
    fsub f1, f1, f25
    fadd f2, f1, f0
    fmul f1, f26, f1
    fmul f0, f24, f2
    fsub f1, f3, f1
    fctiwz f0, f0
    fctiwz f1, f1
    stfd f0, 0x290(r1)
    lwz r0, 0x294(r1)
    stfd f1, 0x288(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lwz r0, 0x28c(r1)
    lfd f0, 0x248(r1)
    stwx r0, r29, r8
    fsub f1, f0, f25
    fmul f0, f26, f1
    fsub f0, f2, f0
    fctiwz f0, f0
    stfd f0, 0x298(r1)
    lwz r0, 0x29c(r1)
    stwx r0, r29, r7
    lfd f0, -0x28(r3)
    addi r8, r5, 0x5
    addi r0, r5, 0x7
    addi r7, r5, 0x6
    fadd f5, f1, f0
    slwi r9, r8, 2
    slwi r8, r7, 2
    lfd f2, -0x30(r3)
    lfd f1, -0x38(r3)
    slwi r0, r0, 2
    fmul f3, f24, f5
    lfdu f0, -0x40(r3)
    addi r5, r5, 0x8
    addi r6, r6, 0x20
    subi r4, r4, 0x8
    fctiwz f3, f3
    stfd f3, 0x2a0(r1)
    lwz r7, 0x2a4(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x244(r1)
    lfd f3, 0x240(r1)
    fsub f3, f3, f25
    fadd f4, f3, f2
    fmul f3, f26, f3
    fmul f2, f24, f4
    fsub f3, f5, f3
    fctiwz f2, f2
    fctiwz f3, f3
    stfd f2, 0x2b0(r1)
    lwz r7, 0x2b4(r1)
    stfd f3, 0x2a8(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x24c(r1)
    lwz r7, 0x2ac(r1)
    lfd f2, 0x248(r1)
    stwx r7, r29, r9
    fsub f2, f2, f25
    fadd f3, f2, f1
    fmul f2, f26, f2
    fmul f1, f24, f3
    fsub f2, f4, f2
    fctiwz f1, f1
    fctiwz f2, f2
    stfd f1, 0x2c0(r1)
    lwz r7, 0x2c4(r1)
    stfd f2, 0x2b8(r1)
    xoris r7, r7, 0x8000
    stw r7, 0x244(r1)
    lwz r7, 0x2bc(r1)
    lfd f1, 0x240(r1)
    stwx r7, r29, r8
    fsub f1, f1, f25
    fmul f2, f26, f1
    fadd f1, f1, f0
    fsub f0, f3, f2
    fctiwz f0, f0
    stfd f0, 0x2c8(r1)
    lwz r7, 0x2cc(r1)
    stwx r7, r29, r0
    bdnz lbl_fn_80688AE0_00001F64
lbl_fn_80688AE0_000021AC:
    slwi r3, r5, 2
    addi r5, r1, 0x10
    slwi r0, r4, 3
    addi r6, r1, 0x60
    add r5, r5, r3
    add r6, r6, r0
    mtctr r4
    cmpwi r4, 0x0
    ble lbl_fn_80688AE0_0000221C
lbl_fn_80688AE0_000021D0:
    fmul f2, f24, f1
    lfdu f0, -0x8(r6)
    subi r4, r4, 0x1
    fctiwz f2, f2
    stfd f2, 0x2c8(r1)
    lwz r0, 0x2cc(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f2, 0x248(r1)
    fsub f3, f2, f25
    fmul f2, f26, f3
    fsub f2, f1, f2
    fadd f1, f3, f0
    fctiwz f0, f2
    stfd f0, 0x2c0(r1)
    lwz r0, 0x2c4(r1)
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    bdnz lbl_fn_80688AE0_000021D0
lbl_fn_80688AE0_0000221C:
    mr r3, r19
    bl fn_80686EF4
    fmr f23, f1
    fmul f1, f27, f1
    bl fn_8068A918
    fmul f0, f28, f1
    cmpwi r19, 0x0
    li r18, 0x0
    fsub f23, f23, f0
    fctiwz f0, f23
    stfd f0, 0x2c8(r1)
    lwz r20, 0x2cc(r1)
    xoris r0, r20, 0x8000
    stw r0, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f25
    fsub f23, f23, f0
    ble lbl_fn_80688AE0_00002290
    slwi r0, r23, 2
    add r4, r29, r0
    lwz r3, -0x4(r4)
    sraw r5, r3, r28
    slw r0, r5, r28
    subf r3, r0, r3
    lwz r0, 0x2d0(r1)
    stw r3, -0x4(r4)
    add r20, r20, r5
    sraw r18, r3, r0
    b lbl_fn_80688AE0_000022B8
lbl_fn_80688AE0_00002290:
    bne lbl_fn_80688AE0_000022A8
    slwi r0, r23, 2
    add r3, r29, r0
    lwz r0, -0x4(r3)
    srawi r18, r0, 23
    b lbl_fn_80688AE0_000022B8
lbl_fn_80688AE0_000022A8:
    fcmpo cr0, f23, f29
    cror eq, gt, eq
    bne lbl_fn_80688AE0_000022B8
    li r18, 0x2
lbl_fn_80688AE0_000022B8:
    cmpwi r18, 0x0
    ble lbl_fn_80688AE0_00002374
    addi r5, r1, 0x10
    subi r4, r30, 0x1
    li r0, 0x0
    mtctr r23
    cmpwi r23, 0x0
    addi r20, r20, 0x1
    ble lbl_fn_80688AE0_00002310
lbl_fn_80688AE0_000022DC:
    cmpwi r0, 0x0
    lwz r3, 0x0(r5)
    bne lbl_fn_80688AE0_00002300
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00002308
    subf r0, r3, r30
    stw r0, 0x0(r5)
    li r0, 0x1
    b lbl_fn_80688AE0_00002308
lbl_fn_80688AE0_00002300:
    subf r3, r3, r4
    stw r3, 0x0(r5)
lbl_fn_80688AE0_00002308:
    addi r5, r5, 0x4
    bdnz lbl_fn_80688AE0_000022DC
lbl_fn_80688AE0_00002310:
    cmpwi r19, 0x1
    beq lbl_fn_80688AE0_00002324
    cmpwi r19, 0x2
    beq lbl_fn_80688AE0_0000233C
    b lbl_fn_80688AE0_00002350
lbl_fn_80688AE0_00002324:
    slwi r3, r23, 2
    add r4, r29, r3
    lwz r3, -0x4(r4)
    clrlwi r3, r3, 9
    stw r3, -0x4(r4)
    b lbl_fn_80688AE0_00002350
lbl_fn_80688AE0_0000233C:
    slwi r3, r23, 2
    add r4, r29, r3
    lwz r3, -0x4(r4)
    clrlwi r3, r3, 10
    stw r3, -0x4(r4)
lbl_fn_80688AE0_00002350:
    cmpwi r18, 0x2
    bne lbl_fn_80688AE0_00002374
    cmpwi r0, 0x0
    fsub f23, f30, f23
    beq lbl_fn_80688AE0_00002374
    fmr f1, f30
    mr r3, r19
    bl fn_80686EF4
    fsub f23, f23, f1
lbl_fn_80688AE0_00002374:
    fcmpu cr0, f31, f23
    bne lbl_fn_80688AE0_0000274C
    subi r10, r23, 0x1
    li r9, 0x0
    cmpw cr1, r10, r21
    blt cr1, lbl_fn_80688AE0_0000250C
    subf r7, r21, r10
    addi r0, r21, 0x8
    addi r8, r7, 0x1
    cmpwi r8, 0x8
    ble lbl_fn_80688AE0_000024D8
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    li r12, 0x0
    blt cr1, lbl_fn_80688AE0_000023C8
    addi r11, r31, 0x1
    cmpw r21, r11
    blt lbl_fn_80688AE0_000023C8
    li r12, 0x1
lbl_fn_80688AE0_000023C8:
    cmpwi r12, 0x0
    beq lbl_fn_80688AE0_000023E4
    subi r12, r23, 0x1
    addi r11, r31, 0x1
    cmpw r12, r11
    blt lbl_fn_80688AE0_000023E4
    li r6, 0x1
lbl_fn_80688AE0_000023E4:
    cmpwi r6, 0x0
    beq lbl_fn_80688AE0_000023FC
    addis r6, r21, 0x8000
    cmplwi r6, 0x0
    beq lbl_fn_80688AE0_000023FC
    li r5, 0x1
lbl_fn_80688AE0_000023FC:
    cmpwi r5, 0x0
    beq lbl_fn_80688AE0_00002434
    subi r5, r23, 0x1
    li r6, 0x1
    clrrwi r11, r5, 31
    cmpw r11, r14
    bne lbl_fn_80688AE0_00002428
    clrrwi r5, r7, 31
    cmpw r11, r5
    beq lbl_fn_80688AE0_00002428
    li r6, 0x0
lbl_fn_80688AE0_00002428:
    cmpwi r6, 0x0
    beq lbl_fn_80688AE0_00002434
    li r4, 0x1
lbl_fn_80688AE0_00002434:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_00002460
    clrrwi. r4, r7, 31
    li r5, 0x1
    bne lbl_fn_80688AE0_00002454
    clrrwi. r4, r8, 31
    beq lbl_fn_80688AE0_00002454
    li r5, 0x0
lbl_fn_80688AE0_00002454:
    cmpwi r5, 0x0
    beq lbl_fn_80688AE0_00002460
    li r3, 0x1
lbl_fn_80688AE0_00002460:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_000024D8
    addi r4, r10, 0x8
    slwi r5, r10, 2
    subf r4, r0, r4
    addi r3, r1, 0x10
    srwi r4, r4, 3
    add r3, r3, r5
    mtctr r4
    cmpw r10, r0
    blt lbl_fn_80688AE0_000024D8
lbl_fn_80688AE0_0000248C:
    lwz r4, 0x0(r3)
    subi r10, r10, 0x8
    lwz r0, -0x4(r3)
    or r9, r9, r4
    lwz r4, -0x8(r3)
    or r9, r9, r0
    lwz r0, -0xc(r3)
    or r9, r9, r4
    lwz r4, -0x10(r3)
    or r9, r9, r0
    lwz r0, -0x14(r3)
    or r9, r9, r4
    lwz r4, -0x18(r3)
    or r9, r9, r0
    lwz r0, -0x1c(r3)
    or r9, r9, r4
    subi r3, r3, 0x20
    or r9, r9, r0
    bdnz lbl_fn_80688AE0_0000248C
lbl_fn_80688AE0_000024D8:
    addi r0, r10, 0x1
    slwi r3, r10, 2
    addi r4, r1, 0x10
    subf r0, r21, r0
    add r4, r4, r3
    mtctr r0
    cmpw r10, r21
    blt lbl_fn_80688AE0_0000250C
lbl_fn_80688AE0_000024F8:
    lwz r0, 0x0(r4)
    subi r4, r4, 0x4
    subi r10, r10, 0x1
    or r9, r9, r0
    bdnz lbl_fn_80688AE0_000024F8
lbl_fn_80688AE0_0000250C:
    cmpwi r9, 0x0
    bne lbl_fn_80688AE0_0000274C
    li r18, 0x1
    b lbl_fn_80688AE0_00002520
lbl_fn_80688AE0_0000251C:
    addi r18, r18, 0x1
lbl_fn_80688AE0_00002520:
    subf r0, r18, r21
    slwi r0, r0, 2
    lwzx r0, r29, r0
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_0000251C
    addi r12, r23, 0x1
    addi r7, r1, 0x60
    slwi r3, r12, 3
    add r8, r23, r18
    slwi r0, r12, 2
    add r5, r27, r0
    add r6, r26, r3
    add r7, r7, r3
    b lbl_fn_80688AE0_0000273C
lbl_fn_80688AE0_00002558:
    lwz r0, 0x0(r5)
    cmpwi cr1, r22, 0x0
    lfd f0, lbl_80888EB8
    li r11, 0x0
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f1, 0x248(r1)
    fsub f1, f1, f25
    stfd f1, 0x0(r6)
    blt cr1, lbl_fn_80688AE0_00002728
    addi r0, r22, 0x1
    subi r3, r22, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_000026E4
    li r4, 0x0
    li r9, 0x0
    blt cr1, lbl_fn_80688AE0_000025AC
    subi r0, r31, 0x2
    cmpw r22, r0
    bgt lbl_fn_80688AE0_000025AC
    li r9, 0x1
lbl_fn_80688AE0_000025AC:
    cmpwi r9, 0x0
    beq lbl_fn_80688AE0_000025D8
    cmpwi r25, 0x0
    li r0, 0x1
    bne lbl_fn_80688AE0_000025CC
    cmpwi r24, 0x0
    beq lbl_fn_80688AE0_000025CC
    li r0, 0x0
lbl_fn_80688AE0_000025CC:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_000025D8
    li r4, 0x1
lbl_fn_80688AE0_000025D8:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_000026E4
    addi r0, r3, 0x8
    mr r9, r16
    srwi r0, r0, 3
    add r10, r22, r12
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_fn_80688AE0_000026E4
lbl_fn_80688AE0_000025FC:
    subf r0, r11, r10
    addi r4, r11, 0x1
    slwi r0, r0, 3
    addi r3, r11, 0x2
    lfd f2, 0x0(r9)
    subf r3, r3, r10
    lfdx f1, r15, r0
    subf r4, r4, r10
    slwi r0, r4, 3
    addi r20, r11, 0x7
    fmul f3, f2, f1
    lfd f2, 0x8(r9)
    lfdx f1, r15, r0
    addi r4, r11, 0x3
    slwi r3, r3, 3
    subf r20, r20, r10
    fmul f4, f2, f1
    subf r0, r4, r10
    lfdx f1, r15, r3
    addi r4, r11, 0x4
    fadd f0, f0, f3
    lfd f2, 0x10(r9)
    fmul f3, f2, f1
    slwi r0, r0, 3
    lfdx f1, r15, r0
    subf r4, r4, r10
    fadd f0, f0, f4
    lfd f2, 0x18(r9)
    addi r3, r11, 0x5
    addi r0, r11, 0x6
    fadd f0, f0, f3
    subf r3, r3, r10
    fmul f2, f2, f1
    slwi r4, r4, 3
    subf r0, r0, r10
    lfd f3, 0x20(r9)
    lfdx f1, r15, r4
    slwi r3, r3, 3
    fmul f6, f3, f1
    slwi r0, r0, 3
    lfdx f1, r15, r3
    slwi r20, r20, 3
    fadd f0, f0, f2
    lfd f2, 0x28(r9)
    fmul f5, f2, f1
    lfd f4, 0x30(r9)
    lfdx f3, r15, r0
    addi r11, r11, 0x8
    fadd f0, f0, f6
    lfd f2, 0x38(r9)
    lfdx f1, r15, r20
    fmul f3, f4, f3
    addi r9, r9, 0x40
    fadd f0, f0, f5
    fmul f1, f2, f1
    fadd f0, f0, f3
    fadd f0, f0, f1
    bdnz lbl_fn_80688AE0_000025FC
lbl_fn_80688AE0_000026E4:
    addi r4, r22, 0x1
    slwi r3, r11, 3
    subf r4, r11, r4
    add r0, r22, r12
    add r3, r16, r3
    mtctr r4
    cmpw r11, r22
    bgt lbl_fn_80688AE0_00002728
lbl_fn_80688AE0_00002704:
    subf r4, r11, r0
    lfd f2, 0x0(r3)
    slwi r4, r4, 3
    addi r3, r3, 0x8
    lfdx f1, r15, r4
    addi r11, r11, 0x1
    fmul f1, f2, f1
    fadd f0, f0, f1
    bdnz lbl_fn_80688AE0_00002704
lbl_fn_80688AE0_00002728:
    stfd f0, 0x0(r7)
    addi r5, r5, 0x4
    addi r6, r6, 0x8
    addi r7, r7, 0x8
    addi r12, r12, 0x1
lbl_fn_80688AE0_0000273C:
    cmpw r12, r8
    ble lbl_fn_80688AE0_00002558
    add r23, r23, r18
    b lbl_fn_80688AE0_00001F04
lbl_fn_80688AE0_0000274C:
    lfd f0, lbl_80888EB8
    fcmpu cr0, f0, f23
    bne lbl_fn_80688AE0_0000278C
    subi r23, r23, 0x1
    addi r3, r1, 0x10
    slwi r0, r23, 2
    subi r19, r19, 0x18
    add r3, r3, r0
    b lbl_fn_80688AE0_0000277C
lbl_fn_80688AE0_00002770:
    subi r3, r3, 0x4
    subi r23, r23, 0x1
    subi r19, r19, 0x18
lbl_fn_80688AE0_0000277C:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002770
    b lbl_fn_80688AE0_00002828
lbl_fn_80688AE0_0000278C:
    fmr f1, f23
    neg r3, r19
    bl fn_80686EF4
    lfd f3, lbl_80888EC8
    fcmpo cr0, f1, f3
    cror eq, gt, eq
    bne lbl_fn_80688AE0_00002810
    lfd f0, lbl_80888EC0
    slwi r5, r23, 2
    addi r23, r23, 0x1
    lfd f2, lbl_80888EF0
    fmul f0, f0, f1
    addi r4, r1, 0x10
    slwi r0, r23, 2
    addi r19, r19, 0x18
    fctiwz f0, f0
    stfd f0, 0x2c8(r1)
    lwz r3, 0x2cc(r1)
    xoris r3, r3, 0x8000
    stw r3, 0x244(r1)
    lfd f0, 0x240(r1)
    fsub f0, f0, f2
    fmul f2, f3, f0
    fctiwz f0, f0
    fsub f1, f1, f2
    stfd f0, 0x2b8(r1)
    lwz r3, 0x2bc(r1)
    fctiwz f0, f1
    stfd f0, 0x2c0(r1)
    lwz r6, 0x2c4(r1)
    stwx r6, r4, r5
    stwx r3, r4, r0
    b lbl_fn_80688AE0_00002828
lbl_fn_80688AE0_00002810:
    fctiwz f0, f1
    slwi r0, r23, 2
    addi r3, r1, 0x10
    stfd f0, 0x2c8(r1)
    lwz r4, 0x2cc(r1)
    stwx r4, r3, r0
lbl_fn_80688AE0_00002828:
    lfd f1, lbl_80888EE8
    mr r3, r19
    bl fn_80686EF4
    cmpwi r23, 0x0
    mr r3, r23
    blt lbl_fn_80688AE0_00002A34
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_000029D8
    cmpwi r23, -0x1
    li r4, 0x0
    li r0, 0x0
    ble lbl_fn_80688AE0_00002860
    li r0, 0x1
lbl_fn_80688AE0_00002860:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002890
    clrrwi. r0, r23, 31
    li r5, 0x1
    bne lbl_fn_80688AE0_00002884
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_fn_80688AE0_00002884
    li r5, 0x0
lbl_fn_80688AE0_00002884:
    cmpwi r5, 0x0
    beq lbl_fn_80688AE0_00002890
    li r4, 0x1
lbl_fn_80688AE0_00002890:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_000029D8
    slwi r5, r23, 2
    addi r6, r1, 0x10
    slwi r4, r23, 3
    addi r7, r1, 0x60
    srwi r0, r23, 3
    add r6, r6, r5
    add r7, r7, r4
    lfd f9, lbl_80888EF0
    lfd f8, lbl_80888EC0
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_fn_80688AE0_000029D8
lbl_fn_80688AE0_000028C8:
    lwz r4, 0x0(r6)
    subi r3, r3, 0x8
    lwz r0, -0x4(r6)
    xoris r4, r4, 0x8000
    stw r4, 0x24c(r1)
    xoris r4, r0, 0x8000
    lwz r0, -0x8(r6)
    lfd f0, 0x248(r1)
    stw r4, 0x244(r1)
    xoris r4, r0, 0x8000
    fsub f0, f0, f9
    lwz r0, -0xc(r6)
    lfd f2, 0x240(r1)
    xoris r0, r0, 0x8000
    stw r4, 0x24c(r1)
    fmul f5, f1, f0
    lfd f0, 0x248(r1)
    fmul f1, f1, f8
    stw r0, 0x244(r1)
    lwz r0, -0x10(r6)
    fsub f3, f2, f9
    fsub f4, f0, f9
    xoris r0, r0, 0x8000
    fmul f7, f1, f3
    lfd f2, 0x240(r1)
    stw r0, 0x24c(r1)
    fmul f1, f1, f8
    lwz r0, -0x14(r6)
    stfd f5, 0x0(r7)
    fsub f3, f2, f9
    lfd f0, 0x248(r1)
    fmul f6, f1, f4
    xoris r0, r0, 0x8000
    stw r0, 0x244(r1)
    fmul f1, f1, f8
    lwz r0, -0x18(r6)
    fsub f4, f0, f9
    xoris r4, r0, 0x8000
    stw r4, 0x24c(r1)
    lwz r0, -0x1c(r6)
    fmul f5, f1, f3
    lfd f2, 0x240(r1)
    stfd f7, -0x8(r7)
    xoris r0, r0, 0x8000
    fmul f1, f1, f8
    lfd f0, 0x248(r1)
    fsub f3, f2, f9
    stfd f6, -0x10(r7)
    fmul f4, f1, f4
    subi r6, r6, 0x20
    stfd f5, -0x18(r7)
    fmul f1, f1, f8
    stw r0, 0x244(r1)
    fsub f2, f0, f9
    lfd f0, 0x240(r1)
    fmul f3, f1, f3
    stfd f4, -0x20(r7)
    fmul f1, f1, f8
    stfd f3, -0x28(r7)
    fsub f0, f0, f9
    fmul f2, f1, f2
    fmul f1, f1, f8
    stfd f2, -0x30(r7)
    fmul f0, f1, f0
    fmul f1, f1, f8
    stfd f0, -0x38(r7)
    subi r7, r7, 0x40
    bdnz lbl_fn_80688AE0_000028C8
lbl_fn_80688AE0_000029D8:
    slwi r5, r3, 2
    addi r6, r1, 0x10
    slwi r4, r3, 3
    addi r7, r1, 0x60
    addi r0, r3, 0x1
    add r6, r6, r5
    add r7, r7, r4
    lfd f3, lbl_80888EF0
    lfd f0, lbl_80888EC0
    mtctr r0
    cmpwi r3, 0x0
    blt lbl_fn_80688AE0_00002A34
lbl_fn_80688AE0_00002A08:
    lwz r0, 0x0(r6)
    subi r6, r6, 0x4
    xoris r0, r0, 0x8000
    stw r0, 0x24c(r1)
    lfd f2, 0x248(r1)
    fsub f2, f2, f3
    fmul f2, f1, f2
    fmul f1, f1, f0
    stfd f2, 0x0(r7)
    subi r7, r7, 0x8
    bdnz lbl_fn_80688AE0_00002A08
lbl_fn_80688AE0_00002A34:
    addi r0, r23, 0x1
    mr r8, r23
    addi r4, r1, 0x100
    slwi r3, r23, 3
    lis r5, lbl_80766080@ha
    mtctr r0
    cmpwi r23, 0x0
    blt lbl_fn_80688AE0_00002AB0
lbl_fn_80688AE0_00002A54:
    addi r6, r1, 0x60
    lfd f2, lbl_80888EB8
    add r6, r6, r3
    addi r7, r5, lbl_80766080@l
    subf r0, r8, r23
    li r9, 0x0
    b lbl_fn_80688AE0_00002A8C
lbl_fn_80688AE0_00002A70:
    lfd f1, 0x0(r7)
    addi r7, r7, 0x8
    lfd f0, 0x0(r6)
    addi r6, r6, 0x8
    addi r9, r9, 0x1
    fmul f0, f1, f0
    fadd f2, f2, f0
lbl_fn_80688AE0_00002A8C:
    cmpw r9, r21
    bgt lbl_fn_80688AE0_00002A9C
    cmpw r9, r0
    ble lbl_fn_80688AE0_00002A70
lbl_fn_80688AE0_00002A9C:
    slwi r0, r0, 3
    subi r3, r3, 0x8
    stfdx f2, r4, r0
    subi r8, r8, 0x1
    bdnz lbl_fn_80688AE0_00002A54
lbl_fn_80688AE0_00002AB0:
    lwz r3, 0x8(r1)
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_80688AE0_00002BE4
    mr. r0, r3
    beq lbl_fn_80688AE0_00002AD4
    cmpwi r0, 0x3
    beq lbl_fn_80688AE0_00002E5C
    b lbl_fn_80688AE0_00003284
lbl_fn_80688AE0_00002AD4:
    cmpwi r23, 0x0
    lfd f6, lbl_80888EB8
    blt lbl_fn_80688AE0_00002BCC
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_00002BA0
    cmpwi r23, -0x1
    li r3, 0x0
    li r0, 0x0
    ble lbl_fn_80688AE0_00002B00
    li r0, 0x1
lbl_fn_80688AE0_00002B00:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002B30
    clrrwi. r0, r23, 31
    li r4, 0x1
    bne lbl_fn_80688AE0_00002B24
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_fn_80688AE0_00002B24
    li r4, 0x0
lbl_fn_80688AE0_00002B24:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_00002B30
    li r3, 0x1
lbl_fn_80688AE0_00002B30:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00002BA0
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r23, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_fn_80688AE0_00002BA0
lbl_fn_80688AE0_00002B54:
    lfd f1, 0x0(r4)
    subi r23, r23, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002B54
lbl_fn_80688AE0_00002BA0:
    slwi r3, r23, 3
    addi r4, r1, 0x100
    addi r0, r23, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x0
    blt lbl_fn_80688AE0_00002BCC
lbl_fn_80688AE0_00002BBC:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002BBC
lbl_fn_80688AE0_00002BCC:
    cmpwi r18, 0x0
    bne lbl_fn_80688AE0_00002BD8
    b lbl_fn_80688AE0_00002BDC
lbl_fn_80688AE0_00002BD8:
    fneg f6, f6
lbl_fn_80688AE0_00002BDC:
    stfd f6, 0x0(r17)
    b lbl_fn_80688AE0_00003284
lbl_fn_80688AE0_00002BE4:
    cmpwi r23, 0x0
    lfd f6, lbl_80888EB8
    mr r5, r23
    blt lbl_fn_80688AE0_00002CE0
    addi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_00002CB4
    cmpwi r23, -0x1
    li r3, 0x0
    li r0, 0x0
    ble lbl_fn_80688AE0_00002C14
    li r0, 0x1
lbl_fn_80688AE0_00002C14:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002C44
    clrrwi. r0, r23, 31
    li r4, 0x1
    bne lbl_fn_80688AE0_00002C38
    addi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_fn_80688AE0_00002C38
    li r4, 0x0
lbl_fn_80688AE0_00002C38:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_00002C44
    li r3, 0x1
lbl_fn_80688AE0_00002C44:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00002CB4
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r23, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    blt lbl_fn_80688AE0_00002CB4
lbl_fn_80688AE0_00002C68:
    lfd f1, 0x0(r4)
    subi r5, r5, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002C68
lbl_fn_80688AE0_00002CB4:
    slwi r3, r5, 3
    addi r4, r1, 0x100
    addi r0, r5, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r5, 0x0
    blt lbl_fn_80688AE0_00002CE0
lbl_fn_80688AE0_00002CD0:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002CD0
lbl_fn_80688AE0_00002CE0:
    cmpwi r18, 0x0
    bne lbl_fn_80688AE0_00002CF0
    fmr f1, f6
    b lbl_fn_80688AE0_00002CF4
lbl_fn_80688AE0_00002CF0:
    fneg f1, f6
lbl_fn_80688AE0_00002CF4:
    lfd f0, 0x100(r1)
    cmpwi cr1, r23, 0x1
    stfd f1, 0x0(r17)
    li r8, 0x1
    fsub f6, f0, f6
    blt cr1, lbl_fn_80688AE0_00002E44
    cmpwi r23, 0x8
    subi r4, r23, 0x8
    ble lbl_fn_80688AE0_00002E14
    li r5, 0x0
    li r6, 0x0
    li r7, 0x0
    blt cr1, lbl_fn_80688AE0_00002D3C
    lis r3, 0x8000
    subi r0, r3, 0x2
    cmpw r23, r0
    bgt lbl_fn_80688AE0_00002D3C
    li r7, 0x1
lbl_fn_80688AE0_00002D3C:
    cmpwi r7, 0x0
    beq lbl_fn_80688AE0_00002D78
    clrrwi r7, r23, 31
    li r3, 0x1
    addis r0, r7, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80688AE0_00002D6C
    subi r0, r23, 0x1
    clrrwi r0, r0, 31
    cmpw r7, r0
    beq lbl_fn_80688AE0_00002D6C
    li r3, 0x0
lbl_fn_80688AE0_00002D6C:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00002D78
    li r6, 0x1
lbl_fn_80688AE0_00002D78:
    cmpwi r6, 0x0
    beq lbl_fn_80688AE0_00002DA8
    subi r0, r23, 0x1
    li r3, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80688AE0_00002D9C
    clrrwi. r0, r23, 31
    beq lbl_fn_80688AE0_00002D9C
    li r3, 0x0
lbl_fn_80688AE0_00002D9C:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00002DA8
    li r5, 0x1
lbl_fn_80688AE0_00002DA8:
    cmpwi r5, 0x0
    beq lbl_fn_80688AE0_00002E14
    addi r0, r4, 0x7
    addi r3, r1, 0x108
    srwi r0, r0, 3
    mtctr r0
    cmpwi r4, 0x1
    blt lbl_fn_80688AE0_00002E14
lbl_fn_80688AE0_00002DC8:
    lfd f1, 0x0(r3)
    addi r8, r8, 0x8
    lfd f0, 0x8(r3)
    fadd f6, f6, f1
    lfd f5, 0x10(r3)
    lfd f4, 0x18(r3)
    lfd f3, 0x20(r3)
    fadd f6, f6, f0
    lfd f2, 0x28(r3)
    lfd f1, 0x30(r3)
    lfd f0, 0x38(r3)
    addi r3, r3, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002DC8
lbl_fn_80688AE0_00002E14:
    addi r0, r23, 0x1
    slwi r3, r8, 3
    addi r4, r1, 0x100
    subf r0, r8, r0
    add r4, r4, r3
    mtctr r0
    cmpw r8, r23
    bgt lbl_fn_80688AE0_00002E44
lbl_fn_80688AE0_00002E34:
    lfd f0, 0x0(r4)
    addi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00002E34
lbl_fn_80688AE0_00002E44:
    cmpwi r18, 0x0
    bne lbl_fn_80688AE0_00002E50
    b lbl_fn_80688AE0_00002E54
lbl_fn_80688AE0_00002E50:
    fneg f6, f6
lbl_fn_80688AE0_00002E54:
    stfd f6, 0x8(r17)
    b lbl_fn_80688AE0_00003284
lbl_fn_80688AE0_00002E5C:
    cmpwi r23, 0x0
    mr r5, r23
    ble lbl_fn_80688AE0_00002F90
    cmpwi r23, 0x8
    ble lbl_fn_80688AE0_00002F58
    cmpwi r23, -0x1
    li r0, 0x0
    ble lbl_fn_80688AE0_00002E80
    li r0, 0x1
lbl_fn_80688AE0_00002E80:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002F58
    subi r0, r23, 0x1
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x8
    ble lbl_fn_80688AE0_00002F58
lbl_fn_80688AE0_00002EA8:
    lfd f0, -0x8(r4)
    subi r5, r5, 0x8
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    lfd f0, -0x10(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x8(r4)
    lfd f0, -0x18(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x10(r4)
    lfd f0, -0x20(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x18(r4)
    lfd f0, -0x28(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x20(r4)
    lfd f0, -0x30(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x28(r4)
    lfd f0, -0x38(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x30(r4)
    lfd f0, -0x40(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x38(r4)
    stfdu f1, -0x40(r4)
    bdnz lbl_fn_80688AE0_00002EA8
lbl_fn_80688AE0_00002F58:
    slwi r0, r5, 3
    addi r3, r1, 0x100
    add r3, r3, r0
    mtctr r5
    cmpwi r5, 0x0
    ble lbl_fn_80688AE0_00002F90
lbl_fn_80688AE0_00002F70:
    lfd f0, -0x8(r3)
    lfd f1, 0x0(r3)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r3)
    stfdu f2, -0x8(r3)
    bdnz lbl_fn_80688AE0_00002F70
lbl_fn_80688AE0_00002F90:
    cmpwi cr1, r23, 0x1
    mr r6, r23
    ble cr1, lbl_fn_80688AE0_00003108
    subi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_000030CC
    li r3, 0x0
    li r0, 0x0
    blt cr1, lbl_fn_80688AE0_00002FB8
    li r0, 0x1
lbl_fn_80688AE0_00002FB8:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00002FF4
    clrrwi r5, r23, 31
    li r4, 0x1
    addis r0, r5, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80688AE0_00002FE8
    subi r0, r23, 0x1
    clrrwi r0, r0, 31
    cmpw r5, r0
    beq lbl_fn_80688AE0_00002FE8
    li r4, 0x0
lbl_fn_80688AE0_00002FE8:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_00002FF4
    li r3, 0x1
lbl_fn_80688AE0_00002FF4:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_000030CC
    subi r0, r23, 0x2
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x9
    ble lbl_fn_80688AE0_000030CC
lbl_fn_80688AE0_0000301C:
    lfd f0, -0x8(r4)
    subi r6, r6, 0x8
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    lfd f0, -0x10(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x8(r4)
    lfd f0, -0x18(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x10(r4)
    lfd f0, -0x20(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x18(r4)
    lfd f0, -0x28(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x20(r4)
    lfd f0, -0x30(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x28(r4)
    lfd f0, -0x38(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, -0x30(r4)
    lfd f0, -0x40(r4)
    fadd f1, f0, f2
    fsub f0, f0, f1
    fadd f0, f2, f0
    stfd f0, -0x38(r4)
    stfdu f1, -0x40(r4)
    bdnz lbl_fn_80688AE0_0000301C
lbl_fn_80688AE0_000030CC:
    slwi r3, r6, 3
    addi r4, r1, 0x100
    subi r0, r6, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r6, 0x1
    ble lbl_fn_80688AE0_00003108
lbl_fn_80688AE0_000030E8:
    lfd f0, -0x8(r4)
    lfd f1, 0x0(r4)
    fadd f2, f0, f1
    fsub f0, f0, f2
    fadd f0, f1, f0
    stfd f0, 0x0(r4)
    stfdu f2, -0x8(r4)
    bdnz lbl_fn_80688AE0_000030E8
lbl_fn_80688AE0_00003108:
    cmpwi cr1, r23, 0x2
    lfd f6, lbl_80888EB8
    blt cr1, lbl_fn_80688AE0_00003244
    subi r0, r23, 0x1
    cmpwi r0, 0x8
    ble lbl_fn_80688AE0_00003218
    li r3, 0x0
    li r4, 0x0
    li r0, 0x0
    blt cr1, lbl_fn_80688AE0_00003134
    li r0, 0x1
lbl_fn_80688AE0_00003134:
    cmpwi r0, 0x0
    beq lbl_fn_80688AE0_00003170
    clrrwi r6, r23, 31
    li r5, 0x1
    addis r0, r6, 0x8000
    cmplwi r0, 0x0
    bne lbl_fn_80688AE0_00003164
    subi r0, r23, 0x2
    clrrwi r0, r0, 31
    cmpw r6, r0
    beq lbl_fn_80688AE0_00003164
    li r5, 0x0
lbl_fn_80688AE0_00003164:
    cmpwi r5, 0x0
    beq lbl_fn_80688AE0_00003170
    li r4, 0x1
lbl_fn_80688AE0_00003170:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_000031A4
    subi r0, r23, 0x2
    li r4, 0x1
    clrrwi. r0, r0, 31
    bne lbl_fn_80688AE0_00003198
    subi r0, r23, 0x1
    clrrwi. r0, r0, 31
    beq lbl_fn_80688AE0_00003198
    li r4, 0x0
lbl_fn_80688AE0_00003198:
    cmpwi r4, 0x0
    beq lbl_fn_80688AE0_000031A4
    li r3, 0x1
lbl_fn_80688AE0_000031A4:
    cmpwi r3, 0x0
    beq lbl_fn_80688AE0_00003218
    subi r0, r23, 0x2
    slwi r3, r23, 3
    addi r4, r1, 0x100
    srwi r0, r0, 3
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0xa
    blt lbl_fn_80688AE0_00003218
lbl_fn_80688AE0_000031CC:
    lfd f1, 0x0(r4)
    subi r23, r23, 0x8
    lfd f0, -0x8(r4)
    fadd f6, f6, f1
    lfd f5, -0x10(r4)
    lfd f4, -0x18(r4)
    lfd f3, -0x20(r4)
    fadd f6, f6, f0
    lfd f2, -0x28(r4)
    lfd f1, -0x30(r4)
    lfd f0, -0x38(r4)
    subi r4, r4, 0x40
    fadd f6, f6, f5
    fadd f6, f6, f4
    fadd f6, f6, f3
    fadd f6, f6, f2
    fadd f6, f6, f1
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_000031CC
lbl_fn_80688AE0_00003218:
    slwi r3, r23, 3
    addi r4, r1, 0x100
    subi r0, r23, 0x1
    add r4, r4, r3
    mtctr r0
    cmpwi r23, 0x2
    blt lbl_fn_80688AE0_00003244
lbl_fn_80688AE0_00003234:
    lfd f0, 0x0(r4)
    subi r4, r4, 0x8
    fadd f6, f6, f0
    bdnz lbl_fn_80688AE0_00003234
lbl_fn_80688AE0_00003244:
    cmpwi r18, 0x0
    bne lbl_fn_80688AE0_00003264
    lfd f1, 0x100(r1)
    lfd f0, 0x108(r1)
    stfd f1, 0x0(r17)
    stfd f0, 0x8(r17)
    stfd f6, 0x10(r17)
    b lbl_fn_80688AE0_00003284
lbl_fn_80688AE0_00003264:
    lfd f2, 0x100(r1)
    fneg f0, f6
    lfd f1, 0x108(r1)
    fneg f2, f2
    stfd f0, 0x10(r17)
    fneg f0, f1
    stfd f2, 0x0(r17)
    stfd f0, 0x8(r17)
lbl_fn_80688AE0_00003284:
    addi r11, r1, 0x370
    clrlwi r3, r20, 29
    bl _restfpr_23
    lmw r14, 0x2e0(r1)
    lwz r0, 0x374(r1)
    mtlr r0
    addi r1, r1, 0x370
    blr
}

asm void fn_8068A198(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    lis r0, 0x3e40
    stfd f1, 0x8(r1)
    lwz r4, 0x8(r1)
    clrlwi r4, r4, 1
    cmpw r4, r0
    bge lbl_fn_8068A198_000032D8
    fctiwz f0, f1
    stfd f0, 0x10(r1)
    lwz r0, 0x14(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8068A198_000032D8
    b lbl_fn_8068A198_0000335C
lbl_fn_8068A198_000032D8:
    fmul f7, f1, f1
    lfd f0, lbl_80888F18
    lfd f5, lbl_80888F10
    cmpwi r3, 0x0
    lfd f4, lbl_80888F08
    lfd f3, lbl_80888F00
    fmul f6, f0, f7
    lfd f0, lbl_80888EF8
    fmul f8, f7, f1
    fadd f5, f5, f6
    fmul f5, f7, f5
    fadd f4, f4, f5
    fmul f4, f7, f4
    fadd f3, f3, f4
    fmul f3, f7, f3
    fadd f0, f0, f3
    bne lbl_fn_8068A198_00003334
    fmul f2, f7, f0
    lfd f0, lbl_80888F20
    fadd f0, f0, f2
    fmul f0, f8, f0
    fadd f1, f1, f0
    b lbl_fn_8068A198_0000335C
lbl_fn_8068A198_00003334:
    lfd f4, lbl_80888F28
    fmul f3, f8, f0
    lfd f0, lbl_80888F20
    fmul f4, f4, f2
    fmul f0, f0, f8
    fsub f3, f4, f3
    fmul f3, f7, f3
    fsub f2, f3, f2
    fsub f0, f2, f0
    fsub f1, f1, f0
lbl_fn_8068A198_0000335C:
    addi r1, r1, 0x20
    blr
}

asm void fn_8068A258(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f1, 0x8(r1)
    lis r0, 0x3e30
    lwz r8, 0x8(r1)
    clrlwi r7, r8, 1
    cmpw r7, r0
    bge lbl_fn_8068A258_000033E0
    fctiwz f0, f1
    stfd f0, 0x20(r1)
    lwz r0, 0x24(r1)
    cmpwi r0, 0x0
    bne lbl_fn_8068A258_000033E0
    addi r4, r3, 0x1
    lwz r0, 0xc(r1)
    or r4, r4, r7
    or. r0, r4, r0
    bne lbl_fn_8068A258_000033C8
    fabs f1, f1
    lfd f0, lbl_80888F30
    fdiv f1, f0, f1
    b lbl_fn_8068A258_0000359C
lbl_fn_8068A258_000033C8:
    cmpwi r3, 0x1
    bne lbl_fn_8068A258_000033D4
    b lbl_fn_8068A258_0000359C
lbl_fn_8068A258_000033D4:
    lfd f0, lbl_80888F38
    fdiv f1, f0, f1
    b lbl_fn_8068A258_0000359C
lbl_fn_8068A258_000033E0:
    lis r4, 0x3fe6
    subi r0, r4, 0x6bd8
    cmpw r7, r0
    blt lbl_fn_8068A258_00003418
    cmpwi r8, 0x0
    bge lbl_fn_8068A258_00003400
    fneg f1, f1
    fneg f2, f2
lbl_fn_8068A258_00003400:
    lfd f3, lbl_80888F40
    lfd f0, lbl_80888F48
    fsub f1, f3, f1
    fsub f0, f0, f2
    lfd f2, lbl_80888F50
    fadd f1, f1, f0
lbl_fn_8068A258_00003418:
    fmul f0, f1, f1
    lis r6, lbl_807660C0@ha
    addi r5, r6, lbl_807660C0@l
    lis r4, 0x3fe6
    subi r0, r4, 0x6bd8
    lfd f5, 0x60(r5)
    fmul f3, f0, f0
    lfd f8, 0x58(r5)
    lfd f6, 0x50(r5)
    cmpw r7, r0
    lfd f10, 0x48(r5)
    fmul f4, f0, f1
    fmul f7, f3, f5
    lfd f5, lbl_807660C0@l(r6)
    lfd f9, 0x40(r5)
    fmul f11, f3, f8
    lfd f31, 0x38(r5)
    lfd f8, 0x30(r5)
    fadd f6, f6, f7
    lfd f13, 0x28(r5)
    fadd f30, f10, f11
    lfd f7, 0x20(r5)
    fmul f5, f5, f4
    lfd f12, 0x18(r5)
    fmul f10, f3, f6
    lfd f6, 0x10(r5)
    lfd f11, 0x8(r5)
    fmul f30, f3, f30
    fadd f9, f9, f10
    fadd f10, f31, f30
    fmul f9, f3, f9
    fmul f10, f3, f10
    fadd f8, f8, f9
    fadd f9, f13, f10
    fmul f8, f3, f8
    fmul f9, f3, f9
    fadd f7, f7, f8
    fadd f8, f12, f9
    fmul f7, f3, f7
    fmul f8, f3, f8
    fadd f3, f6, f7
    fadd f6, f11, f8
    fmul f3, f0, f3
    fadd f3, f6, f3
    fmul f3, f4, f3
    fadd f3, f2, f3
    fmul f0, f0, f3
    fadd f6, f2, f0
    fadd f6, f6, f5
    fadd f4, f1, f6
    blt lbl_fn_8068A258_00003544
    lis r4, 0x4330
    xoris r0, r3, 0x8000
    stw r0, 0x24(r1)
    rlwinm r0, r8, 2, 30, 30
    lfd f5, lbl_80888F60
    subfic r0, r0, 0x1
    stw r4, 0x20(r1)
    xoris r0, r0, 0x8000
    fmul f3, f4, f4
    lfd f0, lbl_80888F58
    lfd f2, 0x20(r1)
    stw r0, 0x2c(r1)
    fsub f7, f2, f5
    stw r4, 0x28(r1)
    fadd f2, f4, f7
    lfd f4, 0x28(r1)
    fsub f4, f4, f5
    fdiv f2, f3, f2
    fsub f2, f2, f6
    fsub f1, f1, f2
    fmul f0, f0, f1
    fsub f0, f7, f0
    fmul f1, f4, f0
    b lbl_fn_8068A258_0000359C
lbl_fn_8068A258_00003544:
    cmpwi r3, 0x1
    bne lbl_fn_8068A258_00003554
    fmr f1, f4
    b lbl_fn_8068A258_0000359C
lbl_fn_8068A258_00003554:
    lfd f0, lbl_80888F38
    li r0, 0x0
    stfd f4, 0x18(r1)
    fdiv f5, f0, f4
    lfd f2, lbl_80888F30
    stw r0, 0x1c(r1)
    lfd f4, 0x18(r1)
    stfd f5, 0x10(r1)
    fsub f0, f4, f1
    stw r0, 0x14(r1)
    lfd f3, 0x10(r1)
    fsub f0, f6, f0
    fmul f1, f3, f4
    fmul f0, f3, f0
    fadd f1, f2, f1
    fadd f0, f1, f0
    fmul f0, f5, f0
    fadd f1, f3, f0
lbl_fn_8068A258_0000359C:
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    addi r1, r1, 0x50
    blr
}

asm void fn_8068A4A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    lis r5, lbl_80766128@ha
    lis r0, 0x4410
    stfd f1, 0x8(r1)
    addi r5, r5, lbl_80766128@l
    lwz r6, 0x8(r1)
    clrlwi r4, r6, 1
    cmpw r4, r0
    bge lbl_fn_8068A4A8_000035F4
    lis r0, 0x3fdc
    cmpw r4, r0
    bge lbl_fn_8068A4A8_00003678
    lis r0, 0x3e20
    cmpw r4, r0
    bge lbl_fn_8068A4A8_00003670
    b lbl_fn_8068A4A8_00003658
lbl_fn_8068A4A8_000035F4:
    lis r0, 0x7ff0
    cmpw r4, r0
    beq lbl_fn_8068A4A8_00003608
    bge lbl_fn_8068A4A8_00003614
    b lbl_fn_8068A4A8_0000361C
lbl_fn_8068A4A8_00003608:
    lwz r0, 0xc(r1)
    cmpwi r0, 0x0
    beq lbl_fn_8068A4A8_0000361C
lbl_fn_8068A4A8_00003614:
    fadd f1, f1, f1
    b lbl_fn_8068A4A8_000037DC
lbl_fn_8068A4A8_0000361C:
    cmpwi r6, 0x0
    ble lbl_fn_8068A4A8_0000363C
    addi r4, r5, 0x0
    addi r3, r5, 0x20
    lfd f1, 0x18(r4)
    lfd f0, 0x18(r3)
    fadd f1, f1, f0
    b lbl_fn_8068A4A8_000037DC
lbl_fn_8068A4A8_0000363C:
    addi r4, r5, 0x0
    addi r3, r5, 0x20
    lfd f1, 0x18(r4)
    lfd f0, 0x18(r3)
    fneg f1, f1
    fsub f1, f1, f0
    b lbl_fn_8068A4A8_000037DC
lbl_fn_8068A4A8_00003658:
    lfd f2, lbl_80888F68
    lfd f0, lbl_80888F70
    fadd f2, f2, f1
    fcmpo cr0, f2, f0
    ble lbl_fn_8068A4A8_00003670
    b lbl_fn_8068A4A8_000037DC
lbl_fn_8068A4A8_00003670:
    li r0, -0x1
    b lbl_fn_8068A4A8_00003708
lbl_fn_8068A4A8_00003678:
    lis r0, 0x3ff3
    fabs f3, f1
    cmpw r4, r0
    bge lbl_fn_8068A4A8_000036CC
    lis r0, 0x3fe6
    cmpw r4, r0
    bge lbl_fn_8068A4A8_000036B4
    lfd f0, lbl_80888F78
    li r0, 0x0
    lfd f1, lbl_80888F70
    fmul f2, f0, f3
    fadd f0, f0, f3
    fsub f1, f2, f1
    fdiv f1, f1, f0
    b lbl_fn_8068A4A8_00003708
lbl_fn_8068A4A8_000036B4:
    lfd f0, lbl_80888F70
    li r0, 0x1
    fsub f1, f3, f0
    fadd f0, f0, f3
    fdiv f1, f1, f0
    b lbl_fn_8068A4A8_00003708
lbl_fn_8068A4A8_000036CC:
    lis r3, 0x4004
    addi r0, r3, -0x8000
    cmpw r4, r0
    bge lbl_fn_8068A4A8_000036FC
    lfd f2, lbl_80888F80
    li r0, 0x2
    lfd f0, lbl_80888F70
    fmul f1, f2, f3
    fsub f2, f3, f2
    fadd f0, f0, f1
    fdiv f1, f2, f0
    b lbl_fn_8068A4A8_00003708
lbl_fn_8068A4A8_000036FC:
    lfd f0, lbl_80888F88
    li r0, 0x3
    fdiv f1, f0, f3
lbl_fn_8068A4A8_00003708:
    fmul f0, f1, f1
    addi r3, r5, 0x40
    lfd f3, 0x50(r3)
    cmpwi r0, 0x0
    lfd f2, 0x48(r3)
    lfd f11, 0x40(r3)
    fmul f13, f0, f0
    lfd f5, 0x38(r3)
    lfd f10, 0x30(r3)
    lfd f4, 0x28(r3)
    lfd f9, 0x20(r3)
    fmul f12, f13, f3
    lfd f3, 0x18(r3)
    fmul f6, f13, f2
    lfd f8, 0x10(r3)
    lfd f2, 0x8(r3)
    fadd f11, f11, f12
    lfd f7, 0x40(r5)
    fadd f5, f5, f6
    fmul f6, f13, f11
    fmul f5, f13, f5
    fadd f6, f10, f6
    fadd f4, f4, f5
    fmul f5, f13, f6
    fmul f4, f13, f4
    fadd f5, f9, f5
    fadd f3, f3, f4
    fmul f4, f13, f5
    fmul f3, f13, f3
    fadd f4, f8, f4
    fadd f2, f2, f3
    fmul f3, f13, f4
    fmul f4, f13, f2
    fadd f2, f7, f3
    fmul f0, f0, f2
    bge lbl_fn_8068A4A8_000037A8
    fadd f0, f0, f4
    fmul f0, f1, f0
    fsub f1, f1, f0
    b lbl_fn_8068A4A8_000037DC
lbl_fn_8068A4A8_000037A8:
    fadd f0, f0, f4
    slwi r0, r0, 3
    addi r3, r5, 0x20
    addi r4, r5, 0x0
    lfdx f2, r3, r0
    cmpwi r6, 0x0
    fmul f3, f1, f0
    lfdx f0, r4, r0
    fsub f2, f3, f2
    fsub f1, f2, f1
    fsub f1, f0, f1
    bge lbl_fn_8068A4A8_000037DC
    fneg f1, f1
lbl_fn_8068A4A8_000037DC:
    addi r1, r1, 0x10
    blr
}

asm void fn_8068A6D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r3, r5, 11, 1
    subi r7, r3, 0x3ff
    cmpwi r7, 0x34
    bge lbl_fn_8068A6D8_00003818
    cmpwi cr1, r7, 0x14
    bge cr1, lbl_fn_8068A6D8_000038B8
    cmpwi r7, 0x0
    bge lbl_fn_8068A6D8_00003860
    b lbl_fn_8068A6D8_00003824
lbl_fn_8068A6D8_00003818:
    cmpwi r7, 0x400
    beq lbl_fn_8068A6D8_000038AC
    b lbl_fn_8068A6D8_00003928
lbl_fn_8068A6D8_00003824:
    lfd f2, lbl_80888F90
    lfd f0, lbl_80888F98
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A6D8_0000391C
    cmpwi r5, 0x0
    bge lbl_fn_8068A6D8_0000384C
    lis r5, 0x8000
    li r6, 0x0
    b lbl_fn_8068A6D8_0000391C
lbl_fn_8068A6D8_0000384C:
    or. r0, r5, r6
    beq lbl_fn_8068A6D8_0000391C
    lis r5, 0x3ff0
    li r6, 0x0
    b lbl_fn_8068A6D8_0000391C
lbl_fn_8068A6D8_00003860:
    lis r3, 0x10
    subi r0, r3, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_fn_8068A6D8_0000387C
    b lbl_fn_8068A6D8_00003928
lbl_fn_8068A6D8_0000387C:
    lfd f2, lbl_80888F90
    lfd f0, lbl_80888F98
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A6D8_0000391C
    cmpwi r5, 0x0
    ble lbl_fn_8068A6D8_000038A0
    sraw r0, r3, r7
    add r5, r5, r0
lbl_fn_8068A6D8_000038A0:
    andc r5, r5, r4
    li r6, 0x0
    b lbl_fn_8068A6D8_0000391C
lbl_fn_8068A6D8_000038AC:
    fadd f1, f1, f1
    b lbl_fn_8068A6D8_00003928
    b lbl_fn_8068A6D8_00003928
lbl_fn_8068A6D8_000038B8:
    subi r0, r7, 0x14
    li r3, -0x1
    srw r4, r3, r0
    and. r0, r6, r4
    bne lbl_fn_8068A6D8_000038D0
    b lbl_fn_8068A6D8_00003928
lbl_fn_8068A6D8_000038D0:
    lfd f2, lbl_80888F90
    lfd f0, lbl_80888F98
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A6D8_0000391C
    cmpwi r5, 0x0
    ble lbl_fn_8068A6D8_00003918
    bne cr1, lbl_fn_8068A6D8_000038F8
    addi r5, r5, 0x1
    b lbl_fn_8068A6D8_00003918
lbl_fn_8068A6D8_000038F8:
    subfic r0, r7, 0x34
    li r3, 0x1
    slw r0, r3, r0
    add r0, r6, r0
    cmplw r0, r6
    bge lbl_fn_8068A6D8_00003914
    addi r5, r5, 0x1
lbl_fn_8068A6D8_00003914:
    mr r6, r0
lbl_fn_8068A6D8_00003918:
    andc r6, r6, r4
lbl_fn_8068A6D8_0000391C:
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    lfd f1, 0x8(r1)
lbl_fn_8068A6D8_00003928:
    addi r1, r1, 0x10
    blr
}

asm void fn_8068A824(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stfd f1, 0x8(r1)
    stfd f2, 0x10(r1)
    lwz r3, 0x8(r1)
    lwz r0, 0x10(r1)
    clrrwi r0, r0, 31
    rlwimi r0, r3, 0, 1, 31
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    addi r1, r1, 0x20
    blr
}

asm void fn_8068A850(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_80888FA0
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_fn_8068A850_00003990
    bl fn_806889D0
    b lbl_fn_8068A850_00003A14
lbl_fn_8068A850_00003990:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_fn_8068A850_000039A4
    fsub f1, f1, f1
    b lbl_fn_8068A850_00003A14
lbl_fn_8068A850_000039A4:
    addi r3, r1, 0x10
    bl fn_8068864C
    clrlwi. r0, r3, 30
    beq lbl_fn_8068A850_000039C8
    cmpwi r0, 0x1
    beq lbl_fn_8068A850_000039D8
    cmpwi r0, 0x2
    beq lbl_fn_8068A850_000039F0
    b lbl_fn_8068A850_00003A04
lbl_fn_8068A850_000039C8:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_806889D0
    b lbl_fn_8068A850_00003A14
lbl_fn_8068A850_000039D8:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_8068A198
    fneg f1, f1
    b lbl_fn_8068A850_00003A14
lbl_fn_8068A850_000039F0:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_806889D0
    fneg f1, f1
    b lbl_fn_8068A850_00003A14
lbl_fn_8068A850_00003A04:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_8068A198
lbl_fn_8068A850_00003A14:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068A918(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r3, r5, 11, 1
    subi r7, r3, 0x3ff
    cmpwi r7, 0x34
    bge lbl_fn_8068A918_00003A58
    cmpwi cr1, r7, 0x14
    bge cr1, lbl_fn_8068A918_00003AFC
    cmpwi r7, 0x0
    bge lbl_fn_8068A918_00003AA4
    b lbl_fn_8068A918_00003A64
lbl_fn_8068A918_00003A58:
    cmpwi r7, 0x400
    beq lbl_fn_8068A918_00003AF0
    b lbl_fn_8068A918_00003B6C
lbl_fn_8068A918_00003A64:
    lfd f2, lbl_80888FA8
    lfd f0, lbl_80888FB0
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A918_00003B60
    cmpwi r5, 0x0
    blt lbl_fn_8068A918_00003A8C
    li r6, 0x0
    li r5, 0x0
    b lbl_fn_8068A918_00003B60
lbl_fn_8068A918_00003A8C:
    clrlwi r0, r5, 1
    or. r0, r0, r6
    beq lbl_fn_8068A918_00003B60
    lis r5, 0xbff0
    li r6, 0x0
    b lbl_fn_8068A918_00003B60
lbl_fn_8068A918_00003AA4:
    lis r3, 0x10
    subi r0, r3, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_fn_8068A918_00003AC0
    b lbl_fn_8068A918_00003B6C
lbl_fn_8068A918_00003AC0:
    lfd f2, lbl_80888FA8
    lfd f0, lbl_80888FB0
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A918_00003B60
    cmpwi r5, 0x0
    bge lbl_fn_8068A918_00003AE4
    sraw r0, r3, r7
    add r5, r5, r0
lbl_fn_8068A918_00003AE4:
    andc r5, r5, r4
    li r6, 0x0
    b lbl_fn_8068A918_00003B60
lbl_fn_8068A918_00003AF0:
    fadd f1, f1, f1
    b lbl_fn_8068A918_00003B6C
    b lbl_fn_8068A918_00003B6C
lbl_fn_8068A918_00003AFC:
    subi r0, r7, 0x14
    li r3, -0x1
    srw r4, r3, r0
    and. r0, r6, r4
    bne lbl_fn_8068A918_00003B14
    b lbl_fn_8068A918_00003B6C
lbl_fn_8068A918_00003B14:
    lfd f2, lbl_80888FA8
    lfd f0, lbl_80888FB0
    fadd f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8068A918_00003B60
    cmpwi r5, 0x0
    bge lbl_fn_8068A918_00003B5C
    bne cr1, lbl_fn_8068A918_00003B3C
    addi r5, r5, 0x1
    b lbl_fn_8068A918_00003B5C
lbl_fn_8068A918_00003B3C:
    subfic r0, r7, 0x34
    li r3, 0x1
    slw r0, r3, r0
    add r0, r6, r0
    cmplw r0, r6
    bge lbl_fn_8068A918_00003B58
    addi r5, r5, 0x1
lbl_fn_8068A918_00003B58:
    mr r6, r0
lbl_fn_8068A918_00003B5C:
    andc r6, r6, r4
lbl_fn_8068A918_00003B60:
    stw r5, 0x8(r1)
    stw r6, 0xc(r1)
    lfd f1, 0x8(r1)
lbl_fn_8068A918_00003B6C:
    addi r1, r1, 0x10
    blr
}

asm void fn_8068AA68(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    li r4, 0x0
    lis r0, 0x7ff0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    stw r4, 0x0(r3)
    clrlwi r4, r5, 1
    lwz r6, 0xc(r1)
    cmpw r4, r0
    bge lbl_fn_8068AA68_00003BF4
    or. r0, r4, r6
    bne lbl_fn_8068AA68_00003BA8
    b lbl_fn_8068AA68_00003BF4
lbl_fn_8068AA68_00003BA8:
    lis r0, 0x10
    cmpw r4, r0
    bge lbl_fn_8068AA68_00003BD0
    lfd f0, lbl_80888FB8
    li r0, -0x36
    stw r0, 0x0(r3)
    fmul f1, f1, f0
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    clrlwi r4, r5, 1
lbl_fn_8068AA68_00003BD0:
    rlwinm r0, r5, 0, 12, 0
    lwz r5, 0x0(r3)
    srawi r4, r4, 20
    oris r0, r0, 0x3fe0
    stw r0, 0x8(r1)
    add r4, r4, r5
    subi r0, r4, 0x3fe
    stw r0, 0x0(r3)
    lfd f1, 0x8(r1)
lbl_fn_8068AA68_00003BF4:
    addi r1, r1, 0x10
    blr
}

asm void fn_8068AAF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stfd f31, 0x18(r1)
    fmr f31, f1
    stw r31, 0x14(r1)
    mr r31, r3
    stfd f1, 0x8(r1)
    bl fn_8067E570
    cmpwi r3, 0x2
    ble lbl_fn_8068AAF0_00003C34
    lfd f0, lbl_80888FC0
    fcmpu cr0, f0, f31
    bne lbl_fn_8068AAF0_00003C3C
lbl_fn_8068AAF0_00003C34:
    fmr f1, f31
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003C3C:
    lwz r5, 0x8(r1)
    lwz r3, 0xc(r1)
    extrwi. r4, r5, 11, 1
    bne lbl_fn_8068AAF0_00003C94
    clrlwi r0, r5, 1
    or. r0, r3, r0
    bne lbl_fn_8068AAF0_00003C60
    fmr f1, f31
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003C60:
    lfd f0, lbl_80888FC8
    lis r3, 0xffff
    addi r0, r3, 0x3cb0
    fmul f31, f31, f0
    cmpw r31, r0
    stfd f31, 0x8(r1)
    lwz r5, 0x8(r1)
    extrwi r3, r5, 11, 1
    subi r4, r3, 0x36
    bge lbl_fn_8068AAF0_00003C94
    lfd f0, lbl_80888FD0
    fmul f1, f0, f31
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003C94:
    cmpwi r4, 0x7ff
    bne lbl_fn_8068AAF0_00003CA4
    fadd f1, f31, f31
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003CA4:
    add r4, r4, r31
    cmpwi r4, 0x7fe
    ble lbl_fn_8068AAF0_00003CC8
    fmr f2, f31
    lfd f1, lbl_80888FD8
    bl fn_8068A824
    lfd f0, lbl_80888FD8
    fmul f1, f0, f1
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003CC8:
    cmpwi r4, 0x0
    ble lbl_fn_8068AAF0_00003CE8
    rlwinm r3, r5, 0, 12, 0
    slwi r0, r4, 20
    or r0, r3, r0
    stw r0, 0x8(r1)
    lfd f1, 0x8(r1)
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003CE8:
    cmpwi r4, -0x36
    bgt lbl_fn_8068AAF0_00003D30
    lis r3, 0x1
    subi r0, r3, 0x3cb0
    cmpw r31, r0
    ble lbl_fn_8068AAF0_00003D18
    fmr f2, f31
    lfd f1, lbl_80888FD8
    bl fn_8068A824
    lfd f0, lbl_80888FD8
    fmul f1, f0, f1
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003D18:
    fmr f2, f31
    lfd f1, lbl_80888FD0
    bl fn_8068A824
    lfd f0, lbl_80888FD0
    fmul f1, f0, f1
    b lbl_fn_8068AAF0_00003D50
lbl_fn_8068AAF0_00003D30:
    addi r0, r4, 0x36
    rlwinm r3, r5, 0, 12, 0
    slwi r0, r0, 20
    lfd f1, lbl_80888FE0
    or r0, r3, r0
    stw r0, 0x8(r1)
    lfd f0, 0x8(r1)
    fmul f1, f1, f0
lbl_fn_8068AAF0_00003D50:
    lwz r0, 0x24(r1)
    lfd f31, 0x18(r1)
    lwz r31, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068AC5C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stfd f1, 0x8(r1)
    lwz r5, 0x8(r1)
    lwz r6, 0xc(r1)
    extrwi r4, r5, 11, 1
    subi r7, r4, 0x3ff
    cmpwi r7, 0x14
    bge lbl_fn_8068AC5C_00003DF4
    cmpwi r7, 0x0
    bge lbl_fn_8068AC5C_00003DA4
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    b lbl_fn_8068AC5C_00003E5C
lbl_fn_8068AC5C_00003DA4:
    lis r4, 0x10
    subi r0, r4, 0x1
    sraw r4, r0, r7
    and r0, r5, r4
    or. r0, r6, r0
    bne lbl_fn_8068AC5C_00003DD8
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_fn_8068AC5C_00003E5C
lbl_fn_8068AC5C_00003DD8:
    andc r4, r5, r4
    li r0, 0x0
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lfd f0, 0x0(r3)
    fsub f1, f1, f0
    b lbl_fn_8068AC5C_00003E5C
lbl_fn_8068AC5C_00003DF4:
    cmpwi r7, 0x33
    ble lbl_fn_8068AC5C_00003E18
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_fn_8068AC5C_00003E5C
lbl_fn_8068AC5C_00003E18:
    subi r0, r7, 0x14
    li r4, -0x1
    srw r4, r4, r0
    and. r0, r6, r4
    bne lbl_fn_8068AC5C_00003E48
    clrrwi r4, r5, 31
    li r0, 0x0
    stw r4, 0x8(r1)
    stw r0, 0xc(r1)
    stfd f1, 0x0(r3)
    lfd f1, 0x8(r1)
    b lbl_fn_8068AC5C_00003E5C
lbl_fn_8068AC5C_00003E48:
    andc r0, r6, r4
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    lfd f0, 0x0(r3)
    fsub f1, f1, f0
lbl_fn_8068AC5C_00003E5C:
    addi r1, r1, 0x10
    blr
}

asm void fn_8068AD58(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_80888FE8
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_fn_8068AD58_00003E9C
    li r3, 0x0
    bl fn_8068A198
    b lbl_fn_8068AD58_00003F20
lbl_fn_8068AD58_00003E9C:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_fn_8068AD58_00003EB0
    fsub f1, f1, f1
    b lbl_fn_8068AD58_00003F20
lbl_fn_8068AD58_00003EB0:
    addi r3, r1, 0x10
    bl fn_8068864C
    clrlwi. r0, r3, 30
    beq lbl_fn_8068AD58_00003ED4
    cmpwi r0, 0x1
    beq lbl_fn_8068AD58_00003EE8
    cmpwi r0, 0x2
    beq lbl_fn_8068AD58_00003EF8
    b lbl_fn_8068AD58_00003F10
lbl_fn_8068AD58_00003ED4:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_8068A198
    b lbl_fn_8068AD58_00003F20
lbl_fn_8068AD58_00003EE8:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_806889D0
    b lbl_fn_8068AD58_00003F20
lbl_fn_8068AD58_00003EF8:
    lfd f1, 0x10(r1)
    li r3, 0x1
    lfd f2, 0x18(r1)
    bl fn_8068A198
    fneg f1, f1
    b lbl_fn_8068AD58_00003F20
lbl_fn_8068AD58_00003F10:
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    bl fn_806889D0
    fneg f1, f1
lbl_fn_8068AD58_00003F20:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068AE24(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r3, 0x3fe9
    lfd f2, lbl_80888FF0
    stfd f1, 0x8(r1)
    stw r0, 0x24(r1)
    addi r0, r3, 0x21fb
    lwz r3, 0x8(r1)
    clrlwi r3, r3, 1
    cmpw r3, r0
    bgt lbl_fn_8068AE24_00003F68
    li r3, 0x1
    bl fn_8068A258
    b lbl_fn_8068AE24_00003F98
lbl_fn_8068AE24_00003F68:
    lis r0, 0x7ff0
    cmpw r3, r0
    blt lbl_fn_8068AE24_00003F7C
    fsub f1, f1, f1
    b lbl_fn_8068AE24_00003F98
lbl_fn_8068AE24_00003F7C:
    addi r3, r1, 0x10
    bl fn_8068864C
    clrlslwi r0, r3, 31, 1
    lfd f1, 0x10(r1)
    lfd f2, 0x18(r1)
    subfic r3, r0, 0x1
    bl fn_8068A258
lbl_fn_8068AE24_00003F98:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068AE9C(void)
{
    nofralloc
    b fn_80686F34
}

asm void fn_8068AEA0(void)
{
    nofralloc
    b fn_80687200
}

asm void fn_8068AEA4(void)
{
    nofralloc
    b fn_80687498
}

asm void fn_8068AEA8(void)
{
    nofralloc
    b fn_806876F0
}

asm void fn_8068AEAC(void)
{
    nofralloc
    b fn_80687D24
}

asm void fn_8068AEB0(void)
{
    nofralloc
    b fn_80687E38
}

asm void fn_8068AEB4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    stfd f1, 0x8(r1)
    lwz r6, 0x8(r1)
    lwz r0, 0xc(r1)
    rlwinm r3, r6, 0, 1, 11
    subis r3, r3, 0x7ff0
    cmplwi r3, 0x0
    bne lbl_fn_8068AEB4_00003FF4
    fmul f0, f1, f1
    li r0, 0x21
    stw r0, lbl_80880348
    fadd f1, f1, f0
    b lbl_fn_8068AEB4_00004200
lbl_fn_8068AEB4_00003FF4:
    cmpwi cr1, r6, 0x0
    bgt cr1, lbl_fn_8068AEB4_00004024
    clrlwi r3, r6, 1
    or. r3, r0, r3
    bne lbl_fn_8068AEB4_0000400C
    b lbl_fn_8068AEB4_00004200
lbl_fn_8068AEB4_0000400C:
    bge cr1, lbl_fn_8068AEB4_00004024
    lis r3, lbl_8087EC00@ha
    li r0, 0x21
    stw r0, lbl_80880348
    lfs f1, lbl_8087EC00@l(r3)
    b lbl_fn_8068AEB4_00004200
lbl_fn_8068AEB4_00004024:
    srawi. r3, r6, 20
    bne lbl_fn_8068AEB4_00004078
    b lbl_fn_8068AEB4_00004040
lbl_fn_8068AEB4_00004030:
    srwi r4, r0, 11
    slwi r0, r0, 21
    or r6, r6, r4
    subi r3, r3, 0x15
lbl_fn_8068AEB4_00004040:
    cmpwi r6, 0x0
    beq lbl_fn_8068AEB4_00004030
    li r7, 0x0
    b lbl_fn_8068AEB4_00004058
lbl_fn_8068AEB4_00004050:
    slwi r6, r6, 1
    addi r7, r7, 0x1
lbl_fn_8068AEB4_00004058:
    rlwinm. r4, r6, 0, 11, 11
    beq lbl_fn_8068AEB4_00004050
    subfic r4, r7, 0x20
    subi r5, r7, 0x1
    srw r4, r0, r4
    slw r0, r0, r7
    subf r3, r5, r3
    or r6, r6, r4
lbl_fn_8068AEB4_00004078:
    subi r4, r3, 0x3ff
    clrlwi r5, r6, 12
    clrlwi. r4, r4, 31
    oris r6, r5, 0x10
    beq lbl_fn_8068AEB4_0000409C
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
lbl_fn_8068AEB4_0000409C:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    li r9, 0x0
    li r11, 0x0
    li r10, 0x0
    li r12, 0x0
    lis r7, 0x20
    b lbl_fn_8068AEB4_000040F0
lbl_fn_8068AEB4_000040C4:
    add r4, r11, r7
    cmpw r4, r6
    bgt lbl_fn_8068AEB4_000040DC
    add r11, r4, r7
    subf r6, r4, r6
    add r12, r12, r7
lbl_fn_8068AEB4_000040DC:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    srwi r7, r7, 1
lbl_fn_8068AEB4_000040F0:
    cmpwi r7, 0x0
    bne lbl_fn_8068AEB4_000040C4
    lis r7, 0x8000
    b lbl_fn_8068AEB4_00004168
lbl_fn_8068AEB4_00004100:
    cmpw r11, r6
    mr r5, r11
    add r8, r9, r7
    blt lbl_fn_8068AEB4_0000411C
    bne lbl_fn_8068AEB4_00004154
    cmplw r8, r0
    bgt lbl_fn_8068AEB4_00004154
lbl_fn_8068AEB4_0000411C:
    clrrwi r4, r8, 31
    add r9, r8, r7
    addis r4, r4, 0x8000
    cmplwi r4, 0x0
    bne lbl_fn_8068AEB4_0000413C
    clrrwi. r4, r9, 31
    bne lbl_fn_8068AEB4_0000413C
    addi r11, r11, 0x1
lbl_fn_8068AEB4_0000413C:
    cmplw r0, r8
    subf r6, r5, r6
    bge lbl_fn_8068AEB4_0000414C
    subi r6, r6, 0x1
lbl_fn_8068AEB4_0000414C:
    subf r0, r8, r0
    add r10, r10, r7
lbl_fn_8068AEB4_00004154:
    srwi r5, r0, 31
    add r4, r6, r6
    add r6, r5, r4
    add r0, r0, r0
    srwi r7, r7, 1
lbl_fn_8068AEB4_00004168:
    cmpwi r7, 0x0
    bne lbl_fn_8068AEB4_00004100
    or. r0, r6, r0
    beq lbl_fn_8068AEB4_000041CC
    lfd f0, lbl_80888FF8
    stfd f0, 0x10(r1)
    fcmpo cr0, f0, f0
    cror eq, gt, eq
    bne lbl_fn_8068AEB4_000041CC
    addis r0, r10, 0x1
    stfd f0, 0x10(r1)
    cmplwi r0, 0xffff
    bne lbl_fn_8068AEB4_000041A8
    li r10, 0x0
    addi r12, r12, 0x1
    b lbl_fn_8068AEB4_000041CC
lbl_fn_8068AEB4_000041A8:
    fcmpo cr0, f0, f0
    ble lbl_fn_8068AEB4_000041C4
    cmplwi r0, 0xfffe
    bne lbl_fn_8068AEB4_000041BC
    addi r12, r12, 0x1
lbl_fn_8068AEB4_000041BC:
    addi r10, r10, 0x2
    b lbl_fn_8068AEB4_000041CC
lbl_fn_8068AEB4_000041C4:
    clrlwi r0, r10, 31
    add r10, r10, r0
lbl_fn_8068AEB4_000041CC:
    clrlwi r0, r12, 31
    srawi r4, r12, 1
    cmpwi r0, 0x1
    srwi r5, r10, 1
    addis r4, r4, 0x3fe0
    bne lbl_fn_8068AEB4_000041E8
    oris r5, r5, 0x8000
lbl_fn_8068AEB4_000041E8:
    subi r0, r3, 0x3ff
    stw r5, 0x14(r1)
    extlwi r0, r0, 12, 19
    add r4, r4, r0
    stw r4, 0x10(r1)
    lfd f1, 0x10(r1)
lbl_fn_8068AEB4_00004200:
    addi r1, r1, 0x20
    blr
}

asm void fn_8068B0FC(void)
{
    nofralloc
    blr
}

asm void fn_8068B100(void)
{
    nofralloc
    b fn_8068AEB4
}

asm void fn_8068B104(void)
{
    nofralloc
    lis r5, lbl_807BB380@ha
    addi r5, r5, lbl_807BB380@l
    lwz r6, 0x38(r5)
lbl_fn_8068B104_0000421C:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_fn_8068B104_00004238
    li r5, 0x0
lbl_fn_8068B104_00004238:
    cmpwi r5, 0x0
    beq lbl_fn_8068B104_00004244
    b lbl_fn_8068B104_0000424C
lbl_fn_8068B104_00004244:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_fn_8068B104_0000424C:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_8068B104_0000426C
    li r5, 0x0
lbl_fn_8068B104_0000426C:
    cmpwi r5, 0x0
    beq lbl_fn_8068B104_00004278
    b lbl_fn_8068B104_00004280
lbl_fn_8068B104_00004278:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_fn_8068B104_00004280:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_fn_8068B104_00004294
    li r3, -0x1
    blr
lbl_fn_8068B104_00004294:
    ble lbl_fn_8068B104_000042A0
    li r3, 0x1
    blr
lbl_fn_8068B104_000042A0:
    cmpwi r7, 0x0
    bne lbl_fn_8068B104_0000421C
    li r3, 0x0
    blr
}

asm void fn_8068B1A4(void)
{
    nofralloc
    lis r5, lbl_807BB380@ha
    mr r6, r3
    addi r5, r5, lbl_807BB380@l
    b lbl_fn_8068B1A4_000042F4
lbl_fn_8068B1A4_000042C0:
    extsb r0, r4
    li r4, 0x1
    cmplwi r0, 0xff
    bgt lbl_fn_8068B1A4_000042D4
    li r4, 0x0
lbl_fn_8068B1A4_000042D4:
    cmpwi r4, 0x0
    beq lbl_fn_8068B1A4_000042E0
    b lbl_fn_8068B1A4_000042EC
lbl_fn_8068B1A4_000042E0:
    lwz r4, 0x38(r5)
    lwz r4, 0xc(r4)
    lbzx r0, r4, r0
lbl_fn_8068B1A4_000042EC:
    stb r0, 0x0(r6)
    addi r6, r6, 0x1
lbl_fn_8068B1A4_000042F4:
    lbz r4, 0x0(r6)
    extsb. r0, r4
    bne lbl_fn_8068B1A4_000042C0
    blr
}

asm void fn_8068B1F8(void)
{
    nofralloc
    b fn_8067DABC
}

asm void fn_8068B1FC(void)
{
    nofralloc
    lis r5, lbl_807BB380@ha
    addi r5, r5, lbl_807BB380@l
    lwz r6, 0x38(r5)
lbl_fn_8068B1FC_00004314:
    lbz r0, 0x0(r3)
    li r5, 0x1
    addi r3, r3, 0x1
    extsb r7, r0
    cmplwi r7, 0xff
    bgt lbl_fn_8068B1FC_00004330
    li r5, 0x0
lbl_fn_8068B1FC_00004330:
    cmpwi r5, 0x0
    beq lbl_fn_8068B1FC_0000433C
    b lbl_fn_8068B1FC_00004344
lbl_fn_8068B1FC_0000433C:
    lwz r5, 0x10(r6)
    lbzx r7, r5, r7
lbl_fn_8068B1FC_00004344:
    lbz r0, 0x0(r4)
    extsb r7, r7
    li r5, 0x1
    addi r4, r4, 0x1
    extsb r0, r0
    cmplwi r0, 0xff
    bgt lbl_fn_8068B1FC_00004364
    li r5, 0x0
lbl_fn_8068B1FC_00004364:
    cmpwi r5, 0x0
    beq lbl_fn_8068B1FC_00004370
    b lbl_fn_8068B1FC_00004378
lbl_fn_8068B1FC_00004370:
    lwz r5, 0x10(r6)
    lbzx r0, r5, r0
lbl_fn_8068B1FC_00004378:
    extsb r0, r0
    cmpw r7, r0
    bge lbl_fn_8068B1FC_0000438C
    li r3, -0x1
    blr
lbl_fn_8068B1FC_0000438C:
    ble lbl_fn_8068B1FC_00004398
    li r3, 0x1
    blr
lbl_fn_8068B1FC_00004398:
    cmpwi r7, 0x0
    bne lbl_fn_8068B1FC_00004314
    li r3, 0x0
    blr
}

asm void fn_8068B29C(void)
{
    nofralloc
    b fn_8067DB74
}

asm void fn_8068B2A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    li r7, 0x0
    stw r0, 0x14(r1)
    li r8, 0x0
    li r6, 0x0
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    bge lbl_fn_8068B2A0_000043E0
    neg r3, r3
    li r7, 0x1
lbl_fn_8068B2A0_000043E0:
    divwu r0, r3, r5
    mullw r0, r0, r5
    subf r9, r0, r3
    cmpwi r9, 0x9
    ble lbl_fn_8068B2A0_00004408
    addi r0, r9, 0x37
    sthx r0, r4, r6
    addi r8, r8, 0x1
    addi r6, r6, 0x2
    b lbl_fn_8068B2A0_00004418
lbl_fn_8068B2A0_00004408:
    addi r0, r9, 0x30
    sthx r0, r4, r6
    addi r8, r8, 0x1
    addi r6, r6, 0x2
lbl_fn_8068B2A0_00004418:
    divwu. r3, r3, r5
    bne lbl_fn_8068B2A0_000043E0
    cmpwi r7, 0x0
    beq lbl_fn_8068B2A0_00004438
    slwi r0, r8, 1
    li r3, 0x2d
    sthx r3, r4, r0
    addi r8, r8, 0x1
lbl_fn_8068B2A0_00004438:
    slwi r0, r8, 1
    li r3, 0x0
    sthx r3, r4, r0
    mr r3, r31
    li r30, 0x0
    bl fn_80686A48
    subi r4, r3, 0x1
    mr r5, r31
    slwi r0, r4, 1
    add r6, r31, r0
    b lbl_fn_8068B2A0_00004484
lbl_fn_8068B2A0_00004464:
    lhz r3, 0x0(r5)
    addi r30, r30, 0x1
    lhz r0, 0x0(r6)
    subi r4, r4, 0x1
    sth r0, 0x0(r5)
    addi r5, r5, 0x2
    sth r3, 0x0(r6)
    subi r6, r6, 0x2
lbl_fn_8068B2A0_00004484:
    cmpw r30, r4
    blt lbl_fn_8068B2A0_00004464
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068B39C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r3, lbl_807BBB08@ha
    stw r0, 0x44(r1)
    addi r3, r3, lbl_807BBB08@l
    li r0, 0x0
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    addi r30, r1, 0x18
    stw r29, 0x34(r1)
    mr r29, r4
    stw r3, 0x18(r1)
    mr r3, r29
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
    beq lbl_fn_8068B39C_00004534
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r31, 0xc(r3)
lbl_fn_8068B39C_00004534:
    li r0, 0x0
    stw r3, 0x20(r1)
    stw r0, 0x10(r1)
    b lbl_fn_8068B39C_00004548
    bl fn_80084C24
lbl_fn_8068B39C_00004548:
    lwz r3, 0x1c(r1)
    mr r4, r29
    bl strcpy
    lis r3, lbl_807661D8@ha
    lis r5, fn_8068B47C@ha
    mr r4, r30
    addi r3, r3, lbl_807661D8@l
    addi r5, r5, fn_8068B47C@l
    bl fn_80697BB8
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8068B47C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068B47C_000045F0
    addic. r3, r3, 0x4
    beq lbl_fn_8068B47C_000045E0
    beq lbl_fn_8068B47C_000045E0
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068B47C_000045E0
    bl fn_806952C4
    b lbl_fn_8068B47C_000045E0
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068B47C_000045DC:
    b lbl_fn_8068B47C_000045DC
lbl_fn_8068B47C_000045E0:
    extsh. r0, r30
    ble lbl_fn_8068B47C_000045F0
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068B47C_000045F0:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068B50C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    beq lbl_fn_8068B50C_000046EC
    lis r4, lbl_807BBB24@ha
    lwz r30, 0x8(r3)
    addi r4, r4, lbl_807BBB24@l
    stw r4, 0x0(r3)
    b lbl_fn_8068B50C_00004684
lbl_fn_8068B50C_0000465C:
    subi r30, r30, 0x1
    lwz r3, 0x4(r28)
    slwi r0, r30, 3
    mr r4, r28
    add r5, r3, r0
    li r3, 0x0
    lwz r12, 0x0(r5)
    lwz r5, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_8068B50C_00004684:
    cmpwi r30, 0x0
    bne lbl_fn_8068B50C_0000465C
    lwz r30, 0x20(r28)
    cmpwi r30, 0x0
    beq lbl_fn_8068B50C_000046C4
    beq lbl_fn_8068B50C_000046BC
    lwz r3, 0x4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8068B50C_000046BC
    bl fn_806952C4
    b lbl_fn_8068B50C_000046BC
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068B50C_000046B8:
    b lbl_fn_8068B50C_000046B8
lbl_fn_8068B50C_000046BC:
    mr r3, r30
    bl dtor_80084684
lbl_fn_8068B50C_000046C4:
    lwz r3, 0x18(r28)
    bl fn_8067AF64
    lwz r3, 0x10(r28)
    bl fn_8067AF64
    lwz r3, 0x4(r28)
    bl fn_8067AF64
    extsh. r0, r29
    ble lbl_fn_8068B50C_000046EC
    mr r3, r28
    bl dtor_80084684
lbl_fn_8068B50C_000046EC:
    mr r10, r31
    lwz r31, 0x2c(r31)
    lwz r30, 0x28(r10)
    mr r3, r28
    lwz r29, 0x24(r10)
    lwz r28, 0x20(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068B60C(void)
{
    nofralloc
    blr
}

asm void fn_8068B610(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r7, 0x0
    li r5, 0x1002
    stw r0, 0x54(r1)
    cntlzw r0, r4
    srwi r6, r0, 5
    stw r31, 0x4c(r1)
    li r0, 0x6
    mr r31, r1
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    mr r29, r3
    stw r4, 0x24(r3)
    stb r7, 0x33(r3)
    stb r6, 0x32(r3)
    sth r5, 0x30(r3)
    stw r7, 0x2c(r3)
    stw r0, 0x28(r3)
    stw r7, 0x4(r3)
    stw r7, 0x8(r3)
    stw r7, 0xc(r3)
    stw r7, 0x10(r3)
    stw r7, 0x14(r3)
    stw r7, 0x18(r3)
    stw r7, 0x1c(r3)
    stw r7, 0x20(r3)
    li r3, 0x8
    stw r1, 0x34(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8068B610_000047D8
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x0(r30)
    lwz r4, 0x4(r3)
    stw r4, 0x4(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8068B610_000047D8
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8068B610_000047D8
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068B610_000047D4:
    b lbl_fn_8068B610_000047D4
lbl_fn_8068B610_000047D8:
    stw r30, 0x20(r29)
    b lbl_fn_8068B610_00004810
    li r0, 0x1
    stb r0, 0x32(r29)
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
    addi r3, r31, 0x20
    bl fn_80697CFC
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x34(r31)
    stw r0, 0x0(r1)
lbl_fn_8068B610_00004810:
    mr r10, r31
    lwz r31, 0x4c(r31)
    lwz r30, 0x48(r10)
    lwz r29, 0x44(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068B728(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_8068B730(void)
{
    nofralloc
    lbz r0, lbl_80880385
    cmpwi r0, 0x0
    bne lbl_fn_8068B730_0000485C
    lbz r0, lbl_80880380
    extsb. r0, r0
    bne lbl_fn_8068B730_0000485C
    li r0, 0x1
    stb r0, lbl_80880380
lbl_fn_8068B730_0000485C:
    lbz r0, lbl_80880380
    li r3, 0x1
    stb r3, lbl_80880385
    extsb. r0, r0
    bne lbl_fn_8068B730_00004874
    stb r3, lbl_80880380
lbl_fn_8068B730_00004874:
    la r3, lbl_80880384
    blr
}

asm void fn_8068B770(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r27, 0x7c(r1)
    lis r30, lbl_808327C0@ha
    mr r31, r1
    mr r29, r3
    addi r30, r30, lbl_808327C0@l
    bl fn_8068B730
    mr r4, r3
    addi r3, r31, 0x8
    bl fn_8068BA70
    lbz r0, lbl_80880386
    extsb. r0, r0
    bne lbl_fn_8068B770_000048E8
    lis r28, lbl_80832A70@ha
    lis r4, __files@ha
    addi r3, r28, lbl_80832A70@l
    addi r4, r4, __files@l
    bl fn_8068CD2C
    lis r4, fn_8068BAC0@ha
    addi r3, r28, lbl_80832A70@l
    addi r4, r4, fn_8068BAC0@l
    addi r5, r30, 0x250
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880386
lbl_fn_8068B770_000048E8:
    lbz r0, lbl_80880387
    extsb. r0, r0
    bne lbl_fn_8068B770_00004928
    lis r4, __files@ha
    lis r28, lbl_80832AAC@ha
    addi r4, r4, __files@l
    addi r3, r28, lbl_80832AAC@l
    addi r4, r4, 0x50
    bl fn_8068C72C
    lis r4, fn_8068BB54@ha
    addi r3, r28, lbl_80832AAC@l
    addi r4, r4, fn_8068BB54@l
    addi r5, r30, 0x25c
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880387
lbl_fn_8068B770_00004928:
    lbz r0, lbl_80880388
    extsb. r0, r0
    bne lbl_fn_8068B770_00004968
    lis r4, __files@ha
    lis r28, lbl_80832B00@ha
    addi r4, r4, __files@l
    addi r3, r28, lbl_80832B00@l
    addi r4, r4, 0xa0
    bl fn_8068C72C
    lis r4, fn_8068BB54@ha
    addi r3, r28, lbl_80832B00@l
    addi r4, r4, fn_8068BB54@l
    addi r5, r30, 0x268
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880388
lbl_fn_8068B770_00004968:
    lwz r3, lbl_80880378
    cmpwi r3, 0x0
    addi r0, r3, 0x1
    stw r0, lbl_80880378
    bne lbl_fn_8068B770_00004B2C
    addi r27, r30, 0x0
    li r3, 0x4c
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068B770_000049D0
    li r0, 0x1
    lis r5, lbl_80832A70@ha
    stw r1, 0x6c(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832A70@l
    bl fn_8068E878
    b lbl_fn_8068B770_000049D0
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068B770_000049D0:
    addi r27, r30, 0x50
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068B770_00004A24
    li r0, 0x1
    lis r5, lbl_80832AAC@ha
    stw r1, 0x54(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832AAC@l
    bl fn_8068E554
    b lbl_fn_8068B770_00004A24
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068B770_00004A24:
    addi r27, r30, 0xe0
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068B770_00004A78
    li r0, 0x1
    lis r5, lbl_80832B00@ha
    stw r1, 0x3c(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832B00@l
    bl fn_8068E554
    b lbl_fn_8068B770_00004A78
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068B770_00004A78:
    addi r27, r30, 0x98
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068B770_00004ACC
    li r0, 0x1
    lis r5, lbl_80832B00@ha
    stw r1, 0x24(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832B00@l
    bl fn_8068E554
    b lbl_fn_8068B770_00004ACC
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068B770_00004ACC:
    lwz r3, 0x0(r30)
    addi r4, r30, 0x50
    bl fn_8068BC10
    lwz r3, 0xe0(r30)
    li r4, 0x2000
    bl fn_8068BA5C
    lwz r3, 0xe0(r30)
    addi r4, r30, 0x50
    bl fn_8068BC10
    lis r3, lbl_80832A70@ha
    li r4, 0x0
    addi r3, r3, lbl_80832A70@l
    li r5, 0x0
    bl fn_8068BC20
    lis r3, lbl_80832AAC@ha
    li r4, 0x0
    addi r3, r3, lbl_80832AAC@l
    li r5, 0x0
    bl fn_8068BC20
    lis r3, lbl_80832B00@ha
    li r4, 0x0
    addi r3, r3, lbl_80832B00@l
    li r5, 0x0
    bl fn_8068BC20
lbl_fn_8068B770_00004B2C:
    li r0, -0x1
    addi r3, r31, 0x8
    extsh r4, r0
    bl dtor_8068BA80
    mr r10, r31
    mr r3, r29
    lmw r27, 0x7c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068BA50(void)
{
    nofralloc
    mr r3, r4
    blr
}

asm void fn_8068BA58(void)
{
    nofralloc
    blr
}

asm void fn_8068BA5C(void)
{
    nofralloc
    mr r5, r3
    lhz r3, 0x30(r3)
    or r0, r3, r4
    sth r0, 0x30(r5)
    blr
}

asm void fn_8068BA70(void)
{
    nofralloc
    li r0, 0x1
    stw r4, 0x0(r3)
    stb r0, 0x4(r3)
    blr
}

asm void dtor_8068BA80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_dtor_8068BA80_00004BB4
    cmpwi r4, 0x0
    ble lbl_dtor_8068BA80_00004BB4
    bl dtor_80084684
lbl_dtor_8068BA80_00004BB4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068BAC0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068BAC0_00004C38
    beq lbl_fn_8068BAC0_00004C28
    addic. r3, r3, 0x1c
    beq lbl_fn_8068BAC0_00004C28
    beq lbl_fn_8068BAC0_00004C28
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068BAC0_00004C28
    bl fn_806952C4
    b lbl_fn_8068BAC0_00004C28
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068BAC0_00004C24:
    b lbl_fn_8068BAC0_00004C24
lbl_fn_8068BAC0_00004C28:
    extsh. r0, r30
    ble lbl_fn_8068BAC0_00004C38
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068BAC0_00004C38:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068BB54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068BB54_00004CF4
    beq lbl_fn_8068BB54_00004CE4
    lbz r0, 0x4b(r3)
    lis r4, lbl_807BBCC8@ha
    addi r4, r4, lbl_807BBCC8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068BB54_00004CB0
    lwz r3, 0x28(r3)
    bl fn_80084C24
lbl_fn_8068BB54_00004CB0:
    cmpwi r29, 0x0
    beq lbl_fn_8068BB54_00004CE4
    addic. r3, r29, 0x1c
    beq lbl_fn_8068BB54_00004CE4
    beq lbl_fn_8068BB54_00004CE4
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068BB54_00004CE4
    bl fn_806952C4
    b lbl_fn_8068BB54_00004CE4
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068BB54_00004CE0:
    b lbl_fn_8068BB54_00004CE0
lbl_fn_8068BB54_00004CE4:
    extsh. r0, r30
    ble lbl_fn_8068BB54_00004CF4
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068BB54_00004CF4:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068BC10(void)
{
    nofralloc
    mr r5, r3
    lwz r3, 0x34(r3)
    stw r4, 0x34(r5)
    blr
}

asm void fn_8068BC20(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_8068BC30(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808327C0@ha
    addi r31, r31, lbl_808327C0@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8068BC30_00004E4C
    lbz r0, lbl_80880385
    cmpwi r0, 0x0
    bne lbl_fn_8068BC30_00004D8C
    lbz r0, lbl_80880380
    extsb. r0, r0
    bne lbl_fn_8068BC30_00004D8C
    li r0, 0x1
    stb r0, lbl_80880380
lbl_fn_8068BC30_00004D8C:
    lbz r0, lbl_80880380
    li r3, 0x1
    stb r3, lbl_80880385
    extsb. r0, r0
    bne lbl_fn_8068BC30_00004DA4
    stb r3, lbl_80880380
lbl_fn_8068BC30_00004DA4:
    lwz r0, lbl_80880378
    la r4, lbl_80880384
    li r3, 0x1
    stw r4, 0x8(r1)
    subic. r0, r0, 0x1
    stb r3, 0xc(r1)
    stw r0, lbl_80880378
    bne lbl_fn_8068BC30_00004E3C
    addi r3, r31, 0x50
    bl fn_800E1A48
    addi r3, r31, 0xe0
    bl fn_800E1A48
    addi r3, r31, 0x98
    bl fn_800E1A48
    addi r3, r31, 0x0
    li r4, -0x1
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x50
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0xe0
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x98
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8068BC30_00004E3C:
    cmpwi r30, 0x0
    ble lbl_fn_8068BC30_00004E4C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068BC30_00004E4C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068BD60(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r27, 0x7c(r1)
    lis r30, lbl_808327C0@ha
    mr r31, r1
    mr r29, r3
    addi r30, r30, lbl_808327C0@l
    bl fn_8068B730
    mr r4, r3
    addi r3, r31, 0x8
    bl fn_8068BA70
    lbz r0, lbl_80880389
    extsb. r0, r0
    bne lbl_fn_8068BD60_00004ED8
    lis r28, lbl_80832B54@ha
    lis r4, __files@ha
    addi r3, r28, lbl_80832B54@l
    addi r4, r4, __files@l
    bl fn_8068C9A0
    lis r4, fn_8068C040@ha
    addi r3, r28, lbl_80832B54@l
    addi r4, r4, fn_8068C040@l
    addi r5, r30, 0x274
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_80880389
lbl_fn_8068BD60_00004ED8:
    lbz r0, lbl_8088038A
    extsb. r0, r0
    bne lbl_fn_8068BD60_00004F18
    lis r4, __files@ha
    lis r28, lbl_80832B90@ha
    addi r4, r4, __files@l
    addi r3, r28, lbl_80832B90@l
    addi r4, r4, 0x50
    bl fn_8068C4B8
    lis r4, fn_8068C164@ha
    addi r3, r28, lbl_80832B90@l
    addi r4, r4, fn_8068C164@l
    addi r5, r30, 0x280
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088038A
lbl_fn_8068BD60_00004F18:
    lbz r0, lbl_8088038B
    extsb. r0, r0
    bne lbl_fn_8068BD60_00004F58
    lis r4, __files@ha
    lis r28, lbl_80832BE4@ha
    addi r4, r4, __files@l
    addi r3, r28, lbl_80832BE4@l
    addi r4, r4, 0xa0
    bl fn_8068C4B8
    lis r4, fn_8068C164@ha
    addi r3, r28, lbl_80832BE4@l
    addi r4, r4, fn_8068C164@l
    addi r5, r30, 0x28c
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8088038B
lbl_fn_8068BD60_00004F58:
    lwz r3, lbl_8088037C
    cmpwi r3, 0x0
    addi r0, r3, 0x1
    stw r0, lbl_8088037C
    bne lbl_fn_8068BD60_0000511C
    addi r27, r30, 0x128
    li r3, 0x4c
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068BD60_00004FC0
    li r0, 0x1
    lis r5, lbl_80832B54@ha
    stw r1, 0x6c(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832B54@l
    bl fn_8068E6E8
    b lbl_fn_8068BD60_00004FC0
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068BD60_00004FC0:
    addi r27, r30, 0x178
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068BD60_00005014
    li r0, 0x1
    lis r5, lbl_80832B90@ha
    stw r1, 0x54(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832B90@l
    bl fn_8068E270
    b lbl_fn_8068BD60_00005014
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068BD60_00005014:
    addi r27, r30, 0x208
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068BD60_00005068
    li r0, 0x1
    lis r5, lbl_80832BE4@ha
    stw r1, 0x3c(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832BE4@l
    bl fn_8068E270
    b lbl_fn_8068BD60_00005068
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068BD60_00005068:
    addi r27, r30, 0x1c0
    li r3, 0x48
    mr r4, r27
    bl fn_8068BA50
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068BD60_000050BC
    li r0, 0x1
    lis r5, lbl_80832BE4@ha
    stw r1, 0x24(r31)
    extsh r4, r0
    addi r5, r5, lbl_80832BE4@l
    bl fn_8068E270
    b lbl_fn_8068BD60_000050BC
    mr r3, r28
    mr r4, r27
    bl fn_8068BA58
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068BD60_000050BC:
    lwz r3, 0x128(r30)
    addi r4, r30, 0x178
    bl fn_8068C220
    lwz r3, 0x208(r30)
    li r4, 0x2000
    bl fn_8068BA5C
    lwz r3, 0x208(r30)
    addi r4, r30, 0x178
    bl fn_8068C220
    lis r3, lbl_80832B54@ha
    li r4, 0x0
    addi r3, r3, lbl_80832B54@l
    li r5, 0x0
    bl fn_8068C230
    lis r3, lbl_80832B90@ha
    li r4, 0x0
    addi r3, r3, lbl_80832B90@l
    li r5, 0x0
    bl fn_8068C230
    lis r3, lbl_80832BE4@ha
    li r4, 0x0
    addi r3, r3, lbl_80832BE4@l
    li r5, 0x0
    bl fn_8068C230
lbl_fn_8068BD60_0000511C:
    li r0, -0x1
    addi r3, r31, 0x8
    extsh r4, r0
    bl dtor_8068BA80
    mr r10, r31
    mr r3, r29
    lmw r27, 0x7c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068C040(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068C040_000051B8
    beq lbl_fn_8068C040_000051A8
    addic. r3, r3, 0x1c
    beq lbl_fn_8068C040_000051A8
    beq lbl_fn_8068C040_000051A8
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068C040_000051A8
    bl fn_806952C4
    b lbl_fn_8068C040_000051A8
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068C040_000051A4:
    b lbl_fn_8068C040_000051A4
lbl_fn_8068C040_000051A8:
    extsh. r0, r30
    ble lbl_fn_8068C040_000051B8
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068C040_000051B8:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void dtor_8068C0D4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_dtor_8068C0D4_00005248
    addic. r3, r3, 0x1c
    beq lbl_dtor_8068C0D4_00005238
    beq lbl_dtor_8068C0D4_00005238
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_dtor_8068C0D4_00005238
    bl fn_806952C4
    b lbl_dtor_8068C0D4_00005238
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_dtor_8068C0D4_00005234:
    b lbl_dtor_8068C0D4_00005234
lbl_dtor_8068C0D4_00005238:
    extsh. r0, r30
    ble lbl_dtor_8068C0D4_00005248
    mr r3, r29
    bl dtor_80084684
lbl_dtor_8068C0D4_00005248:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068C164(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068C164_00005304
    beq lbl_fn_8068C164_000052F4
    lbz r0, 0x4b(r3)
    lis r4, lbl_807BBB90@ha
    addi r4, r4, lbl_807BBB90@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068C164_000052C0
    lwz r3, 0x28(r3)
    bl fn_80084C24
lbl_fn_8068C164_000052C0:
    cmpwi r29, 0x0
    beq lbl_fn_8068C164_000052F4
    addic. r3, r29, 0x1c
    beq lbl_fn_8068C164_000052F4
    beq lbl_fn_8068C164_000052F4
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068C164_000052F4
    bl fn_806952C4
    b lbl_fn_8068C164_000052F4
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068C164_000052F0:
    b lbl_fn_8068C164_000052F0
lbl_fn_8068C164_000052F4:
    extsh. r0, r30
    ble lbl_fn_8068C164_00005304
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068C164_00005304:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068C220(void)
{
    nofralloc
    mr r5, r3
    lwz r3, 0x34(r3)
    stw r4, 0x34(r5)
    blr
}

asm void fn_8068C230(void)
{
    nofralloc
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctr
}

asm void fn_8068C240(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_808327C0@ha
    addi r31, r31, lbl_808327C0@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8068C240_0000545C
    lbz r0, lbl_80880385
    cmpwi r0, 0x0
    bne lbl_fn_8068C240_0000539C
    lbz r0, lbl_80880380
    extsb. r0, r0
    bne lbl_fn_8068C240_0000539C
    li r0, 0x1
    stb r0, lbl_80880380
lbl_fn_8068C240_0000539C:
    lbz r0, lbl_80880380
    li r3, 0x1
    stb r3, lbl_80880385
    extsb. r0, r0
    bne lbl_fn_8068C240_000053B4
    stb r3, lbl_80880380
lbl_fn_8068C240_000053B4:
    lwz r0, lbl_8088037C
    la r4, lbl_80880384
    li r3, 0x1
    stw r4, 0x8(r1)
    subic. r0, r0, 0x1
    stb r3, 0xc(r1)
    stw r0, lbl_8088037C
    bne lbl_fn_8068C240_0000544C
    addi r3, r31, 0x178
    bl fn_8068E3FC
    addi r3, r31, 0x208
    bl fn_8068E3FC
    addi r3, r31, 0x1c0
    bl fn_8068E3FC
    addi r3, r31, 0x128
    li r4, -0x1
    lwz r12, 0x8(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x178
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x208
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x1c0
    li r4, -0x1
    lwz r12, 0x4(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8068C240_0000544C:
    cmpwi r30, 0x0
    ble lbl_fn_8068C240_0000545C
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068C240_0000545C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068C370(void)
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
    beq lbl_fn_8068C370_000054D8
    lwz r5, 0x0(r3)
    addi r3, r3, 0x8
    cmpwi r4, 0x0
    subf r0, r5, r3
    stw r0, 0x3c(r5)
    beq lbl_fn_8068C370_000054C8
    cmpwi r3, 0x0
    beq lbl_fn_8068C370_000054C8
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_8068C370_000054C8:
    cmpwi r31, 0x0
    ble lbl_fn_8068C370_000054D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8068C370_000054D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void dtor_8068C3E8(void)
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
    beq lbl_dtor_8068C3E8_00005530
    li r4, 0x0
    bl fn_8068B50C
    cmpwi r31, 0x0
    ble lbl_dtor_8068C3E8_00005530
    mr r3, r30
    bl dtor_80084684
lbl_dtor_8068C3E8_00005530:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068C440(void)
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
    beq lbl_fn_8068C440_000055A8
    lwz r5, 0x0(r3)
    addi r3, r3, 0xc
    cmpwi r4, 0x0
    subf r0, r5, r3
    stw r0, 0x3c(r5)
    beq lbl_fn_8068C440_00005598
    cmpwi r3, 0x0
    beq lbl_fn_8068C440_00005598
    li r4, 0x0
    bl fn_8068B50C
lbl_fn_8068C440_00005598:
    cmpwi r31, 0x0
    ble lbl_fn_8068C440_000055A8
    mr r3, r30
    bl dtor_80084684
lbl_fn_8068C440_000055A8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068C4B8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lis r5, lbl_807BBC2C@ha
    stw r0, 0xb4(r1)
    li r0, 0x0
    addi r5, r5, lbl_807BBC2C@l
    stmw r27, 0x9c(r1)
    mr r31, r1
    mr r30, r3
    mr r29, r4
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r30)
    lwz r4, 0x4(r3)
    stw r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8068C4B8_00005640
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8068C4B8_00005640
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068C4B8_0000563C:
    b lbl_fn_8068C4B8_0000563C
lbl_fn_8068C4B8_00005640:
    lis r3, lbl_807BBB90@ha
    li r28, 0x0
    addi r3, r3, lbl_807BBB90@l
    stw r3, 0x0(r30)
    mr r4, r30
    stw r28, 0x24(r30)
    addi r3, r31, 0x10
    stw r28, 0x28(r30)
    stw r28, 0x38(r30)
    stb r28, 0x48(r30)
    stb r28, 0x4a(r30)
    stb r28, 0x4b(r30)
    stb r28, 0x4c(r30)
    stw r28, 0x4(r30)
    stw r28, 0x8(r30)
    stw r28, 0xc(r30)
    stw r28, 0x14(r30)
    stw r28, 0x10(r30)
    stw r28, 0x18(r30)
    stw r28, 0x34(r30)
    stw r28, 0x30(r30)
    stw r28, 0x2c(r30)
    bl fn_8068EA10
    lwz r0, lbl_808803CC
    stb r28, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C4B8_000056BC
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068C4B8_000056BC:
    lwz r3, 0x10(r31)
    lwz r27, lbl_808803CC
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_8068C4B8_000056E4
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068C4B8_0000573C
lbl_fn_8068C4B8_000056E4:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068C4B8_00005700
    li r4, 0x0
    bl fn_80693798
lbl_fn_8068C4B8_00005700:
    lwz r0, lbl_808803CC
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C4B8_00005720
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068C4B8_00005720:
    lwz r5, lbl_808803CC
    mr r4, r28
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068C4B8_0000573C:
    stw r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C4B8_00005760
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_8068C4B8_0000575C:
    b lbl_fn_8068C4B8_0000575C
lbl_fn_8068C4B8_00005760:
    stb r3, 0x49(r30)
    lwz r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C4B8_00005788
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_8068C4B8_00005784:
    b lbl_fn_8068C4B8_00005784
lbl_fn_8068C4B8_00005788:
    stw r3, 0x40(r30)
    lwz r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C4B8_000057B0
    addi r3, r31, 0x30
    bl fn_806974B4
lbl_fn_8068C4B8_000057AC:
    b lbl_fn_8068C4B8_000057AC
lbl_fn_8068C4B8_000057B0:
    addic. r4, r31, 0x10
    stw r3, 0x3c(r30)
    beq lbl_fn_8068C4B8_000057DC
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068C4B8_000057DC
    bl fn_806952C4
    b lbl_fn_8068C4B8_000057DC
    addi r3, r31, 0x78
    bl fn_806974B4
lbl_fn_8068C4B8_000057D8:
    b lbl_fn_8068C4B8_000057D8
lbl_fn_8068C4B8_000057DC:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807BBB30@ha
    li r4, 0x0
    addi r3, r3, lbl_807BBB30@l
    li r0, 0x1
    stw r3, 0x0(r30)
    mr r10, r31
    mr r3, r30
    stw r29, 0x50(r30)
    stb r4, 0x4d(r30)
    stb r0, 0x4c(r30)
    lmw r27, 0x9c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068C72C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    lis r5, lbl_80779A58@ha
    stw r0, 0xb4(r1)
    li r0, 0x0
    addi r5, r5, lbl_80779A58@l
    stmw r27, 0x9c(r1)
    mr r31, r1
    mr r30, r3
    mr r29, r4
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r30)
    lwz r4, 0x4(r3)
    stw r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8068C72C_000058B4
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8068C72C_000058B4
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068C72C_000058B0:
    b lbl_fn_8068C72C_000058B0
lbl_fn_8068C72C_000058B4:
    lis r3, lbl_807BBCC8@ha
    li r28, 0x0
    addi r3, r3, lbl_807BBCC8@l
    stw r3, 0x0(r30)
    mr r4, r30
    stw r28, 0x24(r30)
    addi r3, r31, 0x10
    stw r28, 0x28(r30)
    stw r28, 0x38(r30)
    stb r28, 0x48(r30)
    stb r28, 0x4a(r30)
    stb r28, 0x4b(r30)
    stb r28, 0x4c(r30)
    stw r28, 0x4(r30)
    stw r28, 0x8(r30)
    stw r28, 0xc(r30)
    stw r28, 0x14(r30)
    stw r28, 0x10(r30)
    stw r28, 0x18(r30)
    stw r28, 0x34(r30)
    stw r28, 0x30(r30)
    stw r28, 0x2c(r30)
    bl fn_8068EA40
    lwz r0, lbl_808803C8
    stb r28, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C72C_00005930
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068C72C_00005930:
    lwz r3, 0x10(r31)
    lwz r27, lbl_808803C8
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_8068C72C_00005958
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068C72C_000059B0
lbl_fn_8068C72C_00005958:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    beq lbl_fn_8068C72C_00005974
    li r4, 0x0
    bl fn_80693744
lbl_fn_8068C72C_00005974:
    lwz r0, lbl_808803C8
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C72C_00005994
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068C72C_00005994:
    lwz r5, lbl_808803C8
    mr r4, r28
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068C72C_000059B0:
    stw r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C72C_000059D4
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_8068C72C_000059D0:
    b lbl_fn_8068C72C_000059D0
lbl_fn_8068C72C_000059D4:
    stb r3, 0x49(r30)
    lwz r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C72C_000059FC
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_8068C72C_000059F8:
    b lbl_fn_8068C72C_000059F8
lbl_fn_8068C72C_000059FC:
    stw r3, 0x40(r30)
    lwz r3, 0x44(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C72C_00005A24
    addi r3, r31, 0x30
    bl fn_806974B4
lbl_fn_8068C72C_00005A20:
    b lbl_fn_8068C72C_00005A20
lbl_fn_8068C72C_00005A24:
    addic. r4, r31, 0x10
    stw r3, 0x3c(r30)
    beq lbl_fn_8068C72C_00005A50
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068C72C_00005A50
    bl fn_806952C4
    b lbl_fn_8068C72C_00005A50
    addi r3, r31, 0x78
    bl fn_806974B4
lbl_fn_8068C72C_00005A4C:
    b lbl_fn_8068C72C_00005A4C
lbl_fn_8068C72C_00005A50:
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lis r3, lbl_807BBC68@ha
    li r4, 0x0
    addi r3, r3, lbl_807BBC68@l
    li r0, 0x1
    stw r3, 0x0(r30)
    mr r10, r31
    mr r3, r30
    stw r29, 0x50(r30)
    stb r4, 0x4d(r30)
    stb r0, 0x4c(r30)
    lmw r27, 0x9c(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068C9A0(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r5, lbl_807BBC2C@ha
    stw r0, 0xd4(r1)
    li r0, 0x0
    addi r5, r5, lbl_807BBC2C@l
    stmw r27, 0xbc(r1)
    mr r31, r1
    mr r30, r3
    mr r27, r4
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r30)
    lwz r4, 0x4(r3)
    stw r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8068C9A0_00005B28
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8068C9A0_00005B28
    addi r3, r31, 0x98
    bl fn_806974B4
lbl_fn_8068C9A0_00005B24:
    b lbl_fn_8068C9A0_00005B24
lbl_fn_8068C9A0_00005B28:
    lis r3, lbl_807BBBE4@ha
    cmpwi r27, 0x0
    li r0, 0x0
    stw r27, 0x24(r30)
    addi r3, r3, lbl_807BBBE4@l
    stw r3, 0x0(r30)
    stw r0, 0x28(r30)
    stb r0, 0x37(r30)
    stb r0, 0x38(r30)
    stb r0, 0x39(r30)
    bne lbl_fn_8068C9A0_00005C08
    lis r27, lbl_8076645C@ha
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r27, r27, lbl_8076645C@l
    addi r28, r31, 0x44
    stw r3, 0x44(r31)
    mr r3, r27
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x48(r31)
    mr r29, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068C9A0_00005BCC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068C9A0_00005BCC:
    li r0, 0x0
    stw r3, 0x4c(r31)
    stw r0, 0x28(r31)
    b lbl_fn_8068C9A0_00005BE0
    bl fn_80084C24
lbl_fn_8068C9A0_00005BE0:
    lwz r3, 0x48(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r28
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068C9A0_00005C08:
    mr r4, r30
    addi r3, r31, 0x30
    bl fn_8068EA10
    lwz r0, lbl_808803CC
    li r3, 0x0
    stb r3, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C9A0_00005C38
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068C9A0_00005C38:
    lwz r3, 0x30(r31)
    lwz r28, lbl_808803CC
    lwz r0, 0x4(r3)
    cmplw r28, r0
    bge lbl_fn_8068C9A0_00005C60
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068C9A0_00005CB8
lbl_fn_8068C9A0_00005C60:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068C9A0_00005C7C
    li r4, 0x0
    bl fn_80693798
lbl_fn_8068C9A0_00005C7C:
    lwz r0, lbl_808803CC
    lwz r3, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068C9A0_00005C9C
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068C9A0_00005C9C:
    lwz r5, lbl_808803CC
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x30(r31)
    slwi r0, r28, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068C9A0_00005CB8:
    stw r3, 0x2c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C9A0_00005CDC
    addi r3, r31, 0x68
    bl fn_806974B4
lbl_fn_8068C9A0_00005CD8:
    b lbl_fn_8068C9A0_00005CD8
lbl_fn_8068C9A0_00005CDC:
    stb r3, 0x36(r30)
    lwz r3, 0x2c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068C9A0_00005D04
    addi r3, r31, 0x80
    bl fn_806974B4
lbl_fn_8068C9A0_00005D00:
    b lbl_fn_8068C9A0_00005D00
lbl_fn_8068C9A0_00005D04:
    cmplwi r3, 0xc
    stw r3, 0x30(r30)
    bgt lbl_fn_8068C9A0_00005D24
    lbz r0, 0x36(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8068C9A0_00005DE0
    cmplwi r3, 0x2
    beq lbl_fn_8068C9A0_00005DE0
lbl_fn_8068C9A0_00005D24:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x10(r31)
    addi r27, r4, 0x54
    addi r28, r31, 0x38
    stw r3, 0x38(r31)
    mr r3, r27
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x3c(r31)
    mr r29, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068C9A0_00005DA4
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068C9A0_00005DA4:
    li r0, 0x0
    stw r3, 0x40(r31)
    stw r0, 0x20(r31)
    b lbl_fn_8068C9A0_00005DB8
    bl fn_80084C24
lbl_fn_8068C9A0_00005DB8:
    lwz r3, 0x3c(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r28
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068C9A0_00005DE0:
    addic. r3, r31, 0x30
    beq lbl_fn_8068C9A0_00005E08
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068C9A0_00005E08
    bl fn_806952C4
    b lbl_fn_8068C9A0_00005E08
    addi r3, r31, 0x50
    bl fn_806974B4
lbl_fn_8068C9A0_00005E04:
    b lbl_fn_8068C9A0_00005E04
lbl_fn_8068C9A0_00005E08:
    mr r10, r31
    mr r3, r30
    lmw r27, 0xbc(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068CD1C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8068CD24(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_8068CD2C(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    lis r5, lbl_80779A58@ha
    stw r0, 0xd4(r1)
    li r0, 0x0
    addi r5, r5, lbl_80779A58@l
    stmw r27, 0xbc(r1)
    mr r31, r1
    mr r30, r3
    mr r27, r4
    stw r5, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    bl fn_806926D4
    lwz r0, 0x0(r3)
    stw r0, 0x1c(r30)
    lwz r4, 0x4(r3)
    stw r4, 0x20(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8068CD2C_00005EB4
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
    b lbl_fn_8068CD2C_00005EB4
    addi r3, r31, 0x98
    bl fn_806974B4
lbl_fn_8068CD2C_00005EB0:
    b lbl_fn_8068CD2C_00005EB0
lbl_fn_8068CD2C_00005EB4:
    lis r3, lbl_807BBD1C@ha
    cmpwi r27, 0x0
    li r0, 0x0
    stw r27, 0x24(r30)
    addi r3, r3, lbl_807BBD1C@l
    stw r3, 0x0(r30)
    stw r0, 0x28(r30)
    stb r0, 0x36(r30)
    stb r0, 0x37(r30)
    stb r0, 0x38(r30)
    bne lbl_fn_8068CD2C_00005F94
    lis r27, lbl_8076645C@ha
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r27, r27, lbl_8076645C@l
    addi r28, r31, 0x44
    stw r3, 0x44(r31)
    mr r3, r27
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x48(r31)
    mr r29, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068CD2C_00005F58
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068CD2C_00005F58:
    li r0, 0x0
    stw r3, 0x4c(r31)
    stw r0, 0x28(r31)
    b lbl_fn_8068CD2C_00005F6C
    bl fn_80084C24
lbl_fn_8068CD2C_00005F6C:
    lwz r3, 0x48(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r28
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068CD2C_00005F94:
    mr r4, r30
    addi r3, r31, 0x30
    bl fn_8068EA40
    lwz r0, lbl_808803C8
    li r3, 0x0
    stb r3, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068CD2C_00005FC4
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068CD2C_00005FC4:
    lwz r3, 0x30(r31)
    lwz r28, lbl_808803C8
    lwz r0, 0x4(r3)
    cmplw r28, r0
    bge lbl_fn_8068CD2C_00005FEC
    lwz r3, 0x0(r3)
    slwi r0, r28, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068CD2C_00006044
lbl_fn_8068CD2C_00005FEC:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068CD2C_00006008
    li r4, 0x0
    bl fn_80693744
lbl_fn_8068CD2C_00006008:
    lwz r0, lbl_808803C8
    lwz r3, 0x30(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068CD2C_00006028
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068CD2C_00006028:
    lwz r5, lbl_808803C8
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x30(r31)
    slwi r0, r28, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068CD2C_00006044:
    stw r3, 0x2c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068CD2C_00006068
    addi r3, r31, 0x68
    bl fn_806974B4
lbl_fn_8068CD2C_00006064:
    b lbl_fn_8068CD2C_00006064
lbl_fn_8068CD2C_00006068:
    stb r3, 0x35(r30)
    lwz r3, 0x2c(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068CD2C_00006090
    addi r3, r31, 0x80
    bl fn_806974B4
lbl_fn_8068CD2C_0000608C:
    b lbl_fn_8068CD2C_0000608C
lbl_fn_8068CD2C_00006090:
    cmplwi r3, 0xc
    stw r3, 0x30(r30)
    bgt lbl_fn_8068CD2C_000060B0
    lbz r0, 0x35(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8068CD2C_0000616C
    cmplwi r3, 0x1
    beq lbl_fn_8068CD2C_0000616C
lbl_fn_8068CD2C_000060B0:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x10(r31)
    addi r27, r4, 0x54
    addi r28, r31, 0x38
    stw r3, 0x38(r31)
    mr r3, r27
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x3c(r31)
    mr r29, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068CD2C_00006130
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068CD2C_00006130:
    li r0, 0x0
    stw r3, 0x40(r31)
    stw r0, 0x20(r31)
    b lbl_fn_8068CD2C_00006144
    bl fn_80084C24
lbl_fn_8068CD2C_00006144:
    lwz r3, 0x3c(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r28
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068CD2C_0000616C:
    addic. r3, r31, 0x30
    beq lbl_fn_8068CD2C_00006194
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068CD2C_00006194
    bl fn_806952C4
    b lbl_fn_8068CD2C_00006194
    addi r3, r31, 0x50
    bl fn_806974B4
lbl_fn_8068CD2C_00006190:
    b lbl_fn_8068CD2C_00006190
lbl_fn_8068CD2C_00006194:
    mr r10, r31
    mr r3, r30
    lmw r27, 0xbc(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068D0A8(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8068D0B0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8068D0B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068D0B8_00006254
    lbz r0, 0x4b(r3)
    lis r4, lbl_807BBB90@ha
    addi r4, r4, lbl_807BBB90@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068D0B8_00006210
    lwz r3, 0x28(r3)
    bl fn_80084C24
lbl_fn_8068D0B8_00006210:
    cmpwi r29, 0x0
    beq lbl_fn_8068D0B8_00006244
    addic. r3, r29, 0x1c
    beq lbl_fn_8068D0B8_00006244
    beq lbl_fn_8068D0B8_00006244
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068D0B8_00006244
    bl fn_806952C4
    b lbl_fn_8068D0B8_00006244
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068D0B8_00006240:
    b lbl_fn_8068D0B8_00006240
lbl_fn_8068D0B8_00006244:
    extsh. r0, r30
    ble lbl_fn_8068D0B8_00006254
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068D0B8_00006254:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068D170(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r6, 0x14(r3)
    lwz r12, 0x0(r3)
    neg r0, r6
    or r0, r0, r6
    lwz r12, 0x1c(r12)
    srwi r31, r0, 31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068D170_000062D4
    li r3, 0x0
    b lbl_fn_8068D170_0000648C
lbl_fn_8068D170_000062D4:
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x8(r29)
    stw r0, 0xc(r29)
    stw r0, 0x14(r29)
    stw r0, 0x10(r29)
    stw r0, 0x18(r29)
    stw r0, 0x34(r29)
    stw r0, 0x30(r29)
    stw r0, 0x2c(r29)
    bne lbl_fn_8068D170_00006384
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068D170_00006318
    lwz r3, 0x28(r29)
    bl fn_80084C24
lbl_fn_8068D170_00006318:
    li r0, 0x0
    stw r0, 0x28(r29)
    addi r4, r1, 0xc
    stw r30, 0x8(r1)
    lwz r0, 0x3c(r29)
    clrlwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplw r0, r30
    bge lbl_fn_8068D170_00006340
    addi r4, r1, 0x8
lbl_fn_8068D170_00006340:
    lwz r3, 0x0(r4)
    lwz r0, lbl_8087EC20
    cmplw r3, r0
    bge lbl_fn_8068D170_00006354
    la r4, lbl_8087EC20
lbl_fn_8068D170_00006354:
    lwz r0, 0x0(r4)
    stw r0, 0x24(r29)
    slwi r3, r0, 1
    bl fn_80084A78
    neg r0, r30
    li r4, 0x1
    or r0, r0, r30
    stw r3, 0x28(r29)
    srwi r0, r0, 31
    stb r4, 0x4b(r29)
    stb r0, 0x4a(r29)
    b lbl_fn_8068D170_000063D4
lbl_fn_8068D170_00006384:
    lwz r0, 0x3c(r29)
    slwi r3, r0, 1
    extrwi r0, r0, 1, 1
    add r0, r0, r3
    srawi r0, r0, 1
    cmpw r30, r0
    bge lbl_fn_8068D170_000063A8
    li r3, 0x0
    b lbl_fn_8068D170_0000648C
lbl_fn_8068D170_000063A8:
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068D170_000063BC
    lwz r3, 0x28(r29)
    bl fn_80084C24
lbl_fn_8068D170_000063BC:
    li r3, 0x0
    li r0, 0x1
    stw r28, 0x28(r29)
    stw r30, 0x24(r29)
    stb r3, 0x4b(r29)
    stb r0, 0x4a(r29)
lbl_fn_8068D170_000063D4:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068D170_00006488
    cmpwi r31, 0x0
    beq lbl_fn_8068D170_00006488
    lbz r0, 0x49(r29)
    li r3, 0x0
    lwz r6, 0x28(r29)
    cmpwi r0, 0x0
    stw r3, 0x4(r29)
    mr r4, r6
    stw r3, 0x8(r29)
    stw r3, 0xc(r29)
    bne lbl_fn_8068D170_00006434
    lwz r3, 0x3c(r29)
    addi r4, r6, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_8068D170_00006434
    lwz r5, 0x24(r29)
    slwi r0, r5, 1
    divwu r0, r0, r3
    subf r0, r0, r5
    slwi r0, r0, 1
    add r4, r4, r0
lbl_fn_8068D170_00006434:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068D170_00006460
    lwz r0, 0x24(r29)
    stw r4, 0x14(r29)
    slwi r0, r0, 1
    add r3, r6, r0
    stw r4, 0x10(r29)
    subi r3, r3, 0x2
    stw r3, 0x18(r29)
    b lbl_fn_8068D170_0000646C
lbl_fn_8068D170_00006460:
    stw r4, 0x14(r29)
    stw r4, 0x10(r29)
    stw r4, 0x18(r29)
lbl_fn_8068D170_0000646C:
    lwz r0, 0x24(r29)
    lwz r3, 0x28(r29)
    slwi r0, r0, 1
    stw r3, 0x30(r29)
    add r0, r3, r0
    stw r3, 0x2c(r29)
    stw r0, 0x34(r29)
lbl_fn_8068D170_00006488:
    mr r3, r29
lbl_fn_8068D170_0000648C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068D3A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068D3A0_000064E4
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068D414
    cmpwi r3, 0x0
    bge lbl_fn_8068D3A0_00006504
    li r3, -0x1
    b lbl_fn_8068D3A0_00006508
lbl_fn_8068D3A0_000064E4:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068D3A0_00006504
    bl fn_8068D7B8
    cmpwi r3, 0x0
    bge lbl_fn_8068D3A0_00006504
    li r3, -0x1
    b lbl_fn_8068D3A0_00006508
lbl_fn_8068D3A0_00006504:
    li r3, 0x0
lbl_fn_8068D3A0_00006508:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068D40C(void)
{
    nofralloc
    li r3, 0x2
    blr
}

asm void fn_8068D414(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x49(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_000065AC
    lwz r0, 0x14(r3)
    stw r0, 0x30(r3)
    b lbl_fn_8068D414_00006588
lbl_fn_8068D414_00006554:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068D414_0000657C
    li r0, -0x1
    b lbl_fn_8068D414_0000659C
lbl_fn_8068D414_0000657C:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068D414_00006588:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068D414_00006554
    li r0, 0x0
lbl_fn_8068D414_0000659C:
    cmpwi r0, -0x1
    bne lbl_fn_8068D414_000067C0
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
lbl_fn_8068D414_000065AC:
    lwz r29, 0x10(r3)
    li r30, 0x0
    b lbl_fn_8068D414_000066F4
lbl_fn_8068D414_000065B8:
    lwz r3, 0x44(r31)
    mr r5, r29
    addi r4, r31, 0x38
    addi r7, r1, 0x8
    lwz r12, 0x0(r3)
    subi r9, r6, 0x2
    addi r10, r31, 0x30
    lwz r8, 0x2c(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068D414_0000660C
    cmpwi r0, 0x3
    beq lbl_fn_8068D414_00006614
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_00006624
    cmpwi r0, 0x1
    beq lbl_fn_8068D414_000066C0
    b lbl_fn_8068D414_000066F0
lbl_fn_8068D414_0000660C:
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
lbl_fn_8068D414_00006614:
    lwz r0, 0x14(r31)
    stw r29, 0x2c(r31)
    stw r0, 0x30(r31)
    stw r0, 0x8(r1)
lbl_fn_8068D414_00006624:
    lbz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_000066C0
    lwz r6, 0x34(r31)
    lwz r5, 0x30(r31)
    cmplw r5, r6
    bge lbl_fn_8068D414_000066C0
    lwz r3, 0x44(r31)
    addi r4, r31, 0x38
    addi r7, r31, 0x30
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068D414_0000667C
    cmpwi r0, 0x3
    beq lbl_fn_8068D414_00006684
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_00006684
    b lbl_fn_8068D414_000066C0
lbl_fn_8068D414_0000667C:
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
lbl_fn_8068D414_00006684:
    stb r30, 0x48(r31)
    b lbl_fn_8068D414_000066C0
lbl_fn_8068D414_0000668C:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068D414_000066B4
    li r0, -0x1
    b lbl_fn_8068D414_000066D4
lbl_fn_8068D414_000066B4:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068D414_000066C0:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068D414_0000668C
    li r0, 0x0
lbl_fn_8068D414_000066D4:
    cmpwi r0, -0x1
    bne lbl_fn_8068D414_000066E4
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
lbl_fn_8068D414_000066E4:
    lwz r0, 0x28(r31)
    stw r0, 0x30(r31)
    stw r0, 0x2c(r31)
lbl_fn_8068D414_000066F0:
    lwz r29, 0x8(r1)
lbl_fn_8068D414_000066F4:
    lwz r6, 0x14(r31)
    cmplw r29, r6
    blt lbl_fn_8068D414_000065B8
    lbz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_000067C0
lbl_fn_8068D414_0000670C:
    lwz r3, 0x44(r31)
    addi r4, r31, 0x38
    addi r7, r31, 0x30
    lwz r5, 0x2c(r31)
    lwz r12, 0x0(r3)
    lwz r6, 0x34(r31)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    mr r30, r3
    cmplwi r0, 0x1
    ble lbl_fn_8068D414_00006788
    cmpwi r0, 0x2
    bne lbl_fn_8068D414_000067AC
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
    b lbl_fn_8068D414_00006788
lbl_fn_8068D414_00006754:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068D414_0000677C
    li r0, -0x1
    b lbl_fn_8068D414_0000679C
lbl_fn_8068D414_0000677C:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068D414_00006788:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068D414_00006754
    li r0, 0x0
lbl_fn_8068D414_0000679C:
    cmpwi r0, -0x1
    bne lbl_fn_8068D414_000067AC
    li r3, -0x1
    b lbl_fn_8068D414_0000689C
lbl_fn_8068D414_000067AC:
    clrlwi r0, r30, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068D414_0000670C
    li r0, 0x0
    stb r0, 0x48(r31)
lbl_fn_8068D414_000067C0:
    lbz r0, 0x4a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_00006870
    lbz r0, 0x49(r31)
    li r3, 0x0
    lwz r6, 0x28(r31)
    cmpwi r0, 0x0
    stw r3, 0x4(r31)
    mr r4, r6
    stw r3, 0x8(r31)
    stw r3, 0xc(r31)
    bne lbl_fn_8068D414_00006818
    lwz r3, 0x3c(r31)
    addi r4, r6, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_8068D414_00006818
    lwz r5, 0x24(r31)
    slwi r0, r5, 1
    divwu r0, r0, r3
    subf r0, r0, r5
    slwi r0, r0, 1
    add r4, r4, r0
lbl_fn_8068D414_00006818:
    lbz r0, 0x4a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068D414_00006844
    lwz r0, 0x24(r31)
    stw r4, 0x14(r31)
    slwi r0, r0, 1
    add r3, r6, r0
    stw r4, 0x10(r31)
    subi r3, r3, 0x2
    stw r3, 0x18(r31)
    b lbl_fn_8068D414_00006850
lbl_fn_8068D414_00006844:
    stw r4, 0x14(r31)
    stw r4, 0x10(r31)
    stw r4, 0x18(r31)
lbl_fn_8068D414_00006850:
    lwz r0, 0x24(r31)
    lwz r3, 0x28(r31)
    slwi r0, r0, 1
    stw r3, 0x30(r31)
    add r0, r3, r0
    stw r3, 0x2c(r31)
    stw r0, 0x34(r31)
    b lbl_fn_8068D414_00006898
lbl_fn_8068D414_00006870:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
    stw r0, 0x14(r31)
    stw r0, 0x10(r31)
    stw r0, 0x18(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
    stw r0, 0x2c(r31)
lbl_fn_8068D414_00006898:
    li r3, 0x0
lbl_fn_8068D414_0000689C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068D7AC(void)
{
    nofralloc
    stw r5, 0x0(r7)
    li r3, 0x3
    blr
}

asm void fn_8068D7B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r28, r3
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8068D7B8_000068FC
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    cmplw r4, r0
    bge lbl_fn_8068D7B8_000068FC
    li r3, -0x1
    b lbl_fn_8068D7B8_00006AB4
lbl_fn_8068D7B8_000068FC:
    lwz r0, 0x24(r3)
    lwz r7, 0xc(r3)
    lwz r29, 0x8(r3)
    slwi r0, r0, 1
    lwz r4, 0x28(r3)
    lwz r6, 0x30(r3)
    cmplw r29, r7
    lwz r5, 0x34(r3)
    add r30, r4, r0
    stw r30, 0x30(r3)
    subf r31, r6, r5
    stw r30, 0x34(r3)
    bge lbl_fn_8068D7B8_00006A28
    lwz r4, 0x40(r3)
    cmpwi r4, 0x0
    bne lbl_fn_8068D7B8_00006A10
    subf r3, r29, r7
    mr r4, r29
    srwi r0, r3, 31
    add r0, r0, r3
    clrrwi r5, r0, 1
    subf r27, r5, r30
    stw r27, 0xc(r1)
    mr r3, r27
    bl memmove
lbl_fn_8068D7B8_00006960:
    lwz r3, 0x44(r28)
    mr r6, r30
    mr r8, r29
    mr r9, r27
    lwz r12, 0x0(r3)
    addi r4, r28, 0x38
    addi r7, r1, 0xc
    addi r10, r1, 0x8
    lwz r12, 0xc(r12)
    lwz r5, 0xc(r1)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068D7B8_000069B8
    cmpwi r0, 0x3
    beq lbl_fn_8068D7B8_000069C0
    cmpwi r0, 0x1
    beq lbl_fn_8068D7B8_000069DC
    cmpwi r0, 0x0
    beq lbl_fn_8068D7B8_000069F4
    b lbl_fn_8068D7B8_00006A00
lbl_fn_8068D7B8_000069B8:
    li r3, -0x1
    b lbl_fn_8068D7B8_00006AB4
lbl_fn_8068D7B8_000069C0:
    lwz r0, 0xc(r1)
    subf r4, r0, r30
    srwi r0, r4, 31
    add r0, r0, r4
    clrrwi r0, r0, 1
    add r31, r31, r0
    b lbl_fn_8068D7B8_00006A00
lbl_fn_8068D7B8_000069DC:
    lwz r0, 0x8(r1)
    cmplw r0, r29
    bne lbl_fn_8068D7B8_000069F0
    li r3, -0x1
    b lbl_fn_8068D7B8_00006AB4
lbl_fn_8068D7B8_000069F0:
    lwz r27, 0xc(r1)
lbl_fn_8068D7B8_000069F4:
    lwz r0, 0x8(r1)
    subf r0, r29, r0
    add r31, r31, r0
lbl_fn_8068D7B8_00006A00:
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068D7B8_00006960
    b lbl_fn_8068D7B8_00006A28
lbl_fn_8068D7B8_00006A10:
    subf r3, r29, r7
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    mullw r0, r4, r0
    add r31, r31, r0
lbl_fn_8068D7B8_00006A28:
    cmpwi r31, 0x0
    ble lbl_fn_8068D7B8_00006A98
    lbz r0, 0x4d(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8068D7B8_00006A74
    lwz r3, 0xc(r28)
    lwz r4, 0x8(r28)
    addi r0, r3, 0x1
    subf r0, r4, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_8068D7B8_00006A74
lbl_fn_8068D7B8_00006A5C:
    lhz r0, 0x0(r4)
    cmplwi r0, 0xa
    bne lbl_fn_8068D7B8_00006A6C
    addi r31, r31, 0x1
lbl_fn_8068D7B8_00006A6C:
    addi r4, r4, 0x2
    bdnz lbl_fn_8068D7B8_00006A5C
lbl_fn_8068D7B8_00006A74:
    lwz r12, 0x0(r28)
    neg r6, r31
    mr r3, r28
    li r7, 0x1
    lwz r12, 0x44(r12)
    srawi r5, r6, 31
    mtctr r12
    bctrl
    mr r31, r4
lbl_fn_8068D7B8_00006A98:
    cmpwi r31, 0x0
    bge lbl_fn_8068D7B8_00006AA8
    li r3, -0x1
    b lbl_fn_8068D7B8_00006AB4
lbl_fn_8068D7B8_00006AA8:
    lwz r4, 0x8(r28)
    li r3, 0x0
    stw r4, 0xc(r28)
lbl_fn_8068D7B8_00006AB4:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8068D9BC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8068D9BC_00006B58
    lbz r0, 0x4b(r3)
    lis r4, lbl_807BBCC8@ha
    addi r4, r4, lbl_807BBCC8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068D9BC_00006B14
    lwz r3, 0x28(r3)
    bl fn_80084C24
lbl_fn_8068D9BC_00006B14:
    cmpwi r29, 0x0
    beq lbl_fn_8068D9BC_00006B48
    addic. r3, r29, 0x1c
    beq lbl_fn_8068D9BC_00006B48
    beq lbl_fn_8068D9BC_00006B48
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068D9BC_00006B48
    bl fn_806952C4
    b lbl_fn_8068D9BC_00006B48
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8068D9BC_00006B44:
    b lbl_fn_8068D9BC_00006B44
lbl_fn_8068D9BC_00006B48:
    extsh. r0, r30
    ble lbl_fn_8068D9BC_00006B58
    mr r3, r29
    bl dtor_80084684
lbl_fn_8068D9BC_00006B58:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068DA74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r3
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r6, 0x14(r3)
    lwz r12, 0x0(r3)
    neg r0, r6
    or r0, r0, r6
    lwz r12, 0x1c(r12)
    srwi r31, r0, 31
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068DA74_00006BD8
    li r3, 0x0
    b lbl_fn_8068DA74_00006D70
lbl_fn_8068DA74_00006BD8:
    cmpwi r28, 0x0
    li r0, 0x0
    stw r0, 0x4(r29)
    stw r0, 0x8(r29)
    stw r0, 0xc(r29)
    stw r0, 0x14(r29)
    stw r0, 0x10(r29)
    stw r0, 0x18(r29)
    stw r0, 0x34(r29)
    stw r0, 0x30(r29)
    stw r0, 0x2c(r29)
    bne lbl_fn_8068DA74_00006C84
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068DA74_00006C1C
    lwz r3, 0x28(r29)
    bl fn_80084C24
lbl_fn_8068DA74_00006C1C:
    li r0, 0x0
    stw r0, 0x28(r29)
    addi r4, r1, 0xc
    stw r30, 0x8(r1)
    lwz r0, 0x3c(r29)
    slwi r0, r0, 1
    stw r0, 0xc(r1)
    cmplw r0, r30
    bge lbl_fn_8068DA74_00006C44
    addi r4, r1, 0x8
lbl_fn_8068DA74_00006C44:
    lwz r3, 0x0(r4)
    lwz r0, lbl_8087EC24
    cmplw r3, r0
    bge lbl_fn_8068DA74_00006C58
    la r4, lbl_8087EC24
lbl_fn_8068DA74_00006C58:
    lwz r3, 0x0(r4)
    stw r3, 0x24(r29)
    bl fn_80084A78
    neg r0, r30
    li r4, 0x1
    or r0, r0, r30
    stw r3, 0x28(r29)
    srwi r0, r0, 31
    stb r4, 0x4b(r29)
    stb r0, 0x4a(r29)
    b lbl_fn_8068DA74_00006CC8
lbl_fn_8068DA74_00006C84:
    lwz r0, 0x3c(r29)
    slwi r0, r0, 1
    cmpw r30, r0
    bge lbl_fn_8068DA74_00006C9C
    li r3, 0x0
    b lbl_fn_8068DA74_00006D70
lbl_fn_8068DA74_00006C9C:
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068DA74_00006CB0
    lwz r3, 0x28(r29)
    bl fn_80084C24
lbl_fn_8068DA74_00006CB0:
    li r3, 0x0
    li r0, 0x1
    stw r28, 0x28(r29)
    stw r30, 0x24(r29)
    stb r3, 0x4b(r29)
    stb r0, 0x4a(r29)
lbl_fn_8068DA74_00006CC8:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068DA74_00006D6C
    cmpwi r31, 0x0
    beq lbl_fn_8068DA74_00006D6C
    lbz r0, 0x49(r29)
    li r3, 0x0
    lwz r5, 0x28(r29)
    cmpwi r0, 0x0
    stw r3, 0x4(r29)
    mr r4, r5
    stw r3, 0x8(r29)
    stw r3, 0xc(r29)
    bne lbl_fn_8068DA74_00006D20
    lwz r0, 0x3c(r29)
    addi r4, r5, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_8068DA74_00006D20
    lwz r3, 0x24(r29)
    divwu r0, r3, r0
    subf r0, r0, r3
    add r4, r4, r0
lbl_fn_8068DA74_00006D20:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068DA74_00006D48
    lwz r0, 0x24(r29)
    stw r4, 0x14(r29)
    add r3, r5, r0
    subi r3, r3, 0x1
    stw r4, 0x10(r29)
    stw r3, 0x18(r29)
    b lbl_fn_8068DA74_00006D54
lbl_fn_8068DA74_00006D48:
    stw r4, 0x14(r29)
    stw r4, 0x10(r29)
    stw r4, 0x18(r29)
lbl_fn_8068DA74_00006D54:
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    stw r3, 0x30(r29)
    add r0, r3, r0
    stw r3, 0x2c(r29)
    stw r0, 0x34(r29)
lbl_fn_8068DA74_00006D6C:
    mr r3, r29
lbl_fn_8068DA74_00006D70:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068DC84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068DC84_00006DC8
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068DCF8
    cmpwi r3, 0x0
    bge lbl_fn_8068DC84_00006DE8
    li r3, -0x1
    b lbl_fn_8068DC84_00006DEC
lbl_fn_8068DC84_00006DC8:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068DC84_00006DE8
    bl fn_8068E09C
    cmpwi r3, 0x0
    bge lbl_fn_8068DC84_00006DE8
    li r3, -0x1
    b lbl_fn_8068DC84_00006DEC
lbl_fn_8068DC84_00006DE8:
    li r3, 0x0
lbl_fn_8068DC84_00006DEC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068DCF0(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8068DCF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lbz r0, 0x49(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_00006E90
    lwz r0, 0x14(r3)
    stw r0, 0x30(r3)
    b lbl_fn_8068DCF8_00006E6C
lbl_fn_8068DCF8_00006E38:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068DCF8_00006E60
    li r0, -0x1
    b lbl_fn_8068DCF8_00006E80
lbl_fn_8068DCF8_00006E60:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068DCF8_00006E6C:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068DCF8_00006E38
    li r0, 0x0
lbl_fn_8068DCF8_00006E80:
    cmpwi r0, -0x1
    bne lbl_fn_8068DCF8_000070A4
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
lbl_fn_8068DCF8_00006E90:
    lwz r29, 0x10(r3)
    li r30, 0x0
    b lbl_fn_8068DCF8_00006FD8
lbl_fn_8068DCF8_00006E9C:
    lwz r3, 0x44(r31)
    mr r5, r29
    addi r4, r31, 0x38
    addi r7, r1, 0x8
    lwz r12, 0x0(r3)
    subi r9, r6, 0x1
    addi r10, r31, 0x30
    lwz r8, 0x2c(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068DCF8_00006EF0
    cmpwi r0, 0x3
    beq lbl_fn_8068DCF8_00006EF8
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_00006F08
    cmpwi r0, 0x1
    beq lbl_fn_8068DCF8_00006FA4
    b lbl_fn_8068DCF8_00006FD4
lbl_fn_8068DCF8_00006EF0:
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
lbl_fn_8068DCF8_00006EF8:
    lwz r0, 0x14(r31)
    stw r29, 0x2c(r31)
    stw r0, 0x30(r31)
    stw r0, 0x8(r1)
lbl_fn_8068DCF8_00006F08:
    lbz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_00006FA4
    lwz r6, 0x34(r31)
    lwz r5, 0x30(r31)
    cmplw r5, r6
    bge lbl_fn_8068DCF8_00006FA4
    lwz r3, 0x44(r31)
    addi r4, r31, 0x38
    addi r7, r31, 0x30
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068DCF8_00006F60
    cmpwi r0, 0x3
    beq lbl_fn_8068DCF8_00006F68
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_00006F68
    b lbl_fn_8068DCF8_00006FA4
lbl_fn_8068DCF8_00006F60:
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
lbl_fn_8068DCF8_00006F68:
    stb r30, 0x48(r31)
    b lbl_fn_8068DCF8_00006FA4
lbl_fn_8068DCF8_00006F70:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068DCF8_00006F98
    li r0, -0x1
    b lbl_fn_8068DCF8_00006FB8
lbl_fn_8068DCF8_00006F98:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068DCF8_00006FA4:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068DCF8_00006F70
    li r0, 0x0
lbl_fn_8068DCF8_00006FB8:
    cmpwi r0, -0x1
    bne lbl_fn_8068DCF8_00006FC8
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
lbl_fn_8068DCF8_00006FC8:
    lwz r0, 0x28(r31)
    stw r0, 0x30(r31)
    stw r0, 0x2c(r31)
lbl_fn_8068DCF8_00006FD4:
    lwz r29, 0x8(r1)
lbl_fn_8068DCF8_00006FD8:
    lwz r6, 0x14(r31)
    cmplw r29, r6
    blt lbl_fn_8068DCF8_00006E9C
    lbz r0, 0x48(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_000070A4
lbl_fn_8068DCF8_00006FF0:
    lwz r3, 0x44(r31)
    addi r4, r31, 0x38
    addi r7, r31, 0x30
    lwz r5, 0x2c(r31)
    lwz r12, 0x0(r3)
    lwz r6, 0x34(r31)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    mr r30, r3
    cmplwi r0, 0x1
    ble lbl_fn_8068DCF8_0000706C
    cmpwi r0, 0x2
    bne lbl_fn_8068DCF8_00007090
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
    b lbl_fn_8068DCF8_0000706C
lbl_fn_8068DCF8_00007038:
    lwz r12, 0x0(r31)
    mr r3, r31
    subf r5, r4, r0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8068DCF8_00007060
    li r0, -0x1
    b lbl_fn_8068DCF8_00007080
lbl_fn_8068DCF8_00007060:
    lwz r0, 0x2c(r31)
    add r0, r0, r3
    stw r0, 0x2c(r31)
lbl_fn_8068DCF8_0000706C:
    lwz r0, 0x30(r31)
    lwz r4, 0x2c(r31)
    cmplw r4, r0
    blt lbl_fn_8068DCF8_00007038
    li r0, 0x0
lbl_fn_8068DCF8_00007080:
    cmpwi r0, -0x1
    bne lbl_fn_8068DCF8_00007090
    li r3, -0x1
    b lbl_fn_8068DCF8_00007170
lbl_fn_8068DCF8_00007090:
    clrlwi r0, r30, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068DCF8_00006FF0
    li r0, 0x0
    stb r0, 0x48(r31)
lbl_fn_8068DCF8_000070A4:
    lbz r0, 0x4a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_00007144
    lbz r0, 0x49(r31)
    li r3, 0x0
    lwz r5, 0x28(r31)
    cmpwi r0, 0x0
    stw r3, 0x4(r31)
    mr r4, r5
    stw r3, 0x8(r31)
    stw r3, 0xc(r31)
    bne lbl_fn_8068DCF8_000070F4
    lwz r0, 0x3c(r31)
    addi r4, r5, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_8068DCF8_000070F4
    lwz r3, 0x24(r31)
    divwu r0, r3, r0
    subf r0, r0, r3
    add r4, r4, r0
lbl_fn_8068DCF8_000070F4:
    lbz r0, 0x4a(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8068DCF8_0000711C
    lwz r0, 0x24(r31)
    stw r4, 0x14(r31)
    add r3, r5, r0
    subi r3, r3, 0x1
    stw r4, 0x10(r31)
    stw r3, 0x18(r31)
    b lbl_fn_8068DCF8_00007128
lbl_fn_8068DCF8_0000711C:
    stw r4, 0x14(r31)
    stw r4, 0x10(r31)
    stw r4, 0x18(r31)
lbl_fn_8068DCF8_00007128:
    lwz r3, 0x28(r31)
    lwz r0, 0x24(r31)
    stw r3, 0x30(r31)
    add r0, r3, r0
    stw r3, 0x2c(r31)
    stw r0, 0x34(r31)
    b lbl_fn_8068DCF8_0000716C
lbl_fn_8068DCF8_00007144:
    li r0, 0x0
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
    stw r0, 0x14(r31)
    stw r0, 0x10(r31)
    stw r0, 0x18(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
    stw r0, 0x2c(r31)
lbl_fn_8068DCF8_0000716C:
    li r3, 0x0
lbl_fn_8068DCF8_00007170:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068E080(void)
{
    nofralloc
    stw r5, 0x0(r7)
    li r3, 0x3
    stw r8, 0x0(r10)
    blr
}

asm void fn_8068E090(void)
{
    nofralloc
    stw r5, 0x0(r7)
    li r3, 0x3
    blr
}

asm void fn_8068E09C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r30, r3
    lwz r0, 0x40(r3)
    cmpwi r0, 0x0
    bge lbl_fn_8068E09C_000071E0
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    cmplw r4, r0
    bge lbl_fn_8068E09C_000071E0
    li r3, -0x1
    b lbl_fn_8068E09C_00007368
lbl_fn_8068E09C_000071E0:
    lwz r7, 0xc(r3)
    lwz r28, 0x8(r3)
    lwz r6, 0x30(r3)
    lwz r5, 0x34(r3)
    cmplw r28, r7
    lwz r4, 0x28(r3)
    lwz r0, 0x24(r3)
    subf r31, r6, r5
    add r29, r4, r0
    stw r29, 0x34(r3)
    stw r29, 0x30(r3)
    bge lbl_fn_8068E09C_000072E4
    lwz r3, 0x40(r3)
    cmpwi r3, 0x0
    bne lbl_fn_8068E09C_000072D8
    subf r5, r28, r7
    mr r4, r28
    subf r27, r5, r29
    stw r27, 0xc(r1)
    mr r3, r27
    bl memmove
lbl_fn_8068E09C_00007234:
    lwz r3, 0x44(r30)
    mr r6, r29
    mr r8, r28
    mr r9, r27
    lwz r12, 0x0(r3)
    addi r4, r30, 0x38
    addi r7, r1, 0xc
    addi r10, r1, 0x8
    lwz r12, 0xc(r12)
    lwz r5, 0xc(r1)
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    cmpwi r0, 0x2
    beq lbl_fn_8068E09C_0000728C
    cmpwi r0, 0x3
    beq lbl_fn_8068E09C_00007294
    cmpwi r0, 0x1
    beq lbl_fn_8068E09C_000072A4
    cmpwi r0, 0x0
    beq lbl_fn_8068E09C_000072BC
    b lbl_fn_8068E09C_000072C8
lbl_fn_8068E09C_0000728C:
    li r3, -0x1
    b lbl_fn_8068E09C_00007368
lbl_fn_8068E09C_00007294:
    lwz r0, 0xc(r1)
    subf r0, r0, r29
    add r31, r31, r0
    b lbl_fn_8068E09C_000072C8
lbl_fn_8068E09C_000072A4:
    lwz r0, 0x8(r1)
    cmplw r0, r28
    bne lbl_fn_8068E09C_000072B8
    li r3, -0x1
    b lbl_fn_8068E09C_00007368
lbl_fn_8068E09C_000072B8:
    lwz r27, 0xc(r1)
lbl_fn_8068E09C_000072BC:
    lwz r0, 0x8(r1)
    subf r0, r28, r0
    add r31, r31, r0
lbl_fn_8068E09C_000072C8:
    clrlwi r0, r3, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068E09C_00007234
    b lbl_fn_8068E09C_000072E4
lbl_fn_8068E09C_000072D8:
    subf r0, r28, r7
    mullw r0, r3, r0
    add r31, r31, r0
lbl_fn_8068E09C_000072E4:
    cmpwi r31, 0x0
    ble lbl_fn_8068E09C_0000734C
    lbz r0, 0x4d(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8068E09C_00007328
    lwz r4, 0x8(r30)
    lwz r3, 0xc(r30)
    subf r0, r4, r3
    mtctr r0
    cmplw r4, r3
    bge lbl_fn_8068E09C_00007328
lbl_fn_8068E09C_00007310:
    lbz r0, 0x0(r4)
    cmpwi r0, 0xa
    bne lbl_fn_8068E09C_00007320
    addi r31, r31, 0x1
lbl_fn_8068E09C_00007320:
    addi r4, r4, 0x1
    bdnz lbl_fn_8068E09C_00007310
lbl_fn_8068E09C_00007328:
    lwz r12, 0x0(r30)
    neg r6, r31
    mr r3, r30
    li r7, 0x1
    lwz r12, 0x44(r12)
    srawi r5, r6, 31
    mtctr r12
    bctrl
    mr r31, r4
lbl_fn_8068E09C_0000734C:
    cmpwi r31, 0x0
    bge lbl_fn_8068E09C_0000735C
    li r3, -0x1
    b lbl_fn_8068E09C_00007368
lbl_fn_8068E09C_0000735C:
    lwz r4, 0x8(r30)
    li r3, 0x0
    stw r4, 0xc(r30)
lbl_fn_8068E09C_00007368:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8068E270(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r26, 0x38(r1)
    mr r31, r1
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8068E270_000073B4
    lis r4, lbl_807BBDC4@ha
    addi r6, r3, 0x8
    addi r4, r4, lbl_807BBDC4@l
    stw r6, 0x0(r3)
    stw r4, 0x8(r3)
lbl_fn_8068E270_000073B4:
    lis r6, lbl_807BBD68@ha
    lwz r4, 0x0(r3)
    addi r6, r6, lbl_807BBD68@l
    stw r6, 0x4(r3)
    addi r6, r6, 0xc
    addi r0, r3, 0x8
    stw r6, 0x0(r4)
    mr r4, r5
    lwz r5, 0x0(r3)
    subf r0, r5, r0
    stw r0, 0x3c(r5)
    lwz r30, 0x0(r3)
    mr r3, r30
    bl fn_8068B610
    li r27, 0x0
    stw r27, 0x34(r30)
    mr r4, r30
    addi r3, r31, 0x10
    bl fn_800E1D5C
    lwz r0, lbl_808803C4
    stb r27, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E270_00007420
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C4
lbl_fn_8068E270_00007420:
    lwz r3, 0x10(r31)
    lwz r26, lbl_808803C4
    lwz r0, 0x4(r3)
    cmplw r26, r0
    bge lbl_fn_8068E270_00007448
    lwz r3, 0x0(r3)
    slwi r0, r26, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068E270_000074A0
lbl_fn_8068E270_00007448:
    li r3, 0x2c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068E270_00007464
    li r4, 0x0
    bl fn_80692C3C
lbl_fn_8068E270_00007464:
    lwz r0, lbl_808803C4
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E270_00007484
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C4
lbl_fn_8068E270_00007484:
    lwz r5, lbl_808803C4
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r26, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068E270_000074A0:
    lwz r12, 0x0(r3)
    li r0, 0x20
    extsb r4, r0
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    addic. r4, r31, 0x10
    mr r27, r3
    beq lbl_fn_8068E270_000074E4
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068E270_000074E4
    bl fn_806952C4
    b lbl_fn_8068E270_000074E4
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068E270_000074E0:
    b lbl_fn_8068E270_000074E0
lbl_fn_8068E270_000074E4:
    sth r27, 0x38(r30)
    mr r10, r31
    mr r3, r28
    lmw r26, 0x38(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068E3FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r1
    stw r30, 0x38(r1)
    mr r30, r3
    addi r3, r31, 0x8
    stw r29, 0x34(r1)
    mr r4, r30
    bl fn_8069194C
    li r0, 0x1
    stb r0, 0x9(r31)
    lwz r3, 0x0(r30)
    lwz r3, 0x24(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8068E3FC_00007608
    stw r1, 0x24(r31)
    li r29, 0x0
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, -0x1
    bne lbl_fn_8068E3FC_000075BC
    li r29, 0x1
    b lbl_fn_8068E3FC_000075BC
    lwz r3, 0x0(r30)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
    lwz r3, 0x0(r30)
    lbz r0, 0x33(r3)
    clrlwi. r0, r0, 31
    beq lbl_fn_8068E3FC_000075A4
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8068E3FC_000075A4:
    addi r3, r31, 0x10
    bl fn_80697CFC
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x24(r31)
    stw r0, 0x0(r1)
lbl_fn_8068E3FC_000075BC:
    cmpwi r29, 0x0
    beq lbl_fn_8068E3FC_00007608
    lwz r3, 0x0(r30)
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8068E3FC_000075EC
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8068E3FC_000075EC:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8068E3FC_00007608
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
lbl_fn_8068E3FC_00007608:
    lwz r3, 0xc(r31)
    lwz r4, 0x0(r3)
    lbz r0, 0x32(r4)
    andi. r0, r0, 0x5
    bne lbl_fn_8068E3FC_00007638
    lhz r0, 0x30(r4)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_fn_8068E3FC_00007638
    lbz r0, 0x9(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E3FC_00007638
    bl fn_8068E3FC
lbl_fn_8068E3FC_00007638:
    mr r10, r31
    mr r3, r30
    lwz r31, 0x3c(r31)
    lwz r30, 0x38(r10)
    lwz r29, 0x34(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068E554(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r26, 0x38(r1)
    mr r31, r1
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8068E554_00007698
    lis r4, lbl_807799E0@ha
    addi r6, r3, 0x8
    addi r4, r4, lbl_807799E0@l
    stw r6, 0x0(r3)
    stw r4, 0x8(r3)
lbl_fn_8068E554_00007698:
    lis r6, lbl_80779AA0@ha
    lwz r4, 0x0(r3)
    addi r6, r6, lbl_80779AA0@l
    stw r6, 0x4(r3)
    addi r6, r6, 0xc
    addi r0, r3, 0x8
    stw r6, 0x0(r4)
    mr r4, r5
    lwz r5, 0x0(r3)
    subf r0, r5, r0
    stw r0, 0x3c(r5)
    lwz r30, 0x0(r3)
    mr r3, r30
    bl fn_8068B610
    li r27, 0x0
    stw r27, 0x34(r30)
    mr r4, r30
    addi r3, r31, 0x10
    bl fn_800E1D5C
    lwz r0, lbl_808803C0
    stb r27, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E554_00007704
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C0
lbl_fn_8068E554_00007704:
    lwz r3, 0x10(r31)
    lwz r26, lbl_808803C0
    lwz r0, 0x4(r3)
    cmplw r26, r0
    bge lbl_fn_8068E554_0000772C
    lwz r3, 0x0(r3)
    slwi r0, r26, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068E554_0000778C
lbl_fn_8068E554_0000772C:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068E554_00007750
    li r4, 0x0
    li r6, 0x0
    mr r5, r4
    bl fn_8069293C
lbl_fn_8068E554_00007750:
    lwz r0, lbl_808803C0
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E554_00007770
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C0
lbl_fn_8068E554_00007770:
    lwz r5, lbl_808803C0
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r26, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068E554_0000778C:
    lwz r12, 0x0(r3)
    li r0, 0x20
    extsb r4, r0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addic. r4, r31, 0x10
    mr r27, r3
    beq lbl_fn_8068E554_000077D0
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068E554_000077D0
    bl fn_806952C4
    b lbl_fn_8068E554_000077D0
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068E554_000077CC:
    b lbl_fn_8068E554_000077CC
lbl_fn_8068E554_000077D0:
    stb r27, 0x38(r30)
    mr r10, r31
    mr r3, r28
    lmw r26, 0x38(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068E6E8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r26, 0x38(r1)
    mr r31, r1
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8068E6E8_0000782C
    lis r4, lbl_807BBDC4@ha
    addi r6, r3, 0xc
    addi r4, r4, lbl_807BBDC4@l
    stw r6, 0x0(r3)
    stw r4, 0xc(r3)
lbl_fn_8068E6E8_0000782C:
    lis r6, lbl_807BBD98@ha
    lwz r4, 0x0(r3)
    addi r6, r6, lbl_807BBD98@l
    stw r6, 0x8(r3)
    addi r6, r6, 0xc
    addi r0, r3, 0xc
    stw r6, 0x0(r4)
    mr r4, r5
    li r27, 0x0
    lwz r5, 0x0(r3)
    subf r0, r5, r0
    stw r0, 0x3c(r5)
    lwz r30, 0x0(r3)
    stw r27, 0x4(r3)
    mr r3, r30
    bl fn_8068B610
    stw r27, 0x34(r30)
    mr r4, r30
    addi r3, r31, 0x10
    bl fn_800E1D5C
    lwz r0, lbl_808803C4
    stb r27, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E6E8_0000789C
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C4
lbl_fn_8068E6E8_0000789C:
    lwz r3, 0x10(r31)
    lwz r26, lbl_808803C4
    lwz r0, 0x4(r3)
    cmplw r26, r0
    bge lbl_fn_8068E6E8_000078C4
    lwz r3, 0x0(r3)
    slwi r0, r26, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068E6E8_0000791C
lbl_fn_8068E6E8_000078C4:
    li r3, 0x2c
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068E6E8_000078E0
    li r4, 0x0
    bl fn_80692C3C
lbl_fn_8068E6E8_000078E0:
    lwz r0, lbl_808803C4
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E6E8_00007900
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C4
lbl_fn_8068E6E8_00007900:
    lwz r5, lbl_808803C4
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r26, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068E6E8_0000791C:
    lwz r12, 0x0(r3)
    li r0, 0x20
    extsb r4, r0
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    addic. r4, r31, 0x10
    mr r27, r3
    beq lbl_fn_8068E6E8_00007960
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068E6E8_00007960
    bl fn_806952C4
    b lbl_fn_8068E6E8_00007960
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068E6E8_0000795C:
    b lbl_fn_8068E6E8_0000795C
lbl_fn_8068E6E8_00007960:
    sth r27, 0x38(r30)
    mr r10, r31
    mr r3, r28
    lmw r26, 0x38(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068E878(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x54(r1)
    stmw r26, 0x38(r1)
    mr r31, r1
    mr r28, r3
    mr r29, r4
    beq lbl_fn_8068E878_000079BC
    lis r4, lbl_807799E0@ha
    addi r6, r3, 0xc
    addi r4, r4, lbl_807799E0@l
    stw r6, 0x0(r3)
    stw r4, 0xc(r3)
lbl_fn_8068E878_000079BC:
    lis r6, lbl_8078B2E0@ha
    lwz r4, 0x0(r3)
    addi r6, r6, lbl_8078B2E0@l
    stw r6, 0x8(r3)
    addi r6, r6, 0xc
    addi r0, r3, 0xc
    stw r6, 0x0(r4)
    mr r4, r5
    li r27, 0x0
    lwz r5, 0x0(r3)
    subf r0, r5, r0
    stw r0, 0x3c(r5)
    lwz r30, 0x0(r3)
    stw r27, 0x4(r3)
    mr r3, r30
    bl fn_8068B610
    stw r27, 0x34(r30)
    mr r4, r30
    addi r3, r31, 0x10
    bl fn_800E1D5C
    lwz r0, lbl_808803C0
    stb r27, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E878_00007A2C
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C0
lbl_fn_8068E878_00007A2C:
    lwz r3, 0x10(r31)
    lwz r26, lbl_808803C0
    lwz r0, 0x4(r3)
    cmplw r26, r0
    bge lbl_fn_8068E878_00007A54
    lwz r3, 0x0(r3)
    slwi r0, r26, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068E878_00007AB4
lbl_fn_8068E878_00007A54:
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    beq lbl_fn_8068E878_00007A78
    li r4, 0x0
    li r6, 0x0
    mr r5, r4
    bl fn_8069293C
lbl_fn_8068E878_00007A78:
    lwz r0, lbl_808803C0
    lwz r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068E878_00007A98
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C0
lbl_fn_8068E878_00007A98:
    lwz r5, lbl_808803C0
    mr r4, r27
    bl fn_806920C0
    lwz r3, 0x10(r31)
    slwi r0, r26, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068E878_00007AB4:
    lwz r12, 0x0(r3)
    li r0, 0x20
    extsb r4, r0
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    addic. r4, r31, 0x10
    mr r27, r3
    beq lbl_fn_8068E878_00007AF8
    lwz r3, 0x4(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8068E878_00007AF8
    bl fn_806952C4
    b lbl_fn_8068E878_00007AF8
    addi r3, r31, 0x18
    bl fn_806974B4
lbl_fn_8068E878_00007AF4:
    b lbl_fn_8068E878_00007AF4
lbl_fn_8068E878_00007AF8:
    stb r27, 0x38(r30)
    mr r10, r31
    mr r3, r28
    lmw r26, 0x38(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068EA10(void)
{
    nofralloc
    lwz r5, 0x20(r4)
    lwz r0, 0x1c(r4)
    cmpwi r5, 0x0
    stw r0, 0x0(r3)
    stw r5, 0x4(r3)
    beqlr
    lwz r3, 0x4(r5)
    addi r0, r3, 0x1
    stw r0, 0x4(r5)
    blr
}

asm void fn_8068EA38(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_8068EA40(void)
{
    nofralloc
    lwz r5, 0x20(r4)
    lwz r0, 0x1c(r4)
    cmpwi r5, 0x0
    stw r0, 0x0(r3)
    stw r5, 0x4(r3)
    beqlr
    lwz r3, 0x4(r5)
    addi r0, r3, 0x1
    stw r0, 0x4(r5)
    blr
}

asm void fn_8068EA68(void)
{
    nofralloc
    extsb r3, r4
    blr
}

asm void fn_8068EA70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EA70_00007BBC
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068D414
    cmpwi r3, 0x0
    bge lbl_fn_8068EA70_00007BDC
    li r3, -0x1
    b lbl_fn_8068EA70_00007BE0
lbl_fn_8068EA70_00007BBC:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EA70_00007BDC
    bl fn_8068D7B8
    cmpwi r3, 0x0
    bge lbl_fn_8068EA70_00007BDC
    li r3, -0x1
    b lbl_fn_8068EA70_00007BE0
lbl_fn_8068EA70_00007BDC:
    li r3, 0x0
lbl_fn_8068EA70_00007BE0:
    cmpwi r3, 0x0
    blt lbl_fn_8068EA70_00007BF0
    lwz r3, 0x50(r31)
    bl fn_8067D988
lbl_fn_8068EA70_00007BF0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068EAF8(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r6, 0x50(r6)
    li r4, 0x1
    b fn_8067D5C0
}

asm void fn_8068EB0C(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8068EB14(void)
{
    nofralloc
    li r4, -0x1
    li r3, -0x1
    blr
}

asm void fn_8068EB20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EB20_00007C6C
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068DCF8
    cmpwi r3, 0x0
    bge lbl_fn_8068EB20_00007C8C
    li r3, -0x1
    b lbl_fn_8068EB20_00007C90
lbl_fn_8068EB20_00007C6C:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EB20_00007C8C
    bl fn_8068E09C
    cmpwi r3, 0x0
    bge lbl_fn_8068EB20_00007C8C
    li r3, -0x1
    b lbl_fn_8068EB20_00007C90
lbl_fn_8068EB20_00007C8C:
    li r3, 0x0
lbl_fn_8068EB20_00007C90:
    cmpwi r3, 0x0
    blt lbl_fn_8068EB20_00007CA0
    lwz r3, 0x50(r31)
    bl fn_8067D988
lbl_fn_8068EB20_00007CA0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068EBA8(void)
{
    nofralloc
    mr r6, r3
    mr r3, r4
    lwz r6, 0x50(r6)
    li r4, 0x1
    b fn_8067D5C0
}

asm void fn_8068EBBC(void)
{
    nofralloc
    li r3, -0x1
    blr
}

asm void fn_8068EBC4(void)
{
    nofralloc
    li r4, -0x1
    li r3, -0x1
    blr
}

asm void fn_8068EBD0(void)
{
    nofralloc
    lwz r4, 0x30(r3)
    lbz r5, 0x38(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8068EBD0_00007CFC
    lwz r3, 0x24(r3)
    lwz r0, 0x28(r3)
    divw r0, r0, r4
    add r5, r5, r0
lbl_fn_8068EBD0_00007CFC:
    mr r3, r5
    blr
}

asm void fn_8068EBF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EBF8_00007D2C
    lhz r3, 0x34(r3)
    b lbl_fn_8068EBF8_00007D6C
lbl_fn_8068EBF8_00007D2C:
    lbz r4, 0x37(r3)
    bl fn_8068F410
    lbz r0, 0x37(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8068EBF8_00007D54
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_fn_8068EBF8_00007D54
    li r4, 0x1
lbl_fn_8068EBF8_00007D54:
    cmpwi r4, 0x0
    beq lbl_fn_8068EBF8_00007D6C
    li r0, 0x1
    sth r3, 0x34(r31)
    stb r0, 0x38(r31)
    stb r0, 0x39(r31)
lbl_fn_8068EBF8_00007D6C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068EC74(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EC74_00007DB0
    li r0, 0x0
    stb r0, 0x38(r3)
    lhz r3, 0x34(r3)
    b lbl_fn_8068EC74_00007DEC
lbl_fn_8068EC74_00007DB0:
    li r4, 0x1
    bl fn_8068F410
    lbz r0, 0x37(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8068EC74_00007DD8
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_fn_8068EC74_00007DD8
    li r4, 0x1
lbl_fn_8068EC74_00007DD8:
    cmpwi r4, 0x0
    beq lbl_fn_8068EC74_00007DEC
    li r0, 0x1
    sth r3, 0x34(r31)
    stb r0, 0x39(r31)
lbl_fn_8068EC74_00007DEC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068ECF4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r30, r3
    mr r31, r4
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068ECF4_00007F68
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068ECF4_00007F2C
    cmplwi r4, 0xffff
    bne lbl_fn_8068ECF4_00007E40
    mr r3, r31
    b lbl_fn_8068ECF4_00008064
lbl_fn_8068ECF4_00007E40:
    lhz r0, 0x34(r3)
    addi r4, r30, 0x28
    sth r0, 0xa(r1)
    addi r5, r1, 0xa
    addi r6, r1, 0xc
    addi r7, r1, 0x18
    lwz r3, 0x2c(r3)
    addi r8, r1, 0x28
    addi r9, r1, 0x34
    addi r10, r1, 0x14
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068ECF4_00007E9C
    cmpwi r3, 0x3
    beq lbl_fn_8068ECF4_00007EA4
    cmpwi r3, 0x0
    beq lbl_fn_8068ECF4_00007EBC
    b lbl_fn_8068ECF4_00007EC8
lbl_fn_8068ECF4_00007E9C:
    li r0, -0x1
    b lbl_fn_8068ECF4_00007F08
lbl_fn_8068ECF4_00007EA4:
    addi r3, r1, 0x28
    addi r4, r1, 0xa
    li r28, 0x2
    li r5, 0x2
    bl memcpy
    b lbl_fn_8068ECF4_00007EC8
lbl_fn_8068ECF4_00007EBC:
    lwz r0, 0x14(r1)
    addi r3, r1, 0x28
    subf r28, r3, r0
lbl_fn_8068ECF4_00007EC8:
    addi r27, r1, 0x28
    li r29, 0x0
    b lbl_fn_8068ECF4_00007EFC
lbl_fn_8068ECF4_00007ED4:
    lbz r3, 0x0(r27)
    lwz r4, 0x24(r30)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068ECF4_00007EF4
    li r0, -0x1
    b lbl_fn_8068ECF4_00007F08
lbl_fn_8068ECF4_00007EF4:
    addi r27, r27, 0x1
    addi r29, r29, 0x1
lbl_fn_8068ECF4_00007EFC:
    cmplw r29, r28
    blt lbl_fn_8068ECF4_00007ED4
    li r0, 0x0
lbl_fn_8068ECF4_00007F08:
    cmpwi r0, 0x0
    bge lbl_fn_8068ECF4_00007F1C
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068ECF4_00008064
lbl_fn_8068ECF4_00007F1C:
    li r0, 0x1
    sth r31, 0x34(r30)
    stb r0, 0x39(r30)
    b lbl_fn_8068ECF4_00008050
lbl_fn_8068ECF4_00007F2C:
    cmplwi r4, 0xffff
    beq lbl_fn_8068ECF4_00007F44
    li r0, 0x1
    sth r4, 0x34(r3)
    stb r0, 0x39(r3)
    b lbl_fn_8068ECF4_00007F5C
lbl_fn_8068ECF4_00007F44:
    lbz r0, 0x39(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8068ECF4_00007F5C
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068ECF4_00008064
lbl_fn_8068ECF4_00007F5C:
    li r0, 0x1
    stb r0, 0x38(r3)
    b lbl_fn_8068ECF4_00008050
lbl_fn_8068ECF4_00007F68:
    cmplwi r4, 0xffff
    bne lbl_fn_8068ECF4_00007F78
    mr r3, r31
    b lbl_fn_8068ECF4_00008064
lbl_fn_8068ECF4_00007F78:
    sth r4, 0x8(r1)
    addi r4, r30, 0x28
    addi r5, r1, 0x8
    addi r6, r1, 0xa
    lwz r3, 0x2c(r3)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    lwz r12, 0x0(r3)
    addi r10, r1, 0xc
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068ECF4_00007FD0
    cmpwi r3, 0x3
    beq lbl_fn_8068ECF4_00007FD8
    cmpwi r3, 0x0
    beq lbl_fn_8068ECF4_00007FF0
    b lbl_fn_8068ECF4_00007FFC
lbl_fn_8068ECF4_00007FD0:
    li r0, -0x1
    b lbl_fn_8068ECF4_0000803C
lbl_fn_8068ECF4_00007FD8:
    addi r3, r1, 0x1c
    addi r4, r1, 0x8
    li r29, 0x2
    li r5, 0x2
    bl memcpy
    b lbl_fn_8068ECF4_00007FFC
lbl_fn_8068ECF4_00007FF0:
    lwz r0, 0xc(r1)
    addi r3, r1, 0x1c
    subf r29, r3, r0
lbl_fn_8068ECF4_00007FFC:
    addi r27, r1, 0x1c
    li r28, 0x0
    b lbl_fn_8068ECF4_00008030
lbl_fn_8068ECF4_00008008:
    lbz r3, 0x0(r27)
    lwz r4, 0x24(r30)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068ECF4_00008028
    li r0, -0x1
    b lbl_fn_8068ECF4_0000803C
lbl_fn_8068ECF4_00008028:
    addi r27, r27, 0x1
    addi r28, r28, 0x1
lbl_fn_8068ECF4_00008030:
    cmplw r28, r29
    blt lbl_fn_8068ECF4_00008008
    li r0, 0x0
lbl_fn_8068ECF4_0000803C:
    cmpwi r0, 0x0
    bge lbl_fn_8068ECF4_00008050
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068ECF4_00008064
lbl_fn_8068ECF4_00008050:
    cmplwi r31, 0xffff
    lis r0, 0xffff
    beq lbl_fn_8068ECF4_00008060
    mr r0, r31
lbl_fn_8068ECF4_00008060:
    clrlwi r3, r0, 16
lbl_fn_8068ECF4_00008064:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8068EF6C(void)
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
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068EF6C_000080BC
    li r3, 0x0
    b lbl_fn_8068EF6C_000080EC
lbl_fn_8068EF6C_000080BC:
    cmpwi r30, 0x0
    li r0, 0x0
    bne lbl_fn_8068EF6C_000080D0
    cmpwi r31, 0x0
    beq lbl_fn_8068EF6C_000080D4
lbl_fn_8068EF6C_000080D0:
    li r0, 0x1
lbl_fn_8068EF6C_000080D4:
    cmpwi r0, 0x0
    stb r0, 0x37(r29)
    bne lbl_fn_8068EF6C_000080E8
    li r0, 0x0
    stb r0, 0x39(r29)
lbl_fn_8068EF6C_000080E8:
    mr r3, r29
lbl_fn_8068EF6C_000080EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068EFFC(void)
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
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EFFC_00008220
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068EFFC_00008218
    lhz r0, 0x34(r3)
    addi r4, r28, 0x28
    sth r0, 0x8(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0xa
    addi r7, r1, 0x10
    lwz r3, 0x2c(r3)
    addi r8, r1, 0x14
    addi r9, r1, 0x20
    addi r10, r1, 0xc
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068EFFC_0000819C
    cmpwi r3, 0x3
    beq lbl_fn_8068EFFC_000081A4
    cmpwi r3, 0x0
    beq lbl_fn_8068EFFC_000081BC
    b lbl_fn_8068EFFC_000081C8
lbl_fn_8068EFFC_0000819C:
    li r0, -0x1
    b lbl_fn_8068EFFC_00008208
lbl_fn_8068EFFC_000081A4:
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    li r30, 0x2
    li r5, 0x2
    bl memcpy
    b lbl_fn_8068EFFC_000081C8
lbl_fn_8068EFFC_000081BC:
    lwz r0, 0xc(r1)
    addi r3, r1, 0x14
    subf r30, r3, r0
lbl_fn_8068EFFC_000081C8:
    addi r29, r1, 0x14
    li r31, 0x0
    b lbl_fn_8068EFFC_000081FC
lbl_fn_8068EFFC_000081D4:
    lbz r3, 0x0(r29)
    lwz r4, 0x24(r28)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068EFFC_000081F4
    li r0, -0x1
    b lbl_fn_8068EFFC_00008208
lbl_fn_8068EFFC_000081F4:
    addi r29, r29, 0x1
    addi r31, r31, 0x1
lbl_fn_8068EFFC_000081FC:
    cmplw r31, r30
    blt lbl_fn_8068EFFC_000081D4
    li r0, 0x0
lbl_fn_8068EFFC_00008208:
    cmpwi r0, 0x0
    bge lbl_fn_8068EFFC_00008218
    li r3, -0x1
    b lbl_fn_8068EFFC_00008224
lbl_fn_8068EFFC_00008218:
    li r0, 0x0
    stb r0, 0x38(r28)
lbl_fn_8068EFFC_00008220:
    li r3, 0x0
lbl_fn_8068EFFC_00008224:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8068F138(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r26, 0x78(r1)
    mr r31, r1
    mr r29, r3
    mr r30, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068F138_00008334
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r26, r4, 0x73
    addi r27, r31, 0x3c
    stw r3, 0x3c(r31)
    mr r3, r26
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x40(r31)
    mr r28, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068F138_000082F8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r28, 0xc(r3)
lbl_fn_8068F138_000082F8:
    li r0, 0x0
    stw r3, 0x44(r31)
    stw r0, 0x28(r31)
    b lbl_fn_8068F138_0000830C
    bl fn_80084C24
lbl_fn_8068F138_0000830C:
    lwz r3, 0x40(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068F138_00008334:
    lwz r0, lbl_808803CC
    li r3, 0x0
    stb r3, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068F138_00008358
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068F138_00008358:
    lwz r3, 0x0(r30)
    lwz r27, lbl_808803CC
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_8068F138_00008380
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068F138_000083D8
lbl_fn_8068F138_00008380:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8068F138_0000839C
    li r4, 0x0
    bl fn_80693798
lbl_fn_8068F138_0000839C:
    lwz r0, lbl_808803CC
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8068F138_000083BC
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_8068F138_000083BC:
    lwz r5, lbl_808803CC
    mr r4, r26
    bl fn_806920C0
    lwz r3, 0x0(r30)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068F138_000083D8:
    stw r3, 0x2c(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068F138_000083FC
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_8068F138_000083F8:
    b lbl_fn_8068F138_000083F8
lbl_fn_8068F138_000083FC:
    stb r3, 0x36(r29)
    lwz r3, 0x2c(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068F138_00008424
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_8068F138_00008420:
    b lbl_fn_8068F138_00008420
lbl_fn_8068F138_00008424:
    cmplwi r3, 0xc
    stw r3, 0x30(r29)
    bgt lbl_fn_8068F138_00008444
    lbz r0, 0x36(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068F138_00008500
    cmplwi r3, 0x2
    beq lbl_fn_8068F138_00008500
lbl_fn_8068F138_00008444:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x10(r31)
    addi r26, r4, 0x54
    addi r27, r31, 0x30
    stw r3, 0x30(r31)
    mr r3, r26
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x34(r31)
    mr r29, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068F138_000084C4
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068F138_000084C4:
    li r0, 0x0
    stw r3, 0x38(r31)
    stw r0, 0x20(r31)
    b lbl_fn_8068F138_000084D8
    bl fn_80084C24
lbl_fn_8068F138_000084D8:
    lwz r3, 0x34(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068F138_00008500:
    mr r10, r31
    lmw r26, 0x78(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068F410(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r24, 0x20(r1)
    mr r29, r3
    mr r30, r4
    lwz r5, lbl_8087EC78
    lwz r0, 0x30(r3)
    cmpw r5, r0
    bge lbl_fn_8068F410_0000854C
    addi r3, r3, 0x30
    b lbl_fn_8068F410_00008550
lbl_fn_8068F410_0000854C:
    la r3, lbl_8087EC78
lbl_fn_8068F410_00008550:
    lwz r31, 0x0(r3)
    addi r25, r1, 0x14
    li r26, 0x0
    b lbl_fn_8068F410_000085B8
lbl_fn_8068F410_00008560:
    lwz r4, 0x24(r29)
    lwz r3, 0x28(r4)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x28(r4)
    beq lbl_fn_8068F410_00008590
    lwz r4, 0x24(r29)
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
    lbz r3, 0x0(r3)
    b lbl_fn_8068F410_00008598
lbl_fn_8068F410_00008590:
    lwz r3, 0x24(r29)
    bl fn_8067D06C
lbl_fn_8068F410_00008598:
    cmpwi r3, -0x1
    bne lbl_fn_8068F410_000085AC
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068F410_00008728
lbl_fn_8068F410_000085AC:
    stb r3, 0x0(r25)
    addi r25, r25, 0x1
    addi r26, r26, 0x1
lbl_fn_8068F410_000085B8:
    cmpw r26, r31
    blt lbl_fn_8068F410_00008560
    lbz r0, 0x36(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068F410_000085D8
    lhz r0, 0x14(r1)
    sth r0, 0x8(r1)
    b lbl_fn_8068F410_000086E0
lbl_fn_8068F410_000085D8:
    addi r27, r1, 0x14
    li r24, 0x0
    mr r25, r27
    add r25, r25, r31
    add r28, r27, r31
lbl_fn_8068F410_000085EC:
    lwz r3, 0x2c(r29)
    addi r5, r1, 0x14
    mr r6, r25
    addi r4, r29, 0x28
    lwz r12, 0x0(r3)
    add r5, r5, r24
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    lwz r12, 0x10(r12)
    addi r9, r1, 0xa
    addi r10, r1, 0xc
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    mr r26, r3
    cmpwi r0, 0x2
    beq lbl_fn_8068F410_00008644
    cmpwi r0, 0x1
    beq lbl_fn_8068F410_00008650
    cmpwi r0, 0x3
    beq lbl_fn_8068F410_000086CC
    b lbl_fn_8068F410_000086D4
lbl_fn_8068F410_00008644:
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068F410_00008728
lbl_fn_8068F410_00008650:
    lwz r0, 0x10(r1)
    cmpwi r31, 0xc
    subf r24, r27, r0
    bne lbl_fn_8068F410_0000866C
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068F410_00008728
lbl_fn_8068F410_0000866C:
    lwz r4, 0x24(r29)
    lwz r3, 0x28(r4)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x28(r4)
    beq lbl_fn_8068F410_0000869C
    lwz r4, 0x24(r29)
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
    lbz r3, 0x0(r3)
    b lbl_fn_8068F410_000086A4
lbl_fn_8068F410_0000869C:
    lwz r3, 0x24(r29)
    bl fn_8067D06C
lbl_fn_8068F410_000086A4:
    cmpwi r3, -0x1
    bne lbl_fn_8068F410_000086B8
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068F410_00008728
lbl_fn_8068F410_000086B8:
    stb r3, 0x0(r28)
    addi r25, r25, 0x1
    addi r31, r31, 0x1
    addi r28, r28, 0x1
    b lbl_fn_8068F410_000086D4
lbl_fn_8068F410_000086CC:
    lhz r0, 0x14(r1)
    sth r0, 0x8(r1)
lbl_fn_8068F410_000086D4:
    clrlwi r0, r26, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068F410_000085EC
lbl_fn_8068F410_000086E0:
    cmpwi r30, 0x0
    bne lbl_fn_8068F410_00008724
    addi r0, r1, 0x14
    add r30, r0, r31
    b lbl_fn_8068F410_0000871C
lbl_fn_8068F410_000086F4:
    lbzu r3, -0x1(r30)
    subi r31, r31, 0x1
    lwz r4, 0x24(r29)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068F410_0000871C
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_8068F410_00008728
lbl_fn_8068F410_0000871C:
    cmpwi r31, 0x0
    bgt lbl_fn_8068F410_000086F4
lbl_fn_8068F410_00008724:
    lhz r3, 0x8(r1)
lbl_fn_8068F410_00008728:
    lmw r24, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8068F630(void)
{
    nofralloc
    lwz r4, 0x30(r3)
    lbz r5, 0x37(r3)
    cmpwi r4, 0x0
    ble lbl_fn_8068F630_0000875C
    lwz r3, 0x24(r3)
    lwz r0, 0x28(r3)
    divw r0, r0, r4
    add r5, r5, r0
lbl_fn_8068F630_0000875C:
    mr r3, r5
    blr
}

asm void fn_8068F658(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068F658_0000878C
    lbz r3, 0x34(r3)
    b lbl_fn_8068F658_000087C8
lbl_fn_8068F658_0000878C:
    lbz r4, 0x36(r3)
    bl fn_8068FE5C
    lbz r0, 0x36(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8068F658_000087B0
    cmpwi r3, -0x1
    beq lbl_fn_8068F658_000087B0
    li r4, 0x1
lbl_fn_8068F658_000087B0:
    cmpwi r4, 0x0
    beq lbl_fn_8068F658_000087C8
    li r0, 0x1
    stb r3, 0x34(r31)
    stb r0, 0x37(r31)
    stb r0, 0x38(r31)
lbl_fn_8068F658_000087C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068F6D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068F6D0_0000880C
    li r0, 0x0
    stb r0, 0x37(r3)
    lbz r3, 0x34(r3)
    b lbl_fn_8068F6D0_00008844
lbl_fn_8068F6D0_0000880C:
    li r4, 0x1
    bl fn_8068FE5C
    lbz r0, 0x36(r31)
    li r4, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_8068F6D0_00008830
    cmpwi r3, -0x1
    beq lbl_fn_8068F6D0_00008830
    li r4, 0x1
lbl_fn_8068F6D0_00008830:
    cmpwi r4, 0x0
    beq lbl_fn_8068F6D0_00008844
    li r0, 0x1
    stb r3, 0x34(r31)
    stb r0, 0x38(r31)
lbl_fn_8068F6D0_00008844:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8068F74C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stmw r27, 0x3c(r1)
    mr r30, r3
    mr r31, r4
    lbz r0, 0x36(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068F74C_000089B8
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068F74C_00008980
    cmpwi r4, -0x1
    bne lbl_fn_8068F74C_00008898
    mr r3, r31
    b lbl_fn_8068F74C_00008AB0
lbl_fn_8068F74C_00008898:
    lbz r0, 0x34(r3)
    addi r4, r30, 0x28
    stb r0, 0x9(r1)
    addi r5, r1, 0x9
    addi r6, r1, 0xa
    addi r7, r1, 0x18
    lwz r3, 0x2c(r3)
    addi r8, r1, 0x28
    addi r9, r1, 0x34
    addi r10, r1, 0x14
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068F74C_000088F4
    cmpwi r3, 0x3
    beq lbl_fn_8068F74C_000088FC
    cmpwi r3, 0x0
    beq lbl_fn_8068F74C_00008914
    b lbl_fn_8068F74C_00008920
lbl_fn_8068F74C_000088F4:
    li r0, -0x1
    b lbl_fn_8068F74C_00008960
lbl_fn_8068F74C_000088FC:
    addi r3, r1, 0x28
    addi r4, r1, 0x9
    li r28, 0x1
    li r5, 0x1
    bl memcpy
    b lbl_fn_8068F74C_00008920
lbl_fn_8068F74C_00008914:
    lwz r0, 0x14(r1)
    addi r3, r1, 0x28
    subf r28, r3, r0
lbl_fn_8068F74C_00008920:
    addi r27, r1, 0x28
    li r29, 0x0
    b lbl_fn_8068F74C_00008954
lbl_fn_8068F74C_0000892C:
    lbz r3, 0x0(r27)
    lwz r4, 0x24(r30)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068F74C_0000894C
    li r0, -0x1
    b lbl_fn_8068F74C_00008960
lbl_fn_8068F74C_0000894C:
    addi r27, r27, 0x1
    addi r29, r29, 0x1
lbl_fn_8068F74C_00008954:
    cmplw r29, r28
    blt lbl_fn_8068F74C_0000892C
    li r0, 0x0
lbl_fn_8068F74C_00008960:
    cmpwi r0, 0x0
    bge lbl_fn_8068F74C_00008970
    li r3, -0x1
    b lbl_fn_8068F74C_00008AB0
lbl_fn_8068F74C_00008970:
    li r0, 0x1
    stb r31, 0x34(r30)
    stb r0, 0x38(r30)
    b lbl_fn_8068F74C_00008A9C
lbl_fn_8068F74C_00008980:
    cmpwi r4, -0x1
    beq lbl_fn_8068F74C_00008998
    li r0, 0x1
    stb r4, 0x34(r3)
    stb r0, 0x38(r3)
    b lbl_fn_8068F74C_000089AC
lbl_fn_8068F74C_00008998:
    lbz r0, 0x38(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8068F74C_000089AC
    li r3, -0x1
    b lbl_fn_8068F74C_00008AB0
lbl_fn_8068F74C_000089AC:
    li r0, 0x1
    stb r0, 0x37(r3)
    b lbl_fn_8068F74C_00008A9C
lbl_fn_8068F74C_000089B8:
    cmpwi r4, -0x1
    bne lbl_fn_8068F74C_000089C8
    mr r3, r31
    b lbl_fn_8068F74C_00008AB0
lbl_fn_8068F74C_000089C8:
    stb r4, 0x8(r1)
    addi r4, r30, 0x28
    addi r5, r1, 0x8
    addi r6, r1, 0x9
    lwz r3, 0x2c(r3)
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    lwz r12, 0x0(r3)
    addi r10, r1, 0xc
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068F74C_00008A20
    cmpwi r3, 0x3
    beq lbl_fn_8068F74C_00008A28
    cmpwi r3, 0x0
    beq lbl_fn_8068F74C_00008A40
    b lbl_fn_8068F74C_00008A4C
lbl_fn_8068F74C_00008A20:
    li r0, -0x1
    b lbl_fn_8068F74C_00008A8C
lbl_fn_8068F74C_00008A28:
    addi r3, r1, 0x1c
    addi r4, r1, 0x8
    li r29, 0x1
    li r5, 0x1
    bl memcpy
    b lbl_fn_8068F74C_00008A4C
lbl_fn_8068F74C_00008A40:
    lwz r0, 0xc(r1)
    addi r3, r1, 0x1c
    subf r29, r3, r0
lbl_fn_8068F74C_00008A4C:
    addi r27, r1, 0x1c
    li r28, 0x0
    b lbl_fn_8068F74C_00008A80
lbl_fn_8068F74C_00008A58:
    lbz r3, 0x0(r27)
    lwz r4, 0x24(r30)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068F74C_00008A78
    li r0, -0x1
    b lbl_fn_8068F74C_00008A8C
lbl_fn_8068F74C_00008A78:
    addi r27, r27, 0x1
    addi r28, r28, 0x1
lbl_fn_8068F74C_00008A80:
    cmplw r28, r29
    blt lbl_fn_8068F74C_00008A58
    li r0, 0x0
lbl_fn_8068F74C_00008A8C:
    cmpwi r0, 0x0
    bge lbl_fn_8068F74C_00008A9C
    li r3, -0x1
    b lbl_fn_8068F74C_00008AB0
lbl_fn_8068F74C_00008A9C:
    addi r3, r31, 0x1
    subfic r0, r31, -0x1
    nor r0, r3, r0
    srawi r0, r0, 31
    andc r3, r31, r0
lbl_fn_8068F74C_00008AB0:
    lmw r27, 0x3c(r1)
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8068F9B8(void)
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
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068F9B8_00008B08
    li r3, 0x0
    b lbl_fn_8068F9B8_00008B38
lbl_fn_8068F9B8_00008B08:
    cmpwi r30, 0x0
    li r0, 0x0
    bne lbl_fn_8068F9B8_00008B1C
    cmpwi r31, 0x0
    beq lbl_fn_8068F9B8_00008B20
lbl_fn_8068F9B8_00008B1C:
    li r0, 0x1
lbl_fn_8068F9B8_00008B20:
    cmpwi r0, 0x0
    stb r0, 0x36(r29)
    bne lbl_fn_8068F9B8_00008B34
    li r0, 0x0
    stb r0, 0x38(r29)
lbl_fn_8068F9B8_00008B34:
    mr r3, r29
lbl_fn_8068F9B8_00008B38:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8068FA48(void)
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
    lbz r0, 0x36(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068FA48_00008C6C
    lbz r0, 0x37(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8068FA48_00008C64
    lbz r0, 0x34(r3)
    addi r4, r28, 0x28
    stb r0, 0x8(r1)
    addi r5, r1, 0x8
    addi r6, r1, 0x9
    addi r7, r1, 0x10
    lwz r3, 0x2c(r3)
    addi r8, r1, 0x14
    addi r9, r1, 0x20
    addi r10, r1, 0xc
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    clrlwi r3, r3, 24
    subi r0, r3, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_8068FA48_00008BE8
    cmpwi r3, 0x3
    beq lbl_fn_8068FA48_00008BF0
    cmpwi r3, 0x0
    beq lbl_fn_8068FA48_00008C08
    b lbl_fn_8068FA48_00008C14
lbl_fn_8068FA48_00008BE8:
    li r0, -0x1
    b lbl_fn_8068FA48_00008C54
lbl_fn_8068FA48_00008BF0:
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    li r30, 0x1
    li r5, 0x1
    bl memcpy
    b lbl_fn_8068FA48_00008C14
lbl_fn_8068FA48_00008C08:
    lwz r0, 0xc(r1)
    addi r3, r1, 0x14
    subf r30, r3, r0
lbl_fn_8068FA48_00008C14:
    addi r29, r1, 0x14
    li r31, 0x0
    b lbl_fn_8068FA48_00008C48
lbl_fn_8068FA48_00008C20:
    lbz r3, 0x0(r29)
    lwz r4, 0x24(r28)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068FA48_00008C40
    li r0, -0x1
    b lbl_fn_8068FA48_00008C54
lbl_fn_8068FA48_00008C40:
    addi r29, r29, 0x1
    addi r31, r31, 0x1
lbl_fn_8068FA48_00008C48:
    cmplw r31, r30
    blt lbl_fn_8068FA48_00008C20
    li r0, 0x0
lbl_fn_8068FA48_00008C54:
    cmpwi r0, 0x0
    bge lbl_fn_8068FA48_00008C64
    li r3, -0x1
    b lbl_fn_8068FA48_00008C70
lbl_fn_8068FA48_00008C64:
    li r0, 0x0
    stb r0, 0x37(r28)
lbl_fn_8068FA48_00008C6C:
    li r3, 0x0
lbl_fn_8068FA48_00008C70:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8068FB84(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r26, 0x78(r1)
    mr r31, r1
    mr r29, r3
    mr r30, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_8068FB84_00008D80
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r26, r4, 0x73
    addi r27, r31, 0x3c
    stw r3, 0x3c(r31)
    mr r3, r26
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x40(r31)
    mr r28, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068FB84_00008D44
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r28, 0xc(r3)
lbl_fn_8068FB84_00008D44:
    li r0, 0x0
    stw r3, 0x44(r31)
    stw r0, 0x28(r31)
    b lbl_fn_8068FB84_00008D58
    bl fn_80084C24
lbl_fn_8068FB84_00008D58:
    lwz r3, 0x40(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068FB84_00008D80:
    lwz r0, lbl_808803C8
    li r3, 0x0
    stb r3, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8068FB84_00008DA4
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068FB84_00008DA4:
    lwz r3, 0x0(r30)
    lwz r27, lbl_808803C8
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_8068FB84_00008DCC
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_8068FB84_00008E24
lbl_fn_8068FB84_00008DCC:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8068FB84_00008DE8
    li r4, 0x0
    bl fn_80693744
lbl_fn_8068FB84_00008DE8:
    lwz r0, lbl_808803C8
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8068FB84_00008E08
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_8068FB84_00008E08:
    lwz r5, lbl_808803C8
    mr r4, r26
    bl fn_806920C0
    lwz r3, 0x0(r30)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_8068FB84_00008E24:
    stw r3, 0x2c(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068FB84_00008E48
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_8068FB84_00008E44:
    b lbl_fn_8068FB84_00008E44
lbl_fn_8068FB84_00008E48:
    stb r3, 0x35(r29)
    lwz r3, 0x2c(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_8068FB84_00008E70
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_8068FB84_00008E6C:
    b lbl_fn_8068FB84_00008E6C
lbl_fn_8068FB84_00008E70:
    cmplwi r3, 0xc
    stw r3, 0x30(r29)
    bgt lbl_fn_8068FB84_00008E90
    lbz r0, 0x35(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068FB84_00008F4C
    cmplwi r3, 0x1
    beq lbl_fn_8068FB84_00008F4C
lbl_fn_8068FB84_00008E90:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x10(r31)
    addi r26, r4, 0x54
    addi r27, r31, 0x30
    stw r3, 0x30(r31)
    mr r3, r26
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x34(r31)
    mr r29, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_8068FB84_00008F10
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_8068FB84_00008F10:
    li r0, 0x0
    stw r3, 0x38(r31)
    stw r0, 0x20(r31)
    b lbl_fn_8068FB84_00008F24
    bl fn_80084C24
lbl_fn_8068FB84_00008F24:
    lwz r3, 0x34(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_8068FB84_00008F4C:
    mr r10, r31
    lmw r26, 0x78(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8068FE5C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r24, 0x20(r1)
    mr r29, r3
    mr r30, r4
    lwz r5, lbl_8087EC7C
    lwz r0, 0x30(r3)
    cmpw r5, r0
    bge lbl_fn_8068FE5C_00008F98
    addi r3, r3, 0x30
    b lbl_fn_8068FE5C_00008F9C
lbl_fn_8068FE5C_00008F98:
    la r3, lbl_8087EC7C
lbl_fn_8068FE5C_00008F9C:
    lwz r31, 0x0(r3)
    addi r25, r1, 0x14
    li r26, 0x0
    b lbl_fn_8068FE5C_00009000
lbl_fn_8068FE5C_00008FAC:
    lwz r4, 0x24(r29)
    lwz r3, 0x28(r4)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x28(r4)
    beq lbl_fn_8068FE5C_00008FDC
    lwz r4, 0x24(r29)
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
    lbz r3, 0x0(r3)
    b lbl_fn_8068FE5C_00008FE4
lbl_fn_8068FE5C_00008FDC:
    lwz r3, 0x24(r29)
    bl fn_8067D06C
lbl_fn_8068FE5C_00008FE4:
    cmpwi r3, -0x1
    bne lbl_fn_8068FE5C_00008FF4
    li r3, -0x1
    b lbl_fn_8068FE5C_00009160
lbl_fn_8068FE5C_00008FF4:
    stb r3, 0x0(r25)
    addi r25, r25, 0x1
    addi r26, r26, 0x1
lbl_fn_8068FE5C_00009000:
    cmpw r26, r31
    blt lbl_fn_8068FE5C_00008FAC
    lbz r0, 0x35(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8068FE5C_00009020
    lbz r0, 0x14(r1)
    stb r0, 0x8(r1)
    b lbl_fn_8068FE5C_0000911C
lbl_fn_8068FE5C_00009020:
    addi r27, r1, 0x14
    li r24, 0x0
    mr r25, r27
    add r25, r25, r31
    add r28, r27, r31
lbl_fn_8068FE5C_00009034:
    lwz r3, 0x2c(r29)
    addi r5, r1, 0x14
    mr r6, r25
    addi r4, r29, 0x28
    lwz r12, 0x0(r3)
    add r5, r5, r24
    addi r7, r1, 0x10
    addi r8, r1, 0x8
    lwz r12, 0x10(r12)
    addi r9, r1, 0x9
    addi r10, r1, 0xc
    mtctr r12
    bctrl
    clrlwi r0, r3, 24
    mr r26, r3
    cmpwi r0, 0x2
    beq lbl_fn_8068FE5C_0000908C
    cmpwi r0, 0x1
    beq lbl_fn_8068FE5C_00009094
    cmpwi r0, 0x3
    beq lbl_fn_8068FE5C_00009108
    b lbl_fn_8068FE5C_00009110
lbl_fn_8068FE5C_0000908C:
    li r3, -0x1
    b lbl_fn_8068FE5C_00009160
lbl_fn_8068FE5C_00009094:
    lwz r0, 0x10(r1)
    cmpwi r31, 0xc
    subf r24, r27, r0
    bne lbl_fn_8068FE5C_000090AC
    li r3, -0x1
    b lbl_fn_8068FE5C_00009160
lbl_fn_8068FE5C_000090AC:
    lwz r4, 0x24(r29)
    lwz r3, 0x28(r4)
    cmpwi r3, 0x0
    subi r0, r3, 0x1
    stw r0, 0x28(r4)
    beq lbl_fn_8068FE5C_000090DC
    lwz r4, 0x24(r29)
    lwz r3, 0x24(r4)
    addi r0, r3, 0x1
    stw r0, 0x24(r4)
    lbz r3, 0x0(r3)
    b lbl_fn_8068FE5C_000090E4
lbl_fn_8068FE5C_000090DC:
    lwz r3, 0x24(r29)
    bl fn_8067D06C
lbl_fn_8068FE5C_000090E4:
    cmpwi r3, -0x1
    bne lbl_fn_8068FE5C_000090F4
    li r3, -0x1
    b lbl_fn_8068FE5C_00009160
lbl_fn_8068FE5C_000090F4:
    stb r3, 0x0(r28)
    addi r25, r25, 0x1
    addi r31, r31, 0x1
    addi r28, r28, 0x1
    b lbl_fn_8068FE5C_00009110
lbl_fn_8068FE5C_00009108:
    lbz r0, 0x14(r1)
    stb r0, 0x8(r1)
lbl_fn_8068FE5C_00009110:
    clrlwi r0, r26, 24
    cmplwi r0, 0x1
    beq lbl_fn_8068FE5C_00009034
lbl_fn_8068FE5C_0000911C:
    cmpwi r30, 0x0
    bne lbl_fn_8068FE5C_0000915C
    addi r0, r1, 0x14
    add r30, r0, r31
    b lbl_fn_8068FE5C_00009154
lbl_fn_8068FE5C_00009130:
    lbzu r3, -0x1(r30)
    subi r31, r31, 0x1
    lwz r4, 0x24(r29)
    extsb r3, r3
    bl fn_8067D19C
    cmpwi r3, -0x1
    bne lbl_fn_8068FE5C_00009154
    li r3, -0x1
    b lbl_fn_8068FE5C_00009160
lbl_fn_8068FE5C_00009154:
    cmpwi r31, 0x0
    bgt lbl_fn_8068FE5C_00009130
lbl_fn_8068FE5C_0000915C:
    lbz r3, 0x8(r1)
lbl_fn_8068FE5C_00009160:
    lmw r24, 0x20(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80690068(void)
{
    nofralloc
    stw r5, 0x0(r7)
    li r3, 0x3
    stw r8, 0x0(r10)
    blr
}

asm void fn_80690078(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    subf r3, r4, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    blr
}

asm void fn_80690094(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80690094_000091CC
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690094_000092C8
lbl_fn_80690094_000091CC:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80690094_0000920C
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068D414
    cmpwi r3, 0x0
    bge lbl_fn_80690094_000091FC
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690094_000092C8
lbl_fn_80690094_000091FC:
    li r0, 0x0
    stw r0, 0x14(r31)
    stw r0, 0x10(r31)
    stw r0, 0x18(r31)
lbl_fn_80690094_0000920C:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80690094_00009294
    lwz r4, 0x24(r31)
    li r5, 0x0
    lwz r6, 0x28(r31)
    lbz r0, 0x49(r31)
    slwi r3, r4, 1
    add r3, r6, r3
    stw r5, 0x14(r31)
    cmpwi r0, 0x0
    stw r5, 0x10(r31)
    stw r5, 0x18(r31)
    stw r6, 0x4(r31)
    stw r6, 0x8(r31)
    stw r6, 0xc(r31)
    stw r3, 0x34(r31)
    stw r3, 0x30(r31)
    stw r3, 0x2c(r31)
    bne lbl_fn_80690094_00009294
    lwz r5, 0x40(r31)
    subi r3, r4, 0x1
    cmpwi r5, 0x0
    bgt lbl_fn_80690094_00009274
    li r0, 0x1
    b lbl_fn_80690094_00009284
lbl_fn_80690094_00009274:
    cmpwi r5, 0x2
    li r0, 0x2
    bgt lbl_fn_80690094_00009284
    mr r0, r5
lbl_fn_80690094_00009284:
    mullw r3, r3, r0
    lwz r0, 0x2c(r31)
    subf r0, r3, r0
    stw r0, 0x2c(r31)
lbl_fn_80690094_00009294:
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    cmplw r3, r0
    blt lbl_fn_80690094_000092C0
    mr r3, r31
    bl fn_80690A98
    cmpwi r3, 0x0
    bgt lbl_fn_80690094_000092C0
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690094_000092C8
lbl_fn_80690094_000092C0:
    lwz r3, 0x8(r31)
    lhz r3, 0x0(r3)
lbl_fn_80690094_000092C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806901D0(void)
{
    nofralloc
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_806901D0_000092F4
    lis r3, 0x1
    subi r3, r3, 0x1
    blr
lbl_fn_806901D0_000092F4:
    lwz r5, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r5, r0
    bgt lbl_fn_806901D0_00009310
    lis r3, 0x1
    subi r3, r3, 0x1
    blr
lbl_fn_806901D0_00009310:
    cmplwi r4, 0xffff
    subi r5, r5, 0x2
    stw r5, 0x8(r3)
    beq lbl_fn_806901D0_00009324
    sth r4, 0x0(r5)
lbl_fn_806901D0_00009324:
    cmplwi r4, 0xffff
    lis r0, 0xffff
    beq lbl_fn_806901D0_00009334
    mr r0, r4
lbl_fn_806901D0_00009334:
    clrlwi r3, r0, 16
    blr
}

asm void fn_80690230(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80690230_00009370
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690230_0000949C
lbl_fn_80690230_00009370:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80690230_000093A4
    bl fn_8068D7B8
    cmpwi r3, 0x0
    bge lbl_fn_80690230_00009394
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690230_0000949C
lbl_fn_80690230_00009394:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
lbl_fn_80690230_000093A4:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80690230_00009450
    lbz r0, 0x49(r30)
    li r3, 0x0
    lwz r6, 0x28(r30)
    cmpwi r0, 0x0
    stw r3, 0x4(r30)
    mr r4, r6
    stw r3, 0x8(r30)
    stw r3, 0xc(r30)
    bne lbl_fn_80690230_000093FC
    lwz r3, 0x3c(r30)
    addi r4, r6, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_80690230_000093FC
    lwz r5, 0x24(r30)
    slwi r0, r5, 1
    divwu r0, r0, r3
    subf r0, r0, r5
    slwi r0, r0, 1
    add r4, r4, r0
lbl_fn_80690230_000093FC:
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80690230_00009428
    lwz r0, 0x24(r30)
    stw r4, 0x14(r30)
    slwi r0, r0, 1
    add r3, r6, r0
    stw r4, 0x10(r30)
    subi r3, r3, 0x2
    stw r3, 0x18(r30)
    b lbl_fn_80690230_00009434
lbl_fn_80690230_00009428:
    stw r4, 0x14(r30)
    stw r4, 0x10(r30)
    stw r4, 0x18(r30)
lbl_fn_80690230_00009434:
    lwz r0, 0x24(r30)
    lwz r3, 0x28(r30)
    slwi r0, r0, 1
    stw r3, 0x30(r30)
    add r0, r3, r0
    stw r3, 0x2c(r30)
    stw r0, 0x34(r30)
lbl_fn_80690230_00009450:
    cmplwi r31, 0xffff
    beq lbl_fn_80690230_0000946C
    lwz r3, 0x14(r30)
    sth r31, 0x0(r3)
    lwz r3, 0x14(r30)
    addi r0, r3, 0x2
    stw r0, 0x14(r30)
lbl_fn_80690230_0000946C:
    mr r3, r30
    bl fn_8068D414
    cmpwi r3, 0x0
    bge lbl_fn_80690230_00009488
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80690230_0000949C
lbl_fn_80690230_00009488:
    cmplwi r31, 0xffff
    lis r0, 0xffff
    beq lbl_fn_80690230_00009498
    mr r0, r31
lbl_fn_80690230_00009498:
    clrlwi r3, r0, 16
lbl_fn_80690230_0000949C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806903A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    mr r30, r7
    lbz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806903A8_00009500
    rlwinm. r0, r8, 0, 27, 28
    beq lbl_fn_806903A8_00009500
    or. r0, r6, r5
    beq lbl_fn_806903A8_00009518
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_806903A8_00009518
lbl_fn_806903A8_00009500:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_806903A8_0000961C
lbl_fn_806903A8_00009518:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_806903A8_0000954C
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r31)
    stw r3, 0x0(r31)
    stw r0, 0x8(r31)
    b lbl_fn_806903A8_0000961C
lbl_fn_806903A8_0000954C:
    cmpwi r30, 0x1
    beq lbl_fn_806903A8_00009568
    cmpwi r30, 0x2
    beq lbl_fn_806903A8_00009570
    cmpwi r30, 0x4
    beq lbl_fn_806903A8_00009578
    b lbl_fn_806903A8_00009580
lbl_fn_806903A8_00009568:
    li r7, 0x0
    b lbl_fn_806903A8_00009598
lbl_fn_806903A8_00009570:
    li r7, 0x1
    b lbl_fn_806903A8_00009598
lbl_fn_806903A8_00009578:
    li r7, 0x2
    b lbl_fn_806903A8_00009598
lbl_fn_806903A8_00009580:
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r31)
    stw r3, 0x0(r31)
    stw r0, 0x8(r31)
    b lbl_fn_806903A8_0000961C
lbl_fn_806903A8_00009598:
    lwz r4, 0x40(r27)
    mr r3, r27
    lwz r12, 0x0(r27)
    neg r0, r4
    andc r0, r0, r4
    lwz r12, 0x44(r12)
    srawi r0, r0, 31
    and r6, r4, r0
    mulhwu r4, r28, r6
    srawi r0, r6, 31
    mullw r5, r29, r6
    mullw r0, r28, r0
    add r4, r4, r5
    mullw r6, r28, r6
    add r5, r4, r0
    mtctr r12
    bctrl
    li r7, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r7, 0x8000
    subfc r5, r7, r4
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_fn_806903A8_00009610
    li r0, -0x1
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
    stw r7, 0x8(r31)
    b lbl_fn_806903A8_0000961C
lbl_fn_806903A8_00009610:
    stw r4, 0x4(r31)
    stw r3, 0x0(r31)
    stw r7, 0x8(r31)
lbl_fn_806903A8_0000961C:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80690524(void)
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
    lbz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80690524_00009668
    rlwinm. r0, r6, 0, 27, 28
    bne lbl_fn_80690524_00009680
lbl_fn_80690524_00009668:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80690524_00009720
lbl_fn_80690524_00009680:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_80690524_000096B4
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r29)
    stw r3, 0x0(r29)
    stw r0, 0x8(r29)
    b lbl_fn_80690524_00009720
lbl_fn_80690524_000096B4:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r5, 0x0(r31)
    li r7, 0x0
    lwz r12, 0x44(r12)
    lwz r6, 0x4(r31)
    mtctr r12
    bctrl
    li r6, 0x0
    xoris r0, r3, 0x8000
    xoris r5, r6, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_80690524_00009708
    li r0, -0x1
    stw r0, 0x4(r29)
    stw r0, 0x0(r29)
    stw r6, 0x8(r29)
    b lbl_fn_80690524_00009720
lbl_fn_80690524_00009708:
    lwz r0, 0x0(r31)
    lwz r3, 0x4(r31)
    stw r3, 0x4(r29)
    stw r0, 0x0(r29)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r29)
lbl_fn_80690524_00009720:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80690630(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r26, 0x98(r1)
    mr r31, r1
    mr r29, r3
    mr r30, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_80690630_0000982C
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r26, r4, 0x92
    addi r27, r31, 0x3c
    stw r3, 0x3c(r31)
    mr r3, r26
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x40(r31)
    mr r28, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80690630_000097F0
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r28, 0xc(r3)
lbl_fn_80690630_000097F0:
    li r0, 0x0
    stw r3, 0x44(r31)
    stw r0, 0x28(r31)
    b lbl_fn_80690630_00009804
    bl fn_80084C24
lbl_fn_80690630_00009804:
    lwz r3, 0x40(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_80690630_0000982C:
    lwz r0, lbl_808803CC
    li r3, 0x0
    stb r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80690630_00009850
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_80690630_00009850:
    lwz r3, 0x0(r30)
    lwz r27, lbl_808803CC
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_80690630_00009878
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_80690630_000098D0
lbl_fn_80690630_00009878:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_80690630_00009894
    li r4, 0x0
    bl fn_80693798
lbl_fn_80690630_00009894:
    lwz r0, lbl_808803CC
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80690630_000098B4
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803CC
lbl_fn_80690630_000098B4:
    lwz r5, lbl_808803CC
    mr r4, r26
    bl fn_806920C0
    lwz r3, 0x0(r30)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_80690630_000098D0:
    stw r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_80690630_000098F4
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_80690630_000098F0:
    b lbl_fn_80690630_000098F0
lbl_fn_80690630_000098F4:
    stb r3, 0x49(r29)
    lwz r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_80690630_0000991C
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_80690630_00009918:
    b lbl_fn_80690630_00009918
lbl_fn_80690630_0000991C:
    stw r3, 0x40(r29)
    lwz r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_fn_80690630_00009944
    addi r3, r31, 0x78
    bl fn_806974B4
lbl_fn_80690630_00009940:
    b lbl_fn_80690630_00009940
lbl_fn_80690630_00009944:
    cmpwi r3, 0x0
    stw r3, 0x3c(r29)
    ble lbl_fn_80690630_00009960
    lwz r0, 0x24(r29)
    clrlwi r0, r0, 1
    cmplw r3, r0
    ble lbl_fn_80690630_00009A50
lbl_fn_80690630_00009960:
    cmpwi r3, 0x0
    ble lbl_fn_80690630_00009994
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80690630_00009994
    lwz r12, 0x0(r29)
    mr r3, r29
    lbz r5, 0x4a(r29)
    li r4, 0x0
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_80690630_00009A50
lbl_fn_80690630_00009994:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x8(r31)
    addi r27, r4, 0xac
    addi r26, r31, 0x30
    stw r3, 0x30(r31)
    mr r3, r27
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x34(r31)
    mr r30, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80690630_00009A14
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_80690630_00009A14:
    li r0, 0x0
    stw r3, 0x38(r31)
    stw r0, 0x20(r31)
    b lbl_fn_80690630_00009A28
    bl fn_80084C24
lbl_fn_80690630_00009A28:
    lwz r3, 0x34(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r26
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_80690630_00009A50:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80690630_00009B00
    lbz r0, 0x49(r29)
    li r3, 0x0
    lwz r6, 0x28(r29)
    cmpwi r0, 0x0
    stw r3, 0x4(r29)
    mr r4, r6
    stw r3, 0x8(r29)
    stw r3, 0xc(r29)
    bne lbl_fn_80690630_00009AA8
    lwz r3, 0x3c(r29)
    addi r4, r6, 0x2
    cmpwi r3, 0x2
    ble lbl_fn_80690630_00009AA8
    lwz r5, 0x24(r29)
    slwi r0, r5, 1
    divwu r0, r0, r3
    subf r0, r0, r5
    slwi r0, r0, 1
    add r4, r4, r0
lbl_fn_80690630_00009AA8:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80690630_00009AD4
    lwz r0, 0x24(r29)
    stw r4, 0x14(r29)
    slwi r0, r0, 1
    add r3, r6, r0
    stw r4, 0x10(r29)
    subi r3, r3, 0x2
    stw r3, 0x18(r29)
    b lbl_fn_80690630_00009AE0
lbl_fn_80690630_00009AD4:
    stw r4, 0x14(r29)
    stw r4, 0x10(r29)
    stw r4, 0x18(r29)
lbl_fn_80690630_00009AE0:
    lwz r0, 0x24(r29)
    lwz r3, 0x28(r29)
    slwi r0, r0, 1
    stw r3, 0x30(r29)
    add r0, r3, r0
    stw r3, 0x2c(r29)
    stw r0, 0x34(r29)
    b lbl_fn_80690630_00009B88
lbl_fn_80690630_00009B00:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_80690630_00009B88
    lwz r4, 0x24(r29)
    li r5, 0x0
    lwz r6, 0x28(r29)
    lbz r0, 0x49(r29)
    slwi r3, r4, 1
    add r3, r6, r3
    stw r5, 0x14(r29)
    cmpwi r0, 0x0
    stw r5, 0x10(r29)
    stw r5, 0x18(r29)
    stw r6, 0x4(r29)
    stw r6, 0x8(r29)
    stw r6, 0xc(r29)
    stw r3, 0x34(r29)
    stw r3, 0x30(r29)
    stw r3, 0x2c(r29)
    bne lbl_fn_80690630_00009B88
    lwz r5, 0x40(r29)
    subi r3, r4, 0x1
    cmpwi r5, 0x0
    bgt lbl_fn_80690630_00009B68
    li r0, 0x1
    b lbl_fn_80690630_00009B78
lbl_fn_80690630_00009B68:
    cmpwi r5, 0x2
    li r0, 0x2
    bgt lbl_fn_80690630_00009B78
    mr r0, r5
lbl_fn_80690630_00009B78:
    mullw r3, r3, r0
    lwz r0, 0x2c(r29)
    subf r0, r3, r0
    stw r0, 0x2c(r29)
lbl_fn_80690630_00009B88:
    mr r10, r31
    lmw r26, 0x98(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80690A98(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    lwz r5, 0x4(r3)
    lwz r4, 0x8(r3)
    subf r3, r5, r4
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r31, r0, 1
    cmpwi r31, 0x4
    ble lbl_fn_80690A98_00009C04
    mr r3, r5
    subi r4, r4, 0x8
    li r31, 0x4
    li r5, 0x8
    bl memmove
    lwz r3, 0x4(r30)
    addi r0, r3, 0x8
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
lbl_fn_80690A98_00009C04:
    lbz r0, 0x49(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80690A98_00009CB8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r0, 0x24(r30)
    lwz r12, 0x40(r12)
    subf r0, r31, r0
    lwz r4, 0x8(r30)
    slwi r5, r0, 1
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    bgt lbl_fn_80690A98_00009C44
    b lbl_fn_80690A98_00009E50
lbl_fn_80690A98_00009C44:
    srwi r4, r3, 31
    clrlwi r0, r3, 31
    xor r0, r0, r4
    subf. r29, r4, r0
    beq lbl_fn_80690A98_00009CA4
    lwz r12, 0x0(r30)
    neg r6, r29
    mr r3, r30
    li r7, 0x1
    lwz r12, 0x44(r12)
    srawi r5, r6, 31
    mtctr r12
    bctrl
    li r6, 0x0
    xoris r0, r3, 0x8000
    xoris r5, r6, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_80690A98_00009CA0
    li r3, -0x1
    b lbl_fn_80690A98_00009E50
lbl_fn_80690A98_00009CA0:
    subf r31, r29, r31
lbl_fn_80690A98_00009CA4:
    lwz r4, 0x8(r30)
    clrrwi r0, r31, 1
    add r0, r4, r0
    stw r0, 0xc(r30)
    b lbl_fn_80690A98_00009E38
lbl_fn_80690A98_00009CB8:
    lwz r0, 0x40(r30)
    cmpwi r0, 0x0
    bgt lbl_fn_80690A98_00009CCC
    li r6, 0x1
    b lbl_fn_80690A98_00009CDC
lbl_fn_80690A98_00009CCC:
    cmpwi r0, 0x2
    li r6, 0x2
    bgt lbl_fn_80690A98_00009CDC
    mr r6, r0
lbl_fn_80690A98_00009CDC:
    lwz r3, 0x4(r30)
    li r31, 0x0
    lwz r0, 0x8(r30)
    lwz r7, 0x24(r30)
    subf r5, r3, r0
    lwz r3, 0x28(r30)
    srwi r4, r5, 31
    slwi r0, r7, 1
    add r4, r4, r5
    lwz r8, 0x34(r30)
    srawi r5, r4, 1
    lwz r4, 0x30(r30)
    subf r5, r5, r7
    add r0, r3, r0
    subi r3, r5, 0x1
    cmplw r4, r8
    mullw r3, r6, r3
    subf r3, r3, r0
    stw r3, 0x2c(r30)
    bge lbl_fn_80690A98_00009D38
    subf r31, r4, r8
    mr r5, r31
    bl memmove
lbl_fn_80690A98_00009D38:
    lwz r0, 0x24(r30)
    mr r3, r30
    lwz r4, 0x2c(r30)
    lwz r5, 0x28(r30)
    slwi r0, r0, 1
    add r4, r4, r31
    stw r4, 0x30(r30)
    add r0, r5, r0
    stw r0, 0x34(r30)
    subf r5, r4, r0
    lwz r12, 0x0(r30)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x30(r30)
    cmpwi r3, 0x0
    lwz r5, 0x2c(r30)
    stw r0, 0x34(r30)
    stw r5, 0x30(r30)
    bgt lbl_fn_80690A98_00009D8C
    b lbl_fn_80690A98_00009E50
lbl_fn_80690A98_00009D8C:
    add r6, r0, r3
    stw r6, 0x34(r30)
    lwz r3, 0x44(r30)
    addi r4, r30, 0x38
    lwz r0, 0x24(r30)
    addi r7, r1, 0x8
    lwz r12, 0x0(r3)
    addi r10, r1, 0xc
    lwz r8, 0x28(r30)
    slwi r0, r0, 1
    lwz r12, 0x10(r12)
    add r9, r8, r0
    lwz r8, 0x8(r30)
    mtctr r12
    subi r9, r9, 0x2
    bctrl
    clrlwi r0, r3, 24
    lwz r3, 0x8(r1)
    cmplwi r0, 0x1
    stw r3, 0x30(r30)
    ble lbl_fn_80690A98_00009E30
    cmpwi r0, 0x2
    beq lbl_fn_80690A98_00009DF4
    cmpwi r0, 0x3
    beq lbl_fn_80690A98_00009DFC
    b lbl_fn_80690A98_00009E38
lbl_fn_80690A98_00009DF4:
    li r3, -0x1
    b lbl_fn_80690A98_00009E50
lbl_fn_80690A98_00009DFC:
    lwz r4, 0x2c(r30)
    lwz r0, 0x34(r30)
    lwz r3, 0x8(r30)
    subf r5, r4, r0
    bl memmove
    lwz r3, 0x34(r30)
    lwz r0, 0x2c(r30)
    stw r3, 0x30(r30)
    subf r0, r0, r3
    lwz r3, 0x8(r30)
    clrrwi r0, r0, 1
    add r0, r3, r0
    stw r0, 0xc(r1)
lbl_fn_80690A98_00009E30:
    lwz r3, 0xc(r1)
    stw r3, 0xc(r30)
lbl_fn_80690A98_00009E38:
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    subf r3, r3, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
lbl_fn_80690A98_00009E50:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80690D60(void)
{
    nofralloc
    lwz r4, 0x8(r3)
    lwz r0, 0xc(r3)
    subf r3, r4, r0
    blr
}

asm void fn_80690D70(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80690D70_00009EA4
    li r3, -0x1
    b lbl_fn_80690D70_00009F94
lbl_fn_80690D70_00009EA4:
    lwz r0, 0x14(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80690D70_00009EE0
    lwz r0, 0x40(r3)
    srwi r0, r0, 31
    stb r0, 0x48(r3)
    bl fn_8068DCF8
    cmpwi r3, 0x0
    bge lbl_fn_80690D70_00009ED0
    li r3, -0x1
    b lbl_fn_80690D70_00009F94
lbl_fn_80690D70_00009ED0:
    li r0, 0x0
    stw r0, 0x14(r31)
    stw r0, 0x10(r31)
    stw r0, 0x18(r31)
lbl_fn_80690D70_00009EE0:
    lwz r0, 0x8(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80690D70_00009F64
    lbz r0, 0x49(r31)
    li r4, 0x0
    lwz r5, 0x28(r31)
    lwz r3, 0x24(r31)
    cmpwi r0, 0x0
    stw r4, 0x14(r31)
    add r0, r5, r3
    stw r4, 0x10(r31)
    stw r4, 0x18(r31)
    stw r5, 0x4(r31)
    stw r5, 0x8(r31)
    stw r5, 0xc(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
    stw r0, 0x2c(r31)
    bne lbl_fn_80690D70_00009F64
    lwz r4, 0x40(r31)
    subi r3, r3, 0x1
    cmpwi r4, 0x0
    bgt lbl_fn_80690D70_00009F44
    li r0, 0x1
    b lbl_fn_80690D70_00009F54
lbl_fn_80690D70_00009F44:
    cmpwi r4, 0x1
    li r0, 0x1
    bgt lbl_fn_80690D70_00009F54
    mr r0, r4
lbl_fn_80690D70_00009F54:
    mullw r3, r3, r0
    lwz r0, 0x2c(r31)
    subf r0, r3, r0
    stw r0, 0x2c(r31)
lbl_fn_80690D70_00009F64:
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    cmplw r3, r0
    blt lbl_fn_80690D70_00009F8C
    mr r3, r31
    bl fn_8069172C
    cmpwi r3, 0x0
    bgt lbl_fn_80690D70_00009F8C
    li r3, -0x1
    b lbl_fn_80690D70_00009F94
lbl_fn_80690D70_00009F8C:
    lwz r3, 0x8(r31)
    lbz r3, 0x0(r3)
lbl_fn_80690D70_00009F94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80690E9C(void)
{
    nofralloc
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80690E9C_00009FBC
    li r3, -0x1
    blr
lbl_fn_80690E9C_00009FBC:
    lwz r5, 0x8(r3)
    lwz r0, 0x4(r3)
    cmplw r5, r0
    bgt lbl_fn_80690E9C_00009FD4
    li r3, -0x1
    blr
lbl_fn_80690E9C_00009FD4:
    cmpwi r4, -0x1
    subi r5, r5, 0x1
    stw r5, 0x8(r3)
    beq lbl_fn_80690E9C_00009FE8
    stb r4, 0x0(r5)
lbl_fn_80690E9C_00009FE8:
    addi r3, r4, 0x1
    subfic r0, r4, -0x1
    nor r0, r3, r0
    srawi r0, r0, 31
    andc r3, r4, r0
    blr
}

asm void fn_80690EF4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x4c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80690EF4_0000A030
    li r3, -0x1
    b lbl_fn_80690EF4_0000A144
lbl_fn_80690EF4_0000A030:
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80690EF4_0000A060
    bl fn_8068E09C
    cmpwi r3, 0x0
    bge lbl_fn_80690EF4_0000A050
    li r3, -0x1
    b lbl_fn_80690EF4_0000A144
lbl_fn_80690EF4_0000A050:
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x8(r30)
    stw r0, 0xc(r30)
lbl_fn_80690EF4_0000A060:
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80690EF4_0000A0FC
    lbz r0, 0x49(r30)
    li r3, 0x0
    lwz r5, 0x28(r30)
    cmpwi r0, 0x0
    stw r3, 0x4(r30)
    mr r4, r5
    stw r3, 0x8(r30)
    stw r3, 0xc(r30)
    bne lbl_fn_80690EF4_0000A0B0
    lwz r0, 0x3c(r30)
    addi r4, r5, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_80690EF4_0000A0B0
    lwz r3, 0x24(r30)
    divwu r0, r3, r0
    subf r0, r0, r3
    add r4, r4, r0
lbl_fn_80690EF4_0000A0B0:
    lbz r0, 0x4a(r30)
    cmpwi r0, 0x0
    beq lbl_fn_80690EF4_0000A0D8
    lwz r0, 0x24(r30)
    stw r4, 0x14(r30)
    add r3, r5, r0
    subi r3, r3, 0x1
    stw r4, 0x10(r30)
    stw r3, 0x18(r30)
    b lbl_fn_80690EF4_0000A0E4
lbl_fn_80690EF4_0000A0D8:
    stw r4, 0x14(r30)
    stw r4, 0x10(r30)
    stw r4, 0x18(r30)
lbl_fn_80690EF4_0000A0E4:
    lwz r3, 0x28(r30)
    lwz r0, 0x24(r30)
    stw r3, 0x30(r30)
    add r0, r3, r0
    stw r3, 0x2c(r30)
    stw r0, 0x34(r30)
lbl_fn_80690EF4_0000A0FC:
    cmpwi r31, -0x1
    beq lbl_fn_80690EF4_0000A118
    lwz r3, 0x14(r30)
    stb r31, 0x0(r3)
    lwz r3, 0x14(r30)
    addi r0, r3, 0x1
    stw r0, 0x14(r30)
lbl_fn_80690EF4_0000A118:
    mr r3, r30
    bl fn_8068DCF8
    cmpwi r3, 0x0
    bge lbl_fn_80690EF4_0000A130
    li r3, -0x1
    b lbl_fn_80690EF4_0000A144
lbl_fn_80690EF4_0000A130:
    addi r3, r31, 0x1
    subfic r0, r31, -0x1
    nor r0, r3, r0
    srawi r0, r0, 31
    andc r3, r31, r0
lbl_fn_80690EF4_0000A144:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80691050(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r31, r3
    mr r27, r4
    mr r29, r5
    mr r28, r6
    mr r30, r7
    lbz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80691050_0000A1A8
    rlwinm. r0, r8, 0, 27, 28
    beq lbl_fn_80691050_0000A1A8
    or. r0, r6, r5
    beq lbl_fn_80691050_0000A1C0
    lwz r0, 0x40(r4)
    cmpwi r0, 0x0
    bgt lbl_fn_80691050_0000A1C0
lbl_fn_80691050_0000A1A8:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80691050_0000A2C4
lbl_fn_80691050_0000A1C0:
    lwz r12, 0x0(r27)
    mr r3, r27
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_80691050_0000A1F4
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r31)
    stw r3, 0x0(r31)
    stw r0, 0x8(r31)
    b lbl_fn_80691050_0000A2C4
lbl_fn_80691050_0000A1F4:
    cmpwi r30, 0x1
    beq lbl_fn_80691050_0000A210
    cmpwi r30, 0x2
    beq lbl_fn_80691050_0000A218
    cmpwi r30, 0x4
    beq lbl_fn_80691050_0000A220
    b lbl_fn_80691050_0000A228
lbl_fn_80691050_0000A210:
    li r7, 0x0
    b lbl_fn_80691050_0000A240
lbl_fn_80691050_0000A218:
    li r7, 0x1
    b lbl_fn_80691050_0000A240
lbl_fn_80691050_0000A220:
    li r7, 0x2
    b lbl_fn_80691050_0000A240
lbl_fn_80691050_0000A228:
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r31)
    stw r3, 0x0(r31)
    stw r0, 0x8(r31)
    b lbl_fn_80691050_0000A2C4
lbl_fn_80691050_0000A240:
    lwz r4, 0x40(r27)
    mr r3, r27
    lwz r12, 0x0(r27)
    neg r0, r4
    andc r0, r0, r4
    lwz r12, 0x44(r12)
    srawi r0, r0, 31
    and r6, r4, r0
    mulhwu r4, r28, r6
    srawi r0, r6, 31
    mullw r5, r29, r6
    mullw r0, r28, r0
    add r4, r4, r5
    mullw r6, r28, r6
    add r5, r4, r0
    mtctr r12
    bctrl
    li r7, 0x0
    xoris r0, r3, 0x8000
    xoris r6, r7, 0x8000
    subfc r5, r7, r4
    subfe r6, r6, r0
    subfe r6, r0, r0
    neg. r6, r6
    beq lbl_fn_80691050_0000A2B8
    li r0, -0x1
    stw r0, 0x4(r31)
    stw r0, 0x0(r31)
    stw r7, 0x8(r31)
    b lbl_fn_80691050_0000A2C4
lbl_fn_80691050_0000A2B8:
    stw r4, 0x4(r31)
    stw r3, 0x0(r31)
    stw r7, 0x8(r31)
lbl_fn_80691050_0000A2C4:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806911CC(void)
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
    lbz r0, 0x4c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_806911CC_0000A310
    rlwinm. r0, r6, 0, 27, 28
    bne lbl_fn_806911CC_0000A328
lbl_fn_806911CC_0000A310:
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    b lbl_fn_806911CC_0000A3C8
lbl_fn_806911CC_0000A328:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_806911CC_0000A35C
    li r3, -0x1
    li r0, 0x0
    stw r3, 0x4(r29)
    stw r3, 0x0(r29)
    stw r0, 0x8(r29)
    b lbl_fn_806911CC_0000A3C8
lbl_fn_806911CC_0000A35C:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r5, 0x0(r31)
    li r7, 0x0
    lwz r12, 0x44(r12)
    lwz r6, 0x4(r31)
    mtctr r12
    bctrl
    li r6, 0x0
    xoris r0, r3, 0x8000
    xoris r5, r6, 0x8000
    subfc r3, r6, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_fn_806911CC_0000A3B0
    li r0, -0x1
    stw r0, 0x4(r29)
    stw r0, 0x0(r29)
    stw r6, 0x8(r29)
    b lbl_fn_806911CC_0000A3C8
lbl_fn_806911CC_0000A3B0:
    lwz r0, 0x0(r31)
    lwz r3, 0x4(r31)
    stw r3, 0x4(r29)
    stw r0, 0x0(r29)
    lwz r0, 0x8(r31)
    stw r0, 0x8(r29)
lbl_fn_806911CC_0000A3C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806912D8(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stmw r26, 0x98(r1)
    mr r31, r1
    mr r29, r3
    mr r30, r4
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bge lbl_fn_806912D8_0000A4D4
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x14(r31)
    addi r26, r4, 0x92
    addi r27, r31, 0x3c
    stw r3, 0x3c(r31)
    mr r3, r26
    stb r0, 0x18(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x18
    stw r3, 0x40(r31)
    mr r28, r3
    stw r3, 0x28(r31)
    li r3, 0x10
    stw r0, 0x2c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806912D8_0000A498
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r28, 0xc(r3)
lbl_fn_806912D8_0000A498:
    li r0, 0x0
    stw r3, 0x44(r31)
    stw r0, 0x28(r31)
    b lbl_fn_806912D8_0000A4AC
    bl fn_80084C24
lbl_fn_806912D8_0000A4AC:
    lwz r3, 0x40(r31)
    mr r4, r26
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r27
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_806912D8_0000A4D4:
    lwz r0, lbl_808803C8
    li r3, 0x0
    stb r3, 0x10(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806912D8_0000A4F8
    lwz r3, lbl_80880390
    addi r0, r3, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_806912D8_0000A4F8:
    lwz r3, 0x0(r30)
    lwz r27, lbl_808803C8
    lwz r0, 0x4(r3)
    cmplw r27, r0
    bge lbl_fn_806912D8_0000A520
    lwz r3, 0x0(r3)
    slwi r0, r27, 2
    lwzx r3, r3, r0
    cmpwi r3, 0x0
    bne lbl_fn_806912D8_0000A578
lbl_fn_806912D8_0000A520:
    li r3, 0x8
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_806912D8_0000A53C
    li r4, 0x0
    bl fn_80693744
lbl_fn_806912D8_0000A53C:
    lwz r0, lbl_808803C8
    lwz r3, 0x0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_806912D8_0000A55C
    lwz r4, lbl_80880390
    addi r0, r4, 0x1
    stw r0, lbl_80880390
    stw r0, lbl_808803C8
lbl_fn_806912D8_0000A55C:
    lwz r5, lbl_808803C8
    mr r4, r26
    bl fn_806920C0
    lwz r3, 0x0(r30)
    slwi r0, r27, 2
    lwz r3, 0x0(r3)
    lwzx r3, r3, r0
lbl_fn_806912D8_0000A578:
    stw r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    b lbl_fn_806912D8_0000A59C
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_806912D8_0000A598:
    b lbl_fn_806912D8_0000A598
lbl_fn_806912D8_0000A59C:
    stb r3, 0x49(r29)
    lwz r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    b lbl_fn_806912D8_0000A5C4
    addi r3, r31, 0x60
    bl fn_806974B4
lbl_fn_806912D8_0000A5C0:
    b lbl_fn_806912D8_0000A5C0
lbl_fn_806912D8_0000A5C4:
    stw r3, 0x40(r29)
    lwz r3, 0x44(r29)
    lwz r12, 0x0(r3)
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    b lbl_fn_806912D8_0000A5EC
    addi r3, r31, 0x78
    bl fn_806974B4
lbl_fn_806912D8_0000A5E8:
    b lbl_fn_806912D8_0000A5E8
lbl_fn_806912D8_0000A5EC:
    cmpwi r3, 0x0
    stw r3, 0x3c(r29)
    ble lbl_fn_806912D8_0000A608
    lwz r0, 0x24(r29)
    srwi r0, r0, 1
    cmplw r3, r0
    ble lbl_fn_806912D8_0000A6F8
lbl_fn_806912D8_0000A608:
    cmpwi r3, 0x0
    ble lbl_fn_806912D8_0000A63C
    lbz r0, 0x4b(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806912D8_0000A63C
    lwz r12, 0x0(r29)
    mr r3, r29
    lbz r5, 0x4a(r29)
    li r4, 0x0
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    b lbl_fn_806912D8_0000A6F8
lbl_fn_806912D8_0000A63C:
    lis r4, lbl_8076645C@ha
    li r0, 0x0
    addi r4, r4, lbl_8076645C@l
    lis r3, lbl_80775B60@ha
    addi r3, r3, lbl_80775B60@l
    stb r0, 0x8(r31)
    addi r27, r4, 0xac
    addi r26, r31, 0x30
    stw r3, 0x30(r31)
    mr r3, r27
    stb r0, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x34(r31)
    mr r30, r3
    stw r3, 0x20(r31)
    li r3, 0x10
    stw r0, 0x24(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806912D8_0000A6BC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_806912D8_0000A6BC:
    li r0, 0x0
    stw r3, 0x38(r31)
    stw r0, 0x20(r31)
    b lbl_fn_806912D8_0000A6D0
    bl fn_80084C24
lbl_fn_806912D8_0000A6D0:
    lwz r3, 0x34(r31)
    mr r4, r27
    bl strcpy
    lis r3, lbl_8076645C@ha
    lis r5, fn_8001A270@ha
    addi r3, r3, lbl_8076645C@l
    mr r4, r26
    addi r3, r3, 0x2e
    addi r5, r5, fn_8001A270@l
    bl fn_80697BB8
lbl_fn_806912D8_0000A6F8:
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806912D8_0000A798
    lbz r0, 0x49(r29)
    li r3, 0x0
    lwz r5, 0x28(r29)
    cmpwi r0, 0x0
    stw r3, 0x4(r29)
    mr r4, r5
    stw r3, 0x8(r29)
    stw r3, 0xc(r29)
    bne lbl_fn_806912D8_0000A748
    lwz r0, 0x3c(r29)
    addi r4, r5, 0x1
    cmpwi r0, 0x1
    ble lbl_fn_806912D8_0000A748
    lwz r3, 0x24(r29)
    divwu r0, r3, r0
    subf r0, r0, r3
    add r4, r4, r0
lbl_fn_806912D8_0000A748:
    lbz r0, 0x4a(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806912D8_0000A770
    lwz r0, 0x24(r29)
    stw r4, 0x14(r29)
    add r3, r5, r0
    subi r3, r3, 0x1
    stw r4, 0x10(r29)
    stw r3, 0x18(r29)
    b lbl_fn_806912D8_0000A77C
lbl_fn_806912D8_0000A770:
    stw r4, 0x14(r29)
    stw r4, 0x10(r29)
    stw r4, 0x18(r29)
lbl_fn_806912D8_0000A77C:
    lwz r3, 0x28(r29)
    lwz r0, 0x24(r29)
    stw r3, 0x30(r29)
    add r0, r3, r0
    stw r3, 0x2c(r29)
    stw r0, 0x34(r29)
    b lbl_fn_806912D8_0000A81C
lbl_fn_806912D8_0000A798:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_806912D8_0000A81C
    lbz r0, 0x49(r29)
    li r4, 0x0
    lwz r5, 0x28(r29)
    lwz r3, 0x24(r29)
    cmpwi r0, 0x0
    stw r4, 0x14(r29)
    add r0, r5, r3
    stw r4, 0x10(r29)
    stw r4, 0x18(r29)
    stw r5, 0x4(r29)
    stw r5, 0x8(r29)
    stw r5, 0xc(r29)
    stw r0, 0x34(r29)
    stw r0, 0x30(r29)
    stw r0, 0x2c(r29)
    bne lbl_fn_806912D8_0000A81C
    lwz r4, 0x40(r29)
    subi r3, r3, 0x1
    cmpwi r4, 0x0
    bgt lbl_fn_806912D8_0000A7FC
    li r0, 0x1
    b lbl_fn_806912D8_0000A80C
lbl_fn_806912D8_0000A7FC:
    cmpwi r4, 0x1
    li r0, 0x1
    bgt lbl_fn_806912D8_0000A80C
    mr r0, r4
lbl_fn_806912D8_0000A80C:
    mullw r3, r3, r0
    lwz r0, 0x2c(r29)
    subf r0, r3, r0
    stw r0, 0x2c(r29)
lbl_fn_806912D8_0000A81C:
    mr r10, r31
    lmw r26, 0x98(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8069172C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x4(r3)
    lwz r4, 0x8(r3)
    subf r30, r0, r4
    cmpwi r30, 0x4
    ble lbl_fn_8069172C_0000A888
    mr r3, r0
    subi r4, r4, 0x4
    li r30, 0x4
    li r5, 0x4
    bl memmove
    lwz r3, 0x4(r31)
    addi r0, r3, 0x4
    stw r0, 0x8(r31)
    stw r0, 0xc(r31)
lbl_fn_8069172C_0000A888:
    lbz r0, 0x49(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8069172C_0000A8D0
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r0, 0x24(r31)
    lwz r12, 0x40(r12)
    subf r5, r30, r0
    lwz r4, 0x8(r31)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bgt lbl_fn_8069172C_0000A8C0
    b lbl_fn_8069172C_0000AA40
lbl_fn_8069172C_0000A8C0:
    lwz r5, 0x8(r31)
    add r0, r5, r3
    stw r0, 0xc(r31)
    b lbl_fn_8069172C_0000AA34
lbl_fn_8069172C_0000A8D0:
    lwz r0, 0x40(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8069172C_0000A8E4
    li r5, 0x1
    b lbl_fn_8069172C_0000A8F4
lbl_fn_8069172C_0000A8E4:
    cmpwi r0, 0x1
    li r5, 0x1
    bgt lbl_fn_8069172C_0000A8F4
    mr r5, r0
lbl_fn_8069172C_0000A8F4:
    lwz r3, 0x4(r31)
    li r30, 0x0
    lwz r0, 0x8(r31)
    lwz r6, 0x24(r31)
    subf r3, r3, r0
    lwz r0, 0x28(r31)
    subf r3, r3, r6
    lwz r7, 0x34(r31)
    subi r3, r3, 0x1
    lwz r4, 0x30(r31)
    mullw r3, r5, r3
    add r0, r0, r6
    cmplw r4, r7
    subf r3, r3, r0
    stw r3, 0x2c(r31)
    bge lbl_fn_8069172C_0000A940
    subf r30, r4, r7
    mr r5, r30
    bl memmove
lbl_fn_8069172C_0000A940:
    lwz r0, 0x2c(r31)
    mr r3, r31
    lwz r5, 0x28(r31)
    add r4, r0, r30
    lwz r0, 0x24(r31)
    stw r4, 0x30(r31)
    add r0, r5, r0
    stw r0, 0x34(r31)
    subf r5, r4, r0
    lwz r12, 0x0(r31)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r0, 0x30(r31)
    cmpwi r3, 0x0
    lwz r5, 0x2c(r31)
    stw r0, 0x34(r31)
    stw r5, 0x30(r31)
    bgt lbl_fn_8069172C_0000A990
    b lbl_fn_8069172C_0000AA40
lbl_fn_8069172C_0000A990:
    add r6, r0, r3
    stw r6, 0x34(r31)
    lwz r3, 0x44(r31)
    addi r4, r31, 0x38
    lwz r8, 0x28(r31)
    addi r7, r1, 0x8
    lwz r12, 0x0(r3)
    addi r10, r1, 0xc
    lwz r0, 0x24(r31)
    lwz r12, 0x10(r12)
    add r9, r8, r0
    lwz r8, 0x8(r31)
    mtctr r12
    subi r9, r9, 0x1
    bctrl
    clrlwi r0, r3, 24
    lwz r3, 0x8(r1)
    cmplwi r0, 0x1
    stw r3, 0x30(r31)
    ble lbl_fn_8069172C_0000AA2C
    cmpwi r0, 0x2
    beq lbl_fn_8069172C_0000A9F4
    cmpwi r0, 0x3
    beq lbl_fn_8069172C_0000A9FC
    b lbl_fn_8069172C_0000AA34
lbl_fn_8069172C_0000A9F4:
    li r3, -0x1
    b lbl_fn_8069172C_0000AA40
lbl_fn_8069172C_0000A9FC:
    lwz r4, 0x2c(r31)
    lwz r0, 0x34(r31)
    lwz r3, 0x8(r31)
    subf r5, r4, r0
    bl memmove
    lwz r4, 0x34(r31)
    lwz r0, 0x2c(r31)
    stw r4, 0x30(r31)
    lwz r3, 0x8(r31)
    subf r0, r0, r4
    add r0, r3, r0
    stw r0, 0xc(r1)
lbl_fn_8069172C_0000AA2C:
    lwz r3, 0xc(r1)
    stw r3, 0xc(r31)
lbl_fn_8069172C_0000AA34:
    lwz r3, 0x8(r31)
    lwz r0, 0xc(r31)
    subf r3, r3, r0
lbl_fn_8069172C_0000AA40:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8069194C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r3
    stb r0, 0x0(r3)
    stb r0, 0x1(r3)
    stw r4, 0x4(r3)
    stw r1, 0x1c(r1)
    lwz r3, 0x0(r4)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069194C_0000AB08
    lwz r3, 0x34(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8069194C_0000AAA8
    bl fn_8068E3FC
lbl_fn_8069194C_0000AAA8:
    lwz r3, 0x4(r30)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069194C_0000AAC8
    li r0, 0x1
    stb r0, 0x0(r30)
    b lbl_fn_8069194C_0000ABA8
lbl_fn_8069194C_0000AAC8:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069194C_0000AAE8
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8069194C_0000AAE8:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8069194C_0000ABA8
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_8069194C_0000ABA8
lbl_fn_8069194C_0000AB08:
    ori r0, r0, 0x4
    stb r0, 0x32(r3)
    lwz r0, 0x24(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8069194C_0000AB28
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8069194C_0000AB28:
    lbz r4, 0x33(r3)
    lbz r0, 0x32(r3)
    and. r0, r0, r4
    beq lbl_fn_8069194C_0000ABA8
    lis r4, lbl_80779AB8@ha
    addi r4, r4, lbl_80779AB8@l
    bl fn_8068B39C
    b lbl_fn_8069194C_0000ABA8
    lwz r3, 0x4(r30)
    lwz r3, 0x0(r3)
    lbz r0, 0x32(r3)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_8069194C_0000AB68
    lbz r0, 0x32(r3)
    ori r0, r0, 0x1
    stb r0, 0x32(r3)
lbl_fn_8069194C_0000AB68:
    lwz r3, 0x4(r30)
    lwz r4, 0x0(r3)
    lbz r3, 0x32(r4)
    lbz r0, 0x33(r4)
    and. r0, r0, r3
    beq lbl_fn_8069194C_0000AB90
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
lbl_fn_8069194C_0000AB90:
    addi r3, r31, 0x8
    bl fn_80697CFC
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0x1c(r31)
    stw r0, 0x0(r1)
lbl_fn_8069194C_0000ABA8:
    mr r10, r31
    mr r3, r30
    lwz r31, 0x2c(r31)
    lwz r30, 0x28(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void dtor_80691AC0(void)
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
    beq lbl_dtor_80691AC0_0000AC34
    lwz r4, 0x4(r3)
    lwz r5, 0x0(r4)
    lbz r0, 0x32(r5)
    andi. r0, r0, 0x5
    bne lbl_dtor_80691AC0_0000AC24
    lhz r0, 0x30(r5)
    rlwinm. r0, r0, 0, 18, 18
    beq lbl_dtor_80691AC0_0000AC24
    lbz r0, 0x1(r3)
    cmpwi r0, 0x0
    bne lbl_dtor_80691AC0_0000AC24
    mr r3, r4
    bl fn_8068E3FC
lbl_dtor_80691AC0_0000AC24:
    cmpwi r31, 0x0
    ble lbl_dtor_80691AC0_0000AC34
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80691AC0_0000AC34:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80691B44(void)
{
    nofralloc
    blr
}

asm void fn_80691B48(void)
{
    nofralloc
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80691B60(void)
{
    nofralloc
    li r4, -0x1
    li r0, 0x0
    stw r4, 0x4(r3)
    stw r4, 0x0(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80691B78(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80691B80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r5, 0x8(r1)
    lwz r6, 0x8(r3)
    lwz r0, 0xc(r3)
    subf r3, r6, r0
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r0, r0, 1
    stw r0, 0xc(r1)
    cmpw r0, r5
    bge lbl_fn_80691B80_0000ACDC
    addi r4, r1, 0xc
lbl_fn_80691B80_0000ACDC:
    lwz r29, 0x0(r4)
    cmpwi r29, 0x0
    ble lbl_fn_80691B80_0000AD74
    lwz r4, 0x8(r30)
    mr r3, r31
    mr r5, r29
    bl fn_806846C4
    lwz r0, 0x8(r30)
    slwi r3, r29, 1
    add r31, r31, r3
    add r0, r0, r3
    stw r0, 0x8(r30)
    lwz r0, 0x8(r1)
    subf r5, r29, r0
    stw r5, 0x8(r1)
    b lbl_fn_80691B80_0000AD74
lbl_fn_80691B80_0000AD1C:
    lwz r3, 0x8(r30)
    lwz r0, 0xc(r30)
    cmplw r3, r0
    bge lbl_fn_80691B80_0000AD3C
    addi r0, r3, 0x2
    stw r0, 0x8(r30)
    lhz r3, 0x0(r3)
    b lbl_fn_80691B80_0000AD50
lbl_fn_80691B80_0000AD3C:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
lbl_fn_80691B80_0000AD50:
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_fn_80691B80_0000AD7C
    sth r3, 0x0(r31)
    addi r29, r29, 0x1
    addi r31, r31, 0x2
    lwz r3, 0x8(r1)
    subi r5, r3, 0x1
    stw r5, 0x8(r1)
lbl_fn_80691B80_0000AD74:
    cmpwi r5, 0x0
    bgt lbl_fn_80691B80_0000AD1C
lbl_fn_80691B80_0000AD7C:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80691C90(void)
{
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x1
    blr
}

asm void fn_80691C9C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    bne lbl_fn_80691C9C_0000ADE4
    lis r3, 0x1
    subi r3, r3, 0x1
    b lbl_fn_80691C9C_0000ADF4
lbl_fn_80691C9C_0000ADE4:
    lwz r3, 0x8(r31)
    addi r0, r3, 0x2
    stw r0, 0x8(r31)
    lhz r3, 0x0(r3)
lbl_fn_80691C9C_0000ADF4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80691CFC(void)
{
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x1
    blr
}

asm void fn_80691D08(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    addi r4, r1, 0x8
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r5, 0x8(r1)
    lwz r6, 0x14(r3)
    lwz r0, 0x18(r3)
    subf r6, r6, r0
    srwi r0, r6, 31
    add r0, r0, r6
    srawi r0, r0, 1
    stw r0, 0xc(r1)
    cmpw r0, r5
    bge lbl_fn_80691D08_0000AE64
    addi r4, r1, 0xc
lbl_fn_80691D08_0000AE64:
    lwz r29, 0x0(r4)
    cmpwi r29, 0x0
    ble lbl_fn_80691D08_0000AF00
    lwz r3, 0x14(r3)
    mr r4, r31
    mr r5, r29
    bl fn_806846C4
    lwz r0, 0x14(r30)
    slwi r3, r29, 1
    add r31, r31, r3
    add r0, r0, r3
    stw r0, 0x14(r30)
    lwz r0, 0x8(r1)
    subf r5, r29, r0
    stw r5, 0x8(r1)
    b lbl_fn_80691D08_0000AF00
lbl_fn_80691D08_0000AEA4:
    lwz r3, 0x14(r30)
    lwz r0, 0x18(r30)
    lhz r4, 0x0(r31)
    addi r31, r31, 0x2
    cmplw r3, r0
    bge lbl_fn_80691D08_0000AED0
    sth r4, 0x0(r3)
    addi r0, r3, 0x2
    stw r0, 0x14(r30)
    lhz r3, 0x0(r3)
    b lbl_fn_80691D08_0000AEE4
lbl_fn_80691D08_0000AED0:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
lbl_fn_80691D08_0000AEE4:
    clrlwi r0, r3, 16
    cmplwi r0, 0xffff
    beq lbl_fn_80691D08_0000AF08
    lwz r3, 0x8(r1)
    addi r29, r29, 0x1
    subi r5, r3, 0x1
    stw r5, 0x8(r1)
lbl_fn_80691D08_0000AF00:
    cmpwi r5, 0x0
    bgt lbl_fn_80691D08_0000AEA4
lbl_fn_80691D08_0000AF08:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80691E1C(void)
{
    nofralloc
    lis r3, 0x1
    subi r3, r3, 0x1
    blr
}

asm void fn_80691E28(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0xc
    b fn_8068C440
}

asm void fn_80691E3C(void)
{
    nofralloc
    li r11, 0x3c
    lwzx r11, r3, r11
    add r3, r3, r11
    subi r3, r3, 0x8
    b fn_8068C370
}

asm void fn_80691E50(void)
{
    nofralloc
    lwz r0, lbl_808803A0
    cmpwi r0, 0x0
    beqlr
    li r0, 0x0
    stw r0, lbl_808803A0
    blr
}

asm void dtor_80691E68(void)
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
    beq lbl_dtor_80691E68_0000AFD4
    beq lbl_dtor_80691E68_0000AFC4
    beq lbl_dtor_80691E68_0000AFC4
    beq lbl_dtor_80691E68_0000AFC4
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_dtor_80691E68_0000AFC4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_dtor_80691E68_0000AFC4:
    cmpwi r31, 0x0
    ble lbl_dtor_80691E68_0000AFD4
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80691E68_0000AFD4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void dtor_80691EE4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_dtor_80691EE4_0000B018
    cmpwi r4, 0x0
    ble lbl_dtor_80691EE4_0000B018
    bl dtor_80084684
lbl_dtor_80691EE4_0000B018:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80691F24(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x84(r1)
    stmw r26, 0x68(r1)
    mr r31, r1
    mr r29, r3
    mr r30, r4
    beq lbl_fn_80691F24_0000B19C
    lbz r0, lbl_808803A4
    cmpwi r0, 0x0
    bne lbl_fn_80691F24_0000B08C
    lwz r0, lbl_808803A0
    cmpwi r0, 0x0
    bne lbl_fn_80691F24_0000B08C
    la r0, lbl_80880398
    cmpwi r0, 0x0
    beq lbl_fn_80691F24_0000B07C
    stw r1, 0x44(r31)
lbl_fn_80691F24_0000B07C:
    lis r3, fn_80691E50@ha
    stw r0, lbl_808803A0
    addi r3, r3, fn_80691E50@l
    bl fn_80686ED8
lbl_fn_80691F24_0000B08C:
    lwz r0, lbl_808803A0
    li r3, 0x1
    stb r3, lbl_808803A4
    cmpwi r0, 0x0
    bne lbl_fn_80691F24_0000B0C0
    la r0, lbl_80880398
    cmpwi r0, 0x0
    beq lbl_fn_80691F24_0000B0B0
    stw r1, 0x2c(r31)
lbl_fn_80691F24_0000B0B0:
    lis r3, fn_80691E50@ha
    stw r0, lbl_808803A0
    addi r3, r3, fn_80691E50@l
    bl fn_80686ED8
lbl_fn_80691F24_0000B0C0:
    lwz r3, lbl_808803A0
    li r0, 0x1
    stw r3, 0x10(r31)
    li r26, 0x0
    lwz r27, 0x4(r29)
    li r28, 0x0
    stb r0, 0x14(r31)
    b lbl_fn_80691F24_0000B130
lbl_fn_80691F24_0000B0E0:
    lwz r3, 0x0(r29)
    lwzx r3, r3, r28
    cmpwi r3, 0x0
    beq lbl_fn_80691F24_0000B128
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_80691F24_0000B104
    b lbl_fn_80691F24_0000B108
lbl_fn_80691F24_0000B104:
    li r3, 0x0
lbl_fn_80691F24_0000B108:
    cmpwi r3, 0x0
    beq lbl_fn_80691F24_0000B128
    lwz r12, 0x0(r3)
    li r0, 0x1
    extsh r4, r0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_80691F24_0000B128:
    addi r28, r28, 0x4
    addi r26, r26, 0x1
lbl_fn_80691F24_0000B130:
    cmplw r26, r27
    blt lbl_fn_80691F24_0000B0E0
    addic. r0, r29, 0xc
    beq lbl_fn_80691F24_0000B154
    lwz r0, 0xc(r29)
    srwi. r0, r0, 31
    beq lbl_fn_80691F24_0000B154
    lwz r3, 0x14(r29)
    bl dtor_80084684
lbl_fn_80691F24_0000B154:
    cmpwi r29, 0x0
    beq lbl_fn_80691F24_0000B18C
    beq lbl_fn_80691F24_0000B18C
    beq lbl_fn_80691F24_0000B18C
    beq lbl_fn_80691F24_0000B18C
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_80691F24_0000B18C
    lwz r4, 0x4(r29)
    li r0, 0x0
    stb r0, 0x8(r31)
    subf r0, r4, r4
    stw r0, 0x4(r29)
    bl dtor_80084684
lbl_fn_80691F24_0000B18C:
    extsh. r0, r30
    ble lbl_fn_80691F24_0000B19C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80691F24_0000B19C:
    mr r3, r29
    b lbl_fn_80691F24_0000B1B0
    addi r3, r31, 0x48
    bl fn_806974B4
lbl_fn_80691F24_0000B1AC:
    b lbl_fn_80691F24_0000B1AC
lbl_fn_80691F24_0000B1B0:
    mr r10, r31
    lmw r26, 0x68(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_806920C0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stmw r23, 0xbc(r1)
    mr r31, r1
    mr r24, r3
    mr r25, r4
    mr r26, r5
    lwz r6, 0x4(r4)
    addi r0, r6, 0x1
    stw r0, 0x4(r4)
    lwz r0, 0x4(r3)
    cmplw r5, r0
    blt lbl_fn_806920C0_0000B774
    stw r1, 0xb4(r31)
    addi r0, r5, 0x1
    lwz r5, 0x4(r3)
    cmplw r0, r5
    ble lbl_fn_806920C0_0000B6F4
    lwz r6, 0x8(r3)
    subf r27, r5, r0
    li r0, 0x0
    stb r0, 0x38(r31)
    cmplw r27, r6
    bgt lbl_fn_806920C0_0000B23C
    subf r0, r27, r6
    cmplw r5, r0
    ble lbl_fn_806920C0_0000B350
lbl_fn_806920C0_0000B23C:
    lwz r5, 0x4(r3)
    lis r4, 0x4000
    lwz r28, 0x8(r3)
    subi r0, r4, 0x1
    add r3, r5, r27
    li r4, 0x0
    subf r3, r6, r3
    subf r0, r28, r0
    cmplw r3, r0
    stb r4, 0x10(r31)
    ble lbl_fn_806920C0_0000B328
    lis r29, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    stw r3, 0x68(r31)
    addi r29, r29, lbl_80766688@l
    addi r30, r31, 0x68
    stb r4, 0x8(r31)
    mr r3, r29
    stb r4, 0xc(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0xc
    stw r3, 0x6c(r31)
    mr r23, r3
    stw r3, 0x50(r31)
    li r3, 0x10
    stw r0, 0x54(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B2E0
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r23, 0xc(r3)
lbl_fn_806920C0_0000B2E0:
    li r0, 0x0
    stw r3, 0x70(r31)
    stw r0, 0x50(r31)
    b lbl_fn_806920C0_0000B2F4
    bl fn_80084C24
lbl_fn_806920C0_0000B2F4:
    lwz r3, 0x6c(r31)
    mr r4, r29
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x0(r30)
    mr r4, r30
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_806920C0_0000B328:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    bge lbl_fn_806920C0_0000B33C
    b lbl_fn_806920C0_0000B378
lbl_fn_806920C0_0000B33C:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r28, r0
    bge lbl_fn_806920C0_0000B378
    b lbl_fn_806920C0_0000B378
lbl_fn_806920C0_0000B350:
    lwz r3, 0x0(r3)
    slwi r0, r5, 2
    slwi r5, r27, 2
    li r4, 0x0
    add r3, r3, r0
    bl memset
    lwz r0, 0x4(r24)
    add r0, r0, r27
    stw r0, 0x4(r24)
    b lbl_fn_806920C0_0000B774
lbl_fn_806920C0_0000B378:
    li r5, 0x0
    addi r4, r24, 0x8
    lis r3, 0x4000
    stw r5, 0x8c(r31)
    subi r0, r3, 0x1
    stw r5, 0x90(r31)
    stw r5, 0x94(r31)
    stw r4, 0x98(r31)
    stw r5, 0x9c(r31)
    lwz r3, 0x4(r24)
    lwz r30, 0x8(r24)
    add r3, r3, r27
    subf r3, r30, r3
    subf r0, r30, r0
    cmplw r3, r0
    stw r3, 0x48(r31)
    ble lbl_fn_806920C0_0000B47C
    lis r29, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    stw r3, 0x80(r31)
    addi r29, r29, lbl_80766688@l
    addi r28, r31, 0x80
    stb r5, 0x34(r31)
    mr r3, r29
    stb r5, 0x30(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x30
    stw r3, 0x84(r31)
    mr r23, r3
    stw r3, 0x60(r31)
    li r3, 0x10
    stw r0, 0x64(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B434
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r23, 0xc(r3)
lbl_fn_806920C0_0000B434:
    li r0, 0x0
    stw r3, 0x88(r31)
    stw r0, 0x60(r31)
    b lbl_fn_806920C0_0000B448
    bl fn_80084C24
lbl_fn_806920C0_0000B448:
    lwz r3, 0x84(r31)
    mr r4, r29
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x0(r28)
    mr r4, r28
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_806920C0_0000B47C:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r30, r0
    bge lbl_fn_806920C0_0000B4CC
    addi r5, r30, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x48(r31)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r31, 0x40
    srwi r4, r4, 2
    stw r4, 0x40(r31)
    cmplw r4, r0
    bge lbl_fn_806920C0_0000B4C0
    addi r3, r31, 0x48
lbl_fn_806920C0_0000B4C0:
    lwz r0, 0x0(r3)
    add r29, r30, r0
    b lbl_fn_806920C0_0000B510
lbl_fn_806920C0_0000B4CC:
    lis r3, 0x2aab
    subi r0, r3, 0x5556
    cmplw r30, r0
    bge lbl_fn_806920C0_0000B508
    addi r3, r30, 0x1
    lwz r0, 0x48(r31)
    srwi r3, r3, 1
    stw r3, 0x44(r31)
    cmplw r3, r0
    addi r3, r31, 0x44
    bge lbl_fn_806920C0_0000B4FC
    addi r3, r31, 0x48
lbl_fn_806920C0_0000B4FC:
    lwz r0, 0x0(r3)
    add r29, r30, r0
    b lbl_fn_806920C0_0000B510
lbl_fn_806920C0_0000B508:
    lis r3, 0x4000
    subi r29, r3, 0x1
lbl_fn_806920C0_0000B510:
    lis r3, 0x4000
    li r4, 0x0
    subi r0, r3, 0x1
    stb r4, 0x24(r31)
    cmplw r29, r0
    ble lbl_fn_806920C0_0000B5E8
    lis r28, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    stw r3, 0x74(r31)
    addi r28, r28, lbl_80766688@l
    addi r30, r31, 0x74
    stb r4, 0x2c(r31)
    mr r3, r28
    stb r4, 0x28(r31)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r31, 0x28
    stw r3, 0x78(r31)
    mr r23, r3
    stw r3, 0x58(r31)
    li r3, 0x10
    stw r0, 0x5c(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B5A0
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r23, 0xc(r3)
lbl_fn_806920C0_0000B5A0:
    li r0, 0x0
    stw r3, 0x7c(r31)
    stw r0, 0x58(r31)
    b lbl_fn_806920C0_0000B5B4
    bl fn_80084C24
lbl_fn_806920C0_0000B5B4:
    lwz r3, 0x78(r31)
    mr r4, r28
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x0(r30)
    mr r4, r30
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_806920C0_0000B5E8:
    slwi r3, r29, 2
    bl fn_800844D8
    lwz r0, 0x90(r31)
    li r30, 0x0
    stw r3, 0x8c(r31)
    slwi r5, r27, 2
    slwi r6, r0, 2
    li r4, 0x0
    stw r29, 0x94(r31)
    lwz r0, 0x4(r24)
    stw r0, 0x9c(r31)
    slwi r0, r0, 2
    add r0, r3, r0
    stb r30, 0x20(r31)
    add r3, r6, r0
    bl memset
    lwz r3, 0x90(r31)
    lwz r0, 0x9c(r31)
    add r3, r3, r27
    stw r3, 0x90(r31)
    lwz r3, 0x8c(r31)
    lwz r4, 0x4(r24)
    lwz r27, 0x0(r24)
    slwi r4, r4, 2
    stb r30, 0x1c(r31)
    add r5, r27, r4
    subf r5, r27, r5
    mr r4, r27
    srawi r5, r5, 2
    addze r23, r5
    subf r0, r23, r0
    stw r0, 0x9c(r31)
    slwi r28, r23, 2
    slwi r0, r0, 2
    mr r5, r28
    add r3, r3, r0
    bl memcpy
    mr r3, r27
    mr r5, r28
    li r4, 0x0
    bl memset
    lwz r0, 0x90(r31)
    addic. r4, r31, 0x8c
    stb r30, 0x18(r31)
    add r0, r0, r23
    stw r0, 0x90(r31)
    stw r30, 0x4(r24)
    lwz r3, 0x8(r24)
    lwz r0, 0x94(r31)
    stw r0, 0x8(r24)
    stw r3, 0x94(r31)
    lwz r0, 0x8c(r31)
    lwz r3, 0x0(r24)
    stw r0, 0x0(r24)
    stw r3, 0x8c(r31)
    lwz r0, 0x90(r31)
    stw r0, 0x4(r24)
    stw r30, 0x4(r4)
    beq lbl_fn_806920C0_0000B774
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B774
    subf r0, r30, r30
    stb r30, 0x14(r31)
    stw r0, 0x4(r4)
    bl dtor_80084684
    b lbl_fn_806920C0_0000B774
lbl_fn_806920C0_0000B6F4:
    bge lbl_fn_806920C0_0000B774
    subf r0, r0, r5
    li r4, 0x0
    subf r0, r0, r5
    stb r4, 0x3c(r31)
    stw r0, 0x4(r3)
    b lbl_fn_806920C0_0000B774
    lwz r0, 0x4(r25)
    subic. r0, r0, 0x1
    stw r0, 0x4(r25)
    bne lbl_fn_806920C0_0000B728
    mr r3, r25
    b lbl_fn_806920C0_0000B72C
lbl_fn_806920C0_0000B728:
    li r3, 0x0
lbl_fn_806920C0_0000B72C:
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B74C
    lwz r12, 0x0(r3)
    li r0, 0x1
    extsh r4, r0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_806920C0_0000B74C:
    li r3, 0x0
    li r4, 0x0
    li r5, 0x0
    bl fn_80697BB8
    addi r3, r31, 0xa0
    bl fn_80697CFC
    nop
    lwz r0, 0x0(r1)
    lwz r1, 0xb4(r31)
    stw r0, 0x0(r1)
lbl_fn_806920C0_0000B774:
    lwz r27, 0x0(r24)
    slwi r24, r26, 2
    lwzx r3, r27, r24
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B7C0
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_806920C0_0000B79C
    b lbl_fn_806920C0_0000B7A0
lbl_fn_806920C0_0000B79C:
    li r3, 0x0
lbl_fn_806920C0_0000B7A0:
    cmpwi r3, 0x0
    beq lbl_fn_806920C0_0000B7C0
    lwz r12, 0x0(r3)
    li r0, 0x1
    extsh r4, r0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_806920C0_0000B7C0:
    stwx r25, r27, r24
    mr r10, r31
    lmw r23, 0xbc(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_806926D4(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    mr r31, r1
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    stw r28, 0xa0(r1)
    lbz r0, lbl_808803A5
    extsb. r0, r0
    bne lbl_fn_806926D4_0000BA0C
    lbz r0, lbl_808803A4
    cmpwi r0, 0x0
    bne lbl_fn_806926D4_0000B844
    lwz r0, lbl_808803A0
    cmpwi r0, 0x0
    bne lbl_fn_806926D4_0000B844
    la r0, lbl_80880398
    cmpwi r0, 0x0
    beq lbl_fn_806926D4_0000B834
    stw r1, 0x4c(r31)
lbl_fn_806926D4_0000B834:
    lis r3, fn_80691E50@ha
    stw r0, lbl_808803A0
    addi r3, r3, fn_80691E50@l
    bl fn_80686ED8
lbl_fn_806926D4_0000B844:
    lwz r0, lbl_808803A0
    li r3, 0x1
    stb r3, lbl_808803A4
    cmpwi r0, 0x0
    bne lbl_fn_806926D4_0000B878
    la r0, lbl_80880398
    cmpwi r0, 0x0
    beq lbl_fn_806926D4_0000B868
    stw r1, 0x64(r31)
lbl_fn_806926D4_0000B868:
    lis r3, fn_80691E50@ha
    stw r0, lbl_808803A0
    addi r3, r3, fn_80691E50@l
    bl fn_80686ED8
lbl_fn_806926D4_0000B878:
    lbz r0, lbl_808803B0
    li r3, 0x1
    lwz r4, lbl_808803A0
    extsb. r0, r0
    stw r4, 0x18(r31)
    stb r3, 0x1c(r31)
    bne lbl_fn_806926D4_0000B9B0
    li r3, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_806926D4_0000B90C
    li r0, 0x0
    stw r0, 0x0(r3)
    lis r4, lbl_80766688@ha
    stw r0, 0x4(r3)
    addi r4, r4, lbl_80766688@l
    addi r30, r4, 0x9d
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    mr r3, r30
    bl strlen
    mr r28, r3
    addi r3, r29, 0xc
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0xc(r31)
    mr r6, r30
    stb r0, 0x8(r31)
    addi r3, r29, 0xc
    add r7, r30, r28
    addi r8, r31, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
lbl_fn_806926D4_0000B90C:
    li r0, 0x0
    stw r0, 0x10(r31)
    li r3, 0x10
    stw r29, 0x14(r31)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_806926D4_0000B944
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_807BBDE0@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_807BBDE0@l
    stw r4, 0x0(r3)
    stw r29, 0xc(r3)
lbl_fn_806926D4_0000B944:
    li r0, 0x0
    stw r0, 0x14(r31)
    b lbl_fn_806926D4_0000B954
    bl fn_80691F24
lbl_fn_806926D4_0000B954:
    la r4, lbl_808803B8
    cmpwi r3, 0x0
    stw r29, lbl_808803B8
    stw r3, 0x4(r4)
    beq lbl_fn_806926D4_0000B974
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
lbl_fn_806926D4_0000B974:
    cmpwi r3, 0x0
    beq lbl_fn_806926D4_0000B990
    bl fn_806952C4
    b lbl_fn_806926D4_0000B990
    addi r3, r31, 0x68
    bl fn_806974B4
lbl_fn_806926D4_0000B98C:
    b lbl_fn_806926D4_0000B98C
lbl_fn_806926D4_0000B990:
    lis r4, dtor_800E0C8C@ha
    lis r5, lbl_80832C44@ha
    addi r4, r4, dtor_800E0C8C@l
    la r3, lbl_808803B8
    addi r5, r5, lbl_80832C44@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808803B0
lbl_fn_806926D4_0000B9B0:
    la r5, lbl_808803B8
    b lbl_fn_806926D4_0000B9C4
    addi r3, r31, 0x20
    bl fn_806974B4
lbl_fn_806926D4_0000B9C0:
    b lbl_fn_806926D4_0000B9C0
lbl_fn_806926D4_0000B9C4:
    lwz r4, 0x4(r5)
    la r3, lbl_808803A8
    lwz r0, 0x0(r5)
    cmpwi r4, 0x0
    stw r0, lbl_808803A8
    stw r4, 0x4(r3)
    beq lbl_fn_806926D4_0000B9EC
    lwz r3, 0x4(r4)
    addi r0, r3, 0x1
    stw r0, 0x4(r4)
lbl_fn_806926D4_0000B9EC:
    lis r4, dtor_800E0C8C@ha
    lis r5, lbl_80832C38@ha
    addi r4, r4, dtor_800E0C8C@l
    la r3, lbl_808803A8
    addi r5, r5, lbl_80832C38@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_808803A5
lbl_fn_806926D4_0000BA0C:
    la r3, lbl_808803A8
    b lbl_fn_806926D4_0000BA20
    addi r3, r31, 0x80
    bl fn_806974B4
lbl_fn_806926D4_0000BA1C:
    b lbl_fn_806926D4_0000BA1C
lbl_fn_806926D4_0000BA20:
    mr r10, r31
    lwz r31, 0xac(r31)
    lwz r30, 0xa8(r10)
    lwz r29, 0xa4(r10)
    lwz r28, 0xa0(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_8069293C(void)
{
    nofralloc
    lis r9, lbl_807BBECC@ha
    lis r8, lbl_80765538@ha
    lis r7, lbl_80765638@ha
    cmpwi r4, 0x0
    addi r9, r9, lbl_807BBECC@l
    addi r8, r8, lbl_80765538@l
    addi r7, r7, lbl_80765638@l
    stw r6, 0x4(r3)
    stw r9, 0x0(r3)
    stw r4, 0x8(r3)
    stw r8, 0xc(r3)
    stw r7, 0x10(r3)
    stb r5, 0x14(r3)
    bnelr
    lis r4, lbl_80765338@ha
    li r0, 0x0
    addi r4, r4, lbl_80765338@l
    stw r4, 0x8(r3)
    stb r0, 0x14(r3)
    blr
}

asm void fn_8069298C(void)
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
    beq lbl_fn_8069298C_0000BAEC
    lbz r0, 0x14(r3)
    lis r4, lbl_807BBECC@ha
    addi r4, r4, lbl_807BBECC@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8069298C_0000BADC
    lwz r3, 0x8(r3)
    bl fn_80084C24
lbl_fn_8069298C_0000BADC:
    cmpwi r31, 0x0
    ble lbl_fn_8069298C_0000BAEC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8069298C_0000BAEC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806929FC(void)
{
    nofralloc
    lwz r3, 0x10(r3)
    clrlwi r0, r4, 24
    lbzx r0, r3, r0
    extsb r3, r0
    blr
}

asm void fn_80692A10(void)
{
    nofralloc
    cmplw r4, r5
    subf r6, r4, r5
    bge lbl_fn_80692A10_0000BBE0
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_fn_80692A10_0000BBC4
lbl_fn_80692A10_0000BB34:
    lwz r7, 0x10(r3)
    lbz r0, 0x0(r4)
    lbzx r0, r7, r0
    stb r0, 0x0(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x1(r4)
    lbzx r0, r7, r0
    stb r0, 0x1(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x2(r4)
    lbzx r0, r7, r0
    stb r0, 0x2(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x3(r4)
    lbzx r0, r7, r0
    stb r0, 0x3(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x4(r4)
    lbzx r0, r7, r0
    stb r0, 0x4(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x5(r4)
    lbzx r0, r7, r0
    stb r0, 0x5(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x6(r4)
    lbzx r0, r7, r0
    stb r0, 0x6(r4)
    lwz r7, 0x10(r3)
    lbz r0, 0x7(r4)
    lbzx r0, r7, r0
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_80692A10_0000BB34
    andi. r6, r6, 0x7
    beq lbl_fn_80692A10_0000BBE0
lbl_fn_80692A10_0000BBC4:
    mtctr r6
lbl_fn_80692A10_0000BBC8:
    lwz r7, 0x10(r3)
    lbz r0, 0x0(r4)
    lbzx r0, r7, r0
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_80692A10_0000BBC8
lbl_fn_80692A10_0000BBE0:
    mr r3, r5
    blr
}

asm void fn_80692ADC(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    clrlwi r0, r4, 24
    lbzx r0, r3, r0
    extsb r3, r0
    blr
}

asm void fn_80692AF0(void)
{
    nofralloc
    cmplw r4, r5
    subf r6, r4, r5
    bge lbl_fn_80692AF0_0000BCC0
    srwi. r0, r6, 3
    mtctr r0
    beq lbl_fn_80692AF0_0000BCA4
lbl_fn_80692AF0_0000BC14:
    lwz r7, 0xc(r3)
    lbz r0, 0x0(r4)
    lbzx r0, r7, r0
    stb r0, 0x0(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x1(r4)
    lbzx r0, r7, r0
    stb r0, 0x1(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x2(r4)
    lbzx r0, r7, r0
    stb r0, 0x2(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x3(r4)
    lbzx r0, r7, r0
    stb r0, 0x3(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x4(r4)
    lbzx r0, r7, r0
    stb r0, 0x4(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x5(r4)
    lbzx r0, r7, r0
    stb r0, 0x5(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x6(r4)
    lbzx r0, r7, r0
    stb r0, 0x6(r4)
    lwz r7, 0xc(r3)
    lbz r0, 0x7(r4)
    lbzx r0, r7, r0
    stb r0, 0x7(r4)
    addi r4, r4, 0x8
    bdnz lbl_fn_80692AF0_0000BC14
    andi. r6, r6, 0x7
    beq lbl_fn_80692AF0_0000BCC0
lbl_fn_80692AF0_0000BCA4:
    mtctr r6
lbl_fn_80692AF0_0000BCA8:
    lwz r7, 0xc(r3)
    lbz r0, 0x0(r4)
    lbzx r0, r7, r0
    stb r0, 0x0(r4)
    addi r4, r4, 0x1
    bdnz lbl_fn_80692AF0_0000BCA8
lbl_fn_80692AF0_0000BCC0:
    mr r3, r5
    blr
}

asm void fn_80692BBC(void)
{
    nofralloc
    mr r3, r4
    blr
}

asm void fn_80692BC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r6
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    subf r5, r4, r5
    bl memcpy
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80692BFC(void)
{
    nofralloc
    mr r3, r4
    blr
}

asm void fn_80692C04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r7
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    subf r5, r4, r5
    bl memcpy
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80692C3C(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    lis r5, lbl_807BBE7C@ha
    addi r8, r3, 0x8
    stw r0, 0x44(r1)
    addi r5, r5, lbl_807BBE7C@l
    la r6, lbl_8087EC84
    la r7, lbl_8087EC84
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    li r30, 0x0
    stw r29, 0x34(r1)
    mr r29, r3
    stw r4, 0x4(r3)
    la r4, lbl_8087EC80
    stw r5, 0x0(r3)
    la r5, lbl_8087EC82
    stw r30, 0x8(r3)
    stw r30, 0xc(r3)
    stw r30, 0x10(r3)
    stw r30, 0x14(r3)
    stw r30, 0x18(r3)
    stw r30, 0x1c(r3)
    stw r30, 0x20(r3)
    stw r30, 0x24(r3)
    stw r30, 0x28(r3)
    mr r3, r8
    bl fn_806945A4
    addi r6, r1, 0x2e
    li r0, 0x106
    sth r0, 0x2e(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087EC86
    la r5, lbl_8087EC86
    bl fn_806945A4
    addi r6, r1, 0x2c
    li r0, 0x104
    sth r0, 0x2c(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087EC88
    la r5, lbl_8087EC8A
    bl fn_806945A4
    addi r3, r29, 0x8
    la r4, lbl_8087EC8C
    la r5, lbl_8087EC8E
    la r6, lbl_8087EC90
    la r7, lbl_8087EC90
    bl fn_806945A4
    addi r6, r1, 0x2a
    li r0, 0x142
    sth r0, 0x2a(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087EC92
    la r5, lbl_8087EC92
    bl fn_806945A4
    addi r6, r1, 0x28
    li r31, 0xd0
    sth r31, 0x28(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087EC94
    la r5, lbl_8087EC96
    bl fn_806945A4
    addi r6, r1, 0x26
    li r0, 0x458
    sth r0, 0x26(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087EC98
    la r5, lbl_8087EC9A
    bl fn_806945A4
    addi r6, r1, 0x24
    sth r31, 0x24(r1)
    addi r3, r29, 0x8
    la r4, lbl_8087EC9C
    mr r7, r6
    la r5, lbl_8087EC9E
    bl fn_806945A4
    addi r6, r1, 0x22
    li r0, 0x651
    sth r0, 0x22(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087ECA0
    la r5, lbl_8087ECA2
    bl fn_806945A4
    addi r6, r1, 0x20
    li r0, 0x251
    sth r0, 0x20(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087ECA4
    la r5, lbl_8087ECA6
    bl fn_806945A4
    addi r6, r1, 0x1e
    sth r31, 0x1e(r1)
    addi r3, r29, 0x8
    la r4, lbl_8087ECA8
    mr r7, r6
    la r5, lbl_8087ECAA
    bl fn_806945A4
    addi r6, r1, 0x1c
    li r0, 0x471
    sth r0, 0x1c(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087ECAC
    la r5, lbl_8087ECAE
    bl fn_806945A4
    addi r6, r1, 0x1a
    li r0, 0x71
    sth r0, 0x1a(r1)
    mr r7, r6
    addi r3, r29, 0x8
    la r4, lbl_8087ECB0
    la r5, lbl_8087ECB2
    bl fn_806945A4
    addi r6, r1, 0x18
    sth r31, 0x18(r1)
    addi r3, r29, 0x8
    la r4, lbl_8087ECB4
    mr r7, r6
    la r5, lbl_8087ECB6
    bl fn_806945A4
    addi r3, r29, 0x8
    la r4, lbl_8087ECB8
    la r5, lbl_8087ECB8
    la r6, lbl_8087ECBA
    la r7, lbl_8087ECBA
    bl fn_806945A4
    lis r31, 0x1
    sth r30, 0x12(r1)
    subi r0, r31, 0x1
    addi r3, r29, 0x14
    sth r0, 0x10(r1)
    addi r4, r1, 0x16
    addi r5, r1, 0x14
    addi r6, r1, 0x12
    sth r0, 0x14(r1)
    addi r7, r1, 0x10
    sth r30, 0x16(r1)
    bl fn_806943B8
    addi r3, r29, 0x14
    la r4, lbl_8087ECBC
    la r5, lbl_8087ECBE
    la r6, lbl_8087ECC0
    la r7, lbl_8087ECC2
    bl fn_806943B8
    subi r0, r31, 0x1
    sth r0, 0x8(r1)
    addi r3, r29, 0x20
    addi r4, r1, 0xe
    sth r30, 0xa(r1)
    addi r5, r1, 0xc
    addi r6, r1, 0xa
    addi r7, r1, 0x8
    sth r0, 0xc(r1)
    sth r30, 0xe(r1)
    bl fn_806943B8
    addi r3, r29, 0x20
    la r4, lbl_8087ECC4
    la r5, lbl_8087ECC6
    la r6, lbl_8087ECC8
    la r7, lbl_8087ECCA
    bl fn_806943B8
    lwz r31, 0x3c(r1)
    mr r3, r29
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void dtor_80692EFC(void)
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
    beq lbl_dtor_80692EFC_0000C068
    beq lbl_dtor_80692EFC_0000C058
    beq lbl_dtor_80692EFC_0000C058
    beq lbl_dtor_80692EFC_0000C058
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_dtor_80692EFC_0000C058
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_dtor_80692EFC_0000C058:
    cmpwi r31, 0x0
    ble lbl_dtor_80692EFC_0000C068
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80692EFC_0000C068:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void dtor_80692F78(void)
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
    beq lbl_dtor_80692F78_0000C0E4
    beq lbl_dtor_80692F78_0000C0D4
    beq lbl_dtor_80692F78_0000C0D4
    beq lbl_dtor_80692F78_0000C0D4
    lwz r4, 0x0(r3)
    cmpwi r4, 0x0
    beq lbl_dtor_80692F78_0000C0D4
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    mr r3, r4
    bl dtor_80084684
lbl_dtor_80692F78_0000C0D4:
    cmpwi r31, 0x0
    ble lbl_dtor_80692F78_0000C0E4
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80692F78_0000C0E4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80692FF4(void)
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
    beq lbl_fn_80692FF4_0000C1C4
    addic. r4, r3, 0x20
    beq lbl_fn_80692FF4_0000C154
    beq lbl_fn_80692FF4_0000C154
    beq lbl_fn_80692FF4_0000C154
    beq lbl_fn_80692FF4_0000C154
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80692FF4_0000C154
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80692FF4_0000C154:
    addic. r4, r30, 0x14
    beq lbl_fn_80692FF4_0000C184
    beq lbl_fn_80692FF4_0000C184
    beq lbl_fn_80692FF4_0000C184
    beq lbl_fn_80692FF4_0000C184
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80692FF4_0000C184
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80692FF4_0000C184:
    addic. r4, r30, 0x8
    beq lbl_fn_80692FF4_0000C1B4
    beq lbl_fn_80692FF4_0000C1B4
    beq lbl_fn_80692FF4_0000C1B4
    beq lbl_fn_80692FF4_0000C1B4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80692FF4_0000C1B4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80692FF4_0000C1B4:
    cmpwi r31, 0x0
    ble lbl_fn_80692FF4_0000C1C4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80692FF4_0000C1C4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806930D4(void)
{
    nofralloc
    addi r0, r5, 0x1
    subf r0, r4, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_806930D4_0000C2E4
lbl_fn_806930D4_0000C1F8:
    lwz r0, 0xc(r3)
    lwz r7, 0x8(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    subf r0, r7, r0
    srawi r0, r0, 3
    addze r10, r0
    b lbl_fn_806930D4_0000C250
lbl_fn_806930D4_0000C218:
    srwi r8, r10, 31
    lhz r0, 0x0(r4)
    add r9, r8, r10
    extlwi r8, r9, 29, 2
    add r11, r7, r8
    srawi r9, r9, 1
    lhz r8, 0x2(r11)
    cmplw r8, r0
    bge lbl_fn_806930D4_0000C24C
    addi r0, r9, 0x1
    addi r7, r11, 0x8
    subf r10, r0, r10
    b lbl_fn_806930D4_0000C250
lbl_fn_806930D4_0000C24C:
    mr r10, r9
lbl_fn_806930D4_0000C250:
    cmpwi r10, 0x0
    bgt lbl_fn_806930D4_0000C218
    lwz r0, 0xc(r3)
    li r9, 0x1
    lwz r8, 0x8(r3)
    slwi r0, r0, 3
    add r0, r8, r0
    cmplw r7, r0
    beq lbl_fn_806930D4_0000C2AC
    lhz r10, 0x0(r4)
    li r8, 0x0
    lhz r0, 0x0(r7)
    subf r0, r0, r10
    srwi. r0, r0, 31
    bne lbl_fn_806930D4_0000C2A0
    lhz r0, 0x2(r7)
    subf r0, r10, r0
    srwi. r0, r0, 31
    bne lbl_fn_806930D4_0000C2A0
    li r8, 0x1
lbl_fn_806930D4_0000C2A0:
    cmpwi r8, 0x0
    beq lbl_fn_806930D4_0000C2AC
    li r9, 0x0
lbl_fn_806930D4_0000C2AC:
    cmpwi r9, 0x0
    beq lbl_fn_806930D4_0000C2BC
    li r0, 0x0
    b lbl_fn_806930D4_0000C2D4
lbl_fn_806930D4_0000C2BC:
    lhz r0, 0x4(r7)
    lhz r8, 0x0(r4)
    lhz r7, 0x6(r7)
    mullw r0, r8, r0
    add r0, r7, r0
    clrlwi r0, r0, 16
lbl_fn_806930D4_0000C2D4:
    sth r0, 0x0(r6)
    addi r4, r4, 0x2
    addi r6, r6, 0x2
    bdnz lbl_fn_806930D4_0000C1F8
lbl_fn_806930D4_0000C2E4:
    mr r3, r5
    blr
}

asm void fn_806931E0(void)
{
    nofralloc
    addi r0, r6, 0x1
    subf r0, r5, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r5, r6
    bge lbl_fn_806931E0_0000C3F4
lbl_fn_806931E0_0000C304:
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    subf r0, r6, r0
    srawi r0, r0, 3
    addze r9, r0
    b lbl_fn_806931E0_0000C35C
lbl_fn_806931E0_0000C324:
    srwi r7, r9, 31
    lhz r0, 0x0(r5)
    add r8, r7, r9
    extlwi r7, r8, 29, 2
    add r10, r6, r7
    srawi r8, r8, 1
    lhz r7, 0x2(r10)
    cmplw r7, r0
    bge lbl_fn_806931E0_0000C358
    addi r0, r8, 0x1
    addi r6, r10, 0x8
    subf r9, r0, r9
    b lbl_fn_806931E0_0000C35C
lbl_fn_806931E0_0000C358:
    mr r9, r8
lbl_fn_806931E0_0000C35C:
    cmpwi r9, 0x0
    bgt lbl_fn_806931E0_0000C324
    lwz r0, 0xc(r3)
    li r8, 0x1
    lwz r7, 0x8(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    cmplw r6, r0
    beq lbl_fn_806931E0_0000C3B8
    lhz r9, 0x0(r5)
    li r7, 0x0
    lhz r0, 0x0(r6)
    subf r0, r0, r9
    srwi. r0, r0, 31
    bne lbl_fn_806931E0_0000C3AC
    lhz r0, 0x2(r6)
    subf r0, r9, r0
    srwi. r0, r0, 31
    bne lbl_fn_806931E0_0000C3AC
    li r7, 0x1
lbl_fn_806931E0_0000C3AC:
    cmpwi r7, 0x0
    beq lbl_fn_806931E0_0000C3B8
    li r8, 0x0
lbl_fn_806931E0_0000C3B8:
    cmpwi r8, 0x0
    beq lbl_fn_806931E0_0000C3C8
    li r0, 0x0
    b lbl_fn_806931E0_0000C3E0
lbl_fn_806931E0_0000C3C8:
    lhz r0, 0x4(r6)
    lhz r7, 0x0(r5)
    lhz r6, 0x6(r6)
    mullw r0, r7, r0
    add r0, r6, r0
    clrlwi r0, r0, 16
lbl_fn_806931E0_0000C3E0:
    and r0, r0, r4
    clrlwi. r0, r0, 16
    bne lbl_fn_806931E0_0000C3F4
    addi r5, r5, 0x2
    bdnz lbl_fn_806931E0_0000C304
lbl_fn_806931E0_0000C3F4:
    mr r3, r5
    blr
}

asm void fn_806932F0(void)
{
    nofralloc
    addi r0, r6, 0x1
    subf r0, r5, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r5, r6
    bge lbl_fn_806932F0_0000C504
lbl_fn_806932F0_0000C414:
    lwz r0, 0xc(r3)
    lwz r6, 0x8(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    subf r0, r6, r0
    srawi r0, r0, 3
    addze r9, r0
    b lbl_fn_806932F0_0000C46C
lbl_fn_806932F0_0000C434:
    srwi r7, r9, 31
    lhz r0, 0x0(r5)
    add r8, r7, r9
    extlwi r7, r8, 29, 2
    add r10, r6, r7
    srawi r8, r8, 1
    lhz r7, 0x2(r10)
    cmplw r7, r0
    bge lbl_fn_806932F0_0000C468
    addi r0, r8, 0x1
    addi r6, r10, 0x8
    subf r9, r0, r9
    b lbl_fn_806932F0_0000C46C
lbl_fn_806932F0_0000C468:
    mr r9, r8
lbl_fn_806932F0_0000C46C:
    cmpwi r9, 0x0
    bgt lbl_fn_806932F0_0000C434
    lwz r0, 0xc(r3)
    li r8, 0x1
    lwz r7, 0x8(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    cmplw r6, r0
    beq lbl_fn_806932F0_0000C4C8
    lhz r9, 0x0(r5)
    li r7, 0x0
    lhz r0, 0x0(r6)
    subf r0, r0, r9
    srwi. r0, r0, 31
    bne lbl_fn_806932F0_0000C4BC
    lhz r0, 0x2(r6)
    subf r0, r9, r0
    srwi. r0, r0, 31
    bne lbl_fn_806932F0_0000C4BC
    li r7, 0x1
lbl_fn_806932F0_0000C4BC:
    cmpwi r7, 0x0
    beq lbl_fn_806932F0_0000C4C8
    li r8, 0x0
lbl_fn_806932F0_0000C4C8:
    cmpwi r8, 0x0
    beq lbl_fn_806932F0_0000C4D8
    li r0, 0x0
    b lbl_fn_806932F0_0000C4F0
lbl_fn_806932F0_0000C4D8:
    lhz r0, 0x4(r6)
    lhz r7, 0x0(r5)
    lhz r6, 0x6(r6)
    mullw r0, r7, r0
    add r0, r6, r0
    clrlwi r0, r0, 16
lbl_fn_806932F0_0000C4F0:
    and r0, r0, r4
    clrlwi. r0, r0, 16
    beq lbl_fn_806932F0_0000C504
    addi r5, r5, 0x2
    bdnz lbl_fn_806932F0_0000C414
lbl_fn_806932F0_0000C504:
    mr r3, r5
    blr
}

asm void fn_80693400(void)
{
    nofralloc
    addi r0, r5, 0x1
    subf r0, r4, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_80693400_0000C60C
lbl_fn_80693400_0000C524:
    lwz r0, 0x24(r3)
    lwz r6, 0x20(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    subf r0, r6, r0
    srawi r0, r0, 3
    addze r9, r0
    b lbl_fn_80693400_0000C57C
lbl_fn_80693400_0000C544:
    srwi r7, r9, 31
    lhz r0, 0x0(r4)
    add r8, r7, r9
    extlwi r7, r8, 29, 2
    add r10, r6, r7
    srawi r8, r8, 1
    lhz r7, 0x2(r10)
    cmplw r7, r0
    bge lbl_fn_80693400_0000C578
    addi r0, r8, 0x1
    addi r6, r10, 0x8
    subf r9, r0, r9
    b lbl_fn_80693400_0000C57C
lbl_fn_80693400_0000C578:
    mr r9, r8
lbl_fn_80693400_0000C57C:
    cmpwi r9, 0x0
    bgt lbl_fn_80693400_0000C544
    lwz r0, 0x24(r3)
    li r8, 0x1
    lwz r7, 0x20(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    cmplw r6, r0
    beq lbl_fn_80693400_0000C5D8
    lhz r9, 0x0(r4)
    li r7, 0x0
    lhz r0, 0x0(r6)
    subf r0, r0, r9
    srwi. r0, r0, 31
    bne lbl_fn_80693400_0000C5CC
    lhz r0, 0x2(r6)
    subf r0, r9, r0
    srwi. r0, r0, 31
    bne lbl_fn_80693400_0000C5CC
    li r7, 0x1
lbl_fn_80693400_0000C5CC:
    cmpwi r7, 0x0
    beq lbl_fn_80693400_0000C5D8
    li r8, 0x0
lbl_fn_80693400_0000C5D8:
    cmpwi r8, 0x0
    beq lbl_fn_80693400_0000C5E8
    li r0, 0x0
    b lbl_fn_80693400_0000C600
lbl_fn_80693400_0000C5E8:
    lhz r0, 0x4(r6)
    lhz r7, 0x0(r4)
    lhz r6, 0x6(r6)
    mullw r0, r7, r0
    add r0, r6, r0
    clrlwi r0, r0, 16
lbl_fn_80693400_0000C600:
    sth r0, 0x0(r4)
    addi r4, r4, 0x2
    bdnz lbl_fn_80693400_0000C524
lbl_fn_80693400_0000C60C:
    mr r3, r5
    blr
}

asm void fn_80693508(void)
{
    nofralloc
    addi r0, r5, 0x1
    subf r0, r4, r0
    srwi r0, r0, 1
    mtctr r0
    cmplw r4, r5
    bge lbl_fn_80693508_0000C714
lbl_fn_80693508_0000C62C:
    lwz r0, 0x18(r3)
    lwz r6, 0x14(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    subf r0, r6, r0
    srawi r0, r0, 3
    addze r9, r0
    b lbl_fn_80693508_0000C684
lbl_fn_80693508_0000C64C:
    srwi r7, r9, 31
    lhz r0, 0x0(r4)
    add r8, r7, r9
    extlwi r7, r8, 29, 2
    add r10, r6, r7
    srawi r8, r8, 1
    lhz r7, 0x2(r10)
    cmplw r7, r0
    bge lbl_fn_80693508_0000C680
    addi r0, r8, 0x1
    addi r6, r10, 0x8
    subf r9, r0, r9
    b lbl_fn_80693508_0000C684
lbl_fn_80693508_0000C680:
    mr r9, r8
lbl_fn_80693508_0000C684:
    cmpwi r9, 0x0
    bgt lbl_fn_80693508_0000C64C
    lwz r0, 0x18(r3)
    li r8, 0x1
    lwz r7, 0x14(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    cmplw r6, r0
    beq lbl_fn_80693508_0000C6E0
    lhz r9, 0x0(r4)
    li r7, 0x0
    lhz r0, 0x0(r6)
    subf r0, r0, r9
    srwi. r0, r0, 31
    bne lbl_fn_80693508_0000C6D4
    lhz r0, 0x2(r6)
    subf r0, r9, r0
    srwi. r0, r0, 31
    bne lbl_fn_80693508_0000C6D4
    li r7, 0x1
lbl_fn_80693508_0000C6D4:
    cmpwi r7, 0x0
    beq lbl_fn_80693508_0000C6E0
    li r8, 0x0
lbl_fn_80693508_0000C6E0:
    cmpwi r8, 0x0
    beq lbl_fn_80693508_0000C6F0
    li r0, 0x0
    b lbl_fn_80693508_0000C708
lbl_fn_80693508_0000C6F0:
    lhz r0, 0x4(r6)
    lhz r7, 0x0(r4)
    lhz r6, 0x6(r6)
    mullw r0, r7, r0
    add r0, r6, r0
    clrlwi r0, r0, 16
lbl_fn_80693508_0000C708:
    sth r0, 0x0(r4)
    addi r4, r4, 0x2
    bdnz lbl_fn_80693508_0000C62C
lbl_fn_80693508_0000C714:
    mr r3, r5
    blr
}

asm void fn_80693610(void)
{
    nofralloc
    cmplw r4, r5
    subf r3, r4, r5
    bge lbl_fn_80693610_0000C7C4
    srwi. r0, r3, 3
    mtctr r0
    beq lbl_fn_80693610_0000C7A8
lbl_fn_80693610_0000C734:
    lbz r7, 0x0(r4)
    extsb r0, r7
    lbz r7, 0x1(r4)
    sth r0, 0x0(r6)
    extsb r0, r7
    lbz r7, 0x2(r4)
    sth r0, 0x2(r6)
    extsb r0, r7
    lbz r7, 0x3(r4)
    sth r0, 0x4(r6)
    extsb r0, r7
    lbz r7, 0x4(r4)
    sth r0, 0x6(r6)
    extsb r0, r7
    lbz r7, 0x5(r4)
    sth r0, 0x8(r6)
    extsb r0, r7
    lbz r7, 0x6(r4)
    sth r0, 0xa(r6)
    extsb r0, r7
    lbz r7, 0x7(r4)
    sth r0, 0xc(r6)
    addi r4, r4, 0x8
    extsb r0, r7
    sth r0, 0xe(r6)
    addi r6, r6, 0x10
    bdnz lbl_fn_80693610_0000C734
    andi. r3, r3, 0x7
    beq lbl_fn_80693610_0000C7C4
lbl_fn_80693610_0000C7A8:
    mtctr r3
lbl_fn_80693610_0000C7AC:
    lbz r7, 0x0(r4)
    addi r4, r4, 0x1
    extsb r0, r7
    sth r0, 0x0(r6)
    addi r6, r6, 0x2
    bdnz lbl_fn_80693610_0000C7AC
lbl_fn_80693610_0000C7C4:
    mr r3, r5
    blr
}

asm void fn_806936C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    b lbl_fn_806936C0_0000C81C
lbl_fn_806936C0_0000C7F4:
    lwz r12, 0x0(r27)
    mr r3, r27
    extsb r5, r30
    lhz r4, 0x0(r28)
    lwz r12, 0x34(r12)
    mtctr r12
    addi r28, r28, 0x2
    bctrl
    stb r3, 0x0(r31)
    addi r31, r31, 0x1
lbl_fn_806936C0_0000C81C:
    cmplw r28, r29
    blt lbl_fn_806936C0_0000C7F4
    mr r3, r29
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80693730(void)
{
    nofralloc
    cmplwi r4, 0xff
    extsb r3, r4
    blelr
    mr r3, r5
    blr
}

asm void fn_80693744(void)
{
    nofralloc
    lis r5, lbl_807BBE40@ha
    stw r4, 0x4(r3)
    addi r5, r5, lbl_807BBE40@l
    stw r5, 0x0(r3)
    blr
}

asm void fn_80693758(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80693758_0000C88C
    cmpwi r4, 0x0
    ble lbl_fn_80693758_0000C88C
    bl dtor_80084684
lbl_fn_80693758_0000C88C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80693798(void)
{
    nofralloc
    lis r5, lbl_807BBE00@ha
    stw r4, 0x4(r3)
    addi r5, r5, lbl_807BBE00@l
    stw r5, 0x0(r3)
    blr
}

asm void fn_806937AC(void)
{
    nofralloc
    stw r5, 0x0(r7)
    subi r0, r9, 0x1
    stw r8, 0x0(r10)
    b lbl_fn_806937AC_0000C8F4
lbl_fn_806937AC_0000C8C8:
    lbz r3, 0x0(r4)
    stb r3, 0x0(r5)
    lwz r3, 0x0(r10)
    lbz r4, 0x1(r4)
    stb r4, 0x1(r3)
    lwz r3, 0x0(r7)
    addi r3, r3, 0x2
    stw r3, 0x0(r7)
    lwz r3, 0x0(r10)
    addi r3, r3, 0x2
    stw r3, 0x0(r10)
lbl_fn_806937AC_0000C8F4:
    lwz r4, 0x0(r7)
    cmplw r4, r6
    bge lbl_fn_806937AC_0000C90C
    lwz r5, 0x0(r10)
    cmplw r5, r0
    blt lbl_fn_806937AC_0000C8C8
lbl_fn_806937AC_0000C90C:
    cmplw r4, r6
    bge lbl_fn_806937AC_0000C91C
    li r3, 0x1
    blr
lbl_fn_806937AC_0000C91C:
    li r3, 0x0
    blr
}

asm void fn_80693818(void)
{
    nofralloc
    stw r5, 0x0(r7)
    subi r0, r6, 0x1
    stw r8, 0x0(r10)
    b lbl_fn_80693818_0000C960
lbl_fn_80693818_0000C934:
    lbz r3, 0x0(r3)
    stb r3, 0x0(r4)
    lwz r3, 0x0(r7)
    lbz r3, 0x1(r3)
    stb r3, 0x1(r4)
    lwz r3, 0x0(r7)
    addi r3, r3, 0x2
    stw r3, 0x0(r7)
    lwz r3, 0x0(r10)
    addi r3, r3, 0x2
    stw r3, 0x0(r10)
lbl_fn_80693818_0000C960:
    lwz r3, 0x0(r7)
    cmplw r3, r0
    bge lbl_fn_80693818_0000C978
    lwz r4, 0x0(r10)
    cmplw r4, r9
    blt lbl_fn_80693818_0000C934
lbl_fn_80693818_0000C978:
    cmplw r3, r6
    bge lbl_fn_80693818_0000C988
    li r3, 0x1
    blr
lbl_fn_80693818_0000C988:
    li r3, 0x0
    blr
}

asm void fn_80693884(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stfd f31, 0x58(r1)
    fmr f31, f1
    stw r31, 0x54(r1)
    li r31, 0x0
    stw r30, 0x50(r1)
    stw r29, 0x4c(r1)
    stw r28, 0x48(r1)
    mr r28, r3
    stw r31, 0x0(r3)
    stw r31, 0x4(r3)
    stw r31, 0x8(r3)
    sth r31, 0xc(r3)
    sth r31, 0xe(r3)
    bl fn_8067E570
    cmpwi r3, 0x2
    bne lbl_fn_80693884_0000C9EC
    li r0, 0x2
    sth r0, 0xe(r28)
    mr r3, r28
    b lbl_fn_80693884_0000CAB0
lbl_fn_80693884_0000C9EC:
    fmr f1, f31
    bl fn_8067E570
    cmpwi r3, 0x1
    bne lbl_fn_80693884_0000CA0C
    li r0, 0x1
    sth r0, 0xe(r28)
    mr r3, r28
    b lbl_fn_80693884_0000CAB0
lbl_fn_80693884_0000CA0C:
    fmr f1, f31
    li r0, 0x20
    stb r31, 0x14(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x18
    sth r0, 0x16(r1)
    bl fn_8067C590
    lbz r4, 0x1c(r1)
    mr r3, r28
    bl fn_80013DC4
    lbz r31, 0x10(r1)
    addi r30, r1, 0x18
    li r29, 0x0
    b lbl_fn_80693884_0000CA90
lbl_fn_80693884_0000CA44:
    lbz r3, 0x5(r30)
    subi r0, r3, 0x30
    stb r0, 0x8(r1)
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    bne lbl_fn_80693884_0000CA68
    lbz r0, 0x0(r28)
    clrlwi r4, r0, 25
    b lbl_fn_80693884_0000CA6C
lbl_fn_80693884_0000CA68:
    lwz r4, 0x4(r28)
lbl_fn_80693884_0000CA6C:
    stb r31, 0xc(r1)
    mr r3, r28
    addi r6, r1, 0x8
    addi r7, r1, 0x9
    addi r8, r1, 0xc
    li r5, 0x0
    bl fn_80013F78
    addi r30, r30, 0x1
    addi r29, r29, 0x1
lbl_fn_80693884_0000CA90:
    lbz r4, 0x1c(r1)
    cmplw r29, r4
    blt lbl_fn_80693884_0000CA44
    lha r0, 0x1a(r1)
    mr r3, r28
    add r4, r4, r0
    subi r0, r4, 0x1
    sth r0, 0xc(r28)
lbl_fn_80693884_0000CAB0:
    lwz r0, 0x64(r1)
    lfd f31, 0x58(r1)
    lwz r31, 0x54(r1)
    lwz r30, 0x50(r1)
    lwz r29, 0x4c(r1)
    lwz r28, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_806939C8(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi r6, r0, 31
    cntlzw r0, r6
    srwi. r5, r0, 5
    beq lbl_fn_806939C8_0000CAF4
    lbz r0, 0x0(r3)
    clrlwi r0, r0, 25
    b lbl_fn_806939C8_0000CAF8
lbl_fn_806939C8_0000CAF4:
    lwz r0, 0x4(r3)
lbl_fn_806939C8_0000CAF8:
    cmplw r4, r0
    blt lbl_fn_806939C8_0000CB08
    li r3, -0x1
    blr
lbl_fn_806939C8_0000CB08:
    cmpwi r5, 0x0
    beq lbl_fn_806939C8_0000CB18
    addi r5, r3, 0x1
    b lbl_fn_806939C8_0000CB1C
lbl_fn_806939C8_0000CB18:
    lwz r5, 0x8(r3)
lbl_fn_806939C8_0000CB1C:
    lbzx r0, r5, r4
    extsb r0, r0
    cmpwi r0, 0x5
    ble lbl_fn_806939C8_0000CB34
    li r3, 0x1
    blr
lbl_fn_806939C8_0000CB34:
    bge lbl_fn_806939C8_0000CB40
    li r3, -0x1
    blr
lbl_fn_806939C8_0000CB40:
    cmpwi r6, 0x0
    bne lbl_fn_806939C8_0000CB58
    lbz r0, 0x0(r3)
    addi r6, r3, 0x1
    clrlwi r5, r0, 25
    b lbl_fn_806939C8_0000CB60
lbl_fn_806939C8_0000CB58:
    lwz r6, 0x8(r3)
    lwz r5, 0x4(r3)
lbl_fn_806939C8_0000CB60:
    addi r0, r4, 0x1
    cmplw r0, r5
    bge lbl_fn_806939C8_0000CBA4
    add r3, r4, r6
    add r4, r6, r5
    addi r3, r3, 0x1
    subf r0, r3, r4
    mtctr r0
    cmplw r3, r4
    bge lbl_fn_806939C8_0000CBA4
lbl_fn_806939C8_0000CB88:
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_806939C8_0000CB9C
    subf r3, r6, r3
    b lbl_fn_806939C8_0000CBA8
lbl_fn_806939C8_0000CB9C:
    addi r3, r3, 0x1
    bdnz lbl_fn_806939C8_0000CB88
lbl_fn_806939C8_0000CBA4:
    li r3, -0x1
lbl_fn_806939C8_0000CBA8:
    addis r0, r3, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_806939C8_0000CBBC
    li r3, 0x0
    blr
lbl_fn_806939C8_0000CBBC:
    li r3, 0x1
    blr
}

asm void fn_80693AB8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r5
    stw r29, 0x44(r1)
    mr r29, r4
    stw r28, 0x40(r1)
    mr r28, r3
    bgt lbl_fn_80693AB8_0000CC0C
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80693AB8_0000D0F4
lbl_fn_80693AB8_0000CC0C:
    li r0, 0x0
    stw r5, 0x30(r1)
    stw r0, 0x34(r1)
    stw r0, 0x38(r1)
    stw r0, 0x3c(r1)
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_80693AB8_0000CC38
    lbz r0, 0x0(r4)
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CC3C
lbl_fn_80693AB8_0000CC38:
    lwz r0, 0x4(r4)
lbl_fn_80693AB8_0000CC3C:
    cmplw r0, r5
    stw r0, 0x24(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    bge lbl_fn_80693AB8_0000CC54
    addi r4, r1, 0x24
lbl_fn_80693AB8_0000CC54:
    lwz r4, 0x0(r4)
    bl fn_80013DC4
    lwz r0, 0x30(r1)
    stw r0, 0x28(r1)
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    bne lbl_fn_80693AB8_0000CC80
    lbz r0, 0x0(r29)
    addi r6, r29, 0x1
    clrlwi r4, r0, 25
    b lbl_fn_80693AB8_0000CC88
lbl_fn_80693AB8_0000CC80:
    lwz r6, 0x8(r29)
    lwz r4, 0x4(r29)
lbl_fn_80693AB8_0000CC88:
    lwz r0, 0x30(r1)
    addi r3, r1, 0x28
    stw r4, 0x2c(r1)
    cmplw r4, r0
    bge lbl_fn_80693AB8_0000CCA0
    addi r3, r1, 0x2c
lbl_fn_80693AB8_0000CCA0:
    lwz r4, 0x0(r3)
    addi r3, r1, 0x34
    lbz r0, 0x1c(r1)
    addi r8, r1, 0x20
    stw r4, 0x28(r1)
    add r7, r6, r4
    li r4, 0x0
    li r5, 0x0
    stb r0, 0x20(r1)
    bl fn_80013F78
    lha r0, 0xc(r29)
    stw r0, 0x0(r31)
    lwz r0, 0x0(r29)
    srwi r4, r0, 31
    cntlzw r0, r4
    srwi. r3, r0, 5
    beq lbl_fn_80693AB8_0000CCF0
    lbz r0, 0x0(r29)
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CCF4
lbl_fn_80693AB8_0000CCF0:
    lwz r0, 0x4(r29)
lbl_fn_80693AB8_0000CCF4:
    cmplw r30, r0
    bge lbl_fn_80693AB8_0000CF7C
    cmpwi r3, 0x0
    beq lbl_fn_80693AB8_0000CD10
    lbz r0, 0x0(r29)
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CD14
lbl_fn_80693AB8_0000CD10:
    lwz r0, 0x4(r29)
lbl_fn_80693AB8_0000CD14:
    cmplw r30, r0
    blt lbl_fn_80693AB8_0000CD24
    li r4, -0x1
    b lbl_fn_80693AB8_0000CDD0
lbl_fn_80693AB8_0000CD24:
    cmpwi r3, 0x0
    beq lbl_fn_80693AB8_0000CD34
    addi r3, r29, 0x1
    b lbl_fn_80693AB8_0000CD38
lbl_fn_80693AB8_0000CD34:
    lwz r3, 0x8(r29)
lbl_fn_80693AB8_0000CD38:
    lbzx r0, r3, r30
    extsb r0, r0
    cmpwi r0, 0x5
    ble lbl_fn_80693AB8_0000CD50
    li r4, 0x1
    b lbl_fn_80693AB8_0000CDD0
lbl_fn_80693AB8_0000CD50:
    bge lbl_fn_80693AB8_0000CD5C
    li r4, -0x1
    b lbl_fn_80693AB8_0000CDD0
lbl_fn_80693AB8_0000CD5C:
    cmpwi r4, 0x0
    bne lbl_fn_80693AB8_0000CD74
    lbz r0, 0x0(r29)
    addi r3, r29, 0x1
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CD7C
lbl_fn_80693AB8_0000CD74:
    lwz r3, 0x8(r29)
    lwz r0, 0x4(r29)
lbl_fn_80693AB8_0000CD7C:
    addi r5, r30, 0x1
    cmplw r5, r0
    bge lbl_fn_80693AB8_0000CDBC
    add r4, r3, r0
    add r5, r3, r5
    subf r0, r5, r4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80693AB8_0000CDBC
lbl_fn_80693AB8_0000CDA0:
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_80693AB8_0000CDB4
    subf r4, r3, r5
    b lbl_fn_80693AB8_0000CDC0
lbl_fn_80693AB8_0000CDB4:
    addi r5, r5, 0x1
    bdnz lbl_fn_80693AB8_0000CDA0
lbl_fn_80693AB8_0000CDBC:
    li r4, -0x1
lbl_fn_80693AB8_0000CDC0:
    subfic r3, r4, -0x1
    addi r0, r4, 0x1
    or r0, r3, r0
    srwi r4, r0, 31
lbl_fn_80693AB8_0000CDD0:
    cmpwi r4, 0x0
    blt lbl_fn_80693AB8_0000CF7C
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80693AB8_0000CDF4
    lbz r0, 0x34(r1)
    addi r3, r1, 0x35
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CDFC
lbl_fn_80693AB8_0000CDF4:
    lwz r3, 0x3c(r1)
    lwz r0, 0x38(r1)
lbl_fn_80693AB8_0000CDFC:
    add r3, r3, r0
    subi r0, r4, 0x1
    cntlzw r0, r0
    cmpwi r4, 0x0
    subi r5, r3, 0x1
    srwi r0, r0, 5
    bne lbl_fn_80693AB8_0000CE3C
    lbz r0, 0x0(r5)
    extsb r3, r0
    clrlwi r0, r0, 31
    srwi r3, r3, 31
    xor r0, r0, r3
    subf r3, r3, r0
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_80693AB8_0000CE3C:
    cmpwi r0, 0x0
    beq lbl_fn_80693AB8_0000CF7C
    addi r6, r1, 0x35
    li r3, 0x0
lbl_fn_80693AB8_0000CE4C:
    lbz r4, 0x0(r5)
    extsb r0, r4
    cmpwi r0, 0x9
    bge lbl_fn_80693AB8_0000CE68
    addi r0, r4, 0x1
    stb r0, 0x0(r5)
    b lbl_fn_80693AB8_0000CF7C
lbl_fn_80693AB8_0000CE68:
    stb r3, 0x0(r5)
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80693AB8_0000CE80
    mr r0, r6
    b lbl_fn_80693AB8_0000CE84
lbl_fn_80693AB8_0000CE80:
    lwz r0, 0x3c(r1)
lbl_fn_80693AB8_0000CE84:
    cmplw r5, r0
    bne lbl_fn_80693AB8_0000CF74
    lwz r0, 0x34(r1)
    li r3, 0x1
    stb r3, 0x18(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80693AB8_0000CEB0
    mr r4, r6
    b lbl_fn_80693AB8_0000CEB4
lbl_fn_80693AB8_0000CEB0:
    lwz r4, 0x3c(r1)
lbl_fn_80693AB8_0000CEB4:
    cmpwi r0, 0x0
    beq lbl_fn_80693AB8_0000CEC0
    b lbl_fn_80693AB8_0000CEC4
lbl_fn_80693AB8_0000CEC0:
    lwz r6, 0x3c(r1)
lbl_fn_80693AB8_0000CEC4:
    lbz r0, 0x14(r1)
    subf r4, r6, r4
    stb r0, 0x10(r1)
    addi r3, r1, 0x34
    addi r6, r1, 0x18
    addi r7, r1, 0x19
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x34(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi. r4, r0, 5
    beq lbl_fn_80693AB8_0000CF08
    lbz r0, 0x34(r1)
    clrlwi r3, r0, 25
    b lbl_fn_80693AB8_0000CF0C
lbl_fn_80693AB8_0000CF08:
    lwz r3, 0x38(r1)
lbl_fn_80693AB8_0000CF0C:
    cmpwi r4, 0x0
    subi r5, r3, 0x1
    beq lbl_fn_80693AB8_0000CF24
    lbz r0, 0x34(r1)
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CF28
lbl_fn_80693AB8_0000CF24:
    lwz r0, 0x38(r1)
lbl_fn_80693AB8_0000CF28:
    cmplw r5, r0
    ble lbl_fn_80693AB8_0000CF4C
    subf r6, r0, r5
    mr r4, r0
    addi r3, r1, 0x34
    li r5, 0x0
    li r7, 0x0
    bl fn_800E2778
    b lbl_fn_80693AB8_0000CF64
lbl_fn_80693AB8_0000CF4C:
    mr r4, r5
    addi r3, r1, 0x34
    subf r5, r5, r0
    li r6, 0x0
    li r7, 0x0
    bl fn_800E2778
lbl_fn_80693AB8_0000CF64:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
    b lbl_fn_80693AB8_0000CF7C
lbl_fn_80693AB8_0000CF74:
    subi r5, r5, 0x1
    b lbl_fn_80693AB8_0000CE4C
lbl_fn_80693AB8_0000CF7C:
    lwz r0, 0x34(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80693AB8_0000CF98
    lbz r0, 0x34(r1)
    addi r4, r1, 0x35
    clrlwi r0, r0, 25
    b lbl_fn_80693AB8_0000CFA0
lbl_fn_80693AB8_0000CF98:
    lwz r4, 0x3c(r1)
    lwz r0, 0x38(r1)
lbl_fn_80693AB8_0000CFA0:
    cmpwi r3, 0x0
    add r4, r4, r0
    bne lbl_fn_80693AB8_0000CFB4
    addi r5, r1, 0x35
    b lbl_fn_80693AB8_0000CFB8
lbl_fn_80693AB8_0000CFB4:
    lwz r5, 0x3c(r1)
lbl_fn_80693AB8_0000CFB8:
    cmplw cr1, r5, r4
    bge cr1, lbl_fn_80693AB8_0000D078
    subf r0, r5, r4
    subi r3, r4, 0x8
    cmpwi r0, 0x8
    ble lbl_fn_80693AB8_0000D054
    bgt cr1, lbl_fn_80693AB8_0000D054
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    cmplw r5, r3
    bge lbl_fn_80693AB8_0000D054
lbl_fn_80693AB8_0000CFEC:
    lbz r3, 0x0(r5)
    addi r0, r3, 0x30
    stb r0, 0x0(r5)
    lbz r3, 0x1(r5)
    addi r0, r3, 0x30
    stb r0, 0x1(r5)
    lbz r3, 0x2(r5)
    addi r0, r3, 0x30
    stb r0, 0x2(r5)
    lbz r3, 0x3(r5)
    addi r0, r3, 0x30
    stb r0, 0x3(r5)
    lbz r3, 0x4(r5)
    addi r0, r3, 0x30
    stb r0, 0x4(r5)
    lbz r3, 0x5(r5)
    addi r0, r3, 0x30
    stb r0, 0x5(r5)
    lbz r3, 0x6(r5)
    addi r0, r3, 0x30
    stb r0, 0x6(r5)
    lbz r3, 0x7(r5)
    addi r0, r3, 0x30
    stb r0, 0x7(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_80693AB8_0000CFEC
lbl_fn_80693AB8_0000D054:
    subf r0, r5, r4
    mtctr r0
    cmplw r5, r4
    bge lbl_fn_80693AB8_0000D078
lbl_fn_80693AB8_0000D064:
    lbz r3, 0x0(r5)
    addi r0, r3, 0x30
    stb r0, 0x0(r5)
    addi r5, r5, 0x1
    bdnz lbl_fn_80693AB8_0000D064
lbl_fn_80693AB8_0000D078:
    lwz r3, 0x34(r1)
    srwi. r0, r3, 31
    bne lbl_fn_80693AB8_0000D09C
    lwz r0, 0x38(r1)
    stw r0, 0x4(r28)
    stw r3, 0x0(r28)
    lwz r0, 0x3c(r1)
    stw r0, 0x8(r28)
    b lbl_fn_80693AB8_0000D0E0
lbl_fn_80693AB8_0000D09C:
    li r0, 0x0
    stw r0, 0x0(r28)
    mr r3, r28
    stw r0, 0x4(r28)
    stw r0, 0x8(r28)
    lwz r4, 0x38(r1)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r28
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x3c(r1)
    li r4, 0x0
    lwz r0, 0x38(r1)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80693AB8_0000D0E0:
    lwz r0, 0x34(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80693AB8_0000D0F4
    lwz r3, 0x3c(r1)
    bl dtor_80084684
lbl_fn_80693AB8_0000D0F4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80694008(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80694008_0000D13C
    cmpwi r4, 0x0
    ble lbl_fn_80694008_0000D13C
    bl dtor_80084684
lbl_fn_80694008_0000D13C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80694048(void)
{
    nofralloc
    subf r0, r5, r6
    stwu r1, -0x10(r1)
    srwi r0, r0, 1
    cmpw r7, r0
    stw r7, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bge lbl_fn_80694048_0000D178
    addi r3, r1, 0x8
lbl_fn_80694048_0000D178:
    lwz r0, 0x0(r3)
    slwi r3, r0, 1
    addi r1, r1, 0x10
    blr
}

asm void fn_8069407C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    subf r0, r5, r6
    cmpw r7, r0
    stw r7, 0x8(r1)
    addi r3, r1, 0xc
    stw r0, 0xc(r1)
    bge lbl_fn_8069407C_0000D1A8
    addi r3, r1, 0x8
lbl_fn_8069407C_0000D1A8:
    lwz r3, 0x0(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_806940A8(void)
{
    nofralloc
    lwz r0, 0xc(r3)
    lwz r8, 0x8(r3)
    slwi r0, r0, 3
    add r0, r8, r0
    subf r0, r8, r0
    srawi r0, r0, 3
    addze r7, r0
    b lbl_fn_806940A8_0000D208
lbl_fn_806940A8_0000D1D4:
    srwi r0, r7, 31
    add r6, r0, r7
    extlwi r0, r6, 29, 2
    add r9, r8, r0
    srawi r6, r6, 1
    lhz r0, 0x2(r9)
    cmplw r0, r5
    bge lbl_fn_806940A8_0000D204
    addi r0, r6, 0x1
    addi r8, r9, 0x8
    subf r7, r0, r7
    b lbl_fn_806940A8_0000D208
lbl_fn_806940A8_0000D204:
    mr r7, r6
lbl_fn_806940A8_0000D208:
    cmpwi r7, 0x0
    bgt lbl_fn_806940A8_0000D1D4
    lwz r0, 0xc(r3)
    li r6, 0x1
    lwz r3, 0x8(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    cmplw r8, r0
    beq lbl_fn_806940A8_0000D258
    lhz r0, 0x0(r8)
    li r3, 0x0
    cmplw r5, r0
    blt lbl_fn_806940A8_0000D248
    lhz r0, 0x2(r8)
    cmplw r0, r5
    bge lbl_fn_806940A8_0000D24C
lbl_fn_806940A8_0000D248:
    li r3, 0x1
lbl_fn_806940A8_0000D24C:
    cmpwi r3, 0x0
    bne lbl_fn_806940A8_0000D258
    li r6, 0x0
lbl_fn_806940A8_0000D258:
    cmpwi r6, 0x0
    beq lbl_fn_806940A8_0000D268
    li r0, 0x0
    b lbl_fn_806940A8_0000D27C
lbl_fn_806940A8_0000D268:
    lhz r0, 0x4(r8)
    lhz r3, 0x6(r8)
    mullw r0, r5, r0
    add r0, r3, r0
    clrlwi r0, r0, 16
lbl_fn_806940A8_0000D27C:
    and r0, r0, r4
    clrlwi r3, r0, 16
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80694188(void)
{
    nofralloc
    lwz r0, 0x24(r3)
    lwz r7, 0x20(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    subf r0, r7, r0
    srawi r0, r0, 3
    addze r6, r0
    b lbl_fn_80694188_0000D2E8
lbl_fn_80694188_0000D2B4:
    srwi r0, r6, 31
    add r5, r0, r6
    extlwi r0, r5, 29, 2
    add r8, r7, r0
    srawi r5, r5, 1
    lhz r0, 0x2(r8)
    cmplw r0, r4
    bge lbl_fn_80694188_0000D2E4
    addi r0, r5, 0x1
    addi r7, r8, 0x8
    subf r6, r0, r6
    b lbl_fn_80694188_0000D2E8
lbl_fn_80694188_0000D2E4:
    mr r6, r5
lbl_fn_80694188_0000D2E8:
    cmpwi r6, 0x0
    bgt lbl_fn_80694188_0000D2B4
    lwz r0, 0x24(r3)
    li r5, 0x1
    lwz r3, 0x20(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    cmplw r7, r0
    beq lbl_fn_80694188_0000D338
    lhz r0, 0x0(r7)
    li r3, 0x0
    cmplw r4, r0
    blt lbl_fn_80694188_0000D328
    lhz r0, 0x2(r7)
    cmplw r0, r4
    bge lbl_fn_80694188_0000D32C
lbl_fn_80694188_0000D328:
    li r3, 0x1
lbl_fn_80694188_0000D32C:
    cmpwi r3, 0x0
    bne lbl_fn_80694188_0000D338
    li r5, 0x0
lbl_fn_80694188_0000D338:
    cmpwi r5, 0x0
    beq lbl_fn_80694188_0000D348
    li r3, 0x0
    blr
lbl_fn_80694188_0000D348:
    lhz r0, 0x4(r7)
    lhz r3, 0x6(r7)
    mullw r0, r4, r0
    add r0, r3, r0
    clrlwi r3, r0, 16
    blr
}

asm void fn_80694254(void)
{
    nofralloc
    lwz r0, 0x18(r3)
    lwz r7, 0x14(r3)
    slwi r0, r0, 3
    add r0, r7, r0
    subf r0, r7, r0
    srawi r0, r0, 3
    addze r6, r0
    b lbl_fn_80694254_0000D3B4
lbl_fn_80694254_0000D380:
    srwi r0, r6, 31
    add r5, r0, r6
    extlwi r0, r5, 29, 2
    add r8, r7, r0
    srawi r5, r5, 1
    lhz r0, 0x2(r8)
    cmplw r0, r4
    bge lbl_fn_80694254_0000D3B0
    addi r0, r5, 0x1
    addi r7, r8, 0x8
    subf r6, r0, r6
    b lbl_fn_80694254_0000D3B4
lbl_fn_80694254_0000D3B0:
    mr r6, r5
lbl_fn_80694254_0000D3B4:
    cmpwi r6, 0x0
    bgt lbl_fn_80694254_0000D380
    lwz r0, 0x18(r3)
    li r5, 0x1
    lwz r3, 0x14(r3)
    slwi r0, r0, 3
    add r0, r3, r0
    cmplw r7, r0
    beq lbl_fn_80694254_0000D404
    lhz r0, 0x0(r7)
    li r3, 0x0
    cmplw r4, r0
    blt lbl_fn_80694254_0000D3F4
    lhz r0, 0x2(r7)
    cmplw r0, r4
    bge lbl_fn_80694254_0000D3F8
lbl_fn_80694254_0000D3F4:
    li r3, 0x1
lbl_fn_80694254_0000D3F8:
    cmpwi r3, 0x0
    bne lbl_fn_80694254_0000D404
    li r5, 0x0
lbl_fn_80694254_0000D404:
    cmpwi r5, 0x0
    beq lbl_fn_80694254_0000D414
    li r3, 0x0
    blr
lbl_fn_80694254_0000D414:
    lhz r0, 0x4(r7)
    lhz r3, 0x6(r7)
    mullw r0, r4, r0
    add r0, r3, r0
    clrlwi r3, r0, 16
    blr
}

asm void fn_80694320(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80694328(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_80694328_0000D49C
    addic. r3, r3, 0x4
    beq lbl_fn_80694328_0000D48C
    beq lbl_fn_80694328_0000D48C
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80694328_0000D48C
    bl fn_806952C4
    b lbl_fn_80694328_0000D48C
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_80694328_0000D488:
    b lbl_fn_80694328_0000D488
lbl_fn_80694328_0000D48C:
    extsh. r0, r30
    ble lbl_fn_80694328_0000D49C
    mr r3, r29
    bl dtor_80084684
lbl_fn_80694328_0000D49C:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_806943B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lhz r9, 0x0(r4)
    stw r0, 0x34(r1)
    lhz r0, 0x0(r5)
    stw r31, 0x2c(r1)
    mr r31, r3
    cmplw r9, r0
    stw r30, 0x28(r1)
    sth r9, 0x20(r1)
    sth r0, 0x22(r1)
    beq lbl_fn_806943B8_0000D510
    lhz r8, 0x0(r6)
    subf r0, r9, r0
    lhz r5, 0x0(r7)
    subf r5, r8, r5
    divw r0, r5, r0
    clrlwi r5, r0, 16
    b lbl_fn_806943B8_0000D514
lbl_fn_806943B8_0000D510:
    li r5, 0x0
lbl_fn_806943B8_0000D514:
    lhz r4, 0x0(r4)
    lhz r0, 0x0(r6)
    mullw r4, r5, r4
    sth r5, 0x24(r1)
    lhz r7, 0x20(r1)
    subf r0, r4, r0
    sth r0, 0x26(r1)
    lwz r0, 0x4(r3)
    lwz r4, 0x0(r3)
    slwi r0, r0, 3
    add r0, r4, r0
    subf r0, r4, r0
    srawi r0, r0, 3
    addze r6, r0
    b lbl_fn_806943B8_0000D584
lbl_fn_806943B8_0000D550:
    srwi r0, r6, 31
    add r5, r0, r6
    extlwi r0, r5, 29, 2
    add r8, r4, r0
    srawi r5, r5, 1
    lhz r0, 0x2(r8)
    cmplw r0, r7
    bge lbl_fn_806943B8_0000D580
    addi r0, r5, 0x1
    addi r4, r8, 0x8
    subf r6, r0, r6
    b lbl_fn_806943B8_0000D584
lbl_fn_806943B8_0000D580:
    mr r6, r5
lbl_fn_806943B8_0000D584:
    cmpwi r6, 0x0
    bgt lbl_fn_806943B8_0000D550
    lwz r0, 0x4(r3)
    li r5, 0x1
    lwz r6, 0x0(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    cmplw r4, r0
    beq lbl_fn_806943B8_0000D5BC
    lhz r3, 0x22(r1)
    lhz r0, 0x0(r4)
    cmplw r3, r0
    blt lbl_fn_806943B8_0000D5BC
    li r5, 0x0
lbl_fn_806943B8_0000D5BC:
    cmpwi r5, 0x0
    beq lbl_fn_806943B8_0000D5E0
    li r0, 0x0
    stb r0, 0x10(r1)
    mr r3, r31
    addi r5, r1, 0x20
    addi r6, r1, 0x10
    bl fn_80694790
    b lbl_fn_806943B8_0000D698
lbl_fn_806943B8_0000D5E0:
    lwz r3, 0x4(r4)
    subf r5, r6, r4
    lwz r0, 0x0(r4)
    srawi r5, r5, 3
    stw r0, 0x18(r1)
    addze r30, r5
    lhz r5, 0x20(r1)
    lhz r0, 0x18(r1)
    stw r3, 0x1c(r1)
    cmplw r0, r5
    bge lbl_fn_806943B8_0000D638
    subi r0, r5, 0x1
    sth r0, 0x2(r4)
    li r0, 0x0
    addi r4, r4, 0x8
    stb r0, 0xc(r1)
    mr r3, r31
    addi r5, r1, 0x20
    addi r6, r1, 0xc
    addi r30, r30, 0x1
    bl fn_80694790
    b lbl_fn_806943B8_0000D658
lbl_fn_806943B8_0000D638:
    lhz r0, 0x20(r1)
    sth r0, 0x0(r4)
    lhz r0, 0x22(r1)
    sth r0, 0x2(r4)
    lhz r0, 0x24(r1)
    sth r0, 0x4(r4)
    lhz r0, 0x26(r1)
    sth r0, 0x6(r4)
lbl_fn_806943B8_0000D658:
    lhz r3, 0x22(r1)
    lhz r0, 0x1a(r1)
    cmplw r3, r0
    bge lbl_fn_806943B8_0000D698
    addi r0, r30, 0x1
    lwz r4, 0x0(r31)
    slwi r0, r0, 3
    addi r3, r3, 0x1
    add r4, r4, r0
    sth r3, 0x18(r1)
    li r0, 0x0
    mr r3, r31
    stb r0, 0x8(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x8
    bl fn_80694790
lbl_fn_806943B8_0000D698:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806945A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lhz r9, 0x0(r4)
    stw r0, 0x34(r1)
    lhz r0, 0x0(r5)
    stw r31, 0x2c(r1)
    mr r31, r3
    cmplw r9, r0
    stw r30, 0x28(r1)
    sth r9, 0x20(r1)
    sth r0, 0x22(r1)
    beq lbl_fn_806945A4_0000D6FC
    lhz r8, 0x0(r6)
    subf r0, r9, r0
    lhz r5, 0x0(r7)
    subf r5, r8, r5
    divw r0, r5, r0
    clrlwi r5, r0, 16
    b lbl_fn_806945A4_0000D700
lbl_fn_806945A4_0000D6FC:
    li r5, 0x0
lbl_fn_806945A4_0000D700:
    lhz r4, 0x0(r4)
    lhz r0, 0x0(r6)
    mullw r4, r5, r4
    sth r5, 0x24(r1)
    lhz r7, 0x20(r1)
    subf r0, r4, r0
    sth r0, 0x26(r1)
    lwz r0, 0x4(r3)
    lwz r4, 0x0(r3)
    slwi r0, r0, 3
    add r0, r4, r0
    subf r0, r4, r0
    srawi r0, r0, 3
    addze r6, r0
    b lbl_fn_806945A4_0000D770
lbl_fn_806945A4_0000D73C:
    srwi r0, r6, 31
    add r5, r0, r6
    extlwi r0, r5, 29, 2
    add r8, r4, r0
    srawi r5, r5, 1
    lhz r0, 0x2(r8)
    cmplw r0, r7
    bge lbl_fn_806945A4_0000D76C
    addi r0, r5, 0x1
    addi r4, r8, 0x8
    subf r6, r0, r6
    b lbl_fn_806945A4_0000D770
lbl_fn_806945A4_0000D76C:
    mr r6, r5
lbl_fn_806945A4_0000D770:
    cmpwi r6, 0x0
    bgt lbl_fn_806945A4_0000D73C
    lwz r0, 0x4(r3)
    li r5, 0x1
    lwz r6, 0x0(r3)
    slwi r0, r0, 3
    add r0, r6, r0
    cmplw r4, r0
    beq lbl_fn_806945A4_0000D7A8
    lhz r3, 0x22(r1)
    lhz r0, 0x0(r4)
    cmplw r3, r0
    blt lbl_fn_806945A4_0000D7A8
    li r5, 0x0
lbl_fn_806945A4_0000D7A8:
    cmpwi r5, 0x0
    beq lbl_fn_806945A4_0000D7CC
    li r0, 0x0
    stb r0, 0x10(r1)
    mr r3, r31
    addi r5, r1, 0x20
    addi r6, r1, 0x10
    bl fn_80694C38
    b lbl_fn_806945A4_0000D884
lbl_fn_806945A4_0000D7CC:
    lwz r3, 0x4(r4)
    subf r5, r6, r4
    lwz r0, 0x0(r4)
    srawi r5, r5, 3
    stw r0, 0x18(r1)
    addze r30, r5
    lhz r5, 0x20(r1)
    lhz r0, 0x18(r1)
    stw r3, 0x1c(r1)
    cmplw r0, r5
    bge lbl_fn_806945A4_0000D824
    subi r0, r5, 0x1
    sth r0, 0x2(r4)
    li r0, 0x0
    addi r4, r4, 0x8
    stb r0, 0xc(r1)
    mr r3, r31
    addi r5, r1, 0x20
    addi r6, r1, 0xc
    addi r30, r30, 0x1
    bl fn_80694C38
    b lbl_fn_806945A4_0000D844
lbl_fn_806945A4_0000D824:
    lhz r0, 0x20(r1)
    sth r0, 0x0(r4)
    lhz r0, 0x22(r1)
    sth r0, 0x2(r4)
    lhz r0, 0x24(r1)
    sth r0, 0x4(r4)
    lhz r0, 0x26(r1)
    sth r0, 0x6(r4)
lbl_fn_806945A4_0000D844:
    lhz r3, 0x22(r1)
    lhz r0, 0x1a(r1)
    cmplw r3, r0
    bge lbl_fn_806945A4_0000D884
    addi r0, r30, 0x1
    lwz r4, 0x0(r31)
    slwi r0, r0, 3
    addi r3, r3, 0x1
    add r4, r4, r0
    sth r3, 0x18(r1)
    li r0, 0x0
    mr r3, r31
    stb r0, 0x8(r1)
    addi r5, r1, 0x18
    addi r6, r1, 0x8
    bl fn_80694C38
lbl_fn_806945A4_0000D884:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80694790(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r23, 0x6c(r1)
    mr r25, r3
    mr r27, r4
    mr r26, r5
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    blt lbl_fn_80694790_0000D9C4
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_80694790_0000D99C
    lis r28, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r28, r28, lbl_80766688@l
    stw r3, 0x50(r1)
    addi r29, r1, 0x50
    stb r0, 0x10(r1)
    mr r3, r28
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x10
    stw r3, 0x54(r1)
    mr r24, r3
    stw r3, 0x30(r1)
    li r3, 0x10
    stw r0, 0x34(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694790_0000D954
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_80694790_0000D954:
    li r0, 0x0
    stw r3, 0x58(r1)
    stw r0, 0x30(r1)
    b lbl_fn_80694790_0000D968
    bl fn_80084C24
lbl_fn_80694790_0000D968:
    lwz r3, 0x54(r1)
    mr r4, r28
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x50(r1)
    mr r4, r29
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694790_0000D99C:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80694790_0000D9B0
    b lbl_fn_80694790_0000DA34
lbl_fn_80694790_0000D9B0:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_80694790_0000DA34
    b lbl_fn_80694790_0000DA34
lbl_fn_80694790_0000D9C4:
    cmplw r4, r5
    lwz r6, 0x0(r3)
    slwi r0, r0, 3
    add r6, r6, r0
    bgt lbl_fn_80694790_0000D9E4
    cmplw r5, r6
    bge lbl_fn_80694790_0000D9E4
    addi r26, r5, 0x8
lbl_fn_80694790_0000D9E4:
    subf r0, r4, r6
    lwz r4, 0x4(r3)
    srawi r0, r0, 3
    addi r6, r6, 0x8
    addze r0, r0
    addi r4, r4, 0x1
    stw r4, 0x4(r3)
    slwi r5, r0, 3
    mr r4, r27
    subf r3, r5, r6
    bl memmove
    lhz r5, 0x0(r26)
    lhz r4, 0x2(r26)
    lhz r3, 0x4(r26)
    lhz r0, 0x6(r26)
    sth r5, 0x0(r27)
    sth r4, 0x2(r27)
    sth r3, 0x4(r27)
    sth r0, 0x6(r27)
    b lbl_fn_80694790_0000DD2C
lbl_fn_80694790_0000DA34:
    lwz r28, 0x0(r25)
    li r31, 0x1
    lis r3, 0x2000
    stw r31, 0x1c(r1)
    subf r0, r28, r27
    srawi r4, r0, 3
    lwz r29, 0x8(r25)
    subi r0, r3, 0x1
    addze r27, r4
    subf r0, r29, r0
    cmplwi r0, 0x1
    bge lbl_fn_80694790_0000DB20
    lis r23, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r23, r23, lbl_80766688@l
    stw r3, 0x44(r1)
    addi r30, r1, 0x44
    stb r0, 0xc(r1)
    mr r3, r23
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x48(r1)
    mr r24, r3
    stw r3, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694790_0000DAD8
    stw r31, 0x4(r3)
    lis r4, lbl_80775B98@ha
    addi r4, r4, lbl_80775B98@l
    stw r31, 0x8(r3)
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_80694790_0000DAD8:
    li r0, 0x0
    stw r3, 0x4c(r1)
    stw r0, 0x28(r1)
    b lbl_fn_80694790_0000DAEC
    bl fn_80084C24
lbl_fn_80694790_0000DAEC:
    lwz r3, 0x48(r1)
    mr r4, r23
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x44(r1)
    mr r4, r30
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694790_0000DB20:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_80694790_0000DB70
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_80694790_0000DB64
    addi r3, r1, 0x1c
lbl_fn_80694790_0000DB64:
    lwz r0, 0x0(r3)
    add r31, r29, r0
    b lbl_fn_80694790_0000DBB4
lbl_fn_80694790_0000DB70:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r29, r0
    bge lbl_fn_80694790_0000DBAC
    addi r3, r29, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80694790_0000DBA0
    addi r3, r1, 0x1c
lbl_fn_80694790_0000DBA0:
    lwz r0, 0x0(r3)
    add r31, r29, r0
    b lbl_fn_80694790_0000DBB4
lbl_fn_80694790_0000DBAC:
    lis r3, 0x2000
    subi r31, r3, 0x1
lbl_fn_80694790_0000DBB4:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80694790_0000DC84
    lis r23, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r23, r23, lbl_80766688@l
    stw r3, 0x38(r1)
    addi r29, r1, 0x38
    stb r0, 0x8(r1)
    mr r3, r23
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x3c(r1)
    mr r30, r3
    stw r3, 0x20(r1)
    li r3, 0x10
    stw r0, 0x24(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694790_0000DC3C
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_80694790_0000DC3C:
    li r0, 0x0
    stw r3, 0x40(r1)
    stw r0, 0x20(r1)
    b lbl_fn_80694790_0000DC50
    bl fn_80084C24
lbl_fn_80694790_0000DC50:
    lwz r3, 0x3c(r1)
    mr r4, r23
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x38(r1)
    mr r4, r29
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694790_0000DC84:
    slwi r3, r31, 3
    bl fn_800844D8
    slwi r29, r27, 3
    stw r31, 0x8(r25)
    add r4, r3, r29
    lhz r0, 0x2(r26)
    stw r3, 0x0(r25)
    cmpwi r28, 0x0
    lhz r3, 0x0(r26)
    sth r3, 0x0(r4)
    lhz r3, 0x4(r26)
    sth r0, 0x2(r4)
    lhz r0, 0x6(r26)
    sth r3, 0x4(r4)
    sth r0, 0x6(r4)
    beq lbl_fn_80694790_0000DD18
    srawi r0, r29, 3
    lwz r23, 0x0(r25)
    addze r0, r0
    mr r4, r28
    slwi r24, r0, 3
    mr r3, r23
    mr r5, r24
    bl memmove
    lwz r0, 0x4(r25)
    add r3, r23, r24
    add r4, r28, r29
    slwi r0, r0, 3
    addi r3, r3, 0x8
    add r0, r28, r0
    subf r0, r4, r0
    srawi r0, r0, 3
    addze r0, r0
    slwi r5, r0, 3
    bl memmove
    mr r3, r28
    bl dtor_80084684
lbl_fn_80694790_0000DD18:
    lwz r3, 0x4(r25)
    lwz r0, 0x0(r25)
    addi r3, r3, 0x1
    stw r3, 0x4(r25)
    add r27, r0, r29
lbl_fn_80694790_0000DD2C:
    mr r3, r27
    lmw r23, 0x6c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80694C38(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r23, 0x6c(r1)
    mr r25, r3
    mr r27, r4
    mr r26, r5
    lwz r0, 0x4(r3)
    lwz r31, 0x8(r3)
    cmplw r0, r31
    blt lbl_fn_80694C38_0000DE6C
    lis r3, 0x2000
    subi r0, r3, 0x1
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_80694C38_0000DE44
    lis r28, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r28, r28, lbl_80766688@l
    stw r3, 0x50(r1)
    addi r29, r1, 0x50
    stb r0, 0x10(r1)
    mr r3, r28
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x10
    stw r3, 0x54(r1)
    mr r24, r3
    stw r3, 0x30(r1)
    li r3, 0x10
    stw r0, 0x34(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694C38_0000DDFC
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_80694C38_0000DDFC:
    li r0, 0x0
    stw r3, 0x58(r1)
    stw r0, 0x30(r1)
    b lbl_fn_80694C38_0000DE10
    bl fn_80084C24
lbl_fn_80694C38_0000DE10:
    lwz r3, 0x54(r1)
    mr r4, r28
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x50(r1)
    mr r4, r29
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694C38_0000DE44:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80694C38_0000DE58
    b lbl_fn_80694C38_0000DEDC
lbl_fn_80694C38_0000DE58:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r31, r0
    bge lbl_fn_80694C38_0000DEDC
    b lbl_fn_80694C38_0000DEDC
lbl_fn_80694C38_0000DE6C:
    cmplw r4, r5
    lwz r6, 0x0(r3)
    slwi r0, r0, 3
    add r6, r6, r0
    bgt lbl_fn_80694C38_0000DE8C
    cmplw r5, r6
    bge lbl_fn_80694C38_0000DE8C
    addi r26, r5, 0x8
lbl_fn_80694C38_0000DE8C:
    subf r0, r4, r6
    lwz r4, 0x4(r3)
    srawi r0, r0, 3
    addi r6, r6, 0x8
    addze r0, r0
    addi r4, r4, 0x1
    stw r4, 0x4(r3)
    slwi r5, r0, 3
    mr r4, r27
    subf r3, r5, r6
    bl memmove
    lhz r5, 0x0(r26)
    lhz r4, 0x2(r26)
    lhz r3, 0x4(r26)
    lhz r0, 0x6(r26)
    sth r5, 0x0(r27)
    sth r4, 0x2(r27)
    sth r3, 0x4(r27)
    sth r0, 0x6(r27)
    b lbl_fn_80694C38_0000E1D4
lbl_fn_80694C38_0000DEDC:
    lwz r28, 0x0(r25)
    li r31, 0x1
    lis r3, 0x2000
    stw r31, 0x1c(r1)
    subf r0, r28, r27
    srawi r4, r0, 3
    lwz r29, 0x8(r25)
    subi r0, r3, 0x1
    addze r27, r4
    subf r0, r29, r0
    cmplwi r0, 0x1
    bge lbl_fn_80694C38_0000DFC8
    lis r23, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r23, r23, lbl_80766688@l
    stw r3, 0x44(r1)
    addi r30, r1, 0x44
    stb r0, 0xc(r1)
    mr r3, r23
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x48(r1)
    mr r24, r3
    stw r3, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694C38_0000DF80
    stw r31, 0x4(r3)
    lis r4, lbl_80775B98@ha
    addi r4, r4, lbl_80775B98@l
    stw r31, 0x8(r3)
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_80694C38_0000DF80:
    li r0, 0x0
    stw r3, 0x4c(r1)
    stw r0, 0x28(r1)
    b lbl_fn_80694C38_0000DF94
    bl fn_80084C24
lbl_fn_80694C38_0000DF94:
    lwz r3, 0x48(r1)
    mr r4, r23
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x44(r1)
    mr r4, r30
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694C38_0000DFC8:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r29, r0
    bge lbl_fn_80694C38_0000E018
    addi r5, r29, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x1c(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x14
    srwi r4, r4, 2
    stw r4, 0x14(r1)
    cmplw r4, r0
    bge lbl_fn_80694C38_0000E00C
    addi r3, r1, 0x1c
lbl_fn_80694C38_0000E00C:
    lwz r0, 0x0(r3)
    add r31, r29, r0
    b lbl_fn_80694C38_0000E05C
lbl_fn_80694C38_0000E018:
    lis r3, 0x1555
    addi r0, r3, 0x5554
    cmplw r29, r0
    bge lbl_fn_80694C38_0000E054
    addi r3, r29, 0x1
    lwz r0, 0x1c(r1)
    srwi r3, r3, 1
    stw r3, 0x18(r1)
    cmplw r3, r0
    addi r3, r1, 0x18
    bge lbl_fn_80694C38_0000E048
    addi r3, r1, 0x1c
lbl_fn_80694C38_0000E048:
    lwz r0, 0x0(r3)
    add r31, r29, r0
    b lbl_fn_80694C38_0000E05C
lbl_fn_80694C38_0000E054:
    lis r3, 0x2000
    subi r31, r3, 0x1
lbl_fn_80694C38_0000E05C:
    lis r3, 0x2000
    subi r0, r3, 0x1
    cmplw r31, r0
    ble lbl_fn_80694C38_0000E12C
    lis r23, lbl_80766688@ha
    lis r3, lbl_807BBF38@ha
    addi r3, r3, lbl_807BBF38@l
    li r0, 0x0
    addi r23, r23, lbl_80766688@l
    stw r3, 0x38(r1)
    addi r29, r1, 0x38
    stb r0, 0x8(r1)
    mr r3, r23
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x3c(r1)
    mr r30, r3
    stw r3, 0x20(r1)
    li r3, 0x10
    stw r0, 0x24(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_80694C38_0000E0E4
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r30, 0xc(r3)
lbl_fn_80694C38_0000E0E4:
    li r0, 0x0
    stw r3, 0x40(r1)
    stw r0, 0x20(r1)
    b lbl_fn_80694C38_0000E0F8
    bl fn_80084C24
lbl_fn_80694C38_0000E0F8:
    lwz r3, 0x3c(r1)
    mr r4, r23
    bl strcpy
    lis r4, lbl_807BBF10@ha
    lis r3, lbl_80766688@ha
    addi r4, r4, lbl_807BBF10@l
    lis r5, fn_8069519C@ha
    addi r3, r3, lbl_80766688@l
    stw r4, 0x38(r1)
    mr r4, r29
    addi r5, r5, fn_8069519C@l
    addi r3, r3, 0x14
    bl fn_80697BB8
lbl_fn_80694C38_0000E12C:
    slwi r3, r31, 3
    bl fn_800844D8
    slwi r29, r27, 3
    stw r31, 0x8(r25)
    add r4, r3, r29
    lhz r0, 0x2(r26)
    stw r3, 0x0(r25)
    cmpwi r28, 0x0
    lhz r3, 0x0(r26)
    sth r3, 0x0(r4)
    lhz r3, 0x4(r26)
    sth r0, 0x2(r4)
    lhz r0, 0x6(r26)
    sth r3, 0x4(r4)
    sth r0, 0x6(r4)
    beq lbl_fn_80694C38_0000E1C0
    srawi r0, r29, 3
    lwz r23, 0x0(r25)
    addze r0, r0
    mr r4, r28
    slwi r24, r0, 3
    mr r3, r23
    mr r5, r24
    bl memmove
    lwz r0, 0x4(r25)
    add r3, r23, r24
    add r4, r28, r29
    slwi r0, r0, 3
    addi r3, r3, 0x8
    add r0, r28, r0
    subf r0, r4, r0
    srawi r0, r0, 3
    addze r0, r0
    slwi r5, r0, 3
    bl memmove
    mr r3, r28
    bl dtor_80084684
lbl_fn_80694C38_0000E1C0:
    lwz r3, 0x4(r25)
    lwz r0, 0x0(r25)
    addi r3, r3, 0x1
    stw r3, 0x4(r25)
    add r27, r0, r29
lbl_fn_80694C38_0000E1D4:
    mr r3, r27
    lmw r23, 0x6c(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_806950E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x0(r4)
    lwz r4, lbl_8087ED18
    bl fn_80682428
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_806950E0_0000E220
    addi r3, r31, 0xc
    b lbl_fn_806950E0_0000E224
lbl_fn_806950E0_0000E220:
    li r3, 0x0
lbl_fn_806950E0_0000E224:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069512C(void)
{
    nofralloc
    lwz r3, 0xc(r3)
    li r4, 0x1
    b fn_80691F24
}

asm void dtor_80695138(void)
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
    beq lbl_dtor_80695138_0000E28C
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_dtor_80695138_0000E27C
    li r4, 0x1
    bl fn_80691F24
lbl_dtor_80695138_0000E27C:
    cmpwi r31, 0x0
    ble lbl_dtor_80695138_0000E28C
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80695138_0000E28C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8069519C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r1
    stw r30, 0x28(r1)
    mr r30, r4
    stw r29, 0x24(r1)
    mr r29, r3
    beq lbl_fn_8069519C_0000E314
    beq lbl_fn_8069519C_0000E304
    addic. r3, r3, 0x4
    beq lbl_fn_8069519C_0000E304
    beq lbl_fn_8069519C_0000E304
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8069519C_0000E304
    bl fn_806952C4
    b lbl_fn_8069519C_0000E304
    addi r3, r31, 0x8
    bl fn_806974B4
lbl_fn_8069519C_0000E300:
    b lbl_fn_8069519C_0000E300
lbl_fn_8069519C_0000E304:
    extsh. r0, r30
    ble lbl_fn_8069519C_0000E314
    mr r3, r29
    bl dtor_80084684
lbl_fn_8069519C_0000E314:
    mr r10, r31
    lwz r31, 0x2c(r31)
    mr r3, r29
    lwz r30, 0x28(r10)
    lwz r29, 0x24(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_80695230(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80695230_0000E364
    cmpwi r4, 0x0
    ble lbl_fn_80695230_0000E364
    bl dtor_80084684
lbl_fn_80695230_0000E364:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80695270(void)
{
    nofralloc
    lbz r0, lbl_808803D0
    extsb. r0, r0
    bne lbl_fn_80695270_0000E390
    li r0, 0x1
    stb r0, lbl_808803D0
lbl_fn_80695270_0000E390:
    lbz r0, lbl_808803D1
    extsb. r0, r0
    bne lbl_fn_80695270_0000E3A4
    li r0, 0x1
    stb r0, lbl_808803D1
lbl_fn_80695270_0000E3A4:
    lbz r0, lbl_808803D2
    extsb. r0, r0
    bne lbl_fn_80695270_0000E3B8
    li r0, 0x1
    stb r0, lbl_808803D2
lbl_fn_80695270_0000E3B8:
    lbz r0, lbl_808803D3
    extsb. r0, r0
    bnelr
    li r0, 0x1
    stb r0, lbl_808803D3
    blr
}

asm void fn_806952C4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    subic. r0, r0, 0x1
    stw r0, 0x4(r3)
    bne lbl_fn_806952C4_0000E434
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r0, 0x8(r31)
    subic. r0, r0, 0x1
    stw r0, 0x8(r31)
    bne lbl_fn_806952C4_0000E434
    cmpwi r31, 0x0
    beq lbl_fn_806952C4_0000E434
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_806952C4_0000E434:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void strlen(void)
{
    nofralloc
    subi r4, r3, 0x1
    li r3, -0x1
lbl_strlen_0000E450:
    lbzu r0, 0x1(r4)
    addi r3, r3, 0x1
    cmpwi r0, 0x0
    bne lbl_strlen_0000E450
    blr
}

asm void __va_arg(void)
{
    nofralloc
    lbz r7, 0x0(r3)
    cmpwi r4, 0x3
    mr r6, r3
    li r0, 0x8
    extsb r7, r7
    li r8, 0x4
    li r9, 0x1
    li r5, 0x0
    li r10, 0x0
    li r11, 0x4
    bne lbl___va_arg_0000E4A8
    lbz r7, 0x1(r3)
    addi r6, r3, 0x1
    li r8, 0x8
    li r10, 0x20
    extsb r7, r7
    li r11, 0x8
lbl___va_arg_0000E4A8:
    cmpwi r4, 0x2
    bne lbl___va_arg_0000E4C8
    clrlwi. r0, r7, 31
    li r8, 0x8
    li r0, 0x7
    beq lbl___va_arg_0000E4C4
    li r5, 0x1
lbl___va_arg_0000E4C4:
    li r9, 0x2
lbl___va_arg_0000E4C8:
    cmpw r7, r0
    bge lbl___va_arg_0000E4F0
    add r7, r7, r5
    lwz r0, 0x8(r3)
    mullw r5, r7, r11
    add r3, r0, r10
    add r0, r7, r9
    stb r0, 0x0(r6)
    add r5, r5, r3
    b lbl___va_arg_0000E518
lbl___va_arg_0000E4F0:
    li r0, 0x8
    stb r0, 0x0(r6)
    subi r0, r8, 0x1
    lwz r5, 0x4(r3)
    nor r6, r0, r0
    add r5, r8, r5
    subi r0, r5, 0x1
    and r5, r6, r0
    add r0, r5, r8
    stw r0, 0x4(r3)
lbl___va_arg_0000E518:
    cmpwi r4, 0x0
    bne lbl___va_arg_0000E524
    lwz r5, 0x0(r5)
lbl___va_arg_0000E524:
    mr r3, r5
    blr
}
