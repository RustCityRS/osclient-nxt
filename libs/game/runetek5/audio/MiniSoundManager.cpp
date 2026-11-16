// libs/game/runetek5/audio/MiniSoundManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MiniSoundManager.h"

namespace jag::game {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    MiniSoundManager::~MiniSoundManager();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    MiniSoundManager::~MiniSoundManager();

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    MiniSoundManager::AllowAudio() const;

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    MiniSoundManager::~MiniSoundManager();

    // 0x100662b50, 80 bytes, base-object constructor, placed by class name and debug map
    // MiniSoundManager::MiniSoundManager()
    void MiniSoundManager::MiniSoundManager() {
        SoundInstance** ppSVar1;
        SoundInstance** ppSVar2;
        _func_decltype_nullptr* local_20;

        field_0 = &PTR_destruct<oldscape::highlight::NpcUID*> _100f0dea8;
        ppSVar1 = (SoundInstance**)(&field_8)->begin();
        ppSVar2 = (SoundInstance**)(&field_8)->end();
        local_20 = (_func_decltype_nullptr*)0;
        eastl::fill<audio::SoundInstance**, decltype(nullptr)>(ppSVar1, ppSVar2, &local_20);
    }

    // 0x100662bd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MiniSoundManager::MiniSoundManager(): jumps straight to the base-object constructor

    // 0x100662be0, 96 bytes, placed by class name and debug map
    // MiniSoundManager::UpdateAudio()
    undefined8 MiniSoundManager::UpdateAudio() {
        SoundManager* this_00;
        Layout* this_01;
        vector* this_02;
        TcpConnectionMessageBase* this_03;
        type* in_RSI;

        if (Singleton<SoundManager>::InstancePtr() != 0) {
            this_00 = (SoundManager*)Singleton<SoundManager>::InstancePtr();
            this_01 = (Layout*)this_00->GetAudioAPI();
            this_02 = eastl::string::Layout::SSOBeginPtr(this_01, in_RSI);
            this_03 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                (shared_ptr<hal::audio::AudioRenderer>*)this_02);
            if (this_03->GetEndPosition() != 2) {
                ProcessSoundInstances(this);
                return 1;
            }
            (*(code*)field_0[3])(this);
        }
        return 0;
    }

    // 0x100662c50, 224 bytes, placed by class name and debug map
    // MiniSoundManager::ProcessSoundInstances()
    void MiniSoundManager::ProcessSoundInstances() {
        char cVar1;
        int iVar2;
        Vector3T* pVVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        SoundManager* pSVar6;
        SoundInstance* this_00;

        pVVar3 = (Vector3T*)(*(code*)field_0[6])();
        puVar4 = (undefined8*)(&field_8)->begin();
        puVar5 = (undefined8*)(&field_8)->end();
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            this_00 = (SoundInstance*)*puVar4;
            if (this_00 != (SoundInstance*)0) {
                cVar1 = this_00->IsFinished();
                if (cVar1 == '\0') {
                    pSVar6 = (SoundManager*)Singleton<SoundManager>::InstancePtr();
                    iVar2 = (*puVar4)->GetMaxMapZ();
                    cVar1 = pSVar6->TestWithinLevel(iVar2);
                    if (cVar1 == '\0') {
                        (*puVar4)->Suspend(0.0);
                    } else {
                        cVar1 = (*puVar4)->IsSoundShape3d();
                        if (((cVar1 != '\0') && (iVar2 = (*puVar4)->GetUpdateNumber(), iVar2 != 1)) &&
                            (iVar2 = (*puVar4)->GetUpdateNumber(), iVar2 != 2)) {
                            (*puVar4)->SetPosition(pVVar3);
                        }
                    }
                } else {
                    pSVar6 = (SoundManager*)this_00->Instance();
                    pSVar6->TakeOwnershipOfSoundInstance((SoundInstance*)*puVar4);
                    *puVar4 = 0;
                }
            }
        }
    }

    // 0x100662e70, 128 bytes, placed by class name
    // MiniSoundManager::CleanUpAudio()
    void MiniSoundManager::CleanUpAudio() {
        SoundManager* this_00;
        undefined8* puVar2;
        undefined8* puVar3;
        SoundInstance* this_01;

        puVar3 = (undefined8*)(&field_8)->begin();
        puVar2 = (undefined8*)(&field_8)->end();
        for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            this_01 = (SoundInstance*)*puVar3;
            if (this_01 != (SoundInstance*)0) {
                if (this_01->IsAnimationSound() == '\0') {
                    this_01 = (SoundInstance*)*puVar3;
                    this_01->Suspend(0.0);
                }
                this_00 = (SoundManager*)this_01->Instance();
                this_00->TakeOwnershipOfSoundInstance((SoundInstance*)*puVar3);
                *puVar3 = 0;
            }
        }
    }

    // 0x100662f20, 240 bytes, placed by class name
    // MiniSoundManager::AddSound(int, int, SoundShape, int, int, math::Vector3T<float> const&, int, hal::audio::BussType, SoundType, int, unsigned int)
    void MiniSoundManager::AddSound(undefined4 param_1, undefined4 param_2, undefined4 param_4, undefined4 param_5,
                                    undefined4 param_6, undefined8 param_7, undefined4 param_8, undefined4 param_9,
                                    undefined4 param_10, undefined4 param_11, undefined4 param_12) {
        long* plVar2;
        long* plVar3;
        SoundManager* pSVar4;
        SoundInstance* this_00;
        Singleton<SoundManager>* this_01;

        if (Singleton<SoundManager>::InstancePtr() != 0) {
            this_01 = (Singleton<SoundManager>*)&field_8;
            plVar2 = (long*)this_01->begin();
            plVar3 = (long*)this_01->end();
            for (; plVar2 != plVar3; plVar2 = plVar2 + 1) {
                if (*plVar2 == 0) {
                    pSVar4 = (SoundManager*)this_01->Instance();
                    this_00 =
                        (SoundInstance*)pSVar4->ClaimVorbis(this, param_10, param_1, param_8, param_2, param_9, param_4,
                                                            param_5, param_6, param_7, param_11, param_12);
                    if (this_00 == (SoundInstance*)0) {
                        return;
                    }
                    this_00->Start();
                    *plVar2 = (long)this_00;
                    return;
                }
            }
        }
    }

    // 0x100663240, 144 bytes, placed by class name
    // MiniSoundManager::GetSoundInstance(int) const
    undefined1* MiniSoundManager::GetSoundInstance(int param_1) {
        bool bVar1;
        undefined8* puVar3;
        undefined8* puVar4;
        long* plVar5;
        undefined1* this_00;

        this_00 = &field_8;
        puVar3 = (undefined8*)this_00->begin();
        puVar4 = (undefined8*)this_00->end();
        while (true) {
            if (puVar3 == puVar4) {
                return (undefined1*)0;
            }
            bVar1 = true;
            if ((SoundInstance*)*puVar3 != (SoundInstance*)0) {
                plVar5 = (long*)(*puVar3)->GetResource();
                if ((**(code**)(*plVar5 + 80))(plVar5) == param_1) {
                    this_00 = (undefined1*)*puVar3;
                    bVar1 = false;
                }
            }
            if (!bVar1)
                break;
            puVar3 = puVar3 + 1;
        }
        return this_00;
    }

    // 0x100663300, 128 bytes, placed by class name
    // MiniSoundManager::HasSoundInstance(SoundType) const
    ulong MiniSoundManager::HasSoundInstance(int param_2) {
        int iVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        undefined1* this_00;

        this_00 = &field_8;
        puVar2 = (undefined8*)this_00->begin();
        puVar3 = (undefined8*)this_00->end();
        while ((puVar2 != puVar3 && (((PlayerGroup*)*puVar2 == (PlayerGroup*)0 ||
                                      (iVar1 = (*puVar2)->GetUpdateNumber(), iVar1 != param_2))))) {
            puVar2 = puVar2 + 1;
        }
        return CONCAT71((int7)((ulong)this_00 >> 8), ~(puVar2 == puVar3)) & 4294967041;
    }

    // 0x100663380, 144 bytes, placed by class name
    // MiniSoundManager::StopSounds(SoundType, float)
    void MiniSoundManager::StopSounds(float param_1, MiniSoundManager* this, int param_3) {
        SoundManager* this_00;
        int iVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        SoundInstance* this_01;

        puVar3 = (undefined8*)(&field_8)->begin();
        puVar2 = (undefined8*)(&field_8)->end();
        for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
            if (((PlayerGroup*)*puVar3 != (PlayerGroup*)0) &&
                (iVar1 = (*puVar3)->GetUpdateNumber(), iVar1 == param_3)) {
                this_01 = (SoundInstance*)*puVar3;
                this_01->Suspend(param_1);
                this_00 = (SoundManager*)this_01->Instance();
                this_00->TakeOwnershipOfSoundInstance((SoundInstance*)*puVar3);
                *puVar3 = 0;
            }
        }
    }

} // namespace jag::game
