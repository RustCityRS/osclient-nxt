// libs/game/runetek5/scene/entities/HitmarksAndHeadbars.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class HitmarksAndHeadbars {
    public:
        uint8_t* GetHitmarks();
        ~HitmarksAndHeadbars();
        HitmarksAndHeadbars(const game::ConfigProvider& configProvider);
        void AddHitmark(const game::ConfigProvider& configProvider, int arg2, int arg3, int arg4, int arg5,
                        unsigned int arg6, unsigned int arg7);
        void AddQueuedHeadbar(eastl::fixed_list<Headbar, 4ul>& fixed_list, Headbar&& headbar);
        void RemoveHeadbarQueue(int arg1);
        void ClearHeadbar(int arg1);
        bool HasHeadbars(unsigned int arg1) const;
        void AddHeadbar(const game::ConfigProvider& configProvider, int arg2, int arg3, unsigned int arg4, int arg5,
                        int arg6, int arg7, int arg8, unsigned int arg9);
        void UpdateHeadbarQueues(unsigned int arg1);

    private:
        int field_0;
        int field_4;
        uint32_t field_8;
        uint32_t field_12;
        uint8_t _unknown_16[32];
    };

    // 0x100405070
    HitmarksAndHeadbars::~HitmarksAndHeadbars() {
        field_40.~vector();
        field_16.~Array();
    }

    // 0x1004072b0
    PendingSpotAnimation::PendingSpotAnimation(PendingSpotAnimation&& pendingSpotAnimation) {
        unique_ptr<true, void>();
        new (&field_8) game::ServerSyncingUser(0);
        operator=(this, pendingSpotAnimation);
    }

    // 0x100407310
    PendingSpotAnimation::PendingSpotAnimation() {
        unique_ptr<true, void>();
        new (&field_8) game::ServerSyncingUser(0);
    }

    // 0x100407af0
    game::RT5AnimationResourceManager*
    placement_new<game::RT5AnimationResourceManager, game::AssetBuilder&, game::ConfigProvider const&>(
        void* arg1, game::AssetBuilder& assetBuilder, const game::ConfigProvider& configProvider) {
        new (arg1) game::RT5AnimationResourceManager(assetBuilder, configProvider);
        return arg1;
    }

    // 0x100407b10
    ref_counter_shared<game::RT5AnimationResourceManager>*
    placement_new<ref_counter_shared<game::RT5AnimationResourceManager>, int, game::RT5AnimationResourceManager*&>(
        void* arg1, int&& arg2, game::RT5AnimationResourceManager*& arg3) {
        new (arg1) ref_counter_shared<game::RT5AnimationResourceManager>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100407b40
    ref_counter_shared<game::RT5AnimationResourceManager>::ref_counter_shared(
        unsigned long arg1, game::RT5AnimationResourceManager* rt5AnimationResourceManager)
        : ref_counter_base() {}

    // 0x100408870
    game::AnimationWrapper* placement_new<game::AnimationWrapper, game::AssetBuilder&, game::ConfigProvider&, int&,
                                          int&, graphics::AnimationLoopBehaviour&, bool, bool>(
        void* arg1, game::AssetBuilder& assetBuilder, game::ConfigProvider& configProvider, int& arg4, int& arg5,
        graphics::AnimationLoopBehaviour& animationLoopBehaviour, bool&& arg7, bool&& arg8) {
        new (arg1) game::AnimationWrapper(assetBuilder, configProvider, arg4, arg5, animationLoopBehaviour, arg7, arg8);
        return arg1;
    }

    // 0x100409740
    game::BuildTerrainMain* placement_new<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
        void* arg1, graphics::RT7Core*& arg2, int& arg3, game::TerrainInputData& terrainInputData) {
        new (arg1) game::BuildTerrainMain(arg2, arg3, terrainInputData);
        return arg1;
    }

    // 0x100409760
    BucketRefCounter<game::BuildTerrainMain>*
    placement_new<BucketRefCounter<game::BuildTerrainMain>,
                  managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&,
                  game::BuildTerrainMain*&>(
        void* arg1,
        managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*& arg2,
        game::BuildTerrainMain*& arg3) {
        new (arg1) BucketRefCounter<game::BuildTerrainMain>(arg2, arg3, 0);
        return arg1;
    }

    // 0x100409790
    BucketRefCounter<game::BuildTerrainMain>::BucketRefCounter(void* arg1, game::BuildTerrainMain* buildTerrainMain,
                                                               unsigned int arg3)
        : ref_counter_base() {}

    // 0x1004097f0
    void BucketRefCounter<game::BuildTerrainMain>::DeleteSelf() {
        BucketRefCounter<game::BuildTerrainMain> _vtbl* pBVar1;

        if (*(int*)&this[5]._vptr != 4) {
            pBVar1 = (BucketRefCounter<game::BuildTerrainMain> _vtbl*)this_thread::GetThreadID();
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

    // 0x10040a0d0
    eastl::vector<eastl::vector<int>>* placement_new<eastl::vector<eastl::vector<int>>, int>(void* arg1, int&& arg2) {

        new (arg1) eastl::vector<eastl::vector<int>>((long)(int)arg2, local_28);
        return arg1;
    }

    // 0x10040a110
    ref_counter_shared<eastl::vector<eastl::vector<int>>>*
    placement_new<ref_counter_shared<eastl::vector<eastl::vector<int>>>, int, eastl::vector<eastl::vector<int>>*&>(
        void* arg1, int&& arg2, eastl::vector<eastl::vector<int>>*& arg3) {
        new (arg1) ref_counter_shared<eastl::vector<eastl::vector<int>>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10040a1e0
    ref_counter_shared<eastl::vector<eastl::vector<int>>>::ref_counter_shared(unsigned long arg1,
                                                                              eastl::vector<eastl::vector<int>>* arg2)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee71e0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(vector<eastl::vector<int>>**)(this + 24) = arg2;
    }

    // 0x10040a220
    void ref_counter_shared<eastl::vector<eastl::vector<int>>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((vector<eastl::vector<int>>*)(*(long*)(this + 24) + lVar2))->~vector();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10040a360
    graphics::WaterPatch*
    placement_new<graphics::WaterPatch, graphics::RT7Core*&, math::AABB&, bool, graphics::WaterPatchConfig,
                  eastl::vector<unsigned short>, eastl::vector<graphics::WaterPatchVertex>, math::Matrix44T<float>*>(
        void* arg1, graphics::RT7Core*& arg2, math::AABB& aabb, bool&& arg4,
        graphics::WaterPatchConfig&& waterPatchConfig, eastl::vector<unsigned short>&& arg6,
        eastl::vector<graphics::WaterPatchVertex>&& waterPatchVertexs, math::Matrix44T<float>*&& arg8) {
        new (arg1) graphics::WaterPatch(arg2, aabb, arg4, waterPatchConfig, arg6, waterPatchVertexs, arg8);
        return arg1;
    }

    // 0x10040a390
    MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>*
    placement_new<MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>,
                  MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData*&, graphics::WaterPatch*>(
        void* arg1, MakeSharedPool<graphics::WaterPatch, 32>::RefCounterAndData*& arg2, graphics::WaterPatch*&& arg3) {
        new (arg1) MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>(arg2, arg3);
        return arg1;
    }

    // 0x10040a590
    MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>::MakeSharedPoolRefCounter(
        void* arg1, graphics::WaterPatch* waterPatch)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee7b90 + 16;
        *(void**)(this + 16) = arg1;
        *(WaterPatch**)(this + 24) = waterPatch;
    }

    // 0x10040a5d0
    void MakeSharedPoolRefCounter<graphics::WaterPatch, MakeSharedPool<graphics::WaterPatch, 32>>::DeleteSelf() {
        void* arg1 = *(void**)(this + 16);
        (*(void (*)(...)) * *(uint64_t**)this)();
        MakeSharedPool<graphics::WaterPatch, 32>::deallocate(arg1);
    }

    // 0x10040aba0
    bool ArrayPositivePos<int>(const int& arg1, const std::integral_constant<bool, true>& integral_constant) {
        return -1 < arg1;
    }

} // namespace jag
