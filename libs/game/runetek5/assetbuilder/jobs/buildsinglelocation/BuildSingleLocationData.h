// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100634600
    game::BuildSingleLocationWorker* placement_new<game::BuildSingleLocationWorker>(void* arg1) {
        new (arg1) game::BuildSingleLocationWorker();
        return arg1;
    }

    // 0x100634620
    BucketRefCounter<game::BuildSingleLocationWorker>*
    placement_new<BucketRefCounter<game::BuildSingleLocationWorker>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>,
                                               game::BuildSingleLocationWorker>*&,
                  game::BuildSingleLocationWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>,
                                     game::BuildSingleLocationWorker>*& arg2,
        game::BuildSingleLocationWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildSingleLocationWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100634650
    BucketRefCounter<game::BuildSingleLocationWorker>::BucketRefCounter(
        void* arg1, game::BuildSingleLocationWorker* buildSingleLocationWorker, unsigned int arg3)
        : ref_counter_base() {}

    // 0x1006346b0
    void BucketRefCounter<game::BuildSingleLocationWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildSingleLocationWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildSingleLocationWorker> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100634920
    game::BuildSingleLocationResultData* placement_new<game::BuildSingleLocationResultData>(void* arg1) {
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) game::BuildSingleLocationResultData();
        return arg1;
    }

    // 0x100634960
    MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                             MakeSharedPool<game::BuildSingleLocationResultData, 160>>*
    placement_new<MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                           MakeSharedPool<game::BuildSingleLocationResultData, 160>>,
                  MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData*&,
                  game::BuildSingleLocationResultData*>(
        void* arg1, MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData*& arg2,
        game::BuildSingleLocationResultData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                            MakeSharedPool<game::BuildSingleLocationResultData, 160>>(arg2, arg3);
        return arg1;
    }

    // 0x100635ba0
    MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                             MakeSharedPool<game::BuildSingleLocationResultData, 160>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildSingleLocationResultData* buildSingleLocationResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ad0 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildSingleLocationResultData**)(this + 24) = buildSingleLocationResultData;
    }

    // 0x100635be0
    void MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                  MakeSharedPool<game::BuildSingleLocationResultData, 160>>::DeleteData() {
        if (this[3]._vptr != nullptr) {
            this[3]._vptr->~LRUHashCacheWrapper();
            this[3]._vptr = nullptr;
        }
    }

    // 0x100635c10
    void MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                  MakeSharedPool<game::BuildSingleLocationResultData, 160>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildSingleLocationResultData, 160>::deallocate(arg1);
    }

    // 0x100636110
    game::BuildTerrainRequestData* placement_new<game::BuildTerrainRequestData>(void* arg1) {
        new (arg1) game::BuildTerrainRequestData();
        return arg1;
    }

    // 0x100636130
    BucketRefCounter<game::BuildTerrainRequestData>* placement_new<
        BucketRefCounter<game::BuildTerrainRequestData>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>, game::BuildTerrainRequestData>*&,
        game::BuildTerrainRequestData*&>(void* arg1,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>,
                                                                      game::BuildTerrainRequestData>*& arg2,
                                         game::BuildTerrainRequestData*& arg3) {
        new (arg1) BucketRefCounter<game::BuildTerrainRequestData>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100636160
    BucketRefCounter<game::BuildTerrainRequestData>::BucketRefCounter(
        void* arg1, game::BuildTerrainRequestData* buildTerrainRequestData, unsigned int arg3)
        : ref_counter_base() {}

    // 0x1006361c0
    void BucketRefCounter<game::BuildTerrainRequestData>::DeleteData() {
        if ((BuildTerrainRequestData*)this[3]._vptr != nullptr) {
            this[3]._vptr->~BuildTerrainRequestData();
            this[3]._vptr = nullptr;
        }
    }

    // 0x1006361f0
    void BucketRefCounter<game::BuildTerrainRequestData>::DeleteSelf() {
        BucketRefCounter<game::BuildTerrainRequestData> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildTerrainRequestData> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x100636330
    game::BuildTerrainWorker* placement_new<game::BuildTerrainWorker>(void* arg1) {
        new (arg1) game::BuildTerrainWorker();
        return arg1;
    }

    // 0x100636350
    BucketRefCounter<game::BuildTerrainWorker>*
    placement_new<BucketRefCounter<game::BuildTerrainWorker>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&,
                  game::BuildTerrainWorker*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*& arg2,
        game::BuildTerrainWorker*& arg3) {
        new (arg1) BucketRefCounter<game::BuildTerrainWorker>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100636380
    BucketRefCounter<game::BuildTerrainWorker>::BucketRefCounter(void* arg1,
                                                                 game::BuildTerrainWorker* buildTerrainWorker,
                                                                 unsigned int arg3)
        : ref_counter_base() {}

    // 0x1006363e0
    void BucketRefCounter<game::BuildTerrainWorker>::DeleteSelf() {
        BucketRefCounter<game::BuildTerrainWorker> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildTerrainWorker> _vtbl*)this_thread::GetThreadID();
            if (pBVar1 != this[4]._vptr) {
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, nullptr);
            }
        }
        pBVar1 = this[2]._vptr;
        std::destroy_at(this);
        BucketManager::DeAllocate(pBVar1);
    }

    // 0x1006376a0
    eastl::map<int, graphics::TerrainTextureMeta>*
    placement_new<eastl::map<int, graphics::TerrainTextureMeta>>(void* arg1) {

        new (arg1) eastl::map(local_20);
        return arg1;
    }

    // 0x1006376e0
    ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>*
    placement_new<ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>, int,
                  eastl::map<int, graphics::TerrainTextureMeta>*&>(
        void* arg1, int&& arg2, eastl::map<int, graphics::TerrainTextureMeta>*& arg3) {
        new (arg1) ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100637710
    ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>::ref_counter_shared(
        unsigned long arg1, eastl::map<int, graphics::TerrainTextureMeta>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71c8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(map<int, graphics::TerrainTextureMeta>**)(this + 24) = arg2;
    }

    // 0x100637750
    void ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((map<int, graphics::TerrainTextureMeta>*)(*(long*)(this + 24) + lVar2))->~map();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x100637fe0
    game::BuildTerrainResultData* placement_new<game::BuildTerrainResultData>(void* arg1) {
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) game::BuildTerrainResultData();
        return arg1;
    }

    // 0x100638020
    MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>*
    placement_new<
        MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>,
        MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData*&, game::BuildTerrainResultData*>(
        void* arg1, MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData*& arg2,
        game::BuildTerrainResultData*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>(
                arg2, arg3);
        return arg1;
    }

    // 0x100639340
    MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildTerrainResultData* buildTerrainResultData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a98 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildTerrainResultData**)(this + 24) = buildTerrainResultData;
    }

    // 0x100639380
    void MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                  MakeSharedPool<game::BuildTerrainResultData, 16>>::DeleteData() {
        if (*(BuildTerrainResultData**)(this + 24) != nullptr) {
            (*(BuildTerrainResultData**)(this + 24))->~BuildTerrainResultData();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1006393b0
    void MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                  MakeSharedPool<game::BuildTerrainResultData, 16>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildTerrainResultData, 16>::deallocate(arg1);
    }

    // 0x100639730
    game::BuildTerrainResultLevelData* placement_new<game::BuildTerrainResultLevelData>(void* arg1) {
        ___bzero(arg1, 12672);
        new (arg1) game::BuildTerrainResultLevelData();
        return arg1;
    }

    // 0x100639760
    MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16>>*
    placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                           MakeSharedPool<game::BuildTerrainResultLevelData, 16>>,
                  MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData*&,
                  game::BuildTerrainResultLevelData*>(
        void* arg1, MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData*& arg2,
        game::BuildTerrainResultLevelData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                            MakeSharedPool<game::BuildTerrainResultLevelData, 16>>(arg2, arg3);
        return arg1;
    }

    // 0x10063aaa0
    MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildTerrainResultLevelData* buildTerrainResultLevelData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ac0 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildTerrainResultLevelData**)(this + 24) = buildTerrainResultLevelData;
    }

    // 0x10063aae0
    void MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                  MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::DeleteData() {
        if (*(BuildTerrainResultLevelData**)(this + 24) != nullptr) {
            (*(BuildTerrainResultLevelData**)(this + 24))->~BuildTerrainResultLevelData();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10063ab10
    void MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                  MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildTerrainResultLevelData, 16>::deallocate(arg1);
    }

    // 0x10063afe0
    eastl::vector<eastl::vector<unsigned char>>*
    placement_new<eastl::vector<eastl::vector<unsigned char>>>(void* arg1) {
        new (arg1) eastl::vector<eastl::vector<unsigned char>>();
        return arg1;
    }

    // 0x10063b000
    ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>*
    placement_new<ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>, int,
                  eastl::vector<eastl::vector<unsigned char>>*&>(void* arg1, int&& arg2,
                                                                 eastl::vector<eastl::vector<unsigned char>>*& arg3) {
        new (arg1) ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10063b0a0
    ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>::ref_counter_shared(
        unsigned long arg1, eastl::vector<eastl::vector<unsigned char>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71d8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector<eastl::vector<unsigned char>>**)(this + 24) = arg2;
    }

    // 0x10063b0e0
    void ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector<eastl::vector<unsigned char>>*)(*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10063bfb0
    game::BuildTerrainResultWaterData* placement_new<game::BuildTerrainResultWaterData>(void* arg1) {
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) game::BuildTerrainResultWaterData();
        return arg1;
    }

    // 0x10063bff0
    MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32>>*
    placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                           MakeSharedPool<game::BuildTerrainResultWaterData, 32>>,
                  MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData*&,
                  game::BuildTerrainResultWaterData*>(
        void* arg1, MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData*& arg2,
        game::BuildTerrainResultWaterData*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                            MakeSharedPool<game::BuildTerrainResultWaterData, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x10063d270
    MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuildTerrainResultWaterData* buildTerrainResultWaterData)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7ac8 + 16;
        *(void**)(this + 16) = arg1;
        *(BuildTerrainResultWaterData**)(this + 24) = buildTerrainResultWaterData;
    }

    // 0x10063d2b0
    void MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                  MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::DeleteData() {
        if (*(BuildTerrainResultWaterData**)(this + 24) != nullptr) {
            (*(BuildTerrainResultWaterData**)(this + 24))->~BuildTerrainResultWaterData();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10063d2e0
    void MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                  MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuildTerrainResultWaterData, 32>::deallocate(arg1);
    }

    // 0x10063e640
    game::BuiltTerrainLevel* placement_new<game::BuiltTerrainLevel>(void* arg1) {
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) game::BuiltTerrainLevel();
        return arg1;
    }

    // 0x10063e670
    MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>*
    placement_new<MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>,
                  MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData*&, game::BuiltTerrainLevel*>(
        void* arg1, MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData*& arg2,
        game::BuiltTerrainLevel*&& arg3) {
        new (arg1)
            MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>(arg2, arg3);
        return arg1;
    }

    // 0x10063f8d0
    MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::
        MakeSharedPoolRefCounter(void* arg1, game::BuiltTerrainLevel* builtTerrainLevel)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7a60 + 16;
        *(void**)(this + 16) = arg1;
        *(BuiltTerrainLevel**)(this + 24) = builtTerrainLevel;
    }

    // 0x10063f910
    void MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::DeleteData() {
        if (*(BuiltTerrainLevel**)(this + 24) != nullptr) {
            (*(BuiltTerrainLevel**)(this + 24))->~BuiltTerrainLevel();
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10063f940
    void MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<game::BuiltTerrainLevel, 64>::deallocate(arg1);
    }

    // 0x10063fbd0
    eastl::vector<eastl::vector<graphics::GridGroup>>*
    placement_new<eastl::vector<eastl::vector<graphics::GridGroup>>>(void* arg1) {
        new (arg1) eastl::vector<eastl::vector<graphics::GridGroup>>();
        return arg1;
    }

    // 0x10063fbf0
    ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>*
    placement_new<ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>, int,
                  eastl::vector<eastl::vector<graphics::GridGroup>>*&>(
        void* arg1, int&& arg2, eastl::vector<eastl::vector<graphics::GridGroup>>*& arg3) {
        new (arg1) ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10063fc90
    ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>::ref_counter_shared(
        unsigned long arg1, eastl::vector<eastl::vector<graphics::GridGroup>>* gridGroupss)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71d0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector<eastl::vector<graphics::GridGroup>>**)(this + 24) = gridGroupss;
    }

    // 0x10063fcd0
    void ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector<eastl::vector<graphics::GridGroup>>*)(*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x1006401e0
    eastl::vector<eastl::vector<unsigned char>>*
    placement_new<eastl::vector<eastl::vector<unsigned char>>, int>(void* arg1, int&& arg2) {

        new (arg1) eastl::vector<eastl::vector<unsigned char>>((long)(int)arg2, local_28);
        return arg1;
    }

    // 0x100640970
    game::LookatPoint* placement_new<game::LookatPoint>(void* arg1) {
        new (arg1) game::LookatPoint();
        return arg1;
    }

    // 0x100640990
    ref_counter_shared<game::LookatPoint>*
    placement_new<ref_counter_shared<game::LookatPoint>, int, game::LookatPoint*&>(void* arg1, int&& arg2,
                                                                                   game::LookatPoint*& arg3) {
        new (arg1) ref_counter_shared<game::LookatPoint>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100640a80
    ref_counter_shared<game::LookatPoint>::ref_counter_shared(unsigned long arg1, game::LookatPoint* lookatPoint)
        : ref_counter_base() {}

    // 0x100640b40
    game::LookatEntity* placement_new<game::LookatEntity>(void* arg1) {
        new (arg1) game::LookatEntity();
        return arg1;
    }

    // 0x100640b60
    ref_counter_shared<game::LookatEntity>*
    placement_new<ref_counter_shared<game::LookatEntity>, int, game::LookatEntity*&>(void* arg1, int&& arg2,
                                                                                     game::LookatEntity*& arg3) {
        new (arg1) ref_counter_shared<game::LookatEntity>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100640c50
    ref_counter_shared<game::LookatEntity>::ref_counter_shared(unsigned long arg1, game::LookatEntity* lookatEntity)
        : ref_counter_base() {}

    // 0x100640c90
    void ref_counter_shared<game::LookatEntity>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::LookatEntity> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::LookatEntity> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 184;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100640cf0
    game::LookatSpline* placement_new<game::LookatSpline, game::LookatMode&>(void* arg1, game::LookatMode& lookatMode) {
        new (arg1) game::LookatSpline(lookatMode);
        return arg1;
    }

    // 0x100640d10
    ref_counter_shared<game::LookatSpline>*
    placement_new<ref_counter_shared<game::LookatSpline>, int, game::LookatSpline*&>(void* arg1, int&& arg2,
                                                                                     game::LookatSpline*& arg3) {
        new (arg1) ref_counter_shared<game::LookatSpline>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100640d40
    ref_counter_shared<game::LookatSpline>::ref_counter_shared(unsigned long arg1, game::LookatSpline* lookatSpline)
        : ref_counter_base() {}

    // 0x100640d80
    void ref_counter_shared<game::LookatSpline>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::PositionSpline> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::PositionSpline> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 312;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100640de0
    game::LookatOrientation* placement_new<game::LookatOrientation>(void* arg1) {
        new (arg1) game::LookatOrientation();
        return arg1;
    }

    // 0x100640e00
    ref_counter_shared<game::LookatOrientation>*
    placement_new<ref_counter_shared<game::LookatOrientation>, int, game::LookatOrientation*&>(
        void* arg1, int&& arg2, game::LookatOrientation*& arg3) {
        new (arg1) ref_counter_shared<game::LookatOrientation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100640ee0
    ref_counter_shared<game::LookatOrientation>::ref_counter_shared(unsigned long arg1,
                                                                    game::LookatOrientation* lookatOrientation)
        : ref_counter_base() {}

    // 0x100640f20
    game::LookatSplineMatchPosition* placement_new<game::LookatSplineMatchPosition>(void* arg1) {
        new (arg1) game::LookatSplineMatchPosition();
        return arg1;
    }

    // 0x100640f40
    ref_counter_shared<game::LookatSplineMatchPosition>*
    placement_new<ref_counter_shared<game::LookatSplineMatchPosition>, int, game::LookatSplineMatchPosition*&>(
        void* arg1, int&& arg2, game::LookatSplineMatchPosition*& arg3) {
        new (arg1) ref_counter_shared<game::LookatSplineMatchPosition>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100640ff0
    ref_counter_shared<game::LookatSplineMatchPosition>::ref_counter_shared(
        unsigned long arg1, game::LookatSplineMatchPosition* lookatSplineMatchPosition)
        : ref_counter_base() {}

    // 0x100641030
    game::PositionPoint* placement_new<game::PositionPoint>(void* arg1) {
        new (arg1) game::PositionPoint();
        return arg1;
    }

    // 0x100641050
    ref_counter_shared<game::PositionPoint>*
    placement_new<ref_counter_shared<game::PositionPoint>, int, game::PositionPoint*&>(void* arg1, int&& arg2,
                                                                                       game::PositionPoint*& arg3) {
        new (arg1) ref_counter_shared<game::PositionPoint>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::game {
    class BuildSingleLocationRequestData {
    public:
        ~BuildSingleLocationRequestData();
        BuildSingleLocationRequestData();
        BuildSingleLocationRequestData(const shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
                                       const shared_ptr<graphics::Model>& model, Rotation90 rotation90, int arg5,
                                       Array<Array<int>>&& arg6, Array<Array<int>>&& arg7);

    private:
        uint8_t _unknown_0[48];
        char field_48;
        uint8_t _unknown_49[3];
        int field_52;
        uint8_t _unknown_56[48];
        uint64_t field_104;
        uint64_t field_112;
    };

    class BuildSingleLocationResultData {
    public:
        ~BuildSingleLocationResultData();
        BuildSingleLocationResultData();

    private:
        uint8_t _unknown_0[16];
        uint8_t field_16;
        uint8_t _unknown_17[23];
    };

    class BuildTerrainResultData {
    public:
        ~BuildTerrainResultData();
        BuildTerrainResultData();

        uint8_t _unknown_0[72];
    };

    class BuildTerrainResultLevelData {
    public:
        ~BuildTerrainResultLevelData();
        BuildTerrainResultLevelData();

        uint8_t _unknown_0[12648];
    };

    class BuildTerrainResultWaterData {
    public:
        ~BuildTerrainResultWaterData();
        BuildTerrainResultWaterData();

    private:
        uint8_t _unknown_0[64];
        AABB field_64;
    };

    class BuiltTerrainLevel {
    public:
        ~BuiltTerrainLevel();
        BuiltTerrainLevel();

        uint8_t _unknown_0[72];
    };

    class DecodedTerrainTile {
    public:
        DecodedTerrainTile();

    private:
        uint64_t field_0;
        uint16_t field_8;
        uint8_t _unknown_10[2];
        uint32_t field_12;
        uint8_t field_16;
        uint8_t _unknown_17[3];
        uint64_t field_20;
        uint8_t _unknown_28[4];
        uint64_t field_32;
    };

    // 0x100634520
    BuildSingleLocationRequestData::~BuildSingleLocationRequestData() {
        field_80.~Array();
        field_56.~Array();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

    // 0x100635000
    BuildSingleLocationResultData::BuildSingleLocationResultData()
        : MakeSharedPool<BuildSingleLocationResultData, 160>(), shared_ptr(), field_16(0) {}

    // 0x100638510
    BuildTerrainResultData::~BuildTerrainResultData() {
        field_64.~vector();
    }

    // 0x100638760
    BuildTerrainResultData::BuildTerrainResultData()
        : MakeSharedPool<BuildTerrainResultData, 16>(), std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>() {}

    // 0x100639c40
    BuildTerrainResultLevelData::~BuildTerrainResultLevelData() {
        field_12640.~shared_ptr();
        field_12624.~shared_ptr();
        field_168.~fixed_hash_map();
        field_128.~vector();
        field_96.~vector();
        field_80.~shared_ptr();
        field_64.~shared_ptr();
        field_48.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x100639e80
    BuildTerrainResultLevelData::BuildTerrainResultLevelData()
        : MakeSharedPool<BuildTerrainResultLevelData, 16>(), math::AABB() {
        hash<int> local_40;
        equal_to<int> local_38;

        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
        new (&field_80) shared_ptr();
        new (&field_96) eastl::vector<graphics::TerrainPatchVertex>();
        new (&field_128) eastl::vector<graphics::TerrainPatchVertexPos>();
        new (&field_168) eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                               eastl::equal_to<int>, false>(local_40, local_38);
        new (&field_12624) shared_ptr();
        new (&field_12640) shared_ptr();
    }

    // 0x10063c4e0
    BuildTerrainResultWaterData::~BuildTerrainResultWaterData() {
        field_32.~vector();
    }

    // 0x10063c6e0
    BuildTerrainResultWaterData::BuildTerrainResultWaterData()
        : MakeSharedPool<BuildTerrainResultWaterData, 32>(), eastl::vector<unsigned short>() {}

    // 0x10063e0c0
    DecodedTerrainTile::DecodedTerrainTile()
        : field_0(18446744069414584320), field_8(0), field_12(4294967295), field_16(0), field_20(18446744073709551615),
          field_32(0) {}

    // 0x10063eb60
    BuiltTerrainLevel::~BuiltTerrainLevel() {
        field_64.~shared_ptr();
        field_48.~shared_ptr();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

    // 0x10063ed70
    BuiltTerrainLevel::BuiltTerrainLevel() : MakeSharedPool<BuiltTerrainLevel, 64>(), shared_ptr() {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100637010
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&& arg1) {
        *(uint64_t*)this = 0;
        *(long*)(this + 16) = arg1.field_0;
        *(void (**)(...))(this + 144) = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(void (**)(...))this = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(void (**)(...))(this + 152) = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100637050
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* arg1, void* arg2) {
        operator()(this, arg1, arg2);
    }

    // 0x100637060
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* arg1, void* arg2) const {
        *(uint64_t*)arg1 = *(uint64_t*)this;
    }

    // 0x100637070
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::__invoke(void* arg1, render::RenderContext& renderContext) {
        operator()(this, arg1, renderContext);
    }

    // 0x100637080
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* arg1, render::RenderContext & renderContext) const {
        game::BuildTerrainMain::LoadMaterials()::$_0::operator()((__0*)this, arg1);
    }

    // 0x100637690
    void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

// 0x10063e100
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

namespace jag::graphics {
    // 0x100640690
    GridGroup::GridGroup() : GridTile() {}

} // namespace jag::graphics

namespace jag::math {
    // 0x100640960
    QuaternionT<double>::QuaternionT() {
        SetToIdentity(this);
    }

} // namespace jag::math
