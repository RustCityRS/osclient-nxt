// libs/hal/audio/AudioMixer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.audio

#include "AudioMixer.h"

namespace jag::hal::audio {
    // 0x100d6abb0, 16 bytes, __const
    AudioMixer::UPDATE_TIME_DELTA = {1.0f, 0, 0, 0};

    // 0x100b8b9f0, 272 bytes, placed by class name and debug map
    // AudioMixer::AddBuss(BussType, unsigned int, unsigned int, float, BussType, std::function<float ()> const&)
    /* AudioMixer::AddBuss(BussType, unsigned int, unsigned int,
   float, BussType, std::function<float ()> const&) */

    void AudioMixer::AddBuss(float param_1, AudioMixer* this, undefined4 param_3, uint param_4, uint param_5,
                             undefined4 param_6, function* param_7) {
        bool bVar1;
        shared_ptr* psVar2;
        long lVar3;
        AudioBuss* pAVar4;
        shared_ptr local_58;
        scoped_lock<std::mutex> local_48[12];
        undefined4 local_3c;
        uint local_38;
        uint local_34;
        float local_30;
        uint local_2c;

        local_3c = param_3;
        local_38 = param_4;
        local_34 = param_5;
        local_30 = param_1;
        psVar2 = (shared_ptr*)GetBuss();
        bVar1 = shared_ptr::operator_cast_to_bool(psVar2);
        if (!bVar1) {
            lVar3 = field_8->GetScreen();
            local_2c = *(uint*)(lVar3 + 8);
            make_shared<AudioBuss, BussType&, unsigned int&, unsigned int&, float&, unsigned int&>(
                (jag*)&local_58, (BussType*)&local_3c, &local_38, &local_34, &local_30, &local_2c);
            pAVar4 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)&local_58);
            psVar2 = (shared_ptr*)GetBuss(this, param_6);
            pAVar4->AddRouting(psVar2);
            bVar1 = std::function::operator_cast_to_bool(param_7);
            if (bVar1) {
                pAVar4 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)&local_58);
                pAVar4->SetUpdateGainFunction(param_7);
            }
            std::scoped_lock<std::mutex>::scoped_lock(local_48, (mutex*)&field_64);
            (&field_32, &local_58)->push_back();
            std::scoped_lock<std::mutex>::~scoped_lock(local_48);
            local_58.~shared_ptr();
        }
    }

    // 0x100b8bb70, 160 bytes, placed by class name and debug map
    // AudioMixer::GetBuss(BussType) const
    shared_ptr* AudioMixer::GetBuss(int param_2) {
        shared_ptr* this_00;
        shared_ptr* psVar3;
        MSIType* this_01;

        this_00 = (shared_ptr*)(&field_32)->HeapBeginPtr();
        psVar3 = (shared_ptr*)(&field_32)->end();
        do {
            if (this_00 == psVar3) {
                return (shared_ptr*)&AudioBuss::NullAudioBuss;
            }
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_01 = (MSIType*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)this_00);
                if (this_01->GetTint() == param_2) {
                    return this_00;
                }
            }
            this_00 = this_00 + 1;
        } while (true);
    }

    // 0x100b8e5d0, 464 bytes, base-object constructor, placed by class name
    // AudioMixer::AudioMixer(AudioAPI*, AudioSystemStartParams const&)
    void AudioMixer::AudioMixer(AudioAPI* param_1, AudioSystemStartParams* param_2) {
        undefined1* this_00;
        vector* this_01;
        NXTPixToolkit* this_02;
        long lVar1;
        TaskRunner* this_03;
        VoiceInstance* this_04;
        VoiceInstance* pVVar2;
        MixerWorker* this_05;
        shared_ptr local_60;
        shared_ptr* local_50;
        vector<shared_ptr<AudioBuss>, eastl::allocator>* local_48;
        int local_3c;
        float local_38;
        bool local_31;

        field_0 = &PTR__AudioMixer_100f26870;
        this_01 = param_1->SSOBeginPtr(param_1);
        this_02 = (NXTPixToolkit*)this_01->end();
        field_8 = this_02;
        local_60._0_4_ = 0;
        local_3c = 2;
        local_38 = 1.0;
        lVar1 = this_02->GetScreen();
        local_31 = true;
        local_50 = (shared_ptr*)field_16;
        make_shared<AudioBuss, BussType, unsigned int const&, int, float, unsigned int const&, bool>(
            (jag*)field_16, (BussType*)&local_60, (uint*)((long)&param_2->field_0 + 4), &local_3c, &local_38,
            (uint*)(lVar1 + 8), &local_31);
        local_48 = (vector<shared_ptr<AudioBuss>, eastl::allocator>*)&field_32;
        eastl::vector<shared_ptr<AudioBuss>, eastl::allocator>::vector(local_48);
        new (&field_64) std::mutex();
        this_00 = &field_128;
        new (this_00) std::array<VoiceInstance, 64ul>();
        this_03 = (TaskRunner*)getTaskRunner();
        make_shared<MixerWorker>((jag*)&local_60);
        TaskRunner::AddTask<MixerWorker>((shared_ptr*)field_22144, this_03, "MixerWorker", &local_60);
        local_60.~shared_ptr();
        field_22160 = 1.0;
        field_22164 = *(undefined4*)&param_2->field_0;
        eastl::vector<shared_ptr<AudioBuss>, eastl::allocator>::push_back(local_48, local_50);
        this_04 = (VoiceInstance*)this_00->begin();
        pVVar2 = (VoiceInstance*)this_00->end();
        for (; this_04 != pVVar2; this_04 = (VoiceInstance*)&this_04->field_344) {
            this_04->Init((AudioRenderer*)field_8, 2048);
        }
        this_05 = (MixerWorker*)shared_ptr<MixerWorker>::operator->((shared_ptr<MixerWorker>*)field_22144);
        this_05->Init(param_1);
    }

    // 0x100b8eb40, 16 bytes, complete-object constructor, placed by class name
    // AudioMixer::AudioMixer(AudioAPI*, AudioSystemStartParams const&): jumps straight to the base-object constructor

    // 0x100b8eb50, 64 bytes, placed by class name
    // AudioMixer::ShutDown()
    void AudioMixer::ShutDown() {
        Task* this_00;

        if (field_22144->operator_cast_to_bool()) {
            this_00 = (Task*)shared_ptr<MixerWorker>::operator->((shared_ptr<MixerWorker>*)field_22144);
            this_00->Join();
            shared_ptr<MixerWorker>::reset();
        }
    }

    // 0x100b8ebd0, 80 bytes, base-object destructor, placed by class name
    // AudioMixer::~AudioMixer()
    void AudioMixer::~AudioMixer() {
        field_0 = &PTR__AudioMixer_100f26870;
        field_22144->~shared_ptr();
        (&field_128)->~array();
        (&field_64)->~mutex();
        (&field_32)->~vector();
        field_16->~shared_ptr();
    }

    // 0x100b8ec20, 16 bytes, complete-object destructor, placed by class name
    // AudioMixer::~AudioMixer(): jumps straight to the base-object destructor

    // 0x100b8ec30, 32 bytes, deleting destructor, placed by class name
    // AudioMixer::~AudioMixer()
    void AudioMixer::~AudioMixer() {
        ~AudioMixer(this);
        operator_delete(this);
    }

    // 0x100b8ec50, 160 bytes, placed by class name
    // AudioMixer::Service(float)
    void AudioMixer::Service(float param_1) {
        AudioBuss* this_00;
        shared_ptr* psVar2;
        shared_ptr* this_01;
        scoped_lock<std::mutex> local_20[8];

        MixVoices(this, param_1);
        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_64);
        this_01 = (shared_ptr*)(&field_32)->HeapBeginPtr();
        psVar2 = (shared_ptr*)(&field_32)->end();
        for (; this_01 != psVar2; this_01 = this_01 + 1) {
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                this_00 = (AudioBuss*)shared_ptr<AudioBuss>::operator->((shared_ptr<AudioBuss>*)this_01);
                this_00->Service();
            }
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100b8ecf0, 480 bytes, placed by class name
    // AudioMixer::MixVoices(float)
    void AudioMixer::MixVoices(float param_1) {
        char cVar1;
        AudioBuss* pAVar2;
        undefined8 uVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        VoiceInstance* pVVar6;
        VoiceInstance* pVVar7;
        ulong uVar8;
        bool bVar9;
        int iVar10;
        int iVar11;
        shared_ptr<AudioBuss>* this_00;
        float extraout_XMM0_Da;
        float fVar12;
        array<VoiceInstance*, 64ul> local_248[512];
        shared_ptr<AudioBuss>* local_48;
        scoped_lock<std::mutex> local_40[8];

        field_22160 = field_22160 - param_1;
        this_00 = (shared_ptr<AudioBuss>*)field_16;
        pAVar2 = (AudioBuss*)shared_ptr<AudioBuss>::operator->(this_00);
        pAVar2->PreMix();
        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        if (field_22160 <= 0.0) {
            field_22160 = 1.0;
            uVar8 = 0;
            local_48 = this_00;
            do {
                uVar3 = std::array<VoiceInstance, 64ul>::operator[]((array<VoiceInstance, 64ul>*)&field_128, uVar8);
                puVar4 = (undefined8*)std::array<VoiceInstance*, 64ul>::operator[](local_248, uVar8);
                *puVar4 = uVar3;
                uVar8 = uVar8 + 1;
            } while (uVar8 != 64);
            puVar4 = (undefined8*)std::array<VoiceInstance*, 64ul>::begin(local_248);
            puVar5 = (undefined8*)std::array<VoiceInstance*, 64ul>::end(local_248);
            std::sort<VoiceInstance**, float->MixVoices()::__0>(puVar4);
            if (puVar4 != puVar5) {
                iVar10 = 0;
                do {
                    pVVar6 = (VoiceInstance*)*puVar4;
                    cVar1 = pVVar6->IsPlaying();
                    if (cVar1 != '\0') {
                        iVar11 = iVar10 + 1;
                        cVar1 = pVVar6->IsPersistent();
                        if (cVar1 == '\0') {
                            if (56 < iVar10) {
                                pVVar6->Suspend();
                                iVar10 = iVar11;
                                goto LAB_100b8ede3;
                            }
                            if (iVar11 < (int)((AudioMixer*)this)->field_22164)
                                goto LAB_100b8ee0e;
                            bVar9 = true;
                        } else {
                        LAB_100b8ee0e:
                            bVar9 = false;
                        }
                        pVVar6->NotifyDebugRegistration(bVar9);
                        iVar10 = iVar11;
                    }
                LAB_100b8ede3:
                    puVar4 = puVar4 + 1;
                } while (puVar4 != puVar5);
            }
            this_00 = local_48;
            this = (AudioMixer*)this;
        }
        pVVar6 = (VoiceInstance*)(&field_128)->begin();
        pVVar7 = (VoiceInstance*)(&field_128)->end();
        fVar12 = extraout_XMM0_Da;
        for (; pVVar6 != pVVar7; pVVar6 = (VoiceInstance*)&pVVar6->field_344) {
            pVVar6->Update(fVar12);
            fVar12 = (float)pVVar6->MixSend();
        }
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        pAVar2 = (AudioBuss*)shared_ptr<AudioBuss>::operator->(this_00);
        pAVar2->PostMix();
    }

    // 0x100b8f4e0, 224 bytes, placed by class name
    // AudioMixer::ClaimVoice(BussType)
    VoiceInstance* AudioMixer::ClaimVoice(undefined4 param_2) {
        VoiceInstance* this_00;
        VoiceInstance* pVVar2;
        shared_ptr* psVar3;
        scoped_lock<std::mutex> local_40[12];

        std::scoped_lock<std::mutex>::scoped_lock(local_40, (mutex*)&AudioRenderer::m_voiceInstanceGuardMutex);
        this_00 = (VoiceInstance*)(&field_128)->begin();
        pVVar2 = (VoiceInstance*)(&field_128)->end();
        if (this_00 != pVVar2) {
            do {
                if (this_00->IsFree() != '\0') {
                    this_00->Claim();
                    psVar3 = (shared_ptr*)GetBuss(this, param_2);
                    this_00->SetSend((shared_ptr*)field_16, psVar3);
                    goto LAB_100b8f588;
                }
                this_00 = (VoiceInstance*)&this_00->field_344;
            } while (this_00 != pVVar2);
        }
        this_00 = (VoiceInstance*)0;
    LAB_100b8f588:
        std::scoped_lock<std::mutex>::~scoped_lock(local_40);
        return this_00;
    }

    // 0x100ba0a70, 48 bytes, placed by class name
    // AudioMixer::MixVoices(float)::$_0::operator()(VoiceInstance const*, VoiceInstance const*) const
    /* AudioMixer::MixVoices(float)::$_0::TEMPNAMEPLACEHOLDERVALUE(VoiceInstance
   const*, VoiceInstance const*) const */

    bool AudioMixer::MixVoices(float)::$_0::operator()(VoiceInstance* param_1, VoiceInstance* param_2) {
        float fVar1;
        float fVar2;

        fVar1 = (float)param_1->GetOutlineRadiusAdjustment();
        fVar2 = (float)param_2->GetOutlineRadiusAdjustment();
        return fVar1 < fVar2;
    }

} // namespace jag::hal::audio
