#ifndef TLS_AUDIO_PLAYER_H
#define TLS_AUDIO_PLAYER_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// Initialize host audio playback subsystem (Windows waveOut)
bool audio_player_init(int sample_rate, int channels);

// Shutdown audio playback subsystem
void audio_player_shutdown(void);

// Play a Nintendo BRSTM audio stream natively in the background
bool audio_player_play_brstm(const char* brstm_path, bool loop);

// Stop currently playing stream
void audio_player_stop(void);

// Pause or resume playback
void audio_player_pause(bool pause);

// Set master audio volume (0.0f = silent, 1.0f = full volume)
void audio_player_set_volume(float volume);

// Push 16-bit stereo PCM samples directly to the output buffer
void audio_player_push_pcm(const int16_t* samples, int frame_count);

// Periodic update / stream refilling (called once per frame or slice)
void audio_player_update(void);

// Check if audio playback is currently active
bool audio_player_is_playing(void);

#ifdef __cplusplus
}
#endif

#endif // TLS_AUDIO_PLAYER_H
