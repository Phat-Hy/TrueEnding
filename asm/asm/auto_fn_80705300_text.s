.include "macros.inc"
.file "auto_fn_80705300_text"

# 0x80705300..0x80705340 | size: 0x40
.text
.balign 4

# .text:0x0 | 0x80705300 | size: 0x40
.fn fn_80705300, global
/* 80705300 006FF960  3C E0 80 7C */	lis r7, lbl_807C5EC8@ha
/* 80705304 006FF964  3C C0 80 7C */	lis r6, lbl_807C5EB8@ha
/* 80705308 006FF968  3C A0 80 7C */	lis r5, lbl_807C5EA8@ha
/* 8070530C 006FF96C  3C 80 80 7C */	lis r4, lbl_807C5E98@ha
/* 80705310 006FF970  3C 60 80 7C */	lis r3, lbl_807C5E88@ha
/* 80705314 006FF974  38 E7 5E C8 */	addi r7, r7, lbl_807C5EC8@l
/* 80705318 006FF978  38 C6 5E B8 */	addi r6, r6, lbl_807C5EB8@l
/* 8070531C 006FF97C  38 A5 5E A8 */	addi r5, r5, lbl_807C5EA8@l
/* 80705320 006FF980  38 84 5E 98 */	addi r4, r4, lbl_807C5E98@l
/* 80705324 006FF984  38 63 5E 88 */	addi r3, r3, lbl_807C5E88@l
/* 80705328 006FF988  90 ED AD C8 */	stw r7, lbl_80880488@sda21(r0)
/* 8070532C 006FF98C  90 CD AD CC */	stw r6, lbl_8088048C@sda21(r0)
/* 80705330 006FF990  90 AD AD D0 */	stw r5, lbl_80880490@sda21(r0)
/* 80705334 006FF994  90 8D AD D4 */	stw r4, lbl_80880494@sda21(r0)
/* 80705338 006FF998  90 6D AD D8 */	stw r3, lbl_80880498@sda21(r0)
/* 8070533C 006FF99C  4E 80 00 20 */	blr
.endfn fn_80705300

# 0x8072D404..0x8072D408 | size: 0x4
.section .ctors, "a"
.balign 4
	.4byte fn_80705300
