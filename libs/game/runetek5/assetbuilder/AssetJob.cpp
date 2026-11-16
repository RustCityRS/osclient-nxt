// libs/game/runetek5/assetbuilder/AssetJob.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "AssetJob.h"

namespace jag::game {
    // 0x100f3e4b0
    int32_t AssetJob::ASSET_JOB_TIMEOUT[4] = {2000, 0, 0, 0};

    // 0x1039bc160
    int64_t AssetJob::nextAssetJobID;

    // 0x100024170: AssetJob::GetJobID() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10002d850: AssetJob::GetFirstResult() const has the same machine code as oldscape::option::Option<int>::GetDefaultValue() const

    // 0x100049810: AssetJob::GetResultDataDecoded() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100066b70: AssetJob::GetPriority() const has the same machine code as oldscape::widgets::Widget::GetTextColour() const

    // 0x1001117e0: AssetJob::GetStatus() const has the same machine code as oldscape::jagex3::Js5::GetIndexCrc() const

    // 0x1001a3c10: AssetJob::GetResultData() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1003cf2a0: AssetJob::GetAssetWorker() const has the same machine code as WorldMapDefaults::GetDropShadowColourRGBA() const

    // 0x10065a010
    void AssetJob::Queued() {
        int iVar1 = nextAssetJobID;
        int iVar2 = nextAssetJobID + 1;
        m_jobID = nextAssetJobID;
        nextAssetJobID = iVar2;
        if (65534 < iVar1) {
            nextAssetJobID = 0;
        }
        m_status = 1;
    }

    // 0x10065a570
    void AssetJob::AwaitWorkerReply() {
        m_status = 3;
    }

    // 0x10065a620
    void AssetJob::AwaitWorkerService() {
        m_status = 4;
    }

    // 0x10065a630
    void AssetJob::WorkerDone(AssetJobResult assetJobResult, const shared_ptr<void>& arg2) {
        field_48 = arg2;
        field_28 = assetJobResult;
        m_status = 5;
    }

    // 0x10065a660
    AssetJob::AssetJob(AssetJobType assetJobType, int arg2, int arg3)
        : m_jobID(-1), field_12(assetJobType), m_priority(arg2), m_status(0), m_assetWorker(arg3),
          field_28(4294967295) {
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) shared_ptr();
    }

    // 0x10065a6f0
    void AssetJob::AwaitWorkerSlot() {
        m_status = 2;
    }

    // 0x10065a740
    void AssetJob::Finish(const shared_ptr<void>& arg1) {
        field_64 = arg1;
        m_status = 6;
    }

    // 0x100c92b50: AssetJob::~AssetJob() has the same machine code as InlineFatalBreak()

} // namespace jag::game

namespace jag {
    // 0x10065a3e0
    shared_ptr_if_not_array<game::BuildFunctionMain>::type
    bucket_make_shared<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
        int&& arg1, shared_ptr<std::function<void()>>&& callback, unsigned int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildFunctionMain* local_38[2];

        auto local_40 = BucketManager::Allocate(144, 0, 16);
        if (local_40 == nullptr) {
            shared_ptr_if_not_array<game::BuildFunctionMain>::type result;
        } else {
            local_38[0] = placement_new<game::BuildFunctionMain, int, shared_ptr<std::function<void()>>, unsigned int&>(
                local_40 + 48, arg1, callback, arg3);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildFunctionMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildFunctionMain>, game::BuildFunctionMain>*&,
                game::BuildFunctionMain*&>(local_40, &local_40, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10065a490
    shared_ptr_if_not_array<std::function<void()>>::type
    make_shared<std::function<void()>, std::function<void()> const&>(const std::function<void()>& callback) {
        ref_counter_shared<std::function<void_()> _>* this;
        int local_34;
        function<void_()>* local_30[2];

        auto arg1 = aligned_alloc(80, 16);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<std::function<void()>>::type result;
        } else {
            local_30[0] =
                placement_new<std::function<void()>, std::function<void()> const&>((void*)((long)arg1 + 32), callback);
            local_34 = 1;
            this = placement_new<ref_counter_shared<std::function<void()>>, int, std::function<void()>*&>(
                arg1, &local_34, local_30);
            ~AutoSingleton();
            ~AutoSingleton();
            new (&result) eastl::hashtable_iterator(this, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
