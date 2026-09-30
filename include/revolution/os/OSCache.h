#ifndef RVL_SDK_OS_CACHE_H
#define RVL_SDK_OS_CACHE_H

#include "revolution/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void DCEnable(void);
void DCInvalidateRange(void* addr, u32 nBytes);
void DCFlushRange(void* addr, u32 nBytes);
void fn_805ED1C0(void* addr, u32 nBytes); // DCStoreRange
void DCFlushRangeNoSync(void* addr, u32 nBytes);
void DCZeroRange(void* addr, u32 nBytes);

void ICInvalidateRange(void* addr, u32 nBytes);
void ICFlashInvalidate(void);
void ICEnable(void);

void fn_805ED2C0(void); // __LCEnable
void fn_805ED390(void); // LCEnable
void LCDisable(void);
void fn_805ED400(void* dest, void* src, u32 blocks);
void fn_805ED430(void* dest, void* src, u32 blocks);
u32 fn_805ED460(void* dest, void* src, u32 nBytes);
u32 fn_805ED500(void* dest, void* src, u32 nBytes);
void fn_805ED5A0(u32 len);

void __OSCacheInit(void);

#ifdef __cplusplus
}
#endif

#endif // RVL_SDK_OS_CACHE_H
