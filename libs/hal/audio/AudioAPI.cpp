// libs/hal/audio/AudioAPI.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioAPI.h"

namespace jag::hal::audio {
    // 0x100009ca0: AudioAPI::GetRenderer() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100b8afc0
    uint32_t AudioAPI::StartAudioSystem(const AudioSystemStartParams& audioSystemStartParams,
                                        const AudioOptionsCallbacks* audioOptionsCallbacks) {
        uint32_t uVar2;
        ReturnValue local_38;

        auto pLVar3 = logger::default_logger();
        pLVar3->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp", 20,
                    "Instantiating AudioRenderer: %s", "OSX");
        make_shared<osx::OSXAudioRenderer>(&local_38);
        *this = local_38;
        if (!(operator_cast_to_bool())) {
            return 0;
        }
        long* plVar4 = (long*)(*this).operator->();
        if (!((**(void (**)(...))(*plVar4 + 16))(plVar4, this, audioSystemStartParams))) {
            uVar2 = 0;
        } else {
            if (audioOptionsCallbacks == nullptr) {
                return 1;
            }
            uVar2 = ConfigureRoutingArchitecture(*audioOptionsCallbacks);
            if ((char)uVar2 != '\0') {
                return uVar2;
            }
        }
        pLVar3 = logger::default_logger();
        pLVar3->Log(false, 3,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp", 30,
                    "AUDIO ENGINE FAILED TO INITIALISE");
        plVar4 = (long*)(*this).operator->();
        (**(void (**)(...))(*plVar4 + 24))(plVar4);
        return uVar2;
    }

    // 0x100b8b1c0
    unsigned long AudioAPI::ConfigureRoutingArchitecture(const AudioOptionsCallbacks& audioOptionsCallbacks) {
        unsigned int arg2;
        AudioRenderer* pAVar2;
        AudioMixer* pAVar3;
        NXTPixToolkit* this_00;
        long lVar4;
        unsigned long uVar5;
        void* pvVar6;
        function<float()> local_68[56];
        long local_30;

        if (operator_cast_to_bool()) {
            pAVar2 = (AudioRenderer*)(*this).operator->();
            pAVar3 = pAVar2->GetMixer();
            if (pAVar3 != nullptr) {
                this_00 = (NXTPixToolkit*)(*this).operator->();
                lVar4 = this_00->GetScreen();
                arg2 = *(unsigned int*)(lVar4 + 4);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pAVar3->AddBuss(1, arg2, 2, 0.2, 0, audioOptionsCallbacks);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pAVar3->AddBuss(2, arg2, 2, 1.0, 0, audioOptionsCallbacks.field_48);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pAVar3->AddBuss(3, arg2, 2, 1.0, 0, audioOptionsCallbacks.field_96);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pAVar3->AddBuss(4, arg2, 2, 0.8, 0, audioOptionsCallbacks.field_144);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pvVar6 = (void*)5;
                pAVar3->AddBuss(5, arg2, 2, 1.0, 0, audioOptionsCallbacks.field_192);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)6;
                pAVar3->AddBuss(6, arg2, 2, 1.0, 1, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)10;
                pAVar3->AddBuss(10, arg2, 2, 1.0, 1, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)9;
                pAVar3->AddBuss(9, arg2, 2, 1.0, 1, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)11;
                pAVar3->AddBuss(11, arg2, 2, 1.0, 1, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)12;
                pAVar3->AddBuss(12, arg2, 2, 1.0, 1, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)7;
                pAVar3->AddBuss(7, arg2, 2, 1.0, 2, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)13;
                pAVar3->AddBuss(13, arg2, 2, 1.0, 4, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)15;
                pAVar3->AddBuss(15, arg2, 2, 1.0, 13, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pvVar6 = (void*)14;
                pAVar3->AddBuss(14, arg2, 2, 1.0, 13, *local_68);
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                new (local_68) std::function<float()>(pvVar6);
                pAVar3->AddBuss(8, arg2, 2, 1.0, 5, *local_68);
                uVar5 = (((uint64_t)((int64_t)((unsigned long)pAVar3 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100b8b665;
            }
        }
        auto this_01 = logger::default_logger();
        uVar5 = 0;
        this_01->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp",
                     150, "AUDIO: Was unable to configure routing architecture for audio mix busses.");
    LAB_100b8b665:
        return uVar5 & 4294967295;
    }

    // 0x100b8b6b0
    void AudioAPI::StopAudioSystem() {
        long* plVar2;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_28;

        if (operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2);
            local_28 = shared_ptr();
            *this = local_28;
        }
    }

    // 0x100b8b720
    uint32_t AudioAPI::RestartAudioSystem(const AudioOptionsCallbacks* audioOptionsCallbacks) {
        uint32_t uVar2;

        if (!(operator_cast_to_bool())) {
            return 0;
        }
        long* plVar3 = (long*)(*this).operator->();
        uint64_t uVar4 = ((NXTPixToolkit*)(*this).operator->())->GetScreen();
        if (!((**(void (**)(...))(*plVar3 + 16))(plVar3, this, uVar4))) {
            uVar2 = 0;
        } else {
            if (audioOptionsCallbacks == nullptr) {
                return 1;
            }
            uVar2 = ConfigureRoutingArchitecture(*audioOptionsCallbacks);
            if ((char)uVar2 != '\0') {
                return uVar2;
            }
        }
        (logger::default_logger())
            ->Log(false, 3,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/audio/AudioAPI.cpp", 54,
                  "AUDIO ENGINE FAILED TO RESTART");
        plVar3 = (long*)(*this).operator->();
        (**(void (**)(...))(*plVar3 + 24))(plVar3);
        return uVar2;
    }

    // 0x100b8b7f0
    uint64_t AudioAPI::GetDecoder(const AudioFormat* audioFormat) {
        long* plVar2;
        uint64_t uVar3;

        scoped_lock<std::mutex> local_20(*((mutex*)&AudioRenderer::m_audioMutex));
        if (operator_cast_to_bool() == '\0') {
            uVar3 = 0;
        } else {
            plVar2 = (long*)(*this).operator->();
            uVar3 = (**(void (**)(...))(*plVar2 + 56))(plVar2, audioFormat);
        }
        return uVar3;
    }

    // 0x100b8b870
    void AudioAPI::FreeDecoder(decoders::AudioDecoder* audioDecoder) {
        long* plVar2;

        scoped_lock<std::mutex> local_20(*((mutex*)&AudioRenderer::m_audioMutex));
        if ((operator_cast_to_bool() != '\0') && (audioDecoder != nullptr)) {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 64))(plVar2, audioDecoder);
        }
    }

    // 0x100b8b8e0
    uint64_t AudioAPI::ActiveDecoderCount() {
        long* plVar3;

        bool cVar1 = operator_cast_to_bool();
        uint64_t uVar2 = 4294967295;
        if (cVar1) {
            plVar3 = (long*)(*this).operator->();
            uVar2 = (**(void (**)(...))(*plVar3 + 72))(plVar3);
        }
        return uVar2;
    }

    // 0x100b8b920
    void AudioAPI::ServiceAudio(float arg1) {
        long* plVar2;

        if (operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 48))(arg1, plVar2);
        }
    }

    // 0x100b8b960
    void AudioAPI::AddMixBuss(BussType bussType1, unsigned int arg2, unsigned int arg3, float arg4, BussType bussType2,
                              const std::function<float()>& callback) {
        AudioRenderer* pAVar2;
        AudioMixer* pAVar3;

        if (operator_cast_to_bool() != '\0') {
            pAVar2 = (AudioRenderer*)(*this).operator->();
            pAVar3 = pAVar2->GetMixer();
            if (pAVar3 != nullptr) {
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                pAVar3->AddBuss(bussType1, arg2, arg3, arg4, bussType2, callback);
            }
        }
    }

    // 0x100b8bb00
    uint8_t* AudioAPI::GetMixBuss(BussType bussType) {
        AudioRenderer* pAVar2;
        AudioMixer* pAVar3;

        bool cVar1 = operator_cast_to_bool();
        uint8_t* puVar4 = &AudioBuss::NullAudioBuss;
        if (cVar1) {
            pAVar2 = (AudioRenderer*)(*this).operator->();
            pAVar3 = pAVar2->GetMixer();
            if (pAVar3 != nullptr) {
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                puVar4 = (uint8_t*)pAVar3->GetBuss(bussType);
            }
        }
        return puVar4;
    }

    // 0x100b8bc10
    uint64_t AudioAPI::GetMixBussTotalGain(BussType bussType) {
        auto this_01 = GetMixBuss(bussType);
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_01);
        uint64_t uVar2 = 0;
        if (cVar1) {
            uVar2 = ((AudioBuss*)(*this_01).operator->())->GetTotalGainOfChain();
        }
        return uVar2;
    }

    // 0x100b8bd20
    bool AudioAPI::IsMixBussInChain(BussType bussType1, BussType bussType2) {
        AudioRenderer* pAVar2;
        AudioMixer* pAVar3;
        shared_ptr<AudioBuss>* this_01;

        if (operator_cast_to_bool()) {
            pAVar2 = (AudioRenderer*)(*this).operator->();
            pAVar3 = pAVar2->GetMixer();
            if (pAVar3 != nullptr) {
                pAVar2 = (AudioRenderer*)(*this).operator->();
                pAVar3 = pAVar2->GetMixer();
                if ((pAVar3->GetBuss(bussType1))->operator_cast_to_bool()) {
                    pAVar2 = (AudioRenderer*)(*this).operator->();
                    pAVar3 = pAVar2->GetMixer();
                    this_01 = (shared_ptr<AudioBuss>*)pAVar3->GetBuss(bussType1);
                    return ((AudioBuss*)(*this_01).operator->())->IsMixBussInChain(bussType2);
                }
            }
        }
        return 0;
    }

    // 0x100b8be00
    void AudioAPI::VerifyDefaultAudioDevice() {
        long* plVar2;

        if (operator_cast_to_bool() != '\0') {
            plVar2 = (long*)(*this).operator->();
            (**(void (**)(...))(*plVar2 + 80))(plVar2);
        }
    }

} // namespace jag::hal::audio

namespace jag {
    // 0x100b8b0f0
    shared_ptr_if_not_array<hal::audio::osx::OSXAudioRenderer>::type make_shared<hal::audio::osx::OSXAudioRenderer>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        OSXAudioRenderer* local_28[2];

        auto arg1 = aligned_alloc(352, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<hal::audio::osx::OSXAudioRenderer>::type result;
        } else {
            local_28[0] = placement_new<hal::audio::osx::OSXAudioRenderer>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<hal::audio::osx::OSXAudioRenderer>, int,
                              hal::audio::osx::OSXAudioRenderer*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
