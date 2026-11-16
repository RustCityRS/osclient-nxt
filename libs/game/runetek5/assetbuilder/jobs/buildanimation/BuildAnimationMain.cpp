// libs/game/runetek5/assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildAnimationMain.h"

namespace jag::game {
    // 0x100102fc0: BuildAnimationMain::GetConstructedAsset() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1001cd990: BuildAnimationMain::GetRequestData() has the same machine code as graphics::PointLightIndicesEffect::GetVisiblePointLights()

    // 0x100649c90
    BuildAnimationMain::BuildAnimationMain(
        int arg1, const shared_ptr<graphics::Animation>& animation,
        Array<shared_ptr<graphics::AnimationFrameRT5>, BucketAllocatorEASTL>&& animationFrameRT5s,
        const Array<unsigned int>& arg4, const shared_ptr<graphics::Model>& model,
        const shared_ptr<graphics::AnimKeyFrameSet>& animKeyFrameSet)
        : AssetJob(0, arg1, -1) {
        ReturnValue local_48;

        uint8_t* this_00 = m_requestData;
        new (this_00) shared_ptr();
        if (!(model.operator_cast_to_bool())) {
            LogAssert("model",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      23, nullptr);
        }
        auto pMVar3 = model.operator->();
        if (pMVar3->IsTransformed()) {
            LogAssert("!model.IsTransformed()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      24, nullptr);
        }
        pMVar3 = (Model*)model.operator->();
        if (pMVar3->TransformStarted()) {
            LogAssert("!model.TransformStarted()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      25, nullptr);
        }
        pMVar3 = (Model*)model.operator->();
        if (pMVar3->GetConstructedState() < 2) {
            LogAssert("model.GetConstructedState() >= graphics::ModelConstructedState::DATA_AND_MAT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildanimation/BuildAnimationMain.cpp",
                      26, nullptr);
        }
        bucket_make_shared<BuildAnimationRequestData>(&local_48);
        *this_00 = local_48;
        long lVar4 = (*this_00).operator->();
        (*((lVar4 + 64))) = animation;
        lVar4 = (*this_00).operator->();
        (*((lVar4 + 80))) = animationFrameRT5s;
        local_48.Array<eastl::allocator>(arg4);
        lVar4 = (*this_00).operator->();
        (*((lVar4 + 104))) = local_48;
        auto this_01 = model.operator->();
        auto labelDatas = this_01->GetTextureAtlasManager();
        local_48.Array<eastl::allocator>(*labelDatas);
        lVar4 = (*this_00).operator->();
        (*((lVar4 + 128))) = local_48;
        lVar4 = (*this_00).operator->();
        (*((lVar4 + 152))) = animKeyFrameSet;
    }

    // 0x10064a0c0
    uint8_t* BuildAnimationMain::RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
        uint8_t** ppuVar2;
        shared_ptr<oldscape::ClientNpc> local_30;

        if (m_requestData->operator_cast_to_bool() == '\0') {
            ppuVar2 = &DataStatus::MISSING;
        } else {
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30);
            field_32 = local_30;
            ppuVar2 = &DataStatus::READY;
        }
        return *ppuVar2;
    }

    // 0x10064a140
    BuildAnimationMain* BuildAnimationMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildAnimationWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x10064a220
    auto BuildAnimationMain::DecodeResult(const shared_ptr<void>& arg1) {
        BuildAnimationResultData* buildAnimationResultData;

        if (arg1.operator_cast_to_bool() != '\0') {
            buildAnimationResultData = (BuildAnimationResultData*)arg1.end();
            PostDecodeResultSetup(*buildAnimationResultData);
        }
        return auto(arg1);
    }

    // 0x10064a270
    void BuildAnimationMain::PostDecodeResultSetup(BuildAnimationResultData& buildAnimationResultData) {
        *m_constructedAsset = buildAnimationResultData;
    }

} // namespace jag::game

namespace jag {
    // 0x100649ee0
    shared_ptr_if_not_array<game::BuildAnimationRequestData>::type
    bucket_make_shared<game::BuildAnimationRequestData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildAnimationRequestData* local_28[2];

        auto local_30 = BucketManager::Allocate(216, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildAnimationRequestData>::type result;
        } else {
            local_28[0] = placement_new<game::BuildAnimationRequestData>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildAnimationRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationRequestData>,
                                                           game::BuildAnimationRequestData>*&,
                              game::BuildAnimationRequestData*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10064a190
    shared_ptr_if_not_array<game::BuildAnimationWorker>::type bucket_make_shared<game::BuildAnimationWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildAnimationWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(88, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildAnimationWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildAnimationWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildAnimationWorker>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildAnimationWorker>,
                                                           game::BuildAnimationWorker>*&,
                              game::BuildAnimationWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
