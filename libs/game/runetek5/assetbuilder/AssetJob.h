// libs/game/runetek5/assetbuilder/AssetJob.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class AssetJob {
    public:
        // virtual methods in vtable order
        virtual ~AssetJob();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        virtual DecodeResult(shared_ptr<void> const&);
        GetJobID() const;
        GetFirstResult() const;
        GetResultDataDecoded() const;
        GetPriority() const;
        GetStatus() const;
        GetResultData() const;
        GetAssetWorker() const;
        bool IsMissingData() const;
        bool IsFinished() const;
        bool IsSuccessful() const;
        void Queued();
        void AwaitWorkerReply();
        void AwaitWorkerService();
        void WorkerDone(AssetJobResult, shared_ptr<void> const&);
        AssetJob(AssetJobType, int, int);
        void AwaitWorkerSlot();
        void Finish(shared_ptr<void> const&);
        static /* 16 bytes */ ASSET_JOB_TIMEOUT; // = { 2000, 0, 0, 0 }
        static /* 8 bytes */ nextAssetJobID;

        // data members, from how the methods use this: 72 bytes
        undefined* field_0;  // offset 0, vtable pointer
        int field_8;         // offset 8
        undefined4 field_12; // offset 12
        undefined4 field_16; // offset 16
        undefined4 field_20; // offset 20
        undefined4 field_24; // offset 24
        undefined4 field_28; // offset 28
        char _unknown_32[40];
    };

    // 0x1003fa380, 16 bytes, inline, placed by class name and debug map
    // AssetJob::IsMissingData() const
    bool AssetJob::IsMissingData() {
        return field_28 == 2;
    }

    // 0x100430cc0, 16 bytes, inline, placed by class name
    // AssetJob::IsFinished() const
    bool AssetJob::IsFinished() {
        return field_20 == 6;
    }

    // 0x100430cd0, 16 bytes, inline, placed by class name
    // AssetJob::IsSuccessful() const
    bool AssetJob::IsSuccessful() {
        return field_28 == 0;
    }

    // 0x100625400, 64 bytes, base-object destructor, inline, placed by class name
    // AssetJob::~AssetJob()
    void AssetJob::~AssetJob() {
        field_0 = PTR_vtable_100ee85f0 + 16;
        (&field_64)->~shared_ptr();
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
    }

    // 0x10065ac80, 32 bytes, inline, placed by class name
    // AssetJob::DecodeResult(shared_ptr<void> const&)
    AssetJob* AssetJob::DecodeResult(shared_ptr* param_1) {
        shared_ptr* in_RDX;

        new (this) shared_ptr<oldscape::dash3d::Decor>(in_RDX);
        return this;
    }

} // namespace jag::game

namespace jag {
    // 0x1003fa8b0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator> >::type make_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(int&&)
    jag* make_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        vector* local_30[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                              int, eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*&>(
                    pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag
