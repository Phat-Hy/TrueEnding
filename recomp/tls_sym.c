/*
 * tls_sym - guest address -> name, for every probe that prints a PC.
 *
 * WHY THIS EXISTS. Every Track B instrument reports raw hex: `[ReadWatch] reader_pc=0x800A0604`,
 * `[StoreWatch] cia=0x80207F80`, `[Runner] CPU Exception ... at PC 0x80091684`. Those numbers are
 * only interpretable with a symbol map open in another window, and one audit this session produced
 * 64 such PCs that collapse to 12 routines - a fact nobody could see from the log itself.
 *
 * Track A maintains `config/symbols.txt` (dtk format) with extents for 18,103 functions; this module
 * turns it into `name+0xOFFSET`. It is the cheapest thing Track A gives Track B, and it costs the
 * guest side nothing: the file is parsed once, lazily, on the first lookup, and never touched again.
 *
 * The format it reads is one definition per line:
 *     fn_800A0610 = .text:0x800A0610; // type:function size:0x2C4
 *     SomeName    = .text:0x80012345; // type:function size:0x40 scope:global
 * Only `type:function` entries are indexed, and only the first TLS_SYM_MAX of them.
 *
 * Inert by construction: if the file is missing the table stays empty and every address prints as
 * the plain hex it printed before, so a checkout without `config/symbols.txt` behaves identically.
 */
#include "tls_sym.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TLS_SYM_MAX      24000
#define TLS_SYM_NAMELEN  48

typedef struct {
    uint32_t start;
    uint32_t size;
    char     name[TLS_SYM_NAMELEN];
} TlsSymEnt;

static TlsSymEnt s_sym[TLS_SYM_MAX];
static int s_sym_n = -1;

static int sym_cmp(const void* a, const void* b) {
    const TlsSymEnt* x = (const TlsSymEnt*)a;
    const TlsSymEnt* y = (const TlsSymEnt*)b;
    if (x->start < y->start) return -1;
    if (x->start > y->start) return 1;
    return 0;
}

/* Parse `name = .text:0xADDR; // ... type:function size:0xSIZE`. Hand-written rather than sscanf so a
 * line with a missing size (data labels sometimes have none) is skipped without eating the next line. */
static void tls_sym_load(void) {
    s_sym_n = 0;
    const char* path = getenv("TLS_SYM_FILE");
    if (path == NULL || *path == '\0') path = "config/symbols.txt";
    FILE* f = fopen(path, "rb");
    if (f == NULL) {
        /* Try paths relative to the executable's directory's parent (build/recomp/../..). */
        static char alt[512];
        const char* dots[] = { "../../", "../", "" };
        for (int i = 0; i < 3; i++) {
            snprintf(alt, sizeof(alt), "%s%s", dots[i], path);
            f = fopen(alt, "rb");
            if (f != NULL) break;
        }
        if (f == NULL) return;
    }
    char line[256];
    while (fgets(line, sizeof(line), f) != NULL) {
        if (s_sym_n >= TLS_SYM_MAX) break;
        if (strstr(line, "type:function") == NULL) continue;
        const char* eq = strchr(line, '=');
        if (eq == NULL) continue;
        const char* colon = strstr(eq, ":0x");
        if (colon == NULL) continue;
        char* end = NULL;
        unsigned long start = strtoul(colon + 3, &end, 16);
        if (start == 0 || start > 0xFFFFFFFFul) continue;
        unsigned long size = 0;
        const char* sz = strstr(line, "size:0x");
        if (sz != NULL) size = strtoul(sz + 7, NULL, 16);
        /* Name: from the start of the line to the '=' (trimmed). */
        const char* ns = line;
        while (*ns == ' ' || *ns == '\t') ns++;
        size_t nlen = (size_t)(eq - ns);
        while (nlen > 0 && (ns[nlen - 1] == ' ' || ns[nlen - 1] == '\t')) nlen--;
        if (nlen == 0 || nlen >= TLS_SYM_NAMELEN) nlen = TLS_SYM_NAMELEN - 1;
        TlsSymEnt* e = &s_sym[s_sym_n++];
        e->start = (uint32_t)start;
        e->size = (uint32_t)size;
        memcpy(e->name, ns, nlen);
        e->name[nlen] = '\0';
    }
    fclose(f);
    if (s_sym_n > 1) qsort(s_sym, (size_t)s_sym_n, sizeof(s_sym[0]), sym_cmp);
}

void tls_sym_format(uint32_t addr, char* out, size_t n) {
    if (out == NULL || n == 0) return;
    if (s_sym_n < 0) tls_sym_load();
    if (s_sym_n <= 0) {
        snprintf(out, n, "0x%08X", addr);
        return;
    }
    /* Greatest entry with start <= addr. */
    int lo = 0, hi = s_sym_n - 1, best = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (s_sym[mid].start <= addr) { best = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    if (best >= 0) {
        const TlsSymEnt* e = &s_sym[best];
        uint32_t off = addr - e->start;
        /* size 0 = unknown extent: only claim a zero offset, otherwise the address may belong to
         * the next function and a name+offset would be confidently wrong. */
        if (e->size ? (off < e->size) : (off == 0)) {
            if (off == 0) snprintf(out, n, "%s", e->name);
            else snprintf(out, n, "%s+0x%X", e->name, off);
            return;
        }
    }
    snprintf(out, n, "0x%08X", addr);
}
