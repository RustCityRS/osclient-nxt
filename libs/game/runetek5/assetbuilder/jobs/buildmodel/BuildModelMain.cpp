// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildModelMain.h"

namespace jag::game {
    // 0x1001cd990: BuildModelMain::GetConstructedAsset() const has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x1001fb280: BuildModelMain::GetRequestData() has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100643940
    BuildModelMain::BuildModelMain(int arg1, graphics::ModelConstructedState arg2, bool arg3, graphics::RT7Core* arg4,
                                   eastl::fixed_vector<PacketView, 1ul>&& arg5, const shared_ptr<graphics::Model>& arg6)
        : AssetJob(50, arg1, -1) {
        ReturnValue local_58;

        field_80[0] = param_3;
        field_88 = param_5;
        new (m_constructedAsset) shared_ptr(param_7);
        uint8_t* this_00 = m_requestData;
        uint8_t* local_40 = m_constructedAsset;
        new (this_00) shared_ptr();
        bucket_make_shared<BuildModelRequestData>(&local_58);
        *this_00 = local_58;
        uint64_t* puVar1 = (uint64_t*)**this_00;
        puVar1[1] = field_88->GetMaterialManager();
        auto pTVar3 = field_88->GetTextureManager();
        *puVar1 = pTVar3;
        (*((puVar1 + 10))) = *param_6;
        *(char*)((long)puVar1 + 662) = (char)param_4;
        *(uint8_t*)(puVar1 + 84) = param_3;
        (*((puVar1 + 85))) = *param_7;
    }

    // 0x100643c00
    uint8_t* BuildModelMain::RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        uint8_t** ppuVar2;
        shared_ptr<oldscape::ClientNpc> local_30;

        if (!(m_requestData->operator_cast_to_bool())) {
            ppuVar2 = &DataStatus::MISSING;
        } else {
            if (field_88 == nullptr) {
                LogAssert("m_rt7Core != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "assetbuilder/jobs/buildmodel/BuildModelMain.cpp",
                          45, nullptr);
            }
            if (!(graphics::Model::IsReadyToConstruct(field_88))) {
                ppuVar2 = &DataStatus::NOTLOADED;
            } else {
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30);
                field_32 = local_30;
                ppuVar2 = &DataStatus::READY;
            }
        }
        return *ppuVar2;
    }

    // 0x100643cc0
    BuildModelMain* BuildModelMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildModelWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x100643da0
    auto BuildModelMain::DecodeResult(const shared_ptr<void>& arg1) {
        BuildModelResultData* buildModelResultData;

        ScopedGPUMemoryZone local_28("BuildModelMainDecodeResult");
        if (arg1.operator_cast_to_bool() != '\0') {
            buildModelResultData = (BuildModelResultData*)arg1.end();
            PostDecodeResultSetup(*buildModelResultData);
        }
        auto result(arg1);
        return result;
    }

    // 0x100643e20
    void BuildModelMain::PostDecodeResultSetup(BuildModelResultData& buildModelResultData) {
        MaterialManager* materialManager;
        TextureManager* textureManager;

        uint8_t* this_00 = m_constructedAsset;
        *this_00 = buildModelResultData;
        Model* pMVar2 = (Model*)(*this_00).operator->();
        uint8_t bVar1 = pMVar2->GetConstructedState();
        if (bVar1 < (uint8_t)field_80[0]) {
            materialManager = field_88->GetMaterialManager();
            textureManager = field_88->GetTextureManager();
            if (2 < (uint8_t)field_80[0]) {
                pMVar2 = (Model*)(*this_00).operator->();
                pMVar2->BakeMaterialInfoAndTextureMetaAndHSLColors(*materialManager, *textureManager, false);
                if (3 < (uint8_t)field_80[0]) {
                    pMVar2 = (Model*)(*this_00).operator->();
                    pMVar2->ConstructFinishAndUpload();
                }
            }
        }
        pMVar2 = (Model*)(*this_00).operator->();
        bVar1 = pMVar2->GetConstructedState();
        if (bVar1 < (uint8_t)field_80[0]) {
            LogAssert("m_model->GetConstructedState() >= m_constructAmount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildmodel/BuildModelMain.cpp",
                      100, nullptr);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x100643a70
    shared_ptr_if_not_array<game::BuildModelRequestData>::type bucket_make_shared<game::BuildModelRequestData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildModelRequestData* local_28[2];

        auto local_30 = BucketManager::Allocate(744, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildModelRequestData>::type result;
        } else {
            local_28[0] = placement_new<game::BuildModelRequestData>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildModelRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>,
                                                           game::BuildModelRequestData>*&,
                              game::BuildModelRequestData*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100643d10
    shared_ptr_if_not_array<game::BuildModelWorker>::type bucket_make_shared<game::BuildModelWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildModelWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(88, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildModelWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildModelWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildModelWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&,
                game::BuildModelWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
