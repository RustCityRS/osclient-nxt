// libs/game/runetek5/scene/entities/HitmarksAndHeadbars.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class HitmarksAndHeadbars {
    public:
        GetHitmarks();
        ~HitmarksAndHeadbars();
        HitmarksAndHeadbars(game::ConfigProvider const&);
        void AddHitmark(game::ConfigProvider const&, int, int, int, int, unsigned int, unsigned int);
        void AddQueuedHeadbar(eastl::fixed_list<Headbar, 4ul, true, eastl::allocator>&, Headbar&&);
        void RemoveHeadbarQueue(int);
        void ClearHeadbar(int);
        bool HasHeadbars(unsigned int) const;
        void AddHeadbar(game::ConfigProvider const&, int, int, unsigned int, int, int, int, int, unsigned int);
        void UpdateHeadbarQueues(unsigned int);

        // data members, from how the methods use this: 48 bytes
        int field_0;         // offset 0
        int field_4;         // offset 4
        undefined4 field_8;  // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[32];
    };

    // 0x100405060, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // HitmarksAndHeadbars::~HitmarksAndHeadbars(): jumps straight to the base-object destructor

    // 0x100405070, 48 bytes, base-object destructor, inline, placed by class name and debug map
    // HitmarksAndHeadbars::~HitmarksAndHeadbars()
    void HitmarksAndHeadbars::~HitmarksAndHeadbars() {
        (&field_40)->~vector();
        (&field_16)->~Array();
    }

    // 0x100406b70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(): jumps straight to the base-object constructor

    // 0x1004072a0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(PendingSpotAnimation&&): jumps straight to the base-object constructor

    // 0x1004072b0, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation(PendingSpotAnimation&&)
    void PendingSpotAnimation::PendingSpotAnimation(PendingSpotAnimation* param_1) {
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)this);
        new (&field_8, 0) game::ServerSyncingUser();
        operator=(this, param_1);
    }

    // 0x100407310, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PendingSpotAnimation::PendingSpotAnimation()
    void PendingSpotAnimation::PendingSpotAnimation() {
        std::unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<SpotAnimation, MakeUniquePool<SpotAnimation, 64>::UniquePoolDeleter>*)this);
        new (&field_8, 0) game::ServerSyncingUser();
    }

    // 0x100407af0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::RT5AnimationResourceManager* placement_new<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(void*, game::AssetBuilder&, game::ConfigProvider const&)
    RT5AnimationResourceManager*
    jag::placement_new<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider_const&>(
        void* param_1, AssetBuilder* param_2, ConfigProvider* param_3) {
        game::RT5AnimationResourceManager::RT5AnimationResourceManager(param_1, param_2, param_3);
        return param_1;
    }

    // 0x100407b10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::RT5AnimationResourceManager>* placement_new<ref_counter_shared<game::RT5AnimationResourceManager>, int, game::RT5AnimationResourceManager*&>(void*, int&&, game::RT5AnimationResourceManager*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::RT5AnimationResourceManager>, int, game::RT5AnimationResourceManager*&>(
        void* param_1, int* param_2, RT5AnimationResourceManager** param_3) {
        ref_counter_shared<game::RT5AnimationResourceManager>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100407b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::RT5AnimationResourceManager>::ref_counter_shared(unsigned long, game::RT5AnimationResourceManager*): jumps straight to the base-object constructor

    // 0x100407b40, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::RT5AnimationResourceManager>::ref_counter_shared(unsigned long, game::RT5AnimationResourceManager*)
    void
    ref_counter_shared<game::RT5AnimationResourceManager>::ref_counter_shared(ulong param_1,
                                                                              RT5AnimationResourceManager* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7378 + 16;
        *(ulong*)(this + 16) = param_1;
        *(RT5AnimationResourceManager**)(this + 24) = param_2;
    }

    // 0x100408870, 64 bytes, inline, placed by debug map only (low confidence)
    // game::AnimationWrapper* placement_new<game::AnimationWrapper, game::AssetBuilder&, game::ConfigProvider&, int&, int&, graphics::AnimationLoopBehaviour&, bool, bool>(void*, game::AssetBuilder&, game::ConfigProvider&, int&, int&, graphics::AnimationLoopBehaviour&, bool&&, bool&&)
    /* game::AnimationWrapper* placement_new<game::AnimationWrapper,
   game::AssetBuilder&, game::ConfigProvider const&, int&, int,
   graphics::AnimationLoopBehaviour&, bool, bool&>(void*, game::AssetBuilder&,
   game::ConfigProvider const&, int&, int&&, graphics::AnimationLoopBehaviour&, bool&&,
   bool&) */

    AnimationWrapper* jag::placement_new<game::AnimationWrapper, game::AssetBuilder&, game::ConfigProvider_const&, int&,
                                         int, graphics::AnimationLoopBehaviour&, bool, bool&>(
        void* param_1, AssetBuilder* param_2, ConfigProvider* param_3, int* param_4, int* param_5,
        AnimationLoopBehaviour* param_6, bool* param_7, bool* param_8) {
        game::AnimationWrapper::AnimationWrapper(param_1, param_2, param_3, *param_4, *param_5, *(undefined4*)param_6,
                                                 *param_7, *param_8);
        return param_1;
    }

    // 0x100409740, 32 bytes, inline, placed by debug map only (low confidence)
    // game::BuildTerrainMain* placement_new<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(void*, graphics::RT7Core*&, int&, game::TerrainInputData&)
    BuildTerrainMain* jag::placement_new<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
        void* param_1, RT7Core** param_2, int* param_3, TerrainInputData* param_4) {
        game::BuildTerrainMain::BuildTerrainMain(param_1, *param_2, *param_3, param_4);
        return param_1;
    }

    // 0x100409760, 32 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainMain>* placement_new<BucketRefCounter<game::BuildTerrainMain>, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&, game::BuildTerrainMain*&>(void*, managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&, game::BuildTerrainMain*&)
    BucketRefCounter*
    jag::placement_new<BucketRefCounter<game::BuildTerrainMain>,
                       managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&,
                       game::BuildTerrainMain*&>(void* param_1, managed_ptr_counter_and_data** param_2,
                                                 BuildTerrainMain** param_3) {
        BucketRefCounter<game::BuildTerrainMain>::BucketRefCounter(param_1, *param_2, *param_3, 0);
        return param_1;
    }

    // 0x100409780, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainMain>::BucketRefCounter(void*, game::BuildTerrainMain*, unsigned int): jumps straight to the base-object constructor

    // 0x100409790, 96 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainMain>::BucketRefCounter(void*, game::BuildTerrainMain*, unsigned int)
    void BucketRefCounter<game::BuildTerrainMain>::BucketRefCounter(void* param_1, BuildTerrainMain* param_2,
                                                                    uint param_3) {
        undefined8 uVar1;

        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee70d0 + 16;
        *(void**)(this + 16) = param_1;
        *(BuildTerrainMain**)(this + 24) = param_2;
        uVar1 = this_thread::GetThreadID();
        *(undefined8*)(this + 32) = uVar1;
        *(uint*)(this + 40) = param_3;
    }

    // 0x1004097f0, 96 bytes, inline, placed by debug map only (low confidence)
    // BucketRefCounter<game::BuildTerrainMain>::DeleteSelf()
    void BucketRefCounter<game::BuildTerrainMain>::DeleteSelf() {
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

    // 0x10040a0d0, 64 bytes, inline, placed by debug map only (low confidence)
    // eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* placement_new<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(void*, int&&)
    vector* placement_new<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(void* param_1,
                                                                                                      int* param_2) {
        int iVar1;
        allocator local_28[8];

        iVar1 = *param_2;
        eastl::allocator::allocator(local_28, "EASTL vector");
        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::vector(param_1, (long)iVar1, local_28);
        return param_1;
    }

    // 0x10040a110, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >* placement_new<ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >, int, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*&>(void*, int&&, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>, int,
                       eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*&>(void* param_1,
                                                                                                int* param_2,
                                                                                                vector** param_3) {
        ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10040a1d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10040a1e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >::ref_counter_shared(unsigned long, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
    void ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>* this, ulong param_1,
        vector* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee71e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(vector**)(this + 24) = param_2;
    }

    // 0x10040a220, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >::DeleteData()
    void ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::DeleteData(
        ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>* this) {
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

    // 0x10040a360, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::WaterPatch* placement_new<graphics::WaterPatch, graphics::RT7Core*&, math::AABB&, bool, graphics::WaterPatchConfig, eastl::vector<unsigned short, eastl::allocator>, eastl::vector<graphics::WaterPatchVertex, eastl::allocator>, math::Matrix44T<float>*>(void*, graphics::RT7Core*&, math::AABB&, bool&&, graphics::WaterPatchConfig&&, eastl::vector<unsigned short, eastl::allocator>&&, eastl::vector<graphics::WaterPatchVertex, eastl::allocator>&&, math::Matrix44T<float>*&&)
    WaterPatch*
    jag::placement_new<graphics::WaterPatch, graphics::RT7Core*&, math::AABB&, bool, graphics::WaterPatchConfig,
                       eastl::vector<unsigned short, eastl::allocator>,
                       eastl::vector<graphics::WaterPatchVertex, eastl::allocator>, math::Matrix44T<float>*>(
        void* param_1, RT7Core** param_2, AABB* param_3, bool* param_4, WaterPatchConfig* param_5, vector* param_6,
        vector* param_7, Matrix44T** param_8) {
        graphics::WaterPatch::WaterPatch(param_1, *param_2, param_3, *param_4, param_5, param_6, param_7, *param_8);
        return param_1;
    }

    // 0x10040a390, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32> >* placement_new<MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32> >, MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData*&, graphics::WaterPatch*>(void*, MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData*&, graphics::WaterPatch*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>,
                       MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData*&, graphics::WaterPatch*>(
        void* param_1, RefCounterAndData** param_2, WaterPatch** param_3) {
        MakeSharedPoolRefCounter<graphics::WaterPatch,
                                 MakeSharedPool<graphics::WaterPatch, 32>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                                     *param_3);
        return param_1;
    }

    // 0x10040a580, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32> >::MakeSharedPoolRefCounter(void*, graphics::WaterPatch*): jumps straight to the base-object constructor

    // 0x10040a590, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32> >::MakeSharedPoolRefCounter(void*, graphics::WaterPatch*)
    void jag::MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>::
        MakeSharedPoolRefCounter(
            MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>* this,
            void* param_1, WaterPatch* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7b90 + 16;
        *(void**)(this + 16) = param_1;
        *(WaterPatch**)(this + 24) = param_2;
    }

    // 0x10040a5d0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32> >::DeleteSelf()
    void jag::MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>::DeleteSelf(
        MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>* this) {
        void* pvVar1;

        pvVar1 = *(void**)(this + 16);
        (*(code*)**(undefined8**)this)();
        MakeSharedPool<graphics::WaterPatch, 32>::deallocate(pvVar1);
    }

    // 0x10040aba0, 16 bytes, inline, placed by debug map only (low confidence)
    // bool ArrayPositivePos<int>(int const&, std::integral_constant<bool, true> const&)
    /* bool ArrayPositivePos<int>(int const&, std::integral_constant<bool, true> const&) */

    bool ArrayPositivePos<int>(int* param_1, integral_constant* param_2) {
        return -1 < *param_1;
    }

} // namespace jag
