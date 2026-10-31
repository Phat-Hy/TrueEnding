/*
 * tls_sym - guest address -> "name+0xOFFSET", parsed once from config/symbols.txt.
 *
 * Used by every Track B probe that prints a PC or a guest address, so a log line is readable
 * without a second window: `[ReadWatch] reader_pc=fn_80091684+0x1C` instead of `0x800A0604`.
 * Inert when the symbol file is absent - addresses then print exactly as before.
 *
 * Allocations and I/O happen on first use, never per call, and the lookup is a binary search.
 */
#ifndef TLS_SYM_H
#define TLS_SYM_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Writes "name+0xNN" (or "name", or "0xNNNNNNNN" when unknown) into `out`.
 * `out` is always NUL-terminated. Safe to call before any other initialisation. */
void tls_sym_format(uint32_t addr, char* out, size_t n);

#ifdef __cplusplus
}
#endif

#endif /* TLS_SYM_H */
