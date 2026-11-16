// libs/hal/audio/AudioBuss.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::hal::audio {
    class AudioBuss {
    public:
        // virtual methods in vtable order
        virtual ~AudioBuss();
        BussType GetBussID() const;
        void GetBuffer();
        void SetGain(float arg1);
        void GetTotalGainOfChain() const;
        bool IsMixBussInChain(BussType bussType) const;
        AudioBuss(BussType bussType, unsigned int arg2, unsigned int arg3, float arg4, unsigned int arg5, bool arg6);
        void ClearSamples();
        void AddRouting(const shared_ptr<AudioBuss>& audioBuss);
        void PreMix();
        void PostMix();
        unsigned int MixFromBuffer(AudioBuffer* audioBuffer, bool arg2, float arg3);
        unsigned int MixFromBufferWithResample(const shared_ptr<SampleReadable>& sampleReadable, bool arg2, float arg3,
                                               float arg4);
        void MixToBuffer(AudioBuffer* audioBuffer);
        void Service();
        void SetUpdateGainFunction(const std::function<float()>& callback);
        float GetPriority() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullAudioBuss; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t* field_8;
        AudioFormat* field_16;
        uint8_t _unknown_24[8];
        unsigned int field_32;
        float field_36;
        shared_ptr field_40;
        float m_priority;
        BussType m_bussID;
        uint8_t _unknown_64[8];
    };

    // 0x1001c37f0
    void AudioBuss::GetBuffer() {
        *field_24;
    }

    // 0x100665640
    void AudioBuss::SetGain(float arg1) {
        field_36 = math::Clamp<float>(arg1, 0.0, 1.0);
    }

    // 0x100b8ef90
    void AudioBuss::SetUpdateGainFunction(const std::function<float()>& callback) {
        field_64 = callback;
    }

    // 0x100b90570
    float AudioBuss::GetPriority() const {
        return m_priority;
    }

} // namespace jag::hal::audio
