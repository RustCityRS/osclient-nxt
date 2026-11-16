// libs/hal/audio/workers/MixerWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "MixerWorker.h"

// 0x100b8eb10
void MixerWorker::Init(jag::hal::audio::AudioAPI* audioAPI) {
    this[56]._vptr = (MixerWorker_vtbl*)audioAPI;
}

// 0x100b91ea0
MixerWorker::MixerWorker() : jag::Task(1) {
    SetInterval(1);
}

// 0x100b91f00
void MixerWorker::OnInterval(float arg1, unsigned long long arg2) {
    shared_ptr* this_00;
    AudioMixer* this_02;
    scoped_lock<std::mutex> local_30;

    if (this[56]._vptr != nullptr) {
        local_30 = std::scoped_lock(*((mutex*)&jag::hal::audio::AudioRenderer::m_audioMutex));
        this_00 = (shared_ptr*)this[56]._vptr->SSOBeginPtr();
        if (jag::shared_ptr::operator_cast_to_bool(this_00) != '\0') {
            this_02 = ((AudioRenderer*)(*this_00).operator->())->GetMixer();
            if (this_02 != nullptr) {
                if (((TcpConnectionMessageBase*)(*this_00).operator->())->GetEndPosition() == 1) {
                    this_02->Service(arg1);
                    this[56]._vptr->ServiceAudio(arg1);
                }
            }
        }
    }
}

namespace jag {
    // 0x100b8eed0
    shared_ptr_if_not_array<hal::audio::AudioBuss>::type
    make_shared<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(
        hal::audio::BussType& bussType, unsigned int& arg2, unsigned int& arg3, float& arg4, unsigned int& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        AudioBuss* local_40[2];

        auto arg1 = aligned_alloc(144, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<hal::audio::AudioBuss>::type result;
        } else {
            local_40[0] =
                placement_new<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&,
                              unsigned int&>((void*)((long)arg1 + 32), bussType, arg2, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(arg1, &local_44,
                                                                                                       local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
