#include "revolution/types.h"
#include "revolution/os.h"

typedef struct DVDCommandBlock {
    u8 pad[0x28];
    u32 state;
} DVDCommandBlock;

/* External functions */
extern void DVDLowGetImmBufferReg(void);
extern void DVDLowInit(void);
extern void DVDLowMaskCoverInterrupt(void);
extern void DVDLowRequestError(void);
extern void DVDLowUnencryptedRead(void);
extern void DVDLowUnmaskStatusInterrupts(void);
extern void DVDSetAutoFatalMessaging(void);
extern void ESP_CloseLib(void);
extern void ESP_DiGetTicketView(void);
extern void ESP_DiGetTmd(void);
extern void ESP_InitLib(void);
extern void OSRegisterVersion(void);
extern void __DVDClearWaitingQueue(void);
extern void __DVDFSInit(void);
extern void _restgpr_14(void);
extern void _restgpr_15(void);
extern void _restgpr_16(void);
extern void _restgpr_17(void);
extern void _restgpr_18(void);
extern void _restgpr_19(void);
extern void _restgpr_20(void);
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _restgpr_28(void);
extern void _restgpr_29(void);
extern void _restgpr_30(void);
extern void _restgpr_31(void);
extern void _savegpr_14(void);
extern void _savegpr_15(void);
extern void _savegpr_16(void);
extern void _savegpr_17(void);
extern void _savegpr_18(void);
extern void _savegpr_19(void);
extern void _savegpr_20(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _savegpr_28(void);
extern void _savegpr_29(void);
extern void _savegpr_30(void);
extern void _savegpr_31(void);
extern void fn_805EC3B0(void);
extern void fn_805FA800(void);
extern void fn_805FF530(void);
extern void* fn_805FF5A0(void);
extern void fn_805FF640(void);
extern void fn_805FF6A0(void);
extern void fn_805FF710(void);
extern void fn_80600120(void);
extern void fn_80600190(void);
extern void fn_806003B0(void);
extern void fn_806003D0(void);
extern void fn_80600AC0(void);
extern void fn_80600C50(void);
extern void fn_80600EC0(void);
extern void fn_80601130(void);
extern void fn_80601340(void);
extern void fn_806015E0(void);
extern void fn_806018F0(void);
extern void fn_80601A90(void);
extern void fn_80601D70(void);
extern void fn_80601D80(void);
extern void fn_80601F00(void);
extern void fn_80602240(void);
extern void fn_806023D0(void);
extern void fn_80602580(void);
extern void fn_80602700(void);
extern void fn_80602730(void);
extern void fn_80602BB0(void);
extern void fn_80602D20(void);
extern void fn_8067E23C(void);

/* External SDA variables */
extern u32 DVDInitialized_8087FD3C;
extern u32 FirstTimeInBootrom_8087FD1C;
extern u32 IDShouldBe_8087FD8C;
extern u32 MotorState_8087FD70;
extern u32 __DVDLayoutFormat;
extern u32 __DVDNumTmdBytes_8087FD60;
extern u32 __DVDThreadQueue;
extern u32 __DVDVersion;
extern u32 __OSInIPL;
extern u32 bootInfo_8087FD88;
extern u32 lbl_8087E7D4;
extern u32 lbl_8087E7D8;
extern u32 lbl_8087E7E4;
extern u32 lbl_8087FD00;
extern volatile u32 lbl_8087FD04;
extern volatile u32 lbl_8087FD08;
extern u32 lbl_8087FD0C;
extern u32 lbl_8087FD10;
extern u32 lbl_8087FD14;
extern u32 lbl_8087FD18;
extern u32 lbl_8087FD20;
extern u32 lbl_8087FD24;
extern u32 lbl_8087FD28;
extern u32 lbl_8087FD2C;
extern u32 lbl_8087FD30;
extern u32 lbl_8087FD34;
extern u32 lbl_8087FD40;
extern volatile s32 lbl_8087FD44;
extern u32 lbl_8087FD48;
extern u32 lbl_8087FD4C;
extern u32 lbl_8087FD50;
extern u32 lbl_8087FD68;
extern u32 lbl_8087FD6C;
extern u32 lbl_8087FD74;
extern u32 lbl_8087FD78;
extern u32 lbl_8087FD7C;
extern u32 lbl_8087FD80;
extern u32 lbl_8087FD84;
extern u32 lbl_8087FD90;
extern u32 lbl_8087FD94;
extern char lbl_8087E7DC[6];

/* External memory buffers & jump tables */
extern void* __DVDTicketViewBuffer_807CC380[];
extern void* __DVDTmdBuffer_807CC480[];
extern void* __ErrorInfo[];
extern void* jumptable_807A9DE4[];
extern void* jumptable_807A9E90[];
extern void* jumptable_807A9F3C[];
extern void* jumptable_807A9FF4[];
extern void* jumptable_807AA0A0[];
extern void* jumptable_807AA0D8[];
extern void* lbl_807A9DB0[];
extern void* lbl_807A9FE8[];
extern void* lbl_807D0E80[];
extern void* lbl_807D0EA0[];
extern void* lbl_807D0ED0[];
extern void* lbl_807D0F00[];
extern void* lbl_807D0F40[];
extern void* lbl_807D0F60[];
extern void* lbl_807D0F80[];
extern void* lbl_807D0FA0[];
extern void* lbl_807D0FD0[];

/* Forward declarations */
void DVDInit(void);
void fn_805FAA30(void);
void fn_805FABB0(void);
void fn_805FAD40(void);
void fn_805FAD50(void);
void fn_805FAE60(void);
void fn_805FAE80(void);
void fn_805FAEC0(void);
void fn_805FAFC0(void);
void fn_805FB090(void);
void fn_805FB5A0(void);
void fn_805FB780(void);
void fn_805FB860(void);
void fn_805FBAA0(void);
void fn_805FBDE0(void);
void fn_805FBF80(void);
void fn_805FC400(void);
void fn_805FC590(void);
void fn_805FC700(void);
void fn_805FC8D0(void);
void fn_805FCA70(void);
void fn_805FCB40(void);
void fn_805FCD90(void);
void fn_805FCE80(void);
void fn_805FCF50(void);
void fn_805FD190(void);
void fn_805FD310(void);
void fn_805FD3F0(void);
void fn_805FD580(void);
void fn_805FD5B0(void);
void fn_805FD8D0(void);
void fn_805FDE80(void);
void fn_805FE860(void);
void DVDInquiryAsync(void);
void fn_805FEA30(void);
void fn_805FEB00(void);
void fn_805FEBA0(void);
void fn_805FEBB0(void);
void fn_805FEC00(void* a, void* b);
void fn_805FEF70(void);
void fn_805FF030(void);
void fn_805FF040(void);
void __DVDGetCoverStatus(void);
void fn_805FF120(void);
void fn_805FF240(void);
void fn_805FF360(void);
void __DVDPrepareReset(void);
void fn_805FF4B0(void);
void fn_805FF4D0(void);
void fn_805FF4E0(void);

asm void DVDInit(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, DVDInitialized_8087FD3C
    cmpwi r0, 0x0
    bne lbl_013c
    lwz r3, __DVDVersion
    bl OSRegisterVersion
    li r0, 0x1
    stw r0, DVDInitialized_8087FD3C
    bl DVDLowInit
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_009c
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_009c
    bl ESP_InitLib
    cmpwi r3, 0x0
    bne lbl_006c
    lis r4, __DVDTicketViewBuffer_807CC380@ha
    li r3, 0x0
    addi r4, r4, __DVDTicketViewBuffer_807CC380@l
    bl ESP_DiGetTicketView
lbl_006c:
    cmpwi r3, 0x0
    bne lbl_0080
    li r3, 0x0
    la r4, __DVDNumTmdBytes_8087FD60
    bl ESP_DiGetTmd
lbl_0080:
    cmpwi r3, 0x0
    bne lbl_0098
    lis r3, __DVDTmdBuffer_807CC480@ha
    la r4, __DVDNumTmdBytes_8087FD60
    addi r3, r3, __DVDTmdBuffer_807CC480@l
    bl ESP_DiGetTmd
lbl_0098:
    bl ESP_CloseLib
lbl_009c:
    bl __DVDFSInit
    bl __DVDClearWaitingQueue
    lis r0, 0x8000
    li r3, 0x0
    stw r3, MotorState_8087FD70
    la r3, __DVDThreadQueue
    stw r0, bootInfo_8087FD88
    stw r0, IDShouldBe_8087FD8C
    bl OSInitThreadQueue
    bl DVDLowUnmaskStatusInterrupts
    bl DVDLowMaskCoverInterrupt
    lwz r3, bootInfo_8087FD88
    lwz r3, 0x20(r3)
    addis r0, r3, 0x1ae0
    cmplwi r0, 0x7c22
    beq lbl_00f0
    subis r0, r3, 0xd15
    cmplwi r0, 0xea5e
    beq lbl_00f0
    li r0, 0x1
    stw r0, FirstTimeInBootrom_8087FD1C
lbl_00f0:
    lis r31, __ErrorInfo@ha
    li r4, 0x0
    addi r3, r31, __ErrorInfo@l
    li r5, 0x80
    bl memset
    lis r30, 0x8000
    addi r3, r31, __ErrorInfo@l
    mr r4, r30
    li r5, 0x4
    bl memcpy
    addi r5, r31, __ErrorInfo@l
    lbz r0, 0x6(r30)
    stb r0, 0x4(r5)
    li r0, 0x0
    li r3, 0x1
    lbz r4, 0x7(r30)
    stb r4, 0x5(r5)
    stw r0, __DVDLayoutFormat
    bl DVDSetAutoFatalMessaging
lbl_013c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FAA30(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, fn_805FAA30@ha
    lis r3, lbl_807D0E80@ha
    stw r0, 0x24(r1)
    addi r4, r4, fn_805FAA30@l
    addi r3, r3, lbl_807D0E80@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    stw r4, lbl_8087FD94
    lwz r4, bootInfo_8087FD88
    lwz r0, 0x8(r3)
    lwz r3, 0x3c(r4)
    cmplw r3, r0
    bge lbl_01bc
    lis r5, lbl_807A9DB0@ha
    la r3, lbl_8087E7DC
    addi r5, r5, lbl_807A9DB0@l
    li r4, 0x445
    crclr 4*cr1+eq
    bl OSPanic
lbl_01bc:
    li r3, 0x0
    bl fn_80602BB0
    lwz r3, __DVDLayoutFormat
    lis r6, lbl_807D0E80@ha
    addi r6, r6, lbl_807D0E80@l
    lwz r0, __DVDLayoutFormat
    nor r3, r3, r3
    lwz r5, 0x8(r6)
    rlwinm r4, r3, 0, 30, 30
    lwz r3, 0x4(r6)
    slw r4, r5, r4
    addi r4, r4, 0x1f
    srw r29, r3, r0
    clrrwi r28, r4, 5
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_0210
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_0210:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8087FD00
    li r5, 0x1
    mulli r3, r3, 0x14
    add r4, r30, r4
    stw r5, 0x1c(r4)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r29, 0x20(r3)
    add r3, r30, r0
    stw r28, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, __DVDLayoutFormat
    lis r4, lbl_807D0E80@ha
    addi r4, r4, lbl_807D0E80@l
    lis r6, fn_805FABB0@ha
    nor r0, r0, r0
    lwz r3, 0x8(r4)
    rlwinm r0, r0, 0, 30, 30
    lwz r7, bootInfo_8087FD88
    slw r3, r3, r0
    lwz r5, 0x4(r4)
    addi r4, r3, 0x1f
    lwz r0, __DVDLayoutFormat
    lwz r3, 0x38(r7)
    clrrwi r4, r4, 5
    srw r5, r5, r0
    addi r6, r6, fn_805FABB0@l
    bl fn_806023D0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FABB0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_0318
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_0330
lbl_0318:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r30, 0x14(r4)
lbl_0330:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_0354
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_044c
lbl_0354:
    cmplwi r30, 0x20
    bne lbl_0374
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_044c
lbl_0374:
    clrlwi. r0, r30, 31
    beq lbl_03bc
    li r30, 0x0
    stw r30, lbl_8087FD18
    bl __DVDFSInit
    lwz r4, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    stw r30, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_03b4
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_03b4:
    bl fn_805FD5B0
    b lbl_044c
lbl_03bc:
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_03d8
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_03d8:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x27
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_044c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FAD40(void) {
    nofralloc
    b fn_806003D0
}


asm void fn_805FAD50(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_806003B0
    cmpwi r3, 0x0
    beq lbl_04c8
    lis r31, lbl_807D0ED0@ha
    addi r3, r31, lbl_807D0ED0@l
    bl OSCreateAlarm
    lis r7, fn_805FAD40@ha
    addi r3, r31, lbl_807D0ED0@l
    addi r7, r7, fn_805FAD40@l
    li r6, 0x1
    li r5, 0x0
    bl OSSetAlarm
    b lbl_057c
lbl_04c8:
    lwz r3, lbl_8087FD90
    li r0, -0x1
    cmplwi r31, 0x10
    stw r0, 0xc(r3)
    bne lbl_04f4
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_057c
lbl_04f4:
    cmplwi r31, 0x20
    bne lbl_0514
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_057c
lbl_0514:
    lwz r31, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0x1
    stw r0, lbl_8087FD0C
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_0548
    mr r4, r31
    li r3, -0x1
    mtctr r12
    bctrl 
lbl_0548:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_0578
    lwz r12, lbl_8087FD80
    li r0, 0x0
    stw r0, lbl_8087FD10
    cmpwi r12, 0x0
    beq lbl_0578
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_0578:
    bl fn_805FD5B0
lbl_057c:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FAE60(void) {
    nofralloc
    lis r5, fn_805FAD50@ha
    li r3, 0x0
    addi r5, r5, fn_805FAD50@l
    li r4, 0x0
    b fn_806018F0
}


asm void fn_805FAE80(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    bl fn_80601D70
    lis r3, fn_805FAD50@ha
    addi r3, r3, fn_805FAD50@l
    bl fn_80601D80
    li r0, 0x0
    stw r0, lbl_8087FD74
    stw r0, lbl_8087FD14
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FAEC0(void) {
    nofralloc
    subis r0, r3, 0x2
    cmplwi r0, 0x400
    bne lbl_0608
    stw r3, lbl_8087FD78
    li r3, 0x1
    blr 
lbl_0608:
    clrlwi r4, r3, 8
    subis r0, r4, 0x6
    cmplwi r0, 0x2800
    beq lbl_063c
    subis r0, r4, 0x2
    cmplwi r0, 0x3a00
    beq lbl_063c
    subis r3, r4, 0x5
    cmplwi r3, 0x3000
    beq lbl_063c
    subis r0, r4, 0xb
    cmplwi r0, 0x5a01
    bne lbl_0644
lbl_063c:
    li r3, 0x0
    blr 
lbl_0644:
    cmplwi r3, 0x2000
    bne lbl_0678
    lwz r3, lbl_8087FD90
    lwz r0, 0x8(r3)
    cmplwi r0, 0x25
    beq lbl_0670
    lis r3, fn_805FCE80@ha
    lwz r0, lbl_8087FD94
    addi r3, r3, fn_805FCE80@l
    cmplw r0, r3
    bne lbl_0678
lbl_0670:
    li r3, 0x0
    blr 
lbl_0678:
    lwz r3, lbl_8087FD18
    addi r0, r3, 0x1
    stw r0, lbl_8087FD18
    lwz r0, lbl_8087FD18
    cmpwi r0, 0x2
    bne lbl_06b4
    lwz r0, lbl_8087FD78
    cmplw r4, r0
    bne lbl_06a8
    stw r4, lbl_8087FD78
    li r3, 0x1
    blr 
lbl_06a8:
    stw r4, lbl_8087FD78
    li r3, 0x2
    blr 
lbl_06b4:
    subis r0, r4, 0x3
    stw r4, lbl_8087FD78
    cmplwi r0, 0x1100
    beq lbl_06d4
    lwz r3, lbl_8087FD90
    lwz r0, 0x8(r3)
    cmplwi r0, 0x5
    bne lbl_06dc
lbl_06d4:
    li r3, 0x2
    blr 
lbl_06dc:
    li r3, 0x3
    blr 
}


asm void fn_805FAFC0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_0720
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_0720:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r5, fn_805FB860@ha
    li r3, 0x0
    addi r5, r5, fn_805FB860@l
    li r4, 0x0
    bl fn_806018F0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FB090(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_0800
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r28, 0x78(r4)
    b lbl_0818
lbl_0800:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r28, 0x14(r4)
lbl_0818:
    bl OSRestoreInterrupts
    cmplwi r28, 0x10
    bne lbl_083c
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0ca4
lbl_083c:
    cmplwi r28, 0x20
    bne lbl_085c
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0ca4
lbl_085c:
    rlwinm. r0, r28, 0, 30, 30
    beq lbl_087c
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_0ca4
lbl_087c:
    bl DVDLowGetImmBufferReg
    mr r29, r3
    clrrwi r28, r3, 24
    bl fn_805FAEC0
    cmplwi r3, 0x1
    mr r30, r3
    bne lbl_08ac
    lis r4, fn_805FAE60@ha
    mr r3, r29
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_0ca4
lbl_08ac:
    subi r0, r3, 0x2
    cmplwi r0, 0x1
    bgt lbl_08c0
    li r4, 0x0
    b lbl_0924
lbl_08c0:
    subis r0, r28, 0x100
    cmplwi r0, 0x0
    bne lbl_08d4
    li r4, 0x4
    b lbl_0924
lbl_08d4:
    subis r0, r28, 0x200
    cmplwi r0, 0x0
    bne lbl_08e8
    li r4, 0x6
    b lbl_0924
lbl_08e8:
    subis r0, r28, 0x300
    cmplwi r0, 0x0
    bne lbl_08fc
    li r4, 0x3
    b lbl_0924
lbl_08fc:
    cmpwi r28, 0x0
    bne lbl_0920
    subis r0, r29, 0x5
    cmplwi r0, 0x3000
    bne lbl_0918
    li r4, 0x1
    b lbl_0924
lbl_0918:
    li r4, 0x5
    b lbl_0924
lbl_0920:
    li r4, 0x5
lbl_0924:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_0998
    lwz r31, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    stw r4, lbl_8087FD14
    li r4, 0x0
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_0970
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_0970:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_098c
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_098c:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_099c
lbl_0998:
    li r0, 0x0
lbl_099c:
    cmpwi r0, 0x0
    bne lbl_0ca4
    cmplwi r30, 0x2
    bne lbl_09c0
    lis r4, fn_805FAFC0@ha
    mr r3, r29
    addi r4, r4, fn_805FAFC0@l
    bl fn_80600120
    b lbl_0ca4
lbl_09c0:
    cmplwi r30, 0x3
    bne lbl_0a90
    clrlwi r3, r29, 8
    subis r0, r3, 0x3
    cmplwi r0, 0x1100
    bne lbl_0a7c
    lwz r3, lbl_8087FD90
    lwz r29, 0x10(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_09fc
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_09fc:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x2
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r29, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, lbl_8087FD90
    lis r4, fn_805FB5A0@ha
    addi r4, r4, fn_805FB5A0@l
    lwz r3, 0x10(r3)
    bl fn_80602580
    b lbl_0ca4
lbl_0a7c:
    lwz r12, lbl_8087FD94
    lwz r3, lbl_8087FD90
    mtctr r12
    bctrl 
    b lbl_0ca4
lbl_0a90:
    subis r0, r28, 0x100
    cmplwi r0, 0x0
    bne lbl_0b1c
    lwz r4, lbl_8087FD90
    li r0, 0x5
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_0ca4
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_0ca4
    lis r30, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r30, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_0ca4
lbl_0b1c:
    subis r0, r28, 0x200
    cmplwi r0, 0x0
    bne lbl_0b3c
    lwz r3, lbl_8087FD90
    li r0, 0x3
    stw r0, 0xc(r3)
    bl fn_805FCA70
    b lbl_0ca4
lbl_0b3c:
    subis r0, r28, 0x300
    cmplwi r0, 0x0
    bne lbl_0bc8
    lwz r4, lbl_8087FD90
    li r0, 0x4
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_0ca4
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_0ca4
    lis r30, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r30, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_0ca4
lbl_0bc8:
    cmpwi r28, 0x0
    bne lbl_0c90
    subis r0, r29, 0x5
    cmplwi r0, 0x3000
    bne lbl_0c78
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_0bf8
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_0bf8:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r5, fn_805FC700@ha
    li r3, 0x0
    addi r5, r5, fn_805FC700@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_0ca4
lbl_0c78:
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_0ca4
lbl_0c90:
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
lbl_0ca4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FB5A0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_0d08
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_0d20
lbl_0d08:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r30, 0x14(r4)
lbl_0d20:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_0d44
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0e98
lbl_0d44:
    cmplwi r30, 0x20
    bne lbl_0d64
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0e98
lbl_0d64:
    clrlwi. r0, r30, 31
    beq lbl_0e08
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_0d88
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_0d88:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r5, fn_805FB860@ha
    li r3, 0x0
    addi r5, r5, fn_805FB860@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_0e98
lbl_0e08:
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_0e24
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_0e24:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x27
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, fn_805FB780@ha
    addi r3, r3, fn_805FB780@l
    bl DVDLowRequestError
lbl_0e98:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FB780(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_0ee4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_0efc
lbl_0ee4:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_0efc:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_0f20
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0f70
lbl_0f20:
    cmplwi r31, 0x20
    bne lbl_0f40
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_0f70
lbl_0f40:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_0f60
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_0f70
lbl_0f60:
    bl DVDLowGetImmBufferReg
    lis r4, fn_805FAE60@ha
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
lbl_0f70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FB860(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_0fc4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_0fdc
lbl_0fc4:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_0fdc:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_1000
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_11bc
lbl_1000:
    cmplwi r31, 0x20
    bne lbl_1020
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_11bc
lbl_1020:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_1040
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_11bc
lbl_1040:
    li r0, 0x0
    stw r0, lbl_8087FD18
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x4
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x5
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xd
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x21
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x22
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x29
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x2a
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xf
    beq lbl_10b4
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x25
    bne lbl_10bc
lbl_10b4:
    li r0, 0x1
    stw r0, lbl_8087FD74
lbl_10bc:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_1134
    lwz r31, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0x2
    stw r0, lbl_8087FD14
    li r4, 0x0
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_110c
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_110c:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_1128
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_1128:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_1138
lbl_1134:
    li r0, 0x0
lbl_1138:
    cmpwi r0, 0x0
    bne lbl_11bc
    lwz r4, lbl_8087FD90
    li r0, 0xb
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_11bc
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_11bc
    lis r31, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r31, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
lbl_11bc:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FBAA0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    lis r30, __DVDTicketViewBuffer_807CC380@ha
    addi r30, r30, __DVDTicketViewBuffer_807CC380@l
    stw r29, 0x14(r1)
    lwz r0, lbl_8087FD84
    cmpwi r0, 0x3
    beq lbl_1200
    b lbl_138c
lbl_1200:
    li r31, 0x0
    stw r31, lbl_8087FD30
    lwz r4, lbl_8087FD90
    addi r3, r30, 0x4bc0
    lwz r4, 0x24(r4)
    bl fn_80600190
    cmpwi r3, 0x0
    beq lbl_12f4
    lwz r3, IDShouldBe_8087FD8C
    addi r4, r30, 0x4bc0
    li r5, 0x20
    bl memcpy
    lwz r5, lbl_8087FD90
    li r0, 0x1
    addi r3, r30, 0x4b00
    li r4, 0x20
    stw r0, 0xc(r5)
    bl DCInvalidateRange
    stw r31, lbl_8087FD18
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_126c
    stw r31, lbl_8087FD00
lbl_126c:
    lwz r0, lbl_8087FD00
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r31, r31, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x21
    lis r5, 0x1
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r31, r6
    stw r7, 0x1c(r6)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r6, fn_805FBDE0@ha
    addi r3, r30, 0x4be0
    addi r6, r6, fn_805FBDE0@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
    b lbl_14ec
lbl_12f4:
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_130c
    stw r31, lbl_8087FD00
lbl_130c:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r5, fn_805FC700@ha
    li r3, 0x0
    addi r5, r5, fn_805FC700@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_14ec
lbl_138c:
    lwz r4, IDShouldBe_8087FD8C
    addi r3, r30, 0x4bc0
    li r5, 0x20
    bl fn_8067E23C
    cmpwi r3, 0x0
    beq lbl_1440
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_13c0
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_13c0:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r5, fn_805FC700@ha
    li r3, 0x0
    addi r5, r5, fn_805FC700@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_14ec
lbl_1440:
    li r31, 0x0
    stw r31, lbl_8087FD18
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r29, r3
    cmplwi r0, 0x5
    blt lbl_1468
    stw r31, lbl_8087FD00
lbl_1468:
    lwz r0, lbl_8087FD00
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r31, r31, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x21
    lis r5, 0x1
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r31, r6
    stw r7, 0x1c(r6)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r29
    bl OSRestoreInterrupts
    lis r6, fn_805FBDE0@ha
    addi r3, r30, 0x4be0
    addi r6, r6, fn_805FBDE0@l
    li r4, 0x20
    lis r5, 0x1
    bl DVDLowUnencryptedRead
lbl_14ec:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FBDE0(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_154c
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r29, 0x78(r4)
    b lbl_1568
lbl_154c:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r29, 0x28(r4)
lbl_1568:
    bl OSRestoreInterrupts
    cmplwi r29, 0x10
    bne lbl_158c
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1694
lbl_158c:
    cmplwi r29, 0x20
    bne lbl_15ac
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1694
lbl_15ac:
    clrlwi. r0, r29, 31
    beq lbl_1678
    lis r4, lbl_807D0F60@ha
    li r29, 0x0
    addi r4, r4, lbl_807D0F60@l
    stw r29, lbl_8087FD18
    li r3, 0x0
    stw r4, lbl_8087FD50
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_15e8
    stw r29, lbl_8087FD00
lbl_15e8:
    lwz r0, lbl_8087FD00
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    lis r29, 0x1
    mulli r4, r0, 0x14
    addi r31, r31, __ErrorInfo@l
    lwz r0, lbl_8087FD00
    li r6, 0x21
    addi r5, r29, 0x8
    mulli r3, r3, 0x14
    add r4, r31, r4
    stw r6, 0x1c(r4)
    add r3, r31, r3
    li r4, 0x20
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, lbl_807D0F80@ha
    lis r6, fn_805FBF80@ha
    addi r5, r29, 0x8
    li r4, 0x20
    addi r3, r3, lbl_807D0F80@l
    addi r6, r6, fn_805FBF80@l
    bl DVDLowUnencryptedRead
    b lbl_1694
lbl_1678:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_1694:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FBF80(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, __DVDTicketViewBuffer_807CC380@ha
    addi r31, r31, __DVDTicketViewBuffer_807CC380@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_16f8
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r28, 0x78(r4)
    b lbl_1714
lbl_16f8:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r28, 0x28(r4)
lbl_1714:
    bl OSRestoreInterrupts
    cmplwi r28, 0x10
    bne lbl_1738
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1b0c
lbl_1738:
    cmplwi r28, 0x20
    bne lbl_1758
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1b0c
lbl_1758:
    clrlwi. r0, r28, 31
    beq lbl_1af0
    li r0, 0x0
    addi r6, r31, 0x4c00
    stw r0, lbl_8087FD18
    lis r5, 0x8000
    stw r6, lbl_8087FD4C
    stw r0, lbl_8087FD48
    lwz r0, 0x3198(r5)
    cmpwi r0, 0x0
    beq lbl_17a0
    stw r6, lbl_8087FD48
    lwz r0, 0x3194(r5)
    stw r0, 0x4(r6)
    lwz r3, lbl_8087FD48
    lwz r0, 0x3198(r5)
    stw r0, 0x0(r3)
    b lbl_17e0
lbl_17a0:
    lwz r3, lbl_8087FD50
    li r7, 0x0
    b lbl_17d0
    nop 
lbl_17b0:
    lwz r4, 0x4(r6)
    lwz r0, 0x3194(r5)
    cmplw r4, r0
    bne lbl_17c4
    stw r6, lbl_8087FD48
lbl_17c4:
    addi r6, r6, 0x8
    stw r6, lbl_8087FD4C
    addi r7, r7, 0x1
lbl_17d0:
    lwz r0, 0x0(r3)
    extsh r4, r7
    cmplw r4, r0
    blt lbl_17b0
lbl_17e0:
    lwz r0, lbl_8087FD48
    cmpwi r0, 0x0
    beq lbl_19f4
    lwz r0, lbl_8087FD84
    cmpwi r0, 0x3
    beq lbl_17fc
    b lbl_18f8
lbl_17fc:
    li r29, 0x0
    stw r29, lbl_8087FD18
    li r3, 0x0
    bl fn_80602BB0
    lwz r3, lbl_8087FD48
    lwz r28, 0x0(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_182c
    stw r29, lbl_8087FD00
lbl_182c:
    lwz r0, lbl_8087FD00
    lis r29, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r29, r29, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x22
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r29, r5
    stw r6, 0x1c(r5)
    add r3, r29, r3
    mulli r0, r0, 0x14
    stw r28, 0x20(r3)
    add r3, r29, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r29, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_18d0
    lwz r3, lbl_8087FD48
    lis r9, fn_805FC400@ha
    lwz r5, __DVDNumTmdBytes_8087FD60
    addi r4, r31, 0x0
    lwz r3, 0x0(r3)
    addi r6, r31, 0x100
    addi r9, r9, fn_805FC400@l
    li r7, 0x0
    li r8, 0x0
    bl fn_80600EC0
    b lbl_1b0c
lbl_18d0:
    lwz r3, lbl_8087FD48
    lis r8, fn_805FC400@ha
    addi r7, r31, 0x100
    li r4, 0x0
    lwz r3, 0x0(r3)
    addi r8, r8, fn_805FC400@l
    li r5, 0x0
    li r6, 0x0
    bl fn_80600C50
    b lbl_1b0c
lbl_18f8:
    li r29, 0x0
    stw r29, lbl_8087FD18
    li r3, 0x0
    bl fn_80602BB0
    lwz r3, lbl_8087FD48
    lwz r28, 0x0(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_1928
    stw r29, lbl_8087FD00
lbl_1928:
    lwz r0, lbl_8087FD00
    lis r29, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r29, r29, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x22
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r29, r5
    stw r6, 0x1c(r5)
    add r3, r29, r3
    mulli r0, r0, 0x14
    stw r28, 0x20(r3)
    add r3, r29, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r29, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r3, 0x8000
    lbz r0, 0x3187(r3)
    cmplwi r0, 0x80
    bne lbl_19cc
    lwz r3, lbl_8087FD48
    lis r9, fn_805FC590@ha
    lwz r5, __DVDNumTmdBytes_8087FD60
    addi r4, r31, 0x0
    lwz r3, 0x0(r3)
    addi r6, r31, 0x100
    addi r9, r9, fn_805FC590@l
    li r7, 0x0
    li r8, 0x0
    bl fn_80600EC0
    b lbl_1b0c
lbl_19cc:
    lwz r3, lbl_8087FD48
    lis r8, fn_805FC590@ha
    addi r7, r31, 0x100
    li r4, 0x0
    lwz r3, 0x0(r3)
    addi r8, r8, fn_805FC590@l
    li r5, 0x0
    li r6, 0x0
    bl fn_80600C50
    b lbl_1b0c
lbl_19f4:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_1a68
    lwz r28, lbl_8087FD90
    addi r3, r31, 0x4b20
    li r0, 0x1
    stw r0, lbl_8087FD14
    li r4, 0x0
    stw r4, lbl_8087FD10
    li r0, 0xa
    stw r3, lbl_8087FD90
    stw r0, 0xc(r28)
    lwz r12, 0x28(r28)
    cmpwi r12, 0x0
    beq lbl_1a40
    mr r4, r28
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_1a40:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_1a5c
    mr r4, r28
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_1a5c:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_1a6c
lbl_1a68:
    li r0, 0x0
lbl_1a6c:
    cmpwi r0, 0x0
    bne lbl_1b0c
    lwz r4, lbl_8087FD90
    li r0, 0x6
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_1b0c
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_1b0c
    stw r3, lbl_8087FD24
    addi r3, r31, 0x4b80
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, 0x4b80
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_1b0c
lbl_1af0:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_1b0c:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FC400(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_1b68
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_1b84
lbl_1b68:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r30, 0x28(r4)
lbl_1b84:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_1ba8
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1ca0
lbl_1ba8:
    cmplwi r30, 0x20
    bne lbl_1bc8
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1ca0
lbl_1bc8:
    clrlwi. r0, r30, 31
    beq lbl_1c84
    li r30, 0x0
    stw r30, lbl_8087FD18
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_1bf8
    stw r30, lbl_8087FD00
lbl_1bf8:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x1
    li r5, 0x108
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_807D0E80@ha
    lis r6, fn_805FC8D0@ha
    addi r3, r3, lbl_807D0E80@l
    li r4, 0x20
    addi r6, r6, fn_805FC8D0@l
    li r5, 0x108
    bl fn_806023D0
    b lbl_1ca0
lbl_1c84:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_1ca0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FC590(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_1cf4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_1d0c
lbl_1cf4:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_1d0c:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_1d30
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1e10
lbl_1d30:
    cmplwi r31, 0x20
    bne lbl_1d50
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1e10
lbl_1d50:
    clrlwi. r0, r31, 31
    beq lbl_1df4
    li r4, 0x0
    stw r4, lbl_8087FD18
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_1dd0
    lwz r31, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    stw r4, lbl_8087FD14
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_1da8
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_1da8:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_1dc4
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_1dc4:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_1dd4
lbl_1dd0:
    li r0, 0x0
lbl_1dd4:
    cmpwi r0, 0x0
    bne lbl_1e10
    lwz r3, lbl_8087FD90
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_1e10
lbl_1df4:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_1e10:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FC700(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_1e64
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_1e7c
lbl_1e64:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_1e7c:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_1ea0
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1fe4
lbl_1ea0:
    cmplwi r31, 0x20
    bne lbl_1ec0
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_1fe4
lbl_1ec0:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_1ee0
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_1fe4
lbl_1ee0:
    li r4, 0x0
    stw r4, lbl_8087FD18
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_1f5c
    lwz r31, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0x1
    stw r0, lbl_8087FD14
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_1f34
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_1f34:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_1f50
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_1f50:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_1f60
lbl_1f5c:
    li r0, 0x0
lbl_1f60:
    cmpwi r0, 0x0
    bne lbl_1fe4
    lwz r4, lbl_8087FD90
    li r0, 0x6
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_1fe4
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_1fe4
    lis r31, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r31, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
lbl_1fe4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FC8D0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_2034
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_2050
lbl_2034:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r31, 0x28(r4)
lbl_2050:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_2074
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2180
lbl_2074:
    cmplwi r31, 0x20
    bne lbl_2094
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2180
lbl_2094:
    clrlwi. r0, r31, 31
    beq lbl_2164
    lis r5, fn_805FAA30@ha
    li r0, 0x0
    addi r5, r5, fn_805FAA30@l
    lis r3, lbl_807D0E80@ha
    stw r0, lbl_8087FD18
    addi r3, r3, lbl_807D0E80@l
    lwz r4, bootInfo_8087FD88
    stw r5, lbl_8087FD94
    lwz r0, 0x8(r3)
    lwz r3, 0x3c(r4)
    cmplw r3, r0
    bge lbl_20e4
    lis r5, lbl_807A9DB0@ha
    la r3, lbl_8087E7DC
    addi r5, r5, lbl_807A9DB0@l
    li r4, 0x445
    crclr 4*cr1+eq
    bl OSPanic
lbl_20e4:
    li r3, 0x0
    bl fn_80602BB0
    lwz r6, __DVDLayoutFormat
    lis r31, lbl_807D0E80@ha
    addi r31, r31, lbl_807D0E80@l
    lwz r0, __DVDLayoutFormat
    lwz r4, 0x8(r31)
    li r3, 0x1
    nor r0, r0, r0
    lwz r7, 0x4(r31)
    rlwinm r0, r0, 0, 30, 30
    slw r5, r4, r0
    srw r4, r7, r6
    addi r0, r5, 0x1f
    clrrwi r5, r0, 5
    bl fn_805FA800
    lwz r0, __DVDLayoutFormat
    lis r6, fn_805FABB0@ha
    lwz r3, 0x8(r31)
    addi r6, r6, fn_805FABB0@l
    nor r0, r0, r0
    lwz r7, bootInfo_8087FD88
    rlwinm r0, r0, 0, 30, 30
    lwz r5, 0x4(r31)
    slw r3, r3, r0
    lwz r0, __DVDLayoutFormat
    addi r4, r3, 0x1f
    lwz r3, 0x38(r7)
    clrrwi r4, r4, 5
    srw r5, r5, r0
    bl fn_806023D0
    b lbl_2180
lbl_2164:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_2180:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FCA70(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x1
    stw r0, 0x14(r1)
    lwz r0, lbl_8087FD84
    stw r3, MotorState_8087FD70
    cmplwi r0, 0x2a
    bgt lbl_2238
    lis r3, jumptable_807A9DE4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807A9DE4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr 
    bl __DVDClearWaitingQueue
    lwz r4, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_2204
    li r3, -0x4
    mtctr r12
    bctrl 
lbl_2204:
    bl fn_805FD5B0
    b lbl_2254
    li r0, 0x0
    stw r0, MotorState_8087FD70
    lwz r3, lbl_8087FD90
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_2254
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    bne lbl_2254
lbl_2238:
    li r0, 0x0
    stw r0, MotorState_8087FD70
    li r3, 0x1
    bl fn_80601D70
    lis r3, fn_805FCD90@ha
    addi r3, r3, fn_805FCD90@l
    bl fn_80601D80
lbl_2254:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FCB40(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, 0x8000
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lhz r0, 0x30e6(r3)
    cmplwi r0, 0x8003
    bne lbl_2340
    lis r4, fn_805FCE80@ha
    li r3, 0x0
    addi r4, r4, fn_805FCE80@l
    stw r4, lbl_8087FD94
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_22c4
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_22c4:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x25
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r4, fn_805FCF50@ha
    lis r3, 0x2
    addi r4, r4, fn_805FCF50@l
    bl fn_80602240
    b lbl_24a8
lbl_2340:
    lis r3, lbl_807D0F40@ha
    li r4, 0x20
    addi r3, r3, lbl_807D0F40@l
    bl DCInvalidateRange
    lwz r0, lbl_8087FD84
    lis r3, fn_805FD190@ha
    addi r3, r3, fn_805FD190@l
    stw r3, lbl_8087FD94
    cmplwi r0, 0x28
    bne lbl_2404
    li r4, 0x0
    stw r4, lbl_8087FD18
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_23e0
    lwz r30, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    stw r4, lbl_8087FD14
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_23b8
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_23b8:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_23d4
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_23d4:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_23e4
lbl_23e0:
    li r0, 0x0
lbl_23e4:
    cmpwi r0, 0x0
    bne lbl_24a8
    lwz r3, lbl_8087FD90
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_24a8
lbl_2404:
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_2428
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_2428:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_807D0F40@ha
    lis r4, fn_805FD310@ha
    addi r3, r3, lbl_807D0F40@l
    addi r4, r4, fn_805FD310@l
    bl fn_80600AC0
lbl_24a8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FCD90(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r3, 0x10
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bne lbl_24f0
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2590
lbl_24f0:
    cmplwi r3, 0x20
    bne lbl_2510
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2590
lbl_2510:
    clrlwi. r0, r3, 31
    beq lbl_2574
    bl __OSGetSystemTime
    stw r4, lbl_8087FD6C
    li r0, 0x0
    lis r31, lbl_807D0FA0@ha
    stw r3, lbl_8087FD68
    addi r3, r31, lbl_807D0FA0@l
    stw r0, lbl_8087FD74
    stw r0, lbl_8087FD14
    bl OSCreateAlarm
    lis r4, 0x8000
    lis r7, fn_805FCB40@ha
    lwz r0, 0xf8(r4)
    lis r3, 0x1062
    addi r4, r3, 0x4dd3
    addi r7, r7, fn_805FCB40@l
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0FA0@l
    mulhwu r0, r4, r0
    li r5, 0x0
    srwi r0, r0, 6
    mulli r6, r0, 0x64
    bl OSSetAlarm
    b lbl_2590
lbl_2574:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_2590:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FCE80(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_25e8
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_25e8:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x25
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r30, r5
    stw r6, 0x1c(r5)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r4, fn_805FCF50@ha
    lis r3, 0x2
    addi r4, r4, fn_805FCF50@l
    bl fn_80602240
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FCF50(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_26b8
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r30, 0x78(r4)
    b lbl_26d4
lbl_26b8:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r30, 0x28(r4)
lbl_26d4:
    bl OSRestoreInterrupts
    cmplwi r30, 0x10
    bne lbl_26f8
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_28a8
lbl_26f8:
    cmplwi r30, 0x20
    bne lbl_2718
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_28a8
lbl_2718:
    clrlwi. r0, r30, 31
    beq lbl_288c
    lis r3, lbl_807D0F40@ha
    li r4, 0x20
    addi r3, r3, lbl_807D0F40@l
    bl DCInvalidateRange
    lwz r0, lbl_8087FD84
    lis r3, fn_805FD190@ha
    addi r3, r3, fn_805FD190@l
    stw r3, lbl_8087FD94
    cmplwi r0, 0x28
    bne lbl_27e4
    li r4, 0x0
    stw r4, lbl_8087FD18
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_27c0
    lwz r30, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    stw r4, lbl_8087FD14
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_2798
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_2798:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_27b4
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_27b4:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_27c4
lbl_27c0:
    li r0, 0x0
lbl_27c4:
    cmpwi r0, 0x0
    bne lbl_28a8
    lwz r3, lbl_8087FD90
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_28a8
lbl_27e4:
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_2808
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_2808:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_807D0F40@ha
    lis r4, fn_805FD310@ha
    addi r3, r3, lbl_807D0F40@l
    addi r4, r4, fn_805FD310@l
    bl fn_80600AC0
    b lbl_28a8
lbl_288c:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_28a8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FD190(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x28
    bne lbl_297c
    li r4, 0x0
    stw r4, lbl_8087FD18
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_2958
    lwz r30, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    stw r4, lbl_8087FD14
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r30)
    lwz r12, 0x28(r30)
    cmpwi r12, 0x0
    beq lbl_2930
    mr r4, r30
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_2930:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_294c
    mr r4, r30
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_294c:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_295c
lbl_2958:
    li r0, 0x0
lbl_295c:
    cmpwi r0, 0x0
    bne lbl_2a20
    lwz r3, lbl_8087FD90
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_2a20
lbl_297c:
    li r3, 0x0
    bl fn_80602BB0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_29a0
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_29a0:
    lwz r0, lbl_8087FD00
    lis r30, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r30, r30, __ErrorInfo@l
    mulli r6, r0, 0x14
    lwz r0, lbl_8087FD00
    li r7, 0x5
    li r5, 0x0
    mulli r3, r3, 0x14
    li r4, 0x20
    add r6, r30, r6
    stw r7, 0x1c(r6)
    add r3, r30, r3
    mulli r0, r0, 0x14
    stw r5, 0x20(r3)
    add r3, r30, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r30, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lis r3, lbl_807D0F40@ha
    lis r4, fn_805FD310@ha
    addi r3, r3, lbl_807D0F40@l
    addi r4, r4, fn_805FD310@l
    bl fn_80600AC0
lbl_2a20:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FD310(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_2a74
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_2a8c
lbl_2a74:
    lwz r0, lbl_8087FD00
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    mulli r0, r0, 0x14
    add r4, r4, r0
    stw r31, 0x14(r4)
lbl_2a8c:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_2ab0
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2b04
lbl_2ab0:
    cmplwi r31, 0x20
    bne lbl_2ad0
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_2b04
lbl_2ad0:
    clrlwi. r0, r31, 31
    beq lbl_2ae8
    li r0, 0x0
    stw r0, lbl_8087FD18
    bl fn_805FBAA0
    b lbl_2b04
lbl_2ae8:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_2b04:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FD3F0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r31, lbl_8087FD34
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    beq lbl_2bc8
    bl fn_80602700
    clrlwi. r0, r3, 31
    bne lbl_2c94
    lis r3, lbl_807D0F00@ha
    addi r3, r3, lbl_807D0F00@l
    bl OSCancelAlarm
    stw r31, lbl_8087FD28
    stw r31, lbl_8087FD28
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x3
    bne lbl_2b78
    li r0, 0x1
    stw r0, lbl_8087FD30
lbl_2b78:
    lwz r0, MotorState_8087FD70
    cmplwi r0, 0x2
    bne lbl_2b9c
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_2c94
    li r0, 0xc
    stw r0, 0xc(r3)
    b lbl_2c94
lbl_2b9c:
    bl DVDLowMaskCoverInterrupt
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_2bbc
    li r0, 0x3
    stw r0, 0xc(r3)
    bl fn_805FCA70
    b lbl_2c94
lbl_2bbc:
    li r0, 0x7
    stw r0, lbl_8087FD14
    b lbl_2c94
lbl_2bc8:
    bl fn_80602700
    clrlwi. r0, r3, 31
    beq lbl_2c0c
    lwz r0, MotorState_8087FD70
    li r3, 0x1
    stw r31, lbl_8087FD24
    cmplwi r0, 0x2
    stw r3, lbl_8087FD28
    bne lbl_2bfc
    lwz r3, lbl_8087FD90
    li r0, 0xc
    stw r0, 0xc(r3)
    b lbl_2c94
lbl_2bfc:
    lwz r3, lbl_8087FD90
    li r0, 0x5
    stw r0, 0xc(r3)
    b lbl_2c94
lbl_2c0c:
    bl fn_80602700
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_2c94
    lis r3, lbl_807D0F00@ha
    addi r3, r3, lbl_807D0F00@l
    bl OSCancelAlarm
    stw r31, lbl_8087FD24
    li r3, 0x0
    bl fn_80602BB0
    stw r31, lbl_8087FD28
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x3
    bne lbl_2c48
    li r0, 0x1
    stw r0, lbl_8087FD30
lbl_2c48:
    lwz r0, MotorState_8087FD70
    cmplwi r0, 0x2
    bne lbl_2c6c
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_2c94
    li r0, 0xc
    stw r0, 0xc(r3)
    b lbl_2c94
lbl_2c6c:
    bl DVDLowMaskCoverInterrupt
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_2c8c
    li r0, 0x3
    stw r0, 0xc(r3)
    bl fn_805FCA70
    b lbl_2c94
lbl_2c8c:
    li r0, 0x7
    stw r0, lbl_8087FD14
lbl_2c94:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FD580(void) {
    nofralloc
    lwz r0, lbl_8087FD34
    cmpwi r0, 0x0
    bnelr 
    li r0, 0x1
    lis r3, fn_805FD3F0@ha
    stw r0, lbl_8087FD34
    addi r3, r3, fn_805FD3F0@l
    b fn_80602730
    blr 
}


asm void fn_805FD5B0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r0, lbl_8087FD04
    cmpwi r0, 0x0
    beq lbl_2d10
    li r3, 0x1
    li r0, 0x0
    stw r3, lbl_8087FD08
    stw r0, lbl_8087FD90
    b lbl_2fe8
lbl_2d10:
    bl fn_805FF640
    cmpwi r3, 0x0
    bne lbl_2d28
    li r0, 0x0
    stw r0, lbl_8087FD90
    b lbl_2fe8
lbl_2d28:
    bl fn_805FF5A0
    lwz r0, lbl_8087FD0C
    stw r3, lbl_8087FD90
    cmpwi r0, 0x0
    beq lbl_2d74
    li r0, -0x1
    stw r0, 0xc(r3)
    lis r3, lbl_807D0EA0@ha
    lwz r4, lbl_8087FD90
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_2d6c
    li r3, -0x1
    mtctr r12
    bctrl 
lbl_2d6c:
    bl fn_805FD5B0
    b lbl_2fe8
lbl_2d74:
    lwz r0, 0x8(r3)
    stw r0, lbl_8087FD84
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x20
    beq lbl_2da0
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xe
    beq lbl_2da0
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x23
    bne lbl_2da8
lbl_2da0:
    li r0, 0x0
    stw r0, lbl_8087FD14
lbl_2da8:
    lwz r0, lbl_8087FD14
    cmpwi r0, 0x0
    beq lbl_2f90
    lwz r4, lbl_8087FD14
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_2f64
    cmplwi r4, 0x2
    beq lbl_2df0
    cmplwi r4, 0x3
    beq lbl_2e6c
    cmplwi r4, 0x4
    beq lbl_2ee8
    cmplwi r4, 0x1
    beq lbl_2f64
    cmplwi r4, 0x5
    beq lbl_2f74
    b lbl_2f84
lbl_2df0:
    li r0, 0xb
    stw r0, 0xc(r3)
    li r3, 0x1
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_2f84
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_2f84
    lis r31, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r31, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_2f84
lbl_2e6c:
    li r0, 0x4
    stw r0, 0xc(r3)
    li r3, 0x1
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_2f84
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_2f84
    lis r31, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r31, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_2f84
lbl_2ee8:
    li r0, 0x5
    stw r0, 0xc(r3)
    li r3, 0x1
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_2f84
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_2f84
    lis r31, lbl_807D0F00@ha
    stw r3, lbl_8087FD24
    addi r3, r31, lbl_807D0F00@l
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r31, lbl_807D0F00@l
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_2f84
lbl_2f64:
    li r0, 0x3
    stw r0, 0xc(r3)
    bl fn_805FCA70
    b lbl_2f84
lbl_2f74:
    lis r4, fn_805FAE60@ha
    lwz r3, lbl_8087FD7C
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
lbl_2f84:
    li r0, 0x0
    stw r0, lbl_8087FD14
    b lbl_2fe8
lbl_2f90:
    lwz r0, MotorState_8087FD70
    cmplwi r0, 0x2
    beq lbl_2fa8
    cmpwi r0, 0x0
    beq lbl_2fd0
    b lbl_2fe4
lbl_2fa8:
    lwz r0, lbl_8087FD2C
    cmpwi r0, 0x0
    beq lbl_2fc0
    li r0, 0xc
    stw r0, 0xc(r3)
    b lbl_2fe8
lbl_2fc0:
    li r0, 0x3
    stw r0, 0xc(r3)
    bl fn_805FCA70
    b lbl_2fe8
lbl_2fd0:
    li r0, 0x1
    stw r0, 0xc(r3)
    lwz r3, lbl_8087FD90
    bl fn_805FD8D0
    b lbl_2fe8
lbl_2fe4:
    bl fn_805FCA70
lbl_2fe8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FD8D0(void) {
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    lis r4, fn_805FD8D0@ha
    mr r29, r3
    addi r4, r4, fn_805FD8D0@l
    stw r4, lbl_8087FD94
    lwz r30, 0x8(r3)
    cmplwi r30, 0x2a
    bgt lbl_30cc
    lis r4, jumptable_807A9F3C@ha
    slwi r0, r30, 2
    addi r4, r4, jumptable_807A9F3C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr 
    lwz r26, 0x14(r3)
    lwz r27, 0x10(r3)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_306c
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_306c:
    lwz r0, lbl_8087FD00
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8087FD00
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r30, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r26, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
lbl_30cc:
    lwz r0, 0x8(r29)
    cmplwi r0, 0x2a
    bgt lbl_3580
    lis r3, jumptable_807A9E90@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807A9E90@l
    lwzx r3, r3, r0
    mtctr r3
    bctr 
    li r3, 0x0
    bl fn_80602BB0
    li r0, 0x20
    lis r4, fn_805FDE80@ha
    stw r0, 0x1c(r29)
    addi r4, r4, fn_805FDE80@l
    lwz r3, 0x18(r29)
    bl fn_80600AC0
    b lbl_3598
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_3158
    lwz r4, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0x0
    stw r3, lbl_8087FD90
    stw r0, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_3150
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3150:
    bl fn_805FD5B0
    b lbl_3598
lbl_3158:
    li r3, 0x0
    bl fn_80602BB0
    lwz r4, 0x20(r29)
    lis r0, 0x8
    lwz r3, 0x14(r29)
    subf r30, r4, r3
    cmplw r30, r0
    ble lbl_317c
    lis r30, 0x8
lbl_317c:
    lwz r0, 0x20(r29)
    lwz r3, 0x10(r29)
    srwi r0, r0, 2
    stw r30, 0x1c(r29)
    lwz r26, 0x8(r29)
    add r27, r3, r0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_31b0
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_31b0:
    lwz r0, lbl_8087FD00
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8087FD00
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r26, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r30, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, 0x20(r29)
    lis r6, fn_805FDE80@ha
    lwz r7, 0x18(r29)
    addi r6, r6, fn_805FDE80@l
    srwi r0, r3, 2
    lwz r5, 0x10(r29)
    lwz r4, 0x1c(r29)
    add r3, r7, r3
    add r5, r5, r0
    bl fn_806023D0
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r4, fn_805FDE80@ha
    lwz r3, 0x10(r29)
    addi r4, r4, fn_805FDE80@l
    bl fn_80602580
    b lbl_3598
    lis r5, fn_805FDE80@ha
    li r3, 0x0
    addi r5, r5, fn_805FDE80@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_3598
    lis r5, fn_805FDE80@ha
    li r3, 0x0
    addi r5, r5, fn_805FDE80@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r5, fn_805FDE80@ha
    lwz r3, 0x10(r29)
    lwz r4, 0x14(r29)
    addi r5, r5, fn_805FDE80@l
    bl fn_80601F00
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    li r0, 0x20
    lis r4, fn_805FDE80@ha
    stw r0, 0x1c(r29)
    addi r4, r4, fn_805FDE80@l
    lwz r3, 0x18(r29)
    bl fn_80601A90
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r5, fn_805FDE80@ha
    li r3, 0x0
    addi r5, r5, fn_805FDE80@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_3598
    li r3, 0x1
    bl fn_80601D70
    lis r3, fn_805FDE80@ha
    addi r3, r3, fn_805FDE80@l
    bl fn_80601D80
    b lbl_3598
    lwz r0, 0x14(r29)
    cmpwi r0, 0x0
    bne lbl_3348
    lwz r4, lbl_8087FD90
    lis r3, lbl_807D0EA0@ha
    addi r3, r3, lbl_807D0EA0@l
    li r0, 0x0
    stw r3, lbl_8087FD90
    stw r0, 0xc(r4)
    lwz r12, 0x28(r4)
    cmpwi r12, 0x0
    beq lbl_3340
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3340:
    bl fn_805FD5B0
    b lbl_3598
lbl_3348:
    li r3, 0x0
    bl fn_80602BB0
    lwz r4, 0x20(r29)
    lis r0, 0x8
    lwz r3, 0x14(r29)
    subf r30, r4, r3
    cmplw r30, r0
    ble lbl_336c
    lis r30, 0x8
lbl_336c:
    lwz r0, 0x20(r29)
    lwz r3, 0x10(r29)
    srwi r0, r0, 2
    stw r30, 0x1c(r29)
    lwz r26, 0x8(r29)
    add r27, r3, r0
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r31, r3
    cmplwi r0, 0x5
    blt lbl_33a0
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_33a0:
    lwz r0, lbl_8087FD00
    lis r28, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r28, r28, __ErrorInfo@l
    mulli r4, r0, 0x14
    lwz r0, lbl_8087FD00
    mulli r3, r3, 0x14
    add r4, r28, r4
    stw r26, 0x1c(r4)
    add r3, r28, r3
    mulli r0, r0, 0x14
    stw r27, 0x20(r3)
    add r3, r28, r0
    stw r30, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r28, r5
    stw r3, 0x2c(r4)
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r3, 0x20(r29)
    lis r6, fn_805FDE80@ha
    lwz r7, 0x18(r29)
    addi r6, r6, fn_805FDE80@l
    srwi r0, r3, 2
    lwz r5, 0x10(r29)
    lwz r4, 0x1c(r29)
    add r3, r7, r3
    add r5, r5, r0
    bl DVDLowUnencryptedRead
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r8, fn_805FDE80@ha
    lwz r3, 0x10(r29)
    lwz r7, 0x18(r29)
    addi r8, r8, fn_805FDE80@l
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_80600C50
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r3, fn_805FDE80@ha
    addi r3, r3, fn_805FDE80@l
    bl fn_806015E0
    b lbl_3598
    lis r3, fn_805FDE80@ha
    addi r3, r3, fn_805FDE80@l
    bl fn_80602730
    b lbl_3598
    lis r3, fn_805FDE80@ha
    addi r3, r3, fn_805FDE80@l
    bl fn_80602730
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r4, fn_805FDE80@ha
    lis r3, 0x2
    addi r4, r4, fn_805FDE80@l
    bl fn_80602240
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lis r3, lbl_807D0F40@ha
    li r0, 0x20
    addi r3, r3, lbl_807D0F40@l
    lis r4, fn_805FDE80@ha
    stw r3, 0x18(r29)
    addi r4, r4, fn_805FDE80@l
    stw r0, 0x1c(r29)
    bl fn_80600AC0
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lwz r10, 0x18(r29)
    lwz r0, 0x3a0(r10)
    cmpwi r0, 0x0
    bne lbl_3518
    lwz r0, 0x4dc0(r10)
    cmpwi r0, 0x0
    bne lbl_3518
    lis r6, fn_805FDE80@ha
    lwz r3, 0x10(r29)
    addi r4, r10, 0x3a0
    addi r5, r10, 0x4dc0
    addi r6, r6, fn_805FDE80@l
    bl fn_80601130
    b lbl_3598
lbl_3518:
    lis r3, fn_805FDE80@ha
    mr r4, r10
    addi r3, r3, fn_805FDE80@l
    stw r3, 0x8(r1)
    addi r5, r10, 0x3a0
    addi r6, r10, 0x3c0
    lwz r3, 0x10(r29)
    addi r7, r10, 0x4dc0
    addi r8, r10, 0x4de0
    addi r9, r10, 0x5de0
    addi r10, r10, 0x5e00
    bl fn_80601340
    b lbl_3598
    li r3, 0x0
    bl fn_80602BB0
    lwz r8, 0x18(r29)
    lis r9, fn_805FDE80@ha
    lwz r3, 0x10(r29)
    addi r9, r9, fn_805FDE80@l
    lwz r5, 0x3a0(r8)
    addi r4, r8, 0x2c0
    lwz r7, 0x4dc0(r8)
    addi r6, r8, 0x3c0
    addi r8, r8, 0x4de0
    bl fn_80600EC0
    b lbl_3598
lbl_3580:
    lwz r12, lbl_8087E7D8
    lis r4, fn_805FDE80@ha
    mr r3, r29
    addi r4, r4, fn_805FDE80@l
    mtctr r12
    bctrl 
lbl_3598:
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr 
}


asm void fn_805FDE80(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lis r30, __DVDTicketViewBuffer_807CC380@ha
    addi r30, r30, __DVDTicketViewBuffer_807CC380@l
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    cmpwi r0, 0x0
    bne lbl_35f4
    lis r4, __ErrorInfo@ha
    addi r4, r4, __ErrorInfo@l
    stw r31, 0x78(r4)
    b lbl_3610
lbl_35f4:
    lwz r4, lbl_8087FD00
    lis r5, __ErrorInfo@ha
    addi r5, r5, __ErrorInfo@l
    subi r0, r4, 0x1
    mulli r0, r0, 0x14
    add r4, r5, r0
    stw r31, 0x28(r4)
lbl_3610:
    bl OSRestoreInterrupts
    cmplwi r31, 0x10
    bne lbl_3634
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4568
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_3f74
lbl_3634:
    cmplwi r31, 0x20
    bne lbl_3654
    lis r3, 0x123
    lis r4, fn_805FAE80@ha
    addi r3, r3, 0x4569
    addi r4, r4, fn_805FAE80@l
    bl fn_80600120
    b lbl_3f74
lbl_3654:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x3
    beq lbl_366c
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xf
    bne lbl_37b0
lbl_366c:
    rlwinm. r0, r31, 0, 30, 30
    beq lbl_368c
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_3f74
lbl_368c:
    li r0, 0x0
    stw r0, lbl_8087FD18
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xf
    bne lbl_36a8
    li r0, 0x1
    stw r0, lbl_8087FD74
lbl_36a8:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_371c
    lwz r29, lbl_8087FD90
    addi r3, r30, 0x4b20
    li r0, 0x7
    stw r0, lbl_8087FD14
    li r4, 0x0
    stw r4, lbl_8087FD10
    li r0, 0xa
    stw r3, lbl_8087FD90
    stw r0, 0xc(r29)
    lwz r12, 0x28(r29)
    cmpwi r12, 0x0
    beq lbl_36f4
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_36f4:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_3710
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3710:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_3720
lbl_371c:
    li r0, 0x0
lbl_3720:
    cmpwi r0, 0x0
    bne lbl_3f74
    lwz r0, MotorState_8087FD70
    cmplwi r0, 0x2
    beq lbl_3f74
    lwz r4, lbl_8087FD90
    li r0, 0x7
    li r3, 0x1
    stw r0, 0xc(r4)
    lwz r0, lbl_8087FD24
    stw r3, MotorState_8087FD70
    cmpwi r0, 0x0
    bne lbl_3f74
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_3f74
    stw r3, lbl_8087FD24
    addi r3, r30, 0x4b80
    bl OSCreateAlarm
    bl OSGetTick
    lis r5, 0x8000
    lis r4, 0x1062
    lwz r0, 0xf8(r5)
    lis r9, fn_805FD580@ha
    mr r6, r3
    addi r4, r4, 0x4dd3
    srwi r0, r0, 2
    addi r3, r30, 0x4b80
    mulhwu r0, r4, r0
    addi r9, r9, fn_805FD580@l
    li r5, 0x0
    li r7, 0x0
    srwi r0, r0, 6
    mulli r8, r0, 0x64
    bl fn_805EC3B0
    b lbl_3f74
lbl_37b0:
    lwz r4, lbl_8087FD84
    cmplwi r4, 0x1
    beq lbl_37dc
    cmplwi r4, 0x4
    beq lbl_37dc
    cmplwi r4, 0x5
    beq lbl_37dc
    cmplwi r4, 0x21
    beq lbl_37dc
    cmplwi r4, 0xe
    bne lbl_37e4
lbl_37dc:
    li r0, 0x1
    b lbl_37fc
lbl_37e4:
    lwz r0, lbl_8087E7E4
    cmplw r4, r0
    bne lbl_37f8
    li r0, 0x1
    b lbl_37fc
lbl_37f8:
    li r0, 0x0
lbl_37fc:
    cmpwi r0, 0x0
    beq lbl_382c
    andi. r0, r31, 0x9
    beq lbl_3818
    lwz r3, lbl_8087FD90
    lwz r4, 0x1c(r3)
    b lbl_381c
lbl_3818:
    li r4, 0x0
lbl_381c:
    lwz r3, lbl_8087FD90
    lwz r0, 0x20(r3)
    add r0, r0, r4
    stw r0, 0x20(r3)
lbl_382c:
    lwz r0, lbl_8087FD20
    cmpwi r0, 0x0
    beq lbl_3898
    lwz r31, lbl_8087FD90
    li r4, 0x0
    stw r4, lbl_8087FD20
    addi r3, r30, 0x4b20
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3874
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_3874:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_3890
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3890:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3898:
    clrlwi. r0, r31, 31
    beq lbl_3e34
    li r29, 0x0
    stw r29, lbl_8087FD18
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x10
    bne lbl_3910
    lwz r3, lbl_8087FD90
    lwz r0, 0x10(r3)
    cmpwi r0, 0x0
    beq lbl_38d0
    li r0, 0x2
    stw r0, MotorState_8087FD70
    b lbl_38d8
lbl_38d0:
    li r0, 0x1
    stw r0, MotorState_8087FD70
lbl_38d8:
    lwz r31, lbl_8087FD90
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3908
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3908:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3910:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x20
    bne lbl_3964
    bl __OSGetSystemTime
    lwz r31, lbl_8087FD90
    addi r0, r30, 0x4b20
    stw r4, lbl_8087FD6C
    stw r3, lbl_8087FD68
    stw r29, lbl_8087FD74
    stw r0, lbl_8087FD90
    stw r29, lbl_8087FD14
    stw r29, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_395c
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_395c:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3964:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_39d0
    lwz r31, lbl_8087FD90
    addi r3, r30, 0x4b20
    stw r29, lbl_8087FD14
    li r0, 0xa
    stw r29, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_39a8
    mr r4, r31
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_39a8:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_39c4
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_39c4:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_39d4
lbl_39d0:
    li r0, 0x0
lbl_39d4:
    cmpwi r0, 0x0
    bne lbl_3f74
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x26
    bne lbl_3a98
    bl fn_80602700
    mr r31, r3
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    lwz r8, lbl_8087FD68
    li r0, 0x0
    srwi r5, r6, 2
    lwz r9, lbl_8087FD6C
    mulhwu r6, r7, r5
    subfc r4, r9, r4
    xoris r5, r0, 0x8000
    subfe r0, r8, r3
    xoris r0, r0, 0x8000
    srwi r3, r6, 6
    mulli r3, r3, 0x64
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_3a4c
    li r3, 0x0
    b lbl_3a60
lbl_3a4c:
    clrlwi. r0, r31, 31
    beq lbl_3a5c
    li r3, 0x1
    b lbl_3a60
lbl_3a5c:
    li r3, 0x2
lbl_3a60:
    lwz r31, lbl_8087FD90
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, lbl_8087FD90
    stw r0, 0xc(r31)
    stw r3, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3a90
    mr r4, r31
    mtctr r12
    bctrl 
lbl_3a90:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3a98:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x24
    bne lbl_3b10
    bl fn_80602700
    extrwi. r0, r3, 1, 29
    bne lbl_3ab8
    clrlwi. r0, r3, 31
    beq lbl_3ac0
lbl_3ab8:
    li r3, 0x0
    b lbl_3ad8
lbl_3ac0:
    lwz r0, lbl_8087FD14
    cmpwi r0, 0x0
    beq lbl_3ad4
    li r3, 0x0
    b lbl_3ad8
lbl_3ad4:
    li r3, 0x1
lbl_3ad8:
    lwz r31, lbl_8087FD90
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, lbl_8087FD90
    stw r0, 0xc(r31)
    stw r3, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3b08
    mr r4, r31
    mtctr r12
    bctrl 
lbl_3b08:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3b10:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x28
    bne lbl_3c28
    lwz r4, lbl_8087FD90
    addi r3, r30, 0x4bc0
    lwz r4, 0x24(r4)
    bl fn_80600190
    cmpwi r3, 0x0
    beq lbl_3b8c
    lwz r3, IDShouldBe_8087FD8C
    addi r4, r30, 0x4bc0
    li r5, 0x20
    bl memcpy
    lwz r31, lbl_8087FD90
    addi r4, r30, 0x4b20
    li r3, 0x0
    li r0, 0x1
    stw r4, lbl_8087FD90
    stw r3, 0xc(r31)
    stw r0, 0x10(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3b7c
    mr r4, r31
    li r3, 0x1
    mtctr r12
    bctrl 
lbl_3b7c:
    li r0, 0x0
    stw r0, lbl_8087FD18
    bl fn_805FD5B0
    b lbl_3f74
lbl_3b8c:
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD00
    mr r30, r3
    cmplwi r0, 0x5
    blt lbl_3ba8
    li r0, 0x0
    stw r0, lbl_8087FD00
lbl_3ba8:
    lwz r0, lbl_8087FD00
    lis r31, __ErrorInfo@ha
    lwz r3, lbl_8087FD00
    addi r31, r31, __ErrorInfo@l
    mulli r5, r0, 0x14
    lwz r0, lbl_8087FD00
    li r6, 0x10
    li r4, 0x0
    mulli r3, r3, 0x14
    add r5, r31, r5
    stw r6, 0x1c(r5)
    add r3, r31, r3
    mulli r0, r0, 0x14
    stw r4, 0x20(r3)
    add r3, r31, r0
    stw r4, 0x24(r3)
    bl OSGetTick
    lwz r0, lbl_8087FD00
    lwz r4, lbl_8087FD00
    mulli r5, r0, 0x14
    addi r0, r4, 0x1
    stw r0, lbl_8087FD00
    add r4, r31, r5
    stw r3, 0x2c(r4)
    mr r3, r30
    bl OSRestoreInterrupts
    lis r5, fn_805FC700@ha
    li r3, 0x0
    addi r5, r5, fn_805FC700@l
    li r4, 0x0
    bl fn_806018F0
    b lbl_3f74
lbl_3c28:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x29
    bne lbl_3c84
    lwz r3, lbl_8087FD90
    lwz r4, 0x18(r3)
    lwz r0, 0x5de0(r4)
    cmpwi r0, 0x0
    bne lbl_3c50
    bl fn_805FD8D0
    b lbl_3f74
lbl_3c50:
    addi r0, r30, 0x4b20
    stw r0, lbl_8087FD90
    li r0, 0x0
    stw r0, 0xc(r3)
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_3c7c
    mr r4, r3
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3c7c:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3c84:
    lwz r4, lbl_8087FD84
    cmplwi r4, 0x1
    beq lbl_3cb0
    cmplwi r4, 0x4
    beq lbl_3cb0
    cmplwi r4, 0x5
    beq lbl_3cb0
    cmplwi r4, 0x21
    beq lbl_3cb0
    cmplwi r4, 0xe
    bne lbl_3cb8
lbl_3cb0:
    li r0, 0x1
    b lbl_3cd0
lbl_3cb8:
    lwz r0, lbl_8087E7E4
    cmplw r4, r0
    bne lbl_3ccc
    li r0, 0x1
    b lbl_3cd0
lbl_3ccc:
    li r0, 0x0
lbl_3cd0:
    cmpwi r0, 0x0
    beq lbl_3d28
    lwz r3, lbl_8087FD90
    lwz r4, 0x20(r3)
    lwz r0, 0x14(r3)
    cmplw r4, r0
    beq lbl_3cf4
    bl fn_805FD8D0
    b lbl_3f74
lbl_3cf4:
    addi r0, r30, 0x4b20
    stw r0, lbl_8087FD90
    li r0, 0x0
    stw r0, 0xc(r3)
    lwz r12, 0x28(r3)
    cmpwi r12, 0x0
    beq lbl_3d20
    mr r4, r3
    lwz r3, 0x20(r3)
    mtctr r12
    bctrl 
lbl_3d20:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3d28:
    lwz r4, lbl_8087FD84
    cmplwi r4, 0x9
    beq lbl_3d4c
    cmplwi r4, 0xa
    beq lbl_3d4c
    cmplwi r4, 0xb
    beq lbl_3d4c
    cmplwi r4, 0xc
    bne lbl_3d54
lbl_3d4c:
    li r0, 0x1
    b lbl_3d98
lbl_3d54:
    lis r3, lbl_807A9FE8@ha
    lwzu r0, lbl_807A9FE8@l(r3)
    cmplw r4, r0
    bne lbl_3d6c
    li r0, 0x1
    b lbl_3d98
lbl_3d6c:
    lwz r0, 0x4(r3)
    cmplw r4, r0
    bne lbl_3d80
    li r0, 0x1
    b lbl_3d98
lbl_3d80:
    lwz r0, 0x8(r3)
    cmplw r4, r0
    bne lbl_3d94
    li r0, 0x1
    b lbl_3d98
lbl_3d94:
    li r0, 0x0
lbl_3d98:
    cmpwi r0, 0x0
    beq lbl_3dfc
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xb
    beq lbl_3db8
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xa
    bne lbl_3dc4
lbl_3db8:
    bl DVDLowGetImmBufferReg
    slwi r3, r3, 2
    b lbl_3dc8
lbl_3dc4:
    bl DVDLowGetImmBufferReg
lbl_3dc8:
    lwz r31, lbl_8087FD90
    addi r4, r30, 0x4b20
    li r0, 0x0
    stw r4, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3df4
    mr r4, r31
    mtctr r12
    bctrl 
lbl_3df4:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3dfc:
    lwz r31, lbl_8087FD90
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3e2c
    mr r4, r31
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3e2c:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3e34:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xe
    bne lbl_3e58
    lis r3, 0x123
    lis r4, fn_805FAE60@ha
    addi r3, r3, 0x4567
    addi r4, r4, fn_805FAE60@l
    bl fn_80600120
    b lbl_3f74
lbl_3e58:
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x1
    beq lbl_3e94
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x4
    beq lbl_3e94
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x5
    beq lbl_3e94
    lwz r0, lbl_8087FD84
    cmplwi r0, 0x21
    beq lbl_3e94
    lwz r0, lbl_8087FD84
    cmplwi r0, 0xe
    bne lbl_3f58
lbl_3e94:
    lwz r29, lbl_8087FD90
    lwz r3, 0x20(r29)
    lwz r0, 0x14(r29)
    cmplw r3, r0
    bne lbl_3f58
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_3f14
    li r4, 0x0
    stw r4, lbl_8087FD14
    addi r3, r30, 0x4b20
    li r0, 0xa
    stw r4, lbl_8087FD10
    stw r3, lbl_8087FD90
    stw r0, 0xc(r29)
    lwz r12, 0x28(r29)
    cmpwi r12, 0x0
    beq lbl_3eec
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_3eec:
    lwz r12, lbl_8087FD80
    cmpwi r12, 0x0
    beq lbl_3f08
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_3f08:
    bl fn_805FD5B0
    li r0, 0x1
    b lbl_3f18
lbl_3f14:
    li r0, 0x0
lbl_3f18:
    cmpwi r0, 0x0
    bne lbl_3f74
    lwz r31, lbl_8087FD90
    addi r3, r30, 0x4b20
    li r0, 0x0
    stw r3, lbl_8087FD90
    stw r0, 0xc(r31)
    lwz r12, 0x28(r31)
    cmpwi r12, 0x0
    beq lbl_3f50
    mr r4, r31
    lwz r3, 0x20(r31)
    mtctr r12
    bctrl 
lbl_3f50:
    bl fn_805FD5B0
    b lbl_3f74
lbl_3f58:
    li r3, 0x27
    li r4, 0x0
    li r5, 0x0
    bl fn_805FA800
    lis r3, fn_805FB090@ha
    addi r3, r3, fn_805FB090@l
    bl DVDLowRequestError
lbl_3f74:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FE860(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r9, 0x1
    stw r0, 0x24(r1)
    li r0, 0x0
    stw r31, 0x1c(r1)
    mr r31, r8
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    stw r9, 0x8(r3)
    stw r4, 0x18(r3)
    stw r5, 0x14(r3)
    stw r6, 0x10(r3)
    stw r0, 0x20(r3)
    stw r7, 0x28(r3)
    lwz r0, lbl_8087E7D4
    cmpwi r0, 0x0
    beq lbl_4010
    cmplwi r9, 0x1
    beq lbl_4004
    cmplwi r9, 0x4
    beq lbl_4004
    cmplwi r9, 0x5
    beq lbl_4004
    cmplwi r9, 0x21
    beq lbl_4004
    cmplwi r9, 0xe
    bne lbl_4010
lbl_4004:
    lwz r3, 0x18(r3)
    lwz r4, 0x14(r29)
    bl DCInvalidateRange
lbl_4010:
    bl OSDisableInterrupts
    li r0, 0x2
    stw r0, 0xc(r29)
    mr r30, r3
    mr r3, r31
    mr r4, r29
    bl fn_805FF530
    lwz r0, lbl_8087FD90
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_404c
    lwz r0, lbl_8087FD04
    cmpwi r0, 0x0
    bne lbl_404c
    bl fn_805FD5B0
lbl_404c:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void DVDInquiryAsync(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0xe
    li r6, 0x20
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    stw r7, 0x8(r3)
    stw r4, 0x18(r3)
    stw r6, 0x14(r3)
    stw r0, 0x20(r3)
    stw r5, 0x28(r3)
    lwz r0, lbl_8087E7D4
    cmpwi r0, 0x0
    beq lbl_40f8
    cmplwi r7, 0x1
    beq lbl_40ec
    cmplwi r7, 0x4
    beq lbl_40ec
    cmplwi r7, 0x5
    beq lbl_40ec
    cmplwi r7, 0x21
    beq lbl_40ec
    cmplwi r7, 0xe
    bne lbl_40f8
lbl_40ec:
    lwz r3, 0x18(r3)
    lwz r4, 0x14(r31)
    bl DCInvalidateRange
lbl_40f8:
    bl OSDisableInterrupts
    li r0, 0x2
    stw r0, 0xc(r31)
    mr r30, r3
    mr r4, r31
    li r3, 0x2
    bl fn_805FF530
    lwz r0, lbl_8087FD90
    mr r31, r3
    cmpwi r0, 0x0
    bne lbl_4134
    lwz r0, lbl_8087FD04
    cmpwi r0, 0x0
    bne lbl_4134
    bl fn_805FD5B0
lbl_4134:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FEA30(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r0, 0xc(r29)
    mr r30, r3
    cmpwi r0, 0x3
    bne lbl_4198
    li r31, 0x1
    b lbl_4200
lbl_4198:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x5
    bne lbl_41ac
    li r31, 0x4
    b lbl_4200
lbl_41ac:
    lis r31, lbl_807D0FD0@ha
    lwz r0, lbl_8087FD90
    addi r31, r31, lbl_807D0FD0@l
    cmplw r0, r31
    bne lbl_41fc
    bl fn_805FF6A0
    cmpwi r3, 0x0
    beq lbl_41e4
    cmplw r29, r3
    bne lbl_41dc
    li r31, 0x1
    b lbl_4200
lbl_41dc:
    lwz r31, 0xc(r29)
    b lbl_4200
lbl_41e4:
    cmplw r29, r31
    bne lbl_41f4
    li r31, 0x0
    b lbl_4200
lbl_41f4:
    lwz r31, 0xc(r29)
    b lbl_4200
lbl_41fc:
    lwz r31, 0xc(r29)
lbl_4200:
    mr r3, r30
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FEB00(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD0C
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_4260
    li r30, -0x1
    b lbl_42a8
lbl_4260:
    lwz r0, lbl_8087FD08
    cmpwi r0, 0x0
    beq lbl_4274
    li r30, 0x8
    b lbl_42a8
lbl_4274:
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    bne lbl_4288
    li r30, 0x0
    b lbl_42a8
lbl_4288:
    lis r4, lbl_807D0EA0@ha
    addi r4, r4, lbl_807D0EA0@l
    cmplw r3, r4
    bne lbl_42a0
    li r3, 0x0
    b lbl_42a4
lbl_42a0:
    bl fn_805FEA30
lbl_42a4:
    mr r30, r3
lbl_42a8:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FEBA0(void) {
    nofralloc
    mr r0, r3
    lwz r3, lbl_8087E7D4
    stw r0, lbl_8087E7D4
    blr 
}


asm void fn_805FEBB0(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    li r4, 0x0
    stw r4, lbl_8087FD04
    lwz r0, lbl_8087FD08
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_4314
    stw r4, lbl_8087FD08
    bl fn_805FD5B0
lbl_4314:
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FEC00(void* a, void* b) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    bl OSDisableInterrupts
    lwz r4, 0xc(r29)
    mr r31, r3
    addi r0, r4, 0x1
    cmplwi r0, 0xd
    bgt lbl_466c
    lis r4, jumptable_807AA0A0@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807AA0A0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr 
    cmpwi r30, 0x0
    beq lbl_466c
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
    b lbl_466c
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_43b8
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_4678
lbl_43b8:
    li r0, 0x1
    stw r0, lbl_8087FD10
    stw r30, lbl_8087FD80
    lwz r0, 0x8(r29)
    cmplwi r0, 0x4
    beq lbl_43f8
    cmplwi r0, 0x21
    beq lbl_43f8
    cmplwi r0, 0x22
    beq lbl_43f8
    cmplwi r0, 0x29
    beq lbl_43f8
    cmplwi r0, 0x2a
    beq lbl_43f8
    cmplwi r0, 0x1
    bne lbl_466c
lbl_43f8:
    li r0, 0x1
    stw r0, lbl_8087FD20
    b lbl_466c
    mr r3, r29
    bl fn_805FF710
    lwz r12, 0x28(r29)
    li r0, 0xa
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_4430
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_4430:
    cmpwi r30, 0x0
    beq lbl_466c
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
    b lbl_466c
    lwz r0, 0x8(r29)
    cmplwi r0, 0x2a
    bgt lbl_44f4
    lis r3, jumptable_807A9FF4@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_807A9FF4@l
    lwzx r3, r3, r0
    mtctr r3
    bctr 
    cmpwi r30, 0x0
    beq lbl_466c
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
    b lbl_466c
    lwz r0, __OSInIPL
    cmpwi r0, 0x0
    beq lbl_44f4
    lis r3, lbl_807D0EA0@ha
    li r0, 0xa
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_44d0
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_44d0:
    cmpwi r30, 0x0
    beq lbl_44ec
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_44ec:
    bl fn_805FD5B0
    b lbl_466c
lbl_44f4:
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_4510
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_4678
lbl_4510:
    li r0, 0x1
    stw r0, lbl_8087FD10
    stw r30, lbl_8087FD80
    b lbl_466c
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    bne lbl_4544
    lwz r0, lbl_8087FD24
    cmpwi r0, 0x0
    bne lbl_4544
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_4678
lbl_4544:
    lwz r0, lbl_8087FD24
    cmpwi r0, 0x0
    beq lbl_4564
    lis r3, lbl_807D0F00@ha
    addi r3, r3, lbl_807D0F00@l
    bl OSCancelAlarm
    li r0, 0x0
    stw r0, lbl_8087FD24
lbl_4564:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x4
    bne lbl_4578
    li r0, 0x3
    stw r0, lbl_8087FD14
lbl_4578:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x5
    bne lbl_458c
    li r0, 0x4
    stw r0, lbl_8087FD14
lbl_458c:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x6
    bne lbl_45a0
    li r0, 0x1
    stw r0, lbl_8087FD14
lbl_45a0:
    lwz r0, 0xc(r29)
    cmpwi r0, 0xb
    bne lbl_45b4
    li r0, 0x2
    stw r0, lbl_8087FD14
lbl_45b4:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x7
    bne lbl_45c8
    li r0, 0x7
    stw r0, lbl_8087FD14
lbl_45c8:
    lis r3, lbl_807D0EA0@ha
    li r0, 0xa
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_45f8
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_45f8:
    cmpwi r30, 0x0
    beq lbl_4614
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_4614:
    bl fn_805FD5B0
    b lbl_466c
    lis r3, lbl_807D0EA0@ha
    li r0, 0xa
    addi r3, r3, lbl_807D0EA0@l
    stw r3, lbl_8087FD90
    lwz r12, 0x28(r29)
    stw r0, 0xc(r29)
    cmpwi r12, 0x0
    beq lbl_464c
    mr r4, r29
    li r3, -0x3
    mtctr r12
    bctrl 
lbl_464c:
    cmpwi r30, 0x0
    beq lbl_4668
    mr r12, r30
    mr r4, r29
    li r3, 0x0
    mtctr r12
    bctrl 
lbl_4668:
    bl fn_805FD5B0
lbl_466c:
    mr r3, r31
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_4678:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FEF70(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, fn_805FF030@ha
    stw r0, 0x24(r1)
    addi r4, r4, fn_805FF030@l
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_805FEC00
    cmpwi r3, 0x0
    bne lbl_46d8
    li r3, -0x1
    b lbl_4744
lbl_46d8:
    bl OSDisableInterrupts
    mr r30, r3
    lis r31, jumptable_807AA0D8@ha
lbl_46e4:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_4738
    cmpwi r0, -0x1
    beq lbl_4738
    cmpwi r0, 0xa
    beq lbl_4738
    cmpwi r0, 0x3
    bne lbl_472c
    lwz r3, 0x8(r29)
    subi r0, r3, 0x4
    cmplwi r0, 0x26
    bgt lbl_472c
    addi r3, r31, jumptable_807AA0D8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr 
lbl_472c:
    la r3, __DVDThreadQueue
    bl OSSleepThread
    b lbl_46e4
lbl_4738:
    mr r3, r30
    bl OSRestoreInterrupts
    li r3, 0x0
lbl_4744:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FF030(void) {
    nofralloc
    la r3, __DVDThreadQueue
    b OSWakeupThread
}


asm void fn_805FF040(void) {
    nofralloc
    stw r3, lbl_8087FD40
    blr 
}


asm void __DVDGetCoverStatus(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, fn_805FF040@ha
    stw r0, 0x14(r1)
    li r0, 0x0
    addi r3, r3, fn_805FF040@l
    stw r31, 0xc(r1)
    stw r0, lbl_8087FD40
    bl fn_80602730
    nop 
lbl_47a8:
    lwz r0, lbl_8087FD40
    cmpwi r0, 0x0
    beq lbl_47a8
    lwz r0, lbl_8087FD40
    clrlwi. r0, r0, 31
    bne lbl_47c8
    li r3, 0x0
    b lbl_4838
lbl_47c8:
    bl fn_80602700
    mr r31, r3
    bl __OSGetSystemTime
    lis r6, 0x8000
    lis r5, 0x1062
    lwz r6, 0xf8(r6)
    addi r7, r5, 0x4dd3
    lwz r8, lbl_8087FD68
    li r0, 0x0
    srwi r5, r6, 2
    lwz r9, lbl_8087FD6C
    mulhwu r6, r7, r5
    subfc r4, r9, r4
    xoris r5, r0, 0x8000
    subfe r0, r8, r3
    xoris r0, r0, 0x8000
    srwi r3, r6, 6
    mulli r3, r3, 0x64
    subfc r3, r3, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    beq lbl_482c
    li r3, 0x0
    b lbl_4838
lbl_482c:
    clrlwi r0, r31, 31
    neg r3, r0
    addi r3, r3, 0x2
lbl_4838:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FF120(void) {
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD0C
    cmpwi r0, 0x0
    beq lbl_4878
    li r4, -0x1
    b lbl_492c
lbl_4878:
    lwz r0, lbl_8087FD08
    cmpwi r0, 0x0
    beq lbl_488c
    li r4, 0x8
    b lbl_492c
lbl_488c:
    lwz r0, lbl_8087FD24
    lwz r0, lbl_8087FD28
    cmpwi r0, 0x0
    beq lbl_48a4
    li r4, 0x5
    b lbl_492c
lbl_48a4:
    lwz r5, lbl_8087FD90
    cmpwi r5, 0x0
    bne lbl_4910
    lwz r0, lbl_8087FD14
    cmplwi r0, 0x3
    beq lbl_48e0
    cmplwi r0, 0x4
    beq lbl_48e8
    cmplwi r0, 0x1
    beq lbl_48f0
    cmplwi r0, 0x2
    beq lbl_48f8
    cmplwi r0, 0x7
    beq lbl_4900
    b lbl_4908
lbl_48e0:
    li r4, 0x4
    b lbl_492c
lbl_48e8:
    li r4, 0x5
    b lbl_492c
lbl_48f0:
    li r4, 0x6
    b lbl_492c
lbl_48f8:
    li r4, 0xb
    b lbl_492c
lbl_4900:
    li r4, 0x7
    b lbl_492c
lbl_4908:
    li r4, 0x0
    b lbl_492c
lbl_4910:
    lis r4, lbl_807D0EA0@ha
    addi r4, r4, lbl_807D0EA0@l
    cmplw r5, r4
    bne lbl_4928
    li r4, 0x0
    b lbl_492c
lbl_4928:
    lwz r4, 0xc(r5)
lbl_492c:
    cmplwi r4, 0x2
    ble lbl_4948
    subi r0, r4, 0x8
    cmplwi r0, 0x2
    ble lbl_4948
    cmpwi r4, 0xc
    bne lbl_4950
lbl_4948:
    li r31, 0x1
    b lbl_4954
lbl_4950:
    li r31, 0x0
lbl_4954:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr 
}


asm void fn_805FF240(void) {
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl OSDisableInterrupts
    mr r29, r3
    bl __DVDClearWaitingQueue
    lwz r0, lbl_8087FD10
    cmpwi r0, 0x0
    beq lbl_49ac
    stw r31, lbl_8087FD80
    b lbl_4a68
lbl_49ac:
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_49c0
    li r0, 0x0
    stw r0, 0x28(r3)
lbl_49c0:
    bl OSDisableInterrupts
    mr r30, r3
    bl OSDisableInterrupts
    lwz r0, lbl_8087FD90
    li r4, 0x1
    stw r4, lbl_8087FD04
    cmpwi r0, 0x0
    bne lbl_49e4
    stw r4, lbl_8087FD08
lbl_49e4:
    bl OSRestoreInterrupts
    b lbl_49f4
lbl_49ec:
    li r4, 0x0
    bl fn_805FEC00
lbl_49f4:
    bl fn_805FF5A0
    cmpwi r3, 0x0
    bne lbl_49ec
    lwz r3, lbl_8087FD90
    cmpwi r3, 0x0
    beq lbl_4a18
    mr r4, r31
    bl fn_805FEC00
    b lbl_4a34
lbl_4a18:
    cmpwi r31, 0x0
    beq lbl_4a34
    mr r12, r31
    li r3, 0x0
    li r4, 0x0
    mtctr r12
    bctrl 
lbl_4a34:
    bl OSDisableInterrupts
    li r4, 0x0
    stw r4, lbl_8087FD04
    lwz r0, lbl_8087FD08
    mr r31, r3
    cmpwi r0, 0x0
    beq lbl_4a58
    stw r4, lbl_8087FD08
    bl fn_805FD5B0
lbl_4a58:
    mr r3, r31
    bl OSRestoreInterrupts
    mr r3, r30
    bl OSRestoreInterrupts
lbl_4a68:
    mr r3, r29
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr 
}


asm void fn_805FF360(void) {
    nofralloc
    li r0, 0x1
    stw r0, lbl_8087FD44
    blr 
}


void __DVDPrepareReset(void) {
    DVDCommandBlock* block;
    BOOL enabled;
    BOOL level2;
    BOOL level;

    OSDisableInterrupts();
    lbl_8087FD44 = 0;
    level = OSDisableInterrupts();
    __DVDClearWaitingQueue();
    if (lbl_8087FD10) {
        lbl_8087FD80 = (u32)fn_805FF360;
    } else {
        block = (DVDCommandBlock*)lbl_8087FD90;
        if (block) {
            block->state = 0;
        }
        enabled = OSDisableInterrupts();
        {
            BOOL l = OSDisableInterrupts();
            lbl_8087FD04 = 1;
            if (!lbl_8087FD90) {
                lbl_8087FD08 = 1;
            }
            OSRestoreInterrupts(l);
        }
        while ((block = (DVDCommandBlock*)fn_805FF5A0()) != 0) {
            fn_805FEC00(block, 0);
        }
        if (lbl_8087FD90) {
            fn_805FEC00((void*)lbl_8087FD90, (void*)fn_805FF360);
        } else {
            if (fn_805FF360) {
                lbl_8087FD44 = 1;
            }
        }
        level2 = OSDisableInterrupts();
        lbl_8087FD04 = 0;
        if (lbl_8087FD08) {
            lbl_8087FD08 = 0;
            fn_805FD5B0();
        }
        OSRestoreInterrupts(level2);
        OSRestoreInterrupts(enabled);
    }
    OSRestoreInterrupts(level);
    OSEnableInterrupts();
    asm { nop }
    while (lbl_8087FD44 != 1) {}
}



asm void fn_805FF4B0(void) {
    nofralloc
    lis r4, lbl_807D0FA0@ha
    addi r4, r4, lbl_807D0FA0@l
    cmplw r3, r4
    bne lbl_4bf8
    li r3, 0x1
    blr 
lbl_4bf8:
    b fn_80602D20
    blr 
}


asm void fn_805FF4D0(void) {
    nofralloc
    li r3, 0x1
    blr 
}


asm void fn_805FF4E0(void) {
    nofralloc
    blr 
}
