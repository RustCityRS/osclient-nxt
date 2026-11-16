// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionMain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildFunctionMain.h"

namespace jag::game {
    // 0x100102fc0: BuildFunctionMain::GetRequestData() has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x100642f40
    BuildFunctionMain::BuildFunctionMain(int arg1, const shared_ptr<std::function<void()>>& callback, int arg3) {
        shared_ptr<std::function<void()>>* this_01;
        ReturnValue local_30;

        new (this) AssetJob(60, arg1, arg3);
        uint8_t* this_00 = m_requestData;
        new (this_00) shared_ptr();
        bucket_make_shared<BuildFunctionRequestData>(&local_30);
        *this_00 = local_30;
        this_01 = (shared_ptr<std::function<void()>>*)(*this_00).operator->();
        *this_01 = callback;
    }

    // 0x100643150
    uint8_t* BuildFunctionMain::RunFirst(Js5ResourceProvider* js5ResourceProvider, ConfigProvider* configProvider) {
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

    // 0x1006431d0
    BuildFunctionMain* BuildFunctionMain::CreateWorker() {
        ReturnValue local_28;

        bucket_make_shared<BuildFunctionWorker>(&local_28);
        shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x1006432b0
    auto BuildFunctionMain::DecodeResult(const shared_ptr<void>& arg1) {
        if (arg1.operator_cast_to_bool() != '\0') {
            arg1.end();
        }
        return auto(arg1);
    }

    // 0x1006432f0
    void BuildFunctionMain::PostDecodeResultSetup(BuildFunctionResultData& buildFunctionResultData) {}

} // namespace jag::game

namespace jag {
    // 0x100642ff0
    shared_ptr_if_not_array<game::BuildFunctionRequestData>::type bucket_make_shared<game::BuildFunctionRequestData>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildFunctionRequestData* local_28[2];

        auto local_30 = BucketManager::Allocate(64, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildFunctionRequestData>::type result;
        } else {
            local_28[0] = placement_new<game::BuildFunctionRequestData>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<BucketRefCounter<game::BuildFunctionRequestData>,
                              managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionRequestData>,
                                                           game::BuildFunctionRequestData>*&,
                              game::BuildFunctionRequestData*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100643220
    shared_ptr_if_not_array<game::BuildFunctionWorker>::type bucket_make_shared<game::BuildFunctionWorker>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildFunctionWorker* local_28[2];

        auto local_30 = BucketManager::Allocate(88, 0, 16);
        if (local_30 == nullptr) {
            shared_ptr_if_not_array<game::BuildFunctionWorker>::type result;
        } else {
            local_28[0] = placement_new<game::BuildFunctionWorker>(local_30 + 48);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildFunctionWorker>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionWorker>, game::BuildFunctionWorker>*&,
                game::BuildFunctionWorker*&>(local_30, &local_30, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
