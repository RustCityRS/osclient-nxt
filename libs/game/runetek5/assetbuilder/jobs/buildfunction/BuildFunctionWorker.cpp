// libs/game/runetek5/assetbuilder/jobs/buildfunction/BuildFunctionWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildFunctionWorker.h"

namespace jag::game {
    // 0x1006333d0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildFunctionWorker::~BuildFunctionWorker();

    // 0x1006333e0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildFunctionWorker::~BuildFunctionWorker();

    // 0x1006339a0: the linker folded this into BuildSingleLocationWorker::~BuildSingleLocationWorker(), which has identical code
    BuildFunctionWorker::~BuildFunctionWorker();

    // 0x100643300, 32 bytes, base-object constructor, placed by class name and debug map
    // BuildFunctionWorker::BuildFunctionWorker()
    void BuildFunctionWorker::BuildFunctionWorker() {
        new (this) AssetWorker();
        field_0 = &PTR__BuildFunctionWorker_100f0d548;
    }

    // 0x100643320, 16 bytes, complete-object constructor, placed by class name and debug map
    // BuildFunctionWorker::BuildFunctionWorker(): jumps straight to the base-object constructor

    // 0x100643330, 240 bytes, placed by class name and debug map
    // BuildFunctionWorker::Service(int)
    undefined* BuildFunctionWorker::Service(int param_1) {
        bool bVar1;
        shared_ptr* this_00;
        function* this_01;
        function<void()>* this_02;
        shared_ptr* extraout_RDX;
        shared_ptr* extraout_RDX_00;
        shared_ptr* extraout_RDX_01;
        shared_ptr* psVar2;
        undefined* puVar3;
        undefined4 in_register_00000034;
        MakeSharedPool<BuildFunctionResultData, 32>* this_03;
        shared_ptr local_40;
        shared_ptr local_30;

        this_03 = (MakeSharedPool<BuildFunctionResultData, 32>*)CONCAT44(in_register_00000034, param_1);
        bVar1 = field_8->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (shared_ptr*)field_8->end();
            MakeSharedPool<BuildFunctionResultData, 32>::MakeShared<>(&local_40, this_03);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            psVar2 = extraout_RDX;
            if (bVar1) {
                this_01 = (function*)shared_ptr<std::function<void()>>::operator*(
                    (shared_ptr<std::function<void()>>*)this_00);
                bVar1 = std::function::operator_cast_to_bool(this_01);
                psVar2 = extraout_RDX_00;
                if (bVar1) {
                    this_02 = (function<void()>*)shared_ptr<std::function<void()>>::operator*(
                        (shared_ptr<std::function<void()>>*)this_00);
                    std::function<void()>::operator()(this_02);
                    psVar2 = extraout_RDX_01;
                }
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_30, (jag*)&local_40,
                                                                                         psVar2);
            shared_ptr<void>::operator=((shared_ptr<void>*)&field_24, &local_30);
            local_30.~shared_ptr();
            puVar3 = DataStatus::READY;
            local_40.~shared_ptr();
        } else {
            shared_ptr<void>::reset();
            puVar3 = DataStatus::READY;
        }
        return puVar3;
    }

} // namespace jag::game
