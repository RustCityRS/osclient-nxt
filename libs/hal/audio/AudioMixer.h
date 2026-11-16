// libs/hal/audio/AudioMixer.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::hal::audio {
    class AudioMixer {
    public:
        // virtual methods in vtable order
        virtual ~AudioMixer();
        AudioBuss* GetMasterBuss() const;
        void AddBuss(BussType bussType1, unsigned int arg2, unsigned int arg3, float arg4, BussType bussType2,
                     const std::function<float()>& callback);
        shared_ptr* GetBuss(BussType bussType) const;
        AudioMixer(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams);
        void ShutDown();
        void Service(float arg1);
        void MixVoices(float arg1);
        VoiceInstance* ClaimVoice(BussType bussType);
        static float UPDATE_TIME_DELTA[4]; // = { 1.0f, 0, 0, 0 }

    private:
        NXTPixToolkit* field_8;
        BussType field_16;
        uint8_t _unknown_20[22124];
        TaskRunner field_22144;
    };

    // 0x1001c37e0
    AudioBuss* AudioMixer::GetMasterBuss() const {
        return (AudioBuss*)field_16.end();
    }

} // namespace jag::hal::audio
