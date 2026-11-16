// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100626250, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildTerrainRequestData>::type bucket_make_shared<game::BuildTerrainRequestData>()
    jag* bucket_make_shared<game::BuildTerrainRequestData>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildTerrainRequestData* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(320, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildTerrainRequestData>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildTerrainRequestData>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>,
                                                                game::BuildTerrainRequestData>*&,
                                   game::BuildTerrainRequestData*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

    // 0x1006274c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildTerrainWorker>::type bucket_make_shared<game::BuildTerrainWorker>()
    jag* bucket_make_shared<game::BuildTerrainWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildTerrainWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(184, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildTerrainWorker>(local_30 + 48);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildTerrainWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&,
                game::BuildTerrainWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

    // 0x100627b50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator> >::type make_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>()
    jag* jag::make_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        map* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>,
                int, eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::game {
    class BuildTerrainMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildTerrainMain();
        virtual RunFirst(Js5ResourceProvider*, ConfigProvider*);
        virtual BuildTerrainMain* CreateWorker();
        virtual DecodeResult(shared_ptr<void> const&);
        virtual shared_ptr GetRequestData();
        BuildTerrainMain(graphics::RT7Core*, int, TerrainInputData&);
        FetchTerrainData(Js5ResourceProvider*);
        FindUsedOverlaysAndUnderlays();
        LoadOverlayAndUnderlayConfigs(ConfigProvider*);
        LoadMaterials();
        BuildTextureMeta();
        void PostDecodeResultSetup(BuildTerrainResultData&);

        // data members, from how the methods use this: 608 bytes, the first 72 are AssetJob
        char _unknown_72[8];
        RT7Core* field_80; // offset 80
        char _unknown_88[32];
        undefined1 field_120; // offset 120
        char _unknown_121[263];
        char field_384; // offset 384
        char field_385; // offset 385
        char _unknown_386[134];
        undefined1 field_520; // offset 520
        char _unknown_521[1];
        undefined1 field_522; // offset 522
        char _unknown_523[69];
        shared_ptr m_requestData; // offset 592
    };

} // namespace jag::game

namespace jag::fixedfunction {
    // 0x100627b30, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<game::BuildTerrainMain::LoadMaterials()::$_0, void>(game::BuildTerrainMain::LoadMaterials()::$_0&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
