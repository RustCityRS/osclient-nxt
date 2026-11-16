// libs/game/runetek5/config/skyboxtype/SkyBoxType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SkyBoxType.h"

namespace jag::game {
    // 0x10016b490: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetMinMapZ() const, which has identical code
    SkyBoxType::GetCubeMapMaterialID() const;

    // 0x1004e0970, 320 bytes, placed by class name and debug map
    // SkyBoxType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* SkyBoxType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        ushort uVar2;
        undefined2 uVar3;
        undefined4 uVar4;
        undefined8 in_RAX;
        undefined8 uVar5;
        undefined2* puVar6;
        ulong uVar7;

        uVar4 = (undefined4)((ulong)in_RAX >> 32);
        switch (param_2) {
        case 1:
            uVar2 = param_1->g2();
            field_56 = (uint)uVar2;
            break;
        case 2:
            bVar1 = param_1->g1();
            (&field_64, (ulong)bVar1, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar7 = 0;
                do {
                    uVar3 = param_1->g2();
                    puVar6 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_64, uVar7);
                    *puVar6 = uVar3;
                    uVar7 = uVar7 + 1;
                } while (bVar1 != uVar7);
            }
            break;
        case 3:
            bVar1 = param_1->g1();
            field_88 = (uint)bVar1;
            break;
        case 4:
            bVar1 = param_1->g1();
            field_92 = (uint)bVar1;
            break;
        case 5:
            uVar4 = param_1->gSmart2or4s();
            field_96 = uVar4;
            break;
        case 6:
            uVar4 = param_1->gSmart2or4s();
            field_100 = uVar4;
            break;
        default:
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/skyboxtype/SkyBoxType.cpp",
                                57, "Unrecognised .skybox config code: %u", CONCAT44(uVar4, param_2));
        }
        return DataStatus::READY;
    }

    // 0x1004e0ab0, 16 bytes, placed by class name and debug map
    // SkyBoxType::PostDecode()
    void SkyBoxType::PostDecode() {}

    // 0x1004e0ac0, 992 bytes, placed by class name and debug map
    // SkyBoxType::GetStaticSkyModel(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&)
    undefined* SkyBoxType::GetStaticSkyModel(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3) {
        undefined* puVar1;
        char cVar2;
        AssetLRUCache<graphics::Model, BuildModelMain>* this_00;
        shared_ptr* this_01;
        Model* pMVar4;
        long* plVar5;
        undefined* puVar6;
        Js5ResourceProvider* this_02;
        BuildModelMain* this_03;
        vector* this_04;
        undefined** ppuVar7;
        shared_ptr* psVar8;
        undefined* puVar9;
        PacketView local_f8;
        shared_ptr local_c8;
        RT7Core* local_b8;
        shared_ptr local_b0;
        shared_ptr local_a0;
        ModelConstructedState local_8a;
        bool local_89;
        PacketView local_88[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_b8 = param_1;
        this_00 = (AssetLRUCache<graphics::Model, BuildModelMain>*)field_24->GetPixelBuffer();
        this_00->UpdateLoadingAssetList(5);
        cVar2 = this_00->IsLoadingAsset((long)field_32);
        if (cVar2 == '\0') {
            psVar8 = (shared_ptr*)(long)field_32;
            this_01 = (shared_ptr*)this_00->Find((ulonglong)psVar8);
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_01);
                cVar2 = pMVar4->IsLoaded();
                if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("cachedModel->IsLoaded()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/skyboxtype/SkyBoxType.cpp",
                              81, (char*)0);
                }
                param_3->SetConstructedObj(this_01);
                psVar8 = this_01;
            }
            cVar2 = param_3->IsTaskDone();
            if ((cVar2 == '\0') && (cVar2 = param_3->IsEmpty(), cVar2 == '\0'))
                goto LAB_1004e0e00;
            cVar2 = param_3->IsEmpty();
            if (cVar2 != '\0') {
                cVar2 = graphics::Model::IsReadyToConstruct(local_b8);
                if (cVar2 == '\0')
                    goto LAB_1004e0e00;
                plVar5 = (long*)field_24->GetOutputType();
                puVar6 = (undefined*)(**(code**)(*plVar5 + 48))(plVar5, Js5Archive::JS5_MODELSRT7, field_96, 0,
                                                                Priority::HIGH, 1);
                puVar1 = DataStatus::NOTLOADED;
                puVar9 = DataStatus::MISSING;
                if ((puVar6 == DataStatus::MISSING) ||
                    (puVar9 = DataStatus::NOTLOADED, puVar6 == DataStatus::NOTLOADED))
                    goto LAB_1004e0e0a;
                new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                new (&local_f8) PacketView();
                this_02 = (Js5ResourceProvider*)field_24->GetOutputType();
                this_02->GetFile(&local_f8, Js5Archive::JS5_MODELSRT7, field_96, 0, (Priority*)Priority::HIGH, true,
                                 false, false);
                eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(local_88);
                MakeSharedPool<graphics::Model, 3072>::MakeShared<>(&local_c8,
                                                                    (MakeSharedPool<graphics::Model, 3072>*)&local_f8);
                pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)&local_c8);
                pMVar4->SetSourceModelIDs(field_96);
                local_b0._0_4_ = 16384;
                local_8a = (ModelConstructedState)4;
                local_89 = false;
                bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                   eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                   shared_ptr<graphics::Model>&>((jag*)&local_a0, (int*)&local_b0, &local_8a, &local_89,
                                                                 &local_b8, (fixed_vector*)local_88, &local_c8);
                this_03 =
                    (BuildModelMain*)shared_ptr<BuildModelMain>::operator->((shared_ptr<BuildModelMain>*)&local_a0);
                this_03->SetUseUncompressedTextures(true);
                new (&local_b0) shared_ptr<oldscape::dash3d::Decor>(&local_a0);
                param_2->SubmitJob(&local_b0);
                local_b0.~shared_ptr();
                this_00->AddLoadingAsset((long)field_32, &local_a0);
                psVar8 = &local_c8;
                param_3->SetObjAndTask(psVar8, &local_a0);
                cVar2 = param_3->IsTaskDone();
                puVar9 = puVar1;
                if (cVar2 == '\0') {
                    puVar9 = DataStatus::NOTLOADED;
                }
                local_a0.~shared_ptr();
                local_c8.~shared_ptr();
                local_f8.~PacketView();
                local_88->~fixed_vector();
                if (cVar2 == '\0')
                    goto LAB_1004e0e0a;
            }
            this_04 = param_3->SSOBeginPtr(psVar8);
            pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this_04);
            cVar2 = pMVar4->IsLoaded();
            if (cVar2 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "skyboxtype/SkyBoxType.cpp",
                          145, (char*)0);
            }
            ppuVar7 = &DataStatus::READY;
        } else {
        LAB_1004e0e00:
            ppuVar7 = &DataStatus::NOTLOADED;
        }
        puVar9 = *ppuVar7;
    LAB_1004e0e0a:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar9;
    }

} // namespace jag::game
