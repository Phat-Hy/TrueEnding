.include "macros.inc"
.file "auto_fn_801F1EA0_text"

# 0x801F1EA0..0x801F2398 | size: 0x4F8
.text
.balign 4

# .text:0x0 | 0x801F1EA0 | size: 0x4F8
.fn fn_801F1EA0, global
/* 801F1EA0 001EC500  94 21 FD D0 */	stwu r1, -0x230(r1)
/* 801F1EA4 001EC504  93 E1 02 2C */	stw r31, 0x22c(r1)
/* 801F1EA8 001EC508  C0 C2 A6 A4 */	lfs f6, lbl_80882C44@sda21(r0)
/* 801F1EAC 001EC50C  3C 60 80 7C */	lis r3, lbl_807C7D48@ha
/* 801F1EB0 001EC510  C0 A2 A6 A8 */	lfs f5, lbl_80882C48@sda21(r0)
/* 801F1EB4 001EC514  38 81 02 18 */	addi r4, r1, 0x218
/* 801F1EB8 001EC518  C0 02 A6 B4 */	lfs f0, lbl_80882C54@sda21(r0)
/* 801F1EBC 001EC51C  38 63 7D 48 */	addi r3, r3, lbl_807C7D48@l
/* 801F1EC0 001EC520  C0 82 A6 AC */	lfs f4, lbl_80882C4C@sda21(r0)
/* 801F1EC4 001EC524  38 A1 02 08 */	addi r5, r1, 0x208
/* 801F1EC8 001EC528  C0 62 A6 B0 */	lfs f3, lbl_80882C50@sda21(r0)
/* 801F1ECC 001EC52C  38 C1 01 F8 */	addi r6, r1, 0x1f8
/* 801F1ED0 001EC530  D0 C1 02 18 */	stfs f6, 0x218(r1)
/* 801F1ED4 001EC534  38 E1 01 E8 */	addi r7, r1, 0x1e8
/* 801F1ED8 001EC538  39 01 01 D8 */	addi r8, r1, 0x1d8
/* 801F1EDC 001EC53C  39 21 01 C8 */	addi r9, r1, 0x1c8
/* 801F1EE0 001EC540  D0 C1 02 1C */	stfs f6, 0x21c(r1)
/* 801F1EE4 001EC544  39 41 01 B8 */	addi r10, r1, 0x1b8
/* 801F1EE8 001EC548  39 61 01 A8 */	addi r11, r1, 0x1a8
/* 801F1EEC 001EC54C  39 81 01 98 */	addi r12, r1, 0x198
/* 801F1EF0 001EC550  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F1EF4 001EC554  3B E1 01 88 */	addi r31, r1, 0x188
/* 801F1EF8 001EC558  D0 A1 02 20 */	stfs f5, 0x220(r1)
/* 801F1EFC 001EC55C  D0 A1 02 24 */	stfs f5, 0x224(r1)
/* 801F1F00 001EC560  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F1F04 001EC564  D0 C1 02 08 */	stfs f6, 0x208(r1)
/* 801F1F08 001EC568  D0 C1 02 0C */	stfs f6, 0x20c(r1)
/* 801F1F0C 001EC56C  F0 23 00 00 */	psq_st f1, 0x0(r3), 0, qr0
/* 801F1F10 001EC570  E0 25 00 00 */	psq_l f1, 0x0(r5), 0, qr0
/* 801F1F14 001EC574  D0 A1 02 10 */	stfs f5, 0x210(r1)
/* 801F1F18 001EC578  D0 A1 02 14 */	stfs f5, 0x214(r1)
/* 801F1F1C 001EC57C  F0 43 00 08 */	psq_st f2, 0x8(r3), 0, qr0
/* 801F1F20 001EC580  E0 45 00 08 */	psq_l f2, 0x8(r5), 0, qr0
/* 801F1F24 001EC584  D0 C1 01 F8 */	stfs f6, 0x1f8(r1)
/* 801F1F28 001EC588  D0 81 01 FC */	stfs f4, 0x1fc(r1)
/* 801F1F2C 001EC58C  F0 23 00 10 */	psq_st f1, 0x10(r3), 0, qr0
/* 801F1F30 001EC590  E0 26 00 00 */	psq_l f1, 0x0(r6), 0, qr0
/* 801F1F34 001EC594  D0 61 02 00 */	stfs f3, 0x200(r1)
/* 801F1F38 001EC598  D0 01 02 04 */	stfs f0, 0x204(r1)
/* 801F1F3C 001EC59C  F0 43 00 18 */	psq_st f2, 0x18(r3), 0, qr0
/* 801F1F40 001EC5A0  E0 46 00 08 */	psq_l f2, 0x8(r6), 0, qr0
/* 801F1F44 001EC5A4  D0 C1 01 E8 */	stfs f6, 0x1e8(r1)
/* 801F1F48 001EC5A8  D0 C1 01 EC */	stfs f6, 0x1ec(r1)
/* 801F1F4C 001EC5AC  F0 23 00 20 */	psq_st f1, 0x20(r3), 0, qr0
/* 801F1F50 001EC5B0  E0 27 00 00 */	psq_l f1, 0x0(r7), 0, qr0
/* 801F1F54 001EC5B4  D0 61 01 F0 */	stfs f3, 0x1f0(r1)
/* 801F1F58 001EC5B8  D0 61 01 F4 */	stfs f3, 0x1f4(r1)
/* 801F1F5C 001EC5BC  F0 43 00 28 */	psq_st f2, 0x28(r3), 0, qr0
/* 801F1F60 001EC5C0  E0 47 00 08 */	psq_l f2, 0x8(r7), 0, qr0
/* 801F1F64 001EC5C4  D0 61 01 D8 */	stfs f3, 0x1d8(r1)
/* 801F1F68 001EC5C8  D0 81 01 DC */	stfs f4, 0x1dc(r1)
/* 801F1F6C 001EC5CC  F0 23 00 30 */	psq_st f1, 0x30(r3), 0, qr0
/* 801F1F70 001EC5D0  E0 28 00 00 */	psq_l f1, 0x0(r8), 0, qr0
/* 801F1F74 001EC5D4  D0 81 01 E0 */	stfs f4, 0x1e0(r1)
/* 801F1F78 001EC5D8  D0 01 01 E4 */	stfs f0, 0x1e4(r1)
/* 801F1F7C 001EC5DC  F0 43 00 38 */	psq_st f2, 0x38(r3), 0, qr0
/* 801F1F80 001EC5E0  E0 48 00 08 */	psq_l f2, 0x8(r8), 0, qr0
/* 801F1F84 001EC5E4  D0 61 01 C8 */	stfs f3, 0x1c8(r1)
/* 801F1F88 001EC5E8  D0 C1 01 CC */	stfs f6, 0x1cc(r1)
/* 801F1F8C 001EC5EC  F0 23 00 40 */	psq_st f1, 0x40(r3), 0, qr0
/* 801F1F90 001EC5F0  E0 29 00 00 */	psq_l f1, 0x0(r9), 0, qr0
/* 801F1F94 001EC5F4  D0 81 01 D0 */	stfs f4, 0x1d0(r1)
/* 801F1F98 001EC5F8  D0 61 01 D4 */	stfs f3, 0x1d4(r1)
/* 801F1F9C 001EC5FC  F0 43 00 48 */	psq_st f2, 0x48(r3), 0, qr0
/* 801F1FA0 001EC600  E0 49 00 08 */	psq_l f2, 0x8(r9), 0, qr0
/* 801F1FA4 001EC604  D0 81 01 B8 */	stfs f4, 0x1b8(r1)
/* 801F1FA8 001EC608  D0 81 01 BC */	stfs f4, 0x1bc(r1)
/* 801F1FAC 001EC60C  F0 23 00 50 */	psq_st f1, 0x50(r3), 0, qr0
/* 801F1FB0 001EC610  E0 2A 00 00 */	psq_l f1, 0x0(r10), 0, qr0
/* 801F1FB4 001EC614  D0 01 01 C0 */	stfs f0, 0x1c0(r1)
/* 801F1FB8 001EC618  D0 01 01 C4 */	stfs f0, 0x1c4(r1)
/* 801F1FBC 001EC61C  F0 43 00 58 */	psq_st f2, 0x58(r3), 0, qr0
/* 801F1FC0 001EC620  E0 4A 00 08 */	psq_l f2, 0x8(r10), 0, qr0
/* 801F1FC4 001EC624  D0 81 01 A8 */	stfs f4, 0x1a8(r1)
/* 801F1FC8 001EC628  D0 C1 01 AC */	stfs f6, 0x1ac(r1)
/* 801F1FCC 001EC62C  F0 23 00 60 */	psq_st f1, 0x60(r3), 0, qr0
/* 801F1FD0 001EC630  E0 2B 00 00 */	psq_l f1, 0x0(r11), 0, qr0
/* 801F1FD4 001EC634  D0 01 01 B0 */	stfs f0, 0x1b0(r1)
/* 801F1FD8 001EC638  D0 61 01 B4 */	stfs f3, 0x1b4(r1)
/* 801F1FDC 001EC63C  F0 43 00 68 */	psq_st f2, 0x68(r3), 0, qr0
/* 801F1FE0 001EC640  E0 4B 00 08 */	psq_l f2, 0x8(r11), 0, qr0
/* 801F1FE4 001EC644  D0 01 01 98 */	stfs f0, 0x198(r1)
/* 801F1FE8 001EC648  D0 81 01 9C */	stfs f4, 0x19c(r1)
/* 801F1FEC 001EC64C  F0 23 00 70 */	psq_st f1, 0x70(r3), 0, qr0
/* 801F1FF0 001EC650  E0 2C 00 00 */	psq_l f1, 0x0(r12), 0, qr0
/* 801F1FF4 001EC654  D0 A1 01 A0 */	stfs f5, 0x1a0(r1)
/* 801F1FF8 001EC658  D0 01 01 A4 */	stfs f0, 0x1a4(r1)
/* 801F1FFC 001EC65C  F0 43 00 78 */	psq_st f2, 0x78(r3), 0, qr0
/* 801F2000 001EC660  E0 4C 00 08 */	psq_l f2, 0x8(r12), 0, qr0
/* 801F2004 001EC664  D0 01 01 88 */	stfs f0, 0x188(r1)
/* 801F2008 001EC668  D0 C1 01 8C */	stfs f6, 0x18c(r1)
/* 801F200C 001EC66C  F0 23 00 80 */	psq_st f1, 0x80(r3), 0, qr0
/* 801F2010 001EC670  E0 3F 00 00 */	psq_l f1, 0x0(r31), 0, qr0
/* 801F2014 001EC674  D0 A1 01 90 */	stfs f5, 0x190(r1)
/* 801F2018 001EC678  D0 61 01 94 */	stfs f3, 0x194(r1)
/* 801F201C 001EC67C  F0 43 00 88 */	psq_st f2, 0x88(r3), 0, qr0
/* 801F2020 001EC680  E0 5F 00 08 */	psq_l f2, 0x8(r31), 0, qr0
/* 801F2024 001EC684  F0 23 00 90 */	psq_st f1, 0x90(r3), 0, qr0
/* 801F2028 001EC688  F0 43 00 98 */	psq_st f2, 0x98(r3), 0, qr0
/* 801F202C 001EC68C  D0 C1 01 78 */	stfs f6, 0x178(r1)
/* 801F2030 001EC690  D0 01 01 7C */	stfs f0, 0x17c(r1)
/* 801F2034 001EC694  D0 61 01 80 */	stfs f3, 0x180(r1)
/* 801F2038 001EC698  38 81 01 78 */	addi r4, r1, 0x178
/* 801F203C 001EC69C  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F2040 001EC6A0  38 A1 01 68 */	addi r5, r1, 0x168
/* 801F2044 001EC6A4  D0 A1 01 84 */	stfs f5, 0x184(r1)
/* 801F2048 001EC6A8  38 C1 01 58 */	addi r6, r1, 0x158
/* 801F204C 001EC6AC  38 E1 01 48 */	addi r7, r1, 0x148
/* 801F2050 001EC6B0  39 01 01 38 */	addi r8, r1, 0x138
/* 801F2054 001EC6B4  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F2058 001EC6B8  38 81 01 28 */	addi r4, r1, 0x128
/* 801F205C 001EC6BC  D0 C1 01 68 */	stfs f6, 0x168(r1)
/* 801F2060 001EC6C0  39 21 01 18 */	addi r9, r1, 0x118
/* 801F2064 001EC6C4  39 41 01 08 */	addi r10, r1, 0x108
/* 801F2068 001EC6C8  39 61 00 F8 */	addi r11, r1, 0xf8
/* 801F206C 001EC6CC  D0 C1 01 6C */	stfs f6, 0x16c(r1)
/* 801F2070 001EC6D0  39 81 00 E8 */	addi r12, r1, 0xe8
/* 801F2074 001EC6D4  F0 23 00 A0 */	psq_st f1, 0xa0(r3), 0, qr0
/* 801F2078 001EC6D8  E0 25 00 00 */	psq_l f1, 0x0(r5), 0, qr0
/* 801F207C 001EC6DC  D0 61 01 70 */	stfs f3, 0x170(r1)
/* 801F2080 001EC6E0  D0 61 01 74 */	stfs f3, 0x174(r1)
/* 801F2084 001EC6E4  F0 43 00 A8 */	psq_st f2, 0xa8(r3), 0, qr0
/* 801F2088 001EC6E8  E0 45 00 08 */	psq_l f2, 0x8(r5), 0, qr0
/* 801F208C 001EC6EC  D0 61 01 58 */	stfs f3, 0x158(r1)
/* 801F2090 001EC6F0  D0 01 01 5C */	stfs f0, 0x15c(r1)
/* 801F2094 001EC6F4  F0 23 00 B0 */	psq_st f1, 0xb0(r3), 0, qr0
/* 801F2098 001EC6F8  E0 26 00 00 */	psq_l f1, 0x0(r6), 0, qr0
/* 801F209C 001EC6FC  D0 81 01 60 */	stfs f4, 0x160(r1)
/* 801F20A0 001EC700  D0 A1 01 64 */	stfs f5, 0x164(r1)
/* 801F20A4 001EC704  F0 43 00 B8 */	psq_st f2, 0xb8(r3), 0, qr0
/* 801F20A8 001EC708  E0 46 00 08 */	psq_l f2, 0x8(r6), 0, qr0
/* 801F20AC 001EC70C  D0 C1 01 48 */	stfs f6, 0x148(r1)
/* 801F20B0 001EC710  D0 C1 01 4C */	stfs f6, 0x14c(r1)
/* 801F20B4 001EC714  F0 23 00 C0 */	psq_st f1, 0xc0(r3), 0, qr0
/* 801F20B8 001EC718  E0 27 00 00 */	psq_l f1, 0x0(r7), 0, qr0
/* 801F20BC 001EC71C  D0 61 01 50 */	stfs f3, 0x150(r1)
/* 801F20C0 001EC720  D0 61 01 54 */	stfs f3, 0x154(r1)
/* 801F20C4 001EC724  F0 43 00 C8 */	psq_st f2, 0xc8(r3), 0, qr0
/* 801F20C8 001EC728  E0 47 00 08 */	psq_l f2, 0x8(r7), 0, qr0
/* 801F20CC 001EC72C  D0 81 01 38 */	stfs f4, 0x138(r1)
/* 801F20D0 001EC730  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 801F20D4 001EC734  F0 23 00 D0 */	psq_st f1, 0xd0(r3), 0, qr0
/* 801F20D8 001EC738  E0 28 00 00 */	psq_l f1, 0x0(r8), 0, qr0
/* 801F20DC 001EC73C  D0 01 01 40 */	stfs f0, 0x140(r1)
/* 801F20E0 001EC740  D0 A1 01 44 */	stfs f5, 0x144(r1)
/* 801F20E4 001EC744  F0 43 00 D8 */	psq_st f2, 0xd8(r3), 0, qr0
/* 801F20E8 001EC748  E0 48 00 08 */	psq_l f2, 0x8(r8), 0, qr0
/* 801F20EC 001EC74C  D0 C1 01 28 */	stfs f6, 0x128(r1)
/* 801F20F0 001EC750  D0 C1 01 2C */	stfs f6, 0x12c(r1)
/* 801F20F4 001EC754  F0 23 00 E0 */	psq_st f1, 0xe0(r3), 0, qr0
/* 801F20F8 001EC758  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F20FC 001EC75C  D0 61 01 30 */	stfs f3, 0x130(r1)
/* 801F2100 001EC760  D0 61 01 34 */	stfs f3, 0x134(r1)
/* 801F2104 001EC764  F0 43 00 E8 */	psq_st f2, 0xe8(r3), 0, qr0
/* 801F2108 001EC768  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F210C 001EC76C  D0 01 01 18 */	stfs f0, 0x118(r1)
/* 801F2110 001EC770  D0 01 01 1C */	stfs f0, 0x11c(r1)
/* 801F2114 001EC774  F0 23 00 F0 */	psq_st f1, 0xf0(r3), 0, qr0
/* 801F2118 001EC778  E0 29 00 00 */	psq_l f1, 0x0(r9), 0, qr0
/* 801F211C 001EC77C  D0 A1 01 20 */	stfs f5, 0x120(r1)
/* 801F2120 001EC780  D0 A1 01 24 */	stfs f5, 0x124(r1)
/* 801F2124 001EC784  F0 43 00 F8 */	psq_st f2, 0xf8(r3), 0, qr0
/* 801F2128 001EC788  E0 49 00 08 */	psq_l f2, 0x8(r9), 0, qr0
/* 801F212C 001EC78C  D0 C1 01 08 */	stfs f6, 0x108(r1)
/* 801F2130 001EC790  D0 C1 01 0C */	stfs f6, 0x10c(r1)
/* 801F2134 001EC794  F0 23 01 00 */	psq_st f1, 0x100(r3), 0, qr0
/* 801F2138 001EC798  E0 2A 00 00 */	psq_l f1, 0x0(r10), 0, qr0
/* 801F213C 001EC79C  D0 61 01 10 */	stfs f3, 0x110(r1)
/* 801F2140 001EC7A0  D0 61 01 14 */	stfs f3, 0x114(r1)
/* 801F2144 001EC7A4  F0 43 01 08 */	psq_st f2, 0x108(r3), 0, qr0
/* 801F2148 001EC7A8  E0 4A 00 08 */	psq_l f2, 0x8(r10), 0, qr0
/* 801F214C 001EC7AC  D0 C1 00 F8 */	stfs f6, 0xf8(r1)
/* 801F2150 001EC7B0  D0 C1 00 FC */	stfs f6, 0xfc(r1)
/* 801F2154 001EC7B4  F0 23 01 10 */	psq_st f1, 0x110(r3), 0, qr0
/* 801F2158 001EC7B8  E0 2B 00 00 */	psq_l f1, 0x0(r11), 0, qr0
/* 801F215C 001EC7BC  D0 61 01 00 */	stfs f3, 0x100(r1)
/* 801F2160 001EC7C0  D0 61 01 04 */	stfs f3, 0x104(r1)
/* 801F2164 001EC7C4  F0 43 01 18 */	psq_st f2, 0x118(r3), 0, qr0
/* 801F2168 001EC7C8  E0 4B 00 08 */	psq_l f2, 0x8(r11), 0, qr0
/* 801F216C 001EC7CC  D0 C1 00 E8 */	stfs f6, 0xe8(r1)
/* 801F2170 001EC7D0  D0 C1 00 EC */	stfs f6, 0xec(r1)
/* 801F2174 001EC7D4  F0 23 01 20 */	psq_st f1, 0x120(r3), 0, qr0
/* 801F2178 001EC7D8  E0 2C 00 00 */	psq_l f1, 0x0(r12), 0, qr0
/* 801F217C 001EC7DC  D0 61 00 F0 */	stfs f3, 0xf0(r1)
/* 801F2180 001EC7E0  D0 61 00 F4 */	stfs f3, 0xf4(r1)
/* 801F2184 001EC7E4  F0 43 01 28 */	psq_st f2, 0x128(r3), 0, qr0
/* 801F2188 001EC7E8  E0 4C 00 08 */	psq_l f2, 0x8(r12), 0, qr0
/* 801F218C 001EC7EC  F0 23 01 30 */	psq_st f1, 0x130(r3), 0, qr0
/* 801F2190 001EC7F0  F0 43 01 38 */	psq_st f2, 0x138(r3), 0, qr0
/* 801F2194 001EC7F4  D0 61 00 D8 */	stfs f3, 0xd8(r1)
/* 801F2198 001EC7F8  D0 C1 00 DC */	stfs f6, 0xdc(r1)
/* 801F219C 001EC7FC  D0 81 00 E0 */	stfs f4, 0xe0(r1)
/* 801F21A0 001EC800  D0 61 00 E4 */	stfs f3, 0xe4(r1)
/* 801F21A4 001EC804  38 81 00 D8 */	addi r4, r1, 0xd8
/* 801F21A8 001EC808  D0 C1 00 C8 */	stfs f6, 0xc8(r1)
/* 801F21AC 001EC80C  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F21B0 001EC810  38 A1 00 C8 */	addi r5, r1, 0xc8
/* 801F21B4 001EC814  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F21B8 001EC818  38 81 00 B8 */	addi r4, r1, 0xb8
/* 801F21BC 001EC81C  D0 C1 00 CC */	stfs f6, 0xcc(r1)
/* 801F21C0 001EC820  38 C1 00 A8 */	addi r6, r1, 0xa8
/* 801F21C4 001EC824  38 E1 00 98 */	addi r7, r1, 0x98
/* 801F21C8 001EC828  39 01 00 88 */	addi r8, r1, 0x88
/* 801F21CC 001EC82C  F0 23 01 40 */	psq_st f1, 0x140(r3), 0, qr0
/* 801F21D0 001EC830  39 21 00 78 */	addi r9, r1, 0x78
/* 801F21D4 001EC834  E0 25 00 00 */	psq_l f1, 0x0(r5), 0, qr0
/* 801F21D8 001EC838  39 41 00 68 */	addi r10, r1, 0x68
/* 801F21DC 001EC83C  D0 61 00 D0 */	stfs f3, 0xd0(r1)
/* 801F21E0 001EC840  39 61 00 58 */	addi r11, r1, 0x58
/* 801F21E4 001EC844  39 81 00 48 */	addi r12, r1, 0x48
/* 801F21E8 001EC848  D0 61 00 D4 */	stfs f3, 0xd4(r1)
/* 801F21EC 001EC84C  F0 43 01 48 */	psq_st f2, 0x148(r3), 0, qr0
/* 801F21F0 001EC850  E0 45 00 08 */	psq_l f2, 0x8(r5), 0, qr0
/* 801F21F4 001EC854  D0 81 00 B8 */	stfs f4, 0xb8(r1)
/* 801F21F8 001EC858  D0 C1 00 BC */	stfs f6, 0xbc(r1)
/* 801F21FC 001EC85C  F0 23 01 50 */	psq_st f1, 0x150(r3), 0, qr0
/* 801F2200 001EC860  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F2204 001EC864  D0 01 00 C0 */	stfs f0, 0xc0(r1)
/* 801F2208 001EC868  D0 61 00 C4 */	stfs f3, 0xc4(r1)
/* 801F220C 001EC86C  F0 43 01 58 */	psq_st f2, 0x158(r3), 0, qr0
/* 801F2210 001EC870  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F2214 001EC874  D0 C1 00 A8 */	stfs f6, 0xa8(r1)
/* 801F2218 001EC878  D0 C1 00 AC */	stfs f6, 0xac(r1)
/* 801F221C 001EC87C  F0 23 01 60 */	psq_st f1, 0x160(r3), 0, qr0
/* 801F2220 001EC880  E0 26 00 00 */	psq_l f1, 0x0(r6), 0, qr0
/* 801F2224 001EC884  D0 61 00 B0 */	stfs f3, 0xb0(r1)
/* 801F2228 001EC888  D0 61 00 B4 */	stfs f3, 0xb4(r1)
/* 801F222C 001EC88C  F0 43 01 68 */	psq_st f2, 0x168(r3), 0, qr0
/* 801F2230 001EC890  E0 46 00 08 */	psq_l f2, 0x8(r6), 0, qr0
/* 801F2234 001EC894  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 801F2238 001EC898  D0 C1 00 9C */	stfs f6, 0x9c(r1)
/* 801F223C 001EC89C  F0 23 01 70 */	psq_st f1, 0x170(r3), 0, qr0
/* 801F2240 001EC8A0  E0 27 00 00 */	psq_l f1, 0x0(r7), 0, qr0
/* 801F2244 001EC8A4  D0 A1 00 A0 */	stfs f5, 0xa0(r1)
/* 801F2248 001EC8A8  D0 61 00 A4 */	stfs f3, 0xa4(r1)
/* 801F224C 001EC8AC  F0 43 01 78 */	psq_st f2, 0x178(r3), 0, qr0
/* 801F2250 001EC8B0  E0 47 00 08 */	psq_l f2, 0x8(r7), 0, qr0
/* 801F2254 001EC8B4  D0 C1 00 88 */	stfs f6, 0x88(r1)
/* 801F2258 001EC8B8  D0 C1 00 8C */	stfs f6, 0x8c(r1)
/* 801F225C 001EC8BC  F0 23 01 80 */	psq_st f1, 0x180(r3), 0, qr0
/* 801F2260 001EC8C0  E0 28 00 00 */	psq_l f1, 0x0(r8), 0, qr0
/* 801F2264 001EC8C4  D0 61 00 90 */	stfs f3, 0x90(r1)
/* 801F2268 001EC8C8  D0 61 00 94 */	stfs f3, 0x94(r1)
/* 801F226C 001EC8CC  F0 43 01 88 */	psq_st f2, 0x188(r3), 0, qr0
/* 801F2270 001EC8D0  E0 48 00 08 */	psq_l f2, 0x8(r8), 0, qr0
/* 801F2274 001EC8D4  D0 C1 00 78 */	stfs f6, 0x78(r1)
/* 801F2278 001EC8D8  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 801F227C 001EC8DC  F0 23 01 90 */	psq_st f1, 0x190(r3), 0, qr0
/* 801F2280 001EC8E0  E0 29 00 00 */	psq_l f1, 0x0(r9), 0, qr0
/* 801F2284 001EC8E4  D0 61 00 80 */	stfs f3, 0x80(r1)
/* 801F2288 001EC8E8  D0 81 00 84 */	stfs f4, 0x84(r1)
/* 801F228C 001EC8EC  F0 43 01 98 */	psq_st f2, 0x198(r3), 0, qr0
/* 801F2290 001EC8F0  E0 49 00 08 */	psq_l f2, 0x8(r9), 0, qr0
/* 801F2294 001EC8F4  D0 C1 00 68 */	stfs f6, 0x68(r1)
/* 801F2298 001EC8F8  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 801F229C 001EC8FC  F0 23 01 A0 */	psq_st f1, 0x1a0(r3), 0, qr0
/* 801F22A0 001EC900  E0 2A 00 00 */	psq_l f1, 0x0(r10), 0, qr0
/* 801F22A4 001EC904  D0 61 00 70 */	stfs f3, 0x70(r1)
/* 801F22A8 001EC908  D0 81 00 74 */	stfs f4, 0x74(r1)
/* 801F22AC 001EC90C  F0 43 01 A8 */	psq_st f2, 0x1a8(r3), 0, qr0
/* 801F22B0 001EC910  E0 4A 00 08 */	psq_l f2, 0x8(r10), 0, qr0
/* 801F22B4 001EC914  D0 61 00 58 */	stfs f3, 0x58(r1)
/* 801F22B8 001EC918  D0 61 00 5C */	stfs f3, 0x5c(r1)
/* 801F22BC 001EC91C  F0 23 01 B0 */	psq_st f1, 0x1b0(r3), 0, qr0
/* 801F22C0 001EC920  E0 2B 00 00 */	psq_l f1, 0x0(r11), 0, qr0
/* 801F22C4 001EC924  D0 81 00 60 */	stfs f4, 0x60(r1)
/* 801F22C8 001EC928  D0 81 00 64 */	stfs f4, 0x64(r1)
/* 801F22CC 001EC92C  F0 43 01 B8 */	psq_st f2, 0x1b8(r3), 0, qr0
/* 801F22D0 001EC930  E0 4B 00 08 */	psq_l f2, 0x8(r11), 0, qr0
/* 801F22D4 001EC934  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801F22D8 001EC938  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 801F22DC 001EC93C  F0 23 01 C0 */	psq_st f1, 0x1c0(r3), 0, qr0
/* 801F22E0 001EC940  E0 2C 00 00 */	psq_l f1, 0x0(r12), 0, qr0
/* 801F22E4 001EC944  D0 A1 00 50 */	stfs f5, 0x50(r1)
/* 801F22E8 001EC948  D0 81 00 54 */	stfs f4, 0x54(r1)
/* 801F22EC 001EC94C  F0 43 01 C8 */	psq_st f2, 0x1c8(r3), 0, qr0
/* 801F22F0 001EC950  E0 4C 00 08 */	psq_l f2, 0x8(r12), 0, qr0
/* 801F22F4 001EC954  F0 23 01 D0 */	psq_st f1, 0x1d0(r3), 0, qr0
/* 801F22F8 001EC958  F0 43 01 D8 */	psq_st f2, 0x1d8(r3), 0, qr0
/* 801F22FC 001EC95C  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 801F2300 001EC960  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 801F2304 001EC964  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801F2308 001EC968  D0 81 00 44 */	stfs f4, 0x44(r1)
/* 801F230C 001EC96C  38 81 00 38 */	addi r4, r1, 0x38
/* 801F2310 001EC970  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 801F2314 001EC974  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F2318 001EC978  38 A1 00 28 */	addi r5, r1, 0x28
/* 801F231C 001EC97C  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F2320 001EC980  38 81 00 18 */	addi r4, r1, 0x18
/* 801F2324 001EC984  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 801F2328 001EC988  38 C1 00 08 */	addi r6, r1, 0x8
/* 801F232C 001EC98C  F0 23 01 E0 */	psq_st f1, 0x1e0(r3), 0, qr0
/* 801F2330 001EC990  E0 25 00 00 */	psq_l f1, 0x0(r5), 0, qr0
/* 801F2334 001EC994  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801F2338 001EC998  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 801F233C 001EC99C  F0 43 01 E8 */	psq_st f2, 0x1e8(r3), 0, qr0
/* 801F2340 001EC9A0  E0 45 00 08 */	psq_l f2, 0x8(r5), 0, qr0
/* 801F2344 001EC9A4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801F2348 001EC9A8  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 801F234C 001EC9AC  F0 23 01 F0 */	psq_st f1, 0x1f0(r3), 0, qr0
/* 801F2350 001EC9B0  E0 24 00 00 */	psq_l f1, 0x0(r4), 0, qr0
/* 801F2354 001EC9B4  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 801F2358 001EC9B8  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 801F235C 001EC9BC  F0 43 01 F8 */	psq_st f2, 0x1f8(r3), 0, qr0
/* 801F2360 001EC9C0  E0 44 00 08 */	psq_l f2, 0x8(r4), 0, qr0
/* 801F2364 001EC9C4  D0 81 00 08 */	stfs f4, 0x8(r1)
/* 801F2368 001EC9C8  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 801F236C 001EC9CC  F0 23 02 00 */	psq_st f1, 0x200(r3), 0, qr0
/* 801F2370 001EC9D0  E0 26 00 00 */	psq_l f1, 0x0(r6), 0, qr0
/* 801F2374 001EC9D4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801F2378 001EC9D8  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 801F237C 001EC9DC  F0 43 02 08 */	psq_st f2, 0x208(r3), 0, qr0
/* 801F2380 001EC9E0  E0 46 00 08 */	psq_l f2, 0x8(r6), 0, qr0
/* 801F2384 001EC9E4  F0 23 02 10 */	psq_st f1, 0x210(r3), 0, qr0
/* 801F2388 001EC9E8  F0 43 02 18 */	psq_st f2, 0x218(r3), 0, qr0
/* 801F238C 001EC9EC  83 E1 02 2C */	lwz r31, 0x22c(r1)
/* 801F2390 001EC9F0  38 21 02 30 */	addi r1, r1, 0x230
/* 801F2394 001EC9F4  4E 80 00 20 */	blr
.endfn fn_801F1EA0

# 0x8072D2F8..0x8072D2FC | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_801F1EA0
