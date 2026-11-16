// libs/game/runetek5/config/skyboxtype/SkyBoxType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SkyBoxType.h"

namespace jag::game {
    // 0x10016b490: SkyBoxType::GetCubeMapMaterialID() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const

    // 0x1004e0970
    uint8_t* SkyBoxType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint16_t uVar3;
        uint64_t in_RAX;
        uint16_t* puVar5;
        unsigned long arg1_00;

        uint32_t uVar4 = (uint32_t)((unsigned long)in_RAX >> 32);
        switch (arg2) {
        case 1:
            uVar2 = arg1.g2();
            field_56 = (unsigned int)uVar2;
            break;
        case 2:
            bVar1 = arg1.g1();
            field_64.set_max_size((unsigned long)bVar1, 0);
            if (bVar1 != 0) {
                arg1_00 = 0;
                do {
                    uVar3 = arg1.g2();
                    puVar5 = &field_64[arg1_00];
                    *puVar5 = uVar3;
                    arg1_00 = arg1_00 + 1;
                } while (bVar1 != arg1_00);
            }
            break;
        case 3:
            bVar1 = arg1.g1();
            field_88 = (unsigned int)bVar1;
            break;
        case 4:
            bVar1 = arg1.g1();
            field_92 = (unsigned int)bVar1;
            break;
        case 5:
            uVar4 = arg1.gSmart2or4s();
            field_96 = uVar4;
            break;
        case 6:
            uVar4 = arg1.gSmart2or4s();
            m_cubeMapMaterialID = uVar4;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "skyboxtype/SkyBoxType.cpp",
                      57, "Unrecognised .skybox config code: %u", (((uint64_t)uVar4 << 32) | (uint32_t)arg2));
        }
        return DataStatus::READY;
    }

    // 0x1004e0ab0
    void SkyBoxType::PostDecode() {}

    // 0x1004e0ac0
    uint8_t* SkyBoxType::GetStaticSkyModel(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                           BuildRequest<graphics::Model, BuildModelMain>& buildRequest) {
        uint8_t* puVar1;
        shared_ptr* this_01;
        Model* pMVar3;
        long* plVar4;
        uint8_t* puVar5;
        shared_ptr<graphics::Model>* this_04;
        uint8_t** ppuVar6;
        uint8_t* puVar7;
        PacketView local_f8;
        shared_ptr<graphics::Model> local_c8;
        uint32_t local_b0[4];
        shared_ptr<BuildModelMain> local_a0;
        bool local_8a;
        uint64_t local_89;

        RT7Core* local_b8 = rt7Core;
        AssetLRUCache<graphics::Model, BuildModelMain>* this_00 =
            (AssetLRUCache<graphics::Model, BuildModelMain>*)field_24->GetPixelBuffer();
        this_00->UpdateLoadingAssetList(5);
        bool cVar2 = this_00->IsLoadingAsset((long)field_32);
        if (!cVar2) {
            this_01 = (shared_ptr*)this_00->Find((long)field_32);
            cVar2 = shared_ptr::operator_cast_to_bool(this_01);
            if (cVar2) {
                pMVar3 = (Model*)(*this_01).operator->();
                cVar2 = pMVar3->IsLoaded();
                if (!cVar2) {
                    LogAssert("cachedModel->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/skyboxtype/SkyBoxType.cpp",
                              81, nullptr);
                }
                buildRequest.SetConstructedObj(*this_01);
            }
            cVar2 = buildRequest.IsTaskDone();
            if ((!cVar2) && (cVar2 = buildRequest.IsEmpty(), !cVar2))
                goto LAB_1004e0e00;
            cVar2 = buildRequest.IsEmpty();
            if (cVar2) {
                cVar2 = graphics::Model::IsReadyToConstruct(local_b8);
                if (!cVar2)
                    goto LAB_1004e0e00;
                plVar4 = (long*)field_24->GetOutputType();
                puVar5 = (uint8_t*)(**(void (**)(...))(*plVar4 + 48))(plVar4, Js5Archive::JS5_MODELSRT7, field_96, 0,
                                                                      Priority::HIGH, 1);
                puVar1 = DataStatus::NOTLOADED;
                puVar7 = DataStatus::MISSING;
                if ((puVar5 == DataStatus::MISSING) ||
                    (puVar7 = DataStatus::NOTLOADED, puVar5 == DataStatus::NOTLOADED))
                    goto LAB_1004e0e0a;
                new ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1)) eastl::fixed_vector<PacketView, 1ul>();
                local_f8 = PacketView();
                ((Js5ResourceProvider*)field_24->GetOutputType())
                    ->GetFile(local_f8, *(Js5Archive::JS5_MODELSRT7), field_96, 0, (Priority*)Priority::HIGH, true,
                              false, false);
                ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->push_back(local_f8);
                MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                pMVar3 = (Model*)local_c8.operator->();
                pMVar3->SetSourceModelIDs(field_96);
                local_b0[0] = 16384;
                local_8a = true;
                local_89._0_1_ = 0;
                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                   eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
                    &local_a0, (ModelConstructedState*)local_b0, &local_8a, (RT7Core**)&local_89,
                    (fixed_vector<PacketView, _1ul>*)&local_b8, (shared_ptr<graphics::Model>*)((long)&local_89 + 1));
                ((BuildModelMain*)local_a0.operator->())->SetUseUncompressedTextures(true);
                new (local_b0) shared_ptr(&local_a0);
                assetBuilder.SubmitJob(*local_b0);
                this_00->AddLoadingAsset((long)field_32, local_a0);
                buildRequest.SetObjAndTask(local_c8, local_a0);
                cVar2 = buildRequest.IsTaskDone();
                puVar7 = puVar1;
                if (!cVar2) {
                    puVar7 = DataStatus::NOTLOADED;
                }
                ((fixed_vector<PacketView, 1ul>*)((long)&local_89 + 1))->~fixed_vector();
                if (!cVar2)
                    goto LAB_1004e0e0a;
            }
            this_04 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar3 = (Model*)(*this_04).operator->();
            cVar2 = pMVar3->IsLoaded();
            if (!cVar2) {
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "skyboxtype/SkyBoxType.cpp",
                          145, nullptr);
            }
            ppuVar6 = &DataStatus::READY;
        } else {
        LAB_1004e0e00:
            ppuVar6 = &DataStatus::NOTLOADED;
        }
        puVar7 = *ppuVar6;
    LAB_1004e0e0a:
        return puVar7;
    }

} // namespace jag::game
