// libs/game/runetek5/assetbuilder/jobs/buildsinglelocation/BuildSingleLocationData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag {
    // 0x100634600, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildSingleLocationWorker* placement_new<game::BuildSingleLocationWorker>(void*)
    BuildSingleLocationWorker* placement_new<game::BuildSingleLocationWorker>(void* param_1) {
        game::BuildSingleLocationWorker::BuildSingleLocationWorker(param_1);
        return param_1;
    }

    // 0x100634620, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationWorker>* placement_new<BucketRefCounter<game::BuildSingleLocationWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>, game::BuildSingleLocationWorker>*&, game::BuildSingleLocationWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>, game::BuildSingleLocationWorker>*&, game::BuildSingleLocationWorker*&)
    BucketRefCounter* jag::placement_new<BucketRefCounter<game::BuildSingleLocationWorker>,
                                         managed_ptr_counter_and_data<BucketRefCounter<game::BuildSingleLocationWorker>,
                                                                      game::BuildSingleLocationWorker>*&,
                                         game::BuildSingleLocationWorker*&>(void* param_1,
                                                                            managed_ptr_counter_and_data** param_2,
                                                                            BuildSingleLocationWorker** param_3) {
        BucketRefCounter<game::BuildSingleLocationWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100634640, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationWorker>::BucketRefCounter(void*, game::BuildSingleLocationWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100634650, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationWorker>::BucketRefCounter(void*, game::BuildSingleLocationWorker*, unsigned int)
    void BucketRefCounter<game::BuildSingleLocationWorker>::BucketRefCounter(void* param_1,
                                                                             BuildSingleLocationWorker* param_2,
                                                                             uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7130 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildSingleLocationWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1006346b0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildSingleLocationWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildSingleLocationWorker>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100634920, 64 bytes, inline, placed by debug map only (low confidence)
    // game::BuildSingleLocationResultData* placement_new<game::BuildSingleLocationResultData>(void*)
    BuildSingleLocationResultData* placement_new<game::BuildSingleLocationResultData>(void* param_1) {
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        game::BuildSingleLocationResultData::BuildSingleLocationResultData(param_1);
        return param_1;
    }

    // 0x100634960, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >* placement_new<MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >, MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData*&, game::BuildSingleLocationResultData*>(void*, MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData*&, game::BuildSingleLocationResultData*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                                MakeSharedPool<game::BuildSingleLocationResultData, 160>>,
                       MakeSharedPool<game::BuildSingleLocationResultData, 160>::RefCounterAndData*&,
                       game::BuildSingleLocationResultData*>(void* param_1, RefCounterAndData** param_2,
                                                             BuildSingleLocationResultData** param_3) {
        MakeSharedPoolRefCounter<
            game::BuildSingleLocationResultData,
            MakeSharedPool<game::BuildSingleLocationResultData, 160>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                *param_3);
        return param_1;
    }

    // 0x100635b90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >::MakeSharedPoolRefCounter(void*, game::BuildSingleLocationResultData*): jumps straight to the base-object constructor

    // 0x100635ba0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >::MakeSharedPoolRefCounter(void*, game::BuildSingleLocationResultData*)
    void jag::MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                       MakeSharedPool<game::BuildSingleLocationResultData, 160>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                     MakeSharedPool<game::BuildSingleLocationResultData, 160>>* this,
            void* param_1, BuildSingleLocationResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ad0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildSingleLocationResultData**)(this + 24) = param_2;
    }

    // 0x100635be0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >::DeleteData()
    /* BucketRefCounter<game::BuildFunctionRequestData>::DeleteData() */

    void BucketRefCounter<game::BuildFunctionRequestData>::DeleteData() {
        if (*(LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>**)(this + 24) !=
            (LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>*)0) {
            (*(LRUHashCacheWrapper<oldscape::configdecoder::VarBitType, unsigned long long>**)(this + 24))
                ->~LRUHashCacheWrapper();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100635c10, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildSingleLocationResultData, MakeSharedPool<game::BuildSingleLocationResultData, 160> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                       MakeSharedPool<game::BuildSingleLocationResultData, 160>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildSingleLocationResultData,
                                            MakeSharedPool<game::BuildSingleLocationResultData, 160>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildSingleLocationResultData, 160>::deallocate(pvVar1);
    }

    // 0x100636110, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainRequestData* placement_new<game::BuildTerrainRequestData>(void*)
    BuildTerrainRequestData* placement_new<game::BuildTerrainRequestData>(void* param_1) {
        game::BuildTerrainRequestData::BuildTerrainRequestData(param_1);
        return param_1;
    }

    // 0x100636130, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainRequestData>* placement_new<BucketRefCounter<game::BuildTerrainRequestData>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>, game::BuildTerrainRequestData>*&, game::BuildTerrainRequestData*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>, game::BuildTerrainRequestData>*&, game::BuildTerrainRequestData*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildTerrainRequestData>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>, game::BuildTerrainRequestData>*&,
        game::BuildTerrainRequestData*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                         BuildTerrainRequestData** param_3) {
        BucketRefCounter<game::BuildTerrainRequestData>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100636150, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainRequestData>::BucketRefCounter(void*, game::BuildTerrainRequestData*, unsigned int): jumps straight to the base-object constructor

    // 0x100636160, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainRequestData>::BucketRefCounter(void*, game::BuildTerrainRequestData*, unsigned int)
    void BucketRefCounter<game::BuildTerrainRequestData>::BucketRefCounter(void* param_1,
                                                                           BuildTerrainRequestData* param_2,
                                                                           uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7110 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainRequestData**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1006361c0, 48 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainRequestData>::DeleteData()
    void BucketRefCounter<game::BuildTerrainRequestData>::DeleteData() {
        if (*(BuildTerrainRequestData**)(this + 24) != (BuildTerrainRequestData*)0) {
            (*(BuildTerrainRequestData**)(this + 24))->~BuildTerrainRequestData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006361f0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainRequestData>::DeleteSelf()
    void BucketRefCounter<game::BuildTerrainRequestData>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x100636330, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainWorker* placement_new<game::BuildTerrainWorker>(void*)
    BuildTerrainWorker* placement_new<game::BuildTerrainWorker>(void* param_1) {
        game::BuildTerrainWorker::BuildTerrainWorker(param_1);
        return param_1;
    }

    // 0x100636350, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainWorker>* placement_new<BucketRefCounter<game::BuildTerrainWorker>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&, game::BuildTerrainWorker*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&, game::BuildTerrainWorker*&)
    BucketRefCounter* jag::placement_new<
        BucketRefCounter<game::BuildTerrainWorker>,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&,
        game::BuildTerrainWorker*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                    BuildTerrainWorker** param_3) {
        BucketRefCounter<game::BuildTerrainWorker>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100636370, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainWorker>::BucketRefCounter(void*, game::BuildTerrainWorker*, unsigned int): jumps straight to the base-object constructor

    // 0x100636380, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainWorker>::BucketRefCounter(void*, game::BuildTerrainWorker*, unsigned int)
    void BucketRefCounter<game::BuildTerrainWorker>::BucketRefCounter(void* param_1, BuildTerrainWorker* param_2,
                                                                      uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70e8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainWorker**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1006363e0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainWorker>::DeleteSelf()
    void BucketRefCounter<game::BuildTerrainWorker>::DeleteSelf() {
        void* pvVar1;

        if (*(int*)(this + 40) != 4) {
            if (this_thread::GetThreadID() != *(long*)(this + 32)) {
                /* WARNING: Subroutine does not return */
                LogAssert("this_thread::GetThreadID() == m_threadID",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/managed_ptr/"
                          "make_shared.h",
                          237, (char*)0);
            }
        }
        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)(this);
        BucketManager::DeAllocate(pvVar1);
    }

    // 0x1006376a0, 64 bytes, inline, placed by debug map only (low confidence)
    // eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>* placement_new<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>(void*)
    map* jag::placement_new<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>(
        void* param_1) {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map(param_1);
        return param_1;
    }

    // 0x1006376e0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >* placement_new<ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >, int, eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*&>(void*, int&&, eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>, int,
        eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*&>(void* param_1,
                                                                                             int* param_2,
                                                                                             map** param_3) {
        ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>,
                                      eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100637700, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x100637710, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*)
    void jag::ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::
        ref_counter_shared(
            ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>* this,
            ulong param_1, map* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71c8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(map**)(this + 24) = param_2;
    }

    // 0x100637750, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >::DeleteData()
    void jag::ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::
        DeleteData(ref_counter_shared<
                   eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~map();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100637fe0, 64 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainResultData* placement_new<game::BuildTerrainResultData>(void*)
    BuildTerrainResultData* placement_new<game::BuildTerrainResultData>(void* param_1) {
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        game::BuildTerrainResultData::BuildTerrainResultData(param_1);
        return param_1;
    }

    // 0x100638020, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >* placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >, MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData*&, game::BuildTerrainResultData*>(void*, MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData*&, game::BuildTerrainResultData*&&)
    MakeSharedPoolRefCounter* jag::placement_new<
        MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>,
        MakeSharedPool<game::BuildTerrainResultData, 16>::RefCounterAndData*&, game::BuildTerrainResultData*>(
        void* param_1, RefCounterAndData** param_2, BuildTerrainResultData** param_3) {
        MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                 MakeSharedPool<game::BuildTerrainResultData, 16>>::MakeSharedPoolRefCounter(param_1,
                                                                                                             *param_2,
                                                                                                             *param_3);
        return param_1;
    }

    // 0x100639330, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultData*): jumps straight to the base-object constructor

    // 0x100639340, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultData*)
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                                          MakeSharedPool<game::BuildTerrainResultData, 16>>* this,
                                 void* param_1, BuildTerrainResultData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a98 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainResultData**)(this + 24) = param_2;
    }

    // 0x100639380, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>::
        DeleteData(MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                            MakeSharedPool<game::BuildTerrainResultData, 16>>* this) {
        if (*(BuildTerrainResultData**)(this + 24) != (BuildTerrainResultData*)0) {
            (*(BuildTerrainResultData**)(this + 24))->~BuildTerrainResultData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006393b0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultData, MakeSharedPool<game::BuildTerrainResultData, 16>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildTerrainResultData,
                                            MakeSharedPool<game::BuildTerrainResultData, 16>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildTerrainResultData, 16>::deallocate(pvVar1);
    }

    // 0x100639730, 48 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainResultLevelData* placement_new<game::BuildTerrainResultLevelData>(void*)
    BuildTerrainResultLevelData* placement_new<game::BuildTerrainResultLevelData>(void* param_1) {
        ___bzero(param_1, 12672);
        game::BuildTerrainResultLevelData::BuildTerrainResultLevelData(param_1);
        return param_1;
    }

    // 0x100639760, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >* placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >, MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData*&, game::BuildTerrainResultLevelData*>(void*, MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData*&, game::BuildTerrainResultLevelData*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                                MakeSharedPool<game::BuildTerrainResultLevelData, 16>>,
                       MakeSharedPool<game::BuildTerrainResultLevelData, 16>::RefCounterAndData*&,
                       game::BuildTerrainResultLevelData*>(void* param_1, RefCounterAndData** param_2,
                                                           BuildTerrainResultLevelData** param_3) {
        MakeSharedPoolRefCounter<
            game::BuildTerrainResultLevelData,
            MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x10063aa90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultLevelData*): jumps straight to the base-object constructor

    // 0x10063aaa0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultLevelData*)
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                       MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                                          MakeSharedPool<game::BuildTerrainResultLevelData, 16>>* this,
                                 void* param_1, BuildTerrainResultLevelData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ac0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainResultLevelData**)(this + 24) = param_2;
    }

    // 0x10063aae0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                       MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::
        DeleteData(MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                            MakeSharedPool<game::BuildTerrainResultLevelData, 16>>* this) {
        if (*(BuildTerrainResultLevelData**)(this + 24) != (BuildTerrainResultLevelData*)0) {
            (*(BuildTerrainResultLevelData**)(this + 24))->~BuildTerrainResultLevelData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10063ab10, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData, MakeSharedPool<game::BuildTerrainResultLevelData, 16> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                       MakeSharedPool<game::BuildTerrainResultLevelData, 16>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildTerrainResultLevelData,
                                            MakeSharedPool<game::BuildTerrainResultLevelData, 16>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildTerrainResultLevelData, 16>::deallocate(pvVar1);
    }

    // 0x10063afe0, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>(void*)
    vector*
    jag::placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>(void* param_1) {
        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::vector(param_1);
        return param_1;
    }

    // 0x10063b000, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >* placement_new<ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >, int, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*&>(void*, int&&, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, int,
        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                           vector** param_3) {
        ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                         eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10063b090, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10063b0a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)
    void jag::ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
        ref_counter_shared(
            ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>* this,
            ulong param_1, vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71d8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector**)(this + 24) = param_2;
    }

    // 0x10063b0e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >::DeleteData()
    void jag::ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
        DeleteData(
            ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10063bfb0, 64 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainResultWaterData* placement_new<game::BuildTerrainResultWaterData>(void*)
    BuildTerrainResultWaterData* placement_new<game::BuildTerrainResultWaterData>(void* param_1) {
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        game::BuildTerrainResultWaterData::BuildTerrainResultWaterData(param_1);
        return param_1;
    }

    // 0x10063bff0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >* placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >, MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData*&, game::BuildTerrainResultWaterData*>(void*, MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData*&, game::BuildTerrainResultWaterData*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                                MakeSharedPool<game::BuildTerrainResultWaterData, 32>>,
                       MakeSharedPool<game::BuildTerrainResultWaterData, 32>::RefCounterAndData*&,
                       game::BuildTerrainResultWaterData*>(void* param_1, RefCounterAndData** param_2,
                                                           BuildTerrainResultWaterData** param_3) {
        MakeSharedPoolRefCounter<
            game::BuildTerrainResultWaterData,
            MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x10063d260, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultWaterData*): jumps straight to the base-object constructor

    // 0x10063d270, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >::MakeSharedPoolRefCounter(void*, game::BuildTerrainResultWaterData*)
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                       MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::
        MakeSharedPoolRefCounter(MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                                          MakeSharedPool<game::BuildTerrainResultWaterData, 32>>* this,
                                 void* param_1, BuildTerrainResultWaterData* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7ac8 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainResultWaterData**)(this + 24) = param_2;
    }

    // 0x10063d2b0, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >::DeleteData()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                       MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::
        DeleteData(MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                            MakeSharedPool<game::BuildTerrainResultWaterData, 32>>* this) {
        if (*(BuildTerrainResultWaterData**)(this + 24) != (BuildTerrainResultWaterData*)0) {
            (*(BuildTerrainResultWaterData**)(this + 24))->~BuildTerrainResultWaterData();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10063d2e0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData, MakeSharedPool<game::BuildTerrainResultWaterData, 32> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                       MakeSharedPool<game::BuildTerrainResultWaterData, 32>>::
        DeleteSelf(MakeSharedPoolRefCounter<game::BuildTerrainResultWaterData,
                                            MakeSharedPool<game::BuildTerrainResultWaterData, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuildTerrainResultWaterData, 32>::deallocate(pvVar1);
    }

    // 0x10063e640, 48 bytes, inline, placed by debug map only (low confidence)
    // game::BuiltTerrainLevel* placement_new<game::BuiltTerrainLevel>(void*)
    BuiltTerrainLevel* placement_new<game::BuiltTerrainLevel>(void* param_1) {
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        game::BuiltTerrainLevel::BuiltTerrainLevel(param_1);
        return param_1;
    }

    // 0x10063e670, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >* placement_new<MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >, MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData*&, game::BuiltTerrainLevel*>(void*, MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData*&, game::BuiltTerrainLevel*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>,
                       MakeSharedPool<game::BuiltTerrainLevel, 64>::RefCounterAndData*&, game::BuiltTerrainLevel*>(
        void* param_1, RefCounterAndData** param_2, BuiltTerrainLevel** param_3) {
        MakeSharedPoolRefCounter<game::BuiltTerrainLevel,
                                 MakeSharedPool<game::BuiltTerrainLevel, 64>>::MakeSharedPoolRefCounter(param_1,
                                                                                                        *param_2,
                                                                                                        *param_3);
        return param_1;
    }

    // 0x10063f8c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >::MakeSharedPoolRefCounter(void*, game::BuiltTerrainLevel*): jumps straight to the base-object constructor

    // 0x10063f8d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >::MakeSharedPoolRefCounter(void*, game::BuiltTerrainLevel*)
    void jag::MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>* this,
            void* param_1, BuiltTerrainLevel* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7a60 + 16;
        *(void**)(this + 16) = param_1;
        *(BuiltTerrainLevel**)(this + 24) = param_2;
    }

    // 0x10063f910, 48 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >::DeleteData()
    void
    jag::MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::DeleteData(
        MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>* this) {
        if (*(BuiltTerrainLevel**)(this + 24) != (BuiltTerrainLevel*)0) {
            (*(BuiltTerrainLevel**)(this + 24))->~BuiltTerrainLevel();
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10063f940, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64> >::DeleteSelf()
    void
    jag::MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>::DeleteSelf(
        MakeSharedPoolRefCounter<game::BuiltTerrainLevel, MakeSharedPool<game::BuiltTerrainLevel, 64>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<game::BuiltTerrainLevel, 64>::deallocate(pvVar1);
    }

    // 0x10063fbd0, 32 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>* placement_new<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>(void*)
    vector* jag::placement_new<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>(
        void* param_1) {
        eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::vector(param_1);
        return param_1;
    }

    // 0x10063fbf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >* placement_new<ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >, int, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*&>(void*, int&&, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*&)
    ref_counter_shared* jag::placement_new<
        ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>, int,
        eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*&>(void* param_1,
                                                                                                 int* param_2,
                                                                                                 vector** param_3) {
        ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                         eastl::allocator>>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10063fc80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10063fc90, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
    void
    jag::ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>::
        ref_counter_shared(ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                                            eastl::allocator>>* this,
                           ulong param_1, vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71d0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector**)(this + 24) = param_2;
    }

    // 0x10063fcd0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> >::DeleteData()
    void
    jag::ref_counter_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>::
        DeleteData(ref_counter_shared<
                   eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006401e0, 64 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(void*, int&&)
    vector* jag::placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(
        void* param_1, int* param_2) {
        int iVar1;
        allocator local_28[8];

        iVar1 = *param_2;
        eastl::allocator::allocator(local_28, "EASTL vector");
        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::vector(param_1, (long)iVar1,
                                                                                                local_28);
        return param_1;
    }

    // 0x100640970, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LookatPoint* placement_new<game::LookatPoint>(void*)
    LookatPoint* placement_new<game::LookatPoint>(void* param_1) {
        game::LookatPoint::LookatPoint(param_1);
        return param_1;
    }

    // 0x100640990, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatPoint>* placement_new<ref_counter_shared<game::LookatPoint>, int, game::LookatPoint*&>(void*, int&&, game::LookatPoint*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::LookatPoint>, int, game::LookatPoint*&>(void* param_1, int* param_2,
                                                                                   LookatPoint** param_3) {
        ref_counter_shared<game::LookatPoint>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100640a70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatPoint>::ref_counter_shared(unsigned long, game::LookatPoint*): jumps straight to the base-object constructor

    // 0x100640a80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatPoint>::ref_counter_shared(unsigned long, game::LookatPoint*)
    void ref_counter_shared<game::LookatPoint>::ref_counter_shared(ulong param_1, LookatPoint* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee72f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LookatPoint**)(this + 24) = param_2;
    }

    // 0x100640b40, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LookatEntity* placement_new<game::LookatEntity>(void*)
    LookatEntity* placement_new<game::LookatEntity>(void* param_1) {
        game::LookatEntity::LookatEntity(param_1);
        return param_1;
    }

    // 0x100640b60, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatEntity>* placement_new<ref_counter_shared<game::LookatEntity>, int, game::LookatEntity*&>(void*, int&&, game::LookatEntity*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::LookatEntity>, int, game::LookatEntity*&>(void* param_1, int* param_2,
                                                                                     LookatEntity** param_3) {
        ref_counter_shared<game::LookatEntity>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100640c40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatEntity>::ref_counter_shared(unsigned long, game::LookatEntity*): jumps straight to the base-object constructor

    // 0x100640c50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatEntity>::ref_counter_shared(unsigned long, game::LookatEntity*)
    void ref_counter_shared<game::LookatEntity>::ref_counter_shared(ulong param_1, LookatEntity* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7300 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LookatEntity**)(this + 24) = param_2;
    }

    // 0x100640c90, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatEntity>::DeleteData()
    void ref_counter_shared<game::LookatEntity>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 184;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100640cf0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LookatSpline* placement_new<game::LookatSpline, game::LookatMode&>(void*, game::LookatMode&)
    LookatSpline* placement_new<game::LookatSpline, game::LookatMode&>(void* param_1, LookatMode* param_2) {
        game::LookatSpline::LookatSpline(param_1, *(undefined4*)param_2);
        return param_1;
    }

    // 0x100640d10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSpline>* placement_new<ref_counter_shared<game::LookatSpline>, int, game::LookatSpline*&>(void*, int&&, game::LookatSpline*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::LookatSpline>, int, game::LookatSpline*&>(void* param_1, int* param_2,
                                                                                     LookatSpline** param_3) {
        ref_counter_shared<game::LookatSpline>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100640d30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSpline>::ref_counter_shared(unsigned long, game::LookatSpline*): jumps straight to the base-object constructor

    // 0x100640d40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSpline>::ref_counter_shared(unsigned long, game::LookatSpline*)
    void ref_counter_shared<game::LookatSpline>::ref_counter_shared(ulong param_1, LookatSpline* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7308 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LookatSpline**)(this + 24) = param_2;
    }

    // 0x100640d80, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSpline>::DeleteData()
    /* ref_counter_shared<game::PositionSpline>::DeleteData() */

    void ref_counter_shared<game::PositionSpline>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 312;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100640de0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LookatOrientation* placement_new<game::LookatOrientation>(void*)
    LookatOrientation* placement_new<game::LookatOrientation>(void* param_1) {
        game::LookatOrientation::LookatOrientation(param_1);
        return param_1;
    }

    // 0x100640e00, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatOrientation>* placement_new<ref_counter_shared<game::LookatOrientation>, int, game::LookatOrientation*&>(void*, int&&, game::LookatOrientation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::LookatOrientation>, int, game::LookatOrientation*&>(
        void* param_1, int* param_2, LookatOrientation** param_3) {
        ref_counter_shared<game::LookatOrientation>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100640ed0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatOrientation>::ref_counter_shared(unsigned long, game::LookatOrientation*): jumps straight to the base-object constructor

    // 0x100640ee0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatOrientation>::ref_counter_shared(unsigned long, game::LookatOrientation*)
    void ref_counter_shared<game::LookatOrientation>::ref_counter_shared(ulong param_1, LookatOrientation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7348 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LookatOrientation**)(this + 24) = param_2;
    }

    // 0x100640f20, 32 bytes, inline, placed by debug map only (low confidence)
    // game::LookatSplineMatchPosition* placement_new<game::LookatSplineMatchPosition>(void*)
    LookatSplineMatchPosition* placement_new<game::LookatSplineMatchPosition>(void* param_1) {
        game::LookatSplineMatchPosition::LookatSplineMatchPosition(param_1);
        return param_1;
    }

    // 0x100640f40, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSplineMatchPosition>* placement_new<ref_counter_shared<game::LookatSplineMatchPosition>, int, game::LookatSplineMatchPosition*&>(void*, int&&, game::LookatSplineMatchPosition*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::LookatSplineMatchPosition>, int, game::LookatSplineMatchPosition*&>(
        void* param_1, int* param_2, LookatSplineMatchPosition** param_3) {
        ref_counter_shared<game::LookatSplineMatchPosition>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100640fe0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSplineMatchPosition>::ref_counter_shared(unsigned long, game::LookatSplineMatchPosition*): jumps straight to the base-object constructor

    // 0x100640ff0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::LookatSplineMatchPosition>::ref_counter_shared(unsigned long, game::LookatSplineMatchPosition*)
    void ref_counter_shared<game::LookatSplineMatchPosition>::ref_counter_shared(ulong param_1,
                                                                                 LookatSplineMatchPosition* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7370 + 16;
        *(ulong*)(this + 16) = param_1;
        *(LookatSplineMatchPosition**)(this + 24) = param_2;
    }

    // 0x100641030, 32 bytes, inline, placed by debug map only (low confidence)
    // game::PositionPoint* placement_new<game::PositionPoint>(void*)
    PositionPoint* placement_new<game::PositionPoint>(void* param_1) {
        game::PositionPoint::PositionPoint(param_1);
        return param_1;
    }

    // 0x100641050, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionPoint>* placement_new<ref_counter_shared<game::PositionPoint>, int, game::PositionPoint*&>(void*, int&&, game::PositionPoint*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::PositionPoint>, int, game::PositionPoint*&>(void* param_1, int* param_2,
                                                                                       PositionPoint** param_3) {
        ref_counter_shared<game::PositionPoint>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::game {
    class BuildSingleLocationRequestData {
    public:
        ~BuildSingleLocationRequestData();
        BuildSingleLocationRequestData();
        BuildSingleLocationRequestData(shared_ptr<LocType> const&, shared_ptr<LocType> const&,
                                       shared_ptr<graphics::Model> const&, Rotation90, int,
                                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&,
                                       Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&&);

        // data members, from how the methods use this: 120 bytes
        char _unknown_0[48];
        undefined1 field_48; // offset 48
        char _unknown_49[3];
        undefined4 field_52; // offset 52
        char _unknown_56[48];
        undefined8 field_104; // offset 104
        undefined8 field_112; // offset 112
    };

    class BuildSingleLocationResultData {
    public:
        ~BuildSingleLocationResultData();
        BuildSingleLocationResultData();

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[16];
        undefined1 field_16; // offset 16
        char _unknown_17[23];
    };

    class BuildTerrainResultData {
    public:
        ~BuildTerrainResultData();
        BuildTerrainResultData();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[72];
    };

    class BuildTerrainResultLevelData {
    public:
        ~BuildTerrainResultLevelData();
        BuildTerrainResultLevelData();

        // data members, from how the methods use this: 12648 bytes
        char _unknown_0[12648];
    };

    class BuildTerrainResultWaterData {
    public:
        ~BuildTerrainResultWaterData();
        BuildTerrainResultWaterData();

        // data members, from how the methods use this: 100 bytes
        char _unknown_0[64];
        AABB field_64; // offset 64
    };

    class BuiltTerrainLevel {
    public:
        ~BuiltTerrainLevel();
        BuiltTerrainLevel();

        // data members, from how the methods use this: 72 bytes
        char _unknown_0[72];
    };

    class DecodedTerrainTile {
    public:
        DecodedTerrainTile();

        // data members, from how the methods use this: 40 bytes
        undefined8 field_0; // offset 0
        undefined2 field_8; // offset 8
        char _unknown_10[2];
        undefined4 field_12; // offset 12
        undefined1 field_16; // offset 16
        char _unknown_17[3];
        undefined8 field_20; // offset 20
        char _unknown_28[4];
        undefined8 field_32; // offset 32
    };

    // 0x100634510, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::~BuildSingleLocationRequestData(): jumps straight to the base-object destructor

    // 0x100634520, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildSingleLocationRequestData::~BuildSingleLocationRequestData()
    void BuildSingleLocationRequestData::~BuildSingleLocationRequestData() {
        (&field_80)->~Array();
        (&field_56)->~Array();
        (&field_32)->~shared_ptr();
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

    // 0x100634ff0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildSingleLocationResultData::BuildSingleLocationResultData(): jumps straight to the base-object constructor

    // 0x100635000, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildSingleLocationResultData::BuildSingleLocationResultData()
    void BuildSingleLocationResultData::BuildSingleLocationResultData() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<BuildSingleLocationResultData, 160>();
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        field_16 = 0;
        new (&field_32) math::Matrix44T<float>();
    }

    // 0x100638500, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultData::~BuildTerrainResultData(): jumps straight to the base-object destructor

    // 0x100638510, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultData::~BuildTerrainResultData()
    void BuildTerrainResultData::~BuildTerrainResultData() {
        (&field_64)->~vector();
        ~array();
    }

    // 0x100638750, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultData::BuildTerrainResultData(): jumps straight to the base-object constructor

    // 0x100638760, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultData::BuildTerrainResultData()
    void BuildTerrainResultData::BuildTerrainResultData() {
        new (this) MakeSharedPool<BuildTerrainResultData, 16>();
        std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::array();
        new (&field_64) eastl::vector<shared_ptr<BuildTerrainResultWaterData>, eastl::allocator>();
    }

    // 0x100639c30, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevelData::~BuildTerrainResultLevelData(): jumps straight to the base-object destructor

    // 0x100639c40, 112 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevelData::~BuildTerrainResultLevelData()
    void BuildTerrainResultLevelData::~BuildTerrainResultLevelData() {
        (&field_12640)->~shared_ptr();
        (&field_12624)->~shared_ptr();
        (&field_168)->~fixed_hash_map();
        (&field_128)->~vector();
        (&field_96)->~vector();
        (&field_80)->~shared_ptr();
        (&field_64)->~shared_ptr();
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
    }

    // 0x100639e70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevelData::BuildTerrainResultLevelData(): jumps straight to the base-object constructor

    // 0x100639e80, 320 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultLevelData::BuildTerrainResultLevelData()
    void BuildTerrainResultLevelData::BuildTerrainResultLevelData() {
        _func_decltype_nullptr* in_RSI;
        hash* phVar1;
        hash local_40[8];
        equal_to local_38[8];

        new (this) MakeSharedPool<BuildTerrainResultLevelData, 16>();
        new (this) math::AABB();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_80, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_96) eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>();
        new (&field_128) eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>();
        phVar1 = local_40;
        new (&field_168, phVar1, local_38)
            eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                  eastl::equal_to<int>, false, eastl::allocator>();
        new (&field_12624, (_func_decltype_nullptr*)phVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_12640, (_func_decltype_nullptr*)phVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x10063c4d0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultWaterData::~BuildTerrainResultWaterData(): jumps straight to the base-object destructor

    // 0x10063c4e0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultWaterData::~BuildTerrainResultWaterData()
    void BuildTerrainResultWaterData::~BuildTerrainResultWaterData() {
        (&field_32)->~vector();
        ~vector();
    }

    // 0x10063c6d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultWaterData::BuildTerrainResultWaterData(): jumps straight to the base-object constructor

    // 0x10063c6e0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuildTerrainResultWaterData::BuildTerrainResultWaterData()
    void BuildTerrainResultWaterData::BuildTerrainResultWaterData() {
        new (this) MakeSharedPool<BuildTerrainResultWaterData, 32>();
        new (this) eastl::vector<unsigned short, eastl::allocator>();
        new (&field_32) eastl::vector<graphics::WaterPatchVertex, eastl::allocator>();
        new (field_64) math::AABB();
    }

    // 0x10063e0b0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // DecodedTerrainTile::DecodedTerrainTile(): jumps straight to the base-object constructor

    // 0x10063e0c0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // DecodedTerrainTile::DecodedTerrainTile()
    void DecodedTerrainTile::DecodedTerrainTile() {
        field_0 = 18446744069414584320;
        field_8 = 0;
        field_12 = 4294967295;
        field_16 = 0;
        field_20 = 18446744073709551615;
        field_32 = 0;
    }

    // 0x10063eb50, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // BuiltTerrainLevel::~BuiltTerrainLevel(): jumps straight to the base-object destructor

    // 0x10063eb60, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // BuiltTerrainLevel::~BuiltTerrainLevel()
    void BuiltTerrainLevel::~BuiltTerrainLevel() {
        (&field_64)->~shared_ptr();
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

    // 0x10063ed60, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BuiltTerrainLevel::BuiltTerrainLevel(): jumps straight to the base-object constructor

    // 0x10063ed70, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BuiltTerrainLevel::BuiltTerrainLevel()
    void BuiltTerrainLevel::BuiltTerrainLevel() {
        _func_decltype_nullptr* in_RSI;

        new (this) MakeSharedPool<BuiltTerrainLevel, 64>();
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100637010, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::__0, void>(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this, __0* param_1) {
        *(undefined8*)this = 0;
        *(long*)(this + 16) = param_1->field_0;
        *(code**)(this + 144) = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*, void*) #1
        }
        ::__invoke;
        *(code**)this = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*, render::RenderContext&) #1
        }
        ::RenderContext__;
        *(code**)(this + 152) = function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(
            game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
            lambda(void*) #1
        }
        ::__invoke;
    }

    // 0x100637050, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100637060, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0,
   void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        *(undefined8*)param_2 = *(undefined8*)param_1;
    }

    // 0x100637070, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100637080, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0,
   void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        game::BuildTerrainMain::LoadMaterials()::$_0::operator()(param_1, param_2);
    }

    // 0x100637690, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::graphics {
    // 0x100640680, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // GridGroup::GridGroup(): jumps straight to the base-object constructor

    // 0x100640690, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GridGroup::GridGroup()
    void GridGroup::GridGroup() {
        new (this) GridTile();
        new (&field_80) GridTile();
        new (&field_160) GridTile();
        new (&field_240) GridTile();
    }

} // namespace jag::graphics

// 0x10063e100, 64 bytes, placed by debug map only (low confidence)
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

namespace jag::math {
    // 0x100640960, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::QuaternionT()
    void QuaternionT<double>::QuaternionT() {
        SetToIdentity(this);
    }

} // namespace jag::math
