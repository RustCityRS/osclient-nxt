// libs/game/runetek5/assetbuilder/jobs/buildmodel/BuildModelMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildModelMain.h"

namespace jag::game {
    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    shared_ptr BuildModelMain::GetConstructedAsset() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    shared_ptr BuildModelMain::GetRequestData();

    // 0x100643940, 304 bytes, base-object constructor, placed by class name and debug map
    // BuildModelMain::BuildModelMain(int, graphics::ModelConstructedState, bool, graphics::RT7Core*, eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>&&, shared_ptr<graphics::Model> const&)
    void BuildModelMain::BuildModelMain(undefined4 param_1, byte param_3, undefined4 param_4, RT7Core* param_5,
                                        fixed_vector* param_6, shared_ptr* param_7) {
        undefined1* this_00;
        undefined8* puVar1;
        undefined8 uVar2;
        shared_ptr local_58;
        undefined1* local_40;

        new (this) AssetJob(50, param_1, 4294967295);
        field_0 = &PTR__BuildModelMain_100f0d578;
        field_80 = param_3;
        field_88 = param_5;
        new (m_constructedAsset, param_7) shared_ptr<oldscape::dash3d::Decor>();
        this_00 = m_requestData;
        local_40 = m_constructedAsset;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_7);
        bucket_make_shared<BuildModelRequestData>((jag*)&local_58);
        shared_ptr<BuildModelRequestData>::operator=((shared_ptr<BuildModelRequestData>*)this_00, &local_58);
        local_58.~shared_ptr();
        puVar1 = (undefined8*)shared_ptr<BuildModelRequestData>::operator*((shared_ptr<BuildModelRequestData>*)this_00);
        uVar2 = field_88->GetMaterialManager();
        puVar1[1] = uVar2;
        uVar2 = field_88->GetTextureManager();
        *puVar1 = uVar2;
        eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::operator=(
            (fixed_vector<PacketView, 1ul, true, eastl::allocator>*)(puVar1 + 10), param_6);
        *(char*)((long)puVar1 + 662) = (char)param_4;
        *(byte*)(puVar1 + 84) = param_3;
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)(puVar1 + 85), param_7);
    }

    // 0x100643be0, 32 bytes, complete-object constructor, placed by class name and debug map
    // BuildModelMain::BuildModelMain(int, graphics::ModelConstructedState, bool, graphics::RT7Core*, eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>&&, shared_ptr<graphics::Model> const&)
    void BuildModelMain::BuildModelMain() {
        BuildModelMain();
    }

    // 0x100643c00, 192 bytes, placed by class name and debug map
    // BuildModelMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildModelMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined** ppuVar3;
        shared_ptr* extraout_RDX;
        shared_ptr local_30;

        if (m_requestData->operator_cast_to_bool()) {
            if (field_88 == (RT7Core*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_rt7Core != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "assetbuilder/jobs/buildmodel/BuildModelMain.cpp",
                          45, (char*)0);
            }
            if (graphics::Model::IsReadyToConstruct(field_88) == '\0') {
                ppuVar3 = &DataStatus::NOTLOADED;
            } else {
                static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                    &local_30, (jag*)m_requestData, extraout_RDX);
                shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_30);
                local_30.~shared_ptr();
                ppuVar3 = &DataStatus::READY;
            }
        } else {
            ppuVar3 = &DataStatus::MISSING;
        }
        return *ppuVar3;
    }

    // 0x100643cc0, 80 bytes, placed by class name and debug map
    // BuildModelMain::CreateWorker()
    BuildModelMain* BuildModelMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildModelWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x100643da0, 128 bytes, placed by class name and debug map
    // BuildModelMain::DecodeResult(shared_ptr<void> const&)
    BuildModelMain* BuildModelMain::DecodeResult(shared_ptr* param_1) {
        BuildModelResultData* pBVar2;
        shared_ptr* in_RDX;
        ScopedGPUMemoryZone local_28[8];

        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_28, "BuildModelMainDecodeResult");
        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            pBVar2 = (BuildModelResultData*)in_RDX->end();
            PostDecodeResultSetup((BuildModelMain*)param_1, pBVar2);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        local_28->~ScopedGPUMemoryZone();
        return this;
    }

    // 0x100643e20, 192 bytes, placed by class name and debug map
    // BuildModelMain::PostDecodeResultSetup(BuildModelResultData&)
    void BuildModelMain::PostDecodeResultSetup(BuildModelResultData* param_1) {
        undefined1* this_00;
        byte bVar1;
        Model* pMVar2;
        MaterialManager* pMVar3;
        TextureManager* pTVar4;

        this_00 = m_constructedAsset;
        shared_ptr<graphics::Model>::operator=((shared_ptr<graphics::Model>*)this_00, (shared_ptr*)param_1);
        pMVar2 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
        bVar1 = pMVar2->GetConstructedState();
        if (bVar1 < field_80) {
            pMVar3 = (MaterialManager*)field_88->GetMaterialManager();
            pTVar4 = (TextureManager*)field_88->GetTextureManager();
            if (2 < field_80) {
                pMVar2 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                pMVar2->BakeMaterialInfoAndTextureMetaAndHSLColors(pMVar3, pTVar4, false);
                if (3 < field_80) {
                    pMVar2 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
                    pMVar2->ConstructFinishAndUpload();
                }
            }
        }
        pMVar2 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_00);
        bVar1 = pMVar2->GetConstructedState();
        if (bVar1 < field_80) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_model->GetConstructedState() >= m_constructAmount",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildmodel/BuildModelMain.cpp",
                      100, (char*)0);
        }
    }

} // namespace jag::game

namespace jag {
    // 0x100643a70, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildModelRequestData>::type bucket_make_shared<game::BuildModelRequestData>()
    jag* bucket_make_shared<game::BuildModelRequestData>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildModelRequestData* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(744, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildModelRequestData>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildModelRequestData>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelRequestData>,
                                                                game::BuildModelRequestData>*&,
                                   game::BuildModelRequestData*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

    // 0x100643d10, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildModelWorker>::type bucket_make_shared<game::BuildModelWorker>()
    jag* bucket_make_shared<game::BuildModelWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildModelWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(88, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildModelWorker>(local_30 + 48);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildModelWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildModelWorker>, game::BuildModelWorker>*&,
                game::BuildModelWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

} // namespace jag
