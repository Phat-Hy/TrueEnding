"""Walk one recorded frame of a .tlscap command by command (mirror of aurora_replay.cpp's adapter).

Answers, without a GPU or a runner run, questions the replay cannot:
  * which register classes the frame's stream actually carries (is the projection in it? the scissor?
    the viewport? the TEV stages?) - i.e. is the frame self-contained state-wise;
  * the exact byte offsets and vertex sizes of every draw, so a draw can be named by index in both
    implementations;
  * the first vertex's raw bytes for any draw (``--draw N``).

The vertex-size mirror is the same one tools/aurora_spike/aurora_replay.cpp uses, which parses the
whole stream with no desync; the desync check here is the same one.
"""
import argparse
import struct
import sys

TAG = {1: 'FRAME_BEGIN', 2: 'FRAME_END', 3: 'FIFO', 4: 'MEM', 5: 'COPY', 6: 'NOTE'}

# CP register 0x50/0x60 VCD, 0x70..0x97 VAT, 0xB0..0xBF strides -> per-attribute (cnt,type,frac).
ATTR_PNMTXIDX, ATTR_POS, ATTR_NRM, ATTR_CLR0, ATTR_CLR1, ATTR_TEX0 = 0, 9, 10, 11, 12, 13


def elem_size(t):
    t &= 7
    return 1 if t in (0, 1) else (2 if t in (2, 3) else 4)


def valid_opcode(b):
    return b in (0x00, 0x08, 0x10, 0x20, 0x28, 0x30, 0x38, 0x40, 0x44, 0x48, 0x61) or 0x80 <= b <= 0xBF


class Stream:
    def __init__(self):
        self.desc = [0] * 21
        self.fmt = [[[0, 0, 0] for _ in range(21)] for _ in range(8)]  # [fmt][attr] = cnt,type,frac
        self.strides = [0] * 21
        self.base = [0] * 21
        self.base_known = [False] * 21

    def apply_cp(self, reg, val):
        if reg == 0x50:
            self.desc[0] = val & 1
            for i in range(8):
                self.desc[1 + i] = (val >> (1 + i)) & 1
            self.desc[9] = (val >> 9) & 3
            self.desc[10] = (val >> 11) & 3
            self.desc[11] = (val >> 13) & 3
            self.desc[12] = (val >> 15) & 3
        elif reg == 0x60:
            for i in range(8):
                self.desc[13 + i] = (val >> (i * 2)) & 3
        elif 0x70 <= reg <= 0x77:
            f = self.fmt[reg - 0x70]
            f[ATTR_POS] = [val & 1, (val >> 1) & 7, (val >> 4) & 0x1F]
            nbt3 = (val >> 31) & 1
            f[ATTR_NRM] = [2 if nbt3 else ((val >> 9) & 1), (val >> 10) & 7, 0]
            f[ATTR_CLR0] = [(val >> 13) & 1, (val >> 14) & 7, 0]
            f[ATTR_CLR1] = [(val >> 17) & 1, (val >> 18) & 7, 0]
            f[ATTR_TEX0] = [(val >> 21) & 1, (val >> 22) & 7, (val >> 25) & 0x1F]
        elif 0x80 <= reg <= 0x87:
            f = self.fmt[reg - 0x80]
            for i in range(3):
                b = i * 9
                f[14 + i] = [(val >> b) & 1, (val >> (b + 1)) & 7, (val >> (b + 4)) & 0x1F]
            f[17] = [(val >> 27) & 1, (val >> 28) & 7, 0]
        elif 0xB0 <= reg <= 0xBF:
            attr = 9 + (reg - 0xB0)
            if attr <= 20:
                self.strides[attr] = val & 0xFF
        elif 0x90 <= reg <= 0x97:
            f = self.fmt[reg - 0x90]
            f[17][2] = val & 0x1F
            for i in range(3):
                b = 5 + i * 9
                f[18 + i] = [(val >> b) & 1, (val >> (b + 1)) & 7, (val >> (b + 4)) & 0x1F]
        elif 0xA0 <= reg <= 0xAF:
            attr = 9 + (reg - 0xA0)
            self.base[attr] = val
            self.base_known[attr] = True

    def attr_size(self, f, attr):
        t = self.desc[attr]
        if t == 0:
            return 0
        if t == 2:
            return 1
        if t == 3:
            return 2
        cnt, typ, frac = self.fmt[f & 7][attr]
        if attr <= 8:
            return 1
        if attr == ATTR_POS:
            return (3 if cnt & 1 else 2) * elem_size(typ)
        if attr == ATTR_NRM:
            return (9 if cnt == 2 else 3) * elem_size(typ)
        if attr in (ATTR_CLR0, ATTR_CLR1):
            return 2 if (typ & 7) in (0, 3) else (3 if (typ & 7) in (1, 4) else 4)
        return (2 if cnt & 1 else 1) * elem_size(typ)

    def vtx_size(self, f):
        return sum(self.attr_size(f, a) for a in range(21))

    def attr_offset(self, f, target):
        off = 0
        for a in range(target):
            off += self.attr_size(f, a)
        return off


def parse_components(buf, typ, frac, count):
    """Decode `count` components the way recomp/gx_pipeline.c parse_comp_value does."""
    scale = 1.0 / (1 << frac) if frac > 0 else 1.0
    out = []
    off = 0
    for _ in range(count):
        t = typ & 7
        if t == 0:  # U8
            out.append(buf[off] * scale); off += 1
        elif t == 1:  # S8
            out.append(struct.unpack_from('>b', buf, off)[0] * scale); off += 1
        elif t == 2:  # U16
            out.append(struct.unpack_from('>H', buf, off)[0] * scale); off += 2
        elif t == 3:  # S16
            out.append(struct.unpack_from('>h', buf, off)[0] * scale); off += 2
        else:  # F32
            out.append(struct.unpack_from('>f', buf, off)[0]); off += 4
    return out


def load(path):
    with open(path, 'rb') as f:
        data = f.read()
    assert data[:8] == b'TLSGXCP2'
    frm, to = struct.unpack_from('<II', data, 8)
    pos = 16
    frames = []          # [ {'frame': n, 'chunks': [bytes,...], 'copies': [...]} ]
    mem = {}
    cur = None
    while pos + 5 <= len(data):
        tag = data[pos]
        (ln,) = struct.unpack_from('<I', data, pos + 1)
        body = pos + 5
        payload = data[body:body + ln]
        if tag == 1:
            cur = {'frame': struct.unpack_from('<I', payload)[0], 'chunks': [], 'copies': []}
            frames.append(cur)
        elif tag == 2:
            cur = None
        elif tag == 3 and cur is not None:
            cur['chunks'].append(payload)
        elif tag == 4 and ln >= 8:
            base, size = struct.unpack_from('<II', payload)
            mem[base] = payload[8:8 + size]
        elif tag == 5 and cur is not None and ln >= 24:
            dst, w, h, fmt, vmark, size = struct.unpack_from('<IIIIII', payload)
            cur['copies'].append(dict(idx=None, dst=dst, w=w, h=h, fmt=fmt, vmark=vmark, size=size))
        pos = body + ln
    return frm, to, frames, mem


def read_guest(mem, addr, size):
    """Guest address -> bytes, through the aliases this capture maps."""
    if not mem:
        return None
    if 0x10000000 <= addr < 0x14000000:      # MEM2 physical
        base, off = 0x90000000, addr - 0x10000000
    elif 0x90000000 <= addr < 0x94000000:
        base, off = 0x90000000, addr - 0x90000000
    elif 0xD0000000 <= addr < 0xD4000000:    # MEM2 uncached
        base, off = 0x90000000, addr - 0xD0000000
    elif 0x80000000 <= addr < 0x84000000:
        base, off = 0x80000000, addr - 0x80000000
    elif 0xC0000000 <= addr < 0xC4000000:    # MEM1 uncached
        base, off = 0x80000000, addr - 0xC0000000
    else:
        return None
    plane = mem.get(base)
    if plane is None or off + size > len(plane):
        return None
    return plane[off:off + size]


def f32(word):
    return struct.unpack('>f', struct.pack('>I', word))[0]


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('capture')
    ap.add_argument('--frame', type=int, default=None, help='frame index into the file (default 0)')
    ap.add_argument('--draw', type=int, default=None, help='print draw N of that frame in full')
    ap.add_argument('--draws', type=int, default=0, help='print the first N draws')
    ap.add_argument('--scis', action='store_true', help='print BP 0x20/0x21/0x59 writes with the 342 bias removed')
    ap.add_argument('--max-draws', type=int, default=0, help='stop after N draws (walk cost)')
    args = ap.parse_args()

    frm, to, frames, mem = load(args.capture)
    print(f'capture frames {frm}..{to}, {len(frames)} recorded')
    fi = 0 if args.frame is None else args.frame
    fr = frames[fi]
    stream = b''.join(fr['chunks'])
    print(f"frame {fr['frame']}: {len(stream)} bytes, {len(fr['copies'])} copy record(s)")

    st = Stream()
    i = 0
    draws = []
    regs_seen = {}       # 'CP 0x50' -> count
    xf_seen = {}         # 'XF 0x1020' -> (count, last value)
    bp_seen = {}
    xf_base = {}         # base address of the last XF load
    errors = []
    while i < len(stream):
        cmd = stream[i]
        if cmd == 0x00:
            i += 1
        elif cmd == 0x08:
            reg = stream[i + 1]
            val = struct.unpack_from('>I', stream, i + 2)[0]
            st.apply_cp(reg, val)
            k = f'CP 0x{reg:02X}'
            regs_seen[k] = regs_seen.get(k, 0) + 1
            i += 6
        elif cmd == 0x10:
            words = (stream[i + 1] << 8 | stream[i + 2]) + 1
            base = (stream[i + 3] << 8 | stream[i + 4]) * 4
            total = 5 + words * 4
            for w in range(words):
                addr = base + w * 4
                val = struct.unpack_from('>I', stream, i + 5 + w * 4)[0]
                k = f'XF 0x{addr:04X}'
                cnt, _ = xf_seen.get(k, (0, 0))
                xf_seen[k] = (cnt + 1, val)
            i += total
        elif cmd in (0x20, 0x28, 0x30, 0x38):
            addr = struct.unpack_from('>H', stream, i + 1)[0]
            k = f'XFIDX 0x{addr:04X}'
            xf_seen[k] = (xf_seen.get(k, (0, 0))[0] + 1, 0)
            i += 5
        elif cmd == 0x40:
            errors.append(f'CALL_DL at {i}')
            i += 9
        elif cmd in (0x44, 0x48):
            k = 'CP INVAL_VTX' if cmd == 0x48 else 'CP PERF'
            regs_seen[k] = regs_seen.get(k, 0) + 1
            i += 1
        elif cmd == 0x61:
            word = struct.unpack_from('>I', stream, i + 1)[0]
            reg = word >> 24
            val = word & 0xFFFFFF
            bp_seen[reg] = (bp_seen.get(reg, (0, 0))[0] + 1, val)
            if args.scis and reg in (0x20, 0x21, 0x59):
                a = val & 0x7FF
                b = (val >> 12) & 0x7FF
                print(f'at {i:8d} after {len(draws):5d} draws: BP 0x{reg:02X} = 0x{val:06X} '
                      f'(field0={a} field12={b}; minus 342 = {a - 342},{b - 342})')
            i += 5
        elif 0x80 <= cmd <= 0xBF:
            fmt = cmd & 7
            vcnt = struct.unpack_from('>H', stream, i + 1)[0]
            vs = st.vtx_size(fmt)
            total = 3 + vcnt * vs
            if vs == 0 or i + total > len(stream) or (i + total < len(stream) and not valid_opcode(stream[i + total])):
                errors.append(f'draw desync at {i}: fmt {fmt} vcnt {vcnt} vtxsize {vs} next '
                              f'{stream[i + total] if i + total < len(stream) else -1:#04x}')
                break
            draws.append((i, cmd, fmt, vcnt, vs))
            if args.max_draws and len(draws) >= args.max_draws:
                print(f'stopped after {len(draws)} draw(s) at offset {i + total}')
                break
            i += total
        else:
            errors.append(f'unknown opcode 0x{cmd:02X} at {i}')
            break

    print(f'walked {i}/{len(stream)} bytes, {len(draws)} draw(s), '
          f'{sum(d[3] for d in draws)} vertices, {len(errors)} error(s)')
    for e in errors[:10]:
        print('  ERROR', e)
    print('CP registers seen:', ', '.join(f'{k}x{v}' for k, v in sorted(regs_seen.items())))
    print('XF writes seen:', ', '.join(f'{k}x{c}' for k, (c, _) in sorted(xf_seen.items())))
    print('BP registers seen:', ', '.join(f'0x{r:02X}x{c}' for r, (c, _) in sorted(bp_seen.items())))

    def dump(n):
        if n >= len(draws):
            print(f'no draw {n} (only {len(draws)})')
            return
        off, cmd, fmt, vcnt, vs = draws[n]
        payload = stream[off + 3: off + 3 + vcnt * vs]
        print(f'\n== draw {n} at stream offset {off}: opcode 0x{cmd:02X} fmt {fmt} vcnt {vcnt} vtxsize {vs}')
        print('   vtxDesc[0..20]:', ' '.join(str(x) for x in st.desc))
        for a, name in ((ATTR_POS, 'POS'), (ATTR_NRM, 'NRM'), (ATTR_CLR0, 'CLR0'), (ATTR_CLR1, 'CLR1'),
                        (ATTR_TEX0, 'TEX0'), (ATTR_TEX0 + 1, 'TEX1')):
            cnt, typ, frac = st.fmt[fmt & 7][a]
            print(f'   {name:5s} desc={st.desc[a]} cnt={cnt} type={typ} frac={frac} '
                  f'size={st.attr_size(fmt, a)}')
        for a in range(9, 21):
            if st.desc[a] in (2, 3) and st.base_known[a]:
                print(f'   array attr {a}: base 0x{st.base[a]:08X} stride {st.strides[a]}')
        print('   first vertex bytes:', payload[:min(vs, 40)].hex())
        # POS decode following recomp/gx_pipeline.c decode_single_vertex
        cnt, typ, frac = st.fmt[fmt & 7][ATTR_POS]
        pos_off = st.attr_offset(fmt, ATTR_POS)
        if st.desc[ATTR_POS] == 1:
            ncomp = 3 if cnt & 1 else 2
            vals = parse_components(payload[pos_off:], typ, frac, ncomp)
            xyz = vals + [0.0] * (3 - len(vals))
            print(f'   POS direct decode: x={xyz[0]:.6f} y={xyz[1]:.6f} z={xyz[2]:.6f} (w=1)')
        elif st.desc[ATTR_POS] in (2, 3):
            width = 1 if st.desc[ATTR_POS] == 2 else 2
            idx = payload[pos_off] if width == 1 else struct.unpack_from('>H', payload, pos_off)[0]
            elem = st.attr_size(fmt, ATTR_POS)
            stride = st.strides[ATTR_POS] or elem
            base = st.base[ATTR_POS]
            print(f'   POS indexed: idx={idx} stride={stride} base=0x{base:08X} (bytes live in the MEM plane)')
        clr_off = st.attr_offset(fmt, ATTR_CLR0)
        if st.desc[ATTR_CLR0] == 1:
            print('   CLR0 raw bytes:', payload[clr_off:clr_off + st.attr_size(fmt, ATTR_CLR0)].hex())

    for n in range(min(args.draws, len(draws))):
        dump(n)
    if args.draw is not None:
        dump(args.draw)


if __name__ == '__main__':
    main()
