#include "revolution/os.h"
#include "revolution/os/OSContext.h"

#define __OS_EXCEPTION_FLOATING_POINT_UNAVAILABLE 7

// Forward declarations
static asm void __OSLoadFPUContext(register u32 r3, register OSContext* context);
static asm void __OSSaveFPUContext(register u32 r3, register u32 r4, register OSContext* context);
static asm void OSSwitchFPUContext(register __OSException exception, register OSContext* context);
extern void fn_80695D84(void); // __cvt_fp2unsigned
extern void _savegpr_25(void);
extern void _restgpr_25(void);

u8 lbl_8079C4C0[] = {
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x20, 0x43, 0x6F, 0x6E, 0x74, 0x65, 0x78,
    0x74, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x72, 0x25, 0x2D, 0x32, 0x64, 0x20, 0x20, 0x3D,
    0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x28, 0x25, 0x31, 0x34, 0x64, 0x29, 0x20, 0x20,
    0x72, 0x25, 0x2D, 0x32, 0x64, 0x20, 0x20, 0x3D, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20,
    0x28, 0x25, 0x31, 0x34, 0x64, 0x29, 0x0A, 0x00, 0x4C, 0x52, 0x20, 0x20, 0x20, 0x3D, 0x20, 0x30,
    0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x43, 0x52, 0x20, 0x20, 0x20, 0x3D, 0x20, 0x30,
    0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00, 0x00, 0x53, 0x52, 0x52, 0x30, 0x20, 0x3D, 0x20, 0x30,
    0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x53, 0x52, 0x52, 0x31, 0x20, 0x3D, 0x20, 0x30,
    0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00, 0x00, 0x0A, 0x47, 0x51, 0x52, 0x73, 0x2D, 0x2D, 0x2D,
    0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x67, 0x71, 0x72, 0x25,
    0x64, 0x20, 0x3D, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x09, 0x20, 0x67, 0x71, 0x72,
    0x25, 0x64, 0x20, 0x3D, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x0A, 0x46, 0x50, 0x52, 0x73, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x0A, 0x00, 0x00, 0x00, 0x66, 0x72, 0x25, 0x64, 0x20, 0x09, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x09,
    0x20, 0x66, 0x72, 0x25, 0x64, 0x20, 0x09, 0x3D, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x0A, 0x50, 0x53, 0x46, 0x73, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D, 0x2D,
    0x0A, 0x00, 0x00, 0x00, 0x70, 0x73, 0x25, 0x64, 0x20, 0x09, 0x3D, 0x20, 0x30, 0x78, 0x25, 0x78,
    0x20, 0x09, 0x20, 0x70, 0x73, 0x25, 0x64, 0x20, 0x09, 0x3D, 0x20, 0x30, 0x78, 0x25, 0x78, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x41, 0x64, 0x64, 0x72, 0x65, 0x73, 0x73, 0x3A, 0x20, 0x20, 0x20,
    0x20, 0x20, 0x20, 0x42, 0x61, 0x63, 0x6B, 0x20, 0x43, 0x68, 0x61, 0x69, 0x6E, 0x20, 0x20, 0x20,
    0x20, 0x4C, 0x52, 0x20, 0x53, 0x61, 0x76, 0x65, 0x0A, 0x00, 0x00, 0x00, 0x30, 0x78, 0x25, 0x30,
    0x38, 0x78, 0x3A, 0x20, 0x20, 0x20, 0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x20, 0x20, 0x20, 0x20,
    0x30, 0x78, 0x25, 0x30, 0x38, 0x78, 0x0A, 0x00
};

u32 __OSFpscrEnableBits = 0x000000F8;

static asm void __OSLoadFPUContext(register u32 r3, register OSContext* context) {
    nofralloc
    lhz r5, 0x1a2(r4)
    clrlwi. r5, r5, 31
    beq @loc_805ED920
    lfd f0, 0x190(r4)
    mtfsf 255, f0
    mfspr r5, 920 // HID2
    extrwi. r5, r5, 1, 2
    beq @loc_805ED8A0
    psq_l f0, 0x1c8(r4), 0, 0
    psq_l f1, 0x1d0(r4), 0, 0
    psq_l f2, 0x1d8(r4), 0, 0
    psq_l f3, 0x1e0(r4), 0, 0
    psq_l f4, 0x1e8(r4), 0, 0
    psq_l f5, 0x1f0(r4), 0, 0
    psq_l f6, 0x1f8(r4), 0, 0
    psq_l f7, 0x200(r4), 0, 0
    psq_l f8, 0x208(r4), 0, 0
    psq_l f9, 0x210(r4), 0, 0
    psq_l f10, 0x218(r4), 0, 0
    psq_l f11, 0x220(r4), 0, 0
    psq_l f12, 0x228(r4), 0, 0
    psq_l f13, 0x230(r4), 0, 0
    psq_l f14, 0x238(r4), 0, 0
    psq_l f15, 0x240(r4), 0, 0
    psq_l f16, 0x248(r4), 0, 0
    psq_l f17, 0x250(r4), 0, 0
    psq_l f18, 0x258(r4), 0, 0
    psq_l f19, 0x260(r4), 0, 0
    psq_l f20, 0x268(r4), 0, 0
    psq_l f21, 0x270(r4), 0, 0
    psq_l f22, 0x278(r4), 0, 0
    psq_l f23, 0x280(r4), 0, 0
    psq_l f24, 0x288(r4), 0, 0
    psq_l f25, 0x290(r4), 0, 0
    psq_l f26, 0x298(r4), 0, 0
    psq_l f27, 0x2a0(r4), 0, 0
    psq_l f28, 0x2a8(r4), 0, 0
    psq_l f29, 0x2b0(r4), 0, 0
    psq_l f30, 0x2b8(r4), 0, 0
    psq_l f31, 0x2c0(r4), 0, 0
@loc_805ED8A0:
    lfd f0, 0x90(r4)
    lfd f1, 0x98(r4)
    lfd f2, 0xa0(r4)
    lfd f3, 0xa8(r4)
    lfd f4, 0xb0(r4)
    lfd f5, 0xb8(r4)
    lfd f6, 0xc0(r4)
    lfd f7, 0xc8(r4)
    lfd f8, 0xd0(r4)
    lfd f9, 0xd8(r4)
    lfd f10, 0xe0(r4)
    lfd f11, 0xe8(r4)
    lfd f12, 0xf0(r4)
    lfd f13, 0xf8(r4)
    lfd f14, 0x100(r4)
    lfd f15, 0x108(r4)
    lfd f16, 0x110(r4)
    lfd f17, 0x118(r4)
    lfd f18, 0x120(r4)
    lfd f19, 0x128(r4)
    lfd f20, 0x130(r4)
    lfd f21, 0x138(r4)
    lfd f22, 0x140(r4)
    lfd f23, 0x148(r4)
    lfd f24, 0x150(r4)
    lfd f25, 0x158(r4)
    lfd f26, 0x160(r4)
    lfd f27, 0x168(r4)
    lfd f28, 0x170(r4)
    lfd f29, 0x178(r4)
    lfd f30, 0x180(r4)
    lfd f31, 0x188(r4)
@loc_805ED920:
    blr
}

static asm void __OSSaveFPUContext(register u32 r3, register u32 r4, register OSContext* context) {
    nofralloc
    lhz r3, 0x1a2(r5)
    ori r3, r3, 1
    sth r3, 0x1a2(r5)
    stfd f0, 0x90(r5)
    stfd f1, 0x98(r5)
    stfd f2, 0xa0(r5)
    stfd f3, 0xa8(r5)
    stfd f4, 0xb0(r5)
    stfd f5, 0xb8(r5)
    stfd f6, 0xc0(r5)
    stfd f7, 0xc8(r5)
    stfd f8, 0xd0(r5)
    stfd f9, 0xd8(r5)
    stfd f10, 0xe0(r5)
    stfd f11, 0xe8(r5)
    stfd f12, 0xf0(r5)
    stfd f13, 0xf8(r5)
    stfd f14, 0x100(r5)
    stfd f15, 0x108(r5)
    stfd f16, 0x110(r5)
    stfd f17, 0x118(r5)
    stfd f18, 0x120(r5)
    stfd f19, 0x128(r5)
    stfd f20, 0x130(r5)
    stfd f21, 0x138(r5)
    stfd f22, 0x140(r5)
    stfd f23, 0x148(r5)
    stfd f24, 0x150(r5)
    stfd f25, 0x158(r5)
    stfd f26, 0x160(r5)
    stfd f27, 0x168(r5)
    stfd f28, 0x170(r5)
    stfd f29, 0x178(r5)
    stfd f30, 0x180(r5)
    stfd f31, 0x188(r5)
    mffs f0
    stfd f0, 0x190(r5)
    lfd f0, 0x90(r5)
    mfspr r3, 920 // HID2
    extrwi. r3, r3, 1, 2
    beq @loc_805EDA54
    psq_st f0, 0x1c8(r5), 0, 0
    psq_st f1, 0x1d0(r5), 0, 0
    psq_st f2, 0x1d8(r5), 0, 0
    psq_st f3, 0x1e0(r5), 0, 0
    psq_st f4, 0x1e8(r5), 0, 0
    psq_st f5, 0x1f0(r5), 0, 0
    psq_st f6, 0x1f8(r5), 0, 0
    psq_st f7, 0x200(r5), 0, 0
    psq_st f8, 0x208(r5), 0, 0
    psq_st f9, 0x210(r5), 0, 0
    psq_st f10, 0x218(r5), 0, 0
    psq_st f11, 0x220(r5), 0, 0
    psq_st f12, 0x228(r5), 0, 0
    psq_st f13, 0x230(r5), 0, 0
    psq_st f14, 0x238(r5), 0, 0
    psq_st f15, 0x240(r5), 0, 0
    psq_st f16, 0x248(r5), 0, 0
    psq_st f17, 0x250(r5), 0, 0
    psq_st f18, 0x258(r5), 0, 0
    psq_st f19, 0x260(r5), 0, 0
    psq_st f20, 0x268(r5), 0, 0
    psq_st f21, 0x270(r5), 0, 0
    psq_st f22, 0x278(r5), 0, 0
    psq_st f23, 0x280(r5), 0, 0
    psq_st f24, 0x288(r5), 0, 0
    psq_st f25, 0x290(r5), 0, 0
    psq_st f26, 0x298(r5), 0, 0
    psq_st f27, 0x2a0(r5), 0, 0
    psq_st f28, 0x2a8(r5), 0, 0
    psq_st f29, 0x2b0(r5), 0, 0
    psq_st f30, 0x2b8(r5), 0, 0
    psq_st f31, 0x2c0(r5), 0, 0
@loc_805EDA54:
    blr
}

asm void OSSaveFPUContext(register OSContext* context) {
    nofralloc
    addi r5, r3, 0
    b __OSSaveFPUContext
}

asm void OSSetCurrentContext(register OSContext* context) {
    nofralloc
    lis r4, 0x8000
    stw r3, 0xd4(r4)
    clrlwi r5, r3, 2
    stw r5, 0xc0(r4)
    lwz r5, 0xd8(r4)
    cmpw r5, r3
    bne @loc_805EDAA8
    lwz r6, 0x19c(r3)
    ori r6, r6, 0x2000
    stw r6, 0x19c(r3)
    mfmsr r6
    ori r6, r6, 0x2
    mtmsr r6
    blr
@loc_805EDAA8:
    lwz r6, 0x19c(r3)
    rlwinm r6, r6, 0, 19, 17
    stw r6, 0x19c(r3)
    mfmsr r6
    rlwinm r6, r6, 0, 19, 17
    ori r6, r6, 0x2
    mtmsr r6
    isync
    blr
}

asm OSContext* OSGetCurrentContext(void) {
    nofralloc
    lis r3, 0x8000
    lwz r3, 0xd4(r3)
    blr
}

asm BOOL OSSaveContext(register OSContext* context) {
    nofralloc
    stmw r13, 0x34(r3)
    mfspr r0, 0x391 // GQR1
    stw r0, 0x1a8(r3)
    mfspr r0, 0x392 // GQR2
    stw r0, 0x1ac(r3)
    mfspr r0, 0x393 // GQR3
    stw r0, 0x1b0(r3)
    mfspr r0, 0x394 // GQR4
    stw r0, 0x1b4(r3)
    mfspr r0, 0x395 // GQR5
    stw r0, 0x1b8(r3)
    mfspr r0, 0x396 // GQR6
    stw r0, 0x1bc(r3)
    mfspr r0, 0x397 // GQR7
    stw r0, 0x1c0(r3)
    mfcr r0
    stw r0, 0x80(r3)
    mflr r0
    stw r0, 0x84(r3)
    stw r0, 0x198(r3)
    mfmsr r0
    stw r0, 0x19c(r3)
    mfspr r0, 9 // CTR
    stw r0, 0x88(r3)
    mfspr r0, 1 // XER
    stw r0, 0x8c(r3)
    stw r1, 0x4(r3)
    stw r2, 0x8(r3)
    li r0, 1
    stw r0, 0xc(r3)
    li r3, 0
    blr
}

asm void OSLoadContext(register OSContext* context) {
    nofralloc
    lis r4, OSDisableInterrupts@ha
    lwz r6, 0x198(r3)
    addi r5, r4, OSDisableInterrupts@l
    cmplw r6, r5
    ble @loc_805EDB88
    lis r4, (OSDisableInterrupts + 0xC)@ha
    addi r0, r4, (OSDisableInterrupts + 0xC)@l
    cmplw r6, r0
    bge @loc_805EDB88
    stw r5, 0x198(r3)
@loc_805EDB88:
    lwz r0, 0x0(r3)
    lwz r1, 0x4(r3)
    lwz r2, 0x8(r3)
    lhz r4, 0x1a2(r3)
    rlwinm. r5, r4, 0, 30, 30
    beq @loc_805EDBB0
    rlwinm r4, r4, 0, 31, 29
    sth r4, 0x1a2(r3)
    lmw r5, 0x14(r3)
    b @loc_805EDBB4
@loc_805EDBB0:
    lmw r13, 0x34(r3)
@loc_805EDBB4:
    lwz r4, 0x1a8(r3)
    mtspr 0x391, r4 // GQR1
    lwz r4, 0x1ac(r3)
    mtspr 0x392, r4 // GQR2
    lwz r4, 0x1b0(r3)
    mtspr 0x393, r4 // GQR3
    lwz r4, 0x1b4(r3)
    mtspr 0x394, r4 // GQR4
    lwz r4, 0x1b8(r3)
    mtspr 0x395, r4 // GQR5
    lwz r4, 0x1bc(r3)
    mtspr 0x396, r4 // GQR6
    lwz r4, 0x1c0(r3)
    mtspr 0x397, r4 // GQR7
    lwz r4, 0x80(r3)
    mtcrf 255, r4
    lwz r4, 0x84(r3)
    mtlr r4
    lwz r4, 0x88(r3)
    mtspr 9, r4 // CTR
    lwz r4, 0x8c(r3)
    mtspr 1, r4 // XER
    mfmsr r4
    rlwinm r4, r4, 0, 17, 15
    rlwinm r4, r4, 0, 31, 29
    mtmsr r4
    lwz r4, 0x198(r3)
    mtspr 26, r4 // SRR0
    lwz r4, 0x19c(r3)
    mtspr 27, r4 // SRR1
    lwz r4, 0x10(r3)
    lwz r3, 0xc(r3)
    rfi
}

asm u32 OSGetStackPointer(void) {
    nofralloc
    mr r3, r1
    blr
}

asm void fn_805EDC50(register void* func, register void* newStack) {
    nofralloc
    mflr r0
    mr r5, r1
    stwu r5, -8(r4)
    mr r1, r4
    stw r0, 4(r5)
    mtlr r3
    blrl
    lwz r5, 0(r1)
    lwz r0, 4(r5)
    mtlr r0
    mr r1, r5
    blr
}

asm void fn_805EDC80(register void* arg1, register void* arg2, register void* arg3, register void* arg4, register void* func, register void* newStack) {
    nofralloc
    mflr r0
    mr r9, r1
    stwu r9, -8(r8)
    mr r1, r8
    stw r0, 4(r9)
    mtlr r7
    blrl
    lwz r5, 0(r1)
    lwz r0, 4(r5)
    mtlr r0
    mr r1, r5
    blr
}

static inline void ClearContext(OSContext* context) {
    context->mode = 0;
    context->state = 0;
    if (context == *(OSContext**)0x800000D8) {
        *(u32*)0x800000D8 = 0;
    }
}

void OSClearContext(OSContext* context) {
    ClearContext(context);
}

asm void OSInitContext(register OSContext* context, register void* pc, register void* sp) {
    nofralloc
    stw r4, 0x198(r3)
    stw r5, 0x4(r3)
    li r11, 0
    ori r11, r11, 0x9032
    stw r11, 0x19c(r3)
    li r0, 0
    stw r0, 0x80(r3)
    stw r0, 0x8c(r3)
    stw r2, 0x8(r3)
    stw r13, 0x34(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
    stw r0, 0x40(r3)
    stw r0, 0x44(r3)
    stw r0, 0x48(r3)
    stw r0, 0x4c(r3)
    stw r0, 0x50(r3)
    stw r0, 0x54(r3)
    stw r0, 0x58(r3)
    stw r0, 0x5c(r3)
    stw r0, 0x60(r3)
    stw r0, 0x64(r3)
    stw r0, 0x68(r3)
    stw r0, 0x6c(r3)
    stw r0, 0x70(r3)
    stw r0, 0x74(r3)
    stw r0, 0x78(r3)
    stw r0, 0x7c(r3)
    stw r0, 0x1a4(r3)
    stw r0, 0x1a8(r3)
    stw r0, 0x1ac(r3)
    stw r0, 0x1b0(r3)
    stw r0, 0x1b4(r3)
    stw r0, 0x1b8(r3)
    stw r0, 0x1bc(r3)
    stw r0, 0x1c0(r3)
    b OSClearContext
}

asm void OSDumpContext(register OSContext* context) {
    nofralloc
    stwu r1, -0x2f0(r1)
    mflr r0
    stw r0, 0x2f4(r1)
    addi r11, r1, 0x2f0
    bl _savegpr_25
    lis r28, lbl_8079C4C0@ha
    mr r30, r3
    addi r28, r28, lbl_8079C4C0@l
    mr r4, r30
    addi r3, r28, 0x0
    crclr 6
    bl OSReport
    mr r26, r30
    li r25, 0x0
@loc_805EDDD8:
    lwz r8, 0x40(r26)
    mr r4, r25
    lwz r5, 0x0(r26)
    addi r3, r28, 0x48
    mr r9, r8
    addi r7, r25, 0x10
    mr r6, r5
    crclr 6
    bl OSReport
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x10
    blt @loc_805EDDD8
    lwz r4, 0x84(r30)
    addi r3, r28, 0x78
    lwz r5, 0x80(r30)
    crclr 6
    bl OSReport
    lwz r4, 0x198(r30)
    addi r3, r28, 0xa8
    lwz r5, 0x19c(r30)
    crclr 6
    bl OSReport
    addi r3, r28, 0xd8
    crclr 6
    bl OSReport
    mr r26, r30
    li r25, 0x0
@loc_805EDE48:
    lwz r5, 0x1a4(r26)
    mr r4, r25
    lwz r7, 0x1b4(r26)
    addi r3, r28, 0xec
    addi r6, r25, 0x4
    crclr 6
    bl OSReport
    addi r25, r25, 0x1
    addi r26, r26, 0x4
    cmplwi r25, 0x4
    blt @loc_805EDE48
    lhz r0, 0x1a2(r30)
    clrlwi. r0, r0, 31
    beq @loc_805EDF94
    bl OSDisableInterrupts
    lis r6, 0x8000
    li r5, 0x0
    lwz r27, 0xd4(r6)
    addi r4, r1, 0x8
    mr r31, r3
    sth r5, 0x1a8(r1)
    sth r5, 0x1aa(r1)
    lwz r0, 0xd8(r6)
    cmplw r4, r0
    bne @loc_805EDEB0
    stw r5, 0xd8(r6)
@loc_805EDEB0:
    addi r3, r1, 0x8
    bl OSSetCurrentContext
    addi r3, r28, 0x110
    crclr 6
    bl OSReport
    mr r26, r30
    li r25, 0x0
@loc_805EDECC:
    lfd f1, 0x98(r26)
    bl fn_80695D84
    lfd f1, 0x90(r26)
    mr r29, r3
    bl fn_80695D84
    mr r5, r3
    mr r4, r25
    mr r7, r29
    addi r3, r28, 0x124
    addi r6, r25, 0x1
    crclr 6
    bl OSReport
    addi r25, r25, 0x2
    addi r26, r26, 0x10
    cmplwi r25, 0x20
    blt @loc_805EDECC
    addi r3, r28, 0x140
    crclr 6
    bl OSReport
    mr r26, r30
    li r25, 0x0
@loc_805EDF20:
    lfd f1, 0x1d0(r26)
    bl fn_80695D84
    lfd f1, 0x1c8(r26)
    mr r29, r3
    bl fn_80695D84
    mr r5, r3
    mr r4, r25
    mr r7, r29
    addi r3, r28, 0x154
    addi r6, r25, 0x1
    crclr 6
    bl OSReport
    addi r25, r25, 0x2
    addi r26, r26, 0x10
    cmplwi r25, 0x20
    blt @loc_805EDF20
    li r5, 0x0
    sth r5, 0x1a8(r1)
    lis r3, 0x8000
    addi r4, r1, 0x8
    sth r5, 0x1aa(r1)
    lwz r0, 0xd8(r3)
    cmplw r4, r0
    bne @loc_805EDF84
    stw r5, 0xd8(r3)
@loc_805EDF84:
    mr r3, r27
    bl OSSetCurrentContext
    mr r3, r31
    bl OSRestoreInterrupts
@loc_805EDF94:
    addi r3, r28, 0x174
    crclr 6
    bl OSReport
    lwz r25, 0x4(r30)
    li r26, 0x0
    b @loc_805EDFC8
@loc_805EDFAC:
    lwz r5, 0x0(r25)
    mr r4, r25
    lwz r6, 0x4(r25)
    addi r3, r28, 0x19c
    crclr 6
    bl OSReport
    lwz r25, 0x0(r25)
@loc_805EDFC8:
    cmpwi r25, 0x0
    beq @loc_805EDFE8
    addis r0, r25, 0x1
    cmplwi r0, 0xffff
    beq @loc_805EDFE8
    cmplwi r26, 0x10
    addi r26, r26, 0x1
    blt @loc_805EDFAC
@loc_805EDFE8:
    addi r11, r1, 0x2f0
    bl _restgpr_25
    lwz r0, 0x2f4(r1)
    mtlr r0
    addi r1, r1, 0x2f0
    blr
}

static asm void OSSwitchFPUContext(register __OSException exception, register OSContext* context) {
    nofralloc
    mfmsr r5
    ori r5, r5, 0x2000
    mtmsr r5
    isync
    lwz r5, 0x19c(r4)
    ori r5, r5, 0x2000
    mtspr 27, r5 // SRR1
    lis r3, 0x8000
    lwz r5, 0xd8(r3)
    stw r4, 0xd8(r3)
    cmpw r5, r4
    beq @loc_805EE040
    cmpwi r5, 0
    beq @loc_805EE03C
    bl __OSSaveFPUContext
@loc_805EE03C:
    bl __OSLoadFPUContext
@loc_805EE040:
    lwz r3, 0x80(r4)
    mtcrf 255, r3
    lwz r3, 0x84(r4)
    mtlr r3
    lwz r3, 0x198(r4)
    mtspr 26, r3 // SRR0
    lwz r3, 0x88(r4)
    mtspr 9, r3 // CTR
    lwz r3, 0x8c(r4)
    mtspr 1, r3 // XER
    lhz r3, 0x1a2(r4)
    rlwinm r3, r3, 0, 31, 29
    sth r3, 0x1a2(r4)
    lwz r5, 0x14(r4)
    lwz r3, 0xc(r4)
    lwz r4, 0x10(r4)
    rfi
}

void __OSContextInit(void) {
    __OSSetExceptionHandler(__OS_EXCEPTION_FLOATING_POINT_UNAVAILABLE, OSSwitchFPUContext);
    *(u32*)0x800000D8 = 0;
}
