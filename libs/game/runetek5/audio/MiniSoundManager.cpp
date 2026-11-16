// libs/game/runetek5/audio/MiniSoundManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MiniSoundManager.h"

namespace jag::game {
    // 0x100009e70: MiniSoundManager::~MiniSoundManager() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x10002d860: MiniSoundManager::AllowAudio() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100662b50
    MiniSoundManager::MiniSoundManager() {
        SoundInstance** arg1 = (SoundInstance**)std::array<audio::SoundInstance*, 5ul>::begin();
        SoundInstance** arg2 = (SoundInstance**)std::array<audio::SoundInstance*, 5ul>::end();
        void* local_20 = nullptr;
        eastl::fill<audio::SoundInstance**, decltype(nullptr)>(arg1, arg2, local_20);
    }

    // 0x100662be0
    uint64_t MiniSoundManager::UpdateAudio() {
        SoundManager* this_00;
        Layout* this_01;
        shared_ptr<hal::audio::AudioRenderer>* this_02;

        if (InstancePtr() != 0) {
            this_00 = (SoundManager*)InstancePtr();
            this_01 = (Layout*)this_00->GetAudioAPI();
            this_02 = (shared_ptr<hal::audio::AudioRenderer>*)this_01->SSOBeginPtr();
            if (((TcpConnectionMessageBase*)(*this_02).operator->())->GetEndPosition() != 2) {
                ProcessSoundInstances();
                return 1;
            }
            CleanUpAudio();
        }
        return 0;
    }

    // 0x100662c50
    void MiniSoundManager::ProcessSoundInstances() {
        bool cVar2;
        int iVar3;
        uint64_t extraout_var;
        SoundManager* pSVar6;
        SoundInstance* this_00;

        uint8_t uVar1 = GetSoundPosition();
        uint64_t* puVar4 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::begin();
        uint64_t* puVar5 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::end();
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            this_00 = (SoundInstance*)*puVar4;
            if (this_00 != nullptr) {
                cVar2 = this_00->IsFinished();
                if (!cVar2) {
                    pSVar6 = (SoundManager*)this_00->InstancePtr();
                    iVar3 = (*puVar4)->GetMaxMapZ();
                    cVar2 = pSVar6->TestWithinLevel(iVar3);
                    if (!cVar2) {
                        (*puVar4)->Suspend(0.0);
                    } else {
                        cVar2 = (*puVar4)->IsSoundShape3d();
                        if (((cVar2) && (iVar3 = (*puVar4)->GetUpdateNumber(), iVar3 != 1)) &&
                            (iVar3 = (*puVar4)->GetUpdateNumber(), iVar3 != 2)) {
                            (*puVar4)->SetPosition(
                                *((Vector3T<float>*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1)));
                        }
                    }
                } else {
                    pSVar6 = (SoundManager*)this_00->Instance();
                    pSVar6->TakeOwnershipOfSoundInstance(*puVar4);
                    *puVar4 = 0;
                }
            }
        }
    }

    // 0x100662e70
    void MiniSoundManager::CleanUpAudio() {
        SoundInstance* this_01;

        uint64_t* puVar3 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::begin();
        uint64_t* puVar2 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::end();
        for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            this_01 = (SoundInstance*)*puVar3;
            if (this_01 != nullptr) {
                if (this_01->IsAnimationSound() == '\0') {
                    this_01 = (SoundInstance*)*puVar3;
                    this_01->Suspend(0.0);
                }
                ((SoundManager*)this_01->Instance())->TakeOwnershipOfSoundInstance(*puVar3);
                *puVar3 = 0;
            }
        }
    }

    // 0x100662f20
    void MiniSoundManager::AddSound(int arg1, int arg2, SoundShape soundShape, int arg4, int arg5,
                                    const math::Vector3T<float>& vector3, int arg7, hal::audio::BussType bussType,
                                    SoundType soundType, int arg10, unsigned int arg11) {
        long* plVar2;
        long* plVar3;
        SoundManager* this_00;
        SoundInstance* this_01;
        Singleton<SoundManager>* this_02;
        int in_stack_ffffffffffffffb0;

        if (InstancePtr() != 0) {
            this_02 = (Singleton<SoundManager>*)&field_8;
            plVar2 = (long*)std::array<audio::SoundInstance*, 5ul>::begin();
            plVar3 = (long*)std::array<audio::SoundInstance*, 5ul>::end();
            for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
                if (*plVar2 == 0) {
                    this_00 = (SoundManager*)this_02->Instance();
                    this_01 = (SoundInstance*)this_00->ClaimVorbis(this, soundType, arg1, arg7, arg2, bussType,
                                                                   soundShape, arg4, arg5, vector3, arg10, arg11,
                                                                   in_stack_ffffffffffffffb0, false);
                    if (this_01 == nullptr) {
                        return;
                    }
                    this_01->Start();
                    *plVar2 = (long)this_01;
                    return;
                }
            }
        }
    }

    // 0x100663240
    SoundInstance* MiniSoundManager::GetSoundInstance(int arg1) const {
        bool bVar1;
        long* plVar5;

        SoundInstance* this_00 = (SoundInstance*)&field_8;
        auto puVar3 = this_00->begin();
        auto puVar4 = this_00->end();
        while (true) {
            if (puVar3 == puVar4) {
                return nullptr;
            }
            bVar1 = true;
            if ((SoundInstance*)*puVar3 != nullptr) {
                plVar5 = (*puVar3)->GetResource();
                if ((**(void (**)(...))(*plVar5 + 80))(plVar5) == arg1) {
                    this_00 = (SoundInstance*)*puVar3;
                    bVar1 = false;
                }
            }
            if (!bVar1)
                break;
            puVar3 = puVar3 + 1;
        }
        return this_00;
    }

    // 0x100663300
    unsigned long MiniSoundManager::HasSoundInstance(SoundType soundType) const {
        SoundType SVar1;

        uint8_t* this_00 = &field_8;
        auto puVar2 = this_00->begin();
        auto puVar3 = this_00->end();
        while ((puVar2 != puVar3 &&
                (((PlayerGroup*)*puVar2 == nullptr || (SVar1 = (*puVar2)->GetUpdateNumber(), SVar1 != soundType))))) {
            puVar2 = puVar2 + 1;
        }
        return ~(puVar2 == puVar3) & 4294967041;
    }

    // 0x100663380
    void MiniSoundManager::StopSounds(SoundType soundType, float arg2) {
        SoundType SVar1;
        SoundInstance* this_01;

        uint64_t* puVar3 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::begin();
        uint64_t* puVar2 = (uint64_t*)std::array<audio::SoundInstance*, 5ul>::end();
        for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            if (((PlayerGroup*)*puVar3 != nullptr) && (SVar1 = (*puVar3)->GetUpdateNumber(), SVar1 == soundType)) {
                this_01 = (SoundInstance*)*puVar3;
                this_01->Suspend(arg2);
                ((SoundManager*)this_01->Instance())->TakeOwnershipOfSoundInstance(*puVar3);
                *puVar3 = 0;
            }
        }
    }

} // namespace jag::game
