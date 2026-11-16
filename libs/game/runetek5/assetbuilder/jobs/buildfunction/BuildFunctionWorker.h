// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildFunctionWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildFunctionWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildFunctionWorker();

        // data members, from how the methods use this: 32 bytes, the first 8 are ComponentValueMixin
        shared_ptr field_8; // offset 8
        char _unknown_24[8];
    };

    // 0x100644f70, 16 bytes, inline, placed by class name and debug map
    // BuildFunctionWorker::GetWorkerJobType() const
    undefined8 BuildFunctionWorker::GetWorkerJobType() {
        return 60;
    }

} // namespace jag::game
