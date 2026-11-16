// libs/hal/audio/AudioBuss.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class AudioBuss {
    public:
        // virtual methods in vtable order
        virtual ~AudioBuss();
        int GetBussID() const;
        void GetBuffer();
        void SetGain(float);
        void GetTotalGainOfChain() const;
        IsMixBussInChain(BussType) const;
        AudioBuss(BussType, unsigned int, unsigned int, float, unsigned int, bool);
        void ClearSamples();
        void AddRouting(shared_ptr<AudioBuss> const&);
        void PreMix();
        void PostMix();
        uint MixFromBuffer(AudioBuffer*, bool, float);
        uint MixFromBufferWithResample(shared_ptr<SampleReadable> const&, bool, float, float);
        void MixToBuffer(AudioBuffer*);
        void Service();
        void SetUpdateGainFunction(std::function<float()> const&);
        GetPriority() const;
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullAudioBuss;

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32;         // offset 32
        float field_36;        // offset 36
        shared_ptr field_40;   // offset 40
        undefined4 m_priority; // offset 56
        int m_bussID;          // offset 60
        char _unknown_64[8];
    };

    // 0x1001c37f0, 16 bytes, inline, placed by class name and debug map
    // AudioBuss::GetBuffer()
    void AudioBuss::GetBuffer() {
        std::unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>::operator*(
            (unique_ptr<AudioBuffer, std::default_delete<AudioBuffer>>*)&field_24);
    }

    // 0x100665640, 64 bytes, inline, placed by class name
    // AudioBuss::SetGain(float)
    void AudioBuss::SetGain(float param_1) {
        float local_1c;
        float local_18;
        float local_14;

        local_18 = 0.0;
        local_14 = 1.0;
        local_1c = param_1;
        field_36 = math::Clamp<float>(&local_1c, &local_18, &local_14);
    }

    // 0x100b8ef90, 16 bytes, inline, placed by class name
    // AudioBuss::SetUpdateGainFunction(std::function<float ()> const&)
    /* AudioBuss::SetUpdateGainFunction(std::function<float ()> const&) */

    void AudioBuss::SetUpdateGainFunction(function* param_1) {
        std::function<float()>::operator=((function<float()>*)&field_64, param_1);
    }

    // 0x100b90570, 16 bytes, inline, placed by class name
    // AudioBuss::GetPriority() const
    undefined4 AudioBuss::GetPriority() {
        return m_priority;
    }

} // namespace jag::hal::audio
