// libs/hal/audio/AudioMixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::hal::audio {
    class AudioMixer {
    public:
        // virtual methods in vtable order
        virtual ~AudioMixer();
        void GetMasterBuss() const;
        void AddBuss(BussType, unsigned int, unsigned int, float, BussType, std::function<float()> const&);
        shared_ptr* GetBuss(BussType) const;
        AudioMixer(AudioAPI*, AudioSystemStartParams const&);
        void ShutDown();
        void Service(float);
        void MixVoices(float);
        VoiceInstance* ClaimVoice(BussType);
        static /* 16 bytes */ UPDATE_TIME_DELTA; // = { 1.0f, 0, 0, 0 }

        // data members, from how the methods use this: 22172 bytes
        undefined** field_0;    // offset 0, vtable pointer
        NXTPixToolkit* field_8; // offset 8
        shared_ptr field_16;    // offset 16
        char _unknown_32[22112];
        shared_ptr field_22144; // offset 22144
        float field_22160;      // offset 22160
        undefined4 field_22164; // offset 22164
        char _unknown_22168[4];
    };

    // 0x1001c37e0, 16 bytes, inline, placed by class name and debug map
    // AudioMixer::GetMasterBuss() const
    void AudioMixer::GetMasterBuss() {
        field_16->end();
    }

} // namespace jag::hal::audio
