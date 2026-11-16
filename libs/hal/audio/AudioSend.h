// libs/hal/audio/AudioSend.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::hal::audio {
    class AudioSend {
    public:
        void GetDestinationBuss() const;
        ~AudioSend();
        void Resume();
        unsigned int Mix(AudioBuffer* audioBuffer, bool arg2);
        void Free();
        AudioSend(VoiceInstance& voiceInstance);
        void SetMasterBuss(const shared_ptr<AudioBuss>& audioBuss);
        void SetDestinationBuss(const shared_ptr<AudioBuss>& audioBuss);
        void Pause();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        shared_ptr field_16;
        VoiceInstance* field_32;
        uint8_t field_40;
    };

    // 0x100b90230
    void AudioSend::SetMasterBuss(const shared_ptr<AudioBuss>& audioBuss) {
        *field_16 = audioBuss;
    }

    // 0x100b90240
    void AudioSend::SetDestinationBuss(const shared_ptr<AudioBuss>& audioBuss) {
        *this = audioBuss;
    }

    // 0x100b90e50
    void AudioSend::Pause() {
        field_40 = 1;
    }

    // 0x100b97c10
    AudioSend::AudioSend(VoiceInstance& voiceInstance) : shared_ptr() {
        new (field_16) shared_ptr();
        field_32 = voiceInstance;
        field_40 = 0;
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b90a80
    shared_ptr_if_not_array<hal::audio::AudioBufferHandler>::type
    make_shared<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
        unsigned int& arg1, shared_ptr<hal::audio::AudioBuffer>& audioBuffer) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        AudioBufferHandler* local_38[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<hal::audio::AudioBufferHandler>::type result;
        } else {
            local_38[0] =
                placement_new<hal::audio::AudioBufferHandler, unsigned int&, shared_ptr<hal::audio::AudioBuffer>&>(
                    (void*)((long)arg1_00 + 32), arg1, audioBuffer);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::AudioBufferHandler>, int,
                              hal::audio::AudioBufferHandler*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
