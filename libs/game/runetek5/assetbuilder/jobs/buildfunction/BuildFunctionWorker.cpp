// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildFunctionWorker.h"

namespace jag::game {
    // 0x1006339a0: BuildFunctionWorker::~BuildFunctionWorker() has the same machine code as BuildSingleLocationWorker::~BuildSingleLocationWorker()

    // 0x100643300
    BuildFunctionWorker::BuildFunctionWorker() : AssetWorker() {}

    // 0x100643330
    uint8_t* BuildFunctionWorker::Service(int arg1) {
        shared_ptr* this_00;
        function* this_01;
        function<void()>* this_02;
        uint8_t* puVar2;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;
        shared_ptr<oldscape::ClientNpc> local_30;

        if (!(field_8->operator_cast_to_bool())) {
            field_24.reset();
            puVar2 = DataStatus::READY;
        } else {
            this_00 = (shared_ptr*)field_8->end();
            MakeSharedPool<BuildFunctionResultData, 32>::MakeShared<>();
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_01 = (function*)**this_00;
                if (std::function::operator_cast_to_bool(this_01)) {
                    this_02 = (function<void()>*)**this_00;
                    std::function<void()>::operator()(this_02);
                }
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30);
            field_24 = local_30;
            puVar2 = DataStatus::READY;
        }
        return puVar2;
    }

} // namespace jag::game
