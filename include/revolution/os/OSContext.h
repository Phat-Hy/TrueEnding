#ifndef REVOLUTION_OS_OSCONTEXT_H
#define REVOLUTION_OS_OSCONTEXT_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSContext {
    u32 gpr[32];
    u32 cr;
    u32 lr;
    u32 ctr;
    u32 xer;
    f64 fpr[32];
    u32 fpscr_pad;
    u32 fpscr;
    u32 srr0;
    u32 srr1;
    u16 mode;
    u16 state;
    u32 gqr[8];
    u32 psf_pad;
    f64 psf[32];
} OSContext;

void OSClearContext(OSContext* context);
void OSInitContext(OSContext* context, void* pc, void* sp);
void OSSetCurrentContext(OSContext* context);
OSContext* OSGetCurrentContext(void);
BOOL OSSaveContext(OSContext* context);
void OSLoadContext(OSContext* context);
u32 OSGetStackPointer(void);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSCONTEXT_H
