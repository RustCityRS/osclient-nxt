// libs/hal/audio/AudioBufferHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioBufferHandler.h"

namespace jag::hal::audio {
    // 0x10018b300: AudioBufferHandler::SampleRate() const has the same machine code as oldscape::jagex3::Js5::GetIndexVersion() const

    // 0x1003cf2a0: AudioBufferHandler::GetReadOffsetSamples(unsigned int) const has the same machine code as game::WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x100b8d3e0
    AudioBufferHandler::AudioBufferHandler(unsigned int arg1, const shared_ptr<AudioBuffer>& audioBuffer)
        : SampleReadable(), field_8(audioBuffer), m_readOffsetSamples(0) {
        auto plVar2 = audioBuffer.operator->();
        field_28 = (**(void (**)(...))(*plVar2 + 40))(plVar2);
        field_32 = arg1;
    }

    // 0x100b8d4b0
    int AudioBufferHandler::GetNumberSamplesCanBeRead(unsigned int arg1) const {
        Logger* pLVar5;

        uint8_t* this_00 = &field_8;
        long* plVar4 = (long*)(*this_00).operator->();
        unsigned int uVar1 = (**(void (**)(...))(*plVar4 + 80))(plVar4);
        plVar4 = (long*)(*this_00).operator->();
        unsigned int uVar2 = (**(void (**)(...))(*plVar4 + 16))(plVar4);
        if ((uVar1 != uVar2) && (uVar2 != 0)) {
            if (uVar2 == m_readOffsetSamples) {
                pLVar5 = logger::default_logger();
                pLVar5->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                            "AudioBufferHandler.cpp",
                            35,
                            "Warning, read all available samples, but we\'re still waiting on samples to decode, "
                            "potential gap in playback for this sound.");
            }
            if ((uVar2 < field_32) && (field_32 <= uVar1)) {
                pLVar5 = logger::default_logger();
                pLVar5->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                            "AudioBufferHandler.cpp",
                            39,
                            "Warning, we haven\'t managed to decode a safe number of samples while waiting for the "
                            "rest of the samples to decode. Potential gap in playback for this sound.");
            }
        }
        plVar4 = (long*)(*this_00).operator->();
        return (**(void (**)(...))(*plVar4 + 16))(plVar4, 0) - m_readOffsetSamples;
    }

} // namespace jag::hal::audio
