// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildAnimationMain.h"

namespace jag::game {
    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    shared_ptr BuildAnimationMain::GetConstructedAsset() const;

    // 0x1001cd990: the linker folded this into graphics::PointLightIndicesEffect::GetVisiblePointLights(), which has identical code
    shared_ptr BuildAnimationMain::GetRequestData();

    // 0x100649c90, 592 bytes, base-object constructor, placed by class name and debug map
    // BuildAnimationMain::BuildAnimationMain(int, shared_ptr<graphics::Animation> const&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&&, Array<unsigned int, eastl::allocator> const&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet> const&)
    void BuildAnimationMain::BuildAnimationMain(int param_1, shared_ptr* param_2, Array* param_3, Array* param_4,
                                                shared_ptr* param_5, shared_ptr* param_6) {
        undefined1* this_00;
        char cVar2;
        Model* pMVar4;
        long lVar5;
        TextureManager* this_01;
        Array* pAVar6;
        shared_ptr local_48;

        new (this) AssetJob(0, param_1);
        field_0 = &PTR__BuildAnimationMain_100f0d798;
        new (m_constructedAsset, (_func_decltype_nullptr*)0)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        this_00 = m_requestData;
        new (this_00) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        if (!shared_ptr::operator_cast_to_bool(param_5)) {
            /* WARNING: Subroutine does not return */
            LogAssert("model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      23, (char*)0);
        }
        pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_5);
        cVar2 = pMVar4->IsTransformed();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!model->IsTransformed()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      24, (char*)0);
        }
        pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_5);
        cVar2 = pMVar4->TransformStarted();
        if (cVar2 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!model->TransformStarted()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      25, (char*)0);
        }
        pMVar4 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_5);
        if (pMVar4->GetConstructedState() < 2) {
            /* WARNING: Subroutine does not return */
            LogAssert("model->GetConstructedState() >= graphics::ModelConstructedState::DATA_AND_MAT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      26, (char*)0);
        }
        bucket_make_shared<BuildAnimationRequestData>((jag*)&local_48);
        shared_ptr<BuildAnimationRequestData>::operator=((shared_ptr<BuildAnimationRequestData>*)this_00, &local_48);
        local_48.~shared_ptr();
        lVar5 = shared_ptr<BuildAnimationRequestData>::operator->((shared_ptr<BuildAnimationRequestData>*)this_00);
        shared_ptr<graphics::Animation>::operator=((shared_ptr<graphics::Animation>*)(lVar5 + 64), param_2);
        lVar5 = shared_ptr<BuildAnimationRequestData>::operator->((shared_ptr<BuildAnimationRequestData>*)this_00);
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>::operator=(
            (Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>*)(lVar5 + 80), param_3);
        Array<unsigned int, BucketAllocatorEASTL>::Array<eastl::allocator>(
            (Array<unsigned int, BucketAllocatorEASTL>*)&local_48, param_4);
        lVar5 = shared_ptr<BuildAnimationRequestData>::operator->((shared_ptr<BuildAnimationRequestData>*)this_00);
        Array<unsigned int, BucketAllocatorEASTL>::operator=((Array<unsigned int, BucketAllocatorEASTL>*)(lVar5 + 104),
                                                             (Array*)&local_48);
        local_48.~Array();
        this_01 = (TextureManager*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)param_5);
        pAVar6 = (Array*)this_01->GetTextureAtlasManager();
        Array<graphics::LabelData, BucketAllocatorEASTL>::Array<eastl::allocator>(
            (Array<graphics::LabelData, BucketAllocatorEASTL>*)&local_48, pAVar6);
        lVar5 = shared_ptr<BuildAnimationRequestData>::operator->((shared_ptr<BuildAnimationRequestData>*)this_00);
        Array<graphics::LabelData, BucketAllocatorEASTL>::operator=(
            (Array<graphics::LabelData, BucketAllocatorEASTL>*)(lVar5 + 128), (Array*)&local_48);
        local_48.~Array();
        lVar5 = shared_ptr<BuildAnimationRequestData>::operator->((shared_ptr<BuildAnimationRequestData>*)this_00);
        shared_ptr<graphics::AnimKeyFrameSet>::operator=((shared_ptr<graphics::AnimKeyFrameSet>*)(lVar5 + 152),
                                                         param_6);
    }

    // 0x10064a0a0, 32 bytes, complete-object constructor, placed by class name and debug map
    // BuildAnimationMain::BuildAnimationMain(int, shared_ptr<graphics::Animation> const&, Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&&, Array<unsigned int, eastl::allocator> const&, shared_ptr<graphics::Model> const&, shared_ptr<graphics::AnimKeyFrameSet> const&)
    void BuildAnimationMain::BuildAnimationMain(int param_1, shared_ptr* param_2, Array* param_3, Array* param_4,
                                                shared_ptr* param_5, shared_ptr* param_6) {
        BuildAnimationMain(this, param_1, param_2, param_3, param_4, param_5, param_6);
    }

    // 0x10064a0c0, 128 bytes, placed by class name and debug map
    // BuildAnimationMain::RunFirst(Js5ResourceProvider*, ConfigProvider*)
    undefined* BuildAnimationMain::RunFirst(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined** ppuVar2;
        shared_ptr* extraout_RDX;
        shared_ptr local_30;

        if (m_requestData->operator_cast_to_bool()) {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30, (jag*)m_requestData,
                                                                                         extraout_RDX);
            shared_ptr<void>::operator=((shared_ptr<void>*)&field_32, &local_30);
            local_30.~shared_ptr();
            ppuVar2 = &DataStatus::READY;
        } else {
            ppuVar2 = &DataStatus::MISSING;
        }
        return *ppuVar2;
    }

    // 0x10064a140, 80 bytes, placed by class name and debug map
    // BuildAnimationMain::CreateWorker()
    BuildAnimationMain* BuildAnimationMain::CreateWorker() {
        shared_ptr local_28;

        bucket_make_shared<BuildAnimationWorker>((jag*)&local_28);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, &local_28);
        local_28.~shared_ptr();
        return this;
    }

    // 0x10064a220, 80 bytes, placed by class name and debug map
    // BuildAnimationMain::DecodeResult(shared_ptr<void> const&)
    BuildAnimationMain* BuildAnimationMain::DecodeResult(shared_ptr* param_1) {
        BuildAnimationResultData* pBVar2;
        shared_ptr* in_RDX;

        if (shared_ptr::operator_cast_to_bool(in_RDX)) {
            pBVar2 = (BuildAnimationResultData*)in_RDX->end();
            PostDecodeResultSetup((BuildAnimationMain*)param_1, pBVar2);
        }
        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

    // 0x10064a270, 16 bytes, placed by class name and debug map
    // BuildAnimationMain::PostDecodeResultSetup(BuildAnimationResultData&)
    void BuildAnimationMain::PostDecodeResultSetup(BuildAnimationResultData* param_1) {
        shared_ptr<graphics::Animation>::operator=((shared_ptr<graphics::Animation>*)m_constructedAsset,
                                                   (shared_ptr*)param_1);
    }

} // namespace jag::game

namespace jag {
    // 0x100649ee0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildAnimationRequestData>::type bucket_make_shared<game::BuildAnimationRequestData>()
    jag* bucket_make_shared<game::BuildAnimationRequestData>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildAnimationRequestData* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(216, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildAnimationRequestData>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildAnimationRequestData>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>,
                                                                game::BuildAnimationRequestData>*&,
                                   game::BuildAnimationRequestData*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

    // 0x10064a190, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildAnimationWorker>::type bucket_make_shared<game::BuildAnimationWorker>()
    jag* bucket_make_shared<game::BuildAnimationWorker>() {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_30;
        BuildAnimationWorker* local_28[2];

        local_30 = (managed_ptr_counter_and_data*)BucketManager::Allocate(88, 0, 16);
        if (local_30 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_28[0] = placement_new<game::BuildAnimationWorker>(local_30 + 48);
            pBVar1 = placement_new<BucketRefCounter<game::BuildAnimationWorker>,
                                   managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>,
                                                                game::BuildAnimationWorker>*&,
                                   game::BuildAnimationWorker*&>(local_30, &local_30, local_28);
            pBVar1->~AutoSingleton(local_28[0]);
            pBVar1->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_28[0]);
        }
        return this;
    }

} // namespace jag
