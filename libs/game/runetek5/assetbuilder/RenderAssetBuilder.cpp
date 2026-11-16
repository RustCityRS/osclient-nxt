// libs/game/runetek5/assetbuilder/RenderAssetBuilder.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "RenderAssetBuilder.h"

namespace jag::game {
    // 0x10065a760
    uint8_t RenderAssetBuilder::SecondaryContextCreate() {
        type* arg2;
        int local_74;
        return local_69;

        uint32_t local_70 = 0;
        local_69[0] = 1;
        std::function<void()>::function<RenderAssetBuilder::SecondaryContextCreate()::__3, void>(
            (function<void()>*)(&local_69 + 1), &local_69);
        RunFunctionOnAllThreads(*((&local_69 + 1)));
        ((&local_69 + 1))->~function();
        unsigned int uVar1 = local_70.operator_cast_to_unsigned_int();
        unsigned long uVar2 = field_8.size();
        if (uVar1 < uVar2) {
            do {
                BaseApp::GetAppInstance()->ExecuteMainThreadEvents();
                local_74 = 500;
                ((&local_69 + 1))->duration<int>(local_74, arg2);
                std::this_thread::sleep_for((duration*)(&local_69 + 1));
                uVar1 = local_70.operator_cast_to_unsigned_int();
                uVar2 = field_8.size();
            } while (uVar1 < uVar2);
        }
        return local_69[0];
    }

    // 0x10065a8b0
    void RenderAssetBuilder::SecondaryContextDestroy() {
        uint8_t auVar2[16];
        int local_74;
        __4 local_70;
        function<void()> local_68[48];
        long local_38;

        local_70.field_0._0_4_ = 0;
        std::function<void()>::function<RenderAssetBuilder::SecondaryContextDestroy()::__4, void>(local_68, &local_70);
        RunFunctionOnAllThreads(*local_68);
        unsigned int uVar1 = local_70.operator_cast_to_unsigned_int();
        auVar2 = field_8.size();
        type* arg2 = auVar2._8_8_;
        if ((unsigned long)uVar1 < auVar2._0_8_) {
            do {
                local_74 = 500;
                local_68->duration<int>(local_74, arg2);
                std::this_thread::sleep_for((duration*)local_68);
                uVar1 = local_70.operator_cast_to_unsigned_int();
                auVar2 = field_8.size();
                arg2 = auVar2._8_8_;
            } while ((unsigned long)uVar1 < auVar2._0_8_);
        }
    }

    // 0x100660320
    void RenderAssetBuilder::SecondaryContextCreate()::$_3::operator()() const {
        if (((RenderDevice*)Instance())->CreateSecondaryRenderContext() == '\0') {
            *field_0 = 0;
        }
        this_thread::SetAffinity(4);
        std::__atomic_base<unsigned int, true>::operator++();
    }

    // 0x100660cc0
    void RenderAssetBuilder::SecondaryContextDestroy()::$_4::operator()() const {
        ((RenderDevice*)Instance())->DestroySecondaryRenderContext();
        std::__atomic_base<unsigned int, true>::operator++();
    }

} // namespace jag::game
