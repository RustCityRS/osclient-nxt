// libs/hal/audio/AudioSystemStartParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::hal::audio {
    class AudioSystemStartParams {
    public:
        AudioSystemStartParams();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
    };

    // 0x1001c35d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AudioSystemStartParams::AudioSystemStartParams(): jumps straight to the base-object constructor

    // 0x1001da7b0, 16 bytes, base-object constructor, inline, placed by class name
    // AudioSystemStartParams::AudioSystemStartParams()
    void AudioSystemStartParams::AudioSystemStartParams() {
        field_0 = 189408057753656;
        field_8 = 4398046515200;
    }

} // namespace jag::hal::audio

namespace jag::oldscape {
    // 0x1001c35e0, 32 bytes, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetThreadID()
    void OSRenderCore_LogicThread_Common::SetThreadID() {
        field_8 = this_thread::GetThreadID();
    }

    // 0x1001c3600, 64 bytes, placed by debug map only (low confidence)
    // OSRenderCore_AnyThread::DestroyAudio()
    void OSRenderCore_AnyThread::DestroyAudio() {
        Layout* this_00;
        shared_ptr* this_01;
        AudioAPI* this_02;
        type* in_RSI;

        this_00 = (Layout*)(*(code*)*field_0)();
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_02 = (AudioAPI*)(*(code*)*field_0)(this);
            this_02->StopAudioSystem();
        }
    }

    // 0x1001c3770, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_AnyThread::Instance()
    long OSRenderCore_AnyThread::Instance() {
        return OSRenderCore_Impl::m_pCore + 16020848;
    }

} // namespace jag::oldscape
