// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainMain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100626250
    shared_ptr_if_not_array<game::BuildTerrainRequestData>::type bucket_make_shared<game::BuildTerrainRequestData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildTerrainRequestData* local_28[2];

        auto local_30 = BucketManager::Allocate(320, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildTerrainRequestData>::type result;
        } else {
            local_28[0] = placement_new<game::BuildTerrainRequestData>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildTerrainRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainRequestData>,
                                                           game::BuildTerrainRequestData>*&,
                              game::BuildTerrainRequestData*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1006274c0
    shared_ptr_if_not_array<game::BuildTerrainWorker>::type bucket_make_shared<game::BuildTerrainWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildTerrainWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(184, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildTerrainWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildTerrainWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildTerrainWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainWorker>, game::BuildTerrainWorker>*&,
                game::BuildTerrainWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100627b50
    shared_ptr_if_not_array<eastl::map<int, graphics::TerrainTextureMeta>>::type
    make_shared<eastl::map<int, graphics::TerrainTextureMeta>>() {
        ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta> _>* ref_counter_shared;
        int local_2c;
        map<int, graphics::TerrainTextureMeta>* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::map<int, graphics::TerrainTextureMeta>>::type result;
        } else {
            local_28[0] = placement_new<eastl::map<int, graphics::TerrainTextureMeta>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::map<int, graphics::TerrainTextureMeta>>, int,
                              eastl::map<int, graphics::TerrainTextureMeta>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::game {
    class BuildTerrainMain : public AssetJob // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildTerrainMain();
        virtual uint8_t* RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider);
        virtual BuildTerrainMain* CreateWorker();
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        virtual shared_ptr GetRequestData();
        BuildTerrainMain(graphics::RT7Core* rt7Core, int arg2, TerrainInputData& terrainInputData);
        uint8_t* FetchTerrainData(Js5ResourceProvider* js5ResourceProvider);
        uint8_t* FindUsedOverlaysAndUnderlays();
        uint8_t* LoadOverlayAndUnderlayConfigs(ConfigProvider* configProvider);
        uint8_t* LoadMaterials();
        uint8_t* BuildTextureMeta();
        void PostDecodeResultSetup(BuildTerrainResultData& buildTerrainResultData);

    private:
        uint8_t _unknown_72[8];
        RT7Core* field_80;
        uint8_t _unknown_88[32];
        uint8_t field_120;
        uint8_t _unknown_121[263];
        char field_384;
        char field_385;
        uint8_t _unknown_386[134];
        uint8_t field_520;
        uint8_t _unknown_521[1];
        uint8_t field_522;
        uint8_t _unknown_523[69];
        shared_ptr m_requestData;
    };

} // namespace jag::game
