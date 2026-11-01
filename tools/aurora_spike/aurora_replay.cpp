/* Aurora GX replay spike (handover 5c.46 AP-AM).
 *
 * Drives aurora's FIFO command processor from a captured GX byte stream and writes the resulting
 * EFB as a PPM, so the same frame the hand-rolled layer rendered can be compared pixel-wise.
 * Also services guest EFB copies through capture_copies/get (exit criterion 3).
 *
 * The capture comes from the runner's TLS_GX_CAPTURE instrument (recomp/gx_fifo_capture.c): the
 * raw big-endian GX FIFO bytes for a frame window with display lists inlined, a MEM1+MEM2
 * snapshot (mapped at the guest's own addresses, because aurora treats the pointers inside the
 * stream as host pointers), and every guest EFB copy's destination bytes.
 *
 * Usage: tls_gx_replay <capture.tlscap> <out.ppm> [options]
 *   --fb WxH            EFB size for the headless surface (default 640x480, the guest's)
 *   --backend d3d12|d3d11|vulkan|auto    (default auto)
 *   --extra N           empty frames after the last replayed one (default 8)
 *   --start-at N        first recorded frame to replay (default 0)
 *   --stop-after N      stop after recorded frame N (bisecting)
 *   --split N           feed each recorded frame as N command-aligned aurora frames, so a frame
 *                       bigger than aurora's per-frame staging budget can still be replayed
 *   --raw               feed the stream without the adapter (measures what the adapter adds)
 *   --verbose           per-frame accounting
 *   --max-cmds N        stop rewriting a frame after N commands (bisecting a crash)
 *   --parse-only        parse/adapt every frame, report totals, do not touch the GPU
 *   --copy-dst 0xADDR   also request AuroraReadbackCaptureCopies for this destination
 *   --copy-wh-fmt WxH:F copy destination geometry (default 80x56:6)
 *   --copy-size N       expected payload size (default derived from --copy-wh-fmt)
 *   --copy-out FILE     where to write the copy payload (aurora's bytes; default aurora_copy.bin)
 *   --copy-record N     take geometry + the host layer's bytes from copy record N of the capture
 *   --synthetic-copy    run only the deterministic synthetic EFB-copy proof and exit
 */
#include <aurora/aurora.h>
#include <dolphin/gx.h>
#include <dolphin/gx/GXAurora.h>

#include "../../recomp/gx_fifo_capture.h" /* the capture format, from its producer */

/* aurora::gx::fifo is where a recompiler drives the command processor - the layer that parses the
 * raw GX FIFO byte stream (lib/gx/fifo.cpp + command_processor.cpp), not the source-level GX API
 * in lib/dolphin/gx. write_data_grow() is its out-of-line append path. */
namespace aurora::gx::fifo {
void write_data_grow(const void* data, uint32_t length);
}

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <dbghelp.h>

#include <algorithm>
#include <csignal>
#include <cinttypes>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <string>
#include <vector>

namespace {

/* -------------------------------------------------------------------------------------------
 * Diagnostics: an abort() with no aurora log line is either a std::terminate in a noexcept
 * function or a check inside the prebuilt Dawn DLL, and neither prints through the log callback.
 * This is what turned "it dies silently" into the numbers in the dossier.
 * ----------------------------------------------------------------------------------------- */
void print_stack(const char* why) {
  void* frames[32];
  const USHORT count = RtlCaptureStackBackTrace(1, 32, frames, nullptr);
  const uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
  std::fprintf(stderr, "[replay] %s: %u frame(s); module base 0x%llx\n", why, count,
               (unsigned long long)base);
  static bool syms = false;
  if (!syms) {
    SymSetOptions(SYMOPT_LOAD_LINES | SYMOPT_UNDNAME);
    syms = SymInitialize(GetCurrentProcess(), nullptr, TRUE) != FALSE;
  }
  char buf[sizeof(SYMBOL_INFO) + 256];
  auto* sym = reinterpret_cast<SYMBOL_INFO*>(buf);
  sym->SizeOfStruct = sizeof(SYMBOL_INFO);
  sym->MaxNameLen = 255;
  for (USHORT i = 0; i < count && i < 12; ++i) {
    const DWORD64 addr = reinterpret_cast<DWORD64>(frames[i]);
    DWORD64 disp = 0;
    const char* name = SymFromAddr(GetCurrentProcess(), addr, &disp, sym) ? sym->Name : "?";
    const uintptr_t raw = reinterpret_cast<uintptr_t>(frames[i]);
    std::fprintf(stderr, "  #%02u %s + 0x%llx (exe+0x%llx)\n", i, name, (unsigned long long)disp,
                 (unsigned long long)(raw > base ? raw - base : 0));
  }
  std::fflush(stderr);
}

void terminate_handler() {
  print_stack("std::terminate");
  std::_Exit(8);
}
void sigabrt_handler(int) {
  print_stack("SIGABRT");
  std::_Exit(9);
}
LONG WINAPI veh_handler(EXCEPTION_POINTERS* info) {
  const DWORD code = info->ExceptionRecord->ExceptionCode;
  if (code == 0xC0000005 || code == 0xC00000FD || code == 0xC000001D || code == 0xC0000094) {
    std::fprintf(stderr, "[replay] exception 0x%08lX at 0x%llx; access=%s address=0x%llx\n", code,
                 (unsigned long long)info->ExceptionRecord->ExceptionAddress,
                 info->ExceptionRecord->ExceptionInformation[0] == 0   ? "read"
                 : info->ExceptionRecord->ExceptionInformation[0] == 1 ? "write"
                                                                       : "exec",
                 (unsigned long long)info->ExceptionRecord->ExceptionInformation[1]);
    std::_Exit(7);
  }
  return EXCEPTION_CONTINUE_SEARCH;
}

void log_callback(AuroraLogLevel level, const char* module, const char* message, unsigned int len) {
  const char* name = level == LOG_DEBUG   ? "debug"
                     : level == LOG_INFO  ? "info"
                     : level == LOG_WARNING ? "WARN"
                     : level == LOG_ERROR ? "ERROR"
                                          : "FATAL";
  std::fprintf(level >= LOG_ERROR ? stderr : stdout, "[aurora %s %s] %.*s\n", name, module,
               static_cast<int>(len), message);
  std::fflush(stdout);
  std::fflush(stderr); /* a FATAL line goes to stderr and abort() would drop the buffer */
  if (level == LOG_FATAL) std::abort();
}

/* -------------------------------------------------------------------------------------------
 * Capture file
 * ----------------------------------------------------------------------------------------- */
struct FrameChunk {
  uint32_t frame = 0;
  std::vector<std::pair<const uint8_t*, uint32_t>> chunks;
};
struct MemPlane {
  uint32_t base = 0;
  const uint8_t* data = nullptr;
  uint32_t size = 0;
};
struct CopyRecord {
  uint32_t frame = 0, dst = 0, w = 0, h = 0, fmt = 0, vmark = 0, size = 0;
  const uint8_t* bytes = nullptr;
};
struct Capture {
  uint32_t frameFrom = 0, frameTo = 0;
  std::vector<FrameChunk> frames;
  std::vector<MemPlane> memory;
  std::vector<CopyRecord> copies;
};

std::vector<uint8_t> g_file;
uint64_t g_fifoBytes = 0, g_draws = 0, g_vertices = 0;
uint32_t g_frames = 0, g_maxVcnt = 0, g_arrayBases = 0;
uint64_t g_invalVtx = 0;      /* CP 0x48: aurora drops every cached array range */
uint64_t g_arrayBytes = 0;    /* what the adapter asks aurora to upload per invalidation */
uint64_t g_scissorWrites = 0; /* BP 0x20/0x21/0x59 translated through the +342 view bias */
uint64_t g_texObjs = 0;       /* GX_AURORA_LOAD_TEXOBJ commands synthesised from BP image0/image3 */
uint64_t g_wrapFix = 0;       /* reserved GX wrap mode 3 mapped to MIRROR (aurora FATALs on 3) */
int g_scissorDumps = 0;
int g_maxCmds = -1;
/* 5c.46 AP-BM: --probe-at-cmd N inserts the probe EFB copy *inside* the last replayed frame, right
 * after command N, instead of at the end of it. --max-cmds truncates a frame, so it can only show
 * the EFB between frames; the composite tail of guest 2801 rewrites the whole EFB in four draws
 * (5 806 additive upscale, 5 807/5 808 replace into a 320x224 corner, 5 809/5 810 full-screen
 * replace), and the question "which of them leaves the blur in the layer" needs the EFB at each of
 * them, in one full 8-frame run with the real history. The probe copy itself is an ordinary EFB copy
 * into a scratch destination, so the readback path is the byte-verified one. */
int g_probeAtCmd = -1;
bool g_probeInserted = false;
const std::vector<uint8_t>* g_probeCmd = nullptr;

struct CmdTrace {
  uint32_t offset = 0;
  uint8_t opcode = 0;
};
CmdTrace g_trace[16];
int g_traceCount = 0;
void trace_cmd(uint32_t offset, uint8_t opcode) {
  g_trace[g_traceCount % 16] = {offset, opcode};
  ++g_traceCount;
}
void dump_trace() {
  const int count = g_traceCount < 16 ? g_traceCount : 16;
  std::fprintf(stderr, "[replay] last %d command(s):\n", count);
  for (int k = 0; k < count; ++k) {
    const auto& e = g_trace[(g_traceCount - count + k) % 16];
    std::fprintf(stderr, "  offset %u opcode 0x%02X\n", e.offset, e.opcode);
  }
}

bool load_capture(const char* path, Capture& cap, std::string& err) {
  FILE* f = std::fopen(path, "rb");
  if (!f) {
    err = "cannot open capture";
    return false;
  }
  std::fseek(f, 0, SEEK_END);
  const long size = std::ftell(f);
  std::fseek(f, 0, SEEK_SET);
  if (size <= 16) {
    std::fclose(f);
    err = "capture is empty";
    return false;
  }
  g_file.resize(static_cast<size_t>(size));
  const bool ok = std::fread(g_file.data(), 1, g_file.size(), f) == g_file.size();
  std::fclose(f);
  if (!ok) {
    err = "short read";
    return false;
  }
  if (std::memcmp(g_file.data(), "TLSGXCP2", 8) != 0) {
    err = "bad capture magic (expected TLSGXCP2)";
    return false;
  }
  std::memcpy(&cap.frameFrom, g_file.data() + 8, 4);
  std::memcpy(&cap.frameTo, g_file.data() + 12, 4);

  size_t pos = 16;
  FrameChunk* current = nullptr;
  while (pos + 5 <= g_file.size()) {
    const uint8_t tag = g_file[pos];
    uint32_t len = 0;
    std::memcpy(&len, g_file.data() + pos + 1, 4);
    const size_t body = pos + 5;
    if (body + len > g_file.size()) {
      err = "truncated record";
      return false;
    }
    const uint8_t* payload = g_file.data() + body;
    if (tag == TLS_GXCAP_TAG_FRAME_BEGIN) {
      uint32_t frame = 0;
      std::memcpy(&frame, payload, 4);
      cap.frames.push_back(FrameChunk{});
      cap.frames.back().frame = frame;
      current = &cap.frames.back();
      ++g_frames;
    } else if (tag == TLS_GXCAP_TAG_FRAME_END) {
      current = nullptr;
    } else if (tag == TLS_GXCAP_TAG_FIFO) {
      if (current) current->chunks.emplace_back(payload, len);
      g_fifoBytes += len;
    } else if (tag == TLS_GXCAP_TAG_MEM) {
      MemPlane plane{};
      std::memcpy(&plane.base, payload, 4);
      std::memcpy(&plane.size, payload + 4, 4);
      plane.data = payload + 8;
      if (plane.size + 8 != len) {
        err = "MEM record length mismatch";
        return false;
      }
      cap.memory.push_back(plane);
    } else if (tag == TLS_GXCAP_TAG_COPY && len >= 24) {
      CopyRecord rec{};
      rec.frame = current ? current->frame : 0;
      std::memcpy(&rec.dst, payload + 0, 4);
      std::memcpy(&rec.w, payload + 4, 4);
      std::memcpy(&rec.h, payload + 8, 4);
      std::memcpy(&rec.fmt, payload + 12, 4);
      std::memcpy(&rec.vmark, payload + 16, 4);
      std::memcpy(&rec.size, payload + 20, 4);
      rec.bytes = payload + 24;
      if (rec.size + 24 == len) cap.copies.push_back(rec);
    }
    pos = body + len;
  }
  return true;
}

/* MEM1 is visible at 0x80000000 (cached) and 0xC0000000 (uncached); MEM2 at 0x90000000 and
 * 0xD0000000, plus its physical alias 0x10000000. The stream carries the guest's own pointers and
 * the game really does use the aliases (the first replay attempt died reading 0x12739B40, i.e.
 * MEM2 + 0x02739B40), so every view is mapped from ONE section: the aliases are the same physical
 * memory, exactly as on hardware. */
bool map_guest_region(uint32_t cachedBase, uint32_t uncachedBase, uint32_t size, const MemPlane& plane,
                      std::string& err) {
  HANDLE section = CreateFileMappingW(INVALID_HANDLE_VALUE, nullptr, PAGE_READWRITE, 0, size, nullptr);
  if (!section) {
    err = "CreateFileMapping failed";
    return false;
  }
  void* cached = MapViewOfFileEx(section, FILE_MAP_ALL_ACCESS, 0, 0, size,
                                 reinterpret_cast<LPVOID>(static_cast<uintptr_t>(cachedBase)));
  if (!cached) {
    err = "MapViewOfFileEx at the cached base failed (address in use)";
    CloseHandle(section);
    return false;
  }
  void* uncached = MapViewOfFileEx(section, FILE_MAP_ALL_ACCESS, 0, 0, size,
                                   reinterpret_cast<LPVOID>(static_cast<uintptr_t>(uncachedBase)));
  std::memcpy(cached, plane.data, size);
  std::printf("[replay] MEM 0x%08X..0x%08X = %u bytes; alias 0x%08X..0x%08X %s\n", cachedBase,
              cachedBase + size, size, uncachedBase, uncachedBase + size,
              uncached ? "mapped" : "(unavailable)");
  if (cachedBase == 0x90000000u) {
    void* physical = MapViewOfFileEx(section, FILE_MAP_ALL_ACCESS, 0, 0, size,
                                     reinterpret_cast<LPVOID>(static_cast<uintptr_t>(0x10000000u)));
    std::printf("[replay] MEM2 physical alias 0x10000000..0x%08X %s\n", 0x10000000u + size,
                physical ? "mapped" : "(unavailable)");
  }
  return true;
}

uint32_t gx_tex_size(uint32_t w, uint32_t h, uint32_t fmt) {
  const uint32_t bpp = (fmt == 6 || fmt == 3 || fmt == 4) ? 4u : 2u; /* RGBA8 vs 16bpp */
  return ((w + 3) / 4) * ((h + 3) / 4) * 16u * bpp;
}

void write_ppm(const char* path, const uint8_t* rgba, uint32_t w, uint32_t h) {
  FILE* f = std::fopen(path, "wb");
  if (!f) {
    std::fprintf(stderr, "[replay] cannot write %s\n", path);
    return;
  }
  std::fprintf(f, "P6\n%u %u\n255\n", w, h);
  for (uint32_t i = 0; i < w * h; ++i) std::fwrite(rgba + i * 4, 1, 3, f);
  std::fclose(f);
  std::printf("[replay] wrote %s (%ux%u)\n", path, w, h);
}

void append_u8(std::vector<uint8_t>& o, uint8_t v) { o.push_back(v); }
void append_u16(std::vector<uint8_t>& o, uint16_t v) {
  o.push_back(static_cast<uint8_t>(v >> 8));
  o.push_back(static_cast<uint8_t>(v));
}
void append_u32(std::vector<uint8_t>& o, uint32_t v) {
  o.push_back(static_cast<uint8_t>(v >> 24));
  o.push_back(static_cast<uint8_t>(v >> 16));
  o.push_back(static_cast<uint8_t>(v >> 8));
  o.push_back(static_cast<uint8_t>(v));
}
void append_u64(std::vector<uint8_t>& o, uint64_t v) {
  append_u32(o, static_cast<uint32_t>(v >> 32));
  append_u32(o, static_cast<uint32_t>(v));
}

/* -------------------------------------------------------------------------------------------
 * THE ADAPTER: the two register classes aurora deliberately does not decode.
 *
 * aurora decodes the whole BP/CP/XF register file (lib/gx/regs.cpp) except:
 *  1. EFB copy setup - BP 0x49/0x4A (TEXCOPYSRC), 0x4B (TEXCOPYDST), 0x4D (pitch) are
 *     bp_unhandled; the geometry arrives through GX_AURORA_LOAD_COPY_SRC/_DST/_DEST, which is what
 *     aurora's own GXSetTexCopySrc/Dst emit. The 0x52 trigger IS decoded (bp_efb_copy->copy_tex).
 *  2. Array bases - CP 0xA0..0xAF is cp_arraybase_unsupported ("Use GX_AURORA_LOAD_ARRAYBASE
 *     instead"): a GX array base is a physical address, a recompiler hands over a mapped one plus
 *     a size and an endianness flag. This game needs it: most of its 1.59 M draws are indexed.
 * The destination size derivation (dst_w = pitch*8/bpp, dst_h = src_h/step, pitch*16 for a 16bpp
 * linear XFO copy) is the same one recomp/gfx_d3d11.c uses, measured against the guest's own
 * pitch/dst pairs in 5c.17/5c.23 - not re-invented here.
 * ----------------------------------------------------------------------------------------- */
constexpr uint8_t GX_AURORA_OPCODE = 0x50; /* include/dolphin/gx/GXCommandList.h */
constexpr uint16_t AURORA_LOAD_ARRAYBASE = 0x0010;
constexpr uint16_t AURORA_LOAD_TEXOBJ = 0x0030;
constexpr uint16_t AURORA_LOAD_COPY_SRC = 0x0035;
constexpr uint16_t AURORA_LOAD_COPY_DST = 0x0036;
constexpr uint16_t AURORA_LOAD_COPY_DEST = 0x0037;

/* THE FOURTH REGISTER CLASS: the texture object.
 *
 * aurora's raw BP path (lib/gx/regs.cpp bp_tex) decodes mode0/mode1/image0/image3 into the shadow
 * GXTexObj_, but it never sets `data` - the host pointer. That only arrives through
 * GX_AURORA_LOAD_TEXOBJ, which aurora's own GXLoadTexObj emits. A captured hardware stream carries
 * the texture address in BP image3 as (physical >> 5), so a replay that forwards BP 0x80-0x97
 * gives aurora a texture with has_data() == false: resolve_sampled_textures() then binds no handle
 * and every textured TEV stage samples 0 - the frame renders, and renders black. (Measured:
 * 5c.46 AP-AN, with the scissor and viewport bias already translated.)
 *
 * image3 decoding is the same one recomp/gfx_d3d11.c uses: phys = (val & 0xFFFFFF) << 5, MEM1 for
 * phys < 0x10000000, MEM2 above, expressed through the cached aliases the harness maps. */
struct TexState {
  uint32_t image0 = 0xFFFFFFFFu;
  uint32_t image3 = 0;
  uint32_t mode0 = 0;
  bool have = false;
  bool dirty = false;
};

uint32_t guest_addr_for_image3(uint32_t image3) {
  const uint32_t phys = (image3 & 0xFFFFFFu) << 5;
  if (phys >= 0x10000000u) return 0x90000000u | (phys & 0x0FFFFFFFu);
  return 0x80000000u | (phys & 0x0FFFFFFFu);
}

void emit_texobj(std::vector<uint8_t>& out, uint32_t mapId, const TexState& t) {
  const uint32_t width = (t.image0 & 0x3FFu) + 1;
  const uint32_t height = ((t.image0 >> 10) & 0x3FFu) + 1;
  const uint32_t format = (t.image0 >> 20) & 0xFu;
  append_u8(out, GX_AURORA_OPCODE);
  append_u16(out, AURORA_LOAD_TEXOBJ);
  append_u8(out, static_cast<uint8_t>(mapId));
  append_u64(out, static_cast<uint64_t>(guest_addr_for_image3(t.image3)));
  append_u32(out, width);
  append_u32(out, height);
  append_u32(out, format);
  append_u32(out, 0); /* tlut slot: this game loads no TLUTs in the captured window */
  append_u8(out, 0);  /* no mips/no-cache flag */
  /* TLS_AURORA_TEXOBJID=1 re-tests AP-BG's texture-identity change ON A FULL FEED. AP-BG measured
   * "per-texture identity changed the field readback by 0.00" and reverted it - but that measurement
   * ran while the live tap was still truncated by the fast FIFO path (5c.46 AP-BI: 203 draws per fed
   * frame instead of 28 372), so the field it sampled had almost no texturing in it and the test could
   * not have seen a difference. AP-BK has since shown the composite tail's copy CONTENT and sample
   * SIZES are both right, which leaves texture identity as one of the unexcluded causes. This gives
   * every texture object a distinct id (its guest address) and a non-zero data version, so aurora's
   * per-slot comparison cannot treat two different textures as the same object. Default off, so every
   * earlier measurement keeps its meaning. */
  {
    static int sTexObjId = -1;
    if (sTexObjId < 0) sTexObjId = (std::getenv("TLS_AURORA_TEXOBJID") != nullptr) ? 1 : 0;
    if (sTexObjId) {
      append_u32(out, guest_addr_for_image3(t.image3)); /* texObjId = the guest address */
      append_u32(out, 1);                              /* texDataVersion */
    } else {
      append_u32(out, 0); /* texObjId */
      append_u32(out, 0); /* texDataVersion */
    }
  }
  ++g_texObjs;
  if (g_texObjs <= 6) {
    std::printf("[replay] texobj map %u -> 0x%08X %ux%u fmt %u\n", mapId, guest_addr_for_image3(t.image3), width,
                height, format);
  }
  /* TLS_AURORA_TEXBIND=<addr>[,<addr>...]: one line per bind of a LISTED address, with the size and
   * format aurora is given. THE QUESTION IT ANSWERS (5c.46 AP-BK): the composite tail writes the SAME
   * destinations at several sizes (frame 2801 copies 0x9038D1C0 as 80x56, then 320x224, ...), and the
   * layer's own per-copy means and aurora's readback of two of those copies agree to 5-13 %, so the
   * copy CONTENT is not the difference - which leaves the SIZE the composite quad samples. The first
   * 6 binds were all the log above printed, which is why this needs to be address-keyed. Inert unless
   * set. */
  {
    static char sBindList[512];
    static int sBindLoaded = -1;
    if (sBindLoaded < 0) {
      sBindLoaded = 0;
      const char* e = std::getenv("TLS_AURORA_TEXBIND");
      if (e != nullptr && *e) {
        std::snprintf(sBindList, sizeof(sBindList), "%s", e);
        sBindLoaded = 1;
      }
    }
    if (sBindLoaded) {
      const uint32_t addr = guest_addr_for_image3(t.image3);
      char pat[16];
      std::snprintf(pat, sizeof(pat), "0x%08X", addr);
      if (std::strstr(sBindList, pat) != nullptr) {
        std::printf("[texbind] #%u map %u addr 0x%08X %ux%u fmt %u\n", g_texObjs, mapId, addr, width, height,
                    format);
        std::fflush(stdout);
      }
    }
  }
  /* TLS_AURORA_TEX_BYTES=<n>: print the first bytes of the guest memory the texobj points at, for the
   * first <n> texobjs. THE QUESTION IT ANSWERS (5c.46 AP-BG): after culling, depth, the raster channel,
   * the texture-cache identity and the colour-update enable are all excluded, the remaining fork is
   * "the texels are not there" vs "aurora does not read them". If these bytes are non-zero and look
   * like the texture (CMPR blocks for fmt 14), then the guest content is present at the address the
   * adapter emitted and aurora's upload/sampling is at fault; if they are all zero, the image3 decode
   * is pointing at the wrong memory and the bug is the address, not the renderer.
   *
   * Dereferences through the guest plane the adapter has already mapped, so the range is checked
   * first - a bad decode must not crash a run. Inert unless set. */
  {
    static int sBytesN = -2, sBytesDone = 0;
    if (sBytesN == -2) {
      const char* e = std::getenv("TLS_AURORA_TEX_BYTES");
      sBytesN = (e != nullptr && std::atoi(e) > 0) ? std::atoi(e) : 0;
    }
    if (sBytesN > 0 && sBytesDone < sBytesN) {
      const uint32_t addr = guest_addr_for_image3(t.image3);
      const bool mapped = (addr >= 0x80000000u && addr < 0x81800000u) || (addr >= 0x90000000u && addr < 0x94000000u);
      if (mapped) {
        const auto* p = reinterpret_cast<const uint8_t*>(static_cast<uintptr_t>(addr));
        unsigned nz = 0;
        for (int k = 0; k < 64; ++k) nz += (p[k] != 0) ? 1u : 0u;
        std::printf("[texbytes] map %u 0x%08X %ux%u fmt %u nz=%u/64 first16=", mapId, addr, width, height, format,
                    nz);
        for (int k = 0; k < 16; ++k) std::printf("%02X", p[k]);
        std::printf("\n");
        std::fflush(stdout);
      } else {
        std::printf("[texbytes] map %u 0x%08X fmt %u NOT MAPPED in this process\n", mapId, addr, format);
        std::fflush(stdout);
      }
      ++sBytesDone;
    }
  }
}

struct CopyRegs {
  uint32_t srcX0 = 0, srcY0 = 0, srcX1 = 0, srcY1 = 0;
  bool haveSrc = false;
  uint32_t dstAddr = 0, pitch = 0;
};

uint32_t bytes_per_pixel(uint32_t fmt, bool xfb) {
  if (xfb) return 2;
  switch (fmt) {
  case 6: case 12: return 4;
  case 4: case 10: case 5: case 11: case 3: case 9: return 2;
  case 7: case 8: case 0: return 1;
  default: return 4;
  }
}

/* GX_AURORA_LOAD_ARRAYBASE carries a SIZE, and aurora pushes exactly that many bytes of the array
 * into its storage buffer on first use (lib/gx/command_processor.cpp: `push_storage(array.data,
 * array.size)`). The first version of this adapter passed "the rest of the MEM region" - up to
 * 64 MiB per array - and that, not aurora, is what made a frame need > 144 MiB of storage and
 * looked like an aurora ceiling. The truth is per-array: an array is addressed by 8- or 16-bit
 * indices, so the bytes any draw can reach are `index_limit * stride`. The cap matters far more
 * than it looks: a CP INVAL_VTX command clears aurora's cached array ranges, so the NEXT draw
 * re-uploads every indexed array at the declared size - 12 arrays x 1 MiB per invalidation, times
 * ~15 invalidations a frame, is the 193 MiB the measurements below show. 128 KiB per array keeps
 * a frame's array traffic around 10 MiB while still covering `index * stride` for this game's
 * 498-vertex-maximum draws. */
constexpr uint32_t ARRAY_UPLOAD_CAP = 128u << 10;

uint32_t array_size_for(uint32_t addr, uint8_t stride) {
  uint32_t region_end = 0;
  if (addr >= 0x80000000u && addr < 0x84000000u) region_end = 0x84000000u;
  else if (addr >= 0x90000000u && addr < 0x94000000u) region_end = 0x94000000u;
  else return 1u << 20;
  const uint32_t avail = region_end - addr;
  /* 65536 covers a 16-bit index at any stride; the 1 MiB cap is the per-array budget. */
  uint32_t want = stride != 0 ? 65536u * stride : ARRAY_UPLOAD_CAP;
  if (want > ARRAY_UPLOAD_CAP) want = ARRAY_UPLOAD_CAP;
  uint32_t size = want < avail ? want : avail;
  if (size == 0) size = 1;
  return size;
}

void emit_copy_state(std::vector<uint8_t>& out, const CopyRegs& regs, uint32_t exec) {
  const uint32_t tpf = (exec >> 3) & 0xFu;
  const bool xfb = ((exec >> 14) & 1u) != 0;
  const uint32_t fmt = tpf / 2u + (tpf & 1u) * 8u;
  const uint32_t srcW = regs.srcX1 >= regs.srcX0 ? regs.srcX1 - regs.srcX0 + 1 : 0;
  const uint32_t srcH = regs.srcY1 >= regs.srcY0 ? regs.srcY1 - regs.srcY0 + 1 : 0;
  const uint32_t bpp = bytes_per_pixel(fmt, xfb);
  uint32_t dstW = 0, dstH = 0;
  if (xfb) {
    dstW = regs.pitch * 16u;
    dstH = srcH;
  } else if (regs.pitch != 0) {
    dstW = (regs.pitch * 8u) / bpp;
    if (dstW == 0 || dstW > srcW) dstW = srcW;
    uint32_t step = (dstW != 0 && srcW % dstW == 0) ? srcW / dstW : 1;
    if (step == 0) step = 1;
    dstH = srcH / step;
  } else {
    dstW = (srcW + 1) / 2;
    dstH = (srcH + 1) / 2;
  }
  if (dstW == 0) dstW = 1;
  if (dstH == 0) dstH = 1;
  append_u8(out, GX_AURORA_OPCODE);
  append_u16(out, AURORA_LOAD_COPY_SRC);
  append_u32(out, regs.srcX0);
  append_u32(out, regs.srcY0);
  append_u32(out, srcW);
  append_u32(out, srcH);
  append_u8(out, GX_AURORA_OPCODE);
  append_u16(out, AURORA_LOAD_COPY_DST);
  append_u32(out, dstW);
  append_u32(out, dstH);
  append_u32(out, fmt);
  append_u8(out, 0); /* mipmap */
  append_u8(out, GX_AURORA_OPCODE);
  append_u16(out, AURORA_LOAD_COPY_DEST);
  append_u64(out, static_cast<uint64_t>(regs.dstAddr));
}

/* The EFB-copy payload is the hardware's 4x4 tile layout: per 64-byte tile, 32 bytes of (A,R)
 * pairs then 32 bytes of (G,B) pairs, tiles in row-major order - the same layout copycmp.py and the
 * synthetic verifier check. De-tile to a PPM so the picture can be looked at. */
void write_probe_ppm(const char* path, const uint8_t* bytes, uint32_t w, uint32_t h) {
  FILE* f = std::fopen(path, "wb");
  if (!f) {
    std::fprintf(stderr, "[replay] cannot write %s\n", path);
    return;
  }
  std::fprintf(f, "P6\n%u %u\n255\n", w, h);
  const uint32_t tilesX = w / 4;
  for (uint32_t y = 0; y < h; ++y) {
    for (uint32_t x = 0; x < w; ++x) {
      const size_t tile = static_cast<size_t>(y / 4) * tilesX + (x / 4);
      const uint8_t* t = bytes + tile * 64;
      const uint32_t idx = ((y % 4) * 4 + (x % 4)) * 2;
      const uint8_t r = t[idx + 1];
      const uint8_t g = t[32 + idx + 0];
      const uint8_t b = t[32 + idx + 1];
      std::fputc(r, f);
      std::fputc(g, f);
      std::fputc(b, f);
    }
  }
  std::fclose(f);
  std::printf("[replay] wrote %s (%ux%u, de-tiled from the EFB copy payload)\n", path, w, h);
}

/* Vertex-format mirror so the adapter can walk to the next command. The layout is ported from the
 * logic the hand-rolled layer already validated (recomp/gx_pipeline.c get_vtx_attr_size) and
 * cross-checked against aurora's own decode (lib/gx/regs.cpp cp_vat_a/b/c). Attribute indices:
 * 0 = PNMTXIDX, 1..8 = TEXn matrix indices, 9 = POS, 10 = NRM, 11 = CLR0, 12 = CLR1, 13..20 = TEX0..7. */
struct StreamState {
  uint8_t vtxDesc[21] = {};
  struct AttrFmt {
    uint8_t cnt = 0, type = 0, frac = 0;
  };
  AttrFmt vtxFmt[8][21] = {};
  uint8_t strides[21] = {};
  uint32_t base[21] = {};
  bool baseKnown[21] = {};
  CopyRegs copy;
  TexState tex[8];

  void apply_cp(uint8_t reg, uint32_t val) {
    if (reg == 0x50) {
      vtxDesc[0] = static_cast<uint8_t>(val & 1);
      for (int i = 0; i < 8; ++i) vtxDesc[1 + i] = static_cast<uint8_t>((val >> (1 + i)) & 1);
      vtxDesc[9] = static_cast<uint8_t>((val >> 9) & 3);
      vtxDesc[10] = static_cast<uint8_t>((val >> 11) & 3);
      vtxDesc[11] = static_cast<uint8_t>((val >> 13) & 3);
      vtxDesc[12] = static_cast<uint8_t>((val >> 15) & 3);
    } else if (reg == 0x60) {
      for (int i = 0; i < 8; ++i) vtxDesc[13 + i] = static_cast<uint8_t>((val >> (i * 2)) & 3);
    } else if (reg >= 0x70 && reg <= 0x77) { /* VAT A: POS, NRM, CLR0, CLR1, TEX0 */
      auto& f = vtxFmt[reg - 0x70];
      f[9] = {static_cast<uint8_t>(val & 1), static_cast<uint8_t>((val >> 1) & 7),
              static_cast<uint8_t>((val >> 4) & 0x1F)};
      const uint32_t nbt3 = (val >> 31) & 1;
      f[10] = {static_cast<uint8_t>(nbt3 ? 2 : ((val >> 9) & 1)), static_cast<uint8_t>((val >> 10) & 7), 0};
      f[11] = {static_cast<uint8_t>((val >> 13) & 1), static_cast<uint8_t>((val >> 14) & 7), 0};
      f[12] = {static_cast<uint8_t>((val >> 17) & 1), static_cast<uint8_t>((val >> 18) & 7), 0};
      f[13] = {static_cast<uint8_t>((val >> 21) & 1), static_cast<uint8_t>((val >> 22) & 7),
               static_cast<uint8_t>((val >> 25) & 0x1F)};
    } else if (reg >= 0x80 && reg <= 0x87) { /* VAT B: TEX1..TEX4 (TEX4 frac is in VAT C) */
      auto& f = vtxFmt[reg - 0x80];
      for (int i = 0; i < 3; ++i) {
        const uint32_t b = i * 9;
        f[14 + i] = {static_cast<uint8_t>((val >> b) & 1), static_cast<uint8_t>((val >> (b + 1)) & 7),
                     static_cast<uint8_t>((val >> (b + 4)) & 0x1F)};
      }
      f[17] = {static_cast<uint8_t>((val >> 27) & 1), static_cast<uint8_t>((val >> 28) & 7), 0};
    } else if (reg >= 0xB0 && reg <= 0xBF) { /* array strides: attr = 9 + (reg - 0xB0) */
      const uint8_t attr = static_cast<uint8_t>(9 + (reg - 0xB0));
      if (attr <= 20) strides[attr] = static_cast<uint8_t>(val);
    } else if (reg >= 0x90 && reg <= 0x97) { /* VAT C: TEX4 frac, TEX5..TEX7 */
      auto& f = vtxFmt[reg - 0x90];
      f[17].frac = static_cast<uint8_t>(val & 0x1F);
      for (int i = 0; i < 3; ++i) {
        const uint32_t b = 5 + i * 9;
        f[18 + i] = {static_cast<uint8_t>((val >> b) & 1), static_cast<uint8_t>((val >> (b + 1)) & 7),
                     static_cast<uint8_t>((val >> (b + 4)) & 0x1F)};
      }
    }
  }

  static uint32_t elem_size(uint8_t t) {
    switch (t & 7) {
    case 0: case 1: return 1;
    case 2: case 3: return 2;
    default: return 4;
    }
  }

  uint32_t attr_size(uint8_t fmt, uint8_t attr) const {
    const uint8_t type = vtxDesc[attr];
    if (type == 0) return 0;
    if (type == 2) return 1;
    if (type == 3) return 2;
    const auto& f = vtxFmt[fmt & 7][attr];
    if (attr <= 8) return 1;
    if (attr == 9) return ((f.cnt & 1) ? 3u : 2u) * elem_size(f.type);
    if (attr == 10) return ((f.cnt == 2) ? 9u : 3u) * elem_size(f.type);
    if (attr == 11 || attr == 12) {
      switch (f.type & 7) {
      case 0: case 3: return 2;
      case 1: case 4: return 3;
      default: return 4;
      }
    }
    return ((f.cnt & 1) ? 2u : 1u) * elem_size(f.type);
  }

  uint32_t vertex_size(uint8_t fmt) const {
    uint32_t n = 0;
    for (uint8_t a = 0; a <= 20; ++a) n += attr_size(fmt, a);
    return n;
  }
};

/* `begin`..`limit` is the slice of the frame to rewrite: a heavy frame exceeds aurora's
 * per-frame staging budget, so the replay can feed it in command-aligned slices, one aurora frame
 * each (the EFB itself persists - gfx::efb::prepare_frame only resizes it - so the picture still
 * accumulates). `consumed` returns where the slice stopped, always on a command boundary. */
/* Attribute byte offsets inside one vertex, in hardware order (attr 0..20). */
void attr_offsets(const StreamState& st, uint8_t fmt, uint32_t out[21]) {
  uint32_t off = 0;
  for (uint8_t a = 0; a <= 20; ++a) {
    out[a] = off;
    off += st.attr_size(fmt, a);
  }
}

/* Emit GX_AURORA_LOAD_ARRAYBASE for every indexed attribute this draw uses, with a size derived
 * from the largest index in the draw's payload instead of a guess about the array. */
void emit_draw_array_bases(std::vector<uint8_t>& out, StreamState& st, uint8_t fmt, uint32_t vcnt,
                           const uint8_t* payload) {
  uint32_t offs[21];
  attr_offsets(st, fmt, offs);
  for (uint8_t attr = 9; attr <= 20; ++attr) {
    const uint8_t type = st.vtxDesc[attr];
    if (type != 2 && type != 3) continue; /* only INDEX8 / INDEX16 read an array */
    if (!st.baseKnown[attr]) continue;
    const uint32_t width = type == 2 ? 1u : 2u;
    uint32_t maxIndex = 0;
    bool any = false;
    const uint8_t* p = payload + offs[attr];
    const uint32_t stride = st.vertex_size(fmt);
    for (uint32_t v = 0; v < vcnt; ++v, p += stride) {
      const uint32_t idx = width == 1 ? p[0] : static_cast<uint32_t>((p[0] << 8) | p[1]);
      if (!any || idx > maxIndex) maxIndex = idx;
      any = true;
    }
    if (!any) continue;
    const uint32_t elem = st.attr_size(fmt, attr); /* bytes one element occupies */
    uint32_t strideBytes = st.strides[attr];
    if (strideBytes == 0) strideBytes = elem;
    uint32_t need = (maxIndex + 1) * strideBytes + elem;
    const uint32_t avail = array_size_for(st.base[attr], 0); /* region clamp only */
    if (need > avail) need = avail;
    append_u8(out, GX_AURORA_OPCODE);
    append_u16(out, static_cast<uint16_t>(AURORA_LOAD_ARRAYBASE + (attr - 9)));
    append_u64(out, static_cast<uint64_t>(st.base[attr]));
    append_u32(out, need);
    append_u8(out, 0); /* the guest's data is big-endian */
    g_arrayBytes += need;
    ++g_arrayBases;
  }
}

bool rewrite_frame(const uint8_t* in, uint32_t size, uint32_t begin, uint32_t limit, StreamState& st,
                   std::vector<uint8_t>& out, uint32_t& copies, uint32_t& consumed, std::string& err) {
  out.clear();
  out.reserve(size + 256);
  uint32_t i = begin;
  int cmds = 0;
  g_traceCount = 0;
  while (i < size) {
    if (i >= limit) break;
    consumed = i;
    if (g_maxCmds >= 0 && cmds >= g_maxCmds) {
      dump_trace();
      break;
    }
    const uint8_t cmd = in[i];
    ++cmds;
    if (g_probeAtCmd > 0 && cmds == g_probeAtCmd && !g_probeInserted && g_probeCmd != nullptr) {
      out.insert(out.end(), g_probeCmd->begin(), g_probeCmd->end());
      g_probeInserted = true;
      std::printf("[replay] probe copy inserted in-frame after command %d\n", cmds);
    }
    trace_cmd(i, cmd);
    if (cmd == 0x00) {
      out.push_back(cmd);
      ++i;
    } else if (cmd == 0x08) { /* CP register write */
      if (i + 6 > size) { err = "truncated CP register write"; return false; }
      const uint8_t reg = in[i + 1];
      const uint32_t val = (uint32_t(in[i + 2]) << 24) | (uint32_t(in[i + 3]) << 16) |
                           (uint32_t(in[i + 4]) << 8) | uint32_t(in[i + 5]);
      st.apply_cp(reg, val);
      if (reg >= 0xA0 && reg <= 0xAF) { /* array base: remembered, emitted per draw (see below) */
        const uint8_t attr = static_cast<uint8_t>(9 + (reg - 0xA0));
        st.base[attr] = val;
        st.baseKnown[attr] = true;
        i += 6;
        continue; /* the hardware register itself must not reach aurora (it errors on it) */
      }
      out.insert(out.end(), in + i, in + i + 6);
      i += 6;
    } else if (cmd == 0x10) { /* XF register write */
      if (i + 5 > size) { err = "truncated XF header"; return false; }
      const uint32_t words = ((uint32_t(in[i + 1]) << 8) | in[i + 2]) + 1;
      const uint32_t base = ((uint32_t(in[i + 3]) << 8) | in[i + 4]);
      const uint32_t total = 5 + words * 4;
      if (i + total > size) { err = "truncated XF payload"; return false; }
      /* THE SECOND HALF OF THE VIEW BIAS: the SDK writes the viewport origin as
       * `ox = 342 + left + width/2`, whereas aurora's own GXSetViewportJitter writes
       * `340 + left + width/2` and xf_load_viewport() subtracts 340. Feeding the hardware value
       * straight through lands the viewport at (2,2,640,448) on a 640x480 target, i.e.
       * x + width = 642 > 640: an INVALID viewport, which wgpu rejects and which silently kills
       * every draw in the pass. Subtracting 2 from ox/oy reproduces the guest's viewport exactly.
       * (Measured: 5c.46 AP-AN.) */
      const uint8_t* src = in + i;
      if (base <= 0x101Eu && base + words > 0x101Du) {
        out.insert(out.end(), in + i, in + i + 5);
        for (uint32_t w = 0; w < words; ++w) {
          const uint32_t reg = base + w;
          uint32_t word;
          std::memcpy(&word, in + i + 5 + w * 4, 4);
          if (reg == 0x101Du || reg == 0x101Eu) {
            const uint32_t bits = ((word & 0xFFu) << 24) | ((word & 0xFF00u) << 8) |
                                  ((word >> 8) & 0xFF00u) | ((word >> 24) & 0xFFu);
            float value;
            std::memcpy(&value, &bits, 4);
            value -= 2.0f;
            uint32_t newBits;
            std::memcpy(&newBits, &value, 4);
            const uint32_t swapped = ((newBits & 0xFFu) << 24) | ((newBits & 0xFF00u) << 8) |
                                     ((newBits >> 8) & 0xFF00u) | ((newBits >> 24) & 0xFFu);
            if (g_scissorDumps < 4) {
              std::printf("[replay] viewport XF 0x%04X %.3f -> %.3f\n", reg, value + 2.0f, value);
              ++g_scissorDumps;
            }
            word = swapped;
          }
          out.insert(out.end(), reinterpret_cast<const uint8_t*>(&word),
                     reinterpret_cast<const uint8_t*>(&word) + 4);
        }
        i += total;
      } else {
        out.insert(out.end(), src, src + total);
        i += total;
      }
    } else if (cmd == 0x20 || cmd == 0x28 || cmd == 0x30 || cmd == 0x38) { /* indexed XF load */
      if (i + 5 > size) { err = "truncated indexed XF load"; return false; }
      out.insert(out.end(), in + i, in + i + 5);
      i += 5;
    } else if (cmd == 0x40) {
      err = "CALL_DL present - the recorder inlines display lists";
      return false;
    } else if (cmd == 0x44 || cmd == 0x48) { /* invalidate vertex cache / perf metrics */
      if (cmd == 0x48) ++g_invalVtx;
      out.push_back(cmd);
      ++i;
    } else if (cmd == 0x61) { /* BP register write */
      if (i + 5 > size) { err = "truncated BP write"; return false; }
      const uint32_t word = (uint32_t(in[i + 1]) << 24) | (uint32_t(in[i + 2]) << 16) |
                            (uint32_t(in[i + 3]) << 8) | uint32_t(in[i + 4]);
      const uint8_t reg = static_cast<uint8_t>(word >> 24);
      const uint32_t val = word & 0xFFFFFF;
      switch (reg) {
      case 0x20:
      case 0x21:
      case 0x59:
        /* THE THIRD REGISTER CLASS: the GX view bias (+342, kViewOffset).
         *
         * The SDK writes a scissor coordinate as `left + 342` into BP 0x20/0x21 and the scissor box
         * offset as `(offset + 342) >> 1` into BP 0x59. aurora's bp_scissor() adds the box offset
         * back as `2 * field` and never subtracts the 342, so a raw hardware stream lands at
         * `left + 684`: for this game's (0,0)-(639,447) scissor that is x=684 on a 640-wide target.
         * apply_scissor() (lib/gfx/encoding.cpp) then clamps it to (640, 480, 0, 0) - a ZERO-AREA
         * scissor - and every draw in the frame is discarded with no error and no log line. That is
         * what made every replayed frame's EFB black (5c.46 AP-AN).
         *
         * aurora's own GXSetScissor writes the registers pre-subtracted (left - 342) and
         * GXSetScissorBoxOffset(0,0) writes 171, so its own API round-trips to `left`. A recompiler
         * feeding hardware bytes must do the same: emit the true coordinate and a zero box offset.
         * A non-zero box offset (scissor scrolling) is dropped here; this game writes (1024,0) and
         * every scissor rect it declares is the full 640x448 viewport, so the drop is inert - and
         * it is stated as a limitation rather than guessed away. */
        {
          uint32_t outVal = 0;
          if (reg != 0x59) {
            constexpr uint32_t kViewOffset = 342;
            const uint32_t f0 = val & 0x7FFu;         /* top / bottom, biased */
            const uint32_t f1 = (val >> 12) & 0x7FFu; /* left / right, biased */
            const uint32_t c0 = f0 > kViewOffset ? f0 - kViewOffset : 0;
            const uint32_t c1 = f1 > kViewOffset ? f1 - kViewOffset : 0;
            outVal = (c1 << 12) | c0;
            if (g_scissorDumps < 4) {
              std::printf("[replay] scissor BP 0x%02X 0x%06X -> 0x%06X (fields %u,%u -> %u,%u)\n", reg, val,
                          outVal, f0, f1, c0, c1);
              ++g_scissorDumps;
            }
          }
          out.push_back(0x61);
          append_u32(out, (uint32_t(reg) << 24) | (outVal & 0xFFFFFFu));
          ++g_scissorWrites;
          i += 5;
          continue;
        }
      /* Texture object registers (see THE FOURTH REGISTER CLASS above): remember image0/image3/
       * mode0 per map, forward the write unchanged (aurora's BP shadow wants it too), and let the
       * draw path emit GX_AURORA_LOAD_TEXOBJ for whichever maps changed. */
      case 0x80: case 0x81: case 0x82: case 0x83:
      case 0x84: case 0x85: case 0x86: case 0x87:
      case 0x88: case 0x89: case 0x8A: case 0x8B:
      case 0x94: case 0x95: case 0x96: case 0x97:
      case 0xA0: case 0xA1: case 0xA2: case 0xA3:
      case 0xA4: case 0xA5: case 0xA6: case 0xA7:
      case 0xA8: case 0xA9: case 0xAA: case 0xAB:
      case 0xB4: case 0xB5: case 0xB6: case 0xB7: {
        const bool high = reg >= 0xA0;
        const uint8_t low = high ? static_cast<uint8_t>(reg - 0xA0) : static_cast<uint8_t>(reg - 0x80);
        const uint8_t mapId = static_cast<uint8_t>((low & 3) + (high ? 4 : 0));
        const uint8_t kind = static_cast<uint8_t>(low >> 2);
        if (kind == 0) {
          /* THE FIFTH REGISTER CLASS (small): wrap mode 3 is reserved on hardware - the GX has
           * CLAMP (0), REPEAT (1) and MIRROR (2) only - but this game writes 3 in GX_TEXMODE0 for
           * some maps. aurora is strict and FATALs on it ("invalid wrap mode 3"), which kills the
           * whole replay; the picture is what matters, so map the reserved value to MIRROR (its
           * closest defined neighbour) and count it. Measured: 5c.46 AP-AN, frames 2600-2601. */
          uint32_t mode0 = val;
          bool fixed = false;
          if ((mode0 & 3u) == 3u) {
            mode0 = (mode0 & ~3u) | 2u;
            fixed = true;
          }
          if (((mode0 >> 2) & 3u) == 3u) {
            mode0 = (mode0 & ~0xCu) | 0x8u;
            fixed = true;
          }
          if (fixed) {
            if (g_wrapFix++ < 4) {
              std::printf("[replay] wrap mode 3 (reserved) in BP 0x%02X 0x%06X -> 0x%06X (mapped to MIRROR)\n", reg, val,
                          mode0);
            }
            out.push_back(0x61);
            append_u32(out, (uint32_t(reg) << 24) | (mode0 & 0xFFFFFFu));
            st.tex[mapId].mode0 = mode0;
            i += 5;
            continue;
          }
          st.tex[mapId].mode0 = val;
        } else if (kind == 2) {
          st.tex[mapId].image0 = val;
          st.tex[mapId].dirty = true;
        } else if (kind == 5) {
          st.tex[mapId].image3 = val;
          st.tex[mapId].dirty = true;
          st.tex[mapId].have = true;
        }
        out.insert(out.end(), in + i, in + i + 5);
        i += 5;
        continue;
      }
      case 0x49:
        st.copy.srcX0 = val & 0x3FF;
        st.copy.srcY0 = (val >> 10) & 0x3FF;
        st.copy.haveSrc = true;
        i += 5;
        continue;      case 0x4A:
        st.copy.srcX1 = val & 0x3FF;
        st.copy.srcY1 = (val >> 10) & 0x3FF;
        st.copy.haveSrc = true;
        i += 5;
        continue;
      case 0x4B:
        st.copy.dstAddr = static_cast<uint32_t>(0x80000000u + ((val & 0xFFFFFFu) << 5));
        i += 5;
        continue;
      case 0x4D:
        st.copy.pitch = val & 0x3FF;
        i += 5;
        continue;
      case 0x52:
        if (st.copy.haveSrc) {
          emit_copy_state(out, st.copy, val);
          ++copies;
        }
        out.insert(out.end(), in + i, in + i + 5);
        break;
      default:
        out.insert(out.end(), in + i, in + i + 5);
        break;
      }
      i += 5;
    } else if (cmd >= 0x80) { /* draw */
      if (i + 3 > size) { err = "truncated draw header"; return false; }
      const uint8_t fmt = cmd & 7;
      const uint32_t vcnt = (uint32_t(in[i + 1]) << 8) | in[i + 2];
      const uint32_t vtxSize = st.vertex_size(fmt);
      /* Emit the array bases this draw actually addresses, sized from the indices in its own
       * payload. WHY per draw and not per CP write (measured, 5c.46 AP-AM): a GX array base
       * carries no length, aurora uploads exactly the declared size on first use, and
       * CP INVAL_VTX drops every cached range - so declaring "the rest of MEM" cost
       * 3 616 538 624 bytes of array declarations per frame (3 449 bases x ~1 MiB, re-uploaded
       * after each of the frame's 10 invalidations). Sizing from the real indices makes the same
       * frame's array traffic a few megabytes. */
      if (i + 3 + uint64_t(vcnt) * vtxSize <= size) {
        emit_draw_array_bases(out, st, fmt, vcnt, in + i + 3);
      }
      /* Any texture whose image0/image3 changed since the last draw gets its host pointer handed
       * to aurora now (see THE FOURTH REGISTER CLASS). */
      for (int m = 0; m < 8; ++m) {
        if (st.tex[m].dirty && st.tex[m].have && st.tex[m].image0 != 0xFFFFFFFFu) {
          emit_texobj(out, static_cast<uint32_t>(m), st.tex[m]);
          st.tex[m].dirty = false;
        }
      }
      const uint64_t total = 3ull + uint64_t(vcnt) * vtxSize;
      if (vtxSize == 0 || i + total > size) {
        err = "draw with unknown vertex size at offset " + std::to_string(i) + " (fmt " +
              std::to_string(fmt) + ", vcnt " + std::to_string(vcnt) + ", vtxsize " +
              std::to_string(vtxSize) + ", frame " + std::to_string(size) + ")";
        return false;
      }
      /* The byte right after a draw must be a command opcode; if it is not, the vertex-size
       * mirror disagreed with the guest's format and everything after it is noise. */
      if (i + total < size) {
        const uint8_t next = in[i + total];
        const bool ok = next == 0x00 || next == 0x08 || next == 0x10 || next == 0x20 || next == 0x28 ||
                        next == 0x30 || next == 0x38 || next == 0x40 || next == 0x44 || next == 0x48 ||
                        next == 0x61 || (next >= 0x80 && next <= 0xBF);
        if (!ok) {
          std::fprintf(stderr, "[replay] draw desync at %u: fmt %u vcnt %u vtxsize %u next 0x%02X\n", i, fmt,
                       vcnt, vtxSize, next);
          err = "vertex-size mirror desync";
          return false;
        }
      }
      if (vcnt > g_maxVcnt) {
        g_maxVcnt = vcnt;
        std::fprintf(stderr, "[replay] largest draw so far: offset %u fmt %u vcnt %u vtxsize %u\n", i, fmt,
                     vcnt, vtxSize);
      }
      g_draws++;
      g_vertices += vcnt;
      out.insert(out.end(), in + i, in + i + total);
      i += static_cast<uint32_t>(total);
    } else {
      char buf[72];
      std::snprintf(buf, sizeof(buf), "unknown opcode 0x%02X at offset %u", cmd, i);
      err = buf;
      return false;
    }
    consumed = i;
  }
  return true;
}

/* -------------------------------------------------------------------------------------------
 * SYNTHETIC EFB-COPY PROOF (criterion 3).
 *
 * A capture of the guest's copy needs a runner run; the host's foreign load made that a one-hour
 * job this session, so the same code path is driven with a stream this harness builds itself:
 * clear the EFB to a known colour, then issue exactly the sequence the adapter emits for a guest
 * copy (LOAD_COPY_SRC/_DST/_DEST + the BP 0x52 trigger with the clear bit), and read the
 * destination back through capture_copies/get. Every texel must equal the clear colour, decoded
 * from the 4x4 tile layout - so "bytes arrive" and "bytes are the right bytes" are separate,
 * checkable statements instead of "it did not crash".
 * ----------------------------------------------------------------------------------------- */
struct SyntheticCopy {
  static constexpr uint32_t Dst = 0x90395000; /* inside mapped MEM2 */
  static constexpr uint32_t W = 64, H = 64;
  static constexpr uint8_t R = 0xC0, G = 0x80, B = 0x40, A = 0xFF;
};

void synth_bp(std::vector<uint8_t>& out, uint8_t reg, uint32_t val) {
  out.push_back(0x61);
  append_u32(out, (uint32_t(reg) << 24) | (val & 0xFFFFFF));
}

std::vector<uint8_t> build_synthetic_copy_commands() {
  /* Only the copy half: the scene itself is drawn with the public GX API (which appends to the
   * same FIFO), because reproducing GXSetProjection/GXSetVtxAttrFmt/GXSetTevOp by hand would test
   * the hand-built bytes rather than the copy path. */
  std::vector<uint8_t> out;
  CopyRegs regs{};
  regs.srcX1 = SyntheticCopy::W - 1;
  regs.srcY1 = SyntheticCopy::H - 1;
  regs.dstAddr = SyntheticCopy::Dst;
  regs.pitch = (SyntheticCopy::W * 4u) / 8u; /* dst_w = pitch*8/bpp -> W for RGBA8 */
  regs.haveSrc = true;
  const uint32_t exec = (12u << 3); /* tpf 12 = real format 6 (RGBA8); clear bit off */
  emit_copy_state(out, regs, exec);
  out.push_back(0x61);
  append_u32(out, (uint32_t(0x52) << 24) | (exec & 0xFFFFFF));
  return out;
}

/* Fill the EFB with one solid colour through the public GX API: a full-screen quad under an
 * identity orthographic projection, one channel, one TEV stage on PASSCLR. */
void synth_draw_solid_quad() {
  GXSetCopyClear(GXColor{0, 0, 0, 0xFF}, GX_MAX_Z24);
  GXSetViewport(0.f, 0.f, static_cast<f32>(SyntheticCopy::W), static_cast<f32>(SyntheticCopy::H), 0.f, 1.f);
  GXSetScissor(0, 0, SyntheticCopy::W, SyntheticCopy::H);
  GXSetCullMode(GX_CULL_NONE);
  GXSetZMode(GX_FALSE, GX_LEQUAL, GX_FALSE);
  GXSetBlendMode(GX_BM_NONE, GX_BL_ONE, GX_BL_ZERO, GX_LO_CLEAR);
  GXClearVtxDesc();
  GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
  GXSetVtxDesc(GX_VA_CLR0, GX_DIRECT);
  GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
  GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_CLR0, GX_CLR_RGBA, GX_RGBA8, 0);
  GXSetNumChans(1);
  GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_VTX, GX_SRC_VTX, GX_LIGHT_NULL, GX_DF_NONE, GX_AF_NONE);
  GXSetChanMatColor(GX_COLOR0A0, GXColor{SyntheticCopy::R, SyntheticCopy::G, SyntheticCopy::B, SyntheticCopy::A});
  GXSetChanAmbColor(GX_COLOR0A0, GXColor{0, 0, 0, 0xFF});
  GXSetNumTexGens(0);
  GXSetNumTevStages(1);
  GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
  const f32 ortho[4][4] = {{1.f, 0.f, 0.f, 0.f}, {0.f, 1.f, 0.f, 0.f}, {0.f, 0.f, 1.f, 0.f}, {0.f, 0.f, 0.f, 1.f}};
  GXSetProjection(ortho, GX_ORTHOGRAPHIC);
  GXBegin(GX_QUADS, GX_VTXFMT0, 4);
  const f32 quad[4][2] = {{-1.f, -1.f}, {1.f, -1.f}, {1.f, 1.f}, {-1.f, 1.f}};
  for (int v = 0; v < 4; ++v) {
    GXPosition3f32(quad[v][0], quad[v][1], 0.f);
    GXColor4u8(SyntheticCopy::R, SyntheticCopy::G, SyntheticCopy::B, SyntheticCopy::A);
  }
  GXEnd();
}

bool verify_synthetic_copy(const uint8_t* bytes, uint32_t size, std::string& err) {
  const uint32_t tilesX = SyntheticCopy::W / 4, tilesY = SyntheticCopy::H / 4;
  if (size != SyntheticCopy::W * SyntheticCopy::H * 4u) {
    err = "payload size " + std::to_string(size) + " != " + std::to_string(SyntheticCopy::W * SyntheticCopy::H * 4u);
    return false;
  }
  uint32_t bad = 0, checked = 0;
  uint8_t first[4] = {0, 0, 0, 0};
  for (uint32_t ty = 0; ty < tilesY; ++ty) {
    for (uint32_t tx = 0; tx < tilesX; ++tx) {
      const uint8_t* tile = bytes + static_cast<size_t>(ty * tilesX + tx) * 64;
      for (uint32_t py = 0; py < 4; ++py) {
        for (uint32_t px = 0; px < 4; ++px) {
          const uint32_t idx = (py * 4 + px) * 2;
          const uint8_t a = tile[idx + 0], r = tile[idx + 1];
          const uint8_t g = tile[32 + idx + 0], b = tile[32 + idx + 1];
          if (checked == 0) {
            first[0] = r; first[1] = g; first[2] = b; first[3] = a;
          }
          ++checked;
          if (r != SyntheticCopy::R || g != SyntheticCopy::G || b != SyntheticCopy::B) ++bad;
        }
      }
    }
  }
  std::printf("[synth] %u texel(s) checked, %u with wrong RGB; first texel rgba=(%u,%u,%u,%u), expected "
              "RGB (%u,%u,%u)\n",
              checked, bad, first[0], first[1], first[2], first[3], SyntheticCopy::R, SyntheticCopy::G,
              SyntheticCopy::B);
  if (bad) {
    err = std::to_string(bad) + " texels carry the wrong colour";
    return false;
  }
  return true;
}

int run_synthetic_copy(uint32_t fbWidth, uint32_t fbHeight, AuroraBackend backend, const char* outPath) {
  AuroraConfig config{};
  config.appName = "TLS GX replay (synthetic copy)";
  config.logCallback = &log_callback;
  config.logLevel = LOG_WARNING;
  config.desiredBackend = backend;
  config.msaa = 1;
  config.vsync = false;
  config.surface.type = AURORA_SURFACE_HEADLESS;
  config.surface.width = fbWidth;
  config.surface.height = fbHeight;
  config.surface.scale = 1.f;
  config.gxProcessingMode = GX_PROCESSING_DRAIN;
  config.mem1Size = 0;
  config.mem2Size = 0;
  char arg0[] = "tls_gx_replay";
  char* argvFake[] = {arg0, nullptr};
  const AuroraInfo info = aurora_initialize(1, argvFake, &config);
  std::printf("[synth] aurora backend=%d fb %ux%u\n", static_cast<int>(info.backend), info.windowSize.fb_width,
              info.windowSize.fb_height);
  AuroraSetViewportPolicy(AURORA_VIEWPORT_NATIVE);
  /* aurora compiles pipelines asynchronously and SKIPS draws whose pipeline is not ready yet
   * ("GX draws are skipped if their pipeline is not yet compiled" is the documented default). A
   * one-frame replay therefore renders nothing at all: every draw is dropped while its pipeline
   * is still compiling and the EFB readback comes back black. That, not a GX-state mismatch, is
   * what "aurora renders a black frame" was in this spike. */
  AuroraSetDrawsBlocking(GX_TRUE);
  AuroraSetDrawsBlocking(GX_TRUE);
  /* GXInit is what gives g_gxState its defaults - number of TEV stages, viewport, scissor, the
   * projection and matrix stacks. aurora's own GPU readback test calls it before drawing
   * (tests/gfx_readback_test.cpp: `GXInit(nullptr, 0)`); without it the state starts at
   * zero-initialised GXState, i.e. zero TEV stages and a zero-sized scissor, and every draw is
   * recorded and then writes nothing. That is what the black EFB in AP-AM item 6d was. */
  GXInit(nullptr, 0);

  /* Separate streams per consumer: a stream holds only its most recent capture, and both
   * captures use the same key otherwise. */
  AuroraReadbackStream colorStream = AuroraReadbackCreateStream();
  AuroraReadbackStream copyStream = AuroraReadbackCreateStream();
  std::vector<uint8_t> rgb(fbWidth * fbHeight * 4);
  uint32_t captureW = 0, captureH = 0;
  std::vector<uint8_t> copyPayload(SyntheticCopy::W * SyntheticCopy::H * 4u);
  const std::vector<uint8_t> copyCmd = build_synthetic_copy_commands();
  std::printf("[synth] scene: solid 0x%02X%02X%02X quad + copy of its %ux%u top-left corner; %zu copy command "
              "byte(s)\n",
              SyntheticCopy::R, SyntheticCopy::G, SyntheticCopy::B, SyntheticCopy::W, SyntheticCopy::H,
              copyCmd.size());

  if (!aurora_begin_frame()) {
    std::fprintf(stderr, "[synth] begin_frame failed\n");
    return 1;
  }
  synth_draw_solid_quad();
  aurora::gx::fifo::write_data_grow(copyCmd.data(), static_cast<uint32_t>(copyCmd.size()));
  const bool colorRequested = AuroraReadbackCaptureColor(colorStream, 1, &captureW, &captureH) == GX_TRUE;
  const AuroraReadbackCopySrc src{1, reinterpret_cast<const void*>(static_cast<uintptr_t>(SyntheticCopy::Dst))};
  const bool copyRequested = AuroraReadbackCaptureCopies(copyStream, &src, 1) == GX_TRUE;
  std::printf("[synth] colour capture %s (%ux%u); copy capture 0x%08X %s\n", colorRequested ? "accepted" : "REJECTED",
              captureW, captureH, SyntheticCopy::Dst, copyRequested ? "accepted" : "REJECTED");
  aurora_end_frame();

  bool haveColor = false, haveCopy = false;
  for (int i = 0; i < 16 && !(haveColor && haveCopy); ++i) {
    if (!aurora_begin_frame()) break;
    aurora_end_frame();
    if (colorRequested && !haveColor && captureW && captureH) {
      AuroraReadbackDest dest{1, rgb.data(), captureW * captureH * 4, GX_FALSE};
      if (AuroraReadbackGet(colorStream, &dest, 1) == GX_TRUE && dest.found == GX_TRUE) {
        haveColor = true;
        std::printf("[synth] colour readback after %d extra frame(s)\n", i + 1);
      }
    }
    if (copyRequested && !haveCopy) {
      AuroraReadbackDest dest{1, copyPayload.data(), static_cast<uint32_t>(copyPayload.size()), GX_FALSE};
      if (AuroraReadbackGet(copyStream, &dest, 1) == GX_TRUE && dest.found == GX_TRUE) {
        haveCopy = true;
        std::printf("[synth] copy readback after %d extra frame(s)\n", i + 1);
      }
    }
  }

  int rc = 0;
  if (haveCopy) {
    if (FILE* f = std::fopen("aurora_copy_synthetic.bin", "wb")) {
      std::fwrite(copyPayload.data(), 1, copyPayload.size(), f);
      std::fclose(f);
      std::printf("[synth] wrote aurora_copy_synthetic.bin (%zu bytes)\n", copyPayload.size());
    }
    std::string err;
    if (!verify_synthetic_copy(copyPayload.data(), static_cast<uint32_t>(copyPayload.size()), err)) {
      std::fprintf(stderr, "[synth] FAIL: %s\n", err.c_str());
      rc = 5;
    } else {
      std::printf("[synth] PASS: capture_copies/get delivered the destination's bytes and every texel carries "
                  "the clear colour\n");
    }
  } else {
    std::printf("[synth] FAIL: no copy readback delivered\n");
    rc = 4;
  }
  if (haveColor && captureW && captureH) {
    /* The EFB itself must be the quad's colour, otherwise the copy comparison below is vacuous. */
    uint64_t sr = 0, sg = 0, sb = 0;
    const uint32_t n = captureW * captureH;
    for (uint32_t i = 0; i < n; ++i) {
      sr += rgb[i * 4 + 0];
      sg += rgb[i * 4 + 1];
      sb += rgb[i * 4 + 2];
    }
    std::printf("[synth] EFB mean RGB = (%.2f, %.2f, %.2f), expected (%u, %u, %u)\n",
                static_cast<double>(sr) / n, static_cast<double>(sg) / n, static_cast<double>(sb) / n,
                SyntheticCopy::R, SyntheticCopy::G, SyntheticCopy::B);
    write_ppm(outPath, rgb.data(), captureW, captureH);
  } else {
    std::printf("[synth] no colour readback delivered: cannot check what the copy copied\n");
  }
  AuroraReadbackDestroyStream(colorStream);
  AuroraReadbackDestroyStream(copyStream);
  aurora_shutdown();
  return rc;
}

} // namespace
int main(int argc, char** argv) {
  std::signal(SIGABRT, sigabrt_handler);
  std::set_terminate(terminate_handler);
  if (std::getenv("TLS_REPLAY_NO_VEH") == nullptr) AddVectoredExceptionHandler(1, veh_handler);

  if (argc < 3) {
    std::fprintf(stderr, "usage: %s <capture.tlscap> <out.ppm> [options]\n", argv[0]);
    return 2;
  }
  const char* capPath = argv[1];
  const char* outPath = argv[2];
  uint32_t fbWidth = 640, fbHeight = 480;
  AuroraBackend backend = BACKEND_AUTO;
  int extraFrames = 8, stopAfter = -1, startAt = 0, copyRecord = -1, split = 1;
int probeAtCmd = -1;
  uint32_t copyDst = 0, copyW = 80, copyH = 56, copyFmt = 6, copySize = 0;
  const char* copyOut = nullptr;
  bool rawStream = false, verbose = false, parseOnly = false, syntheticCopy = false;
  bool probeCopy = false;
  const char* probePpm = nullptr;
  /* AP-AQ: dump a guest-memory range after the replay. The harness maps MEM1/MEM2 at the guest's
   * own addresses, so an EFB copy's destination bytes live right there after aurora has serviced
   * the copy - and nothing in this harness could read them back until now. That is the one
   * measurement the "aurora's copy reads back 1.9x brighter than the frame it copied" claim
   * (handover 5c.46 AP-AP item 6) was missing: it needs the copy's own payload in guest memory,
   * not the EFB probe. Format: --ram-out <addr>:<size>:<file>, e.g.
   *   --ram-out 0x905C3000:1146880:out.bin */
  uint32_t ramOutAddr = 0, ramOutSize = 0;
  const char* ramOutPath = nullptr;
  /* --ram-poison: fill the --ram-out range with 0xCD before the replay. Without it the dump
   * cannot tell aurora's copy output from the bytes the CAPTURE already contains: the capture is
   * a snapshot of the layer's guest memory, so e.g. 0x905C3000 already holds the layer's white
   * copy result and a dump of it reads 255 either way (measured: identical 100 %-255 dump at
   * --max-cmds 50045, i.e. before the game's copy, and at 50049, after it). With the poison a
   * byte still 0xCD after the replay means "this copy never wrote guest memory". */
  bool ramPoison = false;
  for (int i = 3; i < argc; ++i) {
    const char* a = argv[i];
    if (std::strcmp(a, "--fb") == 0 && i + 1 < argc) {
      std::sscanf(argv[++i], "%ux%u", &fbWidth, &fbHeight);
    } else if (std::strcmp(a, "--backend") == 0 && i + 1 < argc) {
      const char* b = argv[++i];
      backend = std::strcmp(b, "d3d12") == 0   ? BACKEND_D3D12
                : std::strcmp(b, "d3d11") == 0 ? BACKEND_D3D11
                : std::strcmp(b, "vulkan") == 0 ? BACKEND_VULKAN
                                                : BACKEND_AUTO;
    } else if (std::strcmp(a, "--extra") == 0 && i + 1 < argc) {
      extraFrames = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--stop-after") == 0 && i + 1 < argc) {
      stopAfter = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--split") == 0 && i + 1 < argc) {
      split = std::max(1, std::atoi(argv[++i]));
    } else if (std::strcmp(a, "--start-at") == 0 && i + 1 < argc) {
      startAt = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--copy-record") == 0 && i + 1 < argc) {
      copyRecord = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--copy-dst") == 0 && i + 1 < argc) {
      copyDst = static_cast<uint32_t>(std::strtoul(argv[++i], nullptr, 0));
    } else if (std::strcmp(a, "--copy-wh-fmt") == 0 && i + 1 < argc) {
      std::sscanf(argv[++i], "%ux%u:%u", &copyW, &copyH, &copyFmt);
    } else if (std::strcmp(a, "--copy-size") == 0 && i + 1 < argc) {
      copySize = static_cast<uint32_t>(std::strtoul(argv[++i], nullptr, 0));
    } else if (std::strcmp(a, "--copy-out") == 0 && i + 1 < argc) {
      copyOut = argv[++i];
    } else if (std::strcmp(a, "--parse-only") == 0) {
      parseOnly = true;
    } else if (std::strcmp(a, "--synthetic-copy") == 0) {
      syntheticCopy = true;
    } else if (std::strcmp(a, "--max-cmds") == 0 && i + 1 < argc) {
      g_maxCmds = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--probe-at-cmd") == 0 && i + 1 < argc) {
      probeAtCmd = std::atoi(argv[++i]);
    } else if (std::strcmp(a, "--probe-copy") == 0) {
      probeCopy = true;
    } else if (std::strcmp(a, "--ram-poison") == 0) {
      ramPoison = true;
    } else if (std::strcmp(a, "--probe-ppm") == 0 && i + 1 < argc) {
      probePpm = argv[++i];
    } else if (std::strcmp(a, "--ram-out") == 0 && i + 1 < argc) {
      const char* spec = argv[++i];
      /* <addr>:<size>:<file>, addr/size in C notation (0x... ok). Deliberately NOT sscanf("%i"):
       * a 32-bit guest address with the top bit set (e.g. 0x905C3000) overflows int, and the CRT
       * clamps it to INT_MAX - the first version of this option dumped from 0x7FFFFFFF and took an
       * access violation instead of writing the range (measured: "exception 0xC0000005 read
       * address=0x7fffffff"). strtoul does not clamp. */
      const char* c1 = std::strchr(spec, ':');
      const char* c2 = c1 ? std::strchr(c1 + 1, ':') : nullptr;
      if (c1 && c2) {
        static char s_ramPath[512];
        const unsigned long a32 = std::strtoul(spec, nullptr, 0);
        const unsigned long sz = std::strtoul(c1 + 1, nullptr, 0);
        std::snprintf(s_ramPath, sizeof(s_ramPath), "%s", c2 + 1);
        if (a32 && sz && s_ramPath[0]) {
          ramOutAddr = static_cast<uint32_t>(a32);
          ramOutSize = static_cast<uint32_t>(sz);
          ramOutPath = s_ramPath;
        }
      }
      if (!ramOutPath) {
        std::fprintf(stderr, "[replay] --ram-out wants <addr>:<size>:<file>, got '%s'\n", spec);
        return 2;
      }
      probeCopy = true;
    } else if (std::strcmp(a, "--verbose") == 0) {
      verbose = true;
    } else if (std::strcmp(a, "--raw") == 0) {
      rawStream = true;
    } else {
      std::fprintf(stderr, "[replay] unknown option %s\n", a);
      return 2;
    }
  }

  if (syntheticCopy) return run_synthetic_copy(fbWidth, fbHeight, backend, outPath);

  Capture cap;
  std::string err;
  if (!load_capture(capPath, cap, err)) {
    std::fprintf(stderr, "[replay] %s: %s\n", capPath, err.c_str());
    return 1;
  }
  std::printf("[replay] capture frames %u..%u: %u frame record(s), %" PRIu64
              " FIFO bytes, %zu MEM plane(s), %zu copy record(s)\n",
              cap.frameFrom, cap.frameTo, g_frames, g_fifoBytes, cap.memory.size(), cap.copies.size());
  if (cap.frames.empty()) {
    std::fprintf(stderr, "[replay] no frames in the capture\n");
    return 1;
  }

  for (const auto& plane : cap.memory) {
    const bool mem1 = plane.base == 0x80000000u, mem2 = plane.base == 0x90000000u;
    if (!mem1 && !mem2) {
      std::printf("[replay] MEM plane at 0x%08X is not MEM1/MEM2; ignored\n", plane.base);
      continue;
    }
    if (!map_guest_region(plane.base, mem1 ? 0xC0000000u : 0xD0000000u, plane.size, plane, err)) {
      std::fprintf(stderr, "[replay] %s\n", err.c_str());
      return 1;
    }
  }

  if (ramPoison && ramOutPath && ramOutSize) {
    std::memset(reinterpret_cast<void*>(static_cast<uintptr_t>(ramOutAddr)), 0xCD, ramOutSize);
    std::printf("[replay] poisoned guest 0x%08X..0x%08X (%u bytes) with 0xCD before the replay\n",
                ramOutAddr, ramOutAddr + ramOutSize, ramOutSize);
  }

  if (copyRecord >= 0) {
    if (static_cast<size_t>(copyRecord) >= cap.copies.size()) {
      std::fprintf(stderr, "[replay] only %zu copy record(s) in the capture\n", cap.copies.size());
      return 2;
    }
    const CopyRecord& rec = cap.copies[static_cast<size_t>(copyRecord)];
    copyDst = rec.dst;
    copyW = rec.w;
    copyH = rec.h;
    copyFmt = rec.fmt;
    copySize = rec.size;
    if (!copyOut) copyOut = "aurora_copy.bin";
    std::printf("[replay] copy record %d: frame %u dst 0x%08X %ux%u fmt %u, %u bytes (vmark %u)\n", copyRecord,
                rec.frame, rec.dst, rec.w, rec.h, rec.fmt, rec.size, rec.vmark);
    const std::string hostPath = std::string(copyOut) + ".host.bin";
    if (FILE* hf = std::fopen(hostPath.c_str(), "wb")) {
      std::fwrite(rec.bytes, 1, rec.size, hf);
      std::fclose(hf);
      std::printf("[replay] wrote %s (%u bytes: the host layer's bytes for this copy)\n", hostPath.c_str(),
                  rec.size);
    }
  }

  /* AP-AN: an EFB probe copy issued at the END of the last replayed frame. The colour capture
   * (`AuroraReadbackCaptureColor`) is not reliable for a heavy frame - the in-frame job often does
   * not deliver and the harness falls back to reading the NEXT frame's EFB, which is how the same
   * command budget measured 39.07 once and 0.00 the next time. A copy is the path the guest itself
   * uses and it has been byte-verified (criterion 3), so the final picture is read through a copy
   * into a scratch readback key instead. */
  constexpr uint32_t PROBE_COPY_DST = 0x90001000;
  constexpr uint32_t PROBE_COPY_W = 640, PROBE_COPY_H = 448;
  std::vector<uint8_t> probeCopyCmd;
  if (probeCopy) {
    CopyRegs regs{};
    regs.srcX0 = 0;
    regs.srcY0 = 0;
    regs.srcX1 = PROBE_COPY_W - 1;
    regs.srcY1 = PROBE_COPY_H - 1;
    regs.dstAddr = PROBE_COPY_DST;
    regs.pitch = (PROBE_COPY_W * 4u) / 8u;
    regs.haveSrc = true;
    const uint32_t exec = 12u << 3; /* tpf 12 = format 6 (RGBA8), clear bit off */
    emit_copy_state(probeCopyCmd, regs, exec);
    probeCopyCmd.push_back(0x61);
    append_u32(probeCopyCmd, (uint32_t(0x52) << 24) | (exec & 0xFFFFFFu));
    copyDst = PROBE_COPY_DST;
    copyW = PROBE_COPY_W;
    copyH = PROBE_COPY_H;
    copyFmt = 6;
    copySize = PROBE_COPY_W * PROBE_COPY_H * 4u;
    if (!copyOut) copyOut = "aurora_probe_copy.bin";
    std::printf("[replay] probe copy armed: full EFB 640x448 RGBA8 -> readback key 0x%08X\n", PROBE_COPY_DST);
    g_probeCmd = &probeCopyCmd;
  }

  if (parseOnly) {
    StreamState s;
    std::vector<uint8_t> out, frameBytes;
    for (const auto& frame : cap.frames) {
      frameBytes.clear();
      for (const auto& [data, len] : frame.chunks) frameBytes.insert(frameBytes.end(), data, data + len);
      uint32_t copies = 0, consumed = 0;
      const uint64_t v0 = g_vertices, d0 = g_draws;
      if (!rewrite_frame(frameBytes.data(), static_cast<uint32_t>(frameBytes.size()), 0,
                         static_cast<uint32_t>(frameBytes.size()), s, out, copies, consumed, err)) {
        std::fprintf(stderr, "[replay] frame %u: adapter failed: %s\n", frame.frame, err.c_str());
        dump_trace();
        return 1;
      }
      std::printf("frame %u: %zu bytes -> %zu, draws %llu, vertices %llu, copy cmd(s) %u\n", frame.frame,
                  frameBytes.size(), out.size(), (unsigned long long)(g_draws - d0),
                  (unsigned long long)(g_vertices - v0), copies);
    }
    std::printf("total: %llu draws, %llu vertices, largest draw %u, %u array base(s) translated\n",
                (unsigned long long)g_draws, (unsigned long long)g_vertices, g_maxVcnt, g_arrayBases);
    std::printf("storage arithmetic: %llu CP INVAL_VTX, %llu array-base bytes declared "
                "(re-uploaded after every invalidation), %llu bytes/frame\n",
                (unsigned long long)g_invalVtx, (unsigned long long)g_arrayBytes,
                (unsigned long long)(g_arrayBytes * (g_invalVtx + 1)));
    return 0;
  }

  AuroraConfig config{};
  config.appName = "TLS GX replay";
  config.logCallback = &log_callback;
  config.logLevel = LOG_WARNING;
  config.desiredBackend = backend;
  config.msaa = 1;
  config.vsync = false;
  config.surface.type = AURORA_SURFACE_HEADLESS;
  config.surface.width = fbWidth;
  config.surface.height = fbHeight;
  config.surface.scale = 1.f;
  config.gxProcessingMode = GX_PROCESSING_DRAIN;
  config.mem1Size = 0; /* our own mapping is authoritative */
  config.mem2Size = 0;

  char arg0[] = "tls_gx_replay";
  char* argvFake[] = {arg0, nullptr};
  const AuroraInfo info = aurora_initialize(1, argvFake, &config);
  std::printf("[replay] aurora backend=%d windowSize %ux%u fb %ux%u\n", static_cast<int>(info.backend),
              info.windowSize.width, info.windowSize.height, info.windowSize.fb_width, info.windowSize.fb_height);
  /* Native viewport: GXSetViewport/GXSetScissor pixels go straight to the EFB with no aspect-fit
   * scaling, so the readback is the raw EFB the guest described. */
  AuroraSetViewportPolicy(AURORA_VIEWPORT_NATIVE);
  /* aurora compiles pipelines asynchronously and SKIPS draws whose pipeline is not ready yet
   * ("GX draws are skipped if their pipeline is not yet compiled" is the documented default). A
   * one-frame replay therefore renders nothing at all: every draw is dropped while its pipeline
   * is still compiling and the EFB readback comes back black. That, not a GX-state mismatch, is
   * what "aurora renders a black frame" was in this spike. */
  AuroraSetDrawsBlocking(GX_TRUE);
  AuroraSetDrawsBlocking(GX_TRUE);
  /* GXInit is what gives g_gxState its defaults - number of TEV stages, viewport, scissor, the
   * projection and matrix stacks. aurora's own GPU readback test calls it before drawing
   * (tests/gfx_readback_test.cpp: `GXInit(nullptr, 0)`); without it the state starts at
   * zero-initialised GXState, i.e. zero TEV stages and a zero-sized scissor, and every draw is
   * recorded and then writes nothing. That is what the black EFB in AP-AM item 6d was. */
  GXInit(nullptr, 0);

  /* Separate streams: a stream holds only its most recent capture, so a colour capture and a copy
   * capture sharing a key replace each other (measured: the colour get then reported "key 0x0 has
   * a 71680-byte result, not 1228800"). */
  AuroraReadbackStream colorStream = AuroraReadbackCreateStream();
  AuroraReadbackStream copyStream = AuroraReadbackCreateStream();
  std::vector<uint8_t> rgb(fbWidth * fbHeight * 4);
  uint32_t captureW = 0, captureH = 0;
  bool colorRequested = false, copyRequested = false, colorRequestedInFrame = false;
  std::vector<uint8_t> copyPayload(copySize ? copySize : gx_tex_size(copyW, copyH, copyFmt));

  uint32_t replayed = 0, rewrittenCopies = 0;
  StreamState streamState;
  std::vector<uint8_t> frameBytes, rewritten;
  for (size_t fi = static_cast<size_t>(startAt); fi < cap.frames.size(); ++fi) {
    if (stopAfter >= 0 && static_cast<int>(fi) >= stopAfter) break;
    const auto& frame = cap.frames[fi];
    if (!aurora_begin_frame()) {
      std::fprintf(stderr, "[replay] aurora_begin_frame failed at recorded frame %u\n", frame.frame);
      return 1;
    }
    const bool isLast =
        (fi + 1 == cap.frames.size()) || (stopAfter >= 0 && static_cast<int>(fi) + 1 >= stopAfter);
    if (rawStream) {
      for (const auto& [data, len] : frame.chunks) aurora::gx::fifo::write_data_grow(data, len);
      if (isLast && !colorRequested) {
        colorRequested = AuroraReadbackCaptureColor(colorStream, 1, &captureW, &captureH) == GX_TRUE;
        std::printf("[replay] colour capture requested: %s (%ux%u)\n", colorRequested ? "yes" : "NO", captureW,
                    captureH);
      }
      aurora_end_frame();
      ++replayed;
    } else {
      frameBytes.clear();
      for (const auto& [data, len] : frame.chunks) frameBytes.insert(frameBytes.end(), data, data + len);
      const uint32_t total = static_cast<uint32_t>(frameBytes.size());
      const uint32_t budget = split > 1 ? (total + static_cast<uint32_t>(split) - 1) / static_cast<uint32_t>(split)
                                        : total;
      g_probeInserted = false;
      g_probeAtCmd = (isLast && probeAtCmd > 0 && g_probeCmd != nullptr) ? probeAtCmd : -1;
      uint32_t off = 0, chunks = 0;
      while (off < total) {
        if (chunks > 0) {
          if (!aurora_begin_frame()) break;
        }
        const uint32_t limit = split > 1 ? std::min(total, off + budget) : total;
        uint32_t copies = 0, consumed = off;
        if (!rewrite_frame(frameBytes.data(), total, off, limit, streamState, rewritten, copies, consumed, err)) {
          std::fprintf(stderr, "[replay] frame %u: adapter failed: %s\n", frame.frame, err.c_str());
          dump_trace();
          return 1;
        }
        if (consumed <= off) break; /* no progress: the slice is smaller than one command */
        rewrittenCopies += copies;
        aurora::gx::fifo::write_data_grow(rewritten.data(), static_cast<uint32_t>(rewritten.size()));
        off = consumed;
        ++chunks;
        if (verbose) {
          std::printf("[replay] frame %u chunk %u: off %u/%u, %zu rewritten bytes, %u copy cmd(s)\n",
                      frame.frame, chunks, off, total, rewritten.size(), copies);
          std::fflush(stdout);
        }
        if (isLast && !colorRequestedInFrame) {
          colorRequestedInFrame = AuroraReadbackCaptureColor(colorStream, 3, &captureW, &captureH) == GX_TRUE;
          std::printf("[replay] in-frame colour capture: %s (%ux%u)\n",
                      colorRequestedInFrame ? "yes" : "NO", captureW, captureH);
        }
        if (isLast && probeCopy && !copyRequested) {
          if (!g_probeInserted) {
            aurora::gx::fifo::write_data_grow(probeCopyCmd.data(), static_cast<uint32_t>(probeCopyCmd.size()));
          }
          const AuroraReadbackCopySrc src{2, reinterpret_cast<const void*>(static_cast<uintptr_t>(copyDst))};
          copyRequested = AuroraReadbackCaptureCopies(copyStream, &src, 1) == GX_TRUE;
          std::printf("[replay] probe copy %s: capture %s (%u bytes expected)\n",
                      g_probeInserted ? "was inserted in-frame" : "issued at the end of the last chunk",
                      copyRequested ? "accepted" : "REJECTED", static_cast<uint32_t>(copyPayload.size()));
        }
        aurora_end_frame();
      }
      ++replayed;
      if (verbose) std::printf("[replay] frame %u done in %u chunk(s)\n", frame.frame, chunks);
    }
  }
  std::printf("[replay] replayed %u frame(s), adapter translated %u EFB copy command(s), %llu scissor write(s), "
              "%llu texobj(s), %llu reserved-wrap fix(es)%s\n",
              replayed, rewrittenCopies, (unsigned long long)g_scissorWrites,
              (unsigned long long)g_texObjs, (unsigned long long)g_wrapFix,
              rawStream ? " (raw stream: no translation)" : "");
  std::printf("[replay] stream parse: %llu draw(s), %llu vertices\n", (unsigned long long)g_draws,
              (unsigned long long)g_vertices);

  bool haveColor = false, haveCopy = false;
  for (int i = 0; i < extraFrames && !(haveColor && (copyDst == 0 || haveCopy)); ++i) {
    if (!aurora_begin_frame()) break;
    if (i == 0 && !colorRequested) {
      colorRequested = AuroraReadbackCaptureColor(colorStream, 1, &captureW, &captureH) == GX_TRUE;
      std::printf("[replay] colour capture requested (frame after the replay): %s (%ux%u)\n",
                  colorRequested ? "yes" : "NO", captureW, captureH);
      if (copyDst != 0 && !copyRequested) {
        const AuroraReadbackCopySrc src{2, reinterpret_cast<const void*>(static_cast<uintptr_t>(copyDst))};
        copyRequested = AuroraReadbackCaptureCopies(copyStream, &src, 1) == GX_TRUE;
        std::printf("[replay] copy capture 0x%08X requested: %s (%u bytes expected)\n", copyDst,
                    copyRequested ? "yes" : "NO", static_cast<uint32_t>(copyPayload.size()));
      }
    }
    aurora_end_frame();
    if (colorRequested && !haveColor && captureW && captureH) {
      /* Prefer the in-frame capture: it is the EFB as the replayed frame left it, whereas the
       * next-frame capture reads the following frame's pass. */
      bool got = false;
      if (colorRequestedInFrame) {
        AuroraReadbackDest dest3{3, rgb.data(), captureW * captureH * 4, GX_FALSE};
        if (AuroraReadbackGet(colorStream, &dest3, 1) == GX_TRUE && dest3.found == GX_TRUE) {
          got = true;
          std::printf("[replay] colour readback complete (in-frame capture) after %d extra frame(s)\n", i + 1);
        }
      }
      if (!got) {
        AuroraReadbackDest dest{1, rgb.data(), captureW * captureH * 4, GX_FALSE};
        if (AuroraReadbackGet(colorStream, &dest, 1) == GX_TRUE && dest.found == GX_TRUE) {
          got = true;
          std::printf("[replay] colour readback complete (next-frame capture) after %d extra frame(s)\n", i + 1);
        }
      }
      if (got) haveColor = true;
    }
    if (copyRequested && !haveCopy) {
      AuroraReadbackDest dest{2, copyPayload.data(), static_cast<uint32_t>(copyPayload.size()), GX_FALSE};
      if (AuroraReadbackGet(copyStream, &dest, 1) == GX_TRUE && dest.found == GX_TRUE) {
        haveCopy = true;
        std::printf("[replay] copy readback complete after %d extra frame(s)\n", i + 1);
      }
    }
  }

  int rc = 0;
  if (haveColor) {
    double sr = 0, sg = 0, sb = 0;
    for (uint32_t i = 0; i < captureW * captureH; ++i) {
      sr += rgb[i * 4 + 0];
      sg += rgb[i * 4 + 1];
      sb += rgb[i * 4 + 2];
    }
    const double n = static_cast<double>(captureW) * captureH;
    std::printf("[replay] EFB mean RGB = (%.2f, %.2f, %.2f)\n", sr / n, sg / n, sb / n);
    write_ppm(outPath, rgb.data(), captureW, captureH);
  } else {
    std::printf("[replay] no colour readback delivered\n");
    rc = 3;
  }

  if (copyDst != 0) {
    if (haveCopy) {
      uint64_t sum = 0;
      for (uint8_t b : copyPayload) sum += b;
      std::printf("[replay] copy 0x%08X: %zu bytes, mean byte %.2f\n", copyDst, copyPayload.size(),
                  static_cast<double>(sum) / static_cast<double>(copyPayload.size()));
      if (copyOut) {
        if (FILE* f = std::fopen(copyOut, "wb")) {
          std::fwrite(copyPayload.data(), 1, copyPayload.size(), f);
          std::fclose(f);
          std::printf("[replay] wrote %s (aurora's bytes for this copy)\n", copyOut);
        }
      }
      if (probePpm && copyPayload.size() >= size_t(PROBE_COPY_W) * PROBE_COPY_H * 4) {
        write_probe_ppm(probePpm, copyPayload.data(), PROBE_COPY_W, PROBE_COPY_H);
      }
    } else {
      std::printf("[replay] no copy readback delivered for 0x%08X\n", copyDst);
      rc = 4;
    }
  }

  /* AP-AQ: the guest-memory range the caller asked for, as aurora left it. This is how an EFB
   * copy's DESTINATION bytes are read back from the replay (the guest samples exactly these), so
   * "the copy is 1.9x brighter than the frame it copied" can be split into "the copy wrote it"
   * and "the draw that samples it gained it". */
  if (ramOutPath && ramOutSize) {
    const void* p = reinterpret_cast<const void*>(static_cast<uintptr_t>(ramOutAddr));
    if (FILE* rf = std::fopen(ramOutPath, "wb")) {
      std::fwrite(p, 1, ramOutSize, rf);
      std::fclose(rf);
      const uint8_t* b = static_cast<const uint8_t*>(p);
      uint64_t sum = 0;
      unsigned n255 = 0, n0 = 0;
      for (uint32_t k = 0; k < ramOutSize; ++k) { sum += b[k]; if (b[k] == 255) ++n255; if (b[k] == 0) ++n0; }
      std::printf("[replay] wrote %s (guest 0x%08X, %u bytes): mean byte %.2f, %u x 255, %u x 0\n",
                  ramOutPath, ramOutAddr, ramOutSize,
                  static_cast<double>(sum) / static_cast<double>(ramOutSize), n255, n0);
    } else {
      std::fprintf(stderr, "[replay] cannot write %s\n", ramOutPath);
    }
  }

  AuroraReadbackDestroyStream(colorStream);
  AuroraReadbackDestroyStream(copyStream);
  aurora_shutdown();
  return rc;
}
