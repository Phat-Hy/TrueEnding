#include "revolution/types.h"
#include "revolution/os.h"
#include "revolution/os/OSContext.h"
#include "revolution/os/OSThread.h"
#include "revolution/os/OSError.h"

typedef struct __va_list_struct {
    char gpr;
    char fpr;
    char reserved[2];
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];
typedef __va_list va_list;

void __builtin_va_info(void*);
#define va_start(ap, fmt) __builtin_va_info(&ap)
#define va_end(ap) ((void)0)

extern void vprintf(const char* fmt, va_list args);
extern void PPCHalt(void);
extern u32 PPCMfmsr(void);
extern void PPCMtmsr(u32 msr);
extern u32 PPCMffpscr(void);
extern void PPCMtfpscr(u32 fpscr);

extern u32 __OSFpscrEnableBits;
extern OSTime __OSLastInterruptTime;
extern u32 __OSLastInterruptSrr0;
extern s16 __OSLastInterrupt;
#define __OSActiveThreadQueue (*(OSThreadQueue*)0x800000DC)

OSErrorHandler __OSErrorTable[OS_ERROR_MAX];

void OSReport(const char* msg, ...) {
    va_list args;
    va_start(args, msg);
    vprintf(msg, args);
    va_end(args);
}

asm void fn_805EE150(const char* msg, ...) {
    nofralloc
    b vprintf
}

void OSPanic(const char* file, s32 line, const char* msg, ...) {
    va_list args;
    u32 i;
    u32* sp;

    OSDisableInterrupts();
    va_start(args, msg);
    vprintf(msg, args);
    va_end(args);
    OSReport(" in \"%s\" on line %d.\n", file, line);
    OSReport("\nAddress:      Back Chain    LR Save\n");
    for (i = 0, sp = (u32*)OSGetStackPointer(); sp != NULL && sp != (u32*)0xFFFFFFFF && i++ < 16; sp = (u32*)*sp) {
        OSReport("0x%08x:   0x%08x    0x%08x\n", sp, *sp, *(sp + 1));
    }
    PPCHalt();
}

OSErrorHandler OSSetErrorHandler(OSError error, OSErrorHandler handler) {
    OSErrorHandler prevHandler;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    prevHandler = __OSErrorTable[error];
    __OSErrorTable[error] = handler;

    if (error == OS_ERROR_FPE) {
        OSThread* thread;
        u32 msr;
        u32 fpscr;

        msr = PPCMfmsr();
        PPCMtmsr(msr | 0x2000);
        fpscr = PPCMffpscr();

        if (handler != NULL) {
            for (thread = __OSActiveThreadQueue.head; thread != NULL; thread = thread->linkActive.next) {
                thread->context.srr1 |= 0x0900;
                if ((thread->context.state & 1) == 0) {
                    int i;
                    thread->context.state |= 1;
                    for (i = 0; i < 32; ++i) {
                        *((u32*)&thread->context.fpr[i] + 1) = (u32)-1;
                        *(u32*)&thread->context.fpr[i] = (u32)-1;
                        *((u32*)&thread->context.psf[i] + 1) = (u32)-1;
                        *(u32*)&thread->context.psf[i] = (u32)-1;
                    }
                    thread->context.fpscr = 4;
                }
                thread->context.fpscr |= (__OSFpscrEnableBits & 0xF8);
                thread->context.fpscr &= 0x6005F8FF;
            }
            fpscr |= (__OSFpscrEnableBits & 0xF8);
            msr |= 0x0900;
        } else {
            for (thread = __OSActiveThreadQueue.head; thread != NULL; thread = thread->linkActive.next) {
                thread->context.srr1 &= ~0x0900;
                thread->context.fpscr &= ~0xF8;
                thread->context.fpscr &= 0x6005F8FF;
            }
            fpscr &= ~0xF8;
            msr &= ~0x0900;
        }

        PPCMtfpscr(fpscr & 0x6005F8FF);
        PPCMtmsr(msr);
    }

    OSRestoreInterrupts(enabled);
    return prevHandler;
}

#define __OSCurrentFPUContext (*(OSContext**)0x800000D8)

void __OSUnhandledException(u8 error, OSContext* context, u32 dsisr, u32 dar) {
    OSTime time;

    time = OSGetTime();
    if ((context->srr1 & 2) == 0) {
        OSReport("Non-recoverable Exception %d", error);
    } else {
        if (error == OS_ERROR_PROGRAM && (context->srr1 & 0x00100000)) {
            if (__OSErrorTable[OS_ERROR_FPE]) {
                u32 msr;
                error = OS_ERROR_FPE;
                msr = PPCMfmsr();
                PPCMtmsr(msr | 0x2000);
                if (__OSCurrentFPUContext) {
                    OSSaveFPUContext(__OSCurrentFPUContext);
                }
                PPCMtfpscr(PPCMffpscr() & 0x6005F8FF);
                PPCMtmsr(msr);
                if (__OSCurrentFPUContext == context) {
                    OSDisableScheduler();
                    __OSErrorTable[OS_ERROR_FPE](OS_ERROR_FPE, context, dsisr, dar);
                    context->srr1 &= ~0x2000;
                    __OSCurrentFPUContext = NULL;
                    context->fpscr &= 0x6005F8FF;
                    OSEnableScheduler();
                    __OSReschedule();
                } else {
                    context->srr1 &= ~0x2000;
                    __OSCurrentFPUContext = NULL;
                }
                OSLoadContext(context);
            }
        }

        if (__OSErrorTable[error]) {
            OSDisableScheduler();
            __OSErrorTable[error](error, context, dsisr, dar);
            OSEnableScheduler();
            __OSReschedule();
            OSLoadContext(context);
        }

        if (error == OS_ERROR_DECREMENTER) {
            OSLoadContext(context);
        }

        OSReport("Unhandled Exception %d", error);
    }

    OSReport("\n");
    OSDumpContext(context);
    OSReport("\nDSISR = 0x%08x                   DAR  = 0x%08x\n", dsisr, dar);
    OSReport("TB = 0x%016llx\n", time);

    switch (error) {
    case OS_ERROR_DSI:
        OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access invalid address 0x%x (read from DAR)\n", context->srr0, dar);
        break;
    case OS_ERROR_ISI:
        OSReport("\nAttempted to fetch instruction from invalid address 0x%x (read from SRR0)\n", context->srr0);
        break;
    case OS_ERROR_ALIGNMENT:
        OSReport("\nInstruction at 0x%x (read from SRR0) attempted to access unaligned address 0x%x (read from DAR)\n", context->srr0, dar);
        break;
    case OS_ERROR_PROGRAM:
        OSReport("\nProgram exception : Possible illegal instruction/operation at or around 0x%x (read from SRR0)\n", context->srr0, dar);
        break;
    case OS_ERROR_PROTECTION:
        OSReport("\n");
        OSReport("AI DMA Address =   0x%04x%04x\n", *(u16*)0xCC005030, *(u16*)0xCC005032);
        OSReport("ARAM DMA Address = 0x%04x%04x\n", *(u16*)0xCC005020, *(u16*)0xCC005022);
        OSReport("DI DMA Address =   0x%08x\n", *(u32*)0xCD006014);
        break;
    }

    OSReport("\nLast interrupt (%d): SRR0 = 0x%08x  TB = 0x%016llx\n", __OSLastInterrupt, __OSLastInterruptSrr0, __OSLastInterruptTime);
    PPCHalt();
}
