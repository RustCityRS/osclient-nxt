// libs/game/runetek5/assetbuilder/AssetJob.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class AssetJob {
    public:
        // virtual methods in vtable order
        virtual ~AssetJob();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual auto DecodeResult(const shared_ptr<void>& arg1);
        int GetJobID() const;
        Option<float>* GetFirstResult() const;
        uint8_t* GetResultDataDecoded() const;
        int GetPriority() const;
        unsigned int GetStatus() const;
        uint8_t* GetResultData() const;
        int GetAssetWorker() const;
        bool IsMissingData() const;
        bool IsFinished() const;
        bool IsSuccessful() const;
        void Queued();
        void AwaitWorkerReply();
        void AwaitWorkerService();
        void WorkerDone(AssetJobResult assetJobResult, const shared_ptr<void>& arg2);
        AssetJob(AssetJobType assetJobType, int arg2, int arg3);
        void AwaitWorkerSlot();
        void Finish(const shared_ptr<void>& arg1);
        static int32_t ASSET_JOB_TIMEOUT[4]; // = { 2000, 0, 0, 0 }
        static int64_t nextAssetJobID;

    private:
        int m_jobID;
        AssetJobType field_12;
        int m_priority;
        uint32_t m_status;
        int m_assetWorker;
        AssetJobResult field_28;
        uint8_t _unknown_32[40];
    };

    // 0x1003fa380
    bool AssetJob::IsMissingData() const {
        return field_28 == 2;
    }

    // 0x100430cc0
    bool AssetJob::IsFinished() const {
        return m_status == 6;
    }

    // 0x100430cd0
    bool AssetJob::IsSuccessful() const {
        return field_28 == 0;
    }

    // 0x100625400
    AssetJob::~AssetJob() {
        field_64.~shared_ptr();
        field_48.~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x10065ac80
    auto AssetJob::DecodeResult(const shared_ptr<void>& arg1) {
        return auto(arg1);
    }

} // namespace jag::game

namespace jag {
    // 0x1003fa8b0
    shared_ptr_if_not_array<eastl::vector<eastl::vector<int>>>::type
    make_shared<eastl::vector<eastl::vector<int>>, int>(int&& arg1) {
        ref_counter_shared<eastl::vector<eastl::vector<int>> _>* ref_counter_shared;
        int local_34;
        vector<eastl::vector<int>>* local_30[2];

        auto arg1_00 = aligned_alloc(64, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<eastl::vector<int>>>::type result;
        } else {
            local_30[0] = placement_new<eastl::vector<eastl::vector<int>>, int>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<eastl::vector<eastl::vector<int>>>, int,
                                               eastl::vector<eastl::vector<int>>*&>(arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag
