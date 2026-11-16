// libs/hal/audio/workers/MixerWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "MixerWorker.h"

// 0x100b8eb10, 16 bytes, placed by class name and debug map
// MixerWorker::Init(jag::hal::audio::AudioAPI*)
void MixerWorker::Init(AudioAPI* param_1) {
    *(AudioAPI**)(this + 448) = param_1;
}

// 0x100b91ea0, 80 bytes, base-object constructor, placed by class name
// MixerWorker::MixerWorker()
void MixerWorker::MixerWorker() {
    new (this) jag::Task(1);
    *(undefined***)this = &PTR__MixerWorker_100f269b0;
    *(undefined8*)(this + 448) = 0;
    SetInterval(1);
}

// 0x100b91ef0, 16 bytes, complete-object constructor, placed by class name
// MixerWorker::MixerWorker(): jumps straight to the base-object constructor

// 0x100b91f00, 208 bytes, placed by class name
// MixerWorker::OnInterval(float, unsigned long long)
void MixerWorker::OnInterval(float param_1, ulonglong param_2) {
    shared_ptr* this_00;
    AudioRenderer* this_01;
    AudioMixer* this_02;
    TcpConnectionMessageBase* this_03;
    type* ptVar3;
    scoped_lock<std::mutex> local_30[12];

    if (*(long*)(this + 448) != 0) {
        ptVar3 = (type*)&jag::hal::audio::AudioRenderer::m_audioMutex;
        std::scoped_lock<std::mutex>::scoped_lock(local_30, (mutex*)&jag::hal::audio::AudioRenderer::m_audioMutex);
        this_00 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(*(Layout**)(this + 448), ptVar3);
        if (jag::shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (AudioRenderer*)jag::shared_ptr<jag::hal::audio::AudioRenderer>::operator->(
                (shared_ptr<jag::hal::audio::AudioRenderer>*)this_00);
            this_02 = (AudioMixer*)this_01->GetMixer();
            if (this_02 != (AudioMixer*)0) {
                this_03 = (TcpConnectionMessageBase*)jag::shared_ptr<jag::hal::audio::AudioRenderer>::operator->(
                    (shared_ptr<jag::hal::audio::AudioRenderer>*)this_00);
                if (this_03->GetEndPosition() == 1) {
                    this_02->Service(param_1);
                    (*(AudioAPI**)(this + 448))->ServiceAudio(param_1);
                }
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_30);
    }
}

namespace jag {
    // 0x100b8eed0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::AudioBuss>::type make_shared<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&)
    jag*
    jag::make_shared<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(
        BussType* param_1, uint* param_2, uint* param_3, float* param_4, uint* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AudioBuss* local_40[2];

        pvVar1 = (void*)aligned_alloc(144, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<hal::audio::AudioBuss, hal::audio::BussType&, unsigned int&, unsigned int&, float&,
                              unsigned int&>((void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::AudioBuss>, int, hal::audio::AudioBuss*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

} // namespace jag
