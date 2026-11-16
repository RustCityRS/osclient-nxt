// libs/hal/audio/AudioMixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.audio

#include "AudioMixer.h"

namespace jag::hal::audio {
    // 0x100d6abb0
    float AudioMixer::UPDATE_TIME_DELTA[4] = {1.0f, 0, 0, 0};

    // 0x100b8b9f0
    void AudioMixer::AddBuss(BussType bussType1, unsigned int arg2, unsigned int arg3, float arg4, BussType bussType2,
                             const std::function<float()>& callback) {
        long lVar2;
        AudioBuss* pAVar3;
        shared_ptr<AudioBuss>* audioBuss;
        ReturnValue local_58;
        scoped_lock<std::mutex> local_48;
        unsigned int local_2c;

        BussType local_3c = bussType1;
        unsigned int local_38 = arg2;
        unsigned int local_34 = arg3;
        float local_30 = arg4;
        if (!((GetBuss(bussType1))->operator_cast_to_bool())) {
            lVar2 = field_8->GetScreen();
            local_2c = *(unsigned int*)(lVar2 + 8);
            make_shared<AudioBuss, BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(
                &local_58, &local_3c, &local_38, &local_34, &local_30, &local_2c);
            pAVar3 = (AudioBuss*)local_58.operator->();
            audioBuss = (shared_ptr<AudioBuss>*)GetBuss(bussType2);
            pAVar3->AddRouting(*audioBuss);
            if (callback.operator_cast_to_bool()) {
                pAVar3 = (AudioBuss*)local_58.operator->();
                pAVar3->SetUpdateGainFunction(callback);
            }
            local_48 = std::scoped_lock(field_64);
            field_32.push_back(local_58);
        }
    }

    // 0x100b8bb70
    shared_ptr* AudioMixer::GetBuss(BussType bussType) const {
        auto this_00 = field_32.HeapBeginPtr();
        auto psVar3 = field_32.end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr*)&AudioBuss::NullAudioBuss;
            }
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                if (((MSIType*)(*this_00).operator->())->GetTint() == bussType) {
                    return this_00;
                }
            }
            this_00 = this_00 + 1;
        } while (true);
    }

    // 0x100b8e5d0
    AudioMixer::AudioMixer(AudioAPI* audioAPI, const AudioSystemStartParams& audioSystemStartParams) {
        ReturnValue local_60;

        auto this_00 = audioAPI->SSOBeginPtr();
        auto this_01 = this_00->end();
        field_8 = this_01;
        local_60[0]._0_4_ = 0;
        float local_3c = 2.8026e-45;
        unsigned int local_38 = 1065353216;
        long lVar1 = this_01->GetScreen();
        uint8_t local_31 = 1;
        shared_ptr<AudioBuss>* local_50 = (shared_ptr<AudioBuss>*)&field_16;
        make_shared<AudioBuss, BussType, unsigned int const&, int, float, unsigned int const&, bool>(
            &field_16, &local_60, (int*)((long)&audioSystemStartParams.field_0 + 4), &local_3c, &local_38,
            (bool*)(lVar1 + 8));
        vector<shared_ptr<AudioBuss>>* local_48 = (vector<shared_ptr<AudioBuss>>*)&field_32;
        new (local_48) eastl::vector<shared_ptr<AudioBuss>>();
        new (&field_64) std::mutex();
        new (&field_128) std::array<VoiceInstance, 64ul>();
        auto str = getTaskRunner();
        make_shared<MixerWorker>(&local_60);
        field_22144->AddTask<MixerWorker>(str, (shared_ptr<MixerWorker>*)"MixerWorker");
        *(uint32_t*)(field_22144 + 16) = 1065353216;
        *(uint32_t*)(field_22144 + 20) = *(uint32_t*)&audioSystemStartParams.field_0;
        local_48->push_back(*local_50);
        VoiceInstance* this_02 = std::array<VoiceInstance, 64ul>::begin();
        VoiceInstance* pVVar2 = std::array<VoiceInstance, 64ul>::end();
        for (; this_02 != pVVar2; this_02 = (VoiceInstance*)&this_02->field_344) {
            this_02->Init(field_8, 2048);
        }
        ((MixerWorker*)(*field_22144).operator->())->Init(audioAPI);
    }

    // 0x100b8eb50
    void AudioMixer::ShutDown() {
        uint8_t* this_01 = field_22144;
        if (this_01->operator_cast_to_bool() != '\0') {
            ((Task*)(*this_01).operator->())->Join();
            this_01->reset();
        }
    }

    // 0x100b8ebd0
    AudioMixer::~AudioMixer() {
        field_22144->~shared_ptr();
        field_128.~array();
        (&field_64)->~mutex();
        field_32.~vector();
    }

    // 0x100b8ec50
    void AudioMixer::Service(float arg1) {
        MixVoices(arg1);
        scoped_lock<std::mutex> local_20(field_64);
        auto this_01 = field_32.HeapBeginPtr();
        auto psVar2 = field_32.end();
        for (; this_01 != psVar2; this_01 = this_01 + 1) {
            if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                ((AudioBuss*)(*this_01).operator->())->Service();
            }
        }
    }

    // 0x100b8ecf0
    void AudioMixer::MixVoices(float arg1) {
        uint64_t uVar3;
        uint64_t* puVar4;
        VoiceInstance** arg1_00;
        VoiceInstance** arg2;
        VoiceInstance* pVVar5;
        unsigned long arg1_01;
        bool arg1_02;
        int iVar7;
        int iVar8;
        float extraout_XMM0_Da;
        uint8_t auVar9[16];
        array<VoiceInstance*, 64ul> local_248[512];
        shared_ptr<AudioBuss>* local_48;

        *(float*)(field_22144 + 16) = *(float*)(field_22144 + 16) - arg1;
        shared_ptr<AudioBuss>* this_00 = (shared_ptr<AudioBuss>*)&field_16;
        AudioBuss* pAVar2 = (AudioBuss*)(*this_00).operator->();
        pAVar2->PreMix();
        scoped_lock<std::mutex> local_40(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        if (*(float*)(field_22144 + 16) <= 0.0) {
            *(uint32_t*)(field_22144 + 16) = 1065353216;
            arg1_01 = 0;
            local_48 = this_00;
            do {
                uVar3 = field_128[arg1_01];
                puVar4 = (uint64_t*)(*local_248)[arg1_01];
                *puVar4 = uVar3;
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 != 64);
            arg1_00 = (VoiceInstance**)std::array<VoiceInstance*, 64ul>::begin();
            auVar9 = std::array<VoiceInstance*, 64ul>::end();
            arg2 = auVar9._0_8_;
            std::sort<VoiceInstance**, float->MixVoices()::__0>(arg1_00, arg2, auVar9._8_8_);
            if (arg1_00 != arg2) {
                iVar7 = 0;
                do {
                    pVVar5 = *arg1_00;
                    if (pVVar5->IsPlaying()) {
                        iVar8 = iVar7 + 1;
                        if (!(pVVar5->IsPersistent())) {
                            if (56 < iVar7) {
                                pVVar5->Suspend();
                                iVar7 = iVar8;
                                goto LAB_100b8ede3;
                            }
                            if (iVar8 < *(int*)(field_22144 + 20))
                                goto LAB_100b8ee0e;
                            arg1_02 = true;
                        } else {
                        LAB_100b8ee0e:
                            arg1_02 = false;
                        }
                        pVVar5->NotifyDebugRegistration(arg1_02);
                        iVar7 = iVar8;
                    }
                LAB_100b8ede3:
                    arg1_00 = arg1_00 + 1;
                } while (arg1_00 != arg2);
            }
            this_00 = local_48;
        }
        pVVar5 = std::array<VoiceInstance, 64ul>::begin();
        VoiceInstance* pVVar6 = std::array<VoiceInstance, 64ul>::end();
        float arg1_03 = extraout_XMM0_Da;
        for (; pVVar5 != pVVar6; pVVar5 = (VoiceInstance*)&pVVar5->field_344) {
            pVVar5->Update(arg1_03);
            arg1_03 = (float)pVVar5->MixSend();
        }
        pAVar2 = (AudioBuss*)(*this_00).operator->();
        pAVar2->PostMix();
    }

    // 0x100b8f4e0
    VoiceInstance* AudioMixer::ClaimVoice(BussType bussType) {
        shared_ptr<AudioBuss>* audioBuss2;

        scoped_lock<std::mutex> local_40(*((mutex*)&AudioRenderer::m_voiceInstanceGuardMutex));
        VoiceInstance* this_00 = std::array<VoiceInstance, 64ul>::begin();
        VoiceInstance* pVVar2 = std::array<VoiceInstance, 64ul>::end();
        if (this_00 != pVVar2) {
            do {
                if (this_00->IsFree() != '\0') {
                    this_00->Claim();
                    audioBuss2 = (shared_ptr<AudioBuss>*)GetBuss(bussType);
                    this_00->SetSend(field_16, *audioBuss2);
                    goto LAB_100b8f588;
                }
                this_00 = (VoiceInstance*)&this_00->field_344;
            } while (this_00 != pVVar2);
        }
        this_00 = nullptr;
    LAB_100b8f588:
        return this_00;
    }

    // 0x100ba0a70
    bool AudioMixer::MixVoices(float)::$_0::operator()(const VoiceInstance* voiceInstance1,
                                                       const VoiceInstance* voiceInstance2) const {
        float fVar1 = (float)GetOutlineRadiusAdjustment();
        float fVar2 = (float)voiceInstance1->GetOutlineRadiusAdjustment();
        return fVar1 < fVar2;
    }

} // namespace jag::hal::audio
