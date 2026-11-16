// libs/game/runetek5/assetbuilder/AssetWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class AssetWorker {
    public:
        // virtual methods in vtable order
        virtual ~AssetWorker();
        void GetResultData() const;
        AssetWorker();
        void SetRequestData(const shared_ptr<void>& arg1);

    private:
        uint8_t _unknown_8[24];
    };

    class AssetWorkerJob {
    public:
        ~AssetWorkerJob();
        AssetWorkerJob();
        AssetWorkerJob* operator=(const AssetWorkerJob& assetWorkerJob);
        AssetWorkerJob* operator=(AssetWorkerJob&& assetWorkerJob);
        AssetWorkerJob(const shared_ptr<AssetWorker>& assetWorker, const shared_ptr<AssetJob>& assetJob);
        AssetWorkerJob(AssetWorkerJob&& assetWorkerJob);
        AssetWorkerJob(const AssetWorkerJob& assetWorkerJob);

        uint8_t _unknown_0[24];
    };

    // 0x100009d00: AssetWorker::GetResultData() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x100625820
    AssetWorker::AssetWorker() {
        new (&field_8) shared_ptr();
        new (&field_24) shared_ptr();
    }

    // 0x100627dc0
    AssetWorker::~AssetWorker() {
        field_24.~shared_ptr();
        field_8.~shared_ptr();
    }

    // 0x10065a610
    void AssetWorker::SetRequestData(const shared_ptr<void>& arg1) {
        field_8 = arg1;
    }

} // namespace jag::game
