#include "audio_player.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <mmsystem.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AUDIO_NUM_BUFFERS 4
#define AUDIO_BUFFER_FRAMES 2048 // 2048 stereo frames per buffer (~43ms at 48kHz)

static HWAVEOUT s_hWaveOut = NULL;
static WAVEHDR s_wave_headers[AUDIO_NUM_BUFFERS];
static int16_t s_audio_buffers[AUDIO_NUM_BUFFERS][AUDIO_BUFFER_FRAMES * 2];
static int s_current_buffer = 0;
static int s_device_sample_rate = 48000;
static int s_device_channels = 2;
static float s_master_volume = 1.0f;
static bool s_is_paused = false;

// BRSTM Stream State
typedef struct {
    uint8_t* file_data;
    size_t file_size;
    int channels;
    int sample_rate;
    bool loop_enabled;
    uint32_t loop_start;
    uint32_t total_samples;
    uint32_t current_sample;
    uint32_t data_offset;
    uint32_t block_size;
    uint32_t samples_per_block;
    int16_t coefs[2][16];
    int16_t hist1[2];
    int16_t hist2[2];
    bool is_active;
} BrstmStream;

static BrstmStream s_stream = {0};

static inline int16_t clamp_s16(int32_t val) {
    if (val < -32768) return -32768;
    if (val > 32767) return 32767;
    return (int16_t)val;
}

static inline uint16_t read_u16_be(const uint8_t* p) {
    return (uint16_t)((p[0] << 8) | p[1]);
}

static inline uint32_t read_u32_be(const uint8_t* p) {
    return (uint32_t)((p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3]);
}

static inline int16_t read_s16_be(const uint8_t* p) {
    return (int16_t)((p[0] << 8) | p[1]);
}

bool audio_player_init(int sample_rate, int channels) {
#ifdef _WIN32
    if (s_hWaveOut) {
        return true; // Already initialized
    }

    s_device_sample_rate = sample_rate > 0 ? sample_rate : 48000;
    s_device_channels = channels > 0 ? channels : 2;

    WAVEFORMATEX wfx;
    ZeroMemory(&wfx, sizeof(wfx));
    wfx.wFormatTag = WAVE_FORMAT_PCM;
    wfx.nChannels = (WORD)s_device_channels;
    wfx.nSamplesPerSec = (DWORD)s_device_sample_rate;
    wfx.wBitsPerSample = 16;
    wfx.nBlockAlign = (WORD)(wfx.nChannels * (wfx.wBitsPerSample / 8));
    wfx.nAvgBytesPerSec = wfx.nSamplesPerSec * wfx.nBlockAlign;

    MMRESULT res = waveOutOpen(&s_hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
    if (res != MMSYSERR_NOERROR) {
        printf("[Audio] waveOutOpen failed with error code: %u\n", res);
        s_hWaveOut = NULL;
        return false;
    }

    // Prepare double/triple buffers
    for (int i = 0; i < AUDIO_NUM_BUFFERS; i++) {
        ZeroMemory(&s_wave_headers[i], sizeof(WAVEHDR));
        s_wave_headers[i].lpData = (LPSTR)s_audio_buffers[i];
        s_wave_headers[i].dwBufferLength = AUDIO_BUFFER_FRAMES * 2 * sizeof(int16_t);
        s_wave_headers[i].dwFlags = 0;
        waveOutPrepareHeader(s_hWaveOut, &s_wave_headers[i], sizeof(WAVEHDR));
        s_wave_headers[i].dwFlags |= WHDR_DONE; // Mark initially done so we can fill
    }

    s_current_buffer = 0;
    printf("[Audio] Native audio output initialized (%d Hz, %d channels, waveOut)\n",
           s_device_sample_rate, s_device_channels);
    return true;
#else
    return false;
#endif
}

void audio_player_shutdown(void) {
    audio_player_stop();

#ifdef _WIN32
    if (s_hWaveOut) {
        waveOutReset(s_hWaveOut);
        for (int i = 0; i < AUDIO_NUM_BUFFERS; i++) {
            waveOutUnprepareHeader(s_hWaveOut, &s_wave_headers[i], sizeof(WAVEHDR));
        }
        waveOutClose(s_hWaveOut);
        s_hWaveOut = NULL;
        printf("[Audio] Native audio subsystem shutdown\n");
    }
#endif
}

void audio_player_stop(void) {
    s_stream.is_active = false;
    if (s_stream.file_data) {
        free(s_stream.file_data);
        s_stream.file_data = NULL;
    }
    memset(&s_stream, 0, sizeof(s_stream));
}

void audio_player_pause(bool pause) {
    s_is_paused = pause;
#ifdef _WIN32
    if (s_hWaveOut) {
        if (pause) waveOutPause(s_hWaveOut);
        else waveOutRestart(s_hWaveOut);
    }
#endif
}

void audio_player_set_volume(float volume) {
    if (volume < 0.0f) volume = 0.0f;
    if (volume > 1.0f) volume = 1.0f;
    s_master_volume = volume;
}

bool audio_player_is_playing(void) {
    return s_stream.is_active;
}

bool audio_player_play_brstm(const char* brstm_path, bool loop) {
    audio_player_stop();

    if (!s_hWaveOut) {
        if (!audio_player_init(48000, 2)) {
            return false;
        }
    }

    FILE* f = fopen(brstm_path, "rb");
    if (!f) {
        printf("[Audio] Failed to open BRSTM file: %s\n", brstm_path);
        return false;
    }

    fseek(f, 0, SEEK_END);
    long fsize = ftell(f);
    fseek(f, 0, SEEK_SET);

    if (fsize < 0x200) {
        fclose(f);
        return false;
    }

    uint8_t* data = (uint8_t*)malloc(fsize);
    if (!data) {
        fclose(f);
        return false;
    }

    if (fread(data, 1, fsize, f) != (size_t)fsize) {
        free(data);
        fclose(f);
        return false;
    }
    fclose(f);

    if (memcmp(data, "RSTM", 4) != 0) {
        printf("[Audio] Not a valid RSTM/BRSTM file: %s\n", brstm_path);
        free(data);
        return false;
    }

    s_stream.file_data = data;
    s_stream.file_size = fsize;

    // Parse HEAD chunk at 0x40
    // Format info at 0x60
    s_stream.channels = data[0x62];
    s_stream.sample_rate = read_u16_be(&data[0x64]);
    s_stream.loop_enabled = loop || (data[0x61] != 0);
    s_stream.loop_start = read_u32_be(&data[0x68]);
    s_stream.total_samples = read_u32_be(&data[0x6C]);
    s_stream.data_offset = read_u32_be(&data[0x70]) + 0x20; // Skip 'DATA' header
    s_stream.block_size = read_u32_be(&data[0x78]);
    s_stream.samples_per_block = read_u32_be(&data[0x7C]);
    s_stream.current_sample = 0;

    // Parse ADPCM coefficients (at 0xC8 and 0x100)
    for (int ch = 0; ch < s_stream.channels && ch < 2; ch++) {
        uint32_t coef_off = 0xC8 + ch * 0x38;
        for (int i = 0; i < 16; i++) {
            s_stream.coefs[ch][i] = read_s16_be(&data[coef_off + i * 2]);
        }
        s_stream.hist1[ch] = 0;
        s_stream.hist2[ch] = 0;
    }

    s_stream.is_active = true;
    printf("[Audio] Streaming: %s (%d Hz, %s, %u samples, loop: %s)\n",
           brstm_path, s_stream.sample_rate, s_stream.channels == 2 ? "Stereo" : "Mono",
           s_stream.total_samples, s_stream.loop_enabled ? "Yes" : "No");
    return true;
}

// Decode next N samples from BRSTM stream into destination buffer
static int decode_brstm_samples(int16_t* out_stereo, int max_frames) {
    if (!s_stream.is_active || !s_stream.file_data) {
        return 0;
    }

    int frames_written = 0;
    while (frames_written < max_frames && s_stream.is_active) {
        if (s_stream.current_sample >= s_stream.total_samples) {
            if (s_stream.loop_enabled) {
                s_stream.current_sample = s_stream.loop_start;
                // Reset history on loop
                s_stream.hist1[0] = s_stream.hist1[1] = 0;
                s_stream.hist2[0] = s_stream.hist2[1] = 0;
            } else {
                s_stream.is_active = false;
                break;
            }
        }

        uint32_t block_idx = s_stream.current_sample / s_stream.samples_per_block;
        uint32_t sample_in_block = s_stream.current_sample % s_stream.samples_per_block;
        uint32_t frame_in_block = sample_in_block / 14;
        uint32_t nibble_in_frame = sample_in_block % 14;

        uint32_t block_bytes = s_stream.block_size;
        uint32_t total_block_stride = block_bytes * s_stream.channels;
        uint32_t block_base = s_stream.data_offset + block_idx * total_block_stride;

        int16_t left_sample = 0, right_sample = 0;

        for (int ch = 0; ch < s_stream.channels && ch < 2; ch++) {
            uint32_t ch_block_base = block_base + ch * block_bytes;
            uint32_t frame_offset = ch_block_base + frame_in_block * 8;

            if (frame_offset + 8 <= s_stream.file_size) {
                uint8_t header = s_stream.file_data[frame_offset];
                int scale = 1 << (header & 0x0F);
                int pred = (header >> 4) & 0x07;
                int16_t c1 = s_stream.coefs[ch][pred * 2];
                int16_t c2 = s_stream.coefs[ch][pred * 2 + 1];

                uint8_t b = s_stream.file_data[frame_offset + 1 + (nibble_in_frame / 2)];
                int nibble = (nibble_in_frame % 2 == 0) ? ((b >> 4) & 0x0F) : (b & 0x0F);
                int delta = (nibble < 8) ? nibble : (nibble - 16);

                int32_t s = (c1 * (int32_t)s_stream.hist1[ch] + c2 * (int32_t)s_stream.hist2[ch] + 1024) >> 11;
                s += delta * scale;
                int16_t clamped = clamp_s16(s);

                s_stream.hist2[ch] = s_stream.hist1[ch];
                s_stream.hist1[ch] = clamped;

                if (ch == 0) left_sample = clamped;
                else right_sample = clamped;
            }
        }

        if (s_stream.channels == 1) {
            right_sample = left_sample;
        }

        // Apply volume
        if (s_master_volume < 0.999f) {
            left_sample = (int16_t)(left_sample * s_master_volume);
            right_sample = (int16_t)(right_sample * s_master_volume);
        }

        out_stereo[frames_written * 2 + 0] = left_sample;
        out_stereo[frames_written * 2 + 1] = right_sample;

        frames_written++;
        s_stream.current_sample++;
    }

    return frames_written;
}

void audio_player_update(void) {
#ifdef _WIN32
    if (!s_hWaveOut || s_is_paused) {
        return;
    }

    // Check if the current buffer is done playing
    WAVEHDR* hdr = &s_wave_headers[s_current_buffer];
    if (hdr->dwFlags & WHDR_DONE) {
        int16_t* buf = s_audio_buffers[s_current_buffer];

        // Fill buffer with decoded stream samples or silence
        int decoded = 0;
        if (s_stream.is_active) {
            decoded = decode_brstm_samples(buf, AUDIO_BUFFER_FRAMES);
        }

        // Fill remainder with silence if stream ended or underflow
        if (decoded < AUDIO_BUFFER_FRAMES) {
            memset(buf + decoded * 2, 0, (AUDIO_BUFFER_FRAMES - decoded) * 2 * sizeof(int16_t));
        }

        // Re-queue buffer to waveOut
        hdr->dwFlags &= ~WHDR_DONE;
        waveOutWrite(s_hWaveOut, hdr, sizeof(WAVEHDR));

        // Advance buffer ring
        s_current_buffer = (s_current_buffer + 1) % AUDIO_NUM_BUFFERS;
    }
#endif
}

void audio_player_push_pcm(const int16_t* samples, int frame_count) {
    (void)samples;
    (void)frame_count;
    // Reserved for guest AX/AI PCM buffer mixer
}
