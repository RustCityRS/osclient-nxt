// libs/game/runetek5/audio/SoundManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SoundManager.h"

namespace jag::game {
    // 0x100189b80: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    SoundManager::SoundManagerDebugData::SoundManagerDebugData();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    SoundManager::SoundManagerDebugData::Reset();

    // 0x10019b570: the linker folded this into hardware::MemoryInfo::MemoryInfo(), which has identical code
    SoundManager::SoundManagerDebugData::SoundManagerDebugData();

    // 0x100662d90, 96 bytes, placed by class name and debug map
    // SoundManager::TakeOwnershipOfSoundInstance(audio::SoundInstance*)
    void SoundManager::TakeOwnershipOfSoundInstance(SoundInstance* param_1) {
        undefined8 uVar2;

        if (param_1 != (SoundInstance*)0) {
            if (param_1->IsOwnedBy(this) != '\0') {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/audio/SoundManager.cpp",
                                    503,
                                    "AUDIO: SoundManager trying to take ownership of a sound instance that it already "
                                    "owns. Questionable behaviour indeed.");
            }
            param_1->SetHeapSize((ulong)this);
        }
    }

    // 0x100663010, 560 bytes, placed by class name and debug map
    // SoundManager::ClaimVorbis(void*, SoundType, int, int, int, hal::audio::BussType, SoundShape, int, int, math::Vector3T<float> const&, int, int, int, bool)
    SoundInstance* SoundManager::ClaimVorbis(void* param_1, int param_3, int param_4, int param_5, int param_6,
                                             int param_7, int param_8, int param_9, int param_10, Vector3T* param_11,
                                             int param_12, uint param_13, undefined8 param_14, bool param_15) {
        char cVar1;
        bool bVar2;
        undefined8 uVar3;
        shared_ptr* this_00;
        SoundInstance* this_01;
        uint uVar4;
        float fVar5;
        function<void(audio::SoundInstance*)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = IsReady(this);
        if (cVar1 != '\0') {
            cVar1 = TestWithinLevel(this, param_12);
            if (cVar1 != '\0') {
                if (param_8 != 4) {
                    cVar1 = TestWithinRange(this, param_11, param_10);
                    if (cVar1 == '\0')
                        goto LAB_1006631f6;
                }
                if (((param_3 != 10) || (field_10640 != param_4)) && ((param_3 != 11 || (field_10644 != param_4)))) {
                    if (param_15 != false) {
                        uVar3 =
                            std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::
                            operator->((
                                unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
                        fVar5 = (float)hal::audio::AudioAPI::GetMixBussTotalGain(uVar3, param_7);
                        if (fVar5 <= 0.0) {
                            if (param_3 == 10) {
                                field_10648 = param_4;
                            }
                            goto LAB_1006631f6;
                        }
                    }
                    this_00 = (shared_ptr*)LoadResource(this, param_4, param_15);
                    bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    if (bVar2) {
                        this_01 = (SoundInstance*)ClaimSoundInstance(this, this_00, param_1);
                        if (this_01 != (SoundInstance*)0) {
                            this_01->SetOriginalGain((float)param_6 * 0.003921569);
                            this_01->SetLoopCount(param_5 - (uint)(0 < param_5));
                            this_01->SetPosition(param_11);
                            this_01->SetSoundSpatialSize((float)param_9, (float)param_10);
                            this_01->SetPlayers(param_7);
                            this_01->SetSoundShape(param_8);
                            this_01->SetSoundType(param_3);
                            this_01->SetLevel(param_12);
                            uVar4 = 256;
                            if (0 < (int)param_13) {
                                uVar4 = param_13;
                            }
                            this_01->SetRate(uVar4);
                            if (param_8 != 1) {
                                cVar1 = this_01->IsSoundShapeSphere();
                                if (cVar1 == '\0')
                                    goto LAB_1006631f8;
                            }
                            std::function<void(audio::SoundInstance*)>::function<void (*)(audio::SoundInstance*), void>(
                                local_68, UpdateSpatialShapeSphere);
                            this_01->SetSpatialCallback(local_68);
                            std::function<void(audio::SoundInstance*)>::~function(local_68);
                        }
                        goto LAB_1006631f8;
                    }
                }
            }
        }
    LAB_1006631f6:
        this_01 = (SoundInstance*)0;
    LAB_1006631f8:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this_01;
    }

    // 0x100663410, 608 bytes, base-object constructor, placed by class name and debug map
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&)
    /* SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)>
   const&, std::function<bool (EntityCombinedID)> const&, std::function<bool
   (EntityCombinedID)> const&) */

    void SoundManager::SoundManager(Js5ResourceProvider* param_1, function* param_2, function* param_3,
                                    function* param_4) {
        int* piVar1;
        undefined1* puVar2;
        int local_3c;
        SoundManager* local_38;

        new (this) Singleton<SoundManager>();
        new (this) oldscape::dash3d::ModelLit::AABB();
        std::make_unique<hal::audio::AudioAPI>();
        field_32 = 0;
        local_38 = (SoundManager*)CONCAT44(local_38._4_4_, 16);
        local_3c = 16;
        piVar1 = std::max<int>((int*)&local_38, &local_3c);
        new (&field_40, 64, *piVar1) FastPool<audio::SoundInstance, int>();
        new (field_72, 41943040, "SoundManager")
            LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>();
        new (&local_38) eastl::allocator("EASTL vector");
        new (&field_10584, 20, (allocator*)&local_38)
            eastl::vector<shared_ptr<audio::SoundResource>, eastl::allocator>();
        field_10616 = param_1;
        new (&field_10624, 0.0, 0.0, 0.0) math::ColourHSL();
        field_10636 = 0;
        field_10640 = -1;
        field_10644 = -1;
        field_10648 = -1;
        field_10652 = 0;
        field_10656 = (SoundInstance*)0;
        field_10664 = (SoundInstance*)0;
        std::function<void(int)>::function((function<void(int)>*)&field_10672, param_2);
        std::function<bool(EntityCombinedID)>::function((function<bool(EntityCombinedID)>*)&field_10720, param_3);
        std::function<bool(EntityCombinedID)>::function((function<bool(EntityCombinedID)>*)&field_10768, param_4);
        new (&field_10832) hal::audio::AudioOptionsCallbacks();
        local_38 = (SoundManager*)CONCAT71(local_38._1_7_, 128);
        (&field_11072, (uchar*)&local_38)->fill();
        puVar2 = (undefined1*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)&field_11072, 0);
        *puVar2 = 255;
        local_38 = this;
        std::function<float()>::operator=((function<float()>*)&field_10832, (__0*)&local_38);
        local_38 = this;
        std::function<float()>::operator=((function<float()>*)&field_10928, (__1*)&local_38);
        local_38 = this;
        std::function<float()>::operator=((function<float()>*)&field_10880, (__2*)&local_38);
        local_38 = this;
        std::function<float()>::operator=((function<float()>*)&field_10976, (__3*)&local_38);
        local_38 = this;
        std::function<float()>::operator=((function<float()>*)&field_11024, (__4*)&local_38);
        StartAudio(this);
    }

    // 0x100663980, 80 bytes, placed by class name
    // SoundManager::StartAudio()
    void SoundManager::StartAudio() {
        byte bVar1;
        AudioAPI* this_00;
        AudioSystemStartParams local_28;

        new (&local_28) hal::audio::AudioSystemStartParams();
        this_00 =
            (AudioAPI*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
        bVar1 = this_00->StartAudioSystem(&local_28, (AudioOptionsCallbacks*)&field_10832);
        field_10816 = (uint)bVar1;
    }

    // 0x100663a30, 16 bytes, complete-object constructor, placed by class name
    // SoundManager::SoundManager(Js5ResourceProvider*, std::function<void (int)> const&, std::function<bool (EntityCombinedID)> const&, std::function<bool (EntityCombinedID)> const&): jumps straight to the base-object constructor

    // 0x100663a40, 224 bytes, base-object destructor, placed by class name
    // SoundManager::~SoundManager()
    void SoundManager::~SoundManager() {
        StopAudioSystem(this);
        (&field_10832)->~AudioOptionsCallbacks();
        std::function<bool(EntityCombinedID)>::~function((function<bool(EntityCombinedID)>*)&field_10768);
        std::function<bool(EntityCombinedID)>::~function((function<bool(EntityCombinedID)>*)&field_10720);
        std::function<void(int)>::~function((function<void(int)>*)&field_10672);
        (&field_10584)->~vector();
        field_72->~LRUHashCache();
        (&field_40)->~FastPool();
        (&field_24)->~unique_ptr();
        ~AutoSingleton();
    }

    // 0x100663b20, 208 bytes, placed by class name
    // SoundManager::StopAudioSystem()
    void SoundManager::StopAudioSystem() {
        undefined1* this_00;
        SoundInstance* this_01;
        AudioAPI* this_02;
        char cVar1;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        this_00 = &field_40;
        field_10656 = (SoundInstance*)0;
        field_10664 = (SoundInstance*)0;
        local_48 = this_00->begin();
        local_40 = extraout_EDX;
        local_38 = this_00->end();
        local_30 = extraout_EDX_00;
        cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
        if (cVar1 != '\0') {
            do {
                this_01 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                this_01->Free();
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
            } while (cVar1 != '\0');
        }
        (&field_10584)->clear();
        this_00->clear();
        (field_72, 0)->Clean();
        this_02 =
            (AudioAPI*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
        this_02->StopAudioSystem();
    }

    // 0x100663bf0, 16 bytes, complete-object destructor, placed by class name
    // SoundManager::~SoundManager(): jumps straight to the base-object destructor

    // 0x100663c10, 32 bytes, placed by class name
    // SoundManager::MainLogic()
    void SoundManager::MainLogic() {
        (field_72, 9000)->Clean();
    }

    // 0x100663c30, 896 bytes, placed by class name
    // SoundManager::Service(float)
    void SoundManager::Service(float param_1) {
        undefined1* puVar1;
        undefined1* this_00;
        shared_ptr<audio::SoundResource>* this_01;
        bool bVar2;
        char cVar3;
        int iVar4;
        uint uVar5;
        Layout* pLVar6;
        shared_ptr* psVar7;
        vector* pvVar8;
        TcpConnectionMessageBase* pTVar9;
        AudioRenderer* this_02;
        AudioAPI* pAVar10;
        shared_ptr<audio::SoundResource>* psVar11;
        long* plVar12;
        shared_ptr* psVar13;
        WorldmapAreaMetadata* this_03;
        type* in_RSI;
        FastPool_iterator* pFVar14;
        undefined1 auVar16[12];
        undefined1 local_58[12];
        FastPool_iterator local_48[20];

        if (field_10816 == 0) {
            puVar1 = &field_24;
            pLVar6 =
                (Layout*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                    (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)puVar1);
            psVar7 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(pLVar6, in_RSI);
            bVar2 = shared_ptr::operator_cast_to_bool(psVar7);
            if (bVar2) {
                pLVar6 =
                    (Layout*)
                        std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)puVar1);
                pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar6, in_RSI);
                pTVar9 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                    (shared_ptr<hal::audio::AudioRenderer>*)pvVar8);
                iVar4 = pTVar9->GetEndPosition();
                if (iVar4 == 2) {
                    pLVar6 = (Layout*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::
                             operator->(
                                 (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)puVar1);
                    pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar6, in_RSI);
                    this_02 = (AudioRenderer*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                        (shared_ptr<hal::audio::AudioRenderer>*)pvVar8);
                    iVar4 = this_02->ActiveDecoderCount();
                    if ((iVar4 == 0) && (cVar3 = (&field_40)->empty(), cVar3 != '\0')) {
                        pAVar10 =
                            (AudioAPI*)std::
                                unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                                    (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)
                                        puVar1);
                        pAVar10->StopAudioSystem();
                        Restart(this);
                    }
                }
            }
        }
        psVar11 = (shared_ptr<audio::SoundResource>*)field_72->GetAsLinkedList();
        for (this_01 = *(shared_ptr<audio::SoundResource>**)(psVar11 + 48); this_01 != psVar11;
             this_01 = *(shared_ptr<audio::SoundResource>**)(this_01 + 48)) {
            plVar12 = (long*)shared_ptr<audio::SoundResource>::operator->(this_01);
            (**(code**)(*plVar12 + 24))(param_1, plVar12);
        }
        psVar7 = (shared_ptr*)(&field_10584)->HeapBeginPtr();
        psVar13 = (shared_ptr*)(&field_10584)->end();
        for (; psVar7 != psVar13; psVar7 = psVar7 + 1) {
            bVar2 = shared_ptr::operator_cast_to_bool(psVar7);
            if (bVar2) {
                plVar12 =
                    (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)psVar7);
                (**(code**)(*plVar12 + 24))(param_1, plVar12);
                plVar12 =
                    (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)psVar7);
                cVar3 = (**(code**)(*plVar12 + 32))(plVar12);
                plVar12 =
                    (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)psVar7);
                if (cVar3 == '\0') {
                    cVar3 = (**(code**)(*plVar12 + 40))(plVar12);
                    if (cVar3 == '\0')
                        goto LAB_100663d8d;
                    plVar12 =
                        (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)psVar7);
                    iVar4 = (**(code**)(*plVar12 + 88))(plVar12);
                    SuspendSoundInstancesByResourceId(this, iVar4);
                } else {
                    uVar5 = (**(code**)(*plVar12 + 56))(plVar12);
                    plVar12 =
                        (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)psVar7);
                    iVar4 = (**(code**)(*plVar12 + 88))(plVar12);
                    local_58._0_8_ = SEXT48(iVar4);
                    (field_72, psVar7, uVar5, (ulonglong*)local_58)->Put();
                }
                shared_ptr<audio::SoundResource>::reset();
            }
        LAB_100663d8d:
        }
        puVar1 = &field_40;
        local_58 = puVar1->begin();
        local_48._0_12_ = puVar1->end();
        pFVar14 = local_48;
        cVar3 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)local_58, pFVar14);
        if (cVar3 != '\0') {
            this_00 = &field_24;
            do {
                this_03 = (WorldmapAreaMetadata*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)local_58);
                this_03->ProcessDelayedStart();
                pLVar6 =
                    (Layout*)
                        std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)this_00);
                psVar7 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(pLVar6, (type*)pFVar14);
                this_03->Update(param_1, psVar7);
                cVar3 = this_03->IsFree();
                if (cVar3 == '\0') {
                    cVar3 = this_03->IsOwnedBy(this);
                    if (cVar3 != '\0') {
                        cVar3 = this_03->IsFinished();
                        if (cVar3 == '\0') {
                            pLVar6 =
                                (Layout*)
                                    std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::
                                    operator->(
                                        (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)
                                            this_00);
                            pvVar8 = eastl::string::Layout::SSOBeginPtr(pLVar6, (type*)(SoundManager*)this);
                            pTVar9 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                                (shared_ptr<hal::audio::AudioRenderer>*)pvVar8);
                            iVar4 = pTVar9->GetEndPosition();
                            if (iVar4 != 2) {
                                iVar4 = this_03->GetMaxMapZ();
                                cVar3 = TestWithinLevel(this, iVar4);
                                if (cVar3 == '\0') {
                                    this_03->Suspend(0.0);
                                }
                                goto LAB_100663e80;
                            }
                        }
                        iVar4 = this_03->GetUpdateNumber();
                        if (iVar4 == 10) {
                            pAVar10 = (AudioAPI*)this_00->get();
                            bVar2 = (bool)this_03->IsAudibleInBussChain(pAVar10);
                            StopSong(this, bVar2, 0.0);
                        } else if (iVar4 == 11) {
                            plVar12 = (long*)this_03->GetResource();
                            iVar4 = (**(code**)(*plVar12 + 80))(plVar12);
                            if (iVar4 == field_10644) {
                                StopJingle(this);
                            }
                        }
                        this_03->Free();
                        local_58->destroy(this_03);
                    }
                }
            LAB_100663e80:
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)local_58);
                auVar16 = puVar1->end();
                pFVar14 = local_48;
                local_48._0_12_ = auVar16;
                cVar3 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)local_58, pFVar14);
            } while (cVar3 != '\0');
        }
    }

    // 0x100663fe0, 256 bytes, placed by class name
    // SoundManager::Restart()
    void SoundManager::Restart() {
        char cVar2;
        Layout* this_00;
        shared_ptr* this_01;
        AudioAPI* this_02;
        undefined8 uVar3;
        type* in_RSI;
        scoped_lock<std::mutex> local_20[8];

        this_00 = (Layout*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
        this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_02 =
                (AudioAPI*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                    (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
            cVar2 = this_02->RestartAudioSystem((AudioOptionsCallbacks*)&field_10832);
            if (cVar2 == '\0') {
                std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&hal::audio::AudioRenderer::m_audioMutex);
                Reset(this);
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/audio/SoundManager.cpp",
                                    719, "Failed to re-establish audio.");
                std::scoped_lock<std::mutex>::~scoped_lock(local_20);
            } else {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/audio/SoundManager.cpp",
                                    709, "Successfully recovered audio.");
                field_10816 = 1;
            }
        } else {
            StartAudio(this);
        }
    }

    // 0x100664260, 192 bytes, placed by class name
    // SoundManager::SuspendSoundInstancesByResourceId(int)
    void SoundManager::SuspendSoundInstancesByResourceId(int param_1) {
        char cVar1;
        SoundInstance* this_00;
        long* plVar3;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        local_48 = (&field_40)->begin();
        local_40 = extraout_EDX;
        local_38 = (&field_40)->end();
        local_30 = extraout_EDX_00;
        cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
        if (cVar1 != '\0') {
            do {
                this_00 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                plVar3 = (long*)this_00->GetResource();
                if ((**(code**)(*plVar3 + 88))(plVar3) == param_1) {
                    this_00->Suspend(0.0);
                }
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
            } while (cVar1 != '\0');
        }
    }

    // 0x100664410, 96 bytes, placed by class name
    // SoundManager::StopJingle()
    void SoundManager::StopJingle() {
        field_10652 = 0;
        if (field_10664 != (SoundInstance*)0) {
            (field_10664, 0.0)->Suspend();
            field_10664 = (SoundInstance*)0;
            field_10644 = -1;
        }
        if (field_10656 != (SoundInstance*)0) {
            field_10656->Resume();
        }
    }

    // 0x100664470, 160 bytes, placed by class name
    // SoundManager::StopSong(bool, float)
    void SoundManager::StopSong(bool param_1, float param_2) {
        if (field_10656 != (SoundInstance*)0) {
            (field_10656, 12)->SetSoundType();
            (field_10656, param_2)->Suspend();
            if (param_1) {
                if ((&field_10672)->operator_cast_to_bool()) {
                    if (field_10656->GetBussID() != 3) {
                        std::function<void(int)>::operator()((function<void(int)>*)&field_10672, field_10640);
                    }
                }
            }
        }
        field_10656 = (SoundInstance*)0;
        field_10640 = -1;
    }

    // 0x100664560, 160 bytes, placed by class name
    // SoundManager::PreLoadResource(int, bool)
    ulong SoundManager::PreLoadResource(int param_1, bool param_2) {
        char cVar1;
        uint uVar3;
        shared_ptr* this_00;
        long* plVar4;
        undefined7 in_register_00000011;
        undefined8 unaff_R15;
        ulong uVar5;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            (*(code*)field_10616->field_0[6])(field_10616, Js5Archive::JS5_VORBIS, param_1, 0, Priority::LOW, 0);
            uVar5 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        } else {
            cVar1 = IsReady(this);
            uVar5 = 0;
            if ((cVar1 != '\0') && (-1 < param_1)) {
                this_00 = (shared_ptr*)LoadResource(this, param_1, true);
                uVar5 = 0;
                if (operator!=(this_00, (_func_decltype_nullptr*)0)) {
                    plVar4 =
                        (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)this_00);
                    uVar3 = (**(code**)(*plVar4 + 32))(plVar4);
                    uVar5 = (ulong)uVar3;
                }
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x100664610, 544 bytes, placed by class name
    // SoundManager::LoadResource(int, bool)
    shared_ptr* SoundManager::LoadResource(int param_1, bool param_2) {
        SoundManager* pSVar1;
        Layout* this_00;
        bool bVar2;
        int iVar4;
        int iVar5;
        shared_ptr* this_01;
        shared_ptr* psVar6;
        shared_ptr* psVar7;
        long* plVar8;
        DebugUIElement* this_02;
        undefined7 in_register_00000011;
        shared_ptr* psVar9;
        shared_ptr local_70;
        AudioAPI* local_60;
        SoundManager* local_58;
        undefined4 local_50;
        Layout* local_48;
        shared_ptr local_40;

        iVar4 = audio::SoundResource::GenerateCacheableId(param_1, param_2);
        local_40._0_8_ = SEXT48(iVar4);
        this_01 = (shared_ptr*)LRUHashCache<audio::SoundResource, 128ul, 129ul, true, unsigned long long>::Find(
            (ulonglong*)field_72);
        bVar2 = shared_ptr::operator_cast_to_bool(this_01);
        if (!bVar2) {
            this_01 = (shared_ptr*)&field_10584;
            local_58 = this;
            local_50 = (int)CONCAT71(in_register_00000011, param_2);
            psVar6 = (shared_ptr*)this_01->HeapBeginPtr();
            local_48 = (Layout*)this_01;
            psVar7 = (shared_ptr*)this_01->end();
            if (psVar6 != psVar7) {
                bVar2 = false;
                do {
                    if (shared_ptr::operator_cast_to_bool(psVar6)) {
                        plVar8 = (long*)shared_ptr<audio::SoundResource>::operator->(
                            (shared_ptr<audio::SoundResource>*)psVar6);
                        iVar5 = (**(code**)(*plVar8 + 88))(plVar8);
                        psVar9 = psVar6;
                        if (iVar5 == iVar4)
                            break;
                    }
                    psVar6 = psVar6 + 1;
                    bVar2 = psVar6 == psVar7;
                    psVar9 = this_01;
                } while (!bVar2);
                this_01 = psVar9;
                if (!bVar2) {
                    return psVar9;
                }
            }
            pSVar1 = local_58;
            local_60 = (AudioAPI*)(&local_58->field_24)->get();
            make_shared<VorbisJs5Resource, hal::audio::AudioAPI*>((jag*)&local_70, &local_60);
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_40, &local_70);
            local_70.~shared_ptr();
            this_02 = (DebugUIElement*)shared_ptr<audio::SoundResource>::operator->(
                (shared_ptr<audio::SoundResource>*)&local_40);
            this_02->NotifyDebugRegistration(SUB41(local_50, 0));
            plVar8 = (long*)shared_ptr<audio::SoundResource>::operator->((shared_ptr<audio::SoundResource>*)&local_40);
            (**(code**)(*plVar8 + 16))(plVar8, pSVar1->field_10616, param_1, hal::audio::AudioFormat::VORBIS);
            this_00 = local_48;
            psVar6 = (shared_ptr*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(local_48);
            psVar7 = (shared_ptr*)this_00->end();
            for (; psVar6 != psVar7; psVar6 = psVar6 + 1) {
                bVar2 = shared_ptr::operator_cast_to_bool(psVar6);
                if (!bVar2) {
                    shared_ptr<audio::SoundResource>::operator=((shared_ptr<audio::SoundResource>*)psVar6, &local_40);
                    this_01 = psVar6;
                    break;
                }
            }
            if (psVar6 == psVar7) {
                local_48->push_back(&local_40);
                this_01 = (shared_ptr*)local_48->back();
            }
            local_40.~shared_ptr();
        }
        return this_01;
    }

    // 0x100664a60, 288 bytes, placed by class name
    // SoundManager::PlaySong(int, int, bool)
    void SoundManager::PlaySong(int param_1, int param_2, bool param_3) {
        SoundInstance* this_00;

        if (field_10640 != param_1) {
            this_00 = (SoundInstance*)ClaimVorbis(this, this, 10, param_1, 0, param_2, !param_3 * '\x04' + '\x03', 4, 0,
                                                  0, PTR_ZERO_100ee66e8, 4294967295, 256);
            if (this_00 == (SoundInstance*)0) {
                StopSong(this, false, 1.2);
            } else {
                if (field_10640 < 0) {
                    this_00->Start();
                } else {
                    StopSong(this, false, 1.2);
                    this_00->FadeIn(0.333, 1.0, 1.5);
                    this_00->SetStartDelay(25, false);
                }
                field_10640 = param_1;
                field_10656 = this_00;
                if (field_10652 != '\0') {
                    this_00->Pause();
                }
            }
        }
    }

    // 0x100664ba0, 224 bytes, placed by class name
    // SoundManager::PlaySong(audio::SoundInstance*)
    void SoundManager::PlaySong(SoundInstance* param_1) {
        int iVar1;
        int iVar2;
        long* plVar3;

        if (param_1 == (SoundInstance*)0) {
            StopSong(this, false, 1.2);
        } else {
            iVar2 = field_10640;
            plVar3 = (long*)param_1->GetResource();
            iVar1 = (**(code**)(*plVar3 + 80))(plVar3);
            if (iVar2 != iVar1) {
                if (field_10640 < 0) {
                    param_1->Start();
                } else {
                    StopSong(this, false, 1.2);
                    param_1->FadeIn(0.333, 1.0, 1.5);
                    param_1->SetStartDelay(25, false);
                }
                plVar3 = (long*)param_1->GetResource();
                iVar2 = (**(code**)(*plVar3 + 80))(plVar3);
                field_10640 = iVar2;
                field_10656 = param_1;
                if (field_10652 != '\0') {
                    param_1->Pause();
                }
            }
        }
    }

    // 0x100664cb0, 144 bytes, placed by class name
    // SoundManager::PlayVorbis(SoundType, int, int, int, hal::audio::BussType, SoundShape, int, int, math::Vector3T<float> const&, int, int, int)
    void SoundManager::PlayVorbis(undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5,
                                  undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9,
                                  undefined8 param_10, undefined4 param_11, undefined4 param_12, int param_13) {
        SoundInstance* this_00;

        this_00 = (SoundInstance*)ClaimVorbis(this, this, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                                              param_9, param_10, param_11, param_12);
        if (this_00 != (SoundInstance*)0) {
            if (param_13 == 0) {
                this_00->Start();
            } else {
                this_00->SetStartDelay(param_13, false);
            }
        }
    }

    // 0x100664d40, 368 bytes, placed by class name
    // SoundManager::PlaySEQSound(Entity*, int, int, int, int, hal::audio::BussType, int, math::Vector3T<float> const&, SoundType, unsigned int)
    void SoundManager::PlaySEQSound(HitmarkType* param_1, undefined4 param_2, undefined4 param_3, int param_4,
                                    int param_5, undefined4 param_7, int param_8, undefined8 param_9,
                                    undefined4 param_10, undefined4 param_11) {
        char cVar1;
        byte bVar2;
        int iVar3;
        EntityCombinedID EVar4;
        undefined8 uVar5;
        float fVar6;

        cVar1 = (**(code**)(*(long*)&param_1->field_8 + 32))(&param_1->field_8);
        if (cVar1 != '\0') {
            iVar3 = param_1->GetDuration();
            cVar1 = TestWithinLevel(this, iVar3);
            if (cVar1 != '\0') {
                EVar4.m_entityID = (*(code*)param_1->field_0[30])(param_1);
                bVar2 = std::function<bool(EntityCombinedID)>::operator()(
                    (function<bool(EntityCombinedID)>*)&field_10720, EVar4);
                if ((bVar2 != 0) || (param_8 != 0)) {
                    uVar5 =
                        std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
                    fVar6 = (float)hal::audio::AudioAPI::GetMixBussTotalGain(uVar5, (uint)(bVar2 ^ 1) * 3 + 1);
                    if (0.0 < fVar6) {
                        EVar4.m_entityID = (*(code*)param_1->field_0[30])(param_1);
                        cVar1 = std::function<bool(EntityCombinedID)>::operator()(
                            (function<bool(EntityCombinedID)>*)&field_10768, EVar4);
                        if ((!(param_5 == -1 || bVar2 != 0)) && (cVar1 == '\0')) {
                            param_4 = (param_5 * param_4) / 100;
                        }
                        uVar5 = param_1->GetDuration();
                        (**(code**)(*(long*)&param_1->field_8 + 16))(
                            &param_1->field_8, param_2, param_4, (ulong)(param_8 == 0 | bVar2) << 2, 0, param_8 << 7,
                            param_9, param_3, param_7, param_10, uVar5, param_11);
                    }
                }
            }
        }
    }

    // 0x100664ed0, 128 bytes, placed by class name
    // SoundManager::TestWithinRange(math::Vector3T<float> const&, int) const
    bool SoundManager::TestWithinRange(Vector3T* param_1, int param_2) {
        vector* pvVar1;
        float* pfVar2;
        float extraout_XMM0_Da;
        ColourHSL local_40;
        undefined8 local_30;
        undefined4 local_28;
        float local_1c;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        local_1c = *(float*)pvVar1;
        pfVar2 = (float*)param_1->second();
        new (&local_40) math::ColourHSL(local_1c, 0.0, *pfVar2);
        local_30 = math::operator-((Vector3T*)&local_40, (Vector3T*)&field_10624);
        local_28 = 0;
        local_30.Length();
        return extraout_XMM0_Da < (float)param_2;
    }

    // 0x100664f50, 160 bytes, placed by class name
    // SoundManager::ClaimSoundInstance(shared_ptr<audio::SoundResource> const&, void*)
    SoundInstance* SoundManager::ClaimSoundInstance(shared_ptr* param_1, void* param_2) {
        int iVar1;
        int iVar2;
        undefined8 uVar3;
        SoundInstance* this_00;
        undefined1* this_01;

        if (param_2 == (void*)0) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "audio/SoundManager.cpp",
                                480, "AUDIO: Trying to claim a sound instance with no valid owner specified.");
        }
        this_01 = &field_40;
        iVar1 = this_01->GetValue();
        iVar2 = this_01->capacity();
        if ((iVar1 < iVar2) &&
            (this_00 = FastPool<audio::SoundInstance, int>::Create<>((FastPool<audio::SoundInstance, int>*)this_01),
             this_00 != (SoundInstance*)0)) {
            this_00->SetHeapSize((ulong)param_2);
            this_00->Claim(param_1);
            return this_00;
        }
        return (SoundInstance*)0;
    }

    // 0x100665110, 512 bytes, placed by class name
    // SoundManager::UpdateSpatialShapeSphere(audio::SoundInstance*)
    void SoundManager::UpdateSpatialShapeSphere(SoundInstance* param_1) {
        int iVar1;
        long lVar2;
        vector* pvVar3;
        float* pfVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        Vector3T* pVVar8;
        SoundInstance* pSVar9;
        uint uVar10;
        float fVar11;
        double dVar12;
        float fVar13;
        undefined8 local_48[2];
        undefined8 local_38[2];
        float local_28;
        float local_24;

        if (param_1 != (SoundInstance*)0) {
            local_24 = (float)param_1->GetSoundSpatialSizeMin();
            local_28 = (float)param_1->GetSoundSpatialSizeMax();
            pSVar9 = param_1;
            local_48[0] = param_1->GetPosition();
            lVar2 = pSVar9->Instance();
            pVVar8 = (Vector3T*)(lVar2 + 10624);
            local_38[0] = math::operator-((Vector3T*)local_48, pVVar8);
            fVar11 = (float)local_38->Length();
            if (local_24 <= fVar11) {
                fVar13 = 0.0;
                if (fVar11 < local_28) {
                    fVar13 = (local_24 - fVar11) / (local_28 - local_24) + 1.0;
                }
            } else {
                fVar13 = 1.0;
            }
            local_28 = fVar11;
            local_24 = fVar13;
            param_1->SetGain(fVar13 * 0.9);
            if ((0.0 < local_24) && (pSVar9 = param_1, iVar1 = param_1->GetSoundShape(), iVar1 != 2)) {
                lVar2 = pSVar9->Instance();
                if (*(long**)(lVar2 + 32) == (long*)0) {
                    fVar11 = 0.0;
                } else {
                    dVar12 = (double)(**(code**)(**(long**)(lVar2 + 32) + 96))();
                    pvVar3 = local_38->SSOBeginPtr(pVVar8);
                    local_24 = *(float*)pvVar3;
                    pfVar4 = (float*)local_38->second();
                    fVar11 = (float)atan2(local_24, *pfVar4);
                    uVar10 = ((int)(dVar12 * -2607.594482421875) - (int)(fVar11 * 2607.5945)) + 12288U & 16383;
                    uVar5 = 16384 - uVar10;
                    if (uVar10 < 8193) {
                        uVar5 = uVar10;
                    }
                    iVar1 = 8192;
                    if ((0.0 < local_28) && (iVar1 = 16384, local_28 < 4096.0)) {
                        iVar1 = (int)(local_28 + local_28 + 8192.0);
                    }
                    iVar6 = uVar5 * iVar1;
                    iVar7 = iVar6 + 8191;
                    if (-1 < iVar6) {
                        iVar7 = iVar6;
                    }
                    local_28 = (float)((16384 - iVar1 >> 1) + (iVar7 >> 13)) * 0.00012207031;
                    local_24 = (float)::sqrt(2.0 - local_28);
                    fVar11 = (float)::sqrt(local_28);
                    fVar11 = fVar11 - local_24;
                }
                param_1->SetPan(fVar11);
            }
        }
    }

    // 0x100665440, 208 bytes, placed by class name
    // SoundManager::StopAllSoundsOnBuss(hal::audio::BussType)
    void SoundManager::StopAllSoundsOnBuss(undefined4 param_2) {
        SoundInstance* this_00;
        AudioAPI* pAVar1;
        char cVar2;
        undefined4 uVar3;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40;
        undefined4 local_38;

        local_50 = (&field_40)->begin();
        local_48 = extraout_EDX;
        local_40 = (&field_40)->end();
        local_38 = extraout_EDX_00;
        cVar2 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)&local_50, (FastPool_iterator*)&local_40);
        if (cVar2 != '\0') {
            do {
                this_00 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_50);
                pAVar1 =
                    (AudioAPI*)
                        std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
                uVar3 = this_00->GetBussID();
                cVar2 = pAVar1->IsMixBussInChain(uVar3, param_2);
                if (cVar2 != '\0') {
                    this_00->Suspend(0.15);
                }
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_50);
                cVar2 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_50, (FastPool_iterator*)&local_40);
            } while (cVar2 != '\0');
        }
    }

    // 0x100665510, 208 bytes, placed by class name
    // SoundManager::AddMixBuss(hal::audio::BussType, hal::audio::BussType, int)
    void SoundManager::AddMixBuss(type* param_2, undefined4 param_3, int param_4) {
        undefined4 uVar1;
        Layout* this_00;
        vector* this_01;
        NXTPixToolkit* this_02;
        long lVar2;
        ulong uVar3;
        function<float()> local_68[48];
        long local_38;

        uVar3 = (ulong)param_2 & 4294967295;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (Layout*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
            (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
        this_01 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
        this_02 = (NXTPixToolkit*)shared_ptr<hal::audio::AudioRenderer>::operator->(
            (shared_ptr<hal::audio::AudioRenderer>*)this_01);
        lVar2 = this_02->GetScreen();
        uVar1 = *(undefined4*)(lVar2 + 4);
        std::function<float()>::function((_func_decltype_nullptr*)local_68);
        (((float)param_4 * 1.5258789e-05))->AddMixBuss(this_00, uVar3, uVar1, 2, param_3, local_68);
        std::function<float()>::~function(local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1006655f0, 80 bytes, placed by class name
    // SoundManager::SetMixBussGain(hal::audio::BussType, int)
    void SoundManager::SetMixBussGain(undefined4 param_2, int param_3) {
        AudioAPI* pAVar1;
        AudioBuss* this_00;
        shared_ptr* this_01;

        pAVar1 =
            (AudioAPI*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
        this_01 = (shared_ptr*)pAVar1->GetMixBuss(param_2);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            this_00 =
                (AudioBuss*)shared_ptr<hal::audio::AudioBuss>::operator->((shared_ptr<hal::audio::AudioBuss>*)this_01);
            this_00->SetGain((float)param_3 * 1.5258789e-05);
        }
    }

    // 0x100665680, 48 bytes, placed by class name
    // SoundManager::AddSoundToGroup(int, audio::SoundInstance*, int)
    void SoundManager::AddSoundToGroup(int param_1, SoundInstance* param_2, int param_3) {
        param_2->SetGroupID(param_1);
        param_2->SetStartDelay(param_3, true);
    }

    // 0x1006656c0, 176 bytes, placed by class name
    // SoundManager::StartSoundGroup(int)
    void SoundManager::StartSoundGroup(int param_1) {
        char cVar1;
        SoundInstance* this_00;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        local_48 = (&field_40)->begin();
        local_40 = extraout_EDX;
        local_38 = (&field_40)->end();
        local_30 = extraout_EDX_00;
        cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
        if (cVar1 != '\0') {
            do {
                this_00 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                if (this_00->GetGroupID() == param_1) {
                    this_00->StartDelayCount();
                }
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
            } while (cVar1 != '\0');
        }
    }

    // 0x100665780, 192 bytes, placed by class name
    // SoundManager::StopSoundGroup(int)
    void SoundManager::StopSoundGroup(int param_1) {
        char cVar1;
        SoundInstance* this_00;
        undefined4 extraout_EDX;
        undefined4 extraout_EDX_00;
        undefined8 local_48;
        undefined4 local_40;
        undefined8 local_38;
        undefined4 local_30;

        local_48 = (&field_40)->begin();
        local_40 = extraout_EDX;
        local_38 = (&field_40)->end();
        local_30 = extraout_EDX_00;
        cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
            (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
        if (cVar1 != '\0') {
            do {
                this_00 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                if (this_00->GetGroupID() == param_1) {
                    this_00->Suspend(0.15);
                    this_00->SetGroupID(-1);
                }
                FastPool_iterator<audio::SoundInstance, int>::operator++(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48);
                cVar1 = FastPool_iterator<audio::SoundInstance, int>::operator!=(
                    (FastPool_iterator<audio::SoundInstance, int>*)&local_48, (FastPool_iterator*)&local_38);
            } while (cVar1 != '\0');
        }
    }

    // 0x100665840, 240 bytes, placed by class name
    // SoundManager::PlayJingle(int, int)
    void SoundManager::PlayJingle(int param_1, int param_2) {
        SoundInstance* pSVar1;

        if (field_10652 != '\0') {
            if (field_10644 == param_1) {
                return;
            }
            StopJingle(this);
        }
        if ((param_2 != 0) && (-1 < param_1)) {
            pSVar1 = (SoundInstance*)ClaimVorbis(this, this, 11, param_1, 1, param_2, 7, 4, 0, 0, PTR_ZERO_100ee66e8,
                                                 4294967295, 256);
            field_10664 = pSVar1;
            if (pSVar1 != (SoundInstance*)0) {
                if (field_10656 != (SoundInstance*)0) {
                    field_10656->Pause();
                }
                field_10652 = 1;
                field_10664->Start();
                field_10644 = param_1;
            }
        }
    }

    // 0x100665930, 64 bytes, placed by class name
    // SoundManager::Reset()
    void SoundManager::Reset() {
        StopSong(this, false, 1.2);
        StopJingle(this);
        StopAllSoundsOnBuss(this, 0);
    }

    // 0x100665970, 16 bytes, placed by class name
    // SoundManager::Shutdown()
    void SoundManager::Shutdown() {
        field_10816 = 0;
    }

    // 0x100665980, 48 bytes, placed by class name
    // SoundManager::MuteMusic()
    void SoundManager::MuteMusic() {
        if (field_10656 != (SoundInstance*)0) {
            field_10648 = field_10640;
            StopSong(this, false, 0.0);
        }
    }

    // 0x1006659b0, 80 bytes, placed by class name
    // SoundManager::ResumeMusic()
    void SoundManager::ResumeMusic() {
        int iVar1;

        iVar1 = field_10648;
        if (0 < iVar1) {
            if ((&field_10672)->operator_cast_to_bool()) {
                std::function<void(int)>::operator()((function<void(int)>*)&field_10672, iVar1);
                field_10648 = -1;
            }
        }
    }

    // 0x100665a50, 96 bytes, placed by class name
    // SoundManager::SetVolume(SoundVolumeClass, unsigned char)
    void SoundManager::SetVolume(int param_2, undefined1 param_3) {
        undefined1* puVar1;

        puVar1 = (undefined1*)std::array<unsigned char, 6ul>::operator[]((array<unsigned char, 6ul>*)&field_11072,
                                                                         (long)param_2);
        *puVar1 = param_3;
        if (((long)param_2 & 4294967291U) == 0) {
            if (IsMusicAudible(this) == '\0') {
                MuteMusic(this);
            } else {
                ResumeMusic(this);
            }
        }
    }

    // 0x100665af0, 96 bytes, placed by class name
    // SoundManager::NotifyAudioDeviceArrival()
    void SoundManager::NotifyAudioDeviceArrival() {
        bool bVar1;
        Layout* this_00;
        shared_ptr* this_01;
        TcpConnectionMessageBase* this_02;
        type* in_RSI;

        bVar1 = (&field_24)->operator_cast_to_bool();
        if (bVar1) {
            this_00 =
                (Layout*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                    (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
            this_01 = (shared_ptr*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                this_02 = (TcpConnectionMessageBase*)shared_ptr<hal::audio::AudioRenderer>::operator->(
                    (shared_ptr<hal::audio::AudioRenderer>*)this_01);
                if (this_02->GetEndPosition() != 3) {
                    return;
                }
            }
            Restart(this);
        }
    }

    // 0x100665b70, 112 bytes, placed by class name
    // SoundManager::GetNumberOfLoadingSoundResources() const
    int SoundManager::GetNumberOfLoadingSoundResources() {
        bool bVar1;
        shared_ptr* this_00;
        shared_ptr* psVar2;
        int iVar3;

        this_00 = (shared_ptr*)(&field_10584)->HeapBeginPtr();
        psVar2 = (shared_ptr*)(&field_10584)->end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                iVar3 = iVar3 + (uint)bVar1;
                this_00 = this_00 + 1;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x100665be0, 320 bytes, placed by class name
    // SoundManager::UpdateDebugData()
    void SoundManager::UpdateDebugData() {
        undefined1* puVar1;
        char cVar2;
        undefined4 uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        SoundInstance* this_00;
        AudioAPI* this_01;
        FastPool_iterator<audio::SoundInstance, int> local_50[16];
        FastPool_iterator local_40[20];
        float local_2c;

        if (hal::audio::AudioRenderer::m_debugShowAudio != '\0') {
            new (this) oldscape::dash3d::ModelLit::AABB();
            puVar1 = &field_40;
            uVar3 = puVar1->GetValue();
            field_0 = uVar3;
            local_50._0_12_ = puVar1->begin();
            local_40._0_12_ = puVar1->end();
            cVar2 = FastPool_iterator<audio::SoundInstance, int>::operator!=(local_50, local_40);
            if (cVar2 != '\0') {
                do {
                    this_00 = (SoundInstance*)FastPool_iterator<audio::SoundInstance, int>::operator*(local_50);
                    cVar2 = this_00->IsPlaying();
                    if (cVar2 != '\0') {
                        field_8 = field_8 + 1;
                    }
                    cVar2 = this_00->IsOwnedBy(this);
                    if (cVar2 == '\0') {
                        field_4 = field_4 + 1;
                    }
                    FastPool_iterator<audio::SoundInstance, int>::operator++(local_50);
                    cVar2 = FastPool_iterator<audio::SoundInstance, int>::operator!=(local_50, local_40);
                } while (cVar2 != '\0');
            }
            this_01 =
                (AudioAPI*)std::unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>::operator->(
                    (unique_ptr<hal::audio::AudioAPI, std::default_delete<hal::audio::AudioAPI>>*)&field_24);
            uVar3 = this_01->ActiveDecoderCount();
            field_12 = uVar3;
            uVar3 = GetNumberOfLoadingSoundResources(this);
            field_16 = uVar3;
            puVar1 = field_72;
            uVar4 = puVar1->GetX();
            local_2c = (float)uVar4;
            iVar5 = puVar1->GetX();
            iVar6 = puVar1->GetZ();
            field_20 = (int)(long)(((float)(uint)(iVar5 - iVar6) * 100.0) / local_2c);
        }
    }

} // namespace jag::game

// 0x1006653b0, 16 bytes, placed by neighbouring functions
// atan2(float, float)
void atan2(float param_1, float param_2) {
    _atan2f();
}

// 0x1006653c0, 64 bytes, placed by neighbouring functions
// sqrt(float)
undefined8 sqrt(float param_1) {
    uint in_XMM0_Db;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined1 in_XMM1[16];
    undefined1 auVar1[16];
    float fVar2;

    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = param_1;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar1 = rsqrtss(in_XMM1, auVar1);
    fVar2 = param_1 * auVar1._0_4_;
    return CONCAT44(~(in_XMM0_Db & 2147483647) & in_XMM0_Db,
                    ~-(uint)(ABS(param_1) < 1.1754944e-38) & (uint)((fVar2 * auVar1._0_4_ + -3.0) * fVar2 * -0.5));
}
