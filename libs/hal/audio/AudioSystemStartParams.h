// libs/hal/audio/AudioSystemStartParams.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    // 0x1001c35e0
    void OSRenderCore_LogicThread_Common::SetThreadID() {
        field_8 = this_thread::GetThreadID();
    }

    // 0x1001c3600
    void OSRenderCore_AnyThread::DestroyAudio() {
        Layout* this_00 = (Layout*)(*(void (*)(...))*field_0)();
        auto this_01 = this_00->SSOBeginPtr();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            ((AudioAPI*)(*(void (*)(...))*field_0)(this))->StopAudioSystem();
        }
    }

    // 0x1001c3770
    OSRenderCore_AnyThread* OSRenderCore_AnyThread::Instance() {
        return (OSRenderCore_AnyThread*)(OSRenderCore_Impl::m_pCore + 16020848);
    }

} // namespace jag::oldscape

namespace jag::hal::audio {
    class AudioSystemStartParams {
    public:
        AudioSystemStartParams();

    private:
        uint64_t field_0;
        uint64_t field_8;
    };

    // 0x1001da7b0
    AudioSystemStartParams::AudioSystemStartParams() : field_0(189408057753656), field_8(4398046515200) {}

} // namespace jag::hal::audio
