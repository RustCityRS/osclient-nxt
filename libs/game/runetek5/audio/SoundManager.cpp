// libs/game/runetek5/audio/SoundManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SoundManager.h"

namespace jag::game {
    // 0x10019b570: SoundManager::SoundManagerDebugData::Reset() has the same machine code as hardware::MemoryInfo::MemoryInfo()

    // 0x10019b570: SoundManager::SoundManagerDebugData::SoundManagerDebugData() has the same machine code as hardware::MemoryInfo::MemoryInfo()

    // 0x100662d90
    void SoundManager::TakeOwnershipOfSoundInstance(audio::SoundInstance* soundInstance) {
        if (soundInstance != nullptr) {
            if (soundInstance->IsOwnedBy(this) != '\0') {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                          "SoundManager.cpp",
                          503,
                          "AUDIO: SoundManager trying to take ownership of a sound instance that it already owns. "
                          "Questionable behaviour indeed.");
            }
            soundInstance->SetHeapSize(this);
        }
    }

    // 0x100663010
    SoundInstance* SoundManager::ClaimVorbis(void* arg1, SoundType soundType, int arg3, int arg4, int arg5,
                                             hal::audio::BussType bussType, SoundShape soundShape, int arg8, int arg9,
                                             const math::Vector3T<float>& vector3, int arg11, int arg12, int arg13,
                                             bool arg14) {
        AudioAPI* this_00;
        shared_ptr* this_01;
        SoundInstance* this_02;
        unsigned int arg1_00;
        float fVar2;
        function<void(audio::SoundInstance*)> local_68[48];
        long local_38;

        bool cVar1 = IsReady();
        if (cVar1) {
            cVar1 = TestWithinLevel(arg11);
            if (cVar1) {
                if (soundShape != 4) {
                    cVar1 = TestWithinRange(vector3, arg9);
                    if (!cVar1)
                        goto LAB_1006631f6;
                }
                if (((soundType != 10) || (field_10640 != arg3)) && ((soundType != 11 || (field_10644 != arg3)))) {
                    if (arg14) {
                        this_00 = (AudioAPI*)field_24.operator->();
                        fVar2 = (float)this_00->GetMixBussTotalGain(bussType);
                        if (fVar2 <= 0.0) {
                            if (soundType == 10) {
                                field_10648 = arg3;
                            }
                            goto LAB_1006631f6;
                        }
                    }
                    this_01 = (shared_ptr*)LoadResource(arg3, arg14);
                    cVar1 = shared_ptr::operator_cast_to_bool(this_01);
                    if (cVar1) {
                        this_02 = (SoundInstance*)ClaimSoundInstance(*this_01, arg1);
                        if (this_02 != nullptr) {
                            this_02->SetOriginalGain((float)arg5 * 0.003921569f);
                            this_02->SetLoopCount(arg4 - (unsigned int)(0 < arg4));
                            this_02->SetPosition(vector3);
                            this_02->SetSoundSpatialSize((float)arg8, (float)arg9);
                            this_02->SetPlayers(bussType);
                            this_02->SetSoundShape(soundShape);
                            this_02->SetSoundType(soundType);
                            this_02->SetLevel(arg11);
                            arg1_00 = 256;
                            if (0 < arg12) {
                                arg1_00 = arg12;
                            }
                            this_02->SetRate(arg1_00);
                            if (soundShape != 1) {
                                cVar1 = this_02->IsSoundShapeSphere();
                                if (!cVar1)
                                    goto LAB_1006631f8;
                            }
                            local_68->function<void (*)(audio::SoundInstance*), void>(UpdateSpatialShapeSphere);
                            this_02->SetSpatialCallback(*local_68);
                        }
                        goto LAB_1006631f8;
                    }
                }
            }
        }
    LAB_1006631f6:
        this_02 = nullptr;
    LAB_1006631f8:
        return this_02;
    }

    // 0x100663410
    SoundManager::SoundManager(Js5ResourceProvider* js5ResourceProvider, const std::function<void(int)>& callback1,
                               const std::function<bool(EntityCombinedID)>& callback2,
                               const std::function<bool(EntityCombinedID)>& callback3)
        : Singleton<SoundManager>(), oldscape::dash3d::ModelLit::AABB() {
        SoundManager* local_38;

        field_24 = std::make_unique<hal::audio::AudioAPI>();
        field_32 = 0;
        local_38 = (SoundManager*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)16);
        auto piVar1 = std::max<int>(local_38, 16);
        new (&field_40) FastPool<audio::SoundInstance, int>(64, *piVar1);
        new (field_72)
            LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>(41943040, "SoundManager");
        new (&field_10584) eastl::vector<shared_ptr<audio::SoundResource>>(20, local_38);
        field_10616 = js5ResourceProvider;
        new (&field_10624) math::ColourHSL(0.0, 0.0, 0.0);
        field_10636 = 0;
        field_10640 = -1;
        field_10644 = -1;
        field_10648 = -1;
        field_10652 = 0;
        field_10656 = nullptr;
        field_10664 = nullptr;
        new (&field_10672) std::function<void(int)>(callback1);
        new (&field_10720) std::function<bool(EntityCombinedID)>(callback2);
        new (&field_10768) std::function<bool(EntityCombinedID)>(callback3);
        new (&field_10832) hal::audio::AudioOptionsCallbacks();
        local_38 = (SoundManager*)(((uint64_t)local_38._1_7_ << 8) | (uint8_t)128);
        field_11072.fill(local_38);
        uint8_t* puVar2 = &field_11072[0];
        *puVar2 = 255;
        local_38 = this;
        field_10832 = local_38;
        local_38 = this;
        field_10928 = local_38;
        local_38 = this;
        field_10880 = local_38;
        local_38 = this;
        field_10976 = local_38;
        local_38 = this;
        field_11024 = local_38;
        StartAudio();
    }

    // 0x100663980
    void SoundManager::StartAudio() {
        AudioSystemStartParams local_28;
        uint8_t bVar1 = ((AudioAPI*)field_24.operator->())->StartAudioSystem(local_28, &field_10832);
        field_10816 = (unsigned int)bVar1;
    }

    // 0x100663a40
    SoundManager::~SoundManager() {
        StopAudioSystem();
        field_10832.~AudioOptionsCallbacks();
        field_10768.~function();
        field_10720.~function();
        field_10672.~function();
        field_10584.~vector();
        field_72->~LRUHashCache();
        field_40.~FastPool();
        field_24.~unique_ptr();
    }

    // 0x100663b20
    void SoundManager::StopAudioSystem() {
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;

        uint8_t* this_00 = &field_40;
        field_10656 = nullptr;
        field_10664 = nullptr;
        uint64_t local_48 = this_00->begin();
        uint32_t local_40 = extraout_EDX;
        uint64_t local_38 = this_00->end();
        uint32_t local_30 = extraout_EDX_00;
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                (*local_48)->Free();
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
        field_10584.clear();
        this_00->clear();
        field_72->Clean(0);
        ((AudioAPI*)field_24.operator->())->StopAudioSystem();
    }

    // 0x100663c10
    void SoundManager::MainLogic() {
        field_72->Clean(9000);
    }

    // 0x100663c30
    void SoundManager::Service(float arg1) {
        uint8_t* puVar1;
        uint8_t* this_00;
        shared_ptr<audio::SoundResource>* this_01;
        bool cVar2;
        int iVar3;
        unsigned int arg2;
        Layout* pLVar4;
        shared_ptr* psVar5;
        shared_ptr<hal::audio::AudioRenderer>* psVar6;
        TcpConnectionMessageBase* pTVar7;
        AudioAPI* pAVar8;
        long* plVar10;
        WorldmapAreaMetadata* this_03;
        uint8_t auVar12[12];
        uint8_t local_58[12];
        FastPool_iterator<audio::SoundInstance, int> local_48;

        if (field_10816 == 0) {
            puVar1 = &field_24;
            pLVar4 = (Layout*)(*puVar1).operator->();
            psVar5 = (shared_ptr*)pLVar4->SSOBeginPtr();
            cVar2 = shared_ptr::operator_cast_to_bool(psVar5);
            if (cVar2) {
                pLVar4 = (Layout*)(*puVar1).operator->();
                psVar6 = (shared_ptr<hal::audio::AudioRenderer>*)pLVar4->SSOBeginPtr();
                pTVar7 = (TcpConnectionMessageBase*)(*psVar6).operator->();
                iVar3 = pTVar7->GetEndPosition();
                if (iVar3 == 2) {
                    pLVar4 = (Layout*)(*puVar1).operator->();
                    psVar6 = (shared_ptr<hal::audio::AudioRenderer>*)pLVar4->SSOBeginPtr();
                    iVar3 = ((AudioRenderer*)(*psVar6).operator->())->ActiveDecoderCount();
                    if ((iVar3 == 0) && (cVar2 = field_40.empty(), cVar2)) {
                        pAVar8 = (AudioAPI*)(*puVar1).operator->();
                        pAVar8->StopAudioSystem();
                        Restart();
                    }
                }
            }
        }
        auto psVar9 = field_72->GetAsLinkedList();
        for (this_01 = *(shared_ptr<audio::SoundResource>**)(psVar9 + 48); this_01 != psVar9;
             this_01 = *(shared_ptr<audio::SoundResource>**)(this_01 + 48)) {
            plVar10 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar10 + 24))(arg1, plVar10);
        }
        psVar5 = (shared_ptr*)field_10584.HeapBeginPtr();
        auto psVar11 = field_10584.end();
        for (; psVar5 != psVar11; psVar5 = psVar5 + 1) {
            cVar2 = shared_ptr::operator_cast_to_bool(psVar5);
            if (cVar2) {
                plVar10 = (long*)(*psVar5).operator->();
                (**(void (**)(...))(*plVar10 + 24))(arg1, plVar10);
                plVar10 = (long*)(*psVar5).operator->();
                cVar2 = (**(void (**)(...))(*plVar10 + 32))(plVar10);
                plVar10 = (long*)(*psVar5).operator->();
                if (!cVar2) {
                    cVar2 = (**(void (**)(...))(*plVar10 + 40))(plVar10);
                    if (!cVar2)
                        goto LAB_100663d8d;
                    plVar10 = (long*)(*psVar5).operator->();
                    iVar3 = (**(void (**)(...))(*plVar10 + 88))(plVar10);
                    SuspendSoundInstancesByResourceId(iVar3);
                } else {
                    arg2 = (**(void (**)(...))(*plVar10 + 56))(plVar10);
                    plVar10 = (long*)(*psVar5).operator->();
                    iVar3 = (**(void (**)(...))(*plVar10 + 88))(plVar10);
                    local_58._0_8_ = (int64_t)iVar3;
                    field_72->Put(*psVar5, arg2, *local_58);
                }
                psVar5->reset();
            }
        LAB_100663d8d:
        }
        puVar1 = &field_40;
        local_58 = puVar1->begin();
        local_48._0_12_ = puVar1->end();
        cVar2 = *local_58 != local_48;
        if (cVar2) {
            this_00 = &field_24;
            do {
                this_03 = (WorldmapAreaMetadata*)**local_58;
                this_03->ProcessDelayedStart();
                pLVar4 = (Layout*)(*this_00).operator->();
                psVar6 = (shared_ptr<hal::audio::AudioRenderer>*)pLVar4->SSOBeginPtr();
                this_03->Update(arg1, *psVar6);
                cVar2 = this_03->IsFree();
                if (!cVar2) {
                    cVar2 = this_03->IsOwnedBy(this);
                    if (cVar2) {
                        cVar2 = this_03->IsFinished();
                        if (!cVar2) {
                            pLVar4 = (Layout*)(*this_00).operator->();
                            psVar6 = (shared_ptr<hal::audio::AudioRenderer>*)pLVar4->SSOBeginPtr();
                            pTVar7 = (TcpConnectionMessageBase*)(*psVar6).operator->();
                            iVar3 = pTVar7->GetEndPosition();
                            if (iVar3 != 2) {
                                iVar3 = this_03->GetMaxMapZ();
                                cVar2 = TestWithinLevel(iVar3);
                                if (!cVar2) {
                                    this_03->Suspend(0.0);
                                }
                                goto LAB_100663e80;
                            }
                        }
                        iVar3 = this_03->GetUpdateNumber();
                        if (iVar3 == 10) {
                            pAVar8 = (AudioAPI*)this_00->get();
                            StopSong((bool)this_03->IsAudibleInBussChain(pAVar8), 0.0);
                        } else if (iVar3 == 11) {
                            plVar10 = this_03->GetResource();
                            iVar3 = (**(void (**)(...))(*plVar10 + 80))(plVar10);
                            if (iVar3 == field_10644) {
                                StopJingle();
                            }
                        }
                        this_03->Free();
                        local_58->destroy(this_03);
                    }
                }
            LAB_100663e80:
                ++*local_58;
                auVar12 = puVar1->end();
                local_48._0_12_ = auVar12;
                cVar2 = *local_58 != local_48;
            } while (cVar2);
        }
    }

    // 0x100663fe0
    void SoundManager::Restart() {
        Logger* pLVar2;
        scoped_lock<std::mutex> local_20;

        auto this_00 = field_24.operator->();
        if (!((this_00->SSOBeginPtr())->operator_cast_to_bool())) {
            StartAudio();
        } else {
            if (!(((AudioAPI*)field_24.operator->())->RestartAudioSystem(&field_10832))) {
                local_20 = std::scoped_lock(*((mutex*)&hal::audio::AudioRenderer::m_audioMutex));
                Reset();
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                            "SoundManager.cpp",
                            719, "Failed to re-establish audio.");
            } else {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                            "SoundManager.cpp",
                            709, "Successfully recovered audio.");
                field_10816 = 1;
            }
        }
    }

    // 0x100664260
    void SoundManager::SuspendSoundInstancesByResourceId(int arg1) {
        SoundInstance* this_00;
        long* plVar3;
        FastPool_iterator<audio::SoundInstance, int> local_48;
        FastPool_iterator<audio::SoundInstance, int> local_38;

        local_48._0_12_ = field_40.begin();
        local_38._0_12_ = field_40.end();
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                this_00 = (SoundInstance*)*local_48;
                plVar3 = this_00->GetResource();
                if ((**(void (**)(...))(*plVar3 + 88))(plVar3) == arg1) {
                    this_00->Suspend(0.0);
                }
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
    }

    // 0x100664410
    void SoundManager::StopJingle() {
        field_10652 = 0;
        if (field_10664 != nullptr) {
            field_10664->Suspend(0.0);
            field_10664 = nullptr;
            field_10644 = -1;
        }
        if (field_10656 != nullptr) {
            field_10656->Resume();
        }
    }

    // 0x100664470
    void SoundManager::StopSong(bool arg1, float arg2) {
        if (field_10656 != nullptr) {
            field_10656->SetSoundType(12);
            field_10656->Suspend(arg2);
            if (arg1) {
                if ((&field_10672)->operator_cast_to_bool() != '\0') {
                    if (field_10656->GetBussID() != 3) {
                        std::function<void(int)>::operator()((function<void(int)>*)&field_10672, field_10640);
                    }
                }
            }
        }
        field_10656 = nullptr;
        field_10640 = -1;
    }

    // 0x100664560
    unsigned long SoundManager::PreLoadResource(int arg1, bool arg2) {
        bool cVar1;
        unsigned int uVar3;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        long* plVar4;
        uint64_t in_register_00000011;
        uint64_t unaff_R15;
        unsigned long uVar5;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            field_10616->FileReady((unsigned int)Js5Archive::JS5_VORBIS, arg1, nullptr, (uint8_t)(Priority::LOW));
            uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        } else {
            cVar1 = IsReady();
            uVar5 = 0;
            if ((cVar1) && (-1 < arg1)) {
                midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)LoadResource(arg1, true);
                uVar5 = 0;
                if (*midiPlayerMainThread != nullptr) {
                    plVar4 = (long*)(*midiPlayerMainThread).operator->();
                    uVar3 = (**(void (**)(...))(*plVar4 + 32))(plVar4);
                    uVar5 = (unsigned long)uVar3;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100664610
    shared_ptr* SoundManager::LoadResource(int arg1, bool arg2) {
        Layout* this_00;
        int iVar4;
        shared_ptr* psVar5;
        shared_ptr* psVar6;
        long* plVar7;
        uint64_t in_register_00000011;
        shared_ptr* psVar8;
        bool bVar9;
        ReturnValue local_70;
        AudioAPI* local_60;
        uint32_t local_50;
        Layout* local_48;
        unsigned long long local_40[2];

        int iVar3 = audio::SoundResource::GenerateCacheableId(arg1, arg2);
        local_40[0] = (unsigned long long)iVar3;
        auto this_01 = field_72->Find(*local_40);
        if (!(shared_ptr::operator_cast_to_bool(this_01))) {
            this_01 = (shared_ptr*)&field_10584;
            local_50 = (int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2);
            psVar5 = (shared_ptr*)this_01->HeapBeginPtr();
            local_48 = (Layout*)this_01;
            psVar6 = (shared_ptr*)this_01->end();
            if (psVar5 != psVar6) {
                bVar9 = false;
                do {
                    if (shared_ptr::operator_cast_to_bool(psVar5)) {
                        plVar7 = (long*)(*psVar5).operator->();
                        iVar4 = (**(void (**)(...))(*plVar7 + 88))(plVar7);
                        psVar8 = psVar5;
                        if (iVar4 == iVar3)
                            break;
                    }
                    psVar5 = psVar5 + 1;
                    bVar9 = psVar5 == psVar6;
                    psVar8 = this_01;
                } while (!bVar9);
                this_01 = psVar8;
                if (!bVar9) {
                    return psVar8;
                }
            }
            local_60 = (AudioAPI*)field_24.get();
            make_shared<VorbisJs5Resource, hal::audio::AudioAPI*>(&local_70, &local_60);
            local_40->shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_70);
            ((DebugUIElement*)(*local_40).operator->())->NotifyDebugRegistration((uint8_t)local_50);
            plVar7 = (long*)(*local_40).operator->();
            (**(void (**)(...))(*plVar7 + 16))(plVar7, field_10616, arg1, hal::audio::AudioFormat::VORBIS);
            this_00 = local_48;
            psVar5 = (shared_ptr*)local_48->HeapBeginPtr();
            psVar6 = (shared_ptr*)this_00->end();
            for (; psVar5 != psVar6; psVar5 = psVar5 + 1) {
                if (!(shared_ptr::operator_cast_to_bool(psVar5))) {
                    *psVar5 = *local_40;
                    this_01 = psVar5;
                    break;
                }
            }
            if (psVar5 == psVar6) {
                local_48->push_back(*local_40);
                this_01 = (shared_ptr*)local_48->back();
            }
        }
        return this_01;
    }

    // 0x100664a60
    void SoundManager::PlaySong(int arg1, int arg2, bool arg3) {
        SoundInstance* this_00;
        int in_stack_ffffffffffffffd0;

        if (field_10640 != arg1) {
            this_00 = (SoundInstance*)ClaimVorbis(this, 10, arg1, 0, arg2, (unsigned int)!arg3 * 4 + 3, 4, 0, 0,
                                                  *PTR_ZERO_100ee66e8, -1, 256, in_stack_ffffffffffffffd0, true);
            if (this_00 == nullptr) {
                StopSong(false, 1.2);
            } else {
                if (field_10640 < 0) {
                    this_00->Start();
                } else {
                    StopSong(false, 1.2);
                    this_00->FadeIn(0.333, 1.0, 1.5);
                    this_00->SetStartDelay(25, false);
                }
                field_10640 = arg1;
                field_10656 = this_00;
                if (field_10652 != '\0') {
                    this_00->Pause();
                }
            }
        }
    }

    // 0x100664ba0
    void SoundManager::PlaySong(audio::SoundInstance* soundInstance) {
        int iVar1;
        int iVar2;
        long* plVar3;

        if (soundInstance == nullptr) {
            StopSong(false, 1.2);
        } else {
            iVar2 = field_10640;
            plVar3 = soundInstance->GetResource();
            iVar1 = (**(void (**)(...))(*plVar3 + 80))(plVar3);
            if (iVar2 != iVar1) {
                if (field_10640 < 0) {
                    soundInstance->Start();
                } else {
                    StopSong(false, 1.2);
                    soundInstance->FadeIn(0.333, 1.0, 1.5);
                    soundInstance->SetStartDelay(25, false);
                }
                plVar3 = soundInstance->GetResource();
                iVar2 = (**(void (**)(...))(*plVar3 + 80))(plVar3);
                field_10640 = iVar2;
                field_10656 = soundInstance;
                if (field_10652 != '\0') {
                    soundInstance->Pause();
                }
            }
        }
    }

    // 0x100664cb0
    void SoundManager::PlayVorbis(SoundType soundType, int arg2, int arg3, int arg4, hal::audio::BussType bussType,
                                  SoundShape soundShape, int arg7, int arg8, const math::Vector3T<float>& vector3,
                                  int arg10, int arg11, int arg12) {
        int in_stack_ffffffffffffffd0;

        auto this_00 = ClaimVorbis(this, soundType, arg2, arg3, arg4, bussType, soundShape, arg7, arg8, vector3, arg10,
                                   arg11, in_stack_ffffffffffffffd0, false);
        if (this_00 != nullptr) {
            if (arg12 == 0) {
                this_00->Start();
            } else {
                this_00->SetStartDelay(arg12, false);
            }
        }
    }

    // 0x100664d40
    void SoundManager::PlaySEQSound(Entity* entity, int arg2, int arg3, int arg4, int arg5,
                                    hal::audio::BussType bussType, int arg7, const math::Vector3T<float>& vector3,
                                    SoundType soundType, unsigned int arg10) {
        uint8_t uVar2;
        uint8_t bVar3;
        uint64_t extraout_var;
        AudioAPI* this_00;
        uint64_t extraout_var_00;
        uint64_t uVar4;
        float fVar5;

        bool cVar1 = (*(void (*)(...))entity->field_8[4])(&entity->field_8);
        if (cVar1) {
            cVar1 = TestWithinLevel(entity->GetDuration());
            if (cVar1) {
                uVar2 = entity->GetCombinedID();
                bVar3 = std::function<bool(EntityCombinedID)>::operator()(
                    (function<bool(EntityCombinedID)>*)&field_10720,
                    (uint32_t)((((uint64_t)extraout_var << 8) | (uint8_t)uVar2)));
                if ((bVar3 != 0) || (arg7 != 0)) {
                    this_00 = (AudioAPI*)field_24.operator->();
                    fVar5 = (float)this_00->GetMixBussTotalGain((unsigned int)(bVar3 ^ 1) * 3 + 1);
                    if (0.0 < fVar5) {
                        uVar2 = entity->GetCombinedID();
                        cVar1 = std::function<bool(EntityCombinedID)>::operator()(
                            (function<bool(EntityCombinedID)>*)&field_10768,
                            (uint32_t)((((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2)));
                        if ((!(arg5 == -1 || bVar3 != 0)) && (!cVar1)) {
                            arg4 = (arg5 * arg4) / 100;
                        }
                        uVar4 = entity->GetDuration();
                        (*(void (*)(...))entity->field_8[2])(&entity->field_8, arg2, arg4,
                                                             (unsigned long)(arg7 == 0 | bVar3) << 2, 0, arg7 << 7,
                                                             vector3, arg3, bussType, soundType, uVar4, arg10);
                    }
                }
            }
        }
    }

    // 0x100664ed0
    bool SoundManager::TestWithinRange(const math::Vector3T<float>& vector3, int arg2) const {
        auto pfVar1 = vector3.SSOBeginPtr();
        float local_1c = *pfVar1;
        pfVar1 = (float*)vector3.second();
        ColourHSL local_40(local_1c, 0.0, *pfVar1);
        uint64_t local_30 = local_40 - field_10624;
        uint32_t local_28 = 0;
        return (float)local_30.Length() < (float)arg2;
    }

    // 0x100664f50
    SoundInstance* SoundManager::ClaimSoundInstance(const shared_ptr<audio::SoundResource>& soundResource, void* arg2) {
        SoundInstance* this_01;

        if (arg2 == nullptr) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/audio/"
                      "SoundManager.cpp",
                      480, "AUDIO: Trying to claim a sound instance with no valid owner specified.");
        }
        uint8_t* this_02 = &field_40;
        int iVar1 = this_02->GetValue();
        int iVar2 = this_02->capacity();
        if ((iVar1 < iVar2) && (this_01 = this_02->Create<>(), this_01 != nullptr)) {
            this_01->SetHeapSize(arg2);
            this_01->Claim(soundResource);
            return this_01;
        }
        return nullptr;
    }

    // 0x100665110
    void SoundManager::UpdateSpatialShapeSphere(audio::SoundInstance* soundInstance) {
        int iVar1;
        long lVar2;
        float* pfVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        SoundInstance* pSVar7;
        unsigned int uVar8;
        float fVar9;
        double dVar10;
        float fVar11;
        uint64_t local_48[2];
        uint64_t local_38[2];
        float local_28;
        float local_24;

        if (soundInstance != nullptr) {
            local_24 = (float)soundInstance->GetSoundSpatialSizeMin();
            local_28 = (float)soundInstance->GetSoundSpatialSizeMax();
            pSVar7 = soundInstance;
            local_48[0] = soundInstance->GetPosition();
            lVar2 = pSVar7->Instance();
            local_38[0] = *local_48 - (*((lVar2 + 10624)));
            fVar9 = (float)local_38->Length();
            if (local_24 <= fVar9) {
                fVar11 = 0.0;
                if (fVar9 < local_28) {
                    fVar11 = (local_24 - fVar9) / (local_28 - local_24) + 1.0;
                }
            } else {
                fVar11 = 1.0;
            }
            local_28 = fVar9;
            local_24 = fVar11;
            soundInstance->SetGain(fVar11 * 0.9);
            if ((0.0 < local_24) && (pSVar7 = soundInstance, iVar1 = soundInstance->GetSoundShape(), iVar1 != 2)) {
                lVar2 = pSVar7->Instance();
                if (*(long**)(lVar2 + 32) == nullptr) {
                    fVar9 = 0.0;
                } else {
                    dVar10 = (double)(**(void (**)(...))(**(long**)(lVar2 + 32) + 96))();
                    pfVar3 = (float*)local_38->SSOBeginPtr();
                    local_24 = *pfVar3;
                    pfVar3 = (float*)local_38->second();
                    fVar9 = (float)atan2(local_24, *pfVar3);
                    uVar8 = ((int)(dVar10 * -2607.5945f) - (int)(fVar9 * 2607.5945)) + 12288U & 16383;
                    uVar4 = 16384 - uVar8;
                    if (uVar8 < 8193) {
                        uVar4 = uVar8;
                    }
                    iVar1 = 8192;
                    if ((0.0 < local_28) && (iVar1 = 16384, local_28 < 4096.0)) {
                        iVar1 = (int)(local_28 + local_28 + 8192.0);
                    }
                    iVar5 = uVar4 * iVar1;
                    iVar6 = iVar5 + 8191;
                    if (-1 < iVar5) {
                        iVar6 = iVar5;
                    }
                    local_28 = (float)((16384 - iVar1 >> 1) + (iVar6 >> 13)) * 0.00012207031f;
                    local_24 = (float)::sqrt(2.0 - local_28);
                    fVar9 = (float)::sqrt(local_28);
                    fVar9 = fVar9 - local_24;
                }
                soundInstance->SetPan(fVar9);
            }
        }
    }

    // 0x100665440
    void SoundManager::StopAllSoundsOnBuss(hal::audio::BussType bussType) {
        SoundInstance* this_00;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;

        uint64_t local_50 = field_40.begin();
        uint32_t local_48 = extraout_EDX;
        uint64_t local_40 = field_40.end();
        uint32_t local_38 = extraout_EDX_00;
        bool cVar1 = local_50 != local_40;
        if (cVar1) {
            do {
                this_00 = (SoundInstance*)*local_50;
                cVar1 = ((AudioAPI*)field_24.operator->())->IsMixBussInChain(this_00->GetBussID(), bussType);
                if (cVar1) {
                    this_00->Suspend(0.15);
                }
                ++local_50;
                cVar1 = local_50 != local_40;
            } while (cVar1);
        }
    }

    // 0x100665510
    void SoundManager::AddMixBuss(hal::audio::BussType bussType1, hal::audio::BussType bussType2, int arg3) {
        uint32_t in_register_00000034;
        function<float()> local_68[48];
        long local_38;

        void* arg1 = (void*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)bussType1);
        auto this_00 = field_24.operator->();
        auto this_01 = this_00->SSOBeginPtr();
        NXTPixToolkit* this_02 = (NXTPixToolkit*)(*this_01).operator->();
        long lVar1 = this_02->GetScreen();
        unsigned int arg2 = *(unsigned int*)(lVar1 + 4);
        new (local_68) std::function<float()>(arg1);
        this_00->AddMixBuss(bussType1, arg2, 2, (float)arg3 * 1.5258789e-05, bussType2, *local_68);
    }

    // 0x1006655f0
    void SoundManager::SetMixBussGain(hal::audio::BussType bussType, int arg2) {
        auto this_00 = field_24.operator->();
        auto this_02 = this_00->GetMixBuss(bussType);
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            ((AudioBuss*)(*this_02).operator->())->SetGain((float)arg2 * 1.5258789e-05);
        }
    }

    // 0x100665680
    void SoundManager::AddSoundToGroup(int arg1, audio::SoundInstance* soundInstance, int arg3) {
        soundInstance->SetGroupID(arg1);
        soundInstance->SetStartDelay(arg3, true);
    }

    // 0x1006656c0
    void SoundManager::StartSoundGroup(int arg1) {
        SoundInstance* this_00;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;

        uint64_t local_48 = field_40.begin();
        uint32_t local_40 = extraout_EDX;
        uint64_t local_38 = field_40.end();
        uint32_t local_30 = extraout_EDX_00;
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                this_00 = (SoundInstance*)*local_48;
                if (this_00->GetGroupID() == arg1) {
                    this_00->StartDelayCount();
                }
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
    }

    // 0x100665780
    void SoundManager::StopSoundGroup(int arg1) {
        SoundInstance* this_00;
        uint32_t extraout_EDX;
        uint32_t extraout_EDX_00;

        uint64_t local_48 = field_40.begin();
        uint32_t local_40 = extraout_EDX;
        uint64_t local_38 = field_40.end();
        uint32_t local_30 = extraout_EDX_00;
        bool cVar1 = local_48 != local_38;
        if (cVar1) {
            do {
                this_00 = (SoundInstance*)*local_48;
                if (this_00->GetGroupID() == arg1) {
                    this_00->Suspend(0.15);
                    this_00->SetGroupID(-1);
                }
                ++local_48;
                cVar1 = local_48 != local_38;
            } while (cVar1);
        }
    }

    // 0x100665840
    void SoundManager::PlayJingle(int arg1, int arg2) {
        SoundInstance* pSVar1;
        int in_stack_ffffffffffffffd0;

        if (field_10652 != '\0') {
            if (field_10644 == arg1) {
                return;
            }
            StopJingle();
        }
        if ((arg2 != 0) && (-1 < arg1)) {
            pSVar1 = (SoundInstance*)ClaimVorbis(this, 11, arg1, 1, arg2, 7, 4, 0, 0, *PTR_ZERO_100ee66e8, -1, 256,
                                                 in_stack_ffffffffffffffd0, true);
            field_10664 = pSVar1;
            if (pSVar1 != nullptr) {
                if (field_10656 != nullptr) {
                    field_10656->Pause();
                }
                field_10652 = 1;
                field_10664->Start();
                field_10644 = arg1;
            }
        }
    }

    // 0x100665930
    void SoundManager::Reset() {
        StopSong(false, 1.2);
        StopJingle();
        StopAllSoundsOnBuss(0);
    }

    // 0x100665970
    void SoundManager::Shutdown() {
        field_10816 = 0;
    }

    // 0x100665980
    void SoundManager::MuteMusic() {
        if (field_10656 != nullptr) {
            field_10648 = field_10640;
            StopSong(false, 0.0);
        }
    }

    // 0x1006659b0
    void SoundManager::ResumeMusic() {
        int arg1 = field_10648;
        if (0 < arg1) {
            if ((&field_10672)->operator_cast_to_bool() != '\0') {
                std::function<void(int)>::operator()((function<void(int)>*)&field_10672, arg1);
                field_10648 = -1;
            }
        }
    }

    // 0x100665a50
    void SoundManager::SetVolume(SoundVolumeClass soundVolumeClass, unsigned char arg2) {
        unsigned char* puVar1 = &field_11072[(long)(int)soundVolumeClass];
        *puVar1 = arg2;
        if (((long)(int)soundVolumeClass & 4294967291U) == 0) {
            if (IsMusicAudible() == '\0') {
                MuteMusic();
            } else {
                ResumeMusic();
            }
        }
    }

    // 0x100665af0
    void SoundManager::NotifyAudioDeviceArrival() {
        Layout* this_00;
        shared_ptr* this_02;

        if ((&field_24)->operator_cast_to_bool()) {
            this_00 = (Layout*)field_24.operator->();
            this_02 = (shared_ptr*)this_00->SSOBeginPtr();
            if (shared_ptr::operator_cast_to_bool(this_02)) {
                if (((TcpConnectionMessageBase*)(*this_02).operator->())->GetEndPosition() != 3) {
                    return;
                }
            }
            Restart();
        }
    }

    // 0x100665b70
    int SoundManager::GetNumberOfLoadingSoundResources() const {
        uint8_t bVar1;
        int iVar3;

        auto this_00 = field_10584.HeapBeginPtr();
        auto psVar2 = field_10584.end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                iVar3 = iVar3 + (unsigned int)bVar1;
                this_00 = this_00 + 1;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x100665be0
    void SoundManager::UpdateDebugData() {
        uint8_t* puVar1;
        bool cVar2;
        uint32_t uVar3;
        unsigned int uVar4;
        int iVar5;
        int iVar6;
        SoundInstance* this_00;
        FastPool_iterator<audio::SoundInstance, int> local_50;
        FastPool_iterator<audio::SoundInstance, int> local_40;
        float local_2c;

        if (hal::audio::AudioRenderer::m_debugShowAudio != '\0') {
            new (this) oldscape::dash3d::ModelLit::AABB();
            puVar1 = &field_40;
            uVar3 = puVar1->GetValue();
            field_0 = uVar3;
            local_50._0_12_ = puVar1->begin();
            local_40._0_12_ = puVar1->end();
            cVar2 = local_50 != local_40;
            if (cVar2) {
                do {
                    this_00 = (SoundInstance*)*local_50;
                    cVar2 = this_00->IsPlaying();
                    if (cVar2) {
                        *(int*)field_8 = *(int*)field_8 + 1;
                    }
                    cVar2 = this_00->IsOwnedBy(this);
                    if (!cVar2) {
                        field_4 = field_4 + 1;
                    }
                    ++local_50;
                    cVar2 = local_50 != local_40;
                } while (cVar2);
            }
            uVar3 = ((AudioAPI*)field_24.operator->())->ActiveDecoderCount();
            *(uint32_t*)(field_8 + 4) = uVar3;
            uVar3 = GetNumberOfLoadingSoundResources();
            field_16 = uVar3;
            puVar1 = field_72;
            uVar4 = puVar1->GetX();
            local_2c = (float)uVar4;
            iVar5 = puVar1->GetX();
            iVar6 = puVar1->GetZ();
            field_20 = (int)(long)(((float)(unsigned int)(iVar5 - iVar6) * 100.0) / local_2c);
        }
    }

} // namespace jag::game

// 0x1006653b0
void atan2(float arg1, float arg2) {
    _atan2f();
}

// 0x1006653c0
void sqrt(float arg1) {
    unsigned int in_XMM0_Db;
    uint32_t in_XMM0_Dc;
    uint32_t in_XMM0_Dd;
    uint8_t in_XMM1[16];
    uint8_t auVar1[16];

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = arg1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    float fVar2 = arg1 * auVar1._0_4_;
    return (((uint64_t)(~(in_XMM0_Db & 2147483647) & in_XMM0_Db) << 32) |
            (uint32_t)(~-(unsigned int)(ABS(arg1) < 1.1754944e-38) &
                       (unsigned int)((fVar2 * auVar1._0_4_ - 3.0) * fVar2 * -0.5)));
}
