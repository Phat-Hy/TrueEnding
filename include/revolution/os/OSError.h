#ifndef REVOLUTION_OS_OSERROR_H
#define REVOLUTION_OS_OSERROR_H

#include "types.h"
#include "revolution/os/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef u16 OSError;
typedef void (*OSErrorHandler)(OSError error, OSContext* context, ...);

#define OS_ERROR_SYSTEM_RESET         0
#define OS_ERROR_MACHINE_CHECK        1
#define OS_ERROR_DSI                  2
#define OS_ERROR_ISI                  3
#define OS_ERROR_EXTERNAL_INTERRUPT   4
#define OS_ERROR_ALIGNMENT            5
#define OS_ERROR_PROGRAM              6
#define OS_ERROR_FP_UNAVAILABLE       7
#define OS_ERROR_DECREMENTER          8
#define OS_ERROR_SYSTEM_CALL          9
#define OS_ERROR_TRACE                10
#define OS_ERROR_PERF_MONITOR         11
#define OS_ERROR_IABR                 12
#define OS_ERROR_RESERVED             13
#define OS_ERROR_THERMAL_INTERRUPT    14
#define OS_ERROR_PROTECTION           15
#define OS_ERROR_FPE                  16
#define OS_ERROR_MAX                  17

void OSReport(const char* msg, ...);
void fn_805EE150(const char* msg, ...);
void OSPanic(const char* file, s32 line, const char* msg, ...);
OSErrorHandler OSSetErrorHandler(OSError error, OSErrorHandler handler);
void __OSUnhandledException(u8 error, OSContext* context, u32 dsisr, u32 dar);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSERROR_H
