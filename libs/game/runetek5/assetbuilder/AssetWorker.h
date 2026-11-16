// libs/game/runetek5/assetbuilder/AssetWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.systemheap

namespace jag::game {
    class AssetWorker {
    public:
        // virtual methods in vtable order
        virtual ~AssetWorker();
        GetResultData() const;
        AssetWorker();
        void SetRequestData(shared_ptr<void> const&);

        // data members, from how the methods use this: 32 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[24];
    };

    class AssetWorkerJob {
    public:
        ~AssetWorkerJob();
        AssetWorkerJob();
        AssetWorkerJob* operator=(AssetWorkerJob const&);
        AssetWorkerJob* operator=(AssetWorkerJob&&);
        AssetWorkerJob(shared_ptr<AssetWorker> const&, shared_ptr<AssetJob> const&);
        AssetWorkerJob(AssetWorkerJob&&);
        AssetWorkerJob(AssetWorkerJob const&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[24];
    };

    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    AssetWorker::GetResultData() const;

    // 0x100625820, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // AssetWorker::AssetWorker()
    void AssetWorker::AssetWorker() {
        _func_decltype_nullptr* in_RSI;

        field_0 = PTR_vtable_100ee7eb8 + 16;
        new (&field_8, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_24, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100627dc0, 64 bytes, base-object destructor, inline, placed by class name
    // AssetWorker::~AssetWorker()
    void AssetWorker::~AssetWorker() {
        field_0 = PTR_vtable_100ee7eb8 + 16;
        (&field_24)->~shared_ptr();
        (&field_8)->~shared_ptr();
    }

    // 0x10065a5c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // AssetWorkerJob::AssetWorkerJob(shared_ptr<AssetWorker> const&, shared_ptr<AssetJob> const&): jumps straight to the base-object constructor

    // 0x10065a610, 16 bytes, inline, placed by class name
    // AssetWorker::SetRequestData(shared_ptr<void> const&)
    void AssetWorker::SetRequestData(shared_ptr* param_1) {
        shared_ptr<void>::operator=((shared_ptr<void>*)&field_8, param_1);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AssetWorker::~AssetWorker();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    AssetWorker::~AssetWorker();

} // namespace jag::game
