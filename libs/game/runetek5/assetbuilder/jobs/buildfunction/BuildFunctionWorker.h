// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildFunctionWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~BuildFunctionWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildFunctionWorker();

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[8];
    };

    // 0x100644f70
    uint64_t BuildFunctionWorker::GetWorkerJobType() const {
        return 60;
    }

} // namespace jag::game
