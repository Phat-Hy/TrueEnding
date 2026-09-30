#include "revolution/os.h"

typedef struct NANDFileInfo {
    u8 _dummy[0x8c];
} NANDFileInfo;

extern const char lbl_807A9A10[];
extern u32 lbl_807CC320[8];

extern s32 fn_8061F8D0(const char* path, NANDFileInfo* info, u8 accType);
extern s32 fn_8061E850(NANDFileInfo* info, const void* buf, u32 length);
extern s32 fn_8061E760(NANDFileInfo* info, void* buf, u32 length);
extern s32 fn_8061FB70(NANDFileInfo* info);
extern s32 fn_8061E470(const char* path);
extern s32 fn_8061D080(s32 fd, s32 req, void* in, u32 inLen, void* out, u32 outLen);

extern u32 StmReady;
extern s32 StmImDesc;
extern const char lbl_807A9928[];
extern const char lbl_807A996C[];
extern u8 lbl_807CC0A0[];
extern u8 lbl_807CC0C0[];
void ICFlashInvalidate(void);

void __OSDefaultResetCallback(void) {
}

void __OSDefaultPowerCallback(void) {
}

asm BOOL __OSWriteStateFlags(const void* flags) {
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    mr r4, r3
    li r5, 0x20
    stw r0, 0xa4(r1)
    stw r31, 0x9c(r1)
    stw r30, 0x98(r1)
    lis r30, lbl_807CC320@ha
    addi r3, r30, lbl_807CC320@l
    bl memcpy
    addi r31, r30, lbl_807CC320@l
    lis r3, lbl_807A9A10@ha
    lwz r6, 0x4(r31)
    addi r3, r3, lbl_807A9A10@l
    lwz r0, 0x8(r31)
    addi r4, r1, 0x8
    li r5, 0x2
    add r6, r6, r0
    lwz r0, 0xc(r31)
    add r6, r6, r0
    lwz r0, 0x10(r31)
    add r6, r6, r0
    lwz r0, 0x14(r31)
    add r6, r6, r0
    lwz r0, 0x18(r31)
    add r6, r6, r0
    lwz r0, 0x1c(r31)
    add r6, r6, r0
    stw r6, lbl_807CC320@l(r30)
    bl fn_8061F8D0
    cmpwi r3, 0x0
    bne lbl_0d50
    mr r4, r31
    addi r3, r1, 0x8
    li r5, 0x20
    bl fn_8061E850
    cmplwi r3, 0x20
    beq lbl_0d38
    addi r3, r1, 0x8
    bl fn_8061FB70
    li r3, 0x0
    b lbl_0d5c
lbl_0d38:
    addi r3, r1, 0x8
    bl fn_8061FB70
    cmpwi r3, 0x0
    beq lbl_0d58
    li r3, 0x0
    b lbl_0d5c
lbl_0d50:
    li r3, 0x0
    b lbl_0d5c
lbl_0d58:
    li r3, 0x1
lbl_0d5c:
    lwz r0, 0xa4(r1)
    lwz r31, 0x9c(r1)
    lwz r30, 0x98(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm BOOL __OSReadStateFlags(void* flags) {
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    li r5, 0x1
    stw r0, 0xb4(r1)
    addi r4, r1, 0x8
    stw r31, 0xac(r1)
    stw r30, 0xa8(r1)
    stw r29, 0xa4(r1)
    lis r29, lbl_807A9A10@ha
    stw r28, 0xa0(r1)
    mr r28, r3
    addi r3, r29, lbl_807A9A10@l
    bl fn_8061F8D0
    cmpwi r3, 0x0
    bne lbl_0e04
    lis r30, lbl_807CC320@ha
    addi r3, r1, 0x8
    addi r4, r30, lbl_807CC320@l
    li r5, 0x20
    bl fn_8061E760
    mr r31, r3
    addi r3, r1, 0x8
    bl fn_8061FB70
    cmplwi r31, 0x20
    beq lbl_0e1c
    addi r3, r29, lbl_807A9A10@l
    bl fn_8061E470
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e04:
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e1c:
    addi r4, r30, lbl_807CC320@l
    lwz r0, lbl_807CC320@l(r30)
    lwz r5, 0x4(r4)
    lwz r3, 0x8(r4)
    add r5, r5, r3
    lwz r3, 0xc(r4)
    add r5, r5, r3
    lwz r3, 0x10(r4)
    add r5, r5, r3
    lwz r3, 0x14(r4)
    add r5, r5, r3
    lwz r3, 0x18(r4)
    add r5, r5, r3
    lwz r3, 0x1c(r4)
    add r5, r5, r3
    cmplw r0, r5
    beq lbl_0e78
    mr r3, r28
    li r4, 0x0
    li r5, 0x20
    bl memset
    li r3, 0x0
    b lbl_0e88
lbl_0e78:
    mr r3, r28
    li r5, 0x20
    bl memcpy
    li r3, 0x1
lbl_0e88:
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    lwz r29, 0xa4(r1)
    lwz r28, 0xa0(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}