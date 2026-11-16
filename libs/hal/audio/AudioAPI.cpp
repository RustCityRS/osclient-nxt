// libs/hal/audio/AudioAPI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioAPI.h"

namespace jag::hal::audio {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    AudioAPI::GetRenderer() const;

    // 0x100b8afc0, 304 bytes, placed by class name and debug map
    // AudioAPI::StartAudioSystem(AudioSystemStartParams const&, AudioOptionsCallbacks const*)
    undefined4 AudioAPI::StartAudioSystem(AudioSystemStartParams* param_1, AudioOptionsCallbacks* param_2) {
        undefined4 uVar3;
        undefined8 uVar4;
        long* plVar5;
        shared_ptr local_38;

        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 5, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp",
            20, "Instantiating AudioRenderer: %s", "OSX");
        make_shared<osx::OSXAudioRenderer>((jag*)&local_38);
        shared_ptr<AudioRenderer>::operator=((shared_ptr<AudioRenderer>*)this, &local_38);
        local_38.~shared_ptr();
        if (!operator_cast_to_bool()) {
            return 0;
        }
        plVar5 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
        if ((**(code**)(*plVar5 + 16))(plVar5, this, param_1) == '\0') {
            uVar3 = 0;
        } else {
            if (param_2 == (AudioOptionsCallbacks*)0) {
                return 1;
            }
            uVar3 = ConfigureRoutingArchitecture(this, param_2);
            if ((char)uVar3 != '\0') {
                return uVar3;
            }
        }
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 3, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp",
            30, "AUDIO ENGINE FAILED TO INITIALISE");
        plVar5 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
        (**(code**)(*plVar5 + 24))(plVar5);
        return uVar3;
    }

    // 0x100b8b1c0, 1264 bytes, placed by class name and debug map
    // AudioAPI::ConfigureRoutingArchitecture(AudioOptionsCallbacks const&)
    ulong AudioAPI::ConfigureRoutingArchitecture(AudioOptionsCallbacks* param_1) {
        undefined4 uVar1;
        bool bVar2;
        AudioRenderer* pAVar3;
        long lVar4;
        NXTPixToolkit* this_00;
        undefined8 uVar5;
        ulong uVar6;
        function<float()> local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar2 = operator_cast_to_bool();
        if (bVar2) {
            pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            lVar4 = pAVar3->GetMixer();
            if (lVar4 != 0) {
                this_00 = (NXTPixToolkit*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                lVar4 = this_00->GetScreen();
                uVar1 = *(undefined4*)(lVar4 + 4);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                1045220557->AddBuss(uVar5, 1, uVar1, 2, 0, param_1);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                1065353216->AddBuss(uVar5, 2, uVar1, 2, 0, &param_1->field_48);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                1065353216->AddBuss(uVar5, 3, uVar1, 2, 0, &param_1->field_96);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                1061997773->AddBuss(uVar5, 4, uVar1, 2, 0, &param_1->field_144);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                1065353216->AddBuss(uVar5, 5, uVar1, 2, 0, &param_1->field_192);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 6, uVar1, 2, 1, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 10, uVar1, 2, 1, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 9, uVar1, 2, 1, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 11, uVar1, 2, 1, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 12, uVar1, 2, 1, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 7, uVar1, 2, 2, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 13, uVar1, 2, 4, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 15, uVar1, 2, 13, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 14, uVar1, 2, 13, local_68);
                std::function<float()>::~function(local_68);
                pAVar3 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar5 = pAVar3->GetMixer();
                std::function<float()>::function((_func_decltype_nullptr*)local_68);
                1065353216->AddBuss(uVar5, 8, uVar1, 2, 5, local_68);
                std::function<float()>::~function(local_68);
                uVar6 = CONCAT71((int7)((ulong)uVar5 >> 8), 1);
                goto LAB_100b8b665;
            }
        }
        uVar5 = logger::default_logger();
        uVar6 = 0;
        logger::Logger::Log(
            uVar5, 0, 2, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp",
            150, "AUDIO: Was unable to configure routing architecture for audio mix busses.");
    LAB_100b8b665:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar6 & 4294967295;
    }

    // 0x100b8b6b0, 112 bytes, placed by class name and debug map
    // AudioAPI::StopAudioSystem()
    void AudioAPI::StopAudioSystem() {
        long* plVar2;
        shared_ptr local_28;

        if (operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            (**(code**)(*plVar2 + 24))(plVar2);
            new (&local_28) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            shared_ptr<AudioRenderer>::operator=((shared_ptr<AudioRenderer>*)this, &local_28);
            local_28.~shared_ptr();
        }
    }

    // 0x100b8b720, 208 bytes, placed by class name and debug map
    // AudioAPI::RestartAudioSystem(AudioOptionsCallbacks const*)
    undefined4 AudioAPI::RestartAudioSystem(AudioOptionsCallbacks* param_1) {
        undefined4 uVar3;
        long* plVar4;
        NXTPixToolkit* this_00;
        undefined8 uVar5;

        if (!operator_cast_to_bool()) {
            return 0;
        }
        plVar4 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
        this_00 = (NXTPixToolkit*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
        uVar5 = this_00->GetScreen();
        if ((**(code**)(*plVar4 + 16))(plVar4, this, uVar5) == '\0') {
            uVar3 = 0;
        } else {
            if (param_1 == (AudioOptionsCallbacks*)0) {
                return 1;
            }
            uVar3 = ConfigureRoutingArchitecture(this, param_1);
            if ((char)uVar3 != '\0') {
                return uVar3;
            }
        }
        uVar5 = logger::default_logger();
        logger::Logger::Log(
            uVar5, 0, 3, "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp",
            54, "AUDIO ENGINE FAILED TO RESTART");
        plVar4 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
        (**(code**)(*plVar4 + 24))(plVar4);
        return uVar3;
    }

    // 0x100b8b7f0, 128 bytes, placed by class name and debug map
    // AudioAPI::GetDecoder(AudioFormat const*)
    undefined8 AudioAPI::GetDecoder(AudioFormat* param_1) {
        long* plVar2;
        undefined8 uVar3;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&AudioRenderer::m_audioMutex);
        if (operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            uVar3 = (**(code**)(*plVar2 + 56))(plVar2, param_1);
        } else {
            uVar3 = 0;
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
        return uVar3;
    }

    // 0x100b8b870, 112 bytes, placed by class name and debug map
    // AudioAPI::FreeDecoder(decoders::AudioDecoder*)
    void AudioAPI::FreeDecoder(AudioDecoder* param_1) {
        long* plVar2;
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&AudioRenderer::m_audioMutex);
        if ((operator_cast_to_bool()) && (param_1 != (AudioDecoder*)0)) {
            plVar2 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            (**(code**)(*plVar2 + 64))(plVar2, param_1);
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100b8b8e0, 64 bytes, placed by class name and debug map
    // AudioAPI::ActiveDecoderCount()
    undefined8 AudioAPI::ActiveDecoderCount() {
        bool bVar1;
        undefined8 uVar2;
        long* plVar3;

        bVar1 = operator_cast_to_bool();
        uVar2 = 4294967295;
        if (bVar1) {
            plVar3 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            uVar2 = (**(code**)(*plVar3 + 72))(plVar3);
        }
        return uVar2;
    }

    // 0x100b8b920, 64 bytes, placed by class name and debug map
    // AudioAPI::ServiceAudio(float)
    void AudioAPI::ServiceAudio(float param_1) {
        long* plVar2;

        if (operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            (**(code**)(*plVar2 + 48))(param_1, plVar2);
        }
    }

    // 0x100b8b960, 144 bytes, placed by class name and debug map
    // AudioAPI::AddMixBuss(BussType, unsigned int, unsigned int, float, BussType, std::function<float ()> const&)
    /* AudioAPI::AddMixBuss(BussType, unsigned int, unsigned int,
   float, BussType, std::function<float ()> const&) */

    void AudioAPI::AddMixBuss(AudioMixer* param_1, AudioAPI* this, undefined4 param_3, undefined4 param_4,
                              undefined4 param_5, undefined4 param_6, undefined8 param_7) {
        AudioRenderer* pAVar1;
        undefined8 uVar3;

        if (operator_cast_to_bool()) {
            pAVar1 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            if (pAVar1->GetMixer() != 0) {
                pAVar1 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                uVar3 = pAVar1->GetMixer();
                param_1._0_4_->AddBuss(uVar3, param_3, param_4, param_5, param_6, param_7);
            }
        }
    }

    // 0x100b8bb00, 112 bytes, placed by class name
    // AudioAPI::GetMixBuss(BussType)
    undefined1* AudioAPI::GetMixBuss(undefined4 param_2) {
        bool bVar1;
        AudioRenderer* pAVar2;
        AudioMixer* pAVar4;
        undefined1* puVar5;

        bVar1 = operator_cast_to_bool();
        puVar5 = &AudioBuss::NullAudioBuss;
        if (bVar1) {
            pAVar2 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            if (pAVar2->GetMixer() != 0) {
                pAVar2 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                pAVar4 = (AudioMixer*)pAVar2->GetMixer();
                puVar5 = (undefined1*)pAVar4->GetBuss(param_2);
            }
        }
        return puVar5;
    }

    // 0x100b8bc10, 64 bytes, placed by class name
    // AudioAPI::GetMixBussTotalGain(BussType)
    undefined8 AudioAPI::GetMixBussTotalGain() {
        AudioBuss* this;
        bool bVar1;
        shared_ptr* this_00;
        undefined8 uVar2;

        this_00 = (shared_ptr*)GetMixBuss();
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        uVar2 = 0;
        if (bVar1) {
            this = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)this_00);
            uVar2 = GetTotalGainOfChain();
        }
        return uVar2;
    }

    // 0x100b8bd20, 160 bytes, placed by class name
    // AudioAPI::IsMixBussInChain(BussType, BussType)
    undefined8 AudioAPI::IsMixBussInChain(undefined4 param_2, undefined4 param_3) {
        bool bVar1;
        AudioRenderer* pAVar2;
        AudioMixer* pAVar4;
        shared_ptr* this_00;
        shared_ptr<AudioBuss>* this_01;
        AudioBuss* pAVar5;

        bVar1 = operator_cast_to_bool();
        if (bVar1) {
            pAVar2 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            if (pAVar2->GetMixer() != 0) {
                pAVar2 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                pAVar4 = (AudioMixer*)pAVar2->GetMixer();
                this_00 = (shared_ptr*)pAVar4->GetBuss(param_2);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    pAVar2 = (AudioRenderer*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
                    pAVar4 = (AudioMixer*)pAVar2->GetMixer();
                    this_01 = (shared_ptr<AudioBuss>*)pAVar4->GetBuss(param_2);
                    pAVar5 = (AudioBuss*)shared_ptr<AudioBuss>::operator->(this_01);
                    return pAVar5->IsMixBussInChain(param_3);
                }
            }
        }
        return 0;
    }

    // 0x100b8be00, 48 bytes, placed by class name
    // AudioAPI::VerifyDefaultAudioDevice()
    void AudioAPI::VerifyDefaultAudioDevice() {
        long* plVar2;

        if (operator_cast_to_bool()) {
            plVar2 = (long*)shared_ptr<AudioRenderer>::operator->((shared_ptr<AudioRenderer>*)this);
            (**(code**)(*plVar2 + 80))(plVar2);
        }
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b8b0f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<hal::audio::osx::OSXAudioRenderer>::type make_shared<hal::audio::osx::OSXAudioRenderer>()
    jag* make_shared<hal::audio::osx::OSXAudioRenderer>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        OSXAudioRenderer* local_28[2];

        pvVar1 = (void*)aligned_alloc(352, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<hal::audio::osx::OSXAudioRenderer>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<hal::audio::osx::OSXAudioRenderer>, int,
                                   hal::audio::osx::OSXAudioRenderer*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
