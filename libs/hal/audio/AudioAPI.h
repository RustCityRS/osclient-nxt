// libs/hal/audio/AudioAPI.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::hal::audio {
    class AudioAPI {
    public:
        void GetRenderer() const;
        AudioAPI();
        ~AudioAPI();
        void IsRendererValid() const;
        uint32_t StartAudioSystem(const AudioSystemStartParams& audioSystemStartParams,
                                  const AudioOptionsCallbacks* audioOptionsCallbacks);
        unsigned long ConfigureRoutingArchitecture(const AudioOptionsCallbacks& audioOptionsCallbacks);
        void StopAudioSystem();
        uint32_t RestartAudioSystem(const AudioOptionsCallbacks* audioOptionsCallbacks);
        uint64_t GetDecoder(const AudioFormat* audioFormat);
        void FreeDecoder(decoders::AudioDecoder* audioDecoder);
        uint64_t ActiveDecoderCount();
        void ServiceAudio(float arg1);
        void AddMixBuss(BussType bussType1, unsigned int arg2, unsigned int arg3, float arg4, BussType bussType2,
                        const std::function<float()>& callback);
        uint8_t* GetMixBuss(BussType bussType);
        uint64_t GetMixBussTotalGain(BussType bussType);
        bool IsMixBussInChain(BussType bussType1, BussType bussType2);
        void VerifyDefaultAudioDevice();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[8];
    };

    // 0x1001e0c40
    AudioAPI::AudioAPI() : shared_ptr() {
        new (&field_16) shared_ptr();
    }

    // 0x1001e0d60
    AudioAPI::~AudioAPI() {
        field_16.~shared_ptr();
    }

    // 0x100665fb0
    void AudioAPI::IsRendererValid() const {
        *this != nullptr;
    }

} // namespace jag::hal::audio

namespace jag::game {
    // 0x1001e0d60: AssetWorkerJob::~AssetWorkerJob() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

    // 0x1001e0d60: AnimatedModelPair::~AnimatedModelPair() has the same machine code as hal::audio::AudioAPI::~AudioAPI()

} // namespace jag::game
