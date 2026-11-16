// libs/hal/audio/AudioBufferHandler.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioBufferHandler.h"

namespace jag::hal::audio {
    // 0x10018b300: the linker folded this into oldscape::jagex3::Js5::GetIndexVersion() const, which has identical code
    AudioBufferHandler::SampleRate() const;

    // 0x1003cf2a0: the linker folded this into game::WorldMapDefaults::GetDropShadowColourRGBA() const, which has identical code
    AudioBufferHandler::GetReadOffsetSamples(unsigned int) const;

    // 0x100b8d3e0, 128 bytes, base-object constructor, placed by class name and debug map
    // AudioBufferHandler::AudioBufferHandler(unsigned int, shared_ptr<AudioBuffer> const&)
    void AudioBufferHandler::AudioBufferHandler(uint param_1, shared_ptr* param_2) {
        long* plVar2;

        new (this) SampleReadable();
        field_0 = &PTR__AudioBufferHandler_100f267e8;
        new (&field_8, param_2) shared_ptr<oldscape::dash3d::Decor>();
        field_24 = 0;
        plVar2 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)param_2);
        field_28 = (**(code**)(*plVar2 + 40))(plVar2);
        field_32 = param_1;
    }

    // 0x100b8d4a0, 16 bytes, complete-object constructor, placed by class name and debug map
    // AudioBufferHandler::AudioBufferHandler(unsigned int, shared_ptr<AudioBuffer> const&): jumps straight to the base-object constructor

    // 0x100b8d4b0, 208 bytes, placed by class name and debug map
    // AudioBufferHandler::GetNumberSamplesCanBeRead(unsigned int) const
    int AudioBufferHandler::GetNumberSamplesCanBeRead(uint param_1) {
        undefined1* this_00;
        uint uVar1;
        uint uVar2;
        long* plVar4;
        undefined8 uVar5;

        this_00 = &field_8;
        plVar4 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
        uVar1 = (**(code**)(*plVar4 + 80))(plVar4);
        plVar4 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
        uVar2 = (**(code**)(*plVar4 + 16))(plVar4, 0);
        if ((uVar1 != uVar2) && (uVar2 != 0)) {
            if (uVar2 == field_24) {
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                    "AudioBufferHandler.cpp",
                                    35,
                                    "Warning, read all available samples, but we\'re still waiting on samples to "
                                    "decode, potential gap in playback for this sound.");
            }
            if ((uVar2 < field_32) && (field_32 <= uVar1)) {
                uVar5 = logger::default_logger();
                logger::Logger::Log(uVar5, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/"
                                    "AudioBufferHandler.cpp",
                                    39,
                                    "Warning, we haven\'t managed to decode a safe number of samples while waiting for "
                                    "the rest of the samples to decode. Potential gap in playback for this sound.");
            }
        }
        plVar4 = (long*)shared_ptr<AudioBuffer>::operator->((shared_ptr<AudioBuffer>*)this_00);
        return (**(code**)(*plVar4 + 16))(plVar4, 0) - field_24;
    }

} // namespace jag::hal::audio
