#include "revolution/os.h"

/* External functions */
extern void OSSetArenaLo(void*);
extern void OSSetArenaHi(void*);
extern void* OSAllocFromMEM1ArenaLo(u32 size, u32 align);
extern s32 ESP_InitLib(void);
extern s32 ESP_GetTitleId(void* titleId);
extern s32 ESP_DiGetTicketView(u32 viewType, void* ticketView);
extern s32 fn_805BFC10(u32 titleIdHi, u32 titleIdLo, void* ticketViews, u32* numViews);
extern s32 fn_805BFB70(u32 titleIdHi, u32 titleIdLo, void* ticketView);
extern void fn_805F3C90(void);
extern u8 fn_805EC060(void);
extern BOOL OSPlayTimeIsLimited(void);
extern s32 __OSGetPlayTime(void* ticketView, s32* remainSec, s32* remainPlayCount);
extern void fn_805F7E30(void);
extern BOOL fn_805F7A40(void);
extern BOOL fn_805F7AF0(void* buf);
extern BOOL __OSReadStateFlags(void* flags);
extern BOOL __OSWriteStateFlags(const void* flags);

/* Function: fn_805F86B0 */
asm void fn_805F86B0(u32 resetCode) {
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0xa0
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    li r0, 0x1
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    stw r29, -0xc(r12)
    mr r29, r3
    lis r3, 0x8128
    stw r0, 0x28(r1)
    bl OSSetArenaLo
    lis r3, 0x812f
    bl OSSetArenaHi
    bl ESP_InitLib
    cmpwi r3, 0x0
    beq lbl_0050
    bl fn_805F3C90
lbl_0050:
    addi r3, r1, 0x40
    bl ESP_GetTitleId
    cmpwi r3, 0x0
    beq lbl_0064
    bl fn_805F3C90
lbl_0064:
    li r3, 0xe0
    li r4, 0x20
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x0
    mr r31, r3
    cmplw r3, r0
    bne lbl_0084
    bl fn_805F3C90
lbl_0084:
    mr r3, r31
    li r4, 0x0
    li r5, 0xe0
    bl memset
    mr r4, r31
    li r3, 0x0
    bl ESP_DiGetTicketView
    cmpwi r3, -0x3f9
    bne lbl_0128
    lwz r3, 0x40(r1)
    addi r6, r1, 0x28
    lwz r4, 0x44(r1)
    li r5, 0x0
    bl fn_805BFC10
    cmpwi r3, 0x0
    beq lbl_00c8
    bl fn_805F3C90
lbl_00c8:
    lwz r0, 0x28(r1)
    li r4, 0x20
    mulli r3, r0, 0xd8
    addi r0, r3, 0x1f
    clrrwi r3, r0, 5
    bl OSAllocFromMEM1ArenaLo
    li r0, 0x0
    mr r30, r3
    cmplw r3, r0
    bne lbl_00f4
    bl fn_805F3C90
lbl_00f4:
    lwz r3, 0x40(r1)
    mr r5, r30
    lwz r4, 0x44(r1)
    addi r6, r1, 0x28
    bl fn_805BFC10
    cmpwi r3, 0x0
    beq lbl_0114
    bl fn_805F3C90
lbl_0114:
    mr r3, r31
    mr r4, r30
    li r5, 0xd8
    bl memcpy
    b lbl_0178
lbl_0128:
    cmpwi r3, 0x0
    beq lbl_0138
    bl fn_805F3C90
    b lbl_0178
lbl_0138:
    bl OSPlayTimeIsLimited
    cmpwi r3, 0x0
    beq lbl_0178
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x24(r1)
    mr r3, r31
    addi r4, r1, 0x24
    addi r5, r1, 0x20
    stw r0, 0x20(r1)
    bl __OSGetPlayTime
    lwz r0, 0x20(r1)
    cmpwi r0, 0x0
    bne lbl_0178
    bl fn_805F7E30
    bl fn_805F3C90
lbl_0178:
    li r3, 0x2000
    li r4, 0x40
    bl OSAllocFromMEM1ArenaLo
    addi r30, r3, 0xfe0
    li r4, 0x0
    li r5, 0x2000
    bl memset
    lwz r0, 0x40(r1)
    lwz r3, 0x44(r1)
    stw r3, 0x1c(r30)
    stw r0, 0x18(r30)
    bl fn_805EC060
    stb r3, 0xa(r30)
    li r3, 0x1
    oris r0, r29, 0x8000
    stb r3, 0xb(r30)
    stw r0, 0xc(r30)
    bl fn_805F7A40
    mr r3, r30
    bl fn_805F7AF0
    addi r3, r1, 0x60
    bl __OSReadStateFlags
    li r0, 0x3
    stb r0, 0x65(r1)
    addi r3, r1, 0x60
    bl __OSWriteStateFlags
    lwz r3, 0x40(r1)
    mr r5, r31
    lwz r4, 0x44(r1)
    bl fn_805BFB70
    cmpwi r3, 0x0
    beq lbl_0200
    bl fn_805F3C90
    nop
lbl_0200:
    b lbl_0200
}
